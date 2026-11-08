; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00479ba0(int param_1)
;
;
; XREF[1]:
;   FUN_00479ec0 at 00479ec1
;
; Called Functions:
;   FUN_004fc9c0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00479ba0
        ;   Label: FUN_00479ba0
    PUSH EDI                            ; 00479ba1
    PUSH EBP                            ; 00479ba2
    SUB ESP,0x3c                        ; 00479ba3
    MOV ESI,dword ptr [ESP + 0x4c]      ; 00479ba6
    MOV EDX,dword ptr [ESI + 0x24]      ; 00479baa
    XOR EDI,EDI                         ; 00479bad
    TEST EDX,EDX                        ; 00479baf
    JLE 0x00479c62                      ; 00479bb1
        ;   XREF to: 00479c62 (CONDITIONAL_JUMP)  ; LAB_00479c62
    PUSH EBX                            ; 00479bb7
    XOR EBX,EBX                         ; 00479bb8
    MOV dword ptr [ESP + 0x8],0x3       ; 00479bba
        ;   Label: LAB_00479bba
    MOV EAX,dword ptr [ESI + 0x34]      ; 00479bc2
    MOV EAX,dword ptr [EBX + EAX*0x1]   ; 00479bc5
    MOV dword ptr [ESP + 0xc],EAX       ; 00479bc8
    MOV EAX,dword ptr [ESI + 0x34]      ; 00479bcc
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x4] ; 00479bcf
    MOV dword ptr [ESP + 0x10],EAX      ; 00479bd3
    MOV EAX,dword ptr [ESI + 0x34]      ; 00479bd7
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x8] ; 00479bda
    MOV dword ptr [ESP + 0x14],EAX      ; 00479bde
    MOV EAX,dword ptr [ESI + 0x34]      ; 00479be2
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0xc] ; 00479be5
    MOV dword ptr [ESP + 0x18],EAX      ; 00479be9
    MOV EAX,dword ptr [ESI + 0x34]      ; 00479bed
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x10] ; 00479bf0
    MOV dword ptr [ESP + 0x1c],EAX      ; 00479bf4
    MOV EAX,dword ptr [ESI + 0x34]      ; 00479bf8
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x14] ; 00479bfb
    MOV dword ptr [ESP + 0x28],EAX      ; 00479bff
    MOV EAX,dword ptr [ESI + 0x34]      ; 00479c03
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x18] ; 00479c06
    MOV dword ptr [ESP + 0x34],EAX      ; 00479c0a
    LEA EAX,[ESP + 0x4]                 ; 00479c0e
    PUSH EAX                            ; 00479c12
    MOV EBP,dword ptr [ESI + 0x2c]      ; 00479c13
    PUSH EBP                            ; 00479c16
    CALL FUN_004fc9c0                   ; 00479c17
        ;   XREF to: 004fc9c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc9c0()
    MOV EAX,dword ptr [ESI + 0x34]      ; 00479c1c
    ADD ESP,0x8                         ; 00479c1f
    LEA EDX,[EAX + EBX*0x1]             ; 00479c22
    MOV EAX,dword ptr [ESP + 0xc]       ; 00479c25
    MOV dword ptr [EDX],EAX             ; 00479c29
    MOV EAX,dword ptr [ESI + 0x34]      ; 00479c2b
    LEA EDX,[EAX + EBX*0x1]             ; 00479c2e
    MOV EAX,dword ptr [ESP + 0x10]      ; 00479c31
    MOV dword ptr [EDX + 0x4],EAX       ; 00479c35
    MOV EAX,dword ptr [ESI + 0x34]      ; 00479c38
    LEA EDX,[EAX + EBX*0x1]             ; 00479c3b
    MOV EAX,dword ptr [ESP + 0x14]      ; 00479c3e
    MOV dword ptr [EDX + 0x8],EAX       ; 00479c42
    MOV EAX,dword ptr [ESI + 0x34]      ; 00479c45
    LEA EDX,[EAX + EBX*0x1]             ; 00479c48
    MOV EAX,dword ptr [ESP + 0x18]      ; 00479c4b
    MOV dword ptr [EDX + 0xc],EAX       ; 00479c4f
    INC EDI                             ; 00479c52
    MOV EAX,dword ptr [ESI + 0x24]      ; 00479c53
    ADD EBX,0x20                        ; 00479c56
    CMP EDI,EAX                         ; 00479c59
    JL 0x00479bba                       ; 00479c5b
        ;   XREF to: 00479bba (CONDITIONAL_JUMP)  ; LAB_00479bba
    POP EBX                             ; 00479c61
    ADD ESP,0x3c                        ; 00479c62
        ;   Label: LAB_00479c62
    POP EBP                             ; 00479c65
    POP EDI                             ; 00479c66
    POP ESI                             ; 00479c67
    RET                                 ; 00479c68

