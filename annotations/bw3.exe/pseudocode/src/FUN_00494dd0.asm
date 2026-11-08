; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00494dd0(int param_1,undefined4 param_2)
;
;
; XREF[2]:
;   FUN_00491a10 at 00491a84
;   FUN_00494a70 at 00494ac7
;
; Called Functions:
;   FUN_005a3260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00494dd0
        ;   Label: FUN_00494dd0
    PUSH ESI                            ; 00494dd1
    PUSH EDI                            ; 00494dd2
    PUSH EBP                            ; 00494dd3
    MOV EDI,dword ptr [ESP + 0x14]      ; 00494dd4
    MOV EBP,dword ptr [ESP + 0x18]      ; 00494dd8
    MOV EDX,dword ptr [EDI + 0x3210]    ; 00494ddc
    XOR EBX,EBX                         ; 00494de2
    TEST EDX,EDX                        ; 00494de4
    JLE 0x00494e0a                      ; 00494de6
        ;   XREF to: 00494e0a (CONDITIONAL_JUMP)  ; LAB_00494e0a
    LEA ESI,[EDI + 0x3214]              ; 00494de8
    PUSH EBP                            ; 00494dee
        ;   Label: LAB_00494dee
    PUSH ESI                            ; 00494def
    CALL FUN_005a3260                   ; 00494df0
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3260()
    ADD ESP,0x8                         ; 00494df5
    TEST EAX,EAX                        ; 00494df8
    JZ 0x00494e14                       ; 00494dfa
        ;   XREF to: 00494e14 (CONDITIONAL_JUMP)  ; LAB_00494e14
    INC EBX                             ; 00494dfc
    MOV ECX,dword ptr [EDI + 0x3210]    ; 00494dfd
    ADD ESI,0x20                        ; 00494e03
    CMP EBX,ECX                         ; 00494e06
    JL 0x00494dee                       ; 00494e08
        ;   XREF to: 00494dee (CONDITIONAL_JUMP)  ; LAB_00494dee
    MOV EAX,0xffffffff                  ; 00494e0a
        ;   Label: LAB_00494e0a
    POP EBP                             ; 00494e0f
    POP EDI                             ; 00494e10
    POP ESI                             ; 00494e11
    POP EBX                             ; 00494e12
    RET                                 ; 00494e13
    MOV EAX,EBX                         ; 00494e14
        ;   Label: LAB_00494e14
    POP EBP                             ; 00494e16
    POP EDI                             ; 00494e17
    POP ESI                             ; 00494e18
    POP EBX                             ; 00494e19
    RET                                 ; 00494e1a

