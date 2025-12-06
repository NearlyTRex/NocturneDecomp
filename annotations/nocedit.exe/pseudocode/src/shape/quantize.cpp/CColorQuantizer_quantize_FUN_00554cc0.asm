; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int shape_quantize.cpp_CColorQuantizer_quantize_FUN_00554cc0(CColorQuantizer * this_ptr)
;
; Parameters:
; CColorQuantizer * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   shape_quantize.cpp_CColorQuantizer_quantizeBitmaps_FUN_005563d0 at 00556402
;
; Referenced Globals:
;   TerminatedCString s_shape_quantize_cpp_00640a73
;   TerminatedCString s_shape_quantize_cpp_00640ab5
;   TerminatedCString s_Nothing_to_quantize_00640ba3
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   shape_memdbg.cpp_debugFree_FUN_0050f460
;   shape_quantize.cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090
;   shape_quantize.cpp_CColorQuantizer_generateSortedPalette_FUN_00555ff0
;   shape_quantize.cpp_CColorQuantizer_reduceColors_FUN_00555a40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00554cc0
        ;   Label: shape_quantize.cpp_CColorQuantizer_quantize_FUN_00554cc0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00554cc1
    CMP dword ptr [EBX + 0x4b38],0x0    ; 00554cc5
    JZ 0x00554ce8                       ; 00554ccc | LAB_00554ce8
        ;   XREF to: 00554ce8 (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 00554cce
    PUSH EBX                            ; 00554cd0
    CALL shape_quantize.cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090 ; 00554cd1 | void shape_quantize.cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090(CColorQuantizer * this_ptr, int box_index)
        ;   XREF to: 00555090 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00554cd6
    PUSH EBX                            ; 00554cd9
    CALL shape_quantize.cpp_CColorQuantizer_reduceColors_FUN_00555a40 ; 00554cda | int shape_quantize.cpp_CColorQuantizer_reduceColors_FUN_00555a40(CColorQuantizer * this_ptr)
        ;   XREF to: 00555a40 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00554cdf
    TEST EAX,EAX                        ; 00554ce2
    JNZ 0x00554d0f                      ; 00554ce4 | LAB_00554d0f
        ;   XREF to: 00554d0f (CONDITIONAL_JUMP)
    POP EBX                             ; 00554ce6
    RET                                 ; 00554ce7
    MOV ECX,0x640a73                    ; 00554ce8 | = "..\\shape\\quantize.cpp" | s_shape_quantize_cpp_00640a73 = ..\shape\quantize.cpp
        ;   Label: LAB_00554ce8
    MOV EBX,0x61                        ; 00554ced
    PUSH 0x640ba3                       ; 00554cf2 | = "Nothing to quantize." | s_Nothing_to_quantize_00640ba3 = Nothing to quantize.
    MOV dword ptr [0x02f0ca48],ECX      ; 00554cf7 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 00554cfd | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00554d03 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00554d08
    XOR EAX,EAX                         ; 00554d0b
    POP EBX                             ; 00554d0d
    RET                                 ; 00554d0e
    PUSH 0x79                           ; 00554d0f
        ;   Label: LAB_00554d0f
    PUSH 0x640ab5                       ; 00554d11 | = "..\\shape\\quantize.cpp" | s_shape_quantize_cpp_00640ab5 = ..\shape\quantize.cpp
    MOV EAX,dword ptr [EBX + 0x4]       ; 00554d16
    PUSH EAX                            ; 00554d19
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 00554d1a | void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00554d1f
    LEA EAX,[EBX + 0x4830]              ; 00554d22
    PUSH EAX                            ; 00554d28
    PUSH EBX                            ; 00554d29
    MOV dword ptr [EBX + 0x4],0x0       ; 00554d2a
    CALL shape_quantize.cpp_CColorQuantizer_generateSortedPalette_FUN_00555ff0 ; 00554d31 | int shape_quantize.cpp_CColorQuantizer_generateSortedPalette_FUN_00555ff0(CColorQuantizer * this_ptr, uchar * output_buffer)
        ;   XREF to: 00555ff0 (UNCONDITIONAL_CALL)
    MOV EAX,0x1                         ; 00554d36
    ADD ESP,0x8                         ; 00554d3b
    POP EBX                             ; 00554d3e
    RET                                 ; 00554d3f

