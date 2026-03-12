; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_script_cpp_CScript_renderEditor_FUN_00559d80(CScript *this_ptr,int left,int top,int right,int bottom)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   left
; int              Stack[0xc]:4   top
; int              Stack[0x10]:4   right
; int              Stack[0x14]:4   bottom
; Local Variables:
; char[100]        Stack[-0xa4]:100  local_a4
; CDrawSurface     Stack[-0x40]:32  local_40
; int              Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; CStrList *       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_game.cpp_CGame_processFrame_FUN_004da100 at 004da9d2
;
; Referenced Globals:
;   TerminatedCString s_d_00641798
;   TerminatedCString s_No_script_loaded_0064179b
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_ctor_FUN_00486ea0
;   cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_00488530
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurface_FUN_00489c20
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAligned_FUN_004893f0
;   cockpit_drawsurf.cpp_CDrawSurface_fillFullSurface_FUN_00488c70
;   cockpit_drawsurf.cpp_CDrawSurface_getCurrentFontMaxWidth_FUN_00489ce0
;   cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_00487010
;   cockpit_drawsurf.cpp_setCurrentFont_FUN_004874c0
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   shape_edittool.cpp_CStrList_getItemCount_FUN_004a6ed0
;   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00559d80
        ;   Label: core_script.cpp_CScript_renderEditor_FUN_00559d80
    PUSH ESI                            ; 00559d81
    PUSH EDI                            ; 00559d82
    PUSH EBP                            ; 00559d83
    SUB ESP,0x94                        ; 00559d84
    MOV EBP,dword ptr [ESP + 0xa8]      ; 00559d8a
    MOV EDX,dword ptr [ESP + 0xac]      ; 00559d91
    MOV EBX,dword ptr [ESP + 0xb0]      ; 00559d98
    MOV EDI,dword ptr [ESP + 0xb8]      ; 00559d9f
    PUSH 0x0                            ; 00559da6
    SUB EDI,EBX                         ; 00559da8
    MOV EAX,dword ptr [ESP + 0xb8]      ; 00559daa
    INC EDI                             ; 00559db1
    SUB EAX,EDX                         ; 00559db2
    PUSH EDI                            ; 00559db4
    INC EAX                             ; 00559db5
    PUSH EAX                            ; 00559db6
    PUSH EBX                            ; 00559db7
    PUSH EDX                            ; 00559db8
    LEA EAX,[ESP + 0x78]                ; 00559db9
    PUSH EAX                            ; 00559dbd
    CALL cockpit_drawsurf.cpp_CDrawSurface_ctor_FUN_00486ea0 ; 00559dbe
        ;   XREF to: 00486ea0 (UNCONDITIONAL_CALL)  ; CDrawSurface * cockpit_drawsurf.cpp_CDrawSurface_ctor_FUN_00486ea0(CDrawSurface * this_ptr, int x, int y, int width, ...)
    ADD ESP,0x18                        ; 00559dc3
    PUSH 0x0                            ; 00559dc6
    CALL cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_00487010 ; 00559dc8
        ;   XREF to: 00487010 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_00487010(int color_value)
    ADD ESP,0x4                         ; 00559dcd
    LEA EAX,[ESP + 0x64]                ; 00559dd0
    PUSH EAX                            ; 00559dd4
    CALL cockpit_drawsurf.cpp_CDrawSurface_fillFullSurface_FUN_00488c70 ; 00559dd5
        ;   XREF to: 00488c70 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_fillFullSurface_FUN_00488c70(CDrawSurface * this_ptr)
    ADD ESP,0x4                         ; 00559dda
    PUSH 0x0                            ; 00559ddd
    CALL cockpit_drawsurf.cpp_setCurrentFont_FUN_004874c0 ; 00559ddf
        ;   XREF to: 004874c0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_setCurrentFont_FUN_004874c0(CBitFont * font_ptr)
    MOV EDX,dword ptr [EBP + 0x30]      ; 00559de4
    ADD ESP,0x4                         ; 00559de7
    TEST EDX,EDX                        ; 00559dea
    JLE 0x00559f56                      ; 00559dec
        ;   XREF to: 00559f56 (CONDITIONAL_JUMP)  ; LAB_00559f56
    LEA EAX,[ESP + 0x64]                ; 00559df2
    PUSH EAX                            ; 00559df6
    CALL cockpit_drawsurf.cpp_CDrawSurface_getCurrentFontMaxWidth_FUN_00489ce0 ; 00559df7
        ;   XREF to: 00489ce0 (UNCONDITIONAL_CALL)  ; int cockpit_drawsurf.cpp_CDrawSurface_getCurrentFontMaxWidth_FUN_00489ce0(CDrawSurface * this_ptr)
    MOV EBX,EAX                         ; 00559dfc
    ADD ESP,0x4                         ; 00559dfe
    MOV EDX,dword ptr [EBP + 0x48]      ; 00559e01
    MOV dword ptr [ESP + 0x88],EAX      ; 00559e04
    MOV EAX,dword ptr [EBP + 0x34]      ; 00559e0b
    MOV EAX,dword ptr [EAX + EDX*0x8]   ; 00559e0e
    DEC EAX                             ; 00559e11
    MOV EDX,EDI                         ; 00559e12
    MOV dword ptr [ESP + 0x84],EAX      ; 00559e14
    SAR EDX,0x1f                        ; 00559e1b
    MOV EAX,EDI                         ; 00559e1e
    IDIV EBX                            ; 00559e20
    MOV EDX,EAX                         ; 00559e22
    SAR EDX,0x1f                        ; 00559e24
    SUB EAX,EDX                         ; 00559e27
    SAR EAX,0x1                         ; 00559e29
    MOV EBX,dword ptr [ESP + 0x84]      ; 00559e2b
    SUB EBX,EAX                         ; 00559e32
    TEST EBX,EBX                        ; 00559e34
    JL 0x00559f2c                       ; 00559e36
        ;   XREF to: 00559f2c (CONDITIONAL_JUMP)  ; LAB_00559f2c
    MOV ECX,dword ptr [ESP + 0x88]      ; 00559e3c
        ;   Label: LAB_00559e3c
    MOV ESI,0x2                         ; 00559e43
    LEA EAX,[EBP + 0x38]                ; 00559e48
    SUB EDI,ECX                         ; 00559e4b
    MOV dword ptr [ESP + 0x90],EAX      ; 00559e4d
    MOV dword ptr [ESP + 0x8c],EDI      ; 00559e54
    CMP EDI,ESI                         ; 00559e5b
    JLE 0x00559f07                      ; 00559e5d
        ;   XREF to: 00559f07 (CONDITIONAL_JUMP)  ; LAB_00559f07
    MOV EDI,dword ptr [ESP + 0x90]      ; 00559e63
        ;   Label: LAB_00559e63
    PUSH EDI                            ; 00559e6a
    CALL shape_edittool.cpp_CStrList_getItemCount_FUN_004a6ed0 ; 00559e6b
        ;   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CStrList_getItemCount_FUN_004a6ed0(CStrList * this_ptr)
    ADD ESP,0x4                         ; 00559e70
    CMP EBX,EAX                         ; 00559e73
    JGE 0x00559f07                      ; 00559e75
        ;   XREF to: 00559f07 (CONDITIONAL_JUMP)  ; LAB_00559f07
    CMP EBX,dword ptr [ESP + 0x84]      ; 00559e7b
    JNZ 0x00559f4c                      ; 00559e82
        ;   XREF to: 00559f4c (CONDITIONAL_JUMP)  ; LAB_00559f4c
    MOV EDX,dword ptr [EBP + 0x18]      ; 00559e88
    TEST EDX,EDX                        ; 00559e8b
    JNZ 0x00559f33                      ; 00559e8d
        ;   XREF to: 00559f33 (CONDITIONAL_JUMP)  ; LAB_00559f33
    PUSH 0xfa                           ; 00559e93
    CALL cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_00487010 ; 00559e98
        ;   XREF to: 00487010 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_00487010(int color_value)
        ;   Label: LAB_00559e98
    ADD ESP,0x4                         ; 00559e9d
    LEA EDI,[EBX + 0x1]                 ; 00559ea0
    PUSH EDI                            ; 00559ea3
    PUSH 0x641798                       ; 00559ea4 | = "%d"
    LEA EAX,[ESP + 0x8]                 ; 00559ea9
    PUSH EAX                            ; 00559ead
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 00559eae
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 00559eb3
    PUSH ESI                            ; 00559eb6
    PUSH 0x2                            ; 00559eb7
    LEA EAX,[ESP + 0x8]                 ; 00559eb9
    PUSH EAX                            ; 00559ebd
    LEA EAX,[ESP + 0x70]                ; 00559ebe
    PUSH EAX                            ; 00559ec2
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAligned_FUN_004893f0 ; 00559ec3
        ;   XREF to: 004893f0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAligned_FUN_004893f0(CDrawSurface * this_ptr, char * text, int x, int y)
    ADD ESP,0x10                        ; 00559ec8
    PUSH ESI                            ; 00559ecb
    PUSH 0x1e                           ; 00559ecc
    PUSH EBX                            ; 00559ece
    MOV EAX,dword ptr [ESP + 0x9c]      ; 00559ecf
    PUSH EAX                            ; 00559ed6
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 00559ed7
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 00559edc
    PUSH EAX                            ; 00559edf
    LEA EAX,[ESP + 0x70]                ; 00559ee0
    PUSH EAX                            ; 00559ee4
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAligned_FUN_004893f0 ; 00559ee5
        ;   XREF to: 004893f0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAligned_FUN_004893f0(CDrawSurface * this_ptr, char * text, int x, int y)
    ADD ESP,0x10                        ; 00559eea
    MOV EDX,dword ptr [ESP + 0x88]      ; 00559eed
    MOV ECX,dword ptr [ESP + 0x8c]      ; 00559ef4
    ADD ESI,EDX                         ; 00559efb
    MOV EBX,EDI                         ; 00559efd
    CMP ESI,ECX                         ; 00559eff
    JL 0x00559e63                       ; 00559f01
        ;   XREF to: 00559e63 (CONDITIONAL_JUMP)  ; LAB_00559e63
    PUSH 0xff                           ; 00559f07
        ;   Label: LAB_00559f07
    CALL cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_00487010 ; 00559f0c
        ;   XREF to: 00487010 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_00487010(int color_value)
    ADD ESP,0x4                         ; 00559f11
    LEA EAX,[ESP + 0x64]                ; 00559f14
    PUSH EAX                            ; 00559f18
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_00488530 ; 00559f19
        ;   XREF to: 00488530 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_00488530(CDrawSurface * this_ptr)
    ADD ESP,0x4                         ; 00559f1e
    ADD ESP,0x94                        ; 00559f21
    POP EBP                             ; 00559f27
    POP EDI                             ; 00559f28
    POP ESI                             ; 00559f29
    POP EBX                             ; 00559f2a
    RET                                 ; 00559f2b
    XOR EBX,EBX                         ; 00559f2c
        ;   Label: LAB_00559f2c
    JMP 0x00559e3c                      ; 00559f2e
        ;   XREF to: 00559e3c (UNCONDITIONAL_JUMP)  ; LAB_00559e3c
    CMP EDX,0x1                         ; 00559f33
        ;   Label: LAB_00559f33
    JNZ 0x00559f42                      ; 00559f36
        ;   XREF to: 00559f42 (CONDITIONAL_JUMP)  ; LAB_00559f42
    PUSH 0xfb                           ; 00559f38
    JMP 0x00559e98                      ; 00559f3d
        ;   XREF to: 00559e98 (UNCONDITIONAL_JUMP)  ; LAB_00559e98
    PUSH 0xf9                           ; 00559f42
        ;   Label: LAB_00559f42
    JMP 0x00559e98                      ; 00559f47
        ;   XREF to: 00559e98 (UNCONDITIONAL_JUMP)  ; LAB_00559e98
    PUSH 0xff                           ; 00559f4c
        ;   Label: LAB_00559f4c
    JMP 0x00559e98                      ; 00559f51
        ;   XREF to: 00559e98 (UNCONDITIONAL_JUMP)  ; LAB_00559e98
    PUSH 0xf9                           ; 00559f56
        ;   Label: LAB_00559f56
    CALL cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_00487010 ; 00559f5b
        ;   XREF to: 00487010 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_00487010(int color_value)
    ADD ESP,0x4                         ; 00559f60
    PUSH 0x64179b                       ; 00559f63 | = "(No script loaded.)"
    LEA EAX,[ESP + 0x68]                ; 00559f68
    PUSH EAX                            ; 00559f6c
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurface_FUN_00489c20 ; 00559f6d
        ;   XREF to: 00489c20 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurface_FUN_00489c20(CDrawSurface * this_ptr, char * text)
    ADD ESP,0x8                         ; 00559f72
    JMP 0x00559f07                      ; 00559f75
        ;   XREF to: 00559f07 (UNCONDITIONAL_JUMP)  ; LAB_00559f07

