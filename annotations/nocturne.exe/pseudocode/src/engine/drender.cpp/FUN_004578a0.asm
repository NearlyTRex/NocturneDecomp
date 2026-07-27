; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_drender_cpp_FUN_004578a0(int param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01b4cd30
;   undefined4 DAT_01b4cd34
;   undefined4 DAT_01b4d1b4
;   undefined4 DAT_01b4d1b8
;   undefined4 DAT_01b4d1fc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004578a0
        ;   Label: engine_drender.cpp_FUN_004578a0
    PUSH EDI                            ; 004578a1
    PUSH EBP                            ; 004578a2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004578a3
    MOV EDI,dword ptr [ESP + 0x14]      ; 004578a7
    MOV EDX,dword ptr [EDI + 0x14]      ; 004578ab
    MOV EAX,dword ptr [EBX + 0x14]      ; 004578ae
    SAR EDX,0x10                        ; 004578b1
    SAR EAX,0x10                        ; 004578b4
    CMP EAX,EDX                         ; 004578b7
    JZ 0x0045799e                       ; 004578b9
        ;   XREF to: 0045799e (CONDITIONAL_JUMP)  ; LAB_0045799e
    PUSH ESI                            ; 004578bf
    MOV ESI,dword ptr [EDI + 0x14]      ; 004578c0
    CMP ESI,dword ptr [EBX + 0x14]      ; 004578c3
    JGE 0x004578d4                      ; 004578c6
        ;   XREF to: 004578d4 (CONDITIONAL_JUMP)  ; LAB_004578d4
    MOV ECX,EBX                         ; 004578c8
    MOV EBX,EDI                         ; 004578ca
    MOV EDI,ECX                         ; 004578cc
    MOV ECX,EAX                         ; 004578ce
    MOV EAX,EDX                         ; 004578d0
    MOV EDX,ECX                         ; 004578d2
    MOV ESI,dword ptr [0x01b4cd30]      ; 004578d4 | DAT_01b4cd30
        ;   Label: LAB_004578d4
    LEA ECX,[ESI*0x8 + 0x0]             ; 004578da
    ADD ECX,ESI                         ; 004578e1
    MOV ESI,0x1b4cd34                   ; 004578e3
    SHL ECX,0x3                         ; 004578e8
    ADD ESI,ECX                         ; 004578eb
    MOV dword ptr [ESI],EAX             ; 004578ed | DAT_01b4cd34
    MOV EBP,dword ptr [0x01b4d1b4]      ; 004578ef | DAT_01b4d1b4
    MOV dword ptr [ESI + 0x4],EDX       ; 004578f5
    CMP EAX,EBP                         ; 004578f8
    JGE 0x00457901                      ; 004578fa
        ;   XREF to: 00457901 (CONDITIONAL_JUMP)  ; LAB_00457901
    MOV [0x01b4d1b4],EAX                ; 004578fc | DAT_01b4d1b4
    CMP EDX,dword ptr [0x01b4d1b8]      ; 00457901 | DAT_01b4d1b8
        ;   Label: LAB_00457901
    JLE 0x0045790f                      ; 00457907
        ;   XREF to: 0045790f (CONDITIONAL_JUMP)  ; LAB_0045790f
    MOV dword ptr [0x01b4d1b8],EDX      ; 00457909 | DAT_01b4d1b8
    MOV EDX,dword ptr [EBX + 0x14]      ; 0045790f
        ;   Label: LAB_0045790f
    MOV ECX,dword ptr [EDI + 0x14]      ; 00457912
    SUB ECX,EDX                         ; 00457915
    CMP ECX,0x10000                     ; 00457917
    JNC 0x004579a2                      ; 0045791d
        ;   XREF to: 004579a2 (CONDITIONAL_JUMP)  ; LAB_004579a2
    XOR ECX,ECX                         ; 00457923
    MOV EDX,dword ptr [EDI + 0x10]      ; 00457925
        ;   Label: LAB_00457925
    MOV EBP,dword ptr [EBX + 0x10]      ; 00457928
    MOV EAX,ECX                         ; 0045792b
    SUB EDX,EBP                         ; 0045792d
    IMUL EDX                            ; 0045792f
    SHRD EAX,EDX,0x10                   ; 00457931
    MOV dword ptr [ESI + 0xc],EAX       ; 00457935
    MOV EAX,dword ptr [EDI + 0x8]       ; 00457938
    MOV EDX,dword ptr [EBX + 0x8]       ; 0045793b
    SUB EAX,EDX                         ; 0045793e
    MOV EDX,EAX                         ; 00457940
    SHL EDX,0x8                         ; 00457942
    MOV EAX,ECX                         ; 00457945
    IMUL EDX                            ; 00457947
    SHRD EAX,EDX,0x10                   ; 00457949
    MOV dword ptr [ESI + 0x2c],EAX      ; 0045794d
    MOV ECX,dword ptr [EBX + 0x14]      ; 00457950
    AND ECX,0xffff                      ; 00457953
    XOR CX,0xffff                       ; 00457959
    MOV EDX,dword ptr [ESI + 0xc]       ; 0045795d
    MOV EAX,ECX                         ; 00457960
    IMUL EDX                            ; 00457962
    SHRD EAX,EDX,0x10                   ; 00457964
    MOV EDX,EAX                         ; 00457968
    MOV EAX,dword ptr [EBX + 0x10]      ; 0045796a
    MOV EDI,dword ptr [0x01b4d1fc]      ; 0045796d | DAT_01b4d1fc
    ADD EAX,EDX                         ; 00457973
    MOV EDX,dword ptr [ESI + 0x2c]      ; 00457975
    MOV dword ptr [ESI + 0x8],EAX       ; 00457978
    MOV EAX,ECX                         ; 0045797b
    MOV EBX,dword ptr [EBX + 0x8]       ; 0045797d
    IMUL EDX                            ; 00457980
    SHRD EAX,EDX,0x10                   ; 00457982
    SHL EBX,0x8                         ; 00457986
    MOV EBP,dword ptr [0x01b4cd30]      ; 00457989 | DAT_01b4cd30
    SUB EBX,EDI                         ; 0045798f
    INC EBP                             ; 00457991
    ADD EBX,EAX                         ; 00457992
    MOV dword ptr [0x01b4cd30],EBP      ; 00457994 | DAT_01b4cd30
    MOV dword ptr [ESI + 0x28],EBX      ; 0045799a
    POP ESI                             ; 0045799d
    POP EBP                             ; 0045799e
        ;   Label: LAB_0045799e
    POP EDI                             ; 0045799f
    POP EBX                             ; 004579a0
    RET                                 ; 004579a1
    MOV EAX,0xffffffff                  ; 004579a2
        ;   Label: LAB_004579a2
    XOR EDX,EDX                         ; 004579a7
    DIV ECX                             ; 004579a9
    MOV ECX,EAX                         ; 004579ab
    JMP 0x00457925                      ; 004579ad
        ;   XREF to: 00457925 (UNCONDITIONAL_JUMP)  ; LAB_00457925

