; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CInputString_draw_FUN_0046f680(CInputString *this_ptr,int x_pos,int y_pos)
;
; Parameters:
; CInputString *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x_pos
; int              Stack[0xc]:4   y_pos
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_00470eb0 at 004710e2
;   shape_edittool.cpp_FUN_0046f7e0 at 0046f8bd
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_0057e584
;   TerminatedCString s_CInputString_draw_string_0057e59a
;   undefined4 DAT_01bcd070
;   undefined4 DAT_01bcd9bc
;   undefined4 DAT_01bcdddc
;   undefined4 DAT_01bcdde0
;   undefined4 DAT_01bcdde4
;   int g_ActiveRenderColor
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;   crt_memory.c_memset_FUN_00563cc0
;   engine_2d.c_drawLine_FUN_004015a0
;   engine_2d.c_fillRectColor_FUN_00403e60
;   engine_3d.c_setRenderAlpha_FUN_00408370
;   engine_font.cpp_CBitFont_drawText_FUN_00490980
;   shape_edittool.cpp_CInputString_calcX_FUN_0046f5c0
;   wincore_winrun.cpp_getTime_FUN_00558a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046f680
        ;   Label: shape_edittool.cpp_CInputString_draw_FUN_0046f680
    PUSH ESI                            ; 0046f681
    PUSH EDI                            ; 0046f682
    PUSH EBP                            ; 0046f683
    SUB ESP,0x4                         ; 0046f684
    MOV EBX,dword ptr [ESP + 0x18]      ; 0046f687
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0046f68b
    MOV EBP,dword ptr [ESP + 0x20]      ; 0046f68f
    MOV EAX,[0x01bcd9bc]                ; 0046f693 | DAT_01bcd9bc
    ADD EAX,EBP                         ; 0046f698
    MOV EDX,dword ptr [EBX + 0x134]     ; 0046f69a
    MOV dword ptr [ESP],EAX             ; 0046f6a0
    MOV EAX,dword ptr [EBX + 0x138]     ; 0046f6a3
    CMP EAX,EDX                         ; 0046f6a9
    JNZ 0x0046f751                      ; 0046f6ab
        ;   XREF to: 0046f751 (CONDITIONAL_JUMP)  ; LAB_0046f751
    PUSH 0xffff                         ; 0046f6b1
        ;   Label: LAB_0046f6b1
    CALL engine_3d.c_setRenderAlpha_FUN_00408370 ; 0046f6b6
        ;   XREF to: 00408370 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00408370(int alpha_color_value)
    MOV ESI,dword ptr [EBX + 0x13c]     ; 0046f6bb
    ADD ESP,0x4                         ; 0046f6c1
    TEST ESI,ESI                        ; 0046f6c4
    JZ 0x0046f796                       ; 0046f6c6
        ;   XREF to: 0046f796 (CONDITIONAL_JUMP)  ; LAB_0046f796
    CMP dword ptr [EBX + 0x130],0x400   ; 0046f6cc
    JC 0x0046f6fa                       ; 0046f6d6
        ;   XREF to: 0046f6fa (CONDITIONAL_JUMP)  ; LAB_0046f6fa
    MOV ESI,0x57e584                    ; 0046f6d8 | = "..\\shape\\edittool.cpp"
    MOV EAX,0x1a5                       ; 0046f6dd
    PUSH 0x57e59a                       ; 0046f6e2 | = "CInputString::draw - string too big f..."
    MOV dword ptr [0x01cc4800],ESI      ; 0046f6e7 | g_CurrentFilename
    MOV [0x01cc4804],EAX                ; 0046f6ed | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 0046f6f2
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 0046f6f7
    MOV EDX,dword ptr [EBX + 0x130]     ; 0046f6fa
        ;   Label: LAB_0046f6fa
    PUSH EDX                            ; 0046f700
    PUSH 0x2a                           ; 0046f701
    PUSH 0x1bcd9c8                      ; 0046f703
    CALL crt_memory.c_memset_FUN_00563cc0 ; 0046f708
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_00563cc0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0046f70d
    PUSH -0x1                           ; 0046f710
    MOV ECX,dword ptr [0x01bcdde0]      ; 0046f712 | DAT_01bcdde0
    PUSH ECX                            ; 0046f718
    PUSH EBP                            ; 0046f719
    PUSH EDI                            ; 0046f71a
    MOV ESI,dword ptr [0x01bcd070]      ; 0046f71b | DAT_01bcd070
    PUSH 0x1bcd9c8                      ; 0046f721
    MOV EAX,dword ptr [EBX + 0x130]     ; 0046f726
    XOR DL,DL                           ; 0046f72c
    PUSH ESI                            ; 0046f72e
    MOV byte ptr [EAX + 0x1bcd9c8],DL   ; 0046f72f
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 0046f735
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_00490980(CBitFont * this_ptr, char * text, int x, int y, ...)
        ;   Label: LAB_0046f735
    ADD ESP,0x18                        ; 0046f73a
    CALL wincore_winrun.cpp_getTime_FUN_00558a30 ; 0046f73d
        ;   XREF to: 00558a30 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_00558a30()
    TEST EAX,0x40000                    ; 0046f742
    JNZ 0x0046f7aa                      ; 0046f747
        ;   XREF to: 0046f7aa (CONDITIONAL_JUMP)  ; LAB_0046f7aa
    ADD ESP,0x4                         ; 0046f749
    POP EBP                             ; 0046f74c
    POP EDI                             ; 0046f74d
    POP ESI                             ; 0046f74e
    POP EBX                             ; 0046f74f
    RET                                 ; 0046f750
    PUSH EAX                            ; 0046f751
        ;   Label: LAB_0046f751
    PUSH EBX                            ; 0046f752
    CALL shape_edittool.cpp_CInputString_calcX_FUN_0046f5c0 ; 0046f753
        ;   XREF to: 0046f5c0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CInputString_calcX_FUN_0046f5c0(CInputString * this_ptr, int char_index)
    ADD ESP,0x8                         ; 0046f758
    LEA ESI,[EDI + EAX*0x1]             ; 0046f75b
    MOV EAX,dword ptr [EBX + 0x134]     ; 0046f75e
    PUSH EAX                            ; 0046f764
    PUSH EBX                            ; 0046f765
    CALL shape_edittool.cpp_CInputString_calcX_FUN_0046f5c0 ; 0046f766
        ;   XREF to: 0046f5c0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CInputString_calcX_FUN_0046f5c0(CInputString * this_ptr, int char_index)
    ADD EAX,EDI                         ; 0046f76b
    ADD ESP,0x8                         ; 0046f76d
    CMP ESI,EAX                         ; 0046f770
    JLE 0x0046f77a                      ; 0046f772
        ;   XREF to: 0046f77a (CONDITIONAL_JUMP)  ; LAB_0046f77a
    MOV EDX,ESI                         ; 0046f774
    MOV ESI,EAX                         ; 0046f776
    MOV EAX,EDX                         ; 0046f778
    MOV EDX,dword ptr [0x01bcdddc]      ; 0046f77a | DAT_01bcdddc
        ;   Label: LAB_0046f77a
    PUSH EDX                            ; 0046f780
    MOV ECX,dword ptr [ESP + 0x4]       ; 0046f781
    PUSH ECX                            ; 0046f785
    PUSH EAX                            ; 0046f786
    PUSH EBP                            ; 0046f787
    PUSH ESI                            ; 0046f788
    CALL engine_2d.c_fillRectColor_FUN_00403e60 ; 0046f789
        ;   XREF to: 00403e60 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectColor_FUN_00403e60(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x14                        ; 0046f78e
    JMP 0x0046f6b1                      ; 0046f791
        ;   XREF to: 0046f6b1 (UNCONDITIONAL_JUMP)  ; LAB_0046f6b1
    PUSH -0x1                           ; 0046f796
        ;   Label: LAB_0046f796
    MOV EAX,[0x01bcdde0]                ; 0046f798 | DAT_01bcdde0
    PUSH EAX                            ; 0046f79d
    PUSH EBP                            ; 0046f79e
    PUSH EDI                            ; 0046f79f
    PUSH EBX                            ; 0046f7a0
    MOV EDX,dword ptr [0x01bcd070]      ; 0046f7a1 | DAT_01bcd070
    PUSH EDX                            ; 0046f7a7
    JMP 0x0046f735                      ; 0046f7a8
        ;   XREF to: 0046f735 (UNCONDITIONAL_JUMP)  ; LAB_0046f735
    MOV EAX,[0x01bcdde4]                ; 0046f7aa | DAT_01bcdde4
        ;   Label: LAB_0046f7aa
    MOV [0x01c00c70],EAX                ; 0046f7af | g_ActiveRenderColor
    MOV EAX,dword ptr [EBX + 0x134]     ; 0046f7b4
    PUSH EAX                            ; 0046f7ba
    PUSH EBX                            ; 0046f7bb
    CALL shape_edittool.cpp_CInputString_calcX_FUN_0046f5c0 ; 0046f7bc
        ;   XREF to: 0046f5c0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CInputString_calcX_FUN_0046f5c0(CInputString * this_ptr, int char_index)
    ADD ESP,0x8                         ; 0046f7c1
    MOV EDX,dword ptr [ESP]             ; 0046f7c4
    PUSH EDX                            ; 0046f7c7
    ADD EAX,EDI                         ; 0046f7c8
    PUSH EAX                            ; 0046f7ca
    PUSH EBP                            ; 0046f7cb
    PUSH EAX                            ; 0046f7cc
    CALL engine_2d.c_drawLine_FUN_004015a0 ; 0046f7cd
        ;   XREF to: 004015a0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004015a0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 0046f7d2
    ADD ESP,0x4                         ; 0046f7d5
    POP EBP                             ; 0046f7d8
    POP EDI                             ; 0046f7d9
    POP ESI                             ; 0046f7da
    POP EBX                             ; 0046f7db
    RET                                 ; 0046f7dc

