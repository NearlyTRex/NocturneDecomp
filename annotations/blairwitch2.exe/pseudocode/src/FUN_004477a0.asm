; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004477a0(int *param_1,undefined4 param_2)
;
;
; XREF[2]:
;   FUN_00447c50 at 00447d7d
;   FUN_00447de0 at 00447df5
;
; Called Functions:
;   FUN_005b8c30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004477a0
        ;   Label: FUN_004477a0
    PUSH ESI                            ; 004477a1
    PUSH EDI                            ; 004477a2
    PUSH EBP                            ; 004477a3
    MOV EDI,dword ptr [ESP + 0x14]      ; 004477a4
    MOV EBP,dword ptr [ESP + 0x18]      ; 004477a8
    MOV EDX,dword ptr [EDI]             ; 004477ac
    XOR EBX,EBX                         ; 004477ae
    TEST EDX,EDX                        ; 004477b0
    JLE 0x004477cf                      ; 004477b2
        ;   XREF to: 004477cf (CONDITIONAL_JUMP)  ; LAB_004477cf
    LEA ESI,[EDI + 0x4]                 ; 004477b4
    PUSH EBP                            ; 004477b7
        ;   Label: LAB_004477b7
    PUSH ESI                            ; 004477b8
    CALL FUN_005b8c30                   ; 004477b9
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8c30()
    ADD ESP,0x8                         ; 004477be
    TEST EAX,EAX                        ; 004477c1
    JZ 0x004477d6                       ; 004477c3
        ;   XREF to: 004477d6 (CONDITIONAL_JUMP)  ; LAB_004477d6
    INC EBX                             ; 004477c5
    MOV ECX,dword ptr [EDI]             ; 004477c6
    ADD ESI,0x28                        ; 004477c8
    CMP EBX,ECX                         ; 004477cb
    JL 0x004477b7                       ; 004477cd
        ;   XREF to: 004477b7 (CONDITIONAL_JUMP)  ; LAB_004477b7
    XOR EAX,EAX                         ; 004477cf
        ;   Label: LAB_004477cf
    POP EBP                             ; 004477d1
    POP EDI                             ; 004477d2
    POP ESI                             ; 004477d3
    POP EBX                             ; 004477d4
    RET                                 ; 004477d5
    SHL EBX,0x2                         ; 004477d6
        ;   Label: LAB_004477d6
    LEA EAX,[EDI + EBX*0x1]             ; 004477d9
    MOV EAX,dword ptr [EAX + 0xa04]     ; 004477dc
    POP EBP                             ; 004477e2
    POP EDI                             ; 004477e3
    POP ESI                             ; 004477e4
    POP EBX                             ; 004477e5
    RET                                 ; 004477e6

