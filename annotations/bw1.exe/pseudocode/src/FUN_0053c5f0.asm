; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0053c5f0(int param_1,byte param_2)
;
;
; XREF[1]:
;   FUN_0053d730 at 0053d73f
;
; Referenced Globals:
;   undefined1* PTR_FUN_00604a34 = 0053c5f0
;   undefined4 DAT_00604a50
;
; Called Functions:
;   FUN_0053c8f0
;   FUN_005c030f
;   FUN_005c0336
;   FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053c5f0
        ;   Label: FUN_0053c5f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0053c5f1
    TEST byte ptr [ESP + 0xc],0x4       ; 0053c5f5
    JNZ 0x0053c621                      ; 0053c5fa
        ;   XREF to: 0053c621 (CONDITIONAL_JUMP)  ; LAB_0053c621
    PUSH EBX                            ; 0053c5fc
    MOV dword ptr [EBX + 0x194],0x604a34 ; 0053c5fd | PTR_FUN_00604a34
    CALL FUN_0053c8f0                   ; 0053c607
        ;   XREF to: 0053c8f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0053c8f0()
    ADD ESP,0x4                         ; 0053c60c
    TEST byte ptr [ESP + 0xc],0x2       ; 0053c60f
    JNZ 0x0053c63c                      ; 0053c614
        ;   XREF to: 0053c63c (CONDITIONAL_JUMP)  ; LAB_0053c63c
    MOV EAX,EBX                         ; 0053c616
    POP EBX                             ; 0053c618
    LEA EAX,[EAX]                       ; 0053c619
    NOP                                 ; 0053c61f
    RET                                 ; 0053c620
        ;   Label: LAB_0053c620
    PUSH 0x604a50                       ; 0053c621 | DAT_00604a50
        ;   Label: LAB_0053c621
    PUSH EBX                            ; 0053c626
    CALL FUN_005c030f                   ; 0053c627
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 0053c62c
    PUSH EAX                            ; 0053c62f
    CALL FUN_005c0336                   ; 0053c630
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 0053c635
    MOV EAX,EBX                         ; 0053c638
    POP EBX                             ; 0053c63a
    RET                                 ; 0053c63b
    PUSH EBX                            ; 0053c63c
        ;   Label: LAB_0053c63c
    CALL FUN_005c0344                   ; 0053c63d
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 0053c642
    MOV EAX,EBX                         ; 0053c645
    POP EBX                             ; 0053c647
    RET                                 ; 0053c648

