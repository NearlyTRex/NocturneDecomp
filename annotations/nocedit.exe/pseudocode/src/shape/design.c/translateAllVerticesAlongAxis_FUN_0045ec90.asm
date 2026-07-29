; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_design_c_translateAllVerticesAlongAxis_FUN_0045ec90(void)
;
; Local Variables:
; char[40]         Stack[-0x48]:40  local_48
; int              Stack[-0x20]:4  local_20
; float            Stack[-0x1c]:4  local_1c
; int              Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_design.c_showFacetPartEditor_FUN_0045f1d0 at 00460906
;
; Referenced Globals:
;   TerminatedCString s_Enter_distance_or_locati_0061b633
;   TerminatedCString s_Press_Enter_or_enter_poi_0061b659
;   TerminatedCString s_Invalid_point_0061b68c
;   TerminatedCString s_Which_axis_to_use_X_Y_or_0061b69b
;   int g_VertexCount
;   SVertexData[20000] g_LoadedVertices
;   undefined4 g_LoadedVertices[0].vertex.y
;   undefined4 g_LoadedVertices[0].vertex.z
;
; Called Functions:
;   crt_ctype.c_toupper_FUN_005ff9e0
;   crt_stdlib.c_atoi_FUN_005ffef0
;   crt_string.c__strtod_FUN_005ff0f3
;   engine_2d.c_drawText_FUN_00401fd0
;   engine_2d.c_getInputWithPrompt_FUN_004032c0
;   engine_special.cpp_clearScreen_FUN_005b3e70
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
;   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045ec90
        ;   Label: shape_design.c_translateAllVerticesAlongAxis_FUN_0045ec90
    PUSH ESI                            ; 0045ec91
    PUSH EDI                            ; 0045ec92
    PUSH EBP                            ; 0045ec93
    MOV EBP,ESP                         ; 0045ec94
    SUB ESP,0x44                        ; 0045ec96
    CALL engine_special.cpp_clearScreen_FUN_005b3e70 ; 0045ec9c
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_005b3e70()
    MOV ECX,0x61b633                    ; 0045eca1 | = "Enter distance or location in feet : "
    PUSH ECX                            ; 0045eca6 | = "Enter distance or location in feet : "
    PUSH 0x0                            ; 0045eca7
    PUSH 0x0                            ; 0045eca9
    PUSH 0xa                            ; 0045ecab
    LEA ECX,[EBP + -0x38]               ; 0045ecad
    PUSH ECX                            ; 0045ecb0
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 0045ecb1
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
    ADD ESP,0x14                        ; 0045ecb6
    LEA EDI,[EBP + -0x38]               ; 0045ecb9
    SUB ECX,ECX                         ; 0045ecbc
    DEC ECX                             ; 0045ecbe
    XOR EAX,EAX                         ; 0045ecbf
    SCASB.REPNE ES:EDI                  ; 0045ecc1
    NOT ECX                             ; 0045ecc3
    DEC ECX                             ; 0045ecc5
    TEST ECX,ECX                        ; 0045ecc6
    JNZ 0x0045eccf                      ; 0045ecc8
        ;   XREF to: 0045eccf (CONDITIONAL_JUMP)  ; LAB_0045eccf
    JMP 0x0045ee5b                      ; 0045ecca
        ;   XREF to: 0045ee5b (UNCONDITIONAL_JUMP)  ; LAB_0045ee5b
    LEA EAX,[EBP + -0x38]               ; 0045eccf
        ;   Label: LAB_0045eccf
    PUSH EAX                            ; 0045ecd2
    CALL crt_string.c__strtod_FUN_005ff0f3 ; 0045ecd3
        ;   XREF to: 005ff0f3 (UNCONDITIONAL_CALL)  ; double crt_string.c__strtod_FUN_005ff0f3(char * str)
    MOV dword ptr [EBP + -0x40],EAX     ; 0045ecd8
    MOV dword ptr [EBP + -0x3c],EDX     ; 0045ecdb
    FLD double ptr [EBP + -0x40]        ; 0045ecde
    ADD ESP,0x4                         ; 0045ece1
    FSTP float ptr [EBP + -0xc]         ; 0045ece4
    MOV EAX,0x61b659                    ; 0045ece7 | = "Press <Enter> or enter point to set t..."
    PUSH EAX                            ; 0045ecec | = "Press <Enter> or enter point to set t..."
    PUSH 0x16                           ; 0045eced
    PUSH 0x0                            ; 0045ecef
    PUSH 0x14                           ; 0045ecf1
    LEA EAX,[EBP + -0x38]               ; 0045ecf3
    PUSH EAX                            ; 0045ecf6
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 0045ecf7
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
    ADD ESP,0x14                        ; 0045ecfc
    CMP EAX,0x1b                        ; 0045ecff
    JNZ 0x0045ed09                      ; 0045ed02
        ;   XREF to: 0045ed09 (CONDITIONAL_JUMP)  ; LAB_0045ed09
    JMP 0x0045ee5b                      ; 0045ed04
        ;   XREF to: 0045ee5b (UNCONDITIONAL_JUMP)  ; LAB_0045ee5b
    LEA EDI,[EBP + -0x38]               ; 0045ed09
        ;   Label: LAB_0045ed09
    SUB ECX,ECX                         ; 0045ed0c
    DEC ECX                             ; 0045ed0e
    XOR EAX,EAX                         ; 0045ed0f
    SCASB.REPNE ES:EDI                  ; 0045ed11
    NOT ECX                             ; 0045ed13
    DEC ECX                             ; 0045ed15
    TEST ECX,ECX                        ; 0045ed16
    JZ 0x0045ed6b                       ; 0045ed18
        ;   XREF to: 0045ed6b (CONDITIONAL_JUMP)  ; LAB_0045ed6b
    LEA EAX,[EBP + -0x38]               ; 0045ed1a
    PUSH EAX                            ; 0045ed1d
    CALL crt_stdlib.c_atoi_FUN_005ffef0 ; 0045ed1e
        ;   XREF to: 005ffef0 (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_atoi_FUN_005ffef0(char * string_ptr)
    ADD ESP,0x4                         ; 0045ed23
    MOV dword ptr [EBP + -0x10],EAX     ; 0045ed26
    CMP dword ptr [EBP + -0x10],0x0     ; 0045ed29
    JL 0x0045ed3a                       ; 0045ed2d
        ;   XREF to: 0045ed3a (CONDITIONAL_JUMP)  ; LAB_0045ed3a
    MOV EAX,[0x01626408]                ; 0045ed2f | g_VertexCount
    DEC EAX                             ; 0045ed34
    CMP EAX,dword ptr [EBP + -0x10]     ; 0045ed35
    JGE 0x0045ed5b                      ; 0045ed38
        ;   XREF to: 0045ed5b (CONDITIONAL_JUMP)  ; LAB_0045ed5b
    PUSH 0x2c                           ; 0045ed3a
        ;   Label: LAB_0045ed3a
    PUSH 0x0                            ; 0045ed3c
    MOV EAX,0x61b68c                    ; 0045ed3e | = "Invalid point."
    PUSH EAX                            ; 0045ed43 | = "Invalid point."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0045ed44
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0045ed49
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0045ed4c
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 0045ed51
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    JMP 0x0045ee5b                      ; 0045ed56
        ;   XREF to: 0045ee5b (UNCONDITIONAL_JUMP)  ; LAB_0045ee5b
    IMUL EAX,dword ptr [EBP + -0x10],0x14 ; 0045ed5b
        ;   Label: LAB_0045ed5b
    FLD float ptr [EBP + -0xc]          ; 0045ed5f
    FSUB float ptr [EAX + 0x162640c]    ; 0045ed62 | g_LoadedVertices
    FSTP float ptr [EBP + -0xc]         ; 0045ed68
    PUSH 0x2c                           ; 0045ed6b
        ;   Label: LAB_0045ed6b
    PUSH 0x0                            ; 0045ed6d
    MOV EAX,0x61b69b                    ; 0045ed6f | = "Which axis to use - X, Y, or Z? : "
    PUSH EAX                            ; 0045ed74 | = "Which axis to use - X, Y, or Z? : "
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0045ed75
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0045ed7a
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0045ed7d
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 0045ed82
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    AND EAX,0xff                        ; 0045ed87
    PUSH EAX                            ; 0045ed8c
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 0045ed8d
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    ADD ESP,0x4                         ; 0045ed92
    MOV dword ptr [EBP + -0x8],EAX      ; 0045ed95
    MOV EAX,dword ptr [EBP + -0x8]      ; 0045ed98
    MOV dword ptr [EBP + -0x44],EAX     ; 0045ed9b
    JMP 0x0045ee3b                      ; 0045ed9e
        ;   XREF to: 0045ee3b (UNCONDITIONAL_JUMP)  ; LAB_0045ee3b
    MOV dword ptr [EBP + -0x4],0x0      ; 0045eda3
        ;   Label: LAB_0045eda3
    JMP 0x0045edb2                      ; 0045edaa
        ;   XREF to: 0045edb2 (UNCONDITIONAL_JUMP)  ; LAB_0045edb2
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045edac
        ;   Label: LAB_0045edac
    INC dword ptr [EBP + -0x4]          ; 0045edaf
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045edb2
        ;   Label: LAB_0045edb2
    CMP EAX,dword ptr [0x01626408]      ; 0045edb5 | g_VertexCount
    JGE 0x0045edd2                      ; 0045edbb
        ;   XREF to: 0045edd2 (CONDITIONAL_JUMP)  ; LAB_0045edd2
    IMUL EAX,dword ptr [EBP + -0x4],0x14 ; 0045edbd
    FLD float ptr [EAX + 0x162640c]     ; 0045edc1 | g_LoadedVertices
    FADD float ptr [EBP + -0xc]         ; 0045edc7
    FSTP float ptr [EAX + 0x162640c]    ; 0045edca | g_LoadedVertices
    JMP 0x0045edac                      ; 0045edd0
        ;   XREF to: 0045edac (UNCONDITIONAL_JUMP)  ; LAB_0045edac
    JMP 0x0045ee5b                      ; 0045edd2
        ;   XREF to: 0045ee5b (UNCONDITIONAL_JUMP)  ; LAB_0045ee5b
        ;   Label: LAB_0045edd2
    MOV dword ptr [EBP + -0x4],0x0      ; 0045edd7
        ;   Label: LAB_0045edd7
    JMP 0x0045ede6                      ; 0045edde
        ;   XREF to: 0045ede6 (UNCONDITIONAL_JUMP)  ; LAB_0045ede6
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045ede0
        ;   Label: LAB_0045ede0
    INC dword ptr [EBP + -0x4]          ; 0045ede3
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045ede6
        ;   Label: LAB_0045ede6
    CMP EAX,dword ptr [0x01626408]      ; 0045ede9 | g_VertexCount
    JGE 0x0045ee06                      ; 0045edef
        ;   XREF to: 0045ee06 (CONDITIONAL_JUMP)  ; LAB_0045ee06
    IMUL EAX,dword ptr [EBP + -0x4],0x14 ; 0045edf1
    FLD float ptr [EAX + 0x1626410]     ; 0045edf5 | g_LoadedVertices[0].vertex.y
    FADD float ptr [EBP + -0xc]         ; 0045edfb
    FSTP float ptr [EAX + 0x1626410]    ; 0045edfe | g_LoadedVertices[0].vertex.y
    JMP 0x0045ede0                      ; 0045ee04
        ;   XREF to: 0045ede0 (UNCONDITIONAL_JUMP)  ; LAB_0045ede0
    JMP 0x0045ee5b                      ; 0045ee06
        ;   XREF to: 0045ee5b (UNCONDITIONAL_JUMP)  ; LAB_0045ee5b
        ;   Label: LAB_0045ee06
    MOV dword ptr [EBP + -0x4],0x0      ; 0045ee08
        ;   Label: LAB_0045ee08
    JMP 0x0045ee17                      ; 0045ee0f
        ;   XREF to: 0045ee17 (UNCONDITIONAL_JUMP)  ; LAB_0045ee17
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045ee11
        ;   Label: LAB_0045ee11
    INC dword ptr [EBP + -0x4]          ; 0045ee14
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045ee17
        ;   Label: LAB_0045ee17
    CMP EAX,dword ptr [0x01626408]      ; 0045ee1a | g_VertexCount
    JGE 0x0045ee37                      ; 0045ee20
        ;   XREF to: 0045ee37 (CONDITIONAL_JUMP)  ; LAB_0045ee37
    IMUL EAX,dword ptr [EBP + -0x4],0x14 ; 0045ee22
    FLD float ptr [EAX + 0x1626414]     ; 0045ee26 | g_LoadedVertices[0].vertex.z
    FADD float ptr [EBP + -0xc]         ; 0045ee2c
    FSTP float ptr [EAX + 0x1626414]    ; 0045ee2f | g_LoadedVertices[0].vertex.z
    JMP 0x0045ee11                      ; 0045ee35
        ;   XREF to: 0045ee11 (UNCONDITIONAL_JUMP)  ; LAB_0045ee11
    JMP 0x0045ee5b                      ; 0045ee37
        ;   XREF to: 0045ee5b (UNCONDITIONAL_JUMP)  ; LAB_0045ee5b
        ;   Label: LAB_0045ee37
    JMP 0x0045ee5b                      ; 0045ee39
        ;   XREF to: 0045ee5b (UNCONDITIONAL_JUMP)  ; LAB_0045ee5b
        ;   Label: LAB_0045ee39
    CMP dword ptr [EBP + -0x44],0x59    ; 0045ee3b
        ;   Label: LAB_0045ee3b
    JC 0x0045ee4f                       ; 0045ee3f
        ;   XREF to: 0045ee4f (CONDITIONAL_JUMP)  ; LAB_0045ee4f
    CMP dword ptr [EBP + -0x44],0x59    ; 0045ee41
    JBE 0x0045edd7                      ; 0045ee45
        ;   XREF to: 0045edd7 (CONDITIONAL_JUMP)  ; LAB_0045edd7
    CMP dword ptr [EBP + -0x44],0x5a    ; 0045ee47
    JZ 0x0045ee08                       ; 0045ee4b
        ;   XREF to: 0045ee08 (CONDITIONAL_JUMP)  ; LAB_0045ee08
    JMP 0x0045ee39                      ; 0045ee4d
        ;   XREF to: 0045ee39 (UNCONDITIONAL_JUMP)  ; LAB_0045ee39
    CMP dword ptr [EBP + -0x44],0x58    ; 0045ee4f
        ;   Label: LAB_0045ee4f
    JZ 0x0045eda3                       ; 0045ee53
        ;   XREF to: 0045eda3 (CONDITIONAL_JUMP)  ; LAB_0045eda3
    JMP 0x0045ee39                      ; 0045ee59
        ;   XREF to: 0045ee39 (UNCONDITIONAL_JUMP)  ; LAB_0045ee39
    MOV ESP,EBP                         ; 0045ee5b
        ;   Label: LAB_0045ee5b
    POP EBP                             ; 0045ee5d
    POP EDI                             ; 0045ee5e
    POP ESI                             ; 0045ee5f
    POP EBX                             ; 0045ee60
    RET                                 ; 0045ee61

