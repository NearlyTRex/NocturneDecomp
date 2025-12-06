; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int crt_errno.c_convertWindowsErrorToErrno_FUN_00608390(DWORD windows_error)
;
; Parameters:
; typedef DWORD ulong Stack[0x4]:4   windows_error
;
; XREF[7]:
;   crt_env.c_putenv_internal_FUN_0060ee80 at 0060effc
;   crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc at 00608404
;   crt_io.c_check_file_access_FUN_0060c9f0 at 0060ca12
;   crt_io.c_findFirstFileWrapper_FUN_006021f0 at 00602233
;   crt_io.c_findNextFileWrapper_FUN_00602300 at 00602344
;   crt_process.c_spawn_FUN_006105a0 at 00610634
;   crt_unknown.c_FUN_0060fb40 at 0060fca0
;
; Referenced Globals:
;   undefined4 g_LookupTableStruct
;   undefined4 DAT_00685210
;
; Called Functions:
;   crt_errno.c_setErrno_FUN_00602790
;   crt_errno.c_SetWindowsError_FUN_006027c8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00608390
        ;   Label: crt_errno.c_convertWindowsErrorToErrno_FUN_00608390
    MOV EBX,dword ptr [ESP + 0x8]       ; 00608391
    PUSH EBX                            ; 00608395
    CALL crt_errno.c_SetWindowsError_FUN_006027c8 ; 00608396 | void crt_errno.c_SetWindowsError_FUN_006027c8(DWORD windows_error_code)
        ;   XREF to: 006027c8 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0060839b
    CMP EBX,0x7b                        ; 0060839e
    JNZ 0x006083a7                      ; 006083a1 | LAB_006083a7
        ;   XREF to: 006083a7 (CONDITIONAL_JUMP)
    PUSH 0x1                            ; 006083a3
    JMP 0x006083ed                      ; 006083a5 | LAB_006083ed
        ;   XREF to: 006083ed (UNCONDITIONAL_JUMP)
    CMP EBX,0xce                        ; 006083a7
        ;   Label: LAB_006083a7
    JNZ 0x006083c0                      ; 006083ad | LAB_006083c0
        ;   XREF to: 006083c0 (CONDITIONAL_JUMP)
    PUSH 0x9                            ; 006083af
    CALL crt_errno.c_setErrno_FUN_00602790 ; 006083b1 | void crt_errno.c_setErrno_FUN_00602790(int error_code)
        ;   XREF to: 00602790 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 006083b6
    MOV EAX,0xffffffff                  ; 006083b9
    POP EBX                             ; 006083be
    RET                                 ; 006083bf
    CMP EBX,0xb7                        ; 006083c0
        ;   Label: LAB_006083c0
    JNZ 0x006083d9                      ; 006083c6 | LAB_006083d9
        ;   XREF to: 006083d9 (CONDITIONAL_JUMP)
    PUSH 0x7                            ; 006083c8
    CALL crt_errno.c_setErrno_FUN_00602790 ; 006083ca | void crt_errno.c_setErrno_FUN_00602790(int error_code)
        ;   XREF to: 00602790 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 006083cf
    MOV EAX,0xffffffff                  ; 006083d2
    POP EBX                             ; 006083d7
    RET                                 ; 006083d8
    CMP EBX,0x13                        ; 006083d9
        ;   Label: LAB_006083d9
    JBE 0x006083e3                      ; 006083dc | LAB_006083e3
        ;   XREF to: 006083e3 (CONDITIONAL_JUMP)
    MOV EBX,0x13                        ; 006083de
    MOV EBX,dword ptr [EBX + 0x6851fd]  ; 006083e3 | undefined4 DAT_00685210
        ;   Label: LAB_006083e3
    SAR EBX,0x18                        ; 006083e9
    PUSH EBX                            ; 006083ec
    CALL crt_errno.c_setErrno_FUN_00602790 ; 006083ed | void crt_errno.c_setErrno_FUN_00602790(int error_code)
        ;   Label: LAB_006083ed
        ;   XREF to: 00602790 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 006083f2
    MOV EAX,0xffffffff                  ; 006083f5
    POP EBX                             ; 006083fa
    RET                                 ; 006083fb

