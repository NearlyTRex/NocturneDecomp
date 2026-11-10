; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005cbb70(uint param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c6d50 at 005c6e51
;
; Referenced Globals:
;   void* PTR_FlushFileBuffers_005d0560 = 001d0d8c
;   void* PTR_crt_unknown.c_FUN_005c50d4_00626600 = 005c50d4
;   void* PTR_crt_unknown.c_FUN_005c50d4_00626604 = 005c50d4
;   undefined4 DAT_006267e0
;   undefined4 DAT_00626838
;
; Called Functions:
;   crt_errno.c_setErrno_FUN_005c6450
;   crt_unknown.c_FUN_005c50d4
;   crt_unknown.c_FUN_005c862c
;   FlushFileBuffers
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cbb70
        ;   Label: crt_unknown.c_FUN_005cbb70
    PUSH ESI                            ; 005cbb71
    MOV EBX,dword ptr [ESP + 0xc]       ; 005cbb72
    XOR ESI,ESI                         ; 005cbb76
    TEST EBX,EBX                        ; 005cbb78
    JL 0x005cbb84                       ; 005cbb7a
        ;   XREF to: 005cbb84 (CONDITIONAL_JUMP)  ; LAB_005cbb84
    CMP EBX,dword ptr [0x006267e0]      ; 005cbb7c | DAT_006267e0
    JBE 0x005cbb96                      ; 005cbb82
        ;   XREF to: 005cbb96 (CONDITIONAL_JUMP)  ; LAB_005cbb96
    PUSH 0x4                            ; 005cbb84
        ;   Label: LAB_005cbb84
    CALL crt_errno.c_setErrno_FUN_005c6450 ; 005cbb86
        ;   XREF to: 005c6450 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005c6450(int error_code)
    MOV EAX,0xffffffff                  ; 005cbb8b
    ADD ESP,0x4                         ; 005cbb90
    POP ESI                             ; 005cbb93
    POP EBX                             ; 005cbb94
    RET                                 ; 005cbb95
    PUSH EBX                            ; 005cbb96
        ;   Label: LAB_005cbb96
    CALL dword ptr [0x00626600]         ; 005cbb97 | PTR_crt_unknown.c_FUN_005c50d4_00626600
    MOV EAX,[0x00626838]                ; 005cbb9d | DAT_00626838
    ADD ESP,0x4                         ; 005cbba2
    MOV EAX,dword ptr [EAX + EBX*0x4]   ; 005cbba5
    PUSH EAX                            ; 005cbba8
    CALL dword ptr CS:[0x5d0560]        ; 005cbba9 | PTR_FlushFileBuffers_005d0560
    TEST EAX,EAX                        ; 005cbbb0
    JNZ 0x005cbbbe                      ; 005cbbb2
        ;   XREF to: 005cbbbe (CONDITIONAL_JUMP)  ; LAB_005cbbbe
    CALL crt_unknown.c_FUN_005c862c     ; 005cbbb4
        ;   XREF to: 005c862c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c862c()
    MOV ESI,0xffffffff                  ; 005cbbb9
    PUSH EBX                            ; 005cbbbe
        ;   Label: LAB_005cbbbe
    CALL dword ptr [0x00626604]         ; 005cbbbf | PTR_crt_unknown.c_FUN_005c50d4_00626604
    ADD ESP,0x4                         ; 005cbbc5
    MOV EAX,ESI                         ; 005cbbc8
    POP ESI                             ; 005cbbca
    POP EBX                             ; 005cbbcb
    RET                                 ; 005cbbcc

