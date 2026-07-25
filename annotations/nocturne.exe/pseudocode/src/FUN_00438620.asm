; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00438620(int *param_1,undefined4 param_2)
;
;
; Called Functions:
;   core_cloth.cpp_CCloth_applyRotation_FUN_00438780
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00438620
        ;   Label: FUN_00438620
    PUSH EDI                            ; 00438621
    PUSH EBP                            ; 00438622
    MOV EDI,dword ptr [ESP + 0x10]      ; 00438623
    MOV EBP,dword ptr [ESP + 0x14]      ; 00438627
    MOV EDX,dword ptr [EDI]             ; 0043862b
    XOR EBX,EBX                         ; 0043862d
    TEST EDX,EDX                        ; 0043862f
    JLE 0x00438651                      ; 00438631
        ;   XREF to: 00438651 (CONDITIONAL_JUMP)  ; LAB_00438651
    PUSH ESI                            ; 00438633
    MOV ESI,EDI                         ; 00438634
    PUSH EBP                            ; 00438636
        ;   Label: LAB_00438636
    MOV ECX,dword ptr [ESI + 0x194]     ; 00438637
    PUSH ECX                            ; 0043863d
    ADD ESI,0x4                         ; 0043863e
    INC EBX                             ; 00438641
    CALL core_cloth.cpp_CCloth_applyRotation_FUN_00438780 ; 00438642
        ;   XREF to: 00438780 (UNCONDITIONAL_CALL)  ; undefined core_cloth.cpp_CCloth_applyRotation_FUN_00438780()
    MOV EAX,dword ptr [EDI]             ; 00438647
    ADD ESP,0x8                         ; 00438649
    CMP EBX,EAX                         ; 0043864c
    JL 0x00438636                       ; 0043864e
        ;   XREF to: 00438636 (CONDITIONAL_JUMP)  ; LAB_00438636
    POP ESI                             ; 00438650
    POP EBP                             ; 00438651
        ;   Label: LAB_00438651
    POP EDI                             ; 00438652
    POP EBX                             ; 00438653
    RET                                 ; 00438654

