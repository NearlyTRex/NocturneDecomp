; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_005a11e0(undefined4 *param_1,byte param_2)
;
;
; XREF[2]:
;   FUN_00442d10 at 00442d6f
;   FUN_00442d90 at 00442def
;
; Referenced Globals:
;   undefined4 DAT_005fdae0
;   undefined1* PTR_FUN_006073c4 = 005a11e0
;
; Called Functions:
;   FUN_0059f550
;   FUN_005a1400
;   FUN_005c030f
;   FUN_005c0336
;   FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a11e0
        ;   Label: FUN_005a11e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a11e1
    TEST byte ptr [ESP + 0xc],0x4       ; 005a11e5
    JNZ 0x005a1215                      ; 005a11ea
        ;   XREF to: 005a1215 (CONDITIONAL_JUMP)  ; LAB_005a1215
    PUSH EBX                            ; 005a11ec
    MOV dword ptr [EBX],0x6073c4        ; 005a11ed | PTR_FUN_006073c4
    CALL FUN_005a1400                   ; 005a11f3
        ;   XREF to: 005a1400 (UNCONDITIONAL_CALL)  ; undefined FUN_005a1400()
    ADD ESP,0x4                         ; 005a11f8
    PUSH 0x1                            ; 005a11fb
    PUSH EBX                            ; 005a11fd
    CALL FUN_0059f550                   ; 005a11fe
        ;   XREF to: 0059f550 (UNCONDITIONAL_CALL)  ; undefined FUN_0059f550()
    ADD ESP,0x8                         ; 005a1203
    MOV DL,byte ptr [ESP + 0xc]         ; 005a1206
    MOV EBX,EAX                         ; 005a120a
    TEST DL,0x2                         ; 005a120c
    JNZ 0x005a1230                      ; 005a120f
        ;   XREF to: 005a1230 (CONDITIONAL_JUMP)  ; LAB_005a1230
    MOV EAX,EBX                         ; 005a1211
    POP EBX                             ; 005a1213
    RET                                 ; 005a1214
    PUSH 0x5fdae0                       ; 005a1215 | DAT_005fdae0
        ;   Label: LAB_005a1215
    PUSH EBX                            ; 005a121a
    CALL FUN_005c030f                   ; 005a121b
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 005a1220
    PUSH EAX                            ; 005a1223
    CALL FUN_005c0336                   ; 005a1224
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 005a1229
    MOV EAX,EBX                         ; 005a122c
    POP EBX                             ; 005a122e
    RET                                 ; 005a122f
    PUSH EAX                            ; 005a1230
        ;   Label: LAB_005a1230
    CALL FUN_005c0344                   ; 005a1231
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 005a1236
    MOV EAX,EBX                         ; 005a1239
    POP EBX                             ; 005a123b
    RET                                 ; 005a123c

