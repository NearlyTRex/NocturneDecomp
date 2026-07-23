; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004fe9d0(int param_1,int param_2,int param_3,int param_4,int param_5)
;
; Local Variables:
; undefined        Stack[-0xa4]:1  local_a4
; undefined        Stack[-0x40]:1  local_40
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0049cc10 at 0049d46f
;
; Referenced Globals:
;   TerminatedCString s_d_0058e24e
;   string s_(No_script_loaded.)_0058e251
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_0045cb70
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurface_FUN_0045e260
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAligned_FUN_0045da30
;   cockpit_drawsurf.cpp_CDrawSurface_getCurrentFontMaxWidth_FUN_0045e320
;   cockpit_drawsurf.cpp_CDrawSurface_initFromParent_FUN_0045b480
;   cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_0045b5f0
;   cockpit_drawsurf.cpp_setCurrentFont_FUN_0045baa0
;   crt_stdio.c_sprintf_FUN_00563c90
;   FUN_0045d2b0
;   shape_edittool.cpp_CStrList_getItemCount_FUN_00477660
;   shape_edittool.cpp_CStrList_getStringAt_FUN_00474080
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fe9d0
        ;   Label: FUN_004fe9d0
    PUSH ESI                            ; 004fe9d1
    PUSH EDI                            ; 004fe9d2
    PUSH EBP                            ; 004fe9d3
    SUB ESP,0x94                        ; 004fe9d4
    MOV EBP,dword ptr [ESP + 0xa8]      ; 004fe9da
    MOV EDX,dword ptr [ESP + 0xac]      ; 004fe9e1
    MOV EBX,dword ptr [ESP + 0xb0]      ; 004fe9e8
    MOV EDI,dword ptr [ESP + 0xb8]      ; 004fe9ef
    PUSH 0x0                            ; 004fe9f6
    SUB EDI,EBX                         ; 004fe9f8
    MOV EAX,dword ptr [ESP + 0xb8]      ; 004fe9fa
    INC EDI                             ; 004fea01
    SUB EAX,EDX                         ; 004fea02
    PUSH EDI                            ; 004fea04
    INC EAX                             ; 004fea05
    PUSH EAX                            ; 004fea06
    PUSH EBX                            ; 004fea07
    PUSH EDX                            ; 004fea08
    LEA EAX,[ESP + 0x78]                ; 004fea09
    PUSH EAX                            ; 004fea0d
    CALL cockpit_drawsurf.cpp_CDrawSurface_initFromParent_FUN_0045b480 ; 004fea0e
        ;   XREF to: 0045b480 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_initFromParent_FUN_0045b480()
    ADD ESP,0x18                        ; 004fea13
    PUSH 0x0                            ; 004fea16
    CALL cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_0045b5f0 ; 004fea18
        ;   XREF to: 0045b5f0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_0045b5f0()
    ADD ESP,0x4                         ; 004fea1d
    LEA EAX,[ESP + 0x64]                ; 004fea20
    PUSH EAX                            ; 004fea24
    CALL FUN_0045d2b0                   ; 004fea25
        ;   XREF to: 0045d2b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0045d2b0()
    ADD ESP,0x4                         ; 004fea2a
    PUSH 0x0                            ; 004fea2d
    CALL cockpit_drawsurf.cpp_setCurrentFont_FUN_0045baa0 ; 004fea2f
        ;   XREF to: 0045baa0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_setCurrentFont_FUN_0045baa0()
    MOV EDX,dword ptr [EBP + 0x28]      ; 004fea34
    ADD ESP,0x4                         ; 004fea37
    TEST EDX,EDX                        ; 004fea3a
    JLE 0x004feba6                      ; 004fea3c
        ;   XREF to: 004feba6 (CONDITIONAL_JUMP)  ; LAB_004feba6
    LEA EAX,[ESP + 0x64]                ; 004fea42
    PUSH EAX                            ; 004fea46
    CALL cockpit_drawsurf.cpp_CDrawSurface_getCurrentFontMaxWidth_FUN_0045e320 ; 004fea47
        ;   XREF to: 0045e320 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_getCurrentFontMaxWidth_FUN_0045e320()
    MOV EBX,EAX                         ; 004fea4c
    ADD ESP,0x4                         ; 004fea4e
    MOV EDX,dword ptr [EBP + 0x40]      ; 004fea51
    MOV dword ptr [ESP + 0x88],EAX      ; 004fea54
    MOV EAX,dword ptr [EBP + 0x2c]      ; 004fea5b
    MOV EAX,dword ptr [EAX + EDX*0x8]   ; 004fea5e
    DEC EAX                             ; 004fea61
    MOV EDX,EDI                         ; 004fea62
    MOV dword ptr [ESP + 0x84],EAX      ; 004fea64
    SAR EDX,0x1f                        ; 004fea6b
    MOV EAX,EDI                         ; 004fea6e
    IDIV EBX                            ; 004fea70
    MOV EDX,EAX                         ; 004fea72
    SAR EDX,0x1f                        ; 004fea74
    SUB EAX,EDX                         ; 004fea77
    SAR EAX,0x1                         ; 004fea79
    MOV EBX,dword ptr [ESP + 0x84]      ; 004fea7b
    SUB EBX,EAX                         ; 004fea82
    TEST EBX,EBX                        ; 004fea84
    JL 0x004feb7c                       ; 004fea86
        ;   XREF to: 004feb7c (CONDITIONAL_JUMP)  ; LAB_004feb7c
    MOV ECX,dword ptr [ESP + 0x88]      ; 004fea8c
        ;   Label: LAB_004fea8c
    MOV ESI,0x2                         ; 004fea93
    LEA EAX,[EBP + 0x30]                ; 004fea98
    SUB EDI,ECX                         ; 004fea9b
    MOV dword ptr [ESP + 0x90],EAX      ; 004fea9d
    MOV dword ptr [ESP + 0x8c],EDI      ; 004feaa4
    CMP EDI,ESI                         ; 004feaab
    JLE 0x004feb57                      ; 004feaad
        ;   XREF to: 004feb57 (CONDITIONAL_JUMP)  ; LAB_004feb57
    MOV EDI,dword ptr [ESP + 0x90]      ; 004feab3
        ;   Label: LAB_004feab3
    PUSH EDI                            ; 004feaba
    CALL shape_edittool.cpp_CStrList_getItemCount_FUN_00477660 ; 004feabb
        ;   XREF to: 00477660 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CStrList_getItemCount_FUN_00477660()
    ADD ESP,0x4                         ; 004feac0
    CMP EBX,EAX                         ; 004feac3
    JGE 0x004feb57                      ; 004feac5
        ;   XREF to: 004feb57 (CONDITIONAL_JUMP)  ; LAB_004feb57
    CMP EBX,dword ptr [ESP + 0x84]      ; 004feacb
    JNZ 0x004feb9c                      ; 004fead2
        ;   XREF to: 004feb9c (CONDITIONAL_JUMP)  ; LAB_004feb9c
    MOV EDX,dword ptr [EBP + 0x18]      ; 004fead8
    TEST EDX,EDX                        ; 004feadb
    JNZ 0x004feb83                      ; 004feadd
        ;   XREF to: 004feb83 (CONDITIONAL_JUMP)  ; LAB_004feb83
    PUSH 0xfa                           ; 004feae3
    CALL cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_0045b5f0 ; 004feae8
        ;   XREF to: 0045b5f0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_0045b5f0()
        ;   Label: LAB_004feae8
    ADD ESP,0x4                         ; 004feaed
    LEA EDI,[EBX + 0x1]                 ; 004feaf0
    PUSH EDI                            ; 004feaf3
    PUSH 0x58e24e                       ; 004feaf4 | = "%d"
    LEA EAX,[ESP + 0x8]                 ; 004feaf9
    PUSH EAX                            ; 004feafd
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004feafe
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0xc                         ; 004feb03
    PUSH ESI                            ; 004feb06
    PUSH 0x2                            ; 004feb07
    LEA EAX,[ESP + 0x8]                 ; 004feb09
    PUSH EAX                            ; 004feb0d
    LEA EAX,[ESP + 0x70]                ; 004feb0e
    PUSH EAX                            ; 004feb12
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAligned_FUN_0045da30 ; 004feb13
        ;   XREF to: 0045da30 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAligned_FUN_0045da30()
    ADD ESP,0x10                        ; 004feb18
    PUSH ESI                            ; 004feb1b
    PUSH 0x1e                           ; 004feb1c
    PUSH EBX                            ; 004feb1e
    MOV EAX,dword ptr [ESP + 0x9c]      ; 004feb1f
    PUSH EAX                            ; 004feb26
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_00474080 ; 004feb27
        ;   XREF to: 00474080 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CStrList_getStringAt_FUN_00474080()
    ADD ESP,0x8                         ; 004feb2c
    PUSH EAX                            ; 004feb2f
    LEA EAX,[ESP + 0x70]                ; 004feb30
    PUSH EAX                            ; 004feb34
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAligned_FUN_0045da30 ; 004feb35
        ;   XREF to: 0045da30 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAligned_FUN_0045da30()
    ADD ESP,0x10                        ; 004feb3a
    MOV EDX,dword ptr [ESP + 0x88]      ; 004feb3d
    MOV ECX,dword ptr [ESP + 0x8c]      ; 004feb44
    ADD ESI,EDX                         ; 004feb4b
    MOV EBX,EDI                         ; 004feb4d
    CMP ESI,ECX                         ; 004feb4f
    JL 0x004feab3                       ; 004feb51
        ;   XREF to: 004feab3 (CONDITIONAL_JUMP)  ; LAB_004feab3
    PUSH 0xff                           ; 004feb57
        ;   Label: LAB_004feb57
    CALL cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_0045b5f0 ; 004feb5c
        ;   XREF to: 0045b5f0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_0045b5f0()
    ADD ESP,0x4                         ; 004feb61
    LEA EAX,[ESP + 0x64]                ; 004feb64
    PUSH EAX                            ; 004feb68
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_0045cb70 ; 004feb69
        ;   XREF to: 0045cb70 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_0045cb70()
    ADD ESP,0x4                         ; 004feb6e
    ADD ESP,0x94                        ; 004feb71
    POP EBP                             ; 004feb77
    POP EDI                             ; 004feb78
    POP ESI                             ; 004feb79
    POP EBX                             ; 004feb7a
    RET                                 ; 004feb7b
    XOR EBX,EBX                         ; 004feb7c
        ;   Label: LAB_004feb7c
    JMP 0x004fea8c                      ; 004feb7e
        ;   XREF to: 004fea8c (UNCONDITIONAL_JUMP)  ; LAB_004fea8c
    CMP EDX,0x1                         ; 004feb83
        ;   Label: LAB_004feb83
    JNZ 0x004feb92                      ; 004feb86
        ;   XREF to: 004feb92 (CONDITIONAL_JUMP)  ; LAB_004feb92
    PUSH 0xfb                           ; 004feb88
    JMP 0x004feae8                      ; 004feb8d
        ;   XREF to: 004feae8 (UNCONDITIONAL_JUMP)  ; LAB_004feae8
    PUSH 0xf9                           ; 004feb92
        ;   Label: LAB_004feb92
    JMP 0x004feae8                      ; 004feb97
        ;   XREF to: 004feae8 (UNCONDITIONAL_JUMP)  ; LAB_004feae8
    PUSH 0xff                           ; 004feb9c
        ;   Label: LAB_004feb9c
    JMP 0x004feae8                      ; 004feba1
        ;   XREF to: 004feae8 (UNCONDITIONAL_JUMP)  ; LAB_004feae8
    PUSH 0xf9                           ; 004feba6
        ;   Label: LAB_004feba6
    CALL cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_0045b5f0 ; 004febab
        ;   XREF to: 0045b5f0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_0045b5f0()
    ADD ESP,0x4                         ; 004febb0
    PUSH 0x58e251                       ; 004febb3 | = "(No script loaded.)"
    LEA EAX,[ESP + 0x68]                ; 004febb8
    PUSH EAX                            ; 004febbc
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurface_FUN_0045e260 ; 004febbd
        ;   XREF to: 0045e260 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurface_FUN_0045e260()
    ADD ESP,0x8                         ; 004febc2
    JMP 0x004feb57                      ; 004febc5
        ;   XREF to: 004feb57 (UNCONDITIONAL_JUMP)  ; LAB_004feb57

