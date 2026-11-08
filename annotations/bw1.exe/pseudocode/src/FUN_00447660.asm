; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00447660(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005fdf20
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

    PUSH EBX                            ; 00447660
        ;   Label: FUN_00447660
    MOV EBX,dword ptr [ESP + 0x8]       ; 00447661
    TEST byte ptr [ESP + 0xc],0x4       ; 00447665
    JNZ 0x004476bd                      ; 0044766a
        ;   XREF to: 004476bd (CONDITIONAL_JUMP)  ; LAB_004476bd
    PUSH 0x0                            ; 0044766c
    ADD EBX,0x35dc                      ; 0044766e
    PUSH EBX                            ; 00447674
    CALL FUN_0040ee30                   ; 00447675
        ;   XREF to: 0040ee30 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ee30()
    ADD ESP,0x8                         ; 0044767a
    PUSH 0x0                            ; 0044767d
    SUB EAX,0x93c                       ; 0044767f
    PUSH EAX                            ; 00447684
    CALL FUN_00441ca0                   ; 00447685
        ;   XREF to: 00441ca0 (UNCONDITIONAL_CALL)  ; undefined FUN_00441ca0()
    ADD ESP,0x8                         ; 0044768a
    PUSH 0x0                            ; 0044768d
    SUB EAX,0x2b48                      ; 0044768f
    PUSH EAX                            ; 00447694
    CALL FUN_005673f0                   ; 00447695
        ;   XREF to: 005673f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005673f0()
    ADD ESP,0x8                         ; 0044769a
    PUSH 0x1                            ; 0044769d
    LEA EBX,[EAX + 0xfffffea8]          ; 0044769f
    PUSH EBX                            ; 004476a5
    CALL FUN_00408730                   ; 004476a6
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; undefined FUN_00408730()
    ADD ESP,0x8                         ; 004476ab
    MOV DL,byte ptr [ESP + 0xc]         ; 004476ae
    MOV EBX,EAX                         ; 004476b2
    TEST DL,0x2                         ; 004476b4
    JNZ 0x004476d8                      ; 004476b7
        ;   XREF to: 004476d8 (CONDITIONAL_JUMP)  ; LAB_004476d8
    MOV EAX,EBX                         ; 004476b9
    POP EBX                             ; 004476bb
    RET                                 ; 004476bc
    PUSH 0x5fdf20                       ; 004476bd | DAT_005fdf20
        ;   Label: LAB_004476bd
    PUSH EBX                            ; 004476c2
    CALL FUN_005c030f                   ; 004476c3
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 004476c8
    PUSH EAX                            ; 004476cb
    CALL FUN_005c0336                   ; 004476cc
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 004476d1
    MOV EAX,EBX                         ; 004476d4
    POP EBX                             ; 004476d6
    RET                                 ; 004476d7
    PUSH EAX                            ; 004476d8
        ;   Label: LAB_004476d8
    CALL FUN_005c0344                   ; 004476d9
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 004476de
    MOV EAX,EBX                         ; 004476e1
    POP EBX                             ; 004476e3
    RET                                 ; 004476e4

