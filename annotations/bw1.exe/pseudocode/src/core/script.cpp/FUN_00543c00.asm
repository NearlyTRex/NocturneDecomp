; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_script_cpp_FUN_00543c00(CScript *this_ptr,int left,int top,int right,int bottom)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   left
; int              Stack[0xc]:4   top
; int              Stack[0x10]:4   right
; int              Stack[0x14]:4   bottom
; Local Variables:
; undefined        Stack[-0xa4]:1  local_a4
; undefined        Stack[-0x40]:1  local_40
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_game.cpp_FUN_004ce580 at 004ceecb
;
; Referenced Globals:
;   undefined4 DAT_005ee1bb
;   TerminatedCString s_No_script_loaded_005ee1be
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurface_FUN_00480f80
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAligned_FUN_00480750
;   cockpit_drawsurf.cpp_CDrawSurface_initFromParent_FUN_0047e240
;   cockpit_drawsurf.cpp_FUN_0047e3b0
;   cockpit_drawsurf.cpp_FUN_0047e860
;   cockpit_drawsurf.cpp_FUN_0047f8c0
;   cockpit_drawsurf.cpp_FUN_0047ffd0
;   cockpit_drawsurf.cpp_FUN_00481040
;   crt_unknown.c_FUN_005bfb40
;   shape_edittool.cpp_CStrList_getStringAt_FUN_004998a0
;   shape_edittool.cpp_FUN_0049df50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00543c00
        ;   Label: core_script.cpp_FUN_00543c00
    PUSH ESI                            ; 00543c01
    PUSH EDI                            ; 00543c02
    PUSH EBP                            ; 00543c03
    SUB ESP,0x94                        ; 00543c04
    MOV EBP,dword ptr [ESP + 0xa8]      ; 00543c0a
    MOV EDX,dword ptr [ESP + 0xac]      ; 00543c11
    MOV EBX,dword ptr [ESP + 0xb0]      ; 00543c18
    MOV EDI,dword ptr [ESP + 0xb8]      ; 00543c1f
    PUSH 0x0                            ; 00543c26
    SUB EDI,EBX                         ; 00543c28
    MOV EAX,dword ptr [ESP + 0xb8]      ; 00543c2a
    INC EDI                             ; 00543c31
    SUB EAX,EDX                         ; 00543c32
    PUSH EDI                            ; 00543c34
    INC EAX                             ; 00543c35
    PUSH EAX                            ; 00543c36
    PUSH EBX                            ; 00543c37
    PUSH EDX                            ; 00543c38
    LEA EAX,[ESP + 0x78]                ; 00543c39
    PUSH EAX                            ; 00543c3d
    CALL cockpit_drawsurf.cpp_CDrawSurface_initFromParent_FUN_0047e240 ; 00543c3e
        ;   XREF to: 0047e240 (UNCONDITIONAL_CALL)  ; CDrawSurface * cockpit_drawsurf.cpp_CDrawSurface_initFromParent_FUN_0047e240(CDrawSurface * this_ptr, int x, int y, int width, ...)
    ADD ESP,0x18                        ; 00543c43
    PUSH 0x0                            ; 00543c46
    CALL cockpit_drawsurf.cpp_FUN_0047e3b0 ; 00543c48
        ;   XREF to: 0047e3b0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_FUN_0047e3b0(int color_value)
    ADD ESP,0x4                         ; 00543c4d
    LEA EAX,[ESP + 0x64]                ; 00543c50
    PUSH EAX                            ; 00543c54
    CALL cockpit_drawsurf.cpp_FUN_0047ffd0 ; 00543c55
        ;   XREF to: 0047ffd0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_FUN_0047ffd0(CDrawSurface * this_ptr)
    ADD ESP,0x4                         ; 00543c5a
    PUSH 0x0                            ; 00543c5d
    CALL cockpit_drawsurf.cpp_FUN_0047e860 ; 00543c5f
        ;   XREF to: 0047e860 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_FUN_0047e860(CBitFont * font_ptr)
    MOV EDX,dword ptr [EBP + 0x2c]      ; 00543c64
    ADD ESP,0x4                         ; 00543c67
    TEST EDX,EDX                        ; 00543c6a
    JLE 0x00543dd6                      ; 00543c6c
        ;   XREF to: 00543dd6 (CONDITIONAL_JUMP)  ; LAB_00543dd6
    LEA EAX,[ESP + 0x64]                ; 00543c72
    PUSH EAX                            ; 00543c76
    CALL cockpit_drawsurf.cpp_FUN_00481040 ; 00543c77
        ;   XREF to: 00481040 (UNCONDITIONAL_CALL)  ; int cockpit_drawsurf.cpp_FUN_00481040(CDrawSurface * this_ptr)
    MOV EBX,EAX                         ; 00543c7c
    ADD ESP,0x4                         ; 00543c7e
    MOV EDX,dword ptr [EBP + 0x44]      ; 00543c81
    MOV dword ptr [ESP + 0x88],EAX      ; 00543c84
    MOV EAX,dword ptr [EBP + 0x30]      ; 00543c8b
    MOV EAX,dword ptr [EAX + EDX*0x8]   ; 00543c8e
    DEC EAX                             ; 00543c91
    MOV EDX,EDI                         ; 00543c92
    MOV dword ptr [ESP + 0x84],EAX      ; 00543c94
    SAR EDX,0x1f                        ; 00543c9b
    MOV EAX,EDI                         ; 00543c9e
    IDIV EBX                            ; 00543ca0
    MOV EDX,EAX                         ; 00543ca2
    SAR EDX,0x1f                        ; 00543ca4
    SUB EAX,EDX                         ; 00543ca7
    SAR EAX,0x1                         ; 00543ca9
    MOV EBX,dword ptr [ESP + 0x84]      ; 00543cab
    SUB EBX,EAX                         ; 00543cb2
    TEST EBX,EBX                        ; 00543cb4
    JL 0x00543dac                       ; 00543cb6
        ;   XREF to: 00543dac (CONDITIONAL_JUMP)  ; LAB_00543dac
    MOV ECX,dword ptr [ESP + 0x88]      ; 00543cbc
        ;   Label: LAB_00543cbc
    MOV ESI,0x2                         ; 00543cc3
    LEA EAX,[EBP + 0x34]                ; 00543cc8
    SUB EDI,ECX                         ; 00543ccb
    MOV dword ptr [ESP + 0x90],EAX      ; 00543ccd
    MOV dword ptr [ESP + 0x8c],EDI      ; 00543cd4
    CMP EDI,ESI                         ; 00543cdb
    JLE 0x00543d87                      ; 00543cdd
        ;   XREF to: 00543d87 (CONDITIONAL_JUMP)  ; LAB_00543d87
    MOV EDI,dword ptr [ESP + 0x90]      ; 00543ce3
        ;   Label: LAB_00543ce3
    PUSH EDI                            ; 00543cea
    CALL shape_edittool.cpp_FUN_0049df50 ; 00543ceb
        ;   XREF to: 0049df50 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_FUN_0049df50(CStrList * this_ptr)
    ADD ESP,0x4                         ; 00543cf0
    CMP EBX,EAX                         ; 00543cf3
    JGE 0x00543d87                      ; 00543cf5
        ;   XREF to: 00543d87 (CONDITIONAL_JUMP)  ; LAB_00543d87
    CMP EBX,dword ptr [ESP + 0x84]      ; 00543cfb
    JNZ 0x00543dcc                      ; 00543d02
        ;   XREF to: 00543dcc (CONDITIONAL_JUMP)  ; LAB_00543dcc
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00543d08
    TEST EDX,EDX                        ; 00543d0b
    JNZ 0x00543db3                      ; 00543d0d
        ;   XREF to: 00543db3 (CONDITIONAL_JUMP)  ; LAB_00543db3
    PUSH 0xfa                           ; 00543d13
    CALL cockpit_drawsurf.cpp_FUN_0047e3b0 ; 00543d18
        ;   XREF to: 0047e3b0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_FUN_0047e3b0(int color_value)
        ;   Label: LAB_00543d18
    ADD ESP,0x4                         ; 00543d1d
    LEA EDI,[EBX + 0x1]                 ; 00543d20
    PUSH EDI                            ; 00543d23
    PUSH 0x5ee1bb                       ; 00543d24 | DAT_005ee1bb
    LEA EAX,[ESP + 0x8]                 ; 00543d29
    PUSH EAX                            ; 00543d2d
    CALL crt_unknown.c_FUN_005bfb40     ; 00543d2e
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfb40()
    ADD ESP,0xc                         ; 00543d33
    PUSH ESI                            ; 00543d36
    PUSH 0x2                            ; 00543d37
    LEA EAX,[ESP + 0x8]                 ; 00543d39
    PUSH EAX                            ; 00543d3d
    LEA EAX,[ESP + 0x70]                ; 00543d3e
    PUSH EAX                            ; 00543d42
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAligned_FUN_00480750 ; 00543d43
        ;   XREF to: 00480750 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAligned_FUN_00480750(CDrawSurface * this_ptr, char * text, int x, int y)
    ADD ESP,0x10                        ; 00543d48
    PUSH ESI                            ; 00543d4b
    PUSH 0x1e                           ; 00543d4c
    PUSH EBX                            ; 00543d4e
    MOV EAX,dword ptr [ESP + 0x9c]      ; 00543d4f
    PUSH EAX                            ; 00543d56
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004998a0 ; 00543d57
        ;   XREF to: 004998a0 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004998a0(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 00543d5c
    PUSH EAX                            ; 00543d5f
    LEA EAX,[ESP + 0x70]                ; 00543d60
    PUSH EAX                            ; 00543d64
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAligned_FUN_00480750 ; 00543d65
        ;   XREF to: 00480750 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAligned_FUN_00480750(CDrawSurface * this_ptr, char * text, int x, int y)
    ADD ESP,0x10                        ; 00543d6a
    MOV EDX,dword ptr [ESP + 0x88]      ; 00543d6d
    MOV ECX,dword ptr [ESP + 0x8c]      ; 00543d74
    ADD ESI,EDX                         ; 00543d7b
    MOV EBX,EDI                         ; 00543d7d
    CMP ESI,ECX                         ; 00543d7f
    JL 0x00543ce3                       ; 00543d81
        ;   XREF to: 00543ce3 (CONDITIONAL_JUMP)  ; LAB_00543ce3
    PUSH 0xff                           ; 00543d87
        ;   Label: LAB_00543d87
    CALL cockpit_drawsurf.cpp_FUN_0047e3b0 ; 00543d8c
        ;   XREF to: 0047e3b0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_FUN_0047e3b0(int color_value)
    ADD ESP,0x4                         ; 00543d91
    LEA EAX,[ESP + 0x64]                ; 00543d94
    PUSH EAX                            ; 00543d98
    CALL cockpit_drawsurf.cpp_FUN_0047f8c0 ; 00543d99
        ;   XREF to: 0047f8c0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_FUN_0047f8c0(CDrawSurface * this_ptr)
    ADD ESP,0x4                         ; 00543d9e
    ADD ESP,0x94                        ; 00543da1
    POP EBP                             ; 00543da7
    POP EDI                             ; 00543da8
    POP ESI                             ; 00543da9
    POP EBX                             ; 00543daa
    RET                                 ; 00543dab
    XOR EBX,EBX                         ; 00543dac
        ;   Label: LAB_00543dac
    JMP 0x00543cbc                      ; 00543dae
        ;   XREF to: 00543cbc (UNCONDITIONAL_JUMP)  ; LAB_00543cbc
    CMP EDX,0x1                         ; 00543db3
        ;   Label: LAB_00543db3
    JNZ 0x00543dc2                      ; 00543db6
        ;   XREF to: 00543dc2 (CONDITIONAL_JUMP)  ; LAB_00543dc2
    PUSH 0xfb                           ; 00543db8
    JMP 0x00543d18                      ; 00543dbd
        ;   XREF to: 00543d18 (UNCONDITIONAL_JUMP)  ; LAB_00543d18
    PUSH 0xf9                           ; 00543dc2
        ;   Label: LAB_00543dc2
    JMP 0x00543d18                      ; 00543dc7
        ;   XREF to: 00543d18 (UNCONDITIONAL_JUMP)  ; LAB_00543d18
    PUSH 0xff                           ; 00543dcc
        ;   Label: LAB_00543dcc
    JMP 0x00543d18                      ; 00543dd1
        ;   XREF to: 00543d18 (UNCONDITIONAL_JUMP)  ; LAB_00543d18
    PUSH 0xf9                           ; 00543dd6
        ;   Label: LAB_00543dd6
    CALL cockpit_drawsurf.cpp_FUN_0047e3b0 ; 00543ddb
        ;   XREF to: 0047e3b0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_FUN_0047e3b0(int color_value)
    ADD ESP,0x4                         ; 00543de0
    PUSH 0x5ee1be                       ; 00543de3 | = "(No script loaded.)"
    LEA EAX,[ESP + 0x68]                ; 00543de8
    PUSH EAX                            ; 00543dec
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurface_FUN_00480f80 ; 00543ded
        ;   XREF to: 00480f80 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurface_FUN_00480f80(CDrawSurface * this_ptr, char * text)
    ADD ESP,0x8                         ; 00543df2
    JMP 0x00543d87                      ; 00543df5
        ;   XREF to: 00543d87 (UNCONDITIONAL_JUMP)  ; LAB_00543d87

