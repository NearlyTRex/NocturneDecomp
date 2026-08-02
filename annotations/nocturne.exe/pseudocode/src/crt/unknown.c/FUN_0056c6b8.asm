; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_0056c6b8(DWORD param_1,int param_2)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_0056c6a0 at 0056c6af
;
; Called Functions:
;   crt_errno.c_convertWindowsErrorToErrno_FUN_0056c6d0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0056c6b8
        ;   Label: crt_unknown.c_FUN_0056c6b8
    CMP dword ptr [ESP + 0x8],0x0       ; 0056c6bc
    JZ 0x0056c6cc                       ; 0056c6c1
        ;   XREF to: 0056c6cc (CONDITIONAL_JUMP)  ; LAB_0056c6cc
    PUSH EAX                            ; 0056c6c3
    CALL crt_errno.c_convertWindowsErrorToErrno_FUN_0056c6d0 ; 0056c6c4
        ;   XREF to: 0056c6d0 (UNCONDITIONAL_CALL)  ; int crt_errno.c_convertWindowsErrorToErrno_FUN_0056c6d0(DWORD windows_error)
    ADD ESP,0x4                         ; 0056c6c9
    RET                                 ; 0056c6cc
        ;   Label: LAB_0056c6cc

