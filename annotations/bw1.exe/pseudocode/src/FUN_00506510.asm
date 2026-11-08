; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00506510(int param_1,float param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005e767d
;   undefined4 DAT_005e7681
;   undefined4 DAT_005e7685
;   undefined4 DAT_0061f2a4
;
; Called Functions:
;   FUN_004088b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00506510
        ;   Label: FUN_00506510
    PUSH EBP                            ; 00506511
    MOV EBP,ESP                         ; 00506512
    SUB ESP,0x4                         ; 00506514
    AND ESP,0xfffffff8                  ; 00506517
    MOV EBX,dword ptr [EBP + 0xc]       ; 0050651a
    FLD float ptr [EBP + 0x10]          ; 0050651d
    FMUL float ptr [0x005e767d]         ; 00506520 | DAT_005e767d
    FDIV float ptr [0x005e7681]         ; 00506526 | DAT_005e7681
    PUSH 0x38                           ; 0050652c
    MOV EAX,[0x0061f2a4]                ; 0050652e | DAT_0061f2a4
    PUSH EAX                            ; 00506533
    MOV EDX,dword ptr [EAX]             ; 00506534
    FSTP float ptr [ESP + 0x8]          ; 00506536
    CALL dword ptr [EDX]                ; 0050653a
    ADD ESP,0x8                         ; 0050653c
    TEST EAX,EAX                        ; 0050653f
    JZ 0x0050654f                       ; 00506541
        ;   XREF to: 0050654f (CONDITIONAL_JUMP)  ; LAB_0050654f
    FLD float ptr [ESP]                 ; 00506543
    FMUL double ptr [0x005e7685]        ; 00506546 | DAT_005e7685
    FSTP float ptr [ESP]                ; 0050654c
    PUSH 0x33                           ; 0050654f
        ;   Label: LAB_0050654f
    MOV EAX,[0x0061f2a4]                ; 00506551 | DAT_0061f2a4
    PUSH EAX                            ; 00506556
    MOV EDX,dword ptr [EAX]             ; 00506557
    CALL dword ptr [EDX]                ; 00506559
    ADD ESP,0x8                         ; 0050655b
    TEST EAX,EAX                        ; 0050655e
    JZ 0x0050656b                       ; 00506560
        ;   XREF to: 0050656b (CONDITIONAL_JUMP)  ; LAB_0050656b
    FLD float ptr [EBX + 0x34]          ; 00506562
    FSUB float ptr [ESP]                ; 00506565
    FSTP float ptr [EBX + 0x34]         ; 00506568
    PUSH 0x34                           ; 0050656b
        ;   Label: LAB_0050656b
    MOV EAX,[0x0061f2a4]                ; 0050656d | DAT_0061f2a4
    PUSH EAX                            ; 00506572
    MOV EDX,dword ptr [EAX]             ; 00506573
    CALL dword ptr [EDX]                ; 00506575
    ADD ESP,0x8                         ; 00506577
    TEST EAX,EAX                        ; 0050657a
    JZ 0x00506587                       ; 0050657c
        ;   XREF to: 00506587 (CONDITIONAL_JUMP)  ; LAB_00506587
    FLD float ptr [EBX + 0x34]          ; 0050657e
    FADD float ptr [ESP]                ; 00506581
    FSTP float ptr [EBX + 0x34]         ; 00506584
    PUSH EBX                            ; 00506587
        ;   Label: LAB_00506587
    CALL FUN_004088b0                   ; 00506588
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004088b0()
    ADD ESP,0x4                         ; 0050658d
    MOV ESP,EBP                         ; 00506590
    POP EBP                             ; 00506592
    POP EBX                             ; 00506593
    RET                                 ; 00506594

