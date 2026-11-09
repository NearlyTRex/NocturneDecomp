; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_drawSingleButtonPrompt_FUN_0047c8e0(char *title,char *message,int color)
;
; Parameters:
; char *           Stack[0x4]:4   title
; char *           Stack[0x8]:4   message
; int              Stack[0xc]:4   color
; Local Variables:
; undefined        Stack[-0x108]:1  local_108
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40 at 0047cf8c
;   shape_edittool.cpp_CEditorTools_showMessage_FUN_0047ce80 at 0047cecc
;   shape_edittool.cpp_FUN_0047cee0 at 0047cf2c
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005bcd25
;   TerminatedCString s_gEdFont_must_be_set_by_t_005bcd3b
;   TerminatedCString s_Cancel_005bce11
;   TerminatedCString s_Cancel_005bce18
;   undefined4 DAT_005bce1f
;   CEditorTools* g_CEditorToolsPtr = 01c5b0e4
;   undefined4 DAT_005fba1c
;   undefined4 DAT_01c5b0e0
;   undefined4 DAT_01c5bae0
;   undefined4 DAT_01c5bae4
;   undefined4 DAT_01c6b5a8
;   undefined4 DAT_01c6b5ac
;   undefined4 DAT_01c6b5b0
;   undefined4 DAT_01c6b5b4
;   undefined4 DAT_01d71de0
;   ... and 2 more
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   engine_2d.c_clearInputAndWait_FUN_004032b0
;   engine_3d.c_setRenderAlpha_FUN_00406bf0
;   engine_font.cpp_FUN_004b0a20
;   engine_font.cpp_FUN_004b2a80
;   engine_font.cpp_FUN_004b2b30
;   engine_font.cpp_FUN_004b30f0
;   engine_mini3d.cpp_FUN_004edaf0
;   shape_edittool.cpp_CEdButton_ctor_FUN_00486020
;   shape_edittool.cpp_CEdButton_dtor_FUN_00486050
;   shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_004860d0
;   shape_edittool.cpp_CEdButton_wasClicked_FUN_00486440
;   shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_0047f3e0
;   shape_edittool.cpp_FUN_0047f970
;   shape_edittool.cpp_FUN_0047fa80
;   ... and 7 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047c8e0
        ;   Label: shape_edittool.cpp_drawSingleButtonPrompt_FUN_0047c8e0
    PUSH ESI                            ; 0047c8e1
    PUSH EDI                            ; 0047c8e2
    PUSH EBP                            ; 0047c8e3
    SUB ESP,0xf8                        ; 0047c8e4
    MOV ESI,dword ptr [ESP + 0x110]     ; 0047c8ea
    CMP dword ptr [0x01c5b0e0],0x0      ; 0047c8f1 | DAT_01c5b0e0
    JZ 0x0047cb6c                       ; 0047c8f8
        ;   XREF to: 0047cb6c (CONDITIONAL_JUMP)  ; LAB_0047cb6c
    MOV EAX,[0x01c5b0e0]                ; 0047c8fe | DAT_01c5b0e0
        ;   Label: LAB_0047c8fe
    PUSH 0x6a                           ; 0047c903
    MOV EDX,dword ptr [EAX + 0x41e8]    ; 0047c905
    PUSH EAX                            ; 0047c90b
    MOV dword ptr [0x01c5bae0],EDX      ; 0047c90c | DAT_01c5bae0
    CALL engine_font.cpp_FUN_004b30f0   ; 0047c912
        ;   XREF to: 004b30f0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004b30f0(CBitFont * this_ptr, int char_code)
    MOV [0x01c5bae4],EAX                ; 0047c917 | DAT_01c5bae4
    MOV EAX,[0x005fba1c]                ; 0047c91c | DAT_005fba1c
    MOV EDX,EAX                         ; 0047c921
    MOV EBX,0x60                        ; 0047c923
    SAR EDX,0x1f                        ; 0047c928
    IDIV EBX                            ; 0047c92b
    ADD ESP,0x8                         ; 0047c92d
    PUSH 0x5bce11                       ; 0047c930 | = "Cancel"
    MOV EBX,EAX                         ; 0047c935
    CALL shape_edittool.cpp_FUN_004864f0 ; 0047c937
        ;   XREF to: 004864f0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_FUN_004864f0(char * button_text)
    ADD ESP,0x4                         ; 0047c93c
    PUSH 0x0                            ; 0047c93f
    MOV dword ptr [ESP + 0xf4],EAX      ; 0047c941
    CALL shape_edittool.cpp_FUN_00486580 ; 0047c948
        ;   XREF to: 00486580 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_FUN_00486580(char * button_text)
    ADD ESP,0x4                         ; 0047c94d
    MOV EDI,dword ptr [ESP + 0x10c]     ; 0047c950
    PUSH EDI                            ; 0047c957
    MOV EBP,dword ptr [0x01c5b0e0]      ; 0047c958 | DAT_01c5b0e0
    ADD EBX,EBX                         ; 0047c95e
    PUSH EBP                            ; 0047c960
    ADD EBX,EAX                         ; 0047c961
    CALL engine_font.cpp_FUN_004b2a80   ; 0047c963
        ;   XREF to: 004b2a80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004b2a80(CBitFont * this_ptr, char * text)
    ADD ESP,0x8                         ; 0047c968
    MOV EBP,EAX                         ; 0047c96b
    PUSH ESI                            ; 0047c96d
    MOV dword ptr [ESP + 0xf8],EAX      ; 0047c96e
    MOV EAX,[0x01c5b0e0]                ; 0047c975 | DAT_01c5b0e0
    PUSH EAX                            ; 0047c97a
    CALL engine_font.cpp_FUN_004b2a80   ; 0047c97b
        ;   XREF to: 004b2a80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004b2a80(CBitFont * this_ptr, char * text)
    ADD ESP,0x8                         ; 0047c980
    MOV EDI,EAX                         ; 0047c983
    CMP EAX,EBP                         ; 0047c985
    JLE 0x0047c990                      ; 0047c987
        ;   XREF to: 0047c990 (CONDITIONAL_JUMP)  ; LAB_0047c990
    MOV dword ptr [ESP + 0xf4],EAX      ; 0047c989
    MOV EAX,dword ptr [ESP + 0xf0]      ; 0047c990
        ;   Label: LAB_0047c990
    CMP EAX,dword ptr [ESP + 0xf4]      ; 0047c997
    JG 0x0047cb94                       ; 0047c99e
        ;   XREF to: 0047cb94 (CONDITIONAL_JUMP)  ; LAB_0047cb94
    PUSH ESI                            ; 0047c9a4
        ;   Label: LAB_0047c9a4
    MOV ECX,dword ptr [0x01c5b0e0]      ; 0047c9a5 | DAT_01c5b0e0
    PUSH ECX                            ; 0047c9ab
    CALL engine_font.cpp_FUN_004b2b30   ; 0047c9ac
        ;   XREF to: 004b2b30 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004b2b30(CBitFont * this_ptr, char * text_string)
    ADD ESP,0x8                         ; 0047c9b1
    PUSH 0x0                            ; 0047c9b4
    MOV EDX,dword ptr [ESP + 0x110]     ; 0047c9b6
    PUSH EDX                            ; 0047c9bd
    MOV EDX,dword ptr [0x01c5bae4]      ; 0047c9be | DAT_01c5bae4
    ADD EDX,EDX                         ; 0047c9c4
    MOV EBP,EAX                         ; 0047c9c6
    ADD EAX,EDX                         ; 0047c9c8
    ADD EAX,EBX                         ; 0047c9ca
    PUSH EAX                            ; 0047c9cc
    MOV EAX,[0x01c5bae0]                ; 0047c9cd | DAT_01c5bae0
    MOV ECX,dword ptr [ESP + 0x100]     ; 0047c9d2
    SHL EAX,0x2                         ; 0047c9d9
    ADD EAX,ECX                         ; 0047c9dc
    PUSH EAX                            ; 0047c9de
    MOV EAX,[0x005fb140]                ; 0047c9df | g_CEditorToolsPtr
    PUSH EAX                            ; 0047c9e4
    CALL shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_0047f3e0 ; 0047c9e5
        ;   XREF to: 0047f3e0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_0047f3e0(CEditorTools * this_ptr, int min_width, int min_height, char * text_content, ...)
    ADD ESP,0x14                        ; 0047c9ea
    PUSH 0x5bce18                       ; 0047c9ed | = "Cancel"
    CALL shape_edittool.cpp_FUN_004864f0 ; 0047c9f2
        ;   XREF to: 004864f0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_FUN_004864f0(char * button_text)
    MOV EDX,dword ptr [0x01c6b5b0]      ; 0047c9f7 | DAT_01c6b5b0
    MOV dword ptr [ESP + 0xf0],EAX      ; 0047c9fd
    ADD ESP,0x4                         ; 0047ca04
    MOV EAX,[0x01c6b5a8]                ; 0047ca07 | DAT_01c6b5a8
    MOV ECX,dword ptr [ESP + 0xec]      ; 0047ca0c
    ADD EDX,EAX                         ; 0047ca13
    SUB EDX,ECX                         ; 0047ca15
    MOV EAX,EDX                         ; 0047ca17
    SAR EDX,0x1f                        ; 0047ca19
    SUB EAX,EDX                         ; 0047ca1c
    SAR EAX,0x1                         ; 0047ca1e
    INC EAX                             ; 0047ca20
    PUSH 0x0                            ; 0047ca21
    MOV dword ptr [ESP + 0xe8],EAX      ; 0047ca23
    CALL shape_edittool.cpp_FUN_00486580 ; 0047ca2a
        ;   XREF to: 00486580 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_FUN_00486580(char * button_text)
    MOV EDX,dword ptr [0x01c6b5b4]      ; 0047ca2f | DAT_01c6b5b4
    SUB EDX,EAX                         ; 0047ca35
    ADD ESP,0x4                         ; 0047ca37
    LEA EAX,[EDX + 0x1]                 ; 0047ca3a
    MOV dword ptr [ESP + 0xe8],EAX      ; 0047ca3d
    MOV EAX,ESP                         ; 0047ca44
    PUSH EAX                            ; 0047ca46
    CALL shape_edittool.cpp_CEdButton_ctor_FUN_00486020 ; 0047ca47
        ;   XREF to: 00486020 (UNCONDITIONAL_CALL)  ; CEdButton * shape_edittool.cpp_CEdButton_ctor_FUN_00486020(CEdButton * this_ptr)
    ADD ESP,0x4                         ; 0047ca4c
    PUSH 0x5bce1f                       ; 0047ca4f | DAT_005bce1f
    MOV EAX,[0x01c6b5b4]                ; 0047ca54 | DAT_01c6b5b4
    MOV EDX,dword ptr [ESP + 0xf0]      ; 0047ca59
    PUSH EAX                            ; 0047ca60
    MOV EAX,dword ptr [ESP + 0xec]      ; 0047ca61
    ADD EAX,EDX                         ; 0047ca68
    DEC EAX                             ; 0047ca6a
    PUSH EAX                            ; 0047ca6b
    MOV ECX,dword ptr [ESP + 0xf4]      ; 0047ca6c
    PUSH ECX                            ; 0047ca73
    MOV EAX,dword ptr [ESP + 0xf4]      ; 0047ca74
    PUSH EAX                            ; 0047ca7b
    LEA EAX,[ESP + 0x14]                ; 0047ca7c
    PUSH EAX                            ; 0047ca80
    CALL shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_004860d0 ; 0047ca81
        ;   XREF to: 004860d0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_004860d0(CEdButton * this_ptr, int left, int top, int right, ...)
    ADD ESP,0x18                        ; 0047ca86
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 0047ca89
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
    CALL wincore_winrun.cpp_wasKeyPressed_FUN_00580800 ; 0047ca8e
        ;   XREF to: 00580800 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_wasKeyPressed_FUN_00580800()
        ;   Label: LAB_0047ca8e
    TEST EAX,EAX                        ; 0047ca93
    JNZ 0x0047cba0                      ; 0047ca95
        ;   XREF to: 0047cba0 (CONDITIONAL_JUMP)  ; LAB_0047cba0
    MOV EAX,ESP                         ; 0047ca9b
    PUSH EAX                            ; 0047ca9d
    CALL shape_edittool.cpp_CEdButton_wasClicked_FUN_00486440 ; 0047ca9e
        ;   XREF to: 00486440 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEdButton_wasClicked_FUN_00486440(CEdButton * this_ptr)
    ADD ESP,0x4                         ; 0047caa3
    TEST EAX,EAX                        ; 0047caa6
    JNZ 0x0047cba0                      ; 0047caa8
        ;   XREF to: 0047cba0 (CONDITIONAL_JUMP)  ; LAB_0047cba0
    CMP dword ptr [0x02d21b80],0x0      ; 0047caae | DAT_02d21b80
    JNZ 0x0047cba0                      ; 0047cab5
        ;   XREF to: 0047cba0 (CONDITIONAL_JUMP)  ; LAB_0047cba0
    MOV ECX,dword ptr [0x005fb140]      ; 0047cabb | g_CEditorToolsPtr
    PUSH ECX                            ; 0047cac1
    CALL shape_edittool.cpp_FUN_0047fa80 ; 0047cac2
        ;   XREF to: 0047fa80 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047fa80()
    ADD ESP,0x4                         ; 0047cac7
    PUSH 0x1                            ; 0047caca
    MOV EAX,[0x005fb140]                ; 0047cacc | g_CEditorToolsPtr
    PUSH EAX                            ; 0047cad1
    CALL shape_edittool.cpp_FUN_00480200 ; 0047cad2
        ;   XREF to: 00480200 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00480200()
    ADD ESP,0x8                         ; 0047cad7
    PUSH 0xffff                         ; 0047cada
    CALL engine_3d.c_setRenderAlpha_FUN_00406bf0 ; 0047cadf
        ;   XREF to: 00406bf0 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406bf0(int alpha_color_value)
    ADD ESP,0x4                         ; 0047cae4
    PUSH 0x3f800000                     ; 0047cae7
    CALL engine_mini3d.cpp_FUN_004edaf0 ; 0047caec
        ;   XREF to: 004edaf0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004edaf0()
    ADD ESP,0x4                         ; 0047caf1
    PUSH -0x1                           ; 0047caf4
    MOV EDX,dword ptr [ESP + 0x118]     ; 0047caf6
    MOV ECX,dword ptr [0x01c6b5b4]      ; 0047cafd | DAT_01c6b5b4
    PUSH EDX                            ; 0047cb03
    MOV EDX,dword ptr [0x01c6b5ac]      ; 0047cb04 | DAT_01c6b5ac
    ADD EDX,ECX                         ; 0047cb0a
    SUB EDX,EBP                         ; 0047cb0c
    SUB EDX,EBX                         ; 0047cb0e
    MOV EAX,EDX                         ; 0047cb10
    SAR EDX,0x1f                        ; 0047cb12
    SUB EAX,EDX                         ; 0047cb15
    SAR EAX,0x1                         ; 0047cb17
    MOV EDX,dword ptr [0x01c6b5a8]      ; 0047cb19 | DAT_01c6b5a8
    PUSH EAX                            ; 0047cb1f
    ADD EDX,dword ptr [0x01c6b5b0]      ; 0047cb20 | DAT_01c6b5b0
    SUB EDX,EDI                         ; 0047cb26
    MOV EAX,EDX                         ; 0047cb28
    SAR EDX,0x1f                        ; 0047cb2a
    SUB EAX,EDX                         ; 0047cb2d
    SAR EAX,0x1                         ; 0047cb2f
    PUSH EAX                            ; 0047cb31
    PUSH ESI                            ; 0047cb32
    MOV EDX,dword ptr [0x01c5b0e0]      ; 0047cb33 | DAT_01c5b0e0
    PUSH EDX                            ; 0047cb39
    CALL engine_font.cpp_FUN_004b0a20   ; 0047cb3a
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    ADD ESP,0x18                        ; 0047cb3f
    PUSH 0x1                            ; 0047cb42
    LEA EAX,[ESP + 0x4]                 ; 0047cb44
    PUSH EAX                            ; 0047cb48
    CALL shape_edittool.cpp_FUN_00486120 ; 0047cb49
        ;   XREF to: 00486120 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00486120()
    ADD ESP,0x8                         ; 0047cb4e
    PUSH 0x0                            ; 0047cb51
    MOV ECX,dword ptr [0x005fb140]      ; 0047cb53 | g_CEditorToolsPtr
    PUSH ECX                            ; 0047cb59
    CALL shape_edittool.cpp_FUN_00480410 ; 0047cb5a
        ;   XREF to: 00480410 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00480410()
    ADD ESP,0x8                         ; 0047cb5f
    CALL wincore_wddvmem.cpp_FUN_0057a8a0 ; 0047cb62
        ;   XREF to: 0057a8a0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_FUN_0057a8a0()
    JMP 0x0047ca8e                      ; 0047cb67
        ;   XREF to: 0047ca8e (UNCONDITIONAL_JUMP)  ; LAB_0047ca8e
    MOV ECX,0x5bcd25                    ; 0047cb6c | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_0047cb6c
    MOV EBX,0xa7                        ; 0047cb71
    PUSH 0x5bcd3b                       ; 0047cb76 | = "gEdFont must be set by the application."
    MOV dword ptr [0x01d71de0],ECX      ; 0047cb7b | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 0047cb81 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0047cb87
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0047cb8c
    JMP 0x0047c8fe                      ; 0047cb8f
        ;   XREF to: 0047c8fe (UNCONDITIONAL_JUMP)  ; LAB_0047c8fe
    MOV dword ptr [ESP + 0xf4],EAX      ; 0047cb94
        ;   Label: LAB_0047cb94
    JMP 0x0047c9a4                      ; 0047cb9b
        ;   XREF to: 0047c9a4 (UNCONDITIONAL_JUMP)  ; LAB_0047c9a4
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 0047cba0
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
        ;   Label: LAB_0047cba0
    MOV EBX,dword ptr [0x005fb140]      ; 0047cba5 | g_CEditorToolsPtr
    PUSH EBX                            ; 0047cbab
    CALL shape_edittool.cpp_FUN_0047f970 ; 0047cbac
        ;   XREF to: 0047f970 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047f970()
    ADD ESP,0x4                         ; 0047cbb1
    PUSH 0x0                            ; 0047cbb4
    LEA EAX,[ESP + 0x4]                 ; 0047cbb6
    PUSH EAX                            ; 0047cbba
    CALL shape_edittool.cpp_CEdButton_dtor_FUN_00486050 ; 0047cbbb
        ;   XREF to: 00486050 (UNCONDITIONAL_CALL)  ; CEdButton * shape_edittool.cpp_CEdButton_dtor_FUN_00486050(CEdButton * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0047cbc0
    ADD ESP,0xf8                        ; 0047cbc3
    POP EBP                             ; 0047cbc9
    POP EDI                             ; 0047cbca
    POP ESI                             ; 0047cbcb
    POP EBX                             ; 0047cbcc
    RET                                 ; 0047cbcd

