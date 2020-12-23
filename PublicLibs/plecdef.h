#ifndef __PUBLIC_LIBRARY_ERROR_CODE_DEFINITION_H__
#define __PUBLIC_LIBRARY_ERROR_CODE_DEFINITION_H__

// [2015-7-8 Jim] 一般共享库错误码定义，不断按需更新中

#define PLERR_SUCCESS                        0
#define PLERR_GENERAL_FAIL                   1

// 系统错误, 调用 GetLastError() / errno 获得
#define PLERR_SYSTEM_ERROR                   2

// 内部错误, 通过函数作者特殊说明的方法获得
#define PLERR_INTERNAL_ERROR                 3

#define PLERR_FILE_NOT_FOUND                 4
#define PLERR_FILE_ALREADY_EXIST             5
#define PLERR_OBJECT_NOT_FOUND               6
#define PLERR_OBJECT_ALREADY_EXIST           7
#define PLERR_OBJECT_NOT_INITIALIZED         8
#define PLERR_OBJECT_ALREADY_INITIALIZED     9
#define PLERR_INITIALIZING_FAIL             10
#define PLERR_LIBRARY_NOT_LOADED            11
#define PLERR_LIBRARY_LOAD_FAIL             12
#define PLERR_THREAD_CREATION_FAIL          13
#define PLERR_NOT_INITIALIZED               14
#define PLERR_MEMORY_ALLOCATION             15
#define PLERR_NOT_SUPPORTED                 16
#define PLERR_NOT_IMPLEMENTED               17
#define PLERR_EXCEPTION                     18
#define PLERR_OPERATION_FAILURE             19
#define PLERR_SERIALIZATION_FAILED          20
#define PLERR_DESERIALIZATION_FAILED        21

#define PLERR_INVALID_PARAMETER             30
#define PLERR_INVALID_DISK_FORMAT           31
#define PLERR_INVALID_FILE_FORMAT           32
#define PLERR_INVALID_REQUEST               33

#define PLERR_USER_CANCELLED                60

#define PLERR_OUT_OF_MEMEORY                80
#define PLERR_INSUFFCIENT_BUFFER            81
#define PLERR_ACCESS_DENIED                 82
#define PLERR_SHARING_VIOLATION             83
#define PLERR_DEVICE_NOT_FOUND              84
#define PLERR_DEVICE_IN_USE                 85
#define PLERR_FILE_IN_USE                   86
#define PLERR_TIMEOUT                       87
#define PLERR_MAGIC_NUMBER_MISMATCH         88
#define PLERR_TOO_MUCH_DATA                 89

// [2015-7-13 Jim] 定义 JNI 操作的错误码
#define PLERR_JNI_ERROR_BASE                       3000
#define PLERR_JNI_NULL_OBJECT                    (PLERR_JNI_ERROR_BASE + 1)
#define PLERR_JNI_GetStringChars_FAILED	         (PLERR_JNI_ERROR_BASE + 2)
#define PLERR_JNI_GetXXXArrayElements_FAILED     (PLERR_JNI_ERROR_BASE + 3)
#define PLERR_JNI_GetObjectClass_FAILED          (PLERR_JNI_ERROR_BASE + 4)
#define PLERR_JNI_GetMethodID_FAILED             (PLERR_JNI_ERROR_BASE + 5)
#define PLERR_JNI_CallXXXMethod_FAILED           (PLERR_JNI_ERROR_BASE + 6)
#define PLERR_JNI_CallNonvirtualXXXMethod_FAILED (PLERR_JNI_ERROR_BASE + 7)
#define PLERR_JNI_NewByteArray_FAILED            (PLERR_JNI_ERROR_BASE + 8)
#define PLERR_JNI_FUN_EXCEPTIONS                 (PLERR_JNI_ERROR_BASE + 9)


// [2015-8-19 Jim] 定义 PKCS#11-based 封装接口的错误码
#define PLERR_SK_ERROR_BASE                       8000
#define PLERR_SK_LIBRARY_NOT_INITIATED        (PLERR_SK_ERROR_BASE + 1)
#define PLERR_SK_DEVICE_NOT_FOUND             (PLERR_SK_ERROR_BASE + 2)
#define PLERR_SK_SLOT_ID_INVALID                  (PLERR_SK_ERROR_BASE + 3)
#define PLERR_SK_OBJECT_NAME_TOO_LONG    (PLERR_SK_ERROR_BASE + 4)
#define PLERR_SK_INVALID_DATA_FORMAT         (PLERR_SK_ERROR_BASE + 5)
#define PLERR_SK_USER_NOT_LOGGED_IN        (PLERR_SK_ERROR_BASE + 6)
#define PLERR_SK_INDEX_OUT_OF_BOUND        (PLERR_SK_ERROR_BASE + 7)
#define PLERR_SK_DATA_LEN_ERROR               (PLERR_SK_ERROR_BASE + 8)
#define PLERR_SK_HARDWARE_NOT_SUPPORTED  (PLERR_SK_ERROR_BASE + 9)
#define PLERR_SK_HASH_ALG_NOT_SUPPORTED  (PLERR_SK_ERROR_BASE + 10)
#define PLERR_SK_FREE_SPACE_LOW          (PLERR_SK_ERROR_BASE + 11)
#define PLERR_SK_OFFSET_OUT_OF_DATA_LEN  (PLERR_SK_ERROR_BASE + 12)
#define PLERR_SK_WRITING_DATA_TOO_LARGE  (PLERR_SK_ERROR_BASE + 13)

