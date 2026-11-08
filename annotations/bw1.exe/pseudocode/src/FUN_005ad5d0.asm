; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005ad5d0(int param_1,byte param_2)
;
;
; XREF[15]:
;   FUN_00410730 at 0041073f
;   FUN_0044a120 at 0044a146
;   FUN_004928d0 at 004928df
;   FUN_0049ed90 at 0049ed9f
;   FUN_004b9860 at 004b986f
;   FUN_004b9a60 at 004b9a6f
;   FUN_004e8f70 at 004e8f7f
;   FUN_00501560 at 0050156f
;   FUN_00502cc0 at 00502ccf
;   FUN_00509a90 at 00509a9f
;   ... and 5 more
;
; Referenced Globals:
;   void* PTR_FUN_00607e74 = 005ad640
;   undefined4 DAT_00607f70
;
; Called Functions:
;   FUN_00408730
;   FUN_0041dab0
;   FUN_005c030f
;   FUN_005c0336
;   FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ad5d0
        ;   Label: FUN_005ad5d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005ad5d1
    TEST byte ptr [ESP + 0xc],0x4       ; 005ad5d5
    JNZ 0x005ad617                      ; 005ad5da
        ;   XREF to: 005ad617 (CONDITIONAL_JUMP)  ; LAB_005ad617
    PUSH 0x0                            ; 005ad5dc
    ADD EBX,0x308                       ; 005ad5de
    PUSH EBX                            ; 005ad5e4
    MOV dword ptr [EBX + 0xfffffe4c],0x607e74 ; 005ad5e5 | PTR_FUN_00607e74
    CALL FUN_0041dab0                   ; 005ad5ef
        ;   XREF to: 0041dab0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041dab0()
    ADD ESP,0x8                         ; 005ad5f4
    PUSH 0x1                            ; 005ad5f7
    LEA EBX,[EAX + 0xfffffcf8]          ; 005ad5f9
    PUSH EBX                            ; 005ad5ff
    CALL FUN_00408730                   ; 005ad600
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; undefined FUN_00408730()
    ADD ESP,0x8                         ; 005ad605
    MOV DL,byte ptr [ESP + 0xc]         ; 005ad608
    MOV EBX,EAX                         ; 005ad60c
    TEST DL,0x2                         ; 005ad60e
    JNZ 0x005ad632                      ; 005ad611
        ;   XREF to: 005ad632 (CONDITIONAL_JUMP)  ; LAB_005ad632
    MOV EAX,EBX                         ; 005ad613
    POP EBX                             ; 005ad615
    RET                                 ; 005ad616
    PUSH 0x607f70                       ; 005ad617 | DAT_00607f70
        ;   Label: LAB_005ad617
    PUSH EBX                            ; 005ad61c
    CALL FUN_005c030f                   ; 005ad61d
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 005ad622
    PUSH EAX                            ; 005ad625
    CALL FUN_005c0336                   ; 005ad626
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 005ad62b
    MOV EAX,EBX                         ; 005ad62e
    POP EBX                             ; 005ad630
    RET                                 ; 005ad631
    PUSH EAX                            ; 005ad632
        ;   Label: LAB_005ad632
    CALL FUN_005c0344                   ; 005ad633
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 005ad638
    MOV EAX,EBX                         ; 005ad63b
    POP EBX                             ; 005ad63d
    RET                                 ; 005ad63e

