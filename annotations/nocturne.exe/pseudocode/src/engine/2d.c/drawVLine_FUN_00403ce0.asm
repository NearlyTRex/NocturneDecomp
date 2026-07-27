; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 __cdecl engine_2d_c_drawVLine_FUN_00403ce0(int param_1,int param_2,int param_3)
;
;
; XREF[3]:
;   engine_2d.c_drawRect_FUN_00403e10 at 00403e3d
;   shape_edittool.cpp_draw3DBorder_FUN_00476260 at 0047629b
;   shape_edittool.cpp_draw3DInsetBorder_FUN_00476310 at 004763df
;
; Referenced Globals:
;   TerminatedCString s_engine_2d_c_00577335
;   TerminatedCString s_vLine_invalid_bitsPerPix_00577344
;   undefined4 DAT_005b7624
;   undefined4 DAT_01bd2fa0
;   undefined4 DAT_01bd2fa4
;   undefined4 DAT_01c00c58
;   undefined4 DAT_01c00c5c
;   undefined4 DAT_01c00c60
;   undefined4 DAT_01c00c64
;   undefined4 DAT_01c00c70
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00403ce0
        ;   Label: engine_2d.c_drawVLine_FUN_00403ce0
    PUSH ESI                            ; 00403ce1
    PUSH EDI                            ; 00403ce2
    PUSH EBP                            ; 00403ce3
    MOV ESI,dword ptr [ESP + 0x14]      ; 00403ce4
    MOV EAX,dword ptr [ESP + 0x18]      ; 00403ce8
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00403cec
    CMP ESI,dword ptr [0x01c00c58]      ; 00403cf0 | DAT_01c00c58
    JL 0x00403da0                       ; 00403cf6
        ;   XREF to: 00403da0 (CONDITIONAL_JUMP)  ; LAB_00403da0
    CMP ESI,dword ptr [0x01c00c60]      ; 00403cfc | DAT_01c00c60
    JG 0x00403da0                       ; 00403d02
        ;   XREF to: 00403da0 (CONDITIONAL_JUMP)  ; LAB_00403da0
    MOV EDI,dword ptr [0x01c00c5c]      ; 00403d08 | DAT_01c00c5c
    CMP EAX,EDI                         ; 00403d0e
    JGE 0x00403d14                      ; 00403d10
        ;   XREF to: 00403d14 (CONDITIONAL_JUMP)  ; LAB_00403d14
    MOV EAX,EDI                         ; 00403d12
    MOV EBP,dword ptr [0x01c00c64]      ; 00403d14 | DAT_01c00c64
        ;   Label: LAB_00403d14
    CMP EDX,EBP                         ; 00403d1a
    JLE 0x00403d20                      ; 00403d1c
        ;   XREF to: 00403d20 (CONDITIONAL_JUMP)  ; LAB_00403d20
    MOV EDX,EBP                         ; 00403d1e
    CMP EAX,EDX                         ; 00403d20
        ;   Label: LAB_00403d20
    JG 0x00403da0                       ; 00403d22
        ;   XREF to: 00403da0 (CONDITIONAL_JUMP)  ; LAB_00403da0
    MOV EBX,dword ptr [0x005b7624]      ; 00403d28 | DAT_005b7624
    LEA ECX,[EDX*0x4 + 0x0]             ; 00403d2e
    LEA EBP,[EAX*0x4 + 0x0]             ; 00403d35
    CMP EBX,0x10                        ; 00403d3c
    JNC 0x00403dd7                      ; 00403d3f
        ;   XREF to: 00403dd7 (CONDITIONAL_JUMP)  ; LAB_00403dd7
    CMP EBX,0x8                         ; 00403d45
    JNZ 0x00403dde                      ; 00403d48
        ;   XREF to: 00403dde (CONDITIONAL_JUMP)  ; LAB_00403dde
    MOV EDI,ECX                         ; 00403d4e
    MOV EDX,EBP                         ; 00403d50
    CMP EDX,EDI                         ; 00403d52
        ;   Label: LAB_00403d52
    JG 0x00403da0                       ; 00403d54
        ;   XREF to: 00403da0 (CONDITIONAL_JUMP)  ; LAB_00403da0
    MOV BL,byte ptr [0x01c00c70]        ; 00403d56 | DAT_01c00c70
    MOV ECX,dword ptr [EDX + 0x1bd2fa0] ; 00403d5c | DAT_01bd2fa0 | DAT_01bd2fa4
    ADD EDX,0x4                         ; 00403d62
    INC EAX                             ; 00403d65
    MOV byte ptr [ECX + ESI*0x1],BL     ; 00403d66
    JMP 0x00403d52                      ; 00403d69
        ;   XREF to: 00403d52 (UNCONDITIONAL_JUMP)  ; LAB_00403d52
    MOV EBX,dword ptr [0x01c00c70]      ; 00403d6b | DAT_01c00c70
        ;   Label: LAB_00403d6b
    MOV BX,word ptr [EBX*0x2 + 0x1bff720] ; 00403d71
    CMP EAX,EDX                         ; 00403d79
    JG 0x00403da0                       ; 00403d7b
        ;   XREF to: 00403da0 (CONDITIONAL_JUMP)  ; LAB_00403da0
    LEA EDI,[ESI + ESI*0x1]             ; 00403d7d
    MOV EDX,EBP                         ; 00403d80
    MOV ESI,ECX                         ; 00403d82
    MOV ECX,dword ptr [EDX + 0x1bd2fa0] ; 00403d84 | DAT_01bd2fa0 | DAT_01bd2fa4
        ;   Label: LAB_00403d84
    ADD EDX,0x4                         ; 00403d8a
    INC EAX                             ; 00403d8d
    MOV word ptr [ECX + EDI*0x1],BX     ; 00403d8e
    CMP EDX,ESI                         ; 00403d92
    JLE 0x00403d84                      ; 00403d94
        ;   XREF to: 00403d84 (CONDITIONAL_JUMP)  ; LAB_00403d84
    LEA EAX,[EAX]                       ; 00403d96
    LEA EDX,[EDX]                       ; 00403d9c
    POP EBP                             ; 00403da0
        ;   Label: LAB_00403da0
    POP EDI                             ; 00403da1
    POP ESI                             ; 00403da2
    POP EBX                             ; 00403da3
    RET                                 ; 00403da4
    MOV EDI,dword ptr [0x01c00c70]      ; 00403da5 | DAT_01c00c70
        ;   Label: LAB_00403da5
    MOV EDI,dword ptr [EDI*0x4 + 0x1bff920] ; 00403dab
    CMP EAX,EDX                         ; 00403db2
    JG 0x00403da0                       ; 00403db4
        ;   XREF to: 00403da0 (CONDITIONAL_JUMP)  ; LAB_00403da0
    LEA EBX,[ESI*0x4 + 0x0]             ; 00403db6
    MOV EDX,EBP                         ; 00403dbd
    MOV ESI,ECX                         ; 00403dbf
    MOV ECX,dword ptr [EDX + 0x1bd2fa0] ; 00403dc1 | DAT_01bd2fa0 | DAT_01bd2fa4
        ;   Label: LAB_00403dc1
    ADD EDX,0x4                         ; 00403dc7
    INC EAX                             ; 00403dca
    MOV dword ptr [ECX + EBX*0x1],EDI   ; 00403dcb
    CMP EDX,ESI                         ; 00403dce
    JLE 0x00403dc1                      ; 00403dd0
        ;   XREF to: 00403dc1 (CONDITIONAL_JUMP)  ; LAB_00403dc1
    POP EBP                             ; 00403dd2
    POP EDI                             ; 00403dd3
    POP ESI                             ; 00403dd4
    POP EBX                             ; 00403dd5
    RET                                 ; 00403dd6
    JBE 0x00403d6b                      ; 00403dd7
        ;   XREF to: 00403d6b (CONDITIONAL_JUMP)  ; LAB_00403d6b
        ;   Label: LAB_00403dd7
    CMP EBX,0x20                        ; 00403dd9
    JZ 0x00403da5                       ; 00403ddc
        ;   XREF to: 00403da5 (CONDITIONAL_JUMP)  ; LAB_00403da5
    MOV EAX,0x577335                    ; 00403dde | = "..\\engine\\2d.c"
        ;   Label: LAB_00403dde
    MOV EDX,0x8d6                       ; 00403de3
    PUSH 0x577344                       ; 00403de8 | = "vLine - invalid bitsPerPixel"
    MOV [0x01cc4800],EAX                ; 00403ded | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 00403df2 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00403df8
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 00403dfd
    POP EBP                             ; 00403e00
    POP EDI                             ; 00403e01
    POP ESI                             ; 00403e02
    POP EBX                             ; 00403e03
    RET                                 ; 00403e04

