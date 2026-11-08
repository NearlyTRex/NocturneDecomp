; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046dbd0(int *param_1,ushort *param_2,int param_3,int param_4)
;
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0053ac80 at 0053acc2
;
; Referenced Globals:
;   TerminatedCString s_engine_drender_cpp_005bc5e8
;   TerminatedCString s_CDemonRenderer_demonGZFa_005bc5fe
;   undefined4 DAT_005f2b04
;   undefined4 DAT_005fba20
;   undefined4 DAT_007303fc
;   undefined4 DAT_01c6b5cc
;   undefined4 DAT_01c6cee8
;   undefined4 DAT_01c6e2b4
;   undefined4 DAT_01c6e2b8
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   FUN_00466d50
;   FUN_004673d0
;   FUN_0046ba70
;   FUN_0046e300
;   FUN_004e4330
;   FUN_00515d60
;   FUN_00565db0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046dbd0
        ;   Label: FUN_0046dbd0
    PUSH ESI                            ; 0046dbd1
    PUSH EDI                            ; 0046dbd2
    PUSH EBP                            ; 0046dbd3
    SUB ESP,0x14                        ; 0046dbd4
    MOV ESI,dword ptr [ESP + 0x28]      ; 0046dbd7
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0046dbdb
    MOV EDI,dword ptr [ESP + 0x30]      ; 0046dbdf
    CMP dword ptr [ESP + 0x34],-0x1     ; 0046dbe3
    JZ 0x0046dc18                       ; 0046dbe8
        ;   XREF to: 0046dc18 (CONDITIONAL_JUMP)  ; LAB_0046dc18
    CMP dword ptr [ESI + 0x1c],0x0      ; 0046dbea
        ;   Label: LAB_0046dbea
    JZ 0x0046dc22                       ; 0046dbee
        ;   XREF to: 0046dc22 (CONDITIONAL_JUMP)  ; LAB_0046dc22
    XOR EBP,EBP                         ; 0046dbf0
    TEST EDI,EDI                        ; 0046dbf2
    JLE 0x0046dc10                      ; 0046dbf4
        ;   XREF to: 0046dc10 (CONDITIONAL_JUMP)  ; LAB_0046dc10
    MOV ECX,dword ptr [ESP + 0x34]      ; 0046dbf6
        ;   Label: LAB_0046dbf6
    PUSH ECX                            ; 0046dbfa
    PUSH EBX                            ; 0046dbfb
    PUSH ESI                            ; 0046dbfc
    INC EBP                             ; 0046dbfd
    CALL FUN_0046e300                   ; 0046dbfe
        ;   XREF to: 0046e300 (UNCONDITIONAL_CALL)  ; undefined FUN_0046e300()
    ADD EBX,0x12                        ; 0046dc03
    ADD ESP,0xc                         ; 0046dc06
    CMP EBP,EDI                         ; 0046dc09
    JL 0x0046dbf6                       ; 0046dc0b
        ;   XREF to: 0046dbf6 (CONDITIONAL_JUMP)  ; LAB_0046dbf6
    LEA EAX,[EAX]                       ; 0046dc0d
    ADD ESP,0x14                        ; 0046dc10
        ;   Label: LAB_0046dc10
    POP EBP                             ; 0046dc13
    POP EDI                             ; 0046dc14
    POP ESI                             ; 0046dc15
    POP EBX                             ; 0046dc16
    RET                                 ; 0046dc17
    MOV dword ptr [ESP + 0x34],0x2cd    ; 0046dc18
        ;   Label: LAB_0046dc18
    JMP 0x0046dbea                      ; 0046dc20
        ;   XREF to: 0046dbea (UNCONDITIONAL_JUMP)  ; LAB_0046dbea
    MOV EAX,dword ptr [ESI + 0x10]      ; 0046dc22
        ;   Label: LAB_0046dc22
    TEST EAX,EAX                        ; 0046dc25
    JZ 0x0046dc4e                       ; 0046dc27
        ;   XREF to: 0046dc4e (CONDITIONAL_JUMP)  ; LAB_0046dc4e
    XOR EBP,EBP                         ; 0046dc29
        ;   Label: LAB_0046dc29
    TEST EDI,EDI                        ; 0046dc2b
    JLE 0x0046dc10                      ; 0046dc2d
        ;   XREF to: 0046dc10 (CONDITIONAL_JUMP)  ; LAB_0046dc10
    MOV EDX,dword ptr [ESP + 0x34]      ; 0046dc2f
        ;   Label: LAB_0046dc2f
    PUSH EDX                            ; 0046dc33
    PUSH EBX                            ; 0046dc34
    PUSH ESI                            ; 0046dc35
    INC EBP                             ; 0046dc36
    CALL FUN_0046ba70                   ; 0046dc37
        ;   XREF to: 0046ba70 (UNCONDITIONAL_CALL)  ; undefined FUN_0046ba70()
    ADD EBX,0x12                        ; 0046dc3c
    ADD ESP,0xc                         ; 0046dc3f
    CMP EBP,EDI                         ; 0046dc42
    JL 0x0046dc2f                       ; 0046dc44
        ;   XREF to: 0046dc2f (CONDITIONAL_JUMP)  ; LAB_0046dc2f
    ADD ESP,0x14                        ; 0046dc46
    POP EBP                             ; 0046dc49
    POP EDI                             ; 0046dc4a
    POP ESI                             ; 0046dc4b
    POP EBX                             ; 0046dc4c
    RET                                 ; 0046dc4d
    CMP dword ptr [ESI + 0xc],0x0       ; 0046dc4e
        ;   Label: LAB_0046dc4e
    JNZ 0x0046dc29                      ; 0046dc52
        ;   XREF to: 0046dc29 (CONDITIONAL_JUMP)  ; LAB_0046dc29
    CMP dword ptr [0x007303fc],0x0      ; 0046dc54 | DAT_007303fc
    JZ 0x0046dc29                       ; 0046dc5b
        ;   XREF to: 0046dc29 (CONDITIONAL_JUMP)  ; LAB_0046dc29
    CMP dword ptr [ESI + 0x4],0x0       ; 0046dc5d
    JNZ 0x0046dd6e                      ; 0046dc61
        ;   XREF to: 0046dd6e (CONDITIONAL_JUMP)  ; LAB_0046dd6e
    CMP dword ptr [0x005fba20],0x20     ; 0046dc67 | DAT_005fba20
    JNZ 0x0046ddc6                      ; 0046dc6e
        ;   XREF to: 0046ddc6 (CONDITIONAL_JUMP)  ; LAB_0046ddc6
    MOV dword ptr [0x01c6b5cc],0x560f31 ; 0046dc74 | DAT_01c6b5cc | LAB_00560f31
    MOV EAX,dword ptr [ESP + 0x34]      ; 0046dc7e
        ;   Label: LAB_0046dc7e
    MOV EBP,0x6                         ; 0046dc82
    MOV [0x01c6e2b4],EAX                ; 0046dc87 | DAT_01c6e2b4
    MOV EAX,[0x01c6cee8]                ; 0046dc8c | DAT_01c6cee8
    MOV dword ptr [0x01c6e2b8],EBP      ; 0046dc91 | DAT_01c6e2b8
    TEST EAX,EAX                        ; 0046dc97
    JNZ 0x0046ddd5                      ; 0046dc99
        ;   XREF to: 0046ddd5 (CONDITIONAL_JUMP)  ; LAB_0046ddd5
    TEST EDI,EDI                        ; 0046dc9f
        ;   Label: LAB_0046dc9f
    JLE 0x0046dc10                      ; 0046dca1
        ;   XREF to: 0046dc10 (CONDITIONAL_JUMP)  ; LAB_0046dc10
    XOR EAX,EAX                         ; 0046dca7
    MOV AX,word ptr [EBX]               ; 0046dca9
    MOV dword ptr [ESP],EAX             ; 0046dcac
    XOR EAX,EAX                         ; 0046dcaf
    MOV AX,word ptr [EBX + 0x2]         ; 0046dcb1
    MOV dword ptr [ESP + 0x4],EAX       ; 0046dcb5
    XOR EAX,EAX                         ; 0046dcb9
    MOV AX,word ptr [EBX + 0x4]         ; 0046dcbb
    MOV dword ptr [ESP + 0x8],EAX       ; 0046dcbf
    MOV EAX,dword ptr [ESI + 0x20]      ; 0046dcc3
    TEST EAX,EAX                        ; 0046dcc6
    JNZ 0x0046dd56                      ; 0046dcc8
        ;   XREF to: 0046dd56 (CONDITIONAL_JUMP)  ; LAB_0046dd56
    MOV AX,word ptr [EBX + 0x6]         ; 0046dcce
    MOV ECX,dword ptr [ESP]             ; 0046dcd2
    MOV EDX,EAX                         ; 0046dcd5
    IMUL EAX,ECX,0x30                   ; 0046dcd7
    MOV EBP,dword ptr [ESI]             ; 0046dcda
    SHL EDX,0x8                         ; 0046dcdc
    MOV dword ptr [EAX + EBP*0x1 + 0x18],EDX ; 0046dcdf
    XOR EAX,EAX                         ; 0046dce3
    MOV AX,word ptr [EBX + 0xc]         ; 0046dce5
    MOV EDX,dword ptr [ESP]             ; 0046dce9
    MOV EBP,EAX                         ; 0046dcec
    IMUL EAX,EDX,0x30                   ; 0046dcee
    MOV EDX,dword ptr [ESI]             ; 0046dcf1
    SHL EBP,0x8                         ; 0046dcf3
    MOV dword ptr [EDX + EAX*0x1 + 0x1c],EBP ; 0046dcf6
    IMUL EDX,dword ptr [ESP + 0x4],0x30 ; 0046dcfa
    XOR EAX,EAX                         ; 0046dcff
    MOV AX,word ptr [EBX + 0x8]         ; 0046dd01
    MOV EBP,dword ptr [ESI]             ; 0046dd05
    SHL EAX,0x8                         ; 0046dd07
    MOV dword ptr [EDX + EBP*0x1 + 0x18],EAX ; 0046dd0a
    XOR EAX,EAX                         ; 0046dd0e
    MOV AX,word ptr [EBX + 0xe]         ; 0046dd10
    MOV EDX,dword ptr [ESP + 0x4]       ; 0046dd14
    MOV EBP,EAX                         ; 0046dd18
    IMUL EAX,EDX,0x30                   ; 0046dd1a
    MOV EDX,dword ptr [ESI]             ; 0046dd1d
    SHL EBP,0x8                         ; 0046dd1f
    MOV dword ptr [EDX + EAX*0x1 + 0x1c],EBP ; 0046dd22
    XOR EAX,EAX                         ; 0046dd26
    MOV AX,word ptr [EBX + 0xa]         ; 0046dd28
    MOV ECX,dword ptr [ESP + 0x8]       ; 0046dd2c
    MOV EDX,EAX                         ; 0046dd30
    IMUL EAX,ECX,0x30                   ; 0046dd32
    MOV EBP,dword ptr [ESI]             ; 0046dd35
    SHL EDX,0x8                         ; 0046dd37
    MOV dword ptr [EAX + EBP*0x1 + 0x18],EDX ; 0046dd3a
    XOR EAX,EAX                         ; 0046dd3e
    MOV AX,word ptr [EBX + 0x10]        ; 0046dd40
    MOV EDX,dword ptr [ESP + 0x8]       ; 0046dd44
    MOV EBP,EAX                         ; 0046dd48
    IMUL EAX,EDX,0x30                   ; 0046dd4a
    MOV EDX,dword ptr [ESI]             ; 0046dd4d
    SHL EBP,0x8                         ; 0046dd4f
    MOV dword ptr [EDX + EAX*0x1 + 0x1c],EBP ; 0046dd52
    PUSH 0x3                            ; 0046dd56
        ;   Label: LAB_0046dd56
    LEA EAX,[ESP + 0x4]                 ; 0046dd58
    PUSH EAX                            ; 0046dd5c
    DEC EDI                             ; 0046dd5d
    ADD EBX,0x12                        ; 0046dd5e
    CALL FUN_00466d50                   ; 0046dd61
        ;   XREF to: 00466d50 (UNCONDITIONAL_CALL)  ; undefined FUN_00466d50()
    ADD ESP,0x8                         ; 0046dd66
    JMP 0x0046dc9f                      ; 0046dd69
        ;   XREF to: 0046dc9f (UNCONDITIONAL_JUMP)  ; LAB_0046dc9f
    MOV ECX,0x46f9a6                    ; 0046dd6e | LAB_0046f9a6
        ;   Label: LAB_0046dd6e
    MOV [0x01c6e2b4],EAX                ; 0046dd73 | DAT_01c6e2b4
    MOV [0x01c6e2b8],EAX                ; 0046dd78 | DAT_01c6e2b8
    MOV dword ptr [0x01c6b5cc],ECX      ; 0046dd7d | DAT_01c6b5cc
    TEST EDI,EDI                        ; 0046dd83
    JLE 0x0046dc10                      ; 0046dd85
        ;   XREF to: 0046dc10 (CONDITIONAL_JUMP)  ; LAB_0046dc10
    XOR EAX,EAX                         ; 0046dd8b
        ;   Label: LAB_0046dd8b
    MOV AX,word ptr [EBX]               ; 0046dd8d
    MOV dword ptr [ESP],EAX             ; 0046dd90
    XOR EAX,EAX                         ; 0046dd93
    MOV AX,word ptr [EBX + 0x2]         ; 0046dd95
    MOV dword ptr [ESP + 0x4],EAX       ; 0046dd99
    XOR EAX,EAX                         ; 0046dd9d
    MOV AX,word ptr [EBX + 0x4]         ; 0046dd9f
    PUSH 0x3                            ; 0046dda3
    MOV dword ptr [ESP + 0xc],EAX       ; 0046dda5
    LEA EAX,[ESP + 0x4]                 ; 0046dda9
    PUSH EAX                            ; 0046ddad
    DEC EDI                             ; 0046ddae
    ADD EBX,0x12                        ; 0046ddaf
    CALL FUN_004673d0                   ; 0046ddb2
        ;   XREF to: 004673d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004673d0()
    ADD ESP,0x8                         ; 0046ddb7
    TEST EDI,EDI                        ; 0046ddba
    JG 0x0046dd8b                       ; 0046ddbc
        ;   XREF to: 0046dd8b (CONDITIONAL_JUMP)  ; LAB_0046dd8b
    ADD ESP,0x14                        ; 0046ddbe
    POP EBP                             ; 0046ddc1
    POP EDI                             ; 0046ddc2
    POP ESI                             ; 0046ddc3
    POP EBX                             ; 0046ddc4
    RET                                 ; 0046ddc5
    MOV dword ptr [0x01c6b5cc],0x561713 ; 0046ddc6 | DAT_01c6b5cc | LAB_00561713
        ;   Label: LAB_0046ddc6
    JMP 0x0046dc7e                      ; 0046ddd0
        ;   XREF to: 0046dc7e (UNCONDITIONAL_JUMP)  ; LAB_0046dc7e
    XOR EBP,EBP                         ; 0046ddd5
        ;   Label: LAB_0046ddd5
    MOV dword ptr [ESP + 0x10],EBP      ; 0046ddd7
    TEST EDI,EDI                        ; 0046dddb
    JLE 0x0046de3d                      ; 0046dddd
        ;   XREF to: 0046de3d (CONDITIONAL_JUMP)  ; LAB_0046de3d
    MOV dword ptr [ESP + 0xc],EBP       ; 0046dddf
    PUSH EBX                            ; 0046dde3
        ;   Label: LAB_0046dde3
    CALL FUN_00515d60                   ; 0046dde4
        ;   XREF to: 00515d60 (UNCONDITIONAL_CALL)  ; undefined FUN_00515d60()
    ADD ESP,0x4                         ; 0046dde9
    TEST EAX,EAX                        ; 0046ddec
    JZ 0x0046de2d                       ; 0046ddee
        ;   XREF to: 0046de2d (CONDITIONAL_JUMP)  ; LAB_0046de2d
    MOV EAX,dword ptr [ESP + 0xc]       ; 0046ddf0
    INC EBP                             ; 0046ddf4
    LEA EDX,[EAX + 0x4]                 ; 0046ddf5
    MOV dword ptr [EAX + 0x5f2b04],EBX  ; 0046ddf8 | DAT_005f2b04
    MOV dword ptr [ESP + 0xc],EDX       ; 0046ddfe
    CMP EBP,0x7d0                       ; 0046de02
    JL 0x0046de2d                       ; 0046de08
        ;   XREF to: 0046de2d (CONDITIONAL_JUMP)  ; LAB_0046de2d
    PUSH EBP                            ; 0046de0a
    MOV ECX,0x5bc5e8                    ; 0046de0b | = "..\\engine\\drender.cpp"
    MOV EAX,0xa30                       ; 0046de10
    PUSH 0x5bc5fe                       ; 0046de15 | = "CDemonRenderer::demonGZFacetList - To..."
    MOV dword ptr [0x01d71de0],ECX      ; 0046de1a | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 0046de20 | DAT_01d71de4
    CALL FUN_004e4330                   ; 0046de25
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x8                         ; 0046de2a
    MOV ECX,dword ptr [ESP + 0x10]      ; 0046de2d
        ;   Label: LAB_0046de2d
    INC ECX                             ; 0046de31
    ADD EBX,0x12                        ; 0046de32
    MOV dword ptr [ESP + 0x10],ECX      ; 0046de35
    CMP EDI,ECX                         ; 0046de39
    JG 0x0046dde3                       ; 0046de3b
        ;   XREF to: 0046dde3 (CONDITIONAL_JUMP)  ; LAB_0046dde3
    TEST EBP,EBP                        ; 0046de3d
        ;   Label: LAB_0046de3d
    JLE 0x0046dc10                      ; 0046de3f
        ;   XREF to: 0046dc10 (CONDITIONAL_JUMP)  ; LAB_0046dc10
    MOV EDX,dword ptr [0x01c6e2b4]      ; 0046de45 | DAT_01c6e2b4
    PUSH EDX                            ; 0046de4b
    PUSH EBP                            ; 0046de4c
    PUSH 0x5f2b04                       ; 0046de4d | DAT_005f2b04
    MOV ECX,dword ptr [ESI]             ; 0046de52
    PUSH ECX                            ; 0046de54
    CALL FUN_00565db0                   ; 0046de55
        ;   XREF to: 00565db0 (UNCONDITIONAL_CALL)  ; undefined FUN_00565db0()
    ADD ESP,0x10                        ; 0046de5a
    ADD ESP,0x14                        ; 0046de5d
    POP EBP                             ; 0046de60
    POP EDI                             ; 0046de61
    POP ESI                             ; 0046de62
    POP EBX                             ; 0046de63
    RET                                 ; 0046de64

