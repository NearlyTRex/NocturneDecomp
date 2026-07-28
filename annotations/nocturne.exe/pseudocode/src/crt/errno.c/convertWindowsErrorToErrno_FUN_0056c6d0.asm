; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_errno_c_convertWindowsErrorToErrno_FUN_0056c6d0(DWORD windows_error)
;
; Parameters:
; DWORD            Stack[0x4]:4   windows_error
;
; XREF[5]:
;   FUN_0056c6b8 at 0056c6c4
;   FUN_0056f170 at 0056f192
;   FUN_005740b0 at 00574210
;   crt_env.c_putenv_internal_FUN_00573930 at 00573aac
;   crt_errno.c___set_errno_FUN_0056c73c at 0056c744
;
; Referenced Globals:
;   undefined4 DAT_005c1da9
;   undefined4 DAT_005c1dbc
;
; Called Functions:
;   crt_errno.c_setErrno_FUN_00568e80
;   crt_errno.c_SetWindowsError_FUN_00568eb8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056c6d0
        ;   Label: crt_errno.c_convertWindowsErrorToErrno_FUN_0056c6d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0056c6d1
    PUSH EBX                            ; 0056c6d5
    CALL crt_errno.c_SetWindowsError_FUN_00568eb8 ; 0056c6d6
        ;   XREF to: 00568eb8 (UNCONDITIONAL_CALL)  ; void crt_errno.c_SetWindowsError_FUN_00568eb8(DWORD windows_error_code)
    ADD ESP,0x4                         ; 0056c6db
    CMP EBX,0x7b                        ; 0056c6de
    JNZ 0x0056c6e7                      ; 0056c6e1
        ;   XREF to: 0056c6e7 (CONDITIONAL_JUMP)  ; LAB_0056c6e7
    PUSH 0x1                            ; 0056c6e3
    JMP 0x0056c72d                      ; 0056c6e5
        ;   XREF to: 0056c72d (UNCONDITIONAL_JUMP)  ; LAB_0056c72d
    CMP EBX,0xce                        ; 0056c6e7
        ;   Label: LAB_0056c6e7
    JNZ 0x0056c700                      ; 0056c6ed
        ;   XREF to: 0056c700 (CONDITIONAL_JUMP)  ; LAB_0056c700
    PUSH 0x9                            ; 0056c6ef
    CALL crt_errno.c_setErrno_FUN_00568e80 ; 0056c6f1
        ;   XREF to: 00568e80 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_00568e80(int error_code)
    ADD ESP,0x4                         ; 0056c6f6
    MOV EAX,0xffffffff                  ; 0056c6f9
    POP EBX                             ; 0056c6fe
    RET                                 ; 0056c6ff
    CMP EBX,0xb7                        ; 0056c700
        ;   Label: LAB_0056c700
    JNZ 0x0056c719                      ; 0056c706
        ;   XREF to: 0056c719 (CONDITIONAL_JUMP)  ; LAB_0056c719
    PUSH 0x7                            ; 0056c708
    CALL crt_errno.c_setErrno_FUN_00568e80 ; 0056c70a
        ;   XREF to: 00568e80 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_00568e80(int error_code)
    ADD ESP,0x4                         ; 0056c70f
    MOV EAX,0xffffffff                  ; 0056c712
    POP EBX                             ; 0056c717
    RET                                 ; 0056c718
    CMP EBX,0x13                        ; 0056c719
        ;   Label: LAB_0056c719
    JBE 0x0056c723                      ; 0056c71c
        ;   XREF to: 0056c723 (CONDITIONAL_JUMP)  ; LAB_0056c723
    MOV EBX,0x13                        ; 0056c71e
    MOV EBX,dword ptr [EBX + 0x5c1da9]  ; 0056c723 | DAT_005c1dbc | DAT_005c1da9
        ;   Label: LAB_0056c723
    SAR EBX,0x18                        ; 0056c729
    PUSH EBX                            ; 0056c72c
    CALL crt_errno.c_setErrno_FUN_00568e80 ; 0056c72d
        ;   XREF to: 00568e80 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_00568e80(int error_code)
        ;   Label: LAB_0056c72d
    ADD ESP,0x4                         ; 0056c732
    MOV EAX,0xffffffff                  ; 0056c735
    POP EBX                             ; 0056c73a
    RET                                 ; 0056c73b

