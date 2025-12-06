; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl DWORD crt_file.c_setReadonlyAttribute_FUN_00600c30(char * filename, DWORD file_attributes)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; typedef DWORD ulong Stack[0x8]:4   file_attributes
;
; XREF[3]:
;   core_inivar.cpp_readIniData_FUN_004fbd90 at 004fbda3
;   core_main.c_initializeGameSystems_FUN_00507a60 at 00507aeb
;   engine_dosio.c_setFileAttributes_FUN_004819f0 at 00481a09
;
; Referenced Globals:
;   SetFileAttributesA* SetFileAttributesA = 002121a0
;
; Called Functions:
;   crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc
;   crt_file.c_get_file_attributes_FUN_006082e0
;   SetFileAttributesA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00600c30
        ;   Label: crt_file.c_setReadonlyAttribute_FUN_00600c30
    MOV EDX,dword ptr [ESP + 0x8]       ; 00600c31
    PUSH EDX                            ; 00600c35
    CALL crt_file.c_get_file_attributes_FUN_006082e0 ; 00600c36 | DWORD crt_file.c_get_file_attributes_FUN_006082e0(char * filename)
        ;   XREF to: 006082e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00600c3b
    CMP EAX,-0x1                        ; 00600c3e
    JNZ 0x00600c4a                      ; 00600c41 | LAB_00600c4a
        ;   XREF to: 00600c4a (CONDITIONAL_JUMP)
    CALL crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc ; 00600c43 | DWORD crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc()
        ;   XREF to: 006083fc (UNCONDITIONAL_CALL)
    POP EBX                             ; 00600c48
    RET                                 ; 00600c49
    MOV DL,byte ptr [ESP + 0xc]         ; 00600c4a
        ;   Label: LAB_00600c4a
    AND AL,0xfe                         ; 00600c4e
    TEST DL,0x80                        ; 00600c50
    JNZ 0x00600c57                      ; 00600c53 | LAB_00600c57
        ;   XREF to: 00600c57 (CONDITIONAL_JUMP)
    OR AL,0x1                           ; 00600c55
    PUSH EAX                            ; 00600c57
        ;   Label: LAB_00600c57
    MOV EBX,dword ptr [ESP + 0xc]       ; 00600c58
    PUSH EBX                            ; 00600c5c
    CALL dword ptr CS:[0x611628]        ; 00600c5d | SetFileAttributesA * SetFileAttributesA
    TEST EAX,EAX                        ; 00600c64
    JNZ 0x00600c6f                      ; 00600c66 | LAB_00600c6f
        ;   XREF to: 00600c6f (CONDITIONAL_JUMP)
    CALL crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc ; 00600c68 | DWORD crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc()
        ;   XREF to: 006083fc (UNCONDITIONAL_CALL)
    POP EBX                             ; 00600c6d
    RET                                 ; 00600c6e
    XOR EAX,EAX                         ; 00600c6f
        ;   Label: LAB_00600c6f
    POP EBX                             ; 00600c71
    RET                                 ; 00600c72

