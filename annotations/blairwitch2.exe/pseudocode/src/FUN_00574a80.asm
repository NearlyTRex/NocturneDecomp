; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00574a80(int param_1,int param_2)
;
;
; XREF[1]:
;   FUN_00575070 at 0057508a
;
; Referenced Globals:
;   undefined4 DAT_01c37788
;   undefined4 DAT_0264bbe4
;   undefined4 DAT_0264bbec
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00574a80
        ;   Label: FUN_00574a80
    PUSH EDI                            ; 00574a81
    PUSH EBP                            ; 00574a82
    MOV ECX,dword ptr [ESP + 0x14]      ; 00574a83
    CMP dword ptr [0x01c37788],0x0      ; 00574a87 | DAT_01c37788
    JZ 0x00574aca                       ; 00574a8e
        ;   XREF to: 00574aca (CONDITIONAL_JUMP)  ; LAB_00574aca
    MOV EDX,dword ptr [ECX + 0x4]       ; 00574a90
    LEA EAX,[EDX*0x4 + 0x0]             ; 00574a93
    SUB EAX,EDX                         ; 00574a9a
    MOV EDX,dword ptr [ESP + 0x10]      ; 00574a9c
    SHL EAX,0x5                         ; 00574aa0
    ADD EDX,0x4                         ; 00574aa3
    ADD EAX,EDX                         ; 00574aa6
    MOV EBX,dword ptr [EAX + 0x50]      ; 00574aa8
    TEST EBX,EBX                        ; 00574aab
    JNZ 0x00574ace                      ; 00574aad
        ;   XREF to: 00574ace (CONDITIONAL_JUMP)  ; LAB_00574ace
    PUSH ESI                            ; 00574aaf
    MOV EBP,dword ptr [EAX + 0x48]      ; 00574ab0
    PUSH EBP                            ; 00574ab3
    MOV EDX,dword ptr [EAX + 0x4c]      ; 00574ab4
    PUSH EDX                            ; 00574ab7
    MOV EBX,dword ptr [EAX + 0x44]      ; 00574ab8
    PUSH EBX                            ; 00574abb
    MOV ESI,dword ptr [EAX]             ; 00574abc
    PUSH ESI                            ; 00574abe
    PUSH ECX                            ; 00574abf
    CALL dword ptr [0x0264bbe4]         ; 00574ac0 | DAT_0264bbe4
    ADD ESP,0x14                        ; 00574ac6
    POP ESI                             ; 00574ac9
    POP EBP                             ; 00574aca
        ;   Label: LAB_00574aca
    POP EDI                             ; 00574acb
    POP EBX                             ; 00574acc
    RET                                 ; 00574acd
    PUSH EBX                            ; 00574ace
        ;   Label: LAB_00574ace
    MOV EDI,dword ptr [EAX]             ; 00574acf
    PUSH EDI                            ; 00574ad1
    PUSH ECX                            ; 00574ad2
    CALL dword ptr [0x0264bbec]         ; 00574ad3 | DAT_0264bbec
    ADD ESP,0xc                         ; 00574ad9
    POP EBP                             ; 00574adc
    POP EDI                             ; 00574add
    POP EBX                             ; 00574ade
    RET                                 ; 00574adf

