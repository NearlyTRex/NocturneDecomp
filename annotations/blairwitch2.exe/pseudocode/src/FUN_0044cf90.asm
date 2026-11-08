; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0044cf90(int param_1,int *param_2)
;
;
; XREF[1]:
;   FUN_0041a670 at 0041a7ed
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044cf90
        ;   Label: FUN_0044cf90
    PUSH ESI                            ; 0044cf91
    PUSH EDI                            ; 0044cf92
    PUSH EBP                            ; 0044cf93
    MOV EDX,dword ptr [ESP + 0x18]      ; 0044cf94
    MOV EAX,dword ptr [ESP + 0x18]      ; 0044cf98
    MOV EDX,dword ptr [EDX]             ; 0044cf9c
    MOV EAX,dword ptr [EAX]             ; 0044cf9e
    SAR EDX,0x1f                        ; 0044cfa0
    SHL EDX,0x3                         ; 0044cfa3
    SBB EAX,EDX                         ; 0044cfa6
    SAR EAX,0x3                         ; 0044cfa8
    MOV EDX,dword ptr [ESP + 0x18]      ; 0044cfab
    MOV ESI,EAX                         ; 0044cfaf
    MOV EDX,dword ptr [EDX + 0x4]       ; 0044cfb1
    MOV EAX,dword ptr [ESP + 0x18]      ; 0044cfb4
    SAR EDX,0x1f                        ; 0044cfb8
    MOV EAX,dword ptr [EAX + 0x4]       ; 0044cfbb
    SHL EDX,0x3                         ; 0044cfbe
    SBB EAX,EDX                         ; 0044cfc1
    SAR EAX,0x3                         ; 0044cfc3
    MOV EDX,dword ptr [ESP + 0x18]      ; 0044cfc6
    MOV ECX,EAX                         ; 0044cfca
    MOV EAX,dword ptr [ESP + 0x14]      ; 0044cfcc
    MOV EDX,dword ptr [EDX + 0x8]       ; 0044cfd0
    MOV EBX,dword ptr [EAX + 0x1cc0]    ; 0044cfd3
    IMUL EDX,EBX                        ; 0044cfd9
    MOV EAX,EDX                         ; 0044cfdc
    SAR EDX,0x1f                        ; 0044cfde
    SHL EDX,0x3                         ; 0044cfe1
    SBB EAX,EDX                         ; 0044cfe4
    SAR EAX,0x3                         ; 0044cfe6
    MOV EBP,dword ptr [ESP + 0x14]      ; 0044cfe9
    MOV EBP,dword ptr [EBP + 0x2fa0]    ; 0044cfed
    MOV EDI,dword ptr [ESP + 0x18]      ; 0044cff3
    ADD EBP,EAX                         ; 0044cff7
    MOV EAX,dword ptr [ESP + 0x18]      ; 0044cff9
    MOV EDI,dword ptr [EDI + 0x8]       ; 0044cffd
    CMP EDI,dword ptr [EAX + 0xc]       ; 0044d000
    JG 0x0044d044                       ; 0044d003
        ;   XREF to: 0044d044 (CONDITIONAL_JUMP)  ; LAB_0044d044
    MOV EDX,ESI                         ; 0044d005
        ;   Label: LAB_0044d005
    CMP ESI,ECX                         ; 0044d007
    JG 0x0044d019                       ; 0044d009
        ;   XREF to: 0044d019 (CONDITIONAL_JUMP)  ; LAB_0044d019
    LEA EAX,[ESI + EBP*0x1]             ; 0044d00b
    CMP byte ptr [EAX],0x0              ; 0044d00e
        ;   Label: LAB_0044d00e
    JNZ 0x0044d04b                      ; 0044d011
        ;   XREF to: 0044d04b (CONDITIONAL_JUMP)  ; LAB_0044d04b
    INC EDX                             ; 0044d013
    INC EAX                             ; 0044d014
    CMP EDX,ECX                         ; 0044d015
    JLE 0x0044d00e                      ; 0044d017
        ;   XREF to: 0044d00e (CONDITIONAL_JUMP)  ; LAB_0044d00e
    MOV EDX,dword ptr [ESP + 0x14]      ; 0044d019
        ;   Label: LAB_0044d019
    MOV EAX,dword ptr [ESP + 0x14]      ; 0044d01d
    MOV EDX,dword ptr [EDX + 0x1cc0]    ; 0044d021
    MOV EAX,dword ptr [EAX + 0x1cc0]    ; 0044d027
    SAR EDX,0x1f                        ; 0044d02d
    SHL EDX,0x3                         ; 0044d030
    SBB EAX,EDX                         ; 0044d033
    SAR EAX,0x3                         ; 0044d035
    ADD EBP,EAX                         ; 0044d038
    MOV EAX,dword ptr [ESP + 0x18]      ; 0044d03a
    INC EDI                             ; 0044d03e
    CMP EDI,dword ptr [EAX + 0xc]       ; 0044d03f
    JLE 0x0044d005                      ; 0044d042
        ;   XREF to: 0044d005 (CONDITIONAL_JUMP)  ; LAB_0044d005
    XOR EAX,EAX                         ; 0044d044
        ;   Label: LAB_0044d044
    POP EBP                             ; 0044d046
    POP EDI                             ; 0044d047
    POP ESI                             ; 0044d048
    POP EBX                             ; 0044d049
    RET                                 ; 0044d04a
    MOV EAX,0x1                         ; 0044d04b
        ;   Label: LAB_0044d04b
    POP EBP                             ; 0044d050
    POP EDI                             ; 0044d051
    POP ESI                             ; 0044d052
    POP EBX                             ; 0044d053
    RET                                 ; 0044d054

