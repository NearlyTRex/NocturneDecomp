; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004cc880(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005e0de0
;
; Called Functions:
;   FUN_00408770
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cc880
        ;   Label: FUN_004cc880
    MOV EBX,dword ptr [ESP + 0x8]       ; 004cc881
    TEST byte ptr [ESP + 0xc],0x4       ; 004cc885
    JNZ 0x004cc8a6                      ; 004cc88a
        ;   XREF to: 004cc8a6 (CONDITIONAL_JUMP)  ; LAB_004cc8a6
    PUSH 0x1                            ; 004cc88c
    PUSH EBX                            ; 004cc88e
    CALL FUN_00408770                   ; 004cc88f
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; undefined FUN_00408770()
    ADD ESP,0x8                         ; 004cc894
    MOV DL,byte ptr [ESP + 0xc]         ; 004cc897
    MOV EBX,EAX                         ; 004cc89b
    TEST DL,0x2                         ; 004cc89d
    JNZ 0x004cc8c1                      ; 004cc8a0
        ;   XREF to: 004cc8c1 (CONDITIONAL_JUMP)  ; LAB_004cc8c1
    MOV EAX,EBX                         ; 004cc8a2
    POP EBX                             ; 004cc8a4
    RET                                 ; 004cc8a5
    PUSH 0x5e0de0                       ; 004cc8a6 | DAT_005e0de0
        ;   Label: LAB_004cc8a6
    PUSH EBX                            ; 004cc8ab
    CALL FUN_005a308f                   ; 004cc8ac
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 004cc8b1
    PUSH EAX                            ; 004cc8b4
    CALL FUN_005a30b6                   ; 004cc8b5
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 004cc8ba
    MOV EAX,EBX                         ; 004cc8bd
    POP EBX                             ; 004cc8bf
    RET                                 ; 004cc8c0
    PUSH EAX                            ; 004cc8c1
        ;   Label: LAB_004cc8c1
    CALL FUN_005a30c4                   ; 004cc8c2
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 004cc8c7
    MOV EAX,EBX                         ; 004cc8ca
    POP EBX                             ; 004cc8cc
    RET                                 ; 004cc8cd

