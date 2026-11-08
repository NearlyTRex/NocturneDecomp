; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004150f0(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005fc720
;
; Called Functions:
;   FUN_00408730
;   FUN_0040ee30
;   FUN_00441ca0
;   FUN_00522fc0
;   FUN_005673f0
;   FUN_005c030f
;   FUN_005c0336
;   FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004150f0
        ;   Label: FUN_004150f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004150f1
    TEST byte ptr [ESP + 0xc],0x4       ; 004150f5
    JNZ 0x0041515d                      ; 004150fa
        ;   XREF to: 0041515d (CONDITIONAL_JUMP)  ; LAB_0041515d
    PUSH 0x0                            ; 004150fc
    ADD EBX,0xc3ec                      ; 004150fe
    PUSH EBX                            ; 00415104
    CALL FUN_00522fc0                   ; 00415105
        ;   XREF to: 00522fc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00522fc0()
    ADD ESP,0x8                         ; 0041510a
    PUSH 0x0                            ; 0041510d
    SUB EAX,0x8e10                      ; 0041510f
    PUSH EAX                            ; 00415114
    CALL FUN_0040ee30                   ; 00415115
        ;   XREF to: 0040ee30 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ee30()
    ADD ESP,0x8                         ; 0041511a
    PUSH 0x0                            ; 0041511d
    SUB EAX,0x93c                       ; 0041511f
    PUSH EAX                            ; 00415124
    CALL FUN_00441ca0                   ; 00415125
        ;   XREF to: 00441ca0 (UNCONDITIONAL_CALL)  ; undefined FUN_00441ca0()
    ADD ESP,0x8                         ; 0041512a
    PUSH 0x0                            ; 0041512d
    SUB EAX,0x2b48                      ; 0041512f
    PUSH EAX                            ; 00415134
    CALL FUN_005673f0                   ; 00415135
        ;   XREF to: 005673f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005673f0()
    ADD ESP,0x8                         ; 0041513a
    PUSH 0x1                            ; 0041513d
    LEA EBX,[EAX + 0xfffffea8]          ; 0041513f
    PUSH EBX                            ; 00415145
    CALL FUN_00408730                   ; 00415146
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; undefined FUN_00408730()
    ADD ESP,0x8                         ; 0041514b
    MOV DL,byte ptr [ESP + 0xc]         ; 0041514e
    MOV EBX,EAX                         ; 00415152
    TEST DL,0x2                         ; 00415154
    JNZ 0x00415178                      ; 00415157
        ;   XREF to: 00415178 (CONDITIONAL_JUMP)  ; LAB_00415178
    MOV EAX,EBX                         ; 00415159
    POP EBX                             ; 0041515b
    RET                                 ; 0041515c
    PUSH 0x5fc720                       ; 0041515d | DAT_005fc720
        ;   Label: LAB_0041515d
    PUSH EBX                            ; 00415162
    CALL FUN_005c030f                   ; 00415163
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 00415168
    PUSH EAX                            ; 0041516b
    CALL FUN_005c0336                   ; 0041516c
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 00415171
    MOV EAX,EBX                         ; 00415174
    POP EBX                             ; 00415176
    RET                                 ; 00415177
    PUSH EAX                            ; 00415178
        ;   Label: LAB_00415178
    CALL FUN_005c0344                   ; 00415179
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 0041517e
    MOV EAX,EBX                         ; 00415181
    POP EBX                             ; 00415183
    RET                                 ; 00415184

