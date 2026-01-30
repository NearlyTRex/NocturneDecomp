; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_design_c_deletePolygonRange_FUN_0045dd70(void)
;
; Local Variables:
; undefined        Stack[-0x70]:1  local_70
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_Polygon_range_s_to_delet_0061b45f
;   TerminatedCString s_d_d_0061b483
;   TerminatedCString s_Bad_range_Hit_a_key_0061b489
;   int g_PolygonCount
;   SShapeEditorPolygon[20000] g_ModelPolygonData
;   undefined4 DAT_016e9914
;
; Called Functions:
;   crt_stdio.c_sscanf_FUN_0060013c
;   engine_2d.c_clearInputAndWait_FUN_00403260
;   engine_2d.c_drawText_FUN_00401fd0
;   engine_2d.c_getInputWithPrompt_FUN_004032c0
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
;   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045dd70
        ;   Label: shape_design.c_deletePolygonRange_FUN_0045dd70
    PUSH ESI                            ; 0045dd71
    PUSH EDI                            ; 0045dd72
    PUSH EBP                            ; 0045dd73
    MOV EBP,ESP                         ; 0045dd74
    SUB ESP,0x60                        ; 0045dd76
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 0045dd7c
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    MOV ECX,0x61b45f                    ; 0045dd81 | = "Polygon range #s to delete (a,b) : "
    PUSH ECX                            ; 0045dd86 | = "Polygon range #s to delete (a,b) : "
    PUSH 0x0                            ; 0045dd87
    PUSH 0x0                            ; 0045dd89
    PUSH 0x32                           ; 0045dd8b
    LEA ECX,[EBP + -0x60]               ; 0045dd8d
    PUSH ECX                            ; 0045dd90
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 0045dd91
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
    ADD ESP,0x14                        ; 0045dd96
    LEA EDI,[EBP + -0x60]               ; 0045dd99
    SUB ECX,ECX                         ; 0045dd9c
    DEC ECX                             ; 0045dd9e
    XOR EAX,EAX                         ; 0045dd9f
    SCASB.REPNE ES:EDI                  ; 0045dda1
    NOT ECX                             ; 0045dda3
    DEC ECX                             ; 0045dda5
    TEST ECX,ECX                        ; 0045dda6
    JNZ 0x0045ddaf                      ; 0045dda8
        ;   XREF to: 0045ddaf (CONDITIONAL_JUMP)  ; LAB_0045ddaf
    JMP 0x0045de77                      ; 0045ddaa
        ;   XREF to: 0045de77 (UNCONDITIONAL_JUMP)  ; LAB_0045de77
    LEA EAX,[EBP + -0x8]                ; 0045ddaf
        ;   Label: LAB_0045ddaf
    PUSH EAX                            ; 0045ddb2
    LEA EAX,[EBP + -0xc]                ; 0045ddb3
    PUSH EAX                            ; 0045ddb6
    MOV EAX,0x61b483                    ; 0045ddb7 | = "%d,%d"
    PUSH EAX                            ; 0045ddbc | = "%d,%d"
    LEA EAX,[EBP + -0x60]               ; 0045ddbd
    PUSH EAX                            ; 0045ddc0
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 0045ddc1
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x10                        ; 0045ddc6
    MOV dword ptr [EBP + -0x4],EAX      ; 0045ddc9
    CMP dword ptr [EBP + -0x4],0x2      ; 0045ddcc
    JZ 0x0045ddd7                       ; 0045ddd0
        ;   XREF to: 0045ddd7 (CONDITIONAL_JUMP)  ; LAB_0045ddd7
    JMP 0x0045de77                      ; 0045ddd2
        ;   XREF to: 0045de77 (UNCONDITIONAL_JUMP)  ; LAB_0045de77
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045ddd7
        ;   Label: LAB_0045ddd7
    CMP EAX,dword ptr [EBP + -0x8]      ; 0045ddda
    JG 0x0045dde5                       ; 0045dddd
        ;   XREF to: 0045dde5 (CONDITIONAL_JUMP)  ; LAB_0045dde5
    CMP dword ptr [EBP + -0xc],0x0      ; 0045dddf
    JGE 0x0045dde7                      ; 0045dde3
        ;   XREF to: 0045dde7 (CONDITIONAL_JUMP)  ; LAB_0045dde7
    JMP 0x0045ddf2                      ; 0045dde5
        ;   XREF to: 0045ddf2 (UNCONDITIONAL_JUMP)  ; LAB_0045ddf2
        ;   Label: LAB_0045dde5
    MOV EAX,dword ptr [EBP + -0x8]      ; 0045dde7
        ;   Label: LAB_0045dde7
    CMP EAX,dword ptr [0x016e990c]      ; 0045ddea | g_PolygonCount
    JL 0x0045de10                       ; 0045ddf0
        ;   XREF to: 0045de10 (CONDITIONAL_JUMP)  ; LAB_0045de10
    PUSH 0x16                           ; 0045ddf2
        ;   Label: LAB_0045ddf2
    PUSH 0x0                            ; 0045ddf4
    MOV EAX,0x61b489                    ; 0045ddf6 | = "Bad range.  Hit a key..."
    PUSH EAX                            ; 0045ddfb | = "Bad range.  Hit a key..."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0045ddfc
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 0045de01
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0045de04
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 0045de09
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    JMP 0x0045de77                      ; 0045de0e
        ;   XREF to: 0045de77 (UNCONDITIONAL_JUMP)  ; LAB_0045de77
    MOV dword ptr [EBP + -0x4],0x0      ; 0045de10
        ;   Label: LAB_0045de10
    JMP 0x0045de1f                      ; 0045de17
        ;   XREF to: 0045de1f (UNCONDITIONAL_JUMP)  ; LAB_0045de1f
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045de19
        ;   Label: LAB_0045de19
    INC dword ptr [EBP + -0x4]          ; 0045de1c
    MOV EAX,dword ptr [EBP + -0x8]      ; 0045de1f
        ;   Label: LAB_0045de1f
    SUB EAX,dword ptr [EBP + -0xc]      ; 0045de22
    INC EAX                             ; 0045de25
    CMP EAX,dword ptr [EBP + -0x4]      ; 0045de26
    JLE 0x0045de72                      ; 0045de29
        ;   XREF to: 0045de72 (CONDITIONAL_JUMP)  ; LAB_0045de72
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045de2b
    MOV dword ptr [EBP + -0x10],EAX     ; 0045de2e
    JMP 0x0045de39                      ; 0045de31
        ;   XREF to: 0045de39 (UNCONDITIONAL_JUMP)  ; LAB_0045de39
    MOV EAX,dword ptr [EBP + -0x10]     ; 0045de33
        ;   Label: LAB_0045de33
    INC dword ptr [EBP + -0x10]         ; 0045de36
    MOV EAX,[0x016e990c]                ; 0045de39 | g_PolygonCount
        ;   Label: LAB_0045de39
    DEC EAX                             ; 0045de3e
    CMP EAX,dword ptr [EBP + -0x10]     ; 0045de3f
    JLE 0x0045de6a                      ; 0045de42
        ;   XREF to: 0045de6a (CONDITIONAL_JUMP)  ; LAB_0045de6a
    MOV EAX,dword ptr [EBP + -0x10]     ; 0045de44
    INC EAX                             ; 0045de47
    IMUL EAX,EAX,0x184                  ; 0045de48
    IMUL ESI,dword ptr [EBP + -0x10],0x184 ; 0045de4e
    MOV ECX,0x61                        ; 0045de55
    LEA EDI,[ESI + 0x16e9910]           ; 0045de5a | g_ModelPolygonData
    LEA ESI,[EAX + 0x16e9910]           ; 0045de60 | g_ModelPolygonData
    MOVSD.REP ES:EDI,ESI                ; 0045de66 | g_ModelPolygonData | DAT_016e9914
    JMP 0x0045de33                      ; 0045de68
        ;   XREF to: 0045de33 (UNCONDITIONAL_JUMP)  ; LAB_0045de33
    DEC dword ptr [0x016e990c]          ; 0045de6a | g_PolygonCount
        ;   Label: LAB_0045de6a
    JMP 0x0045de19                      ; 0045de70
        ;   XREF to: 0045de19 (UNCONDITIONAL_JUMP)  ; LAB_0045de19
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 0045de72
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
        ;   Label: LAB_0045de72
    MOV ESP,EBP                         ; 0045de77
        ;   Label: LAB_0045de77
    POP EBP                             ; 0045de79
    POP EDI                             ; 0045de7a
    POP ESI                             ; 0045de7b
    POP EBX                             ; 0045de7c
    RET                                 ; 0045de7d

