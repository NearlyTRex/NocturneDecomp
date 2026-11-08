; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0044efe0(int param_1)
;
;
; XREF[2]:
;   FUN_0044fba0 at 0044fc33
;   FUN_005adeb0 at 005adf89
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;   undefined4 DAT_01ba5c50
;
; Called Functions:
;   FUN_0046ca00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044efe0
        ;   Label: FUN_0044efe0
    PUSH EDI                            ; 0044efe1
    PUSH EBP                            ; 0044efe2
    MOV EDI,dword ptr [ESP + 0x10]      ; 0044efe3
    MOV EDX,dword ptr [EDI + 0x120]     ; 0044efe7
    XOR EBX,EBX                         ; 0044efed
    TEST EDX,EDX                        ; 0044efef
    JLE 0x0044f019                      ; 0044eff1
        ;   XREF to: 0044f019 (CONDITIONAL_JUMP)  ; LAB_0044f019
    PUSH ESI                            ; 0044eff3
    LEA ESI,[EDI + 0x124]               ; 0044eff4
    PUSH ESI                            ; 0044effa
        ;   Label: LAB_0044effa
    MOV ECX,dword ptr [0x0060b280]      ; 0044effb | DAT_0060b280
    PUSH ECX                            ; 0044f001 | DAT_01ba5c50
    INC EBX                             ; 0044f002
    CALL FUN_0046ca00                   ; 0044f003
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; undefined FUN_0046ca00()
    ADD ESI,0x48                        ; 0044f008
    MOV EBP,dword ptr [EDI + 0x120]     ; 0044f00b
    ADD ESP,0x8                         ; 0044f011
    CMP EBX,EBP                         ; 0044f014
    JL 0x0044effa                       ; 0044f016
        ;   XREF to: 0044effa (CONDITIONAL_JUMP)  ; LAB_0044effa
    POP ESI                             ; 0044f018
    POP EBP                             ; 0044f019
        ;   Label: LAB_0044f019
    POP EDI                             ; 0044f01a
    POP EBX                             ; 0044f01b
    RET                                 ; 0044f01c

