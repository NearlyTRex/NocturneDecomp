; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00408730(int param_1,uint param_2)
;
;
; XREF[103]:
;   FUN_0040e000 at 0040e00f
;   FUN_0040e520 at 0040e52f
;   FUN_0040e930 at 0040e93f
;   FUN_0040ecc0 at 0040ed06
;   FUN_0040ed50 at 0040ed96
;   FUN_0040ede0 at 0040edef
;   FUN_0040f130 at 0040f13f
;   FUN_00410a00 at 00410a0f
;   FUN_00411140 at 00411166
;   FUN_00412690 at 004126d6
;   ... and 93 more
;
; Referenced Globals:
;   void* PTR_FUN_005fb334 = 00408850
;   undefined4 DAT_005fb410
;
; Called Functions:
;   FUN_005c030f
;   FUN_005c0336
;   FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408730
        ;   Label: FUN_00408730
    MOV EBX,dword ptr [ESP + 0x8]       ; 00408731
    MOV EAX,dword ptr [ESP + 0xc]       ; 00408735
    TEST AL,0x4                         ; 00408739
    JNZ 0x00408761                      ; 0040873b
        ;   XREF to: 00408761 (CONDITIONAL_JUMP)  ; LAB_00408761
    MOV dword ptr [EBX + 0x68],0x495fd67 ; 0040873d
    MOV dword ptr [EBX + 0x154],0x5fb334 ; 00408744 | PTR_FUN_005fb334
    TEST AL,0x2                         ; 0040874e
    JNZ 0x0040877c                      ; 00408750
        ;   XREF to: 0040877c (CONDITIONAL_JUMP)  ; LAB_0040877c
    MOV EAX,EBX                         ; 00408752
    POP EBX                             ; 00408754
    LEA EAX,[EAX]                       ; 00408755
    LEA EDX,[EDX]                       ; 0040875b
    MOV EBX,EBX                         ; 0040875e
    RET                                 ; 00408760
        ;   Label: LAB_00408760
    PUSH 0x5fb410                       ; 00408761 | DAT_005fb410
        ;   Label: LAB_00408761
    PUSH EBX                            ; 00408766
    CALL FUN_005c030f                   ; 00408767
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 0040876c
    PUSH EAX                            ; 0040876f
    CALL FUN_005c0336                   ; 00408770
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 00408775
    MOV EAX,EBX                         ; 00408778
    POP EBX                             ; 0040877a
    RET                                 ; 0040877b
    PUSH EBX                            ; 0040877c
        ;   Label: LAB_0040877c
    CALL FUN_005c0344                   ; 0040877d
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 00408782
    MOV EAX,EBX                         ; 00408785
    POP EBX                             ; 00408787
    RET                                 ; 00408788

