; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; HANDLE __cdecl crt_io_c_get_handle_FUN_006109f0(int fd)
;
; Parameters:
; int              Stack[0x4]:4   fd
;
; XREF[1]:
;   crt_process.c_build_file_info_env_FUN_0060ffd0 at 00610053
;
; Referenced Globals:
;   uint g_MaxHandleCount = 0x14
;   SIOControlBlock* g_IOControlBlock = 00000000
;
; Called Functions:
;   crt_errno.c_setErrno_FUN_00602790
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 006109f0
        ;   Label: crt_io.c_get_handle_FUN_006109f0
    TEST EAX,EAX                        ; 006109f4
    JL 0x00610a00                       ; 006109f6
        ;   XREF to: 00610a00 (CONDITIONAL_JUMP)  ; LAB_00610a00
    CMP EAX,dword ptr [0x00685214]      ; 006109f8 | g_MaxHandleCount
    JBE 0x00610a10                      ; 006109fe
        ;   XREF to: 00610a10 (CONDITIONAL_JUMP)  ; LAB_00610a10
    PUSH 0x4                            ; 00610a00
        ;   Label: LAB_00610a00
    CALL crt_errno.c_setErrno_FUN_00602790 ; 00610a02
        ;   XREF to: 00602790 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_00602790(int error_code)
    MOV EAX,0xffffffff                  ; 00610a07
    ADD ESP,0x4                         ; 00610a0c
    RET                                 ; 00610a0f
    LEA EDX,[EAX*0x4 + 0x0]             ; 00610a10
        ;   Label: LAB_00610a10
    MOV EAX,[0x0068526c]                ; 00610a17 | g_IOControlBlock
    MOV EAX,dword ptr [EDX + EAX*0x1]   ; 00610a1c
    RET                                 ; 00610a1f

