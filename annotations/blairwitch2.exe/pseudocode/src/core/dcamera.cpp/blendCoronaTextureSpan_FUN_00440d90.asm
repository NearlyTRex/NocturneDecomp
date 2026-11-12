; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_blendCoronaTextureSpan_FUN_00440d90(int scanline_y,int x_start,int x_end,SCoronaLightEntry *source_entry)
;
; Parameters:
; int              Stack[0x4]:4   scanline_y
; int              Stack[0x8]:4   x_start
; int              Stack[0xc]:4   x_end
; SCoronaLightEntry * Stack[0x10]:4   source_entry
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_renderGlobeCoronas_FUN_00440e90 at 00441138
;
; Referenced Globals:
;   undefined4 DAT_01510718
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00440d90
        ;   Label: core_dcamera.cpp_blendCoronaTextureSpan_FUN_00440d90
    PUSH ESI                            ; 00440d91
    PUSH EDI                            ; 00440d92
    PUSH EBP                            ; 00440d93
    MOV EBP,ESP                         ; 00440d94
    SUB ESP,0x10                        ; 00440d96
    MOV ECX,dword ptr [EBP + 0x18]      ; 00440d99
    MOV EDX,dword ptr [EBP + 0x14]      ; 00440d9c
    LEA EAX,[EDX*0x4 + 0x0]             ; 00440d9f
    ADD EAX,EDX                         ; 00440da6
    MOV EDX,0xaf5218                    ; 00440da8
    SHL EAX,0x6                         ; 00440dad
    ADD EDX,EAX                         ; 00440db0
    ADD EDX,ECX                         ; 00440db2
    MOV dword ptr [EBP + -0x10],EDX     ; 00440db4
    MOV EDX,dword ptr [EBP + 0x20]      ; 00440db7
    ADD EDX,0x784                       ; 00440dba
    ADD EAX,EDX                         ; 00440dc0
    ADD EAX,ECX                         ; 00440dc2
    MOV dword ptr [EBP + -0xc],EAX      ; 00440dc4
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00440dc7
    SUB EAX,ECX                         ; 00440dca
    MOV dword ptr [EBP + -0x8],EAX      ; 00440dcc
    MOV EAX,[0x01510718]                ; 00440dcf | DAT_01510718
    MOV EAX,dword ptr [EAX + 0x3c]      ; 00440dd4
    MOV dword ptr [EBP + -0x4],EAX      ; 00440dd7
    MOV ECX,dword ptr [EBP + 0xfffffff8] ; 00440dda
    MOV ESI,dword ptr [EBP + 0xfffffff4] ; 00440de0
    MOV EDI,dword ptr [EBP + 0xfffffff0] ; 00440de6
    MOV EBX,dword ptr [EBP + 0xfffffffc] ; 00440dec
    SHR EBX,0xa                         ; 00440df2
    PXOR MM7,MM7                        ; 00440df5
    MOVD MM3,EBX                        ; 00440df8
    MOVD MM4,EBX                        ; 00440dfb
    MOVD MM5,EBX                        ; 00440dfe
    MOVD MM6,EBX                        ; 00440e01
    PSLLQ MM3,0x18                      ; 00440e04
    PSLLQ MM4,0x10                      ; 00440e08
    PSLLQ MM5,0x8                       ; 00440e0c
    POR MM6,MM3                         ; 00440e10
    POR MM6,MM4                         ; 00440e13
    POR MM6,MM5                         ; 00440e16
    PUNPCKLBW MM6,MM7                   ; 00440e19
    TEST EDI,0x3                        ; 00440e1c
        ;   Label: LAB_00440e1c
    JZ 0x00440e3b                       ; 00440e22
        ;   XREF to: 00440e3b (CONDITIONAL_JUMP)  ; LAB_00440e3b
    MOVZX EAX,byte ptr [ESI]            ; 00440e24
    SHL EAX,0x6                         ; 00440e27
    ADD EAX,EBX                         ; 00440e2a
    MOV AL,byte ptr [EAX + 0x1325d00]   ; 00440e2c
    ADD byte ptr [EDI],AL               ; 00440e32
    INC ESI                             ; 00440e34
    INC EDI                             ; 00440e35
    DEC ECX                             ; 00440e36
    JG 0x00440e1c                       ; 00440e37
        ;   XREF to: 00440e1c (CONDITIONAL_JUMP)  ; LAB_00440e1c
    JMP 0x00440e7b                      ; 00440e39
        ;   XREF to: 00440e7b (UNCONDITIONAL_JUMP)  ; LAB_00440e7b
    SUB ECX,0x4                         ; 00440e3b
        ;   Label: LAB_00440e3b
    JL 0x00440e61                       ; 00440e3e
        ;   XREF to: 00440e61 (CONDITIONAL_JUMP)  ; LAB_00440e61
    MOVD MM0,dword ptr [ESI]            ; 00440e40
    MOVD MM1,dword ptr [EDI]            ; 00440e43
    PUNPCKLBW MM0,MM7                   ; 00440e46
    PMULLW MM0,MM6                      ; 00440e49
    PSRLW MM0,0x6                       ; 00440e4c
    PACKUSWB MM0,MM7                    ; 00440e50
    PADDW MM0,MM1                       ; 00440e53
    MOVD dword ptr [EDI],MM0            ; 00440e56
    ADD ESI,0x4                         ; 00440e59
    ADD EDI,0x4                         ; 00440e5c
    JMP 0x00440e3b                      ; 00440e5f
        ;   XREF to: 00440e3b (UNCONDITIONAL_JUMP)  ; LAB_00440e3b
    ADD ECX,0x4                         ; 00440e61
        ;   Label: LAB_00440e61
    JZ 0x00440e7b                       ; 00440e64
        ;   XREF to: 00440e7b (CONDITIONAL_JUMP)  ; LAB_00440e7b
    MOVZX EAX,byte ptr [ESI]            ; 00440e66
        ;   Label: LAB_00440e66
    SHL EAX,0x6                         ; 00440e69
    ADD EAX,EBX                         ; 00440e6c
    MOV AL,byte ptr [EAX + 0x1325d00]   ; 00440e6e
    ADD byte ptr [EDI],AL               ; 00440e74
    INC ESI                             ; 00440e76
    INC EDI                             ; 00440e77
    DEC ECX                             ; 00440e78
    JG 0x00440e66                       ; 00440e79
        ;   XREF to: 00440e66 (CONDITIONAL_JUMP)  ; LAB_00440e66
    EMMS                                ; 00440e7b
        ;   Label: LAB_00440e7b
    MOV ESP,EBP                         ; 00440e7d
    POP EBP                             ; 00440e7f
    POP EDI                             ; 00440e80
    POP ESI                             ; 00440e81
    POP EBX                             ; 00440e82
    RET                                 ; 00440e83

