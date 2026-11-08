; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00495110(int param_1,undefined4 param_2)
;
;
; XREF[2]:
;   FUN_0048c2e0 at 0048e021
;   FUN_00491f40 at 00493c15
;
; Called Functions:
;   FUN_00495230
;   FUN_00495280
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00495110
        ;   Label: FUN_00495110
    MOV EBX,dword ptr [ESP + 0x8]       ; 00495111
    PUSH EBX                            ; 00495115
    CALL FUN_00495280                   ; 00495116
        ;   XREF to: 00495280 (UNCONDITIONAL_CALL)  ; undefined FUN_00495280()
    ADD ESP,0x4                         ; 0049511b
    MOV EDX,dword ptr [ESP + 0xc]       ; 0049511e
    PUSH EDX                            ; 00495122
    PUSH EBX                            ; 00495123
    CALL FUN_00495230                   ; 00495124
        ;   XREF to: 00495230 (UNCONDITIONAL_CALL)  ; undefined FUN_00495230()
    ADD ESP,0x8                         ; 00495129
    TEST EAX,EAX                        ; 0049512c
    JL 0x00495143                       ; 0049512e
        ;   XREF to: 00495143 (CONDITIONAL_JUMP)  ; LAB_00495143
    MOV EDX,EAX                         ; 00495130
    SHL EAX,0x3                         ; 00495132
    ADD EAX,EDX                         ; 00495135
    SHL EAX,0x5                         ; 00495137
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x3acc] ; 0049513a
    POP EBX                             ; 00495141
    RET                                 ; 00495142
    XOR EAX,EAX                         ; 00495143
        ;   Label: LAB_00495143
    POP EBX                             ; 00495145
    RET                                 ; 00495146

