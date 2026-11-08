; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004fe770(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_00602e80
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

    PUSH EBX                            ; 004fe770
        ;   Label: FUN_004fe770
    MOV EBX,dword ptr [ESP + 0x8]       ; 004fe771
    TEST byte ptr [ESP + 0xc],0x4       ; 004fe775
    JNZ 0x004fe7cd                      ; 004fe77a
        ;   XREF to: 004fe7cd (CONDITIONAL_JUMP)  ; LAB_004fe7cd
    PUSH 0x0                            ; 004fe77c
    ADD EBX,0x35dc                      ; 004fe77e
    PUSH EBX                            ; 004fe784
    CALL FUN_0040ee30                   ; 004fe785
        ;   XREF to: 0040ee30 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ee30()
    ADD ESP,0x8                         ; 004fe78a
    PUSH 0x0                            ; 004fe78d
    SUB EAX,0x93c                       ; 004fe78f
    PUSH EAX                            ; 004fe794
    CALL FUN_00441ca0                   ; 004fe795
        ;   XREF to: 00441ca0 (UNCONDITIONAL_CALL)  ; undefined FUN_00441ca0()
    ADD ESP,0x8                         ; 004fe79a
    PUSH 0x0                            ; 004fe79d
    SUB EAX,0x2b48                      ; 004fe79f
    PUSH EAX                            ; 004fe7a4
    CALL FUN_005673f0                   ; 004fe7a5
        ;   XREF to: 005673f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005673f0()
    ADD ESP,0x8                         ; 004fe7aa
    PUSH 0x1                            ; 004fe7ad
    LEA EBX,[EAX + 0xfffffea8]          ; 004fe7af
    PUSH EBX                            ; 004fe7b5
    CALL FUN_00408730                   ; 004fe7b6
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; undefined FUN_00408730()
    ADD ESP,0x8                         ; 004fe7bb
    MOV DL,byte ptr [ESP + 0xc]         ; 004fe7be
    MOV EBX,EAX                         ; 004fe7c2
    TEST DL,0x2                         ; 004fe7c4
    JNZ 0x004fe7e8                      ; 004fe7c7
        ;   XREF to: 004fe7e8 (CONDITIONAL_JUMP)  ; LAB_004fe7e8
    MOV EAX,EBX                         ; 004fe7c9
    POP EBX                             ; 004fe7cb
    RET                                 ; 004fe7cc
    PUSH 0x602e80                       ; 004fe7cd | DAT_00602e80
        ;   Label: LAB_004fe7cd
    PUSH EBX                            ; 004fe7d2
    CALL FUN_005c030f                   ; 004fe7d3
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 004fe7d8
    PUSH EAX                            ; 004fe7db
    CALL FUN_005c0336                   ; 004fe7dc
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 004fe7e1
    MOV EAX,EBX                         ; 004fe7e4
    POP EBX                             ; 004fe7e6
    RET                                 ; 004fe7e7
    PUSH EAX                            ; 004fe7e8
        ;   Label: LAB_004fe7e8
    CALL FUN_005c0344                   ; 004fe7e9
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 004fe7ee
    MOV EAX,EBX                         ; 004fe7f1
    POP EBX                             ; 004fe7f3
    RET                                 ; 004fe7f4

