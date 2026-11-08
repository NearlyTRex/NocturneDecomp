; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00555970(int *param_1,int param_2,undefined4 param_3)
;
;
; XREF[1]:
;   FUN_004a1d00 at 004a55b9
;
; Called Functions:
;   FUN_005558f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00555970
        ;   Label: FUN_00555970
    PUSH ESI                            ; 00555971
    PUSH EDI                            ; 00555972
    PUSH EBP                            ; 00555973
    MOV EDI,dword ptr [ESP + 0x14]      ; 00555974
    MOV EBP,dword ptr [ESP + 0x18]      ; 00555978
    MOV EDX,dword ptr [EDI]             ; 0055597c
    XOR EBX,EBX                         ; 0055597e
    TEST EDX,EDX                        ; 00555980
    JLE 0x0055599b                      ; 00555982
        ;   XREF to: 0055599b (CONDITIONAL_JUMP)  ; LAB_0055599b
    MOV ESI,EDI                         ; 00555984
    CMP EBP,dword ptr [ESI + 0x150]     ; 00555986
        ;   Label: LAB_00555986
    JZ 0x005559a0                       ; 0055598c
        ;   XREF to: 005559a0 (CONDITIONAL_JUMP)  ; LAB_005559a0
    INC EBX                             ; 0055598e
        ;   Label: LAB_0055598e
    MOV ECX,dword ptr [EDI]             ; 0055598f
    ADD ESI,0x1a4                       ; 00555991
    CMP EBX,ECX                         ; 00555997
    JL 0x00555986                       ; 00555999
        ;   XREF to: 00555986 (CONDITIONAL_JUMP)  ; LAB_00555986
    POP EBP                             ; 0055599b
        ;   Label: LAB_0055599b
    POP EDI                             ; 0055599c
    POP ESI                             ; 0055599d
    POP EBX                             ; 0055599e
    RET                                 ; 0055599f
    PUSH dword ptr [ESP + 0x1c]         ; 005559a0
        ;   Label: LAB_005559a0
    PUSH EBX                            ; 005559a4
    PUSH EDI                            ; 005559a5
    CALL FUN_005558f0                   ; 005559a6
        ;   XREF to: 005558f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005558f0()
    ADD ESP,0xc                         ; 005559ab
    JMP 0x0055598e                      ; 005559ae
        ;   XREF to: 0055598e (UNCONDITIONAL_JUMP)  ; LAB_0055598e

