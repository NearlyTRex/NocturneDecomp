; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_errno_c_convertWindowsErrorToErrno_FUN_00608390(DWORD windows_error)
;
; Parameters:
; DWORD            Stack[0x4]:4   windows_error
;
; XREF[6]:
;   crt_env.c_putenv_internal_FUN_0060ee80 at 0060effc
;   crt_errno.c___set_errno_FUN_006083fc at 00608404
;   crt_io.c__findfirst_FUN_006021f0 at 00602233
;   crt_io.c__findnext_FUN_00602300 at 00602344
;   crt_io.c_access_FUN_0060c9f0 at 0060ca12
;   crt_process.c_spawn_FUN_006105a0 at 00610634
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
    CALL crt_errno.c_SetWindowsError_FUN_006027c8 ; 00608396
        ;   XREF to: 006027c8 (UNCONDITIONAL_CALL)  ; void crt_errno.c_SetWindowsError_FUN_006027c8(DWORD windows_error_code)
    ADD ESP,0x4                         ; 0060839b
    CMP EBX,0x7b                        ; 0060839e
    JNZ 0x006083a7                      ; 006083a1
        ;   XREF to: 006083a7 (CONDITIONAL_JUMP)  ; LAB_006083a7
    PUSH 0x1                            ; 006083a3
    JMP 0x006083ed                      ; 006083a5
        ;   XREF to: 006083ed (UNCONDITIONAL_JUMP)  ; LAB_006083ed
    CMP EBX,0xce                        ; 006083a7
        ;   Label: LAB_006083a7
    JNZ 0x006083c0                      ; 006083ad
        ;   XREF to: 006083c0 (CONDITIONAL_JUMP)  ; LAB_006083c0
    PUSH 0x9                            ; 006083af
    CALL crt_errno.c_setErrno_FUN_00602790 ; 006083b1
        ;   XREF to: 00602790 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_00602790(int error_code)
    ADD ESP,0x4                         ; 006083b6
    MOV EAX,0xffffffff                  ; 006083b9
    POP EBX                             ; 006083be
    RET                                 ; 006083bf
    CMP EBX,0xb7                        ; 006083c0
        ;   Label: LAB_006083c0
    JNZ 0x006083d9                      ; 006083c6
        ;   XREF to: 006083d9 (CONDITIONAL_JUMP)  ; LAB_006083d9
    PUSH 0x7                            ; 006083c8
    CALL crt_errno.c_setErrno_FUN_00602790 ; 006083ca
        ;   XREF to: 00602790 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_00602790(int error_code)
    ADD ESP,0x4                         ; 006083cf
    MOV EAX,0xffffffff                  ; 006083d2
    POP EBX                             ; 006083d7
    RET                                 ; 006083d8
    CMP EBX,0x13                        ; 006083d9
        ;   Label: LAB_006083d9
    JBE 0x006083e3                      ; 006083dc
        ;   XREF to: 006083e3 (CONDITIONAL_JUMP)  ; LAB_006083e3
    MOV EBX,0x13                        ; 006083de
    MOV EBX,dword ptr [EBX + 0x6851fd]  ; 006083e3 | g_LookupTableStruct | DAT_00685210
        ;   Label: LAB_006083e3
    SAR EBX,0x18                        ; 006083e9
    PUSH EBX                            ; 006083ec
    CALL crt_errno.c_setErrno_FUN_00602790 ; 006083ed
        ;   XREF to: 00602790 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_00602790(int error_code)
        ;   Label: LAB_006083ed
    ADD ESP,0x4                         ; 006083f2
    MOV EAX,0xffffffff                  ; 006083f5
    POP EBX                             ; 006083fa
    RET                                 ; 006083fb

