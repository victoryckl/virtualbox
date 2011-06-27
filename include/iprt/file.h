#include <iprt/fs.h>
#ifdef IN_RING3
#endif /* IN_RING3 */
RTDECL(int)  RTFileOpen(PRTFILE pFile, const char *pszFilename, uint64_t fOpen);
RTDECL(int)  RTFileOpenF(PRTFILE pFile, uint64_t fOpen, const char *pszFilenameFmt, ...);
RTDECL(int)  RTFileOpenV(PRTFILE pFile, uint64_t fOpen, const char *pszFilenameFmt, va_list va);
RTDECL(int)  RTFileOpenBitBucket(PRTFILE phFile, uint64_t fAccess);
RTDECL(int)  RTFileClose(RTFILE File);
RTDECL(int) RTFileFromNative(PRTFILE pFile, RTHCINTPTR uNative);
RTDECL(RTHCINTPTR) RTFileToNative(RTFILE File);
RTDECL(int)  RTFileDelete(const char *pszFilename);
RTDECL(int)  RTFileSeek(RTFILE File, int64_t offSeek, unsigned uMethod, uint64_t *poffActual);
RTDECL(int)  RTFileRead(RTFILE File, void *pvBuf, size_t cbToRead, size_t *pcbRead);
RTDECL(int)  RTFileReadAt(RTFILE File, RTFOFF off, void *pvBuf, size_t cbToRead, size_t *pcbRead);
RTDECL(int)  RTFileWrite(RTFILE File, const void *pvBuf, size_t cbToWrite, size_t *pcbWritten);
RTDECL(int)  RTFileWriteAt(RTFILE File, RTFOFF off, const void *pvBuf, size_t cbToWrite, size_t *pcbWritten);
RTDECL(int)  RTFileFlush(RTFILE File);
RTDECL(int)  RTFileSetSize(RTFILE File, uint64_t cbSize);
RTDECL(int)  RTFileGetSize(RTFILE File, uint64_t *pcbSize);
RTDECL(RTFOFF) RTFileGetMaxSize(RTFILE File);
RTDECL(int) RTFileGetMaxSizeEx(RTFILE File, PRTFOFF pcbMax);
RTDECL(RTFOFF) RTFileGetMaxSize(RTFILE File);
RTDECL(bool) RTFileIsValid(RTFILE File);
RTDECL(int)  RTFileLock(RTFILE File, unsigned fLock, int64_t offLock, uint64_t cbLock);
RTDECL(int)  RTFileChangeLock(RTFILE File, unsigned fLock, int64_t offLock, uint64_t cbLock);
RTDECL(int)  RTFileUnlock(RTFILE File, int64_t offLock, uint64_t cbLock);
RTDECL(int) RTFileQueryInfo(RTFILE File, PRTFSOBJINFO pObjInfo, RTFSOBJATTRADD enmAdditionalAttribs);
RTDECL(int) RTFileSetTimes(RTFILE File, PCRTTIMESPEC pAccessTime, PCRTTIMESPEC pModificationTime,
                           PCRTTIMESPEC pChangeTime, PCRTTIMESPEC pBirthTime);
RTDECL(int) RTFileGetTimes(RTFILE File, PRTTIMESPEC pAccessTime, PRTTIMESPEC pModificationTime,
                           PRTTIMESPEC pChangeTime, PRTTIMESPEC pBirthTime);
RTDECL(int) RTFileSetMode(RTFILE File, RTFMODE fMode);
RTDECL(int) RTFileGetMode(RTFILE File, uint32_t *pfMode);
RTDECL(int) RTFileSetOwner(RTFILE File, uint32_t uid, uint32_t gid);
RTDECL(int) RTFileGetOwner(RTFILE File, uint32_t *pUid, uint32_t *pGid);
RTDECL(int) RTFileIoCtl(RTFILE File, unsigned long ulRequest, void *pvData, unsigned cbData, int *piRet);
RTDECL(int) RTFileQueryFsSizes(RTFILE hFile, PRTFOFF pcbTotal, RTFOFF *pcbFree,
                               uint32_t *pcbBlock, uint32_t *pcbSector);
#ifdef IN_RING3