#define PLERR_SK_PIN_INCORRECT                   (PLERR_SK_ERROR_BASE + 20)
#define PLERR_SK_PIN_LOCKED                        (PLERR_SK_ERROR_BASE + 21)
#define PLERR_SK_PIN_LEN_RANGE  (PLERR_SK_ERROR_BASE + 22)
#define PLERR_SK_PIN_EXPIRED    (PLERR_SK_ERROR_BASE + 23)
#define PLERR_SK_PIN_INVALID   (PLERR_SK_ERROR_BASE + 24)

#define PLERR_SK_KEY_PAIR_NOT_COMPLETE    (PLERR_SK_ERROR_BASE + 50)

#define PLERR_SK_DECRYPT_FAILED           (PLERR_SK_ERROR_BASE + 60)
#define PLERR_SK_VERIFY_NOT_PASSED     (PLERR_SK_ERROR_BASE + 61)



// [2015-8-19 Jim] 定义 Sub-process calling 错误码
#define PLERR_SPC_ERROR_BASE                       9000
// 下面的是进程间调用的【调用端进程内代码】使用的, 远程端不会使用这些值

#define PLERR_SPC_COMMANDLINE_ENCODE_FAILED  (PLERR_SPC_ERROR_BASE + 1)
#define PLERR_SPC_REMOTE_LAUNCH_FAILED       (PLERR_SPC_ERROR_BASE + 2)
#define PLERR_SPC_INVALID_PARAMETER          (PLERR_SPC_ERROR_BASE + 3)
#define PLERR_SPC_RPC_CALL_FAILED            (PLERR_SPC_ERROR_BASE + 4)
#define PLERR_SPC_INTERNAL_OBJECT_FAILED     (PLERR_SPC_ERROR_BASE + 5)
// 获取远程返回值失
#define PLERR_SPC_REMOTE_RETVAL_FAILED       (PLERR_SPC_ERROR_BASE + 6)
// 子进程准备好之前，异常了
#define PLERR_SPC_REMOTE_CRASH               (PLERR_SPC_ERROR_BASE + 7)
#define PLERR_SPC_REMOTE_TIMEOUT             (PLERR_SPC_ERROR_BASE + 8)
#define PLERR_SPC_COMPONENT_NOT_FOUND        (PLERR_SPC_ERROR_BASE + 9)

// 下面的是进程间调用的远程端使用的，本地端也可能会用到
#define PLERR_SPC_REMOTE_EXCEPTION           (PLERR_SPC_ERROR_BASE+60 + 1)
// 进程启动参数(PSP) 格式非法
#define PLERR_SPC_INVALID_PSP_FORMAT         (PLERR_SPC_ERROR_BASE+60 + 2)
// 已提示消息，调用者无需再次提示
#define PLERR_SPC_MESSAGE_HAS_BEEN_SHOWN     (PLERR_SPC_ERROR_BASE+60 + 3)
// 远程端出现系统错误
#define PLERR_SPC_REMOTE_SYSTEM_ERROR        (PLERR_SPC_ERROR_BASE+60 + 4)





#if defined(__cplusplus)

#include <stdio.h>
#include <string>
#include <sstream>

#ifdef _WIN32
#include <stdio.h>

#endif // _WIN32

class CPublicLibraryErrorA
{
    void __copy_ctor(const CPublicLibraryErrorA& err)
    {
        this->returnedCode = err.returnedCode;
        this->systemErrorCode = err.systemErrorCode;
        this->internalCode = err.internalCode;
    }

public:
    CPublicLibraryErrorA()
    {
        this->returnedCode = PLERR_SUCCESS;
        this->systemErrorCode = 0;
        this->internalCode = 0;
    }

    CPublicLibraryErrorA(unsigned int returnedCode, int systemErrorCode, unsigned int internalCode)
    {
        this->returnedCode = returnedCode;
        this->systemErrorCode = systemErrorCode;
        this->internalCode = internalCode;
    }

    CPublicLibraryErrorA(const CPublicLibraryErrorA& err)
    {
        __copy_ctor(err);
    }

    CPublicLibraryErrorA& operator=(const CPublicLibraryErrorA& err)
    {
        __copy_ctor(err);
        return *this;
    }
	
    void clear()
    {
        returnedCode = 0;
        systemErrorCode = 0;
        internalCode = 0;
        bussinessErrorMessage.clear();
    }

    bool IsSuccess()
    {
        if (returnedCode == 0)
            return true;
        else
            return false;
    }

    std::string ToString()
    {
        std::string retVal;

        if (!bussinessErrorMessage.empty())
        {
            retVal = bussinessErrorMessage;
        }
        else
        {
    char msgBuf[128];
#ifndef _MSC_VER
            snprintf(msgBuf, 127,
#else
            _snprintf_s(msgBuf, 127,
#endif
             "returnedCode=%d, systemErrorCode=%d, internalCode=0x%.8X",
             returnedCode, systemErrorCode, internalCode);

            retVal = msgBuf;
        }

        return retVal;
    }

    unsigned int returnedCode;
    int systemErrorCode;
    unsigned int internalCode;

    std::string bussinessErrorMessage;
};

#endif

#endif
