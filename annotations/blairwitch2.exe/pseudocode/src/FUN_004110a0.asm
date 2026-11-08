; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004110a0(int param_1)
;
;
; Called Functions:
;   FUN_00408a80
;   FUN_0040cf60
;   FUN_004114e0
;   FUN_00438af0
;   FUN_0044fd00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004110a0
        ;   Label: FUN_004110a0
    SUB ESP,0x4                         ; 004110a1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004110a4
    LEA EAX,[EBX + 0x2e4]               ; 004110a8
    PUSH EAX                            ; 004110ae
    CALL FUN_0044fd00                   ; 004110af
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd00()
    ADD ESP,0x4                         ; 004110b4
    LEA EAX,[EBX + 0x2b4]               ; 004110b7
    PUSH EAX                            ; 004110bd
    LEA EAX,[EBX + 0x2d4]               ; 004110be
    PUSH EAX                            ; 004110c4
    CALL FUN_00438af0                   ; 004110c5
        ;   XREF to: 00438af0 (UNCONDITIONAL_CALL)  ; undefined FUN_00438af0()
    ADD ESP,0x8                         ; 004110ca
    PUSH EBX                            ; 004110cd
    CALL FUN_00408a80                   ; 004110ce
        ;   XREF to: 00408a80 (UNCONDITIONAL_CALL)  ; undefined FUN_00408a80()
    ADD ESP,0x4                         ; 004110d3
    PUSH EBX                            ; 004110d6
    CALL FUN_004114e0                   ; 004110d7
        ;   XREF to: 004114e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004114e0()
    ADD ESP,0x4                         ; 004110dc
    PUSH dword ptr [EBX + 0x4d8]        ; 004110df
    PUSH dword ptr [EBX + 0x4d4]        ; 004110e5
    MOV dword ptr [EBX + 0x4dc],0x0     ; 004110eb
    CALL FUN_0040cf60                   ; 004110f5
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [ESP + 0x8],EAX       ; 004110fa
    MOV EAX,dword ptr [ESP + 0x8]       ; 004110fe
    MOV dword ptr [EBX + 0x4e0],EAX     ; 00411102
    ADD ESP,0x8                         ; 00411108
    ADD ESP,0x4                         ; 0041110b
    POP EBX                             ; 0041110e
    RET                                 ; 0041110f

