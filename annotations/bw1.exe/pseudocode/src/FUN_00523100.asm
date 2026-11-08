; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00523100(int param_1,int param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[1]:
;   FUN_00414ab0 at 00414aff
;
; Called Functions:
;   FUN_00522170
;   FUN_005224f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00523100
        ;   Label: FUN_00523100
    MOV EDX,dword ptr [ESP + 0xc]       ; 00523101
    LEA EAX,[EDX*0x4 + 0x0]             ; 00523105
    SUB EAX,EDX                         ; 0052310c
    SHL EAX,0x6                         ; 0052310e
    ADD EAX,EDX                         ; 00523111
    MOV EBX,dword ptr [ESP + 0x8]       ; 00523113
    SHL EAX,0x3                         ; 00523117
    ADD EBX,EAX                         ; 0052311a
    PUSH EBX                            ; 0052311c
    CALL FUN_00522170                   ; 0052311d
        ;   XREF to: 00522170 (UNCONDITIONAL_CALL)  ; undefined FUN_00522170()
    ADD ESP,0x4                         ; 00523122
    MOV EDX,dword ptr [ESP + 0x14]      ; 00523125
    PUSH EDX                            ; 00523129
    MOV ECX,dword ptr [ESP + 0x14]      ; 0052312a
    PUSH ECX                            ; 0052312e
    PUSH EBX                            ; 0052312f
    CALL FUN_005224f0                   ; 00523130
        ;   XREF to: 005224f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005224f0()
    ADD ESP,0xc                         ; 00523135
    POP EBX                             ; 00523138
    RET                                 ; 00523139

