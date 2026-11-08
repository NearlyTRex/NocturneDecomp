; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004c9ab0(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005e0ba0
;
; Called Functions:
;   FUN_00408770
;   FUN_00410370
;   FUN_0043f900
;   FUN_0054bf80
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c9ab0
        ;   Label: FUN_004c9ab0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004c9ab1
    TEST byte ptr [ESP + 0xc],0x4       ; 004c9ab5
    JNZ 0x004c9b0d                      ; 004c9aba
        ;   XREF to: 004c9b0d (CONDITIONAL_JUMP)  ; LAB_004c9b0d
    PUSH 0x0                            ; 004c9abc
    ADD EBX,0x385c                      ; 004c9abe
    PUSH EBX                            ; 004c9ac4
    CALL FUN_00410370                   ; 004c9ac5
        ;   XREF to: 00410370 (UNCONDITIONAL_CALL)  ; undefined FUN_00410370()
    ADD ESP,0x8                         ; 004c9aca
    PUSH 0x0                            ; 004c9acd
    SUB EAX,0x954                       ; 004c9acf
    PUSH EAX                            ; 004c9ad4
    CALL FUN_0043f900                   ; 004c9ad5
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; undefined FUN_0043f900()
    ADD ESP,0x8                         ; 004c9ada
    PUSH 0x0                            ; 004c9add
    SUB EAX,0x2db0                      ; 004c9adf
    PUSH EAX                            ; 004c9ae4
    CALL FUN_0054bf80                   ; 004c9ae5
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; undefined FUN_0054bf80()
    ADD ESP,0x8                         ; 004c9aea
    PUSH 0x1                            ; 004c9aed
    LEA EBX,[EAX + 0xfffffea8]          ; 004c9aef
    PUSH EBX                            ; 004c9af5
    CALL FUN_00408770                   ; 004c9af6
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; undefined FUN_00408770()
    ADD ESP,0x8                         ; 004c9afb
    MOV DL,byte ptr [ESP + 0xc]         ; 004c9afe
    MOV EBX,EAX                         ; 004c9b02
    TEST DL,0x2                         ; 004c9b04
    JNZ 0x004c9b28                      ; 004c9b07
        ;   XREF to: 004c9b28 (CONDITIONAL_JUMP)  ; LAB_004c9b28
    MOV EAX,EBX                         ; 004c9b09
    POP EBX                             ; 004c9b0b
    RET                                 ; 004c9b0c
    PUSH 0x5e0ba0                       ; 004c9b0d | DAT_005e0ba0
        ;   Label: LAB_004c9b0d
    PUSH EBX                            ; 004c9b12
    CALL FUN_005a308f                   ; 004c9b13
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 004c9b18
    PUSH EAX                            ; 004c9b1b
    CALL FUN_005a30b6                   ; 004c9b1c
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 004c9b21
    MOV EAX,EBX                         ; 004c9b24
    POP EBX                             ; 004c9b26
    RET                                 ; 004c9b27
    PUSH EAX                            ; 004c9b28
        ;   Label: LAB_004c9b28
    CALL FUN_005a30c4                   ; 004c9b29
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 004c9b2e
    MOV EAX,EBX                         ; 004c9b31
    POP EBX                             ; 004c9b33
    RET                                 ; 004c9b34

