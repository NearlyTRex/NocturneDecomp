; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00491540(int param_1,undefined4 param_2)
;
;
; XREF[2]:
;   FUN_0048e2b0 at 0048e2fe
;   FUN_00490f80 at 00490f9a
;
; Called Functions:
;   FUN_005b8130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00491540
        ;   Label: FUN_00491540
    PUSH ESI                            ; 00491541
    PUSH EDI                            ; 00491542
    PUSH EBP                            ; 00491543
    MOV EDI,dword ptr [ESP + 0x14]      ; 00491544
    MOV EBP,dword ptr [ESP + 0x18]      ; 00491548
    MOV EDX,dword ptr [EDI + 0x258c]    ; 0049154c
    XOR EBX,EBX                         ; 00491552
    TEST EDX,EDX                        ; 00491554
    JLE 0x0049157a                      ; 00491556
        ;   XREF to: 0049157a (CONDITIONAL_JUMP)  ; LAB_0049157a
    LEA ESI,[EDI + 0x2590]              ; 00491558
    PUSH EBP                            ; 0049155e
        ;   Label: LAB_0049155e
    PUSH ESI                            ; 0049155f
    CALL FUN_005b8130                   ; 00491560
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8130()
    ADD ESP,0x8                         ; 00491565
    TEST EAX,EAX                        ; 00491568
    JZ 0x00491584                       ; 0049156a
        ;   XREF to: 00491584 (CONDITIONAL_JUMP)  ; LAB_00491584
    INC EBX                             ; 0049156c
    MOV ECX,dword ptr [EDI + 0x258c]    ; 0049156d
    ADD ESI,0x20                        ; 00491573
    CMP EBX,ECX                         ; 00491576
    JL 0x0049155e                       ; 00491578
        ;   XREF to: 0049155e (CONDITIONAL_JUMP)  ; LAB_0049155e
    MOV EAX,0xffffffff                  ; 0049157a
        ;   Label: LAB_0049157a
    POP EBP                             ; 0049157f
    POP EDI                             ; 00491580
    POP ESI                             ; 00491581
    POP EBX                             ; 00491582
    RET                                 ; 00491583
    MOV EAX,EBX                         ; 00491584
        ;   Label: LAB_00491584
    POP EBP                             ; 00491586
    POP EDI                             ; 00491587
    POP ESI                             ; 00491588
    POP EBX                             ; 00491589
    RET                                 ; 0049158a

