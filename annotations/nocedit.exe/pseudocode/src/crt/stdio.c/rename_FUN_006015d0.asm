; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallStack int crt_stdio.c_rename_FUN_006015d0(char * old_filename, char * new_filename)
;
; Parameters:
; char *           Stack[0x4]:4   old_filename
; char *           Stack[0x8]:4   new_filename
;
; XREF[3]:
;   engine_fileio.cpp_CCheckOutItem_processFiles_FUN_004b4220 at 004b49d2
;   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 at 004bbaa9
;   engine_ini.cpp_CIni_writeProfileString_FUN_004fb660 at 004fb87d
;
; Referenced Globals:
;   MoveFileA* PTR_MoveFileA_006115f0 = 00212086
;
; Called Functions:
;   crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc
;   MoveFileA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 006015d0
        ;   Label: crt_stdio.c_rename_FUN_006015d0
    MOV EDX,dword ptr [ESP + 0xc]       ; 006015d1
    PUSH EDX                            ; 006015d5
    MOV EBX,dword ptr [ESP + 0xc]       ; 006015d6
    PUSH EBX                            ; 006015da
    CALL dword ptr CS:[0x6115f0]        ; 006015db | MoveFileA * PTR_MoveFileA_006115f0
    TEST EAX,EAX                        ; 006015e2
    JNZ 0x006015ed                      ; 006015e4 | LAB_006015ed
        ;   XREF to: 006015ed (CONDITIONAL_JUMP)
    CALL crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc ; 006015e6 | DWORD crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc()
        ;   XREF to: 006083fc (UNCONDITIONAL_CALL)
    POP EBX                             ; 006015eb
    RET                                 ; 006015ec
    XOR EAX,EAX                         ; 006015ed
        ;   Label: LAB_006015ed
    POP EBX                             ; 006015ef
    RET                                 ; 006015f0

