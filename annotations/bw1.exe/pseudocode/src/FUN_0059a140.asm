; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0059a140(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_00607070
;
; Called Functions:
;   FUN_00408730
;   FUN_005c030f
;   FUN_005c0336
;   FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059a140
        ;   Label: FUN_0059a140
    MOV EBX,dword ptr [ESP + 0x8]       ; 0059a141
    TEST byte ptr [ESP + 0xc],0x4       ; 0059a145
    JNZ 0x0059a166                      ; 0059a14a
        ;   XREF to: 0059a166 (CONDITIONAL_JUMP)  ; LAB_0059a166
    PUSH 0x1                            ; 0059a14c
    PUSH EBX                            ; 0059a14e
    CALL FUN_00408730                   ; 0059a14f
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; undefined FUN_00408730()
    ADD ESP,0x8                         ; 0059a154
    MOV DL,byte ptr [ESP + 0xc]         ; 0059a157
    MOV EBX,EAX                         ; 0059a15b
    TEST DL,0x2                         ; 0059a15d
    JNZ 0x0059a181                      ; 0059a160
        ;   XREF to: 0059a181 (CONDITIONAL_JUMP)  ; LAB_0059a181
    MOV EAX,EBX                         ; 0059a162
    POP EBX                             ; 0059a164
    RET                                 ; 0059a165
    PUSH 0x607070                       ; 0059a166 | DAT_00607070
        ;   Label: LAB_0059a166
    PUSH EBX                            ; 0059a16b
    CALL FUN_005c030f                   ; 0059a16c
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 0059a171
    PUSH EAX                            ; 0059a174
    CALL FUN_005c0336                   ; 0059a175
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 0059a17a
    MOV EAX,EBX                         ; 0059a17d
    POP EBX                             ; 0059a17f
    RET                                 ; 0059a180
    PUSH EAX                            ; 0059a181
        ;   Label: LAB_0059a181
    CALL FUN_005c0344                   ; 0059a182
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 0059a187
    MOV EAX,EBX                         ; 0059a18a
    POP EBX                             ; 0059a18c
    RET                                 ; 0059a18d

