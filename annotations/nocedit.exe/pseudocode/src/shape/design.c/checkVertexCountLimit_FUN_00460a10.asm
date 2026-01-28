; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl shape_design_c_checkVertexCountLimit_FUN_00460a10(void)
;
; Local Variables:
; undefined1       Stack[-0x68]:1  local_68
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_design.c_showFacetPartEditor_FUN_0045f1d0 at 0045f279
;
; Referenced Globals:
;   TerminatedCString s_ERROR_Too_many_vertices__0061b96b
;   TerminatedCString s_vertexList_in_2d_c_only__0061b997
;   TerminatedCString s_You_won_t_be_able_to_vie_0061b9c6
;   int g_VertexCount
;
; Called Functions:
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   engine_2d.c_drawText_FUN_00401fd0
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
;   wincore_windll.cpp_clearScreen_FUN_005b3e70
;   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00460a10
        ;   Label: shape_design.c_checkVertexCountLimit_FUN_00460a10
    PUSH ESI                            ; 00460a11
    PUSH EDI                            ; 00460a12
    PUSH EBP                            ; 00460a13
    MOV EBP,ESP                         ; 00460a14
    SUB ESP,0x58                        ; 00460a16
    MOV dword ptr [EBP + -0x4],0x4e20   ; 00460a1c
    MOV EAX,[0x01626408]                ; 00460a23 | g_VertexCount
    CMP EAX,dword ptr [EBP + -0x4]      ; 00460a28
    JLE 0x00460aad                      ; 00460a2b
        ;   XREF to: 00460aad (CONDITIONAL_JUMP)  ; LAB_00460aad
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 00460a31
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    MOV EAX,dword ptr [EBP + -0x4]      ; 00460a36
    PUSH EAX                            ; 00460a39
    PUSH dword ptr [0x01626408]         ; 00460a3a | g_VertexCount
    MOV EAX,0x61b96b                    ; 00460a40 | = "ERROR: Too many vertices! (npoints:%d..."
    PUSH EAX                            ; 00460a45 | = "ERROR: Too many vertices! (npoints:%d..."
    LEA EAX,[EBP + -0x58]               ; 00460a46
    PUSH EAX                            ; 00460a49
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00460a4a
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 00460a4f
    PUSH 0x0                            ; 00460a52
    PUSH 0x0                            ; 00460a54
    LEA EAX,[EBP + -0x58]               ; 00460a56
    PUSH EAX                            ; 00460a59
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00460a5a
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 00460a5f
    MOV EAX,dword ptr [EBP + -0x4]      ; 00460a62
    PUSH EAX                            ; 00460a65
    MOV EAX,0x61b997                    ; 00460a66 | = "vertexList[] in 2d.c only supports %d..."
    PUSH EAX                            ; 00460a6b | = "vertexList[] in 2d.c only supports %d..."
    LEA EAX,[EBP + -0x58]               ; 00460a6c
    PUSH EAX                            ; 00460a6f
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00460a70
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 00460a75
    PUSH 0x16                           ; 00460a78
    PUSH 0x0                            ; 00460a7a
    LEA EAX,[EBP + -0x58]               ; 00460a7c
    PUSH EAX                            ; 00460a7f
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00460a80
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 00460a85
    PUSH 0x2c                           ; 00460a88
    PUSH 0x0                            ; 00460a8a
    MOV EAX,0x61b9c6                    ; 00460a8c | = "You won't be able to view the model, ..."
    PUSH EAX                            ; 00460a91 | = "You won't be able to view the model, ..."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00460a92
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 00460a97
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 00460a9a
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 00460a9f
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    MOV dword ptr [EBP + -0x8],0x1      ; 00460aa4
    JMP 0x00460ab4                      ; 00460aab
        ;   XREF to: 00460ab4 (UNCONDITIONAL_JUMP)  ; LAB_00460ab4
    MOV dword ptr [EBP + -0x8],0x0      ; 00460aad
        ;   Label: LAB_00460aad
    MOV EAX,dword ptr [EBP + -0x8]      ; 00460ab4
        ;   Label: LAB_00460ab4
    MOV ESP,EBP                         ; 00460ab7
    POP EBP                             ; 00460ab9
    POP EDI                             ; 00460aba
    POP ESI                             ; 00460abb
    POP EBX                             ; 00460abc
    RET                                 ; 00460abd

