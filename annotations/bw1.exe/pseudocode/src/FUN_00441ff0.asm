; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00441ff0(int *param_1,int param_2)
;
;
; XREF[2]:
;   FUN_0042e960 at 0042e9ee
;   FUN_00592aa0 at 00592b4a
;
; Called Functions:
;   FUN_00441710
;   FUN_00441800
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00441ff0
        ;   Label: FUN_00441ff0
    PUSH ESI                            ; 00441ff1
    PUSH EDI                            ; 00441ff2
    PUSH EBP                            ; 00441ff3
    MOV EDI,dword ptr [ESP + 0x14]      ; 00441ff4
    MOV EBP,dword ptr [ESP + 0x18]      ; 00441ff8
    TEST EBP,EBP                        ; 00441ffc
    JZ 0x00442030                       ; 00441ffe
        ;   XREF to: 00442030 (CONDITIONAL_JUMP)  ; LAB_00442030
    MOV EDX,dword ptr [EDI]             ; 00442000
    XOR ESI,ESI                         ; 00442002
    TEST EDX,EDX                        ; 00442004
    JLE 0x00442030                      ; 00442006
        ;   XREF to: 00442030 (CONDITIONAL_JUMP)  ; LAB_00442030
    MOV EBX,EDI                         ; 00442008
    PUSH EBP                            ; 0044200a
        ;   Label: LAB_0044200a
    MOV ECX,dword ptr [EBX + 0x194]     ; 0044200b
    PUSH ECX                            ; 00442011
    ADD EBX,0x4                         ; 00442012
    INC ESI                             ; 00442015
    CALL FUN_00441710                   ; 00442016
        ;   XREF to: 00441710 (UNCONDITIONAL_CALL)  ; undefined FUN_00441710()
    MOV EAX,dword ptr [EDI]             ; 0044201b
    ADD ESP,0x8                         ; 0044201d
    CMP ESI,EAX                         ; 00442020
    JL 0x0044200a                       ; 00442022
        ;   XREF to: 0044200a (CONDITIONAL_JUMP)  ; LAB_0044200a
    LEA EAX,[EAX]                       ; 00442024
    LEA EDX,[EDX]                       ; 0044202a
    MOV EDX,dword ptr [EDI]             ; 00442030
        ;   Label: LAB_00442030
    XOR ESI,ESI                         ; 00442032
    TEST EDX,EDX                        ; 00442034
    JLE 0x00442060                      ; 00442036
        ;   XREF to: 00442060 (CONDITIONAL_JUMP)  ; LAB_00442060
    MOV EBX,EDI                         ; 00442038
    PUSH EBP                            ; 0044203a
        ;   Label: LAB_0044203a
    MOV ECX,dword ptr [EBX + 0x194]     ; 0044203b
    PUSH ECX                            ; 00442041
    ADD EBX,0x4                         ; 00442042
    INC ESI                             ; 00442045
    CALL FUN_00441800                   ; 00442046
        ;   XREF to: 00441800 (UNCONDITIONAL_CALL)  ; undefined FUN_00441800()
    MOV EAX,dword ptr [EDI]             ; 0044204b
    ADD ESP,0x8                         ; 0044204d
    CMP ESI,EAX                         ; 00442050
    JL 0x0044203a                       ; 00442052
        ;   XREF to: 0044203a (CONDITIONAL_JUMP)  ; LAB_0044203a
    LEA EAX,[EAX]                       ; 00442054
    LEA EDX,[EDX]                       ; 0044205a
    POP EBP                             ; 00442060
        ;   Label: LAB_00442060
    POP EDI                             ; 00442061
    POP ESI                             ; 00442062
    POP EBX                             ; 00442063
    RET                                 ; 00442064

