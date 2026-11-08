; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0047e180(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005ff320
;
; Called Functions:
;   FUN_00408730
;   FUN_0040ee30
;   FUN_00441ca0
;   FUN_005673f0
;   FUN_005c030f
;   FUN_005c0336
;   FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047e180
        ;   Label: FUN_0047e180
    MOV EBX,dword ptr [ESP + 0x8]       ; 0047e181
    TEST byte ptr [ESP + 0xc],0x4       ; 0047e185
    JNZ 0x0047e1dd                      ; 0047e18a
        ;   XREF to: 0047e1dd (CONDITIONAL_JUMP)  ; LAB_0047e1dd
    PUSH 0x0                            ; 0047e18c
    ADD EBX,0x35dc                      ; 0047e18e
    PUSH EBX                            ; 0047e194
    CALL FUN_0040ee30                   ; 0047e195
        ;   XREF to: 0040ee30 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ee30()
    ADD ESP,0x8                         ; 0047e19a
    PUSH 0x0                            ; 0047e19d
    SUB EAX,0x93c                       ; 0047e19f
    PUSH EAX                            ; 0047e1a4
    CALL FUN_00441ca0                   ; 0047e1a5
        ;   XREF to: 00441ca0 (UNCONDITIONAL_CALL)  ; undefined FUN_00441ca0()
    ADD ESP,0x8                         ; 0047e1aa
    PUSH 0x0                            ; 0047e1ad
    SUB EAX,0x2b48                      ; 0047e1af
    PUSH EAX                            ; 0047e1b4
    CALL FUN_005673f0                   ; 0047e1b5
        ;   XREF to: 005673f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005673f0()
    ADD ESP,0x8                         ; 0047e1ba
    PUSH 0x1                            ; 0047e1bd
    LEA EBX,[EAX + 0xfffffea8]          ; 0047e1bf
    PUSH EBX                            ; 0047e1c5
    CALL FUN_00408730                   ; 0047e1c6
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; undefined FUN_00408730()
    ADD ESP,0x8                         ; 0047e1cb
    MOV DL,byte ptr [ESP + 0xc]         ; 0047e1ce
    MOV EBX,EAX                         ; 0047e1d2
    TEST DL,0x2                         ; 0047e1d4
    JNZ 0x0047e1f8                      ; 0047e1d7
        ;   XREF to: 0047e1f8 (CONDITIONAL_JUMP)  ; LAB_0047e1f8
    MOV EAX,EBX                         ; 0047e1d9
    POP EBX                             ; 0047e1db
    RET                                 ; 0047e1dc
    PUSH 0x5ff320                       ; 0047e1dd | DAT_005ff320
        ;   Label: LAB_0047e1dd
    PUSH EBX                            ; 0047e1e2
    CALL FUN_005c030f                   ; 0047e1e3
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 0047e1e8
    PUSH EAX                            ; 0047e1eb
    CALL FUN_005c0336                   ; 0047e1ec
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 0047e1f1
    MOV EAX,EBX                         ; 0047e1f4
    POP EBX                             ; 0047e1f6
    RET                                 ; 0047e1f7
    PUSH EAX                            ; 0047e1f8
        ;   Label: LAB_0047e1f8
    CALL FUN_005c0344                   ; 0047e1f9
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 0047e1fe
    MOV EAX,EBX                         ; 0047e201
    POP EBX                             ; 0047e203
    RET                                 ; 0047e204

