; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00491630(int param_1,undefined4 param_2)
;
;
; XREF[2]:
;   FUN_00491400 at 00491412
;   FUN_00491510 at 0049151a
;
; Called Functions:
;   FUN_005b8130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00491630
        ;   Label: FUN_00491630
    PUSH ESI                            ; 00491631
    PUSH EDI                            ; 00491632
    PUSH EBP                            ; 00491633
    MOV EDI,dword ptr [ESP + 0x14]      ; 00491634
    MOV EBP,dword ptr [ESP + 0x18]      ; 00491638
    MOV EDX,dword ptr [EDI + 0x337c]    ; 0049163c
    XOR EBX,EBX                         ; 00491642
    TEST EDX,EDX                        ; 00491644
    JLE 0x0049166a                      ; 00491646
        ;   XREF to: 0049166a (CONDITIONAL_JUMP)  ; LAB_0049166a
    LEA ESI,[EDI + 0x3380]              ; 00491648
    PUSH EBP                            ; 0049164e
        ;   Label: LAB_0049164e
    PUSH ESI                            ; 0049164f
    CALL FUN_005b8130                   ; 00491650
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8130()
    ADD ESP,0x8                         ; 00491655
    TEST EAX,EAX                        ; 00491658
    JZ 0x00491674                       ; 0049165a
        ;   XREF to: 00491674 (CONDITIONAL_JUMP)  ; LAB_00491674
    INC EBX                             ; 0049165c
    MOV ECX,dword ptr [EDI + 0x337c]    ; 0049165d
    ADD ESI,0x20                        ; 00491663
    CMP EBX,ECX                         ; 00491666
    JL 0x0049164e                       ; 00491668
        ;   XREF to: 0049164e (CONDITIONAL_JUMP)  ; LAB_0049164e
    MOV EAX,0xffffffff                  ; 0049166a
        ;   Label: LAB_0049166a
    POP EBP                             ; 0049166f
    POP EDI                             ; 00491670
    POP ESI                             ; 00491671
    POP EBX                             ; 00491672
    RET                                 ; 00491673
    MOV EAX,EBX                         ; 00491674
        ;   Label: LAB_00491674
    POP EBP                             ; 00491676
    POP EDI                             ; 00491677
    POP ESI                             ; 00491678
    POP EBX                             ; 00491679
    RET                                 ; 0049167a

