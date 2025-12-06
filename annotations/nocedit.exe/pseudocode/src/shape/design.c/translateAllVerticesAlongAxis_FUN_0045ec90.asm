; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined shape_design.c_translateAllVerticesAlongAxis_FUN_0045ec90()
;
; Local Variables:
; undefined4       Stack[-0x54]:4  local_54
; undefined8       Stack[-0x50]:8  local_50
; undefined        Stack[-0x48]:1  local_48
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_Enter_distance_or_locati_0061b633
;   TerminatedCString s_Press_Enter_or_enter_poi_0061b659
;   TerminatedCString s_Invalid_point_0061b68c
;   TerminatedCString s_Which_axis_to_use_X_Y_or_0061b69b
;   int g_VertexCount
;   SVertexData[20000] g_LoadedVertices
;   undefined4 DAT_01626410
;   undefined4 g_LoadedVertices[0].vertex.z
;
; Called Functions:
;   crt_ctype.c_toupper_FUN_005ff9e0
;   crt_stdlib.c_atoi_FUN_005ffef0
;   crt_string.c_strtod_FUN_005ff0f3
;   engine_2d.c_drawText_FUN_00401fd0
;   engine_2d.c_getInputWithPrompt_FUN_004032c0
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
;   wincore_windll.cpp_clearScreen_FUN_005b3e70
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
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 0045ec9c | void wincore_windll.cpp_clearScreen_FUN_005b3e70()
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
    MOV ECX,0x61b633                    ; 0045eca1 | = "Enter distance or location in feet : " | s_Enter_distance_or_locati_0061b633 = Enter distance or location in feet :
    PUSH ECX                            ; 0045eca6 | = "Enter distance or location in feet : " | s_Enter_distance_or_locati_0061b633 = Enter distance or location in feet :
    PUSH 0x0                            ; 0045eca7
    PUSH 0x0                            ; 0045eca9
    PUSH 0xa                            ; 0045ecab
    LEA ECX,[EBP + -0x38]               ; 0045ecad
    PUSH ECX                            ; 0045ecb0
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 0045ecb1 | int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 0045ecb6
    LEA EDI,[EBP + -0x38]               ; 0045ecb9
    SUB ECX,ECX                         ; 0045ecbc
    DEC ECX                             ; 0045ecbe
    XOR EAX,EAX                         ; 0045ecbf
    SCASB.REPNE ES:EDI                  ; 0045ecc1
    NOT ECX                             ; 0045ecc3
    DEC ECX                             ; 0045ecc5
    TEST ECX,ECX                        ; 0045ecc6
    JNZ 0x0045eccf                      ; 0045ecc8 | LAB_0045eccf
        ;   XREF to: 0045eccf (CONDITIONAL_JUMP)
    JMP 0x0045ee5b                      ; 0045ecca | LAB_0045ee5b
        ;   XREF to: 0045ee5b (UNCONDITIONAL_JUMP)
    LEA EAX,[EBP + -0x38]               ; 0045eccf
        ;   Label: LAB_0045eccf
    PUSH EAX                            ; 0045ecd2
    CALL crt_string.c_strtod_FUN_005ff0f3 ; 0045ecd3 | double crt_string.c_strtod_FUN_005ff0f3(char * str)
        ;   XREF to: 005ff0f3 (UNCONDITIONAL_CALL)
    MOV dword ptr [EBP + -0x40],EAX     ; 0045ecd8
    MOV dword ptr [EBP + -0x3c],EDX     ; 0045ecdb
    FLD double ptr [EBP + -0x40]        ; 0045ecde
    ADD ESP,0x4                         ; 0045ece1
    FSTP float ptr [EBP + -0xc]         ; 0045ece4
    MOV EAX,0x61b659                    ; 0045ece7 | = "Press <Enter> or enter point to set t..." | s_Press_Enter_or_enter_poi_0061b659 = Press <Enter> or enter point to set to location :
    PUSH EAX                            ; 0045ecec | = "Press <Enter> or enter point to set t..." | s_Press_Enter_or_enter_poi_0061b659 = Press <Enter> or enter point to set to location :
    PUSH 0x16                           ; 0045eced
    PUSH 0x0                            ; 0045ecef
    PUSH 0x14                           ; 0045ecf1
    LEA EAX,[EBP + -0x38]               ; 0045ecf3
    PUSH EAX                            ; 0045ecf6
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 0045ecf7 | int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 0045ecfc
    CMP EAX,0x1b                        ; 0045ecff
    JNZ 0x0045ed09                      ; 0045ed02 | LAB_0045ed09
        ;   XREF to: 0045ed09 (CONDITIONAL_JUMP)
    JMP 0x0045ee5b                      ; 0045ed04 | LAB_0045ee5b
        ;   XREF to: 0045ee5b (UNCONDITIONAL_JUMP)
    LEA EDI,[EBP + -0x38]               ; 0045ed09
        ;   Label: LAB_0045ed09
    SUB ECX,ECX                         ; 0045ed0c
    DEC ECX                             ; 0045ed0e
    XOR EAX,EAX                         ; 0045ed0f
    SCASB.REPNE ES:EDI                  ; 0045ed11
    NOT ECX                             ; 0045ed13
    DEC ECX                             ; 0045ed15
    TEST ECX,ECX                        ; 0045ed16
    JZ 0x0045ed6b                       ; 0045ed18 | LAB_0045ed6b
        ;   XREF to: 0045ed6b (CONDITIONAL_JUMP)
    LEA EAX,[EBP + -0x38]               ; 0045ed1a
    PUSH EAX                            ; 0045ed1d
    CALL crt_stdlib.c_atoi_FUN_005ffef0 ; 0045ed1e | int crt_stdlib.c_atoi_FUN_005ffef0(char * string_ptr)
        ;   XREF to: 005ffef0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0045ed23
    MOV dword ptr [EBP + -0x10],EAX     ; 0045ed26
    CMP dword ptr [EBP + -0x10],0x0     ; 0045ed29
    JL 0x0045ed3a                       ; 0045ed2d | LAB_0045ed3a
        ;   XREF to: 0045ed3a (CONDITIONAL_JUMP)
    MOV EAX,[0x01626408]                ; 0045ed2f | int g_VertexCount
    DEC EAX                             ; 0045ed34
    CMP EAX,dword ptr [EBP + -0x10]     ; 0045ed35
    JGE 0x0045ed5b                      ; 0045ed38 | LAB_0045ed5b
        ;   XREF to: 0045ed5b (CONDITIONAL_JUMP)
    PUSH 0x2c                           ; 0045ed3a
        ;   Label: LAB_0045ed3a
    PUSH 0x0                            ; 0045ed3c
    MOV EAX,0x61b68c                    ; 0045ed3e | = "Invalid point." | s_Invalid_point_0061b68c = Invalid point.
    PUSH EAX                            ; 0045ed43 | = "Invalid point." | s_Invalid_point_0061b68c = Invalid point.
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0045ed44 | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0045ed49
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0045ed4c | void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 0045ed51 | int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
    JMP 0x0045ee5b                      ; 0045ed56 | LAB_0045ee5b
        ;   XREF to: 0045ee5b (UNCONDITIONAL_JUMP)
    IMUL EAX,dword ptr [EBP + -0x10],0x14 ; 0045ed5b
        ;   Label: LAB_0045ed5b
    FLD float ptr [EBP + -0xc]          ; 0045ed5f
    FSUB float ptr [EAX + 0x162640c]    ; 0045ed62 | SVertexData[20000] g_LoadedVertices
    FSTP float ptr [EBP + -0xc]         ; 0045ed68
    PUSH 0x2c                           ; 0045ed6b
        ;   Label: LAB_0045ed6b
    PUSH 0x0                            ; 0045ed6d
    MOV EAX,0x61b69b                    ; 0045ed6f | = "Which axis to use - X, Y, or Z? : " | s_Which_axis_to_use_X_Y_or_0061b69b = Which axis to use - X, Y, or Z? :
    PUSH EAX                            ; 0045ed74 | = "Which axis to use - X, Y, or Z? : " | s_Which_axis_to_use_X_Y_or_0061b69b = Which axis to use - X, Y, or Z? :
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0045ed75 | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0045ed7a
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0045ed7d | void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 0045ed82 | int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
    AND EAX,0xff                        ; 0045ed87
    PUSH EAX                            ; 0045ed8c
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 0045ed8d | int crt_ctype.c_toupper_FUN_005ff9e0(int c)
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0045ed92
    MOV dword ptr [EBP + -0x8],EAX      ; 0045ed95
    MOV EAX,dword ptr [EBP + -0x8]      ; 0045ed98
    MOV dword ptr [EBP + -0x44],EAX     ; 0045ed9b
    JMP 0x0045ee3b                      ; 0045ed9e | LAB_0045ee3b
        ;   XREF to: 0045ee3b (UNCONDITIONAL_JUMP)
    MOV dword ptr [EBP + -0x4],0x0      ; 0045eda3
        ;   Label: LAB_0045eda3
    JMP 0x0045edb2                      ; 0045edaa | LAB_0045edb2
        ;   XREF to: 0045edb2 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045edac
        ;   Label: LAB_0045edac
    INC dword ptr [EBP + -0x4]          ; 0045edaf
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045edb2
        ;   Label: LAB_0045edb2
    CMP EAX,dword ptr [0x01626408]      ; 0045edb5 | int g_VertexCount
    JGE 0x0045edd2                      ; 0045edbb | LAB_0045edd2
        ;   XREF to: 0045edd2 (CONDITIONAL_JUMP)
    IMUL EAX,dword ptr [EBP + -0x4],0x14 ; 0045edbd
    FLD float ptr [EAX + 0x162640c]     ; 0045edc1 | SVertexData[20000] g_LoadedVertices
    FADD float ptr [EBP + -0xc]         ; 0045edc7
    FSTP float ptr [EAX + 0x162640c]    ; 0045edca | SVertexData[20000] g_LoadedVertices
    JMP 0x0045edac                      ; 0045edd0 | LAB_0045edac
        ;   XREF to: 0045edac (UNCONDITIONAL_JUMP)
    JMP 0x0045ee5b                      ; 0045edd2 | LAB_0045ee5b
        ;   Label: LAB_0045edd2
        ;   XREF to: 0045ee5b (UNCONDITIONAL_JUMP)
    MOV dword ptr [EBP + -0x4],0x0      ; 0045edd7
        ;   Label: LAB_0045edd7
    JMP 0x0045ede6                      ; 0045edde | LAB_0045ede6
        ;   XREF to: 0045ede6 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045ede0
        ;   Label: LAB_0045ede0
    INC dword ptr [EBP + -0x4]          ; 0045ede3
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045ede6
        ;   Label: LAB_0045ede6
    CMP EAX,dword ptr [0x01626408]      ; 0045ede9 | int g_VertexCount
    JGE 0x0045ee06                      ; 0045edef | LAB_0045ee06
        ;   XREF to: 0045ee06 (CONDITIONAL_JUMP)
    IMUL EAX,dword ptr [EBP + -0x4],0x14 ; 0045edf1
    FLD float ptr [EAX + 0x1626410]     ; 0045edf5 | DAT_01626410
    FADD float ptr [EBP + -0xc]         ; 0045edfb
    FSTP float ptr [EAX + 0x1626410]    ; 0045edfe | DAT_01626410
    JMP 0x0045ede0                      ; 0045ee04 | LAB_0045ede0
        ;   XREF to: 0045ede0 (UNCONDITIONAL_JUMP)
    JMP 0x0045ee5b                      ; 0045ee06 | LAB_0045ee5b
        ;   Label: LAB_0045ee06
        ;   XREF to: 0045ee5b (UNCONDITIONAL_JUMP)
    MOV dword ptr [EBP + -0x4],0x0      ; 0045ee08
        ;   Label: LAB_0045ee08
    JMP 0x0045ee17                      ; 0045ee0f | LAB_0045ee17
        ;   XREF to: 0045ee17 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045ee11
        ;   Label: LAB_0045ee11
    INC dword ptr [EBP + -0x4]          ; 0045ee14
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045ee17
        ;   Label: LAB_0045ee17
    CMP EAX,dword ptr [0x01626408]      ; 0045ee1a | int g_VertexCount
    JGE 0x0045ee37                      ; 0045ee20 | LAB_0045ee37
        ;   XREF to: 0045ee37 (CONDITIONAL_JUMP)
    IMUL EAX,dword ptr [EBP + -0x4],0x14 ; 0045ee22
    FLD float ptr [EAX + 0x1626414]     ; 0045ee26 | g_LoadedVertices[0].vertex.z
    FADD float ptr [EBP + -0xc]         ; 0045ee2c
    FSTP float ptr [EAX + 0x1626414]    ; 0045ee2f | g_LoadedVertices[0].vertex.z
    JMP 0x0045ee11                      ; 0045ee35 | LAB_0045ee11
        ;   XREF to: 0045ee11 (UNCONDITIONAL_JUMP)
    JMP 0x0045ee5b                      ; 0045ee37 | LAB_0045ee5b
        ;   Label: LAB_0045ee37
        ;   XREF to: 0045ee5b (UNCONDITIONAL_JUMP)
    JMP 0x0045ee5b                      ; 0045ee39 | LAB_0045ee5b
        ;   Label: LAB_0045ee39
        ;   XREF to: 0045ee5b (UNCONDITIONAL_JUMP)
    CMP dword ptr [EBP + -0x44],0x59    ; 0045ee3b
        ;   Label: LAB_0045ee3b
    JC 0x0045ee4f                       ; 0045ee3f | LAB_0045ee4f
        ;   XREF to: 0045ee4f (CONDITIONAL_JUMP)
    CMP dword ptr [EBP + -0x44],0x59    ; 0045ee41
    JBE 0x0045edd7                      ; 0045ee45 | LAB_0045edd7
        ;   XREF to: 0045edd7 (CONDITIONAL_JUMP)
    CMP dword ptr [EBP + -0x44],0x5a    ; 0045ee47
    JZ 0x0045ee08                       ; 0045ee4b | LAB_0045ee08
        ;   XREF to: 0045ee08 (CONDITIONAL_JUMP)
    JMP 0x0045ee39                      ; 0045ee4d | LAB_0045ee39
        ;   XREF to: 0045ee39 (UNCONDITIONAL_JUMP)
    CMP dword ptr [EBP + -0x44],0x58    ; 0045ee4f
        ;   Label: LAB_0045ee4f
    JZ 0x0045eda3                       ; 0045ee53 | LAB_0045eda3
        ;   XREF to: 0045eda3 (CONDITIONAL_JUMP)
    JMP 0x0045ee39                      ; 0045ee59 | LAB_0045ee39
        ;   XREF to: 0045ee39 (UNCONDITIONAL_JUMP)
    MOV ESP,EBP                         ; 0045ee5b
        ;   Label: LAB_0045ee5b
    POP EBP                             ; 0045ee5d
    POP EDI                             ; 0045ee5e
    POP ESI                             ; 0045ee5f
    POP EBX                             ; 0045ee60
    RET                                 ; 0045ee61

