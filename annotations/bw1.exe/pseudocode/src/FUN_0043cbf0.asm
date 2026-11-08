; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0043cbf0(undefined4 param_1,undefined4 param_2)
;
;
; XREF[48]:
;   FUN_00403aa0 at 00403b21
;   FUN_00403b70 at 00403bca
;   FUN_00403c90 at 00403ce8
;   FUN_00403d30 at 00403d82
;   FUN_00403e70 at 00403f42
;   FUN_00404070 at 004040cc
;   FUN_00404120 at 004042f6
;   FUN_00404370 at 004043c2
;   FUN_00404560 at 004046c4
;   FUN_004046e0 at 004048b5
;   ... and 38 more
;
; Referenced Globals:
;   undefined4 DAT_0061b4c0
;   undefined4 DAT_007c7554
;   undefined4 DAT_007c7558
;
; Called Functions:
;   FUN_0043c190
;   FUN_0053e120
;   FUN_0053e650
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043cbf0
        ;   Label: FUN_0043cbf0
    MOV EAX,dword ptr [ESP + 0x8]       ; 0043cbf1
    MOV EDX,dword ptr [ESP + 0xc]       ; 0043cbf5
    CMP dword ptr [0x0061b4c0],0x0      ; 0043cbf9 | DAT_0061b4c0
    JZ 0x0043cc1d                       ; 0043cc00
        ;   XREF to: 0043cc1d (CONDITIONAL_JUMP)  ; LAB_0043cc1d
    PUSH EDX                            ; 0043cc02
    PUSH EAX                            ; 0043cc03
    CALL FUN_0043c190                   ; 0043cc04
        ;   XREF to: 0043c190 (UNCONDITIONAL_CALL)  ; undefined FUN_0043c190()
    ADD ESP,0x8                         ; 0043cc09
    TEST EAX,EAX                        ; 0043cc0c
    JNZ 0x0043cc1b                      ; 0043cc0e
        ;   XREF to: 0043cc1b (CONDITIONAL_JUMP)  ; LAB_0043cc1b
    MOV EBX,dword ptr [0x007c7554]      ; 0043cc10 | DAT_007c7554
    CMP EBX,0x2                         ; 0043cc16
    JG 0x0043cc29                       ; 0043cc19
        ;   XREF to: 0043cc29 (CONDITIONAL_JUMP)  ; LAB_0043cc29
    POP EBX                             ; 0043cc1b
        ;   Label: LAB_0043cc1b
    RET                                 ; 0043cc1c
    PUSH EAX                            ; 0043cc1d
        ;   Label: LAB_0043cc1d
    PUSH EDX                            ; 0043cc1e
    CALL FUN_0053e650                   ; 0043cc1f
        ;   XREF to: 0053e650 (UNCONDITIONAL_CALL)  ; undefined FUN_0053e650()
    ADD ESP,0x8                         ; 0043cc24
    POP EBX                             ; 0043cc27
    RET                                 ; 0043cc28
    PUSH EBX                            ; 0043cc29
        ;   Label: LAB_0043cc29
    PUSH 0x7c7558                       ; 0043cc2a | DAT_007c7558
    CALL FUN_0053e120                   ; 0043cc2f
        ;   XREF to: 0053e120 (UNCONDITIONAL_CALL)  ; undefined FUN_0053e120()
    ADD ESP,0x8                         ; 0043cc34
    POP EBX                             ; 0043cc37
    RET                                 ; 0043cc38

