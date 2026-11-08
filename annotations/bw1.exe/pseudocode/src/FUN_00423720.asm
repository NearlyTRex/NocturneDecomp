; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00423720(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005fd030
;
; Called Functions:
;   FUN_00408730
;   FUN_0041dab0
;   FUN_00462530
;   FUN_005c030f
;   FUN_005c0336
;   FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00423720
        ;   Label: FUN_00423720
    MOV EBX,dword ptr [ESP + 0x8]       ; 00423721
    TEST byte ptr [ESP + 0xc],0x4       ; 00423725
    JNZ 0x0042376d                      ; 0042372a
        ;   XREF to: 0042376d (CONDITIONAL_JUMP)  ; LAB_0042376d
    PUSH 0x0                            ; 0042372c
    ADD EBX,0x67c                       ; 0042372e
    PUSH EBX                            ; 00423734
    CALL FUN_00462530                   ; 00423735
        ;   XREF to: 00462530 (UNCONDITIONAL_CALL)  ; undefined FUN_00462530()
    ADD ESP,0x8                         ; 0042373a
    PUSH 0x0                            ; 0042373d
    SUB EAX,0x2e8                       ; 0042373f
    PUSH EAX                            ; 00423744
    CALL FUN_0041dab0                   ; 00423745
        ;   XREF to: 0041dab0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041dab0()
    ADD ESP,0x8                         ; 0042374a
    PUSH 0x1                            ; 0042374d
    LEA EBX,[EAX + 0xfffffc6c]          ; 0042374f
    PUSH EBX                            ; 00423755
    CALL FUN_00408730                   ; 00423756
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; undefined FUN_00408730()
    ADD ESP,0x8                         ; 0042375b
    MOV DL,byte ptr [ESP + 0xc]         ; 0042375e
    MOV EBX,EAX                         ; 00423762
    TEST DL,0x2                         ; 00423764
    JNZ 0x00423788                      ; 00423767
        ;   XREF to: 00423788 (CONDITIONAL_JUMP)  ; LAB_00423788
    MOV EAX,EBX                         ; 00423769
    POP EBX                             ; 0042376b
    RET                                 ; 0042376c
    PUSH 0x5fd030                       ; 0042376d | DAT_005fd030
        ;   Label: LAB_0042376d
    PUSH EBX                            ; 00423772
    CALL FUN_005c030f                   ; 00423773
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 00423778
    PUSH EAX                            ; 0042377b
    CALL FUN_005c0336                   ; 0042377c
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 00423781
    MOV EAX,EBX                         ; 00423784
    POP EBX                             ; 00423786
    RET                                 ; 00423787
    PUSH EAX                            ; 00423788
        ;   Label: LAB_00423788
    CALL FUN_005c0344                   ; 00423789
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 0042378e
    MOV EAX,EBX                         ; 00423791
    POP EBX                             ; 00423793
    RET                                 ; 00423794

