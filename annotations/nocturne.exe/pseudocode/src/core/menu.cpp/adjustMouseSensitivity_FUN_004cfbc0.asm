; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_menu_cpp_adjustMouseSensitivity_FUN_004cfbc0(int *sensitivity_value_ptr,char *window_title)
;
; Parameters:
; int *            Stack[0x4]:4   sensitivity_value_ptr
; char *           Stack[0x8]:4   window_title
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_menu.cpp_configureCustomKeys_FUN_004d0d20 at 004d120b
;
; Referenced Globals:
;   TerminatedCString s_s_4_2f_0058853d
;   double DOUBLE_00588543 = 0.0000152587890625
;   CEditorTools* g_CEditorTools_PTR_005b6d50 = 01bcd074
;   int g_WindowWidth = 0x140
;   CKeys* g_CKeys_PTR_005bac64 = 01cc30e4
;   undefined4 DAT_01bcd070
;   undefined4 DAT_01bd1d8c
;   undefined4 DAT_01bd1d90
;   int g_ClipLeft
;   int g_ClipTop
;   int g_ClipRight
;   int g_ClipBottom
;   CKeys g_CKeys_01cc30e4
;
; Called Functions:
;   engine_2d.c_clearInputAndWait_FUN_00403f50
;   engine_2d.c_fillRectColor_FUN_00403e60
;   engine_2d.c_fillRectWithBorder_FUN_00403ef0
;   engine_font.cpp_CBitFont_drawTextCenterInBoundsF_FUN_00490e30
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0
;   shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_00471a80
;   shape_edittool.cpp_FUN_004720c0
;   shape_edittool.cpp_FUN_004722b0
;   wincore_wddvmem.cpp_swapBuffers_FUN_00553910
;   wincore_winrun.cpp_setCursorPosition_FUN_00558d60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cfbc0
        ;   Label: core_menu.cpp_adjustMouseSensitivity_FUN_004cfbc0
    PUSH ESI                            ; 004cfbc1
    PUSH EDI                            ; 004cfbc2
    PUSH EBP                            ; 004cfbc3
    MOV EBP,ESP                         ; 004cfbc4
    SUB ESP,0x10                        ; 004cfbc6
    AND ESP,0xfffffff8                  ; 004cfbc9
    PUSH 0x0                            ; 004cfbcc
    MOV EDX,dword ptr [EBP + 0x18]      ; 004cfbce
    PUSH EDX                            ; 004cfbd1
    MOV EDX,dword ptr [0x005b761c]      ; 004cfbd2 | g_WindowWidth
    LEA EAX,[EDX*0x4 + 0x0]             ; 004cfbd8
    SUB EAX,EDX                         ; 004cfbdf
    MOV EDX,EAX                         ; 004cfbe1
    SAR EDX,0x1f                        ; 004cfbe3
    SHL EDX,0x2                         ; 004cfbe6
    SBB EAX,EDX                         ; 004cfbe9
    SAR EAX,0x2                         ; 004cfbeb
    PUSH 0x2c                           ; 004cfbee
    PUSH EAX                            ; 004cfbf0
    MOV ECX,dword ptr [0x005b6d50]      ; 004cfbf1 | g_CEditorTools_PTR_005b6d50
    PUSH ECX                            ; 004cfbf7
    CALL shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_00471a80 ; 004cfbf8
        ;   XREF to: 00471a80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_00471a80(CEditorTools * this_ptr, int min_width, int min_height, char * text_content, ...)
    ADD ESP,0x14                        ; 004cfbfd
    MOV EAX,dword ptr [EBP + 0x14]      ; 004cfc00
    MOV EBX,dword ptr [EAX]             ; 004cfc03
    CMP EBX,0x4000                      ; 004cfc05
    JL 0x004cfe0b                       ; 004cfc0b
        ;   XREF to: 004cfe0b (CONDITIONAL_JUMP)  ; LAB_004cfe0b
    CMP EBX,0x40000                     ; 004cfc11
    JLE 0x004cfe16                      ; 004cfc17
        ;   XREF to: 004cfe16 (CONDITIONAL_JUMP)  ; LAB_004cfe16
    MOV dword ptr [EAX],0x40000         ; 004cfc1d
        ;   Label: LAB_004cfc1d
    MOV ESI,dword ptr [EBP + 0x14]      ; 004cfc23
        ;   Label: LAB_004cfc23
    MOV EBX,0x3c000                     ; 004cfc26
    MOV ESI,dword ptr [ESI]             ; 004cfc2b
    CALL engine_2d.c_clearInputAndWait_FUN_00403f50 ; 004cfc2d
        ;   XREF to: 00403f50 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403f50()
    MOV ECX,dword ptr [0x01bd1d90]      ; 004cfc32 | DAT_01bd1d90
    MOV EAX,[0x005b761c]                ; 004cfc38 | g_WindowWidth
    PUSH ECX                            ; 004cfc3d
    LEA EDX,[ESI + 0xffffc000]          ; 004cfc3e
    DEC EAX                             ; 004cfc44
    IMUL EDX                            ; 004cfc45
    IDIV EBX                            ; 004cfc47
    PUSH EAX                            ; 004cfc49
    CALL wincore_winrun.cpp_setCursorPosition_FUN_00558d60 ; 004cfc4a
        ;   XREF to: 00558d60 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_setCursorPosition_FUN_00558d60(int x, int y)
    XOR EBX,EBX                         ; 004cfc4f
    ADD ESP,0x8                         ; 004cfc51
    MOV dword ptr [ESP + 0x8],EBX       ; 004cfc54
    MOV EDI,dword ptr [0x005b6d50]      ; 004cfc58 | g_CEditorTools_PTR_005b6d50
        ;   Label: LAB_004cfc58
    PUSH EDI                            ; 004cfc5e
    CALL shape_edittool.cpp_FUN_004722b0 ; 004cfc5f
        ;   XREF to: 004722b0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_004722b0()
    ADD ESP,0x4                         ; 004cfc64
    MOV EDX,dword ptr [0x01bd1d8c]      ; 004cfc67 | DAT_01bd1d8c
    CMP EDX,dword ptr [ESP + 0x8]       ; 004cfc6d
    JZ 0x004cfc94                       ; 004cfc71
        ;   XREF to: 004cfc94 (CONDITIONAL_JUMP)  ; LAB_004cfc94
    MOV EBX,dword ptr [0x005b761c]      ; 004cfc73 | g_WindowWidth
    MOV EAX,EDX                         ; 004cfc79
    MOV EDX,0x3c000                     ; 004cfc7b
    DEC EBX                             ; 004cfc80
    IMUL EDX                            ; 004cfc81
    IDIV EBX                            ; 004cfc83
    LEA ESI,[EAX + 0x4000]              ; 004cfc85
    MOV EAX,[0x01bd1d8c]                ; 004cfc8b | DAT_01bd1d8c
    MOV dword ptr [ESP + 0x8],EAX       ; 004cfc90
    PUSH 0x4b                           ; 004cfc94
        ;   Label: LAB_004cfc94
    MOV EAX,[0x005bac64]                ; 004cfc96 | g_CKeys_PTR_005bac64
    PUSH EAX                            ; 004cfc9b | g_CKeys_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 004cfc9c | g_CKeys_01cc30e4
    CALL dword ptr [EDX + 0x4]          ; 004cfc9e
    ADD ESP,0x8                         ; 004cfca1
    TEST EAX,EAX                        ; 004cfca4
    JZ 0x004cfcae                       ; 004cfca6
        ;   XREF to: 004cfcae (CONDITIONAL_JUMP)  ; LAB_004cfcae
    SUB ESI,0x2bc                       ; 004cfca8
    PUSH 0x4d                           ; 004cfcae
        ;   Label: LAB_004cfcae
    MOV EAX,[0x005bac64]                ; 004cfcb0 | g_CKeys_PTR_005bac64
    PUSH EAX                            ; 004cfcb5 | g_CKeys_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 004cfcb6 | g_CKeys_01cc30e4
    CALL dword ptr [EDX + 0x4]          ; 004cfcb8
    ADD ESP,0x8                         ; 004cfcbb
    TEST EAX,EAX                        ; 004cfcbe
    JZ 0x004cfcc8                       ; 004cfcc0
        ;   XREF to: 004cfcc8 (CONDITIONAL_JUMP)  ; LAB_004cfcc8
    ADD ESI,0x2bc                       ; 004cfcc2
    CMP ESI,0x4000                      ; 004cfcc8
        ;   Label: LAB_004cfcc8
    JGE 0x004cfe3a                      ; 004cfcce
        ;   XREF to: 004cfe3a (CONDITIONAL_JUMP)  ; LAB_004cfe3a
    MOV ESI,0x4000                      ; 004cfcd4
    MOV EAX,[0x01c00c5c]                ; 004cfcd9 | g_ClipTop
        ;   Label: LAB_004cfcd9
    INC EAX                             ; 004cfcde
    PUSH 0xff                           ; 004cfcdf
    MOV dword ptr [ESP + 0x4],EAX       ; 004cfce4
    MOV EAX,[0x01c00c64]                ; 004cfce8 | g_ClipBottom
    PUSH 0x0                            ; 004cfced
    DEC EAX                             ; 004cfcef
    MOV EBX,dword ptr [0x01c00c60]      ; 004cfcf0 | g_ClipRight
    PUSH EAX                            ; 004cfcf6
    DEC EBX                             ; 004cfcf7
    MOV dword ptr [ESP + 0x10],EAX      ; 004cfcf8
    PUSH EBX                            ; 004cfcfc
    MOV EAX,dword ptr [ESP + 0x10]      ; 004cfcfd
    MOV EDI,dword ptr [0x01c00c58]      ; 004cfd01 | g_ClipLeft
    PUSH EAX                            ; 004cfd07
    INC EDI                             ; 004cfd08
    PUSH EDI                            ; 004cfd09
    CALL engine_2d.c_fillRectWithBorder_FUN_00403ef0 ; 004cfd0a
        ;   XREF to: 00403ef0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectWithBorder_FUN_00403ef0(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x18                        ; 004cfd0f
    LEA EDX,[ESI + 0xffffc000]          ; 004cfd12
    MOV EAX,EBX                         ; 004cfd18
    MOV EBX,0x3c000                     ; 004cfd1a
    SUB EAX,EDI                         ; 004cfd1f
    IMUL EDX                            ; 004cfd21
    IDIV EBX                            ; 004cfd23
    PUSH 0x4                            ; 004cfd25
    MOV EDX,dword ptr [ESP + 0x8]       ; 004cfd27
    PUSH EDX                            ; 004cfd2b
    ADD EAX,EDI                         ; 004cfd2c
    PUSH EAX                            ; 004cfd2e
    MOV ECX,dword ptr [ESP + 0xc]       ; 004cfd2f
    PUSH ECX                            ; 004cfd33
    PUSH EDI                            ; 004cfd34
    CALL engine_2d.c_fillRectColor_FUN_00403e60 ; 004cfd35
        ;   XREF to: 00403e60 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectColor_FUN_00403e60(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x14                        ; 004cfd3a
    MOV dword ptr [ESP + 0xc],ESI       ; 004cfd3d
    FILD dword ptr [ESP + 0xc]          ; 004cfd41
    FMUL double ptr [0x00588543]        ; 004cfd45 | DOUBLE_00588543
    SUB ESP,0x8                         ; 004cfd4b
    FSTP double ptr [ESP]               ; 004cfd4e
    PUSH 0x58853d                       ; 004cfd51 | = "%4.2f"
    PUSH 0x0                            ; 004cfd56
    PUSH 0xff                           ; 004cfd58
    MOV EDX,dword ptr [0x01c00c5c]      ; 004cfd5d | g_ClipTop
    PUSH 0x41                           ; 004cfd63
    MOV EDI,dword ptr [0x01bcd070]      ; 004cfd65 | DAT_01bcd070
    MOV EBX,dword ptr [0x01c00c64]      ; 004cfd6b | g_ClipBottom
    PUSH EDI                            ; 004cfd71
    ADD EBX,EDX                         ; 004cfd72
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0 ; 004cfd74
        ;   XREF to: 004930e0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0(CBitFont * this_ptr, int char_code)
    MOV EDX,EBX                         ; 004cfd79
    SUB EDX,EAX                         ; 004cfd7b
    MOV EAX,EDX                         ; 004cfd7d
    SAR EDX,0x1f                        ; 004cfd7f
    SUB EAX,EDX                         ; 004cfd82
    SAR EAX,0x1                         ; 004cfd84
    ADD ESP,0x8                         ; 004cfd86
    PUSH EAX                            ; 004cfd89
    MOV EAX,[0x01c00c60]                ; 004cfd8a | g_ClipRight
    PUSH EAX                            ; 004cfd8f
    MOV EDX,dword ptr [0x01c00c58]      ; 004cfd90 | g_ClipLeft
    PUSH EDX                            ; 004cfd96
    MOV ECX,dword ptr [0x01bcd070]      ; 004cfd97 | DAT_01bcd070
    PUSH ECX                            ; 004cfd9d
    CALL engine_font.cpp_CBitFont_drawTextCenterInBoundsF_FUN_00490e30 ; 004cfd9e
        ;   XREF to: 00490e30 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextCenterInBoundsF_FUN_00490e30(CBitFont * this_ptr, int left_x, int right_x, int y, ...)
    ADD ESP,0x24                        ; 004cfda3
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_00553910 ; 004cfda6
        ;   XREF to: 00553910 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_00553910()
    PUSH 0x1                            ; 004cfdab
    MOV EAX,[0x005bac64]                ; 004cfdad | g_CKeys_PTR_005bac64
    PUSH EAX                            ; 004cfdb2 | g_CKeys_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 004cfdb3 | g_CKeys_01cc30e4
    CALL dword ptr [EDX + 0x4]          ; 004cfdb5
    ADD ESP,0x8                         ; 004cfdb8
    TEST EAX,EAX                        ; 004cfdbb
    JNZ 0x004cfdf5                      ; 004cfdbd
        ;   XREF to: 004cfdf5 (CONDITIONAL_JUMP)  ; LAB_004cfdf5
    PUSH 0x1c                           ; 004cfdbf
    MOV EDX,dword ptr [0x005bac64]      ; 004cfdc1 | g_CKeys_PTR_005bac64
    PUSH EDX                            ; 004cfdc7 | g_CKeys_01cc30e4
    MOV EAX,dword ptr [EDX]             ; 004cfdc8 | g_CKeys_01cc30e4
    CALL dword ptr [EAX + 0x4]          ; 004cfdca
    ADD ESP,0x8                         ; 004cfdcd
    TEST EAX,EAX                        ; 004cfdd0
    JNZ 0x004cfdf0                      ; 004cfdd2
        ;   XREF to: 004cfdf0 (CONDITIONAL_JUMP)  ; LAB_004cfdf0
    PUSH 0x200                          ; 004cfdd4
    MOV EDX,dword ptr [0x005bac64]      ; 004cfdd9 | g_CKeys_PTR_005bac64
    PUSH EDX                            ; 004cfddf | g_CKeys_01cc30e4
    MOV EAX,dword ptr [EDX]             ; 004cfde0 | g_CKeys_01cc30e4
    CALL dword ptr [EAX + 0x4]          ; 004cfde2
    ADD ESP,0x8                         ; 004cfde5
    TEST EAX,EAX                        ; 004cfde8
    JZ 0x004cfc58                       ; 004cfdea
        ;   XREF to: 004cfc58 (CONDITIONAL_JUMP)  ; LAB_004cfc58
    MOV EAX,dword ptr [EBP + 0x14]      ; 004cfdf0
        ;   Label: LAB_004cfdf0
    MOV dword ptr [EAX],ESI             ; 004cfdf3
    MOV EBX,dword ptr [0x005b6d50]      ; 004cfdf5 | g_CEditorTools_PTR_005b6d50
        ;   Label: LAB_004cfdf5
    PUSH EBX                            ; 004cfdfb
    CALL shape_edittool.cpp_FUN_004720c0 ; 004cfdfc
        ;   XREF to: 004720c0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_004720c0()
    ADD ESP,0x4                         ; 004cfe01
    MOV ESP,EBP                         ; 004cfe04
    POP EBP                             ; 004cfe06
    POP EDI                             ; 004cfe07
    POP ESI                             ; 004cfe08
    POP EBX                             ; 004cfe09
    RET                                 ; 004cfe0a
    MOV dword ptr [EAX],0x4000          ; 004cfe0b
        ;   Label: LAB_004cfe0b
    JMP 0x004cfc23                      ; 004cfe11
        ;   XREF to: 004cfc23 (UNCONDITIONAL_JUMP)  ; LAB_004cfc23
    CMP EBX,0x4000                      ; 004cfe16
        ;   Label: LAB_004cfe16
    JGE 0x004cfe29                      ; 004cfe1c
        ;   XREF to: 004cfe29 (CONDITIONAL_JUMP)  ; LAB_004cfe29
    MOV dword ptr [EAX],0x4000          ; 004cfe1e
    JMP 0x004cfc23                      ; 004cfe24
        ;   XREF to: 004cfc23 (UNCONDITIONAL_JUMP)  ; LAB_004cfc23
    CMP EBX,0x40000                     ; 004cfe29
        ;   Label: LAB_004cfe29
    JLE 0x004cfc23                      ; 004cfe2f
        ;   XREF to: 004cfc23 (CONDITIONAL_JUMP)  ; LAB_004cfc23
    JMP 0x004cfc1d                      ; 004cfe35
        ;   XREF to: 004cfc1d (UNCONDITIONAL_JUMP)  ; LAB_004cfc1d
    CMP ESI,0x40000                     ; 004cfe3a
        ;   Label: LAB_004cfe3a
    JLE 0x004cfcd9                      ; 004cfe40
        ;   XREF to: 004cfcd9 (CONDITIONAL_JUMP)  ; LAB_004cfcd9
    MOV ESI,0x40000                     ; 004cfe46
    JMP 0x004cfcd9                      ; 004cfe4b
        ;   XREF to: 004cfcd9 (UNCONDITIONAL_JUMP)  ; LAB_004cfcd9

