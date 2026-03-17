; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_dosio_c_copyFileTimestamp_FUN_00481910(char *source_file,char *dest_file)
;
; Parameters:
; char *           Stack[0x4]:4   source_file
; char *           Stack[0x8]:4   dest_file
; Local Variables:
; _stat            Stack[-0x50]:70  _Stack_50
; _utimbuf         Stack[-0x8]:8  local_8
;
; XREF[7]:
;   engine_fileio.cpp_CCheckOutItem_processFiles_FUN_004b4220 at 004b4a04
;   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 at 004bbadc
;   engine_fileio.cpp_CFileManager_extractFileWithTimestamp_FUN_004b7d50 at 004b7e75
;   engine_fileio.cpp_CFileManager_managePodFiles_FUN_004b86b0 at 004b9d26
;   engine_fileio.cpp_copyFileTimestamp_FUN_004b31e0 at 004b31ea
;   engine_fileio.cpp_getLatestFileFromRepository_FUN_004b3220 at 004b34d0
;   engine_fileio.cpp_synchronizeFilesToDirectory_FUN_004bc650 at 004bc9b9
;
; Called Functions:
;   crt_io.c__utime_00600c1e
;   crt_io.c_getFileStat_FUN_00600c18
;
; *****************************************************************************

section .text

    SUB ESP,0x50                        ; 00481910
        ;   Label: engine_dosio.c_copyFileTimestamp_FUN_00481910
    MOV EAX,dword ptr [ESP + 0x58]      ; 00481913
    MOV dword ptr [ESP + 0x48],EAX      ; 00481917
    MOV dword ptr [ESP + 0x4c],EAX      ; 0048191b
    MOV EAX,ESP                         ; 0048191f
    PUSH EAX                            ; 00481921
    MOV EDX,dword ptr [ESP + 0x58]      ; 00481922
    PUSH EDX                            ; 00481926
    CALL crt_io.c_getFileStat_FUN_00600c18 ; 00481927
        ;   XREF to: 00600c18 (UNCONDITIONAL_CALL)  ; int crt_io.c_getFileStat_FUN_00600c18(char * filename, _stat * file_info)
    ADD ESP,0x8                         ; 0048192c
    TEST EAX,EAX                        ; 0048192f
    JNZ 0x0048193b                      ; 00481931
        ;   XREF to: 0048193b (CONDITIONAL_JUMP)  ; LAB_0048193b
    MOV EAX,dword ptr [ESP + 0x1a]      ; 00481933
    MOV dword ptr [ESP + 0x48],EAX      ; 00481937
    LEA EAX,[ESP + 0x48]                ; 0048193b
        ;   Label: LAB_0048193b
    PUSH EAX                            ; 0048193f
    MOV ECX,dword ptr [ESP + 0x58]      ; 00481940
    PUSH ECX                            ; 00481944
    CALL crt_io.c__utime_00600c1e       ; 00481945
        ;   XREF to: 00600c1e (UNCONDITIONAL_CALL)  ; int crt_io.c__utime_00600c1e(char * filename, _utimbuf * timestamps)
    ADD ESP,0x8                         ; 0048194a
    TEST EAX,EAX                        ; 0048194d
    SETZ AL                             ; 0048194f
    AND EAX,0xff                        ; 00481952
    ADD ESP,0x50                        ; 00481957
    RET                                 ; 0048195a

