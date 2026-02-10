; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_script_cpp_CScript_FUN_00559b20(CScript *this_ptr)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_game.cpp_CGame_processFrame_FUN_004da100 at 004da55e
;
; Referenced Globals:
;   float FLOAT_00641794 = 0.3500000
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   CGame* g_CGamePtr = 02d81a9c
;   CBitFont* g_MediumFont
;   CBitFont* g_TinyFont
;   CBitFont* g_SmallEditorFont
;   CBitFont* g_MicroFont
;   int g_ClipTop
;   CGame g_CGameInstance
;   undefined4 DAT_02d81aac
;   undefined4 DAT_02d81cc4
;   int g_MessageCount
;   int INT_031061e0
;   undefined4 DAT_031061e8
;   ... and 2 more
;
; Called Functions:
;   core_charactr.cpp_FUN_0042f9e0
;   core_script.cpp_CScript_FUN_00559ac0
;   engine_2d.c_fillRectColor_FUN_00403170
;   engine_3d.c_setRenderAlpha_FUN_00406d80
;   engine_font.cpp_CBitFont_drawText_FUN_004cda80
;   engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
;   engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
;   engine_font.cpp_CBitFont_wrapText_FUN_004d0010
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00559b20
        ;   Label: core_script.cpp_CScript_FUN_00559b20
    PUSH ESI                            ; 00559b21
    PUSH EDI                            ; 00559b22
    PUSH EBP                            ; 00559b23
    SUB ESP,0x20                        ; 00559b24
    MOV EDI,dword ptr [ESP + 0x34]      ; 00559b27
    MOV EAX,[0x0067b654]                ; 00559b2b | g_CGameInstance | g_CGamePtr
    MOV EDX,dword ptr [EAX + 0x228]     ; 00559b30 | DAT_02d81cc4
    TEST EDX,EDX                        ; 00559b36
    JNZ 0x00559d41                      ; 00559b38
        ;   XREF to: 00559d41 (CONDITIONAL_JUMP)  ; LAB_00559d41
    PUSH EAX                            ; 00559b3e | g_CGameInstance
    CALL core_charactr.cpp_FUN_0042f9e0 ; 00559b3f
        ;   XREF to: 0042f9e0 (UNCONDITIONAL_CALL)  ; float core_charactr.cpp_FUN_0042f9e0()
    MOV dword ptr [ESP + 0x20],EAX      ; 00559b44
    FLD float ptr [ESP + 0x20]          ; 00559b48
    FDIV float ptr [0x00641794]         ; 00559b4c | FLOAT_00641794
    FSUBR float ptr [0x0310f4a0]        ; 00559b52 | g_ScriptTimeScale
    ADD ESP,0x4                         ; 00559b58
        ;   Label: LAB_00559b58
    FSTP float ptr [0x0310f4a0]         ; 00559b5b | g_ScriptTimeScale
    FLD float ptr [0x0310f4a0]          ; 00559b61 | g_ScriptTimeScale
    FLDZ                                ; 00559b67
    FCOMPP                              ; 00559b69
    FNSTSW AX                           ; 00559b6b
    SAHF                                ; 00559b6d
    JBE 0x00559b78                      ; 00559b6e
        ;   XREF to: 00559b78 (CONDITIONAL_JUMP)  ; LAB_00559b78
    XOR ECX,ECX                         ; 00559b70
    MOV dword ptr [0x0310f4a0],ECX      ; 00559b72 | g_ScriptTimeScale
    FLD float ptr [0x0310f4a0]          ; 00559b78 | g_ScriptTimeScale
        ;   Label: LAB_00559b78
    FLD1                                ; 00559b7e
    FCOMPP                              ; 00559b80
    FNSTSW AX                           ; 00559b82
    SAHF                                ; 00559b84
    JNC 0x00559b91                      ; 00559b85
        ;   XREF to: 00559b91 (CONDITIONAL_JUMP)  ; LAB_00559b91
    MOV dword ptr [0x0310f4a0],0x3f800000 ; 00559b87 | g_ScriptTimeScale
    MOV EAX,[0x00679394]                ; 00559b91 | g_WindowWidth
        ;   Label: LAB_00559b91
    MOV EBX,dword ptr [0x00679398]      ; 00559b96 | g_WindowHeight
    PUSH EDI                            ; 00559b9c
    XOR ESI,ESI                         ; 00559b9d
    MOV dword ptr [ESP + 0x10],EAX      ; 00559b9f
    CALL core_script.cpp_CScript_FUN_00559ac0 ; 00559ba3
        ;   XREF to: 00559ac0 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_FUN_00559ac0(CScript * this_ptr)
    MOV dword ptr [ESP + 0xc],ESI       ; 00559ba8
    ADD ESP,0x4                         ; 00559bac
    MOV ESI,EAX                         ; 00559baf
    TEST EAX,EAX                        ; 00559bb1
    JLE 0x00559bf2                      ; 00559bb3
        ;   XREF to: 00559bf2 (CONDITIONAL_JUMP)  ; LAB_00559bf2
    CMP dword ptr [0x031061e0],0x2      ; 00559bb5 | INT_031061e0
    JZ 0x00559bd4                       ; 00559bbc
        ;   XREF to: 00559bd4 (CONDITIONAL_JUMP)  ; LAB_00559bd4
    PUSH 0x0                            ; 00559bbe
    DEC EAX                             ; 00559bc0
    PUSH EAX                            ; 00559bc1
    MOV EAX,dword ptr [ESP + 0x14]      ; 00559bc2
    DEC EAX                             ; 00559bc6
    PUSH EAX                            ; 00559bc7
    PUSH 0x0                            ; 00559bc8
    PUSH 0x0                            ; 00559bca
    CALL engine_2d.c_fillRectColor_FUN_00403170 ; 00559bcc
        ;   XREF to: 00403170 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectColor_FUN_00403170(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x14                        ; 00559bd1
    PUSH 0x0                            ; 00559bd4
        ;   Label: LAB_00559bd4
    LEA EAX,[EBX + -0x1]                ; 00559bd6
    PUSH EAX                            ; 00559bd9
    MOV EAX,dword ptr [ESP + 0x14]      ; 00559bda
    DEC EAX                             ; 00559bde
    PUSH EAX                            ; 00559bdf
    MOV EAX,EBX                         ; 00559be0
    SUB EAX,ESI                         ; 00559be2
    PUSH EAX                            ; 00559be4
    MOV EAX,dword ptr [ESP + 0x18]      ; 00559be5
    PUSH EAX                            ; 00559be9
    CALL engine_2d.c_fillRectColor_FUN_00403170 ; 00559bea
        ;   XREF to: 00403170 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectColor_FUN_00403170(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x14                        ; 00559bef
    MOV EAX,[0x02d0255c]                ; 00559bf2 | g_ClipTop
        ;   Label: LAB_00559bf2
    MOV dword ptr [ESP + 0x4],EAX       ; 00559bf7
    MOV EAX,EBX                         ; 00559bfb
    SUB EAX,ESI                         ; 00559bfd
    MOV dword ptr [ESP],EAX             ; 00559bff
    CMP byte ptr [EDI + 0x54],0x0       ; 00559c02
    JZ 0x00559d30                       ; 00559c06
        ;   XREF to: 00559d30 (CONDITIONAL_JUMP)  ; LAB_00559d30
    MOV EAX,[0x0067b654]                ; 00559c0c | g_CGamePtr
    CMP dword ptr [EAX + 0x10],0x0      ; 00559c11 | DAT_02d81aac
    JZ 0x00559d30                       ; 00559c15
        ;   XREF to: 00559d30 (CONDITIONAL_JUMP)  ; LAB_00559d30
    MOV ECX,dword ptr [0x00679398]      ; 00559c1b | g_WindowHeight
    MOV EBP,dword ptr [0x020a5718]      ; 00559c21 | g_MediumFont
    CMP ECX,0x1e0                       ; 00559c27
    JGE 0x00559c35                      ; 00559c2d
        ;   XREF to: 00559c35 (CONDITIONAL_JUMP)  ; LAB_00559c35
    MOV EBP,dword ptr [0x020a571c]      ; 00559c2f | g_TinyFont
    CMP dword ptr [0x00679398],0x180    ; 00559c35 | g_WindowHeight
        ;   Label: LAB_00559c35
    JGE 0x00559c54                      ; 00559c3f
        ;   XREF to: 00559c54 (CONDITIONAL_JUMP)  ; LAB_00559c54
    CMP dword ptr [0x02fa8cd0],0x0      ; 00559c41 | g_MessageCount
    JZ 0x00559d66                       ; 00559c48
        ;   XREF to: 00559d66 (CONDITIONAL_JUMP)  ; LAB_00559d66
    MOV EBP,dword ptr [0x020a5724]      ; 00559c4e | g_SmallEditorFont
    MOV EDX,dword ptr [0x00679394]      ; 00559c54 | g_WindowWidth
        ;   Label: LAB_00559c54
    LEA EAX,[EDX*0x8 + 0x0]             ; 00559c5a
    ADD EDX,EAX                         ; 00559c61
    MOV ESI,0xa                         ; 00559c63
    MOV EAX,EDX                         ; 00559c68
    SAR EDX,0x1f                        ; 00559c6a
    IDIV ESI                            ; 00559c6d
    PUSH EAX                            ; 00559c6f
    PUSH 0x400                          ; 00559c70
    PUSH ESI                            ; 00559c75
    PUSH 0x31061e8                      ; 00559c76 | DAT_031061e8
    LEA EAX,[EDI + 0x54]                ; 00559c7b
    PUSH EAX                            ; 00559c7e
    PUSH EBP                            ; 00559c7f
    CALL engine_font.cpp_CBitFont_wrapText_FUN_004d0010 ; 00559c80
        ;   XREF to: 004d0010 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_wrapText_FUN_004d0010(CBitFont * this_ptr, char * source_text, char * dest_buffer, int max_lines, ...)
    ADD ESP,0x18                        ; 00559c85
    PUSH 0x58                           ; 00559c88
    PUSH EBP                            ; 00559c8a
    MOV ESI,EAX                         ; 00559c8b
    MOV dword ptr [ESP + 0x20],EAX      ; 00559c8d
    CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0 ; 00559c91
        ;   XREF to: 004d01d0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0(CBitFont * this_ptr, int char_code)
    MOV EDI,EAX                         ; 00559c96
    IMUL EDI,ESI                        ; 00559c98
    ADD ESP,0x8                         ; 00559c9b
    MOV EDX,dword ptr [ESP]             ; 00559c9e
    ADD EDX,EBX                         ; 00559ca1
    SUB EDX,EDI                         ; 00559ca3
    MOV dword ptr [ESP + 0x14],EAX      ; 00559ca5
    MOV EAX,EDX                         ; 00559ca9
    SAR EDX,0x1f                        ; 00559cab
    SUB EAX,EDX                         ; 00559cae
    SAR EAX,0x1                         ; 00559cb0
    SUB EBX,EDI                         ; 00559cb2
    MOV ESI,EAX                         ; 00559cb4
    CMP EAX,EBX                         ; 00559cb6
    JLE 0x00559cbc                      ; 00559cb8
        ;   XREF to: 00559cbc (CONDITIONAL_JUMP)  ; LAB_00559cbc
    MOV ESI,EBX                         ; 00559cba
    PUSH 0xffff                         ; 00559cbc
        ;   Label: LAB_00559cbc
    CALL engine_3d.c_setRenderAlpha_FUN_00406d80 ; 00559cc1
        ;   XREF to: 00406d80 (UNCONDITIONAL_CALL)  ; void engine_3d.c_setRenderAlpha_FUN_00406d80(int alpha_color_value)
    ADD ESP,0x4                         ; 00559cc6
    MOV EAX,dword ptr [ESP + 0x18]      ; 00559cc9
    XOR EDI,EDI                         ; 00559ccd
    TEST EAX,EAX                        ; 00559ccf
    JLE 0x00559d30                      ; 00559cd1
        ;   XREF to: 00559d30 (CONDITIONAL_JUMP)  ; LAB_00559d30
    MOV EAX,dword ptr [ESP + 0x8]       ; 00559cd3
    ADD EAX,dword ptr [ESP + 0xc]       ; 00559cd7
    MOV EBX,0x31061e8                   ; 00559cdb | DAT_031061e8
    MOV dword ptr [ESP + 0x10],EAX      ; 00559ce0
    PUSH EBX                            ; 00559ce4 | DAT_031061e8 | DAT_031065e8
        ;   Label: LAB_00559ce4
    PUSH EBP                            ; 00559ce5
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80 ; 00559ce6
        ;   XREF to: 004cfe80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80(CBitFont * this_ptr, char * text)
    ADD ESP,0x8                         ; 00559ceb
    MOV EDX,dword ptr [ESP + 0x10]      ; 00559cee
    SUB EDX,EAX                         ; 00559cf2
    MOV EAX,EDX                         ; 00559cf4
    SAR EDX,0x1f                        ; 00559cf6
    SUB EAX,EDX                         ; 00559cf9
    SAR EAX,0x1                         ; 00559cfb
    PUSH 0x0                            ; 00559cfd
    PUSH 0xf8                           ; 00559cff
    PUSH ESI                            ; 00559d04
    PUSH EAX                            ; 00559d05
    PUSH EBX                            ; 00559d06 | DAT_031061e8
    PUSH EBP                            ; 00559d07
    INC EDI                             ; 00559d08
    CALL engine_font.cpp_CBitFont_drawText_FUN_004cda80 ; 00559d09
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_004cda80(CBitFont * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x18                        ; 00559d0e
    ADD EBX,0x400                       ; 00559d11
    MOV EDX,dword ptr [ESP + 0x14]      ; 00559d17
    MOV ECX,dword ptr [ESP + 0x18]      ; 00559d1b
    ADD ESI,EDX                         ; 00559d1f
    CMP EDI,ECX                         ; 00559d21
    JL 0x00559ce4                       ; 00559d23
        ;   XREF to: 00559ce4 (CONDITIONAL_JUMP)  ; LAB_00559ce4
    LEA EAX,[EAX]                       ; 00559d25
    LEA EDX,[EDX]                       ; 00559d2b
    MOV EBX,EBX                         ; 00559d2e
    MOV EAX,dword ptr [ESP + 0x4]       ; 00559d30
        ;   Label: LAB_00559d30
    MOV [0x02d0255c],EAX                ; 00559d34 | g_ClipTop
    ADD ESP,0x20                        ; 00559d39
    POP EBP                             ; 00559d3c
    POP EDI                             ; 00559d3d
    POP ESI                             ; 00559d3e
    POP EBX                             ; 00559d3f
    RET                                 ; 00559d40
    PUSH EAX                            ; 00559d41 | g_CGameInstance
        ;   Label: LAB_00559d41
    MOV dword ptr [0x031061e0],EDX      ; 00559d42 | INT_031061e0
    CALL core_charactr.cpp_FUN_0042f9e0 ; 00559d48
        ;   XREF to: 0042f9e0 (UNCONDITIONAL_CALL)  ; float core_charactr.cpp_FUN_0042f9e0()
    MOV dword ptr [ESP + 0x20],EAX      ; 00559d4d
    FLD float ptr [ESP + 0x20]          ; 00559d51
    FDIV float ptr [0x00641794]         ; 00559d55 | FLOAT_00641794
    FADD float ptr [0x0310f4a0]         ; 00559d5b | g_ScriptTimeScale
    JMP 0x00559b58                      ; 00559d61
        ;   XREF to: 00559b58 (UNCONDITIONAL_JUMP)  ; LAB_00559b58
    MOV EBP,dword ptr [0x020a572c]      ; 00559d66 | g_MicroFont
        ;   Label: LAB_00559d66
    JMP 0x00559c54                      ; 00559d6c
        ;   XREF to: 00559c54 (UNCONDITIONAL_JUMP)  ; LAB_00559c54

