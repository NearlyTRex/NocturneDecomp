; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_design.c_sizeModelToZFeet_FUN_00466c70(void)
;
; Local Variables:
; undefined1       Stack[-0x7c]:1  local_7c
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_design.c_showShapeEditorMenu_FUN_0046f290 at 0046f75e
;
; Referenced Globals:
;   TerminatedCString s_Enter_Z_distance_in_feet_0061c7c5
;   TerminatedCString s_f_d_d_0061c80c
;   TerminatedCString s_Need_distance_and_two_po_0061c815
;   TerminatedCString s_Invalid_point_0061c833
;   int g_VertexCount
;   SVertexData[20000] g_LoadedVertices
;   undefined4 DAT_01626410
;   undefined4 g_LoadedVertices[0].vertex.z
;
; Called Functions:
;   crt_stdio.c_sscanf_FUN_0060013c
;   engine_2d.c_drawText_FUN_00401fd0
;   engine_2d.c_getInputWithPrompt_FUN_004032c0
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
;   wincore_windll.cpp_clearScreen_FUN_005b3e70
;   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00466c70
        ;   Label: shape_design.c_sizeModelToZFeet_FUN_00466c70
    PUSH ESI                            ; 00466c71
    PUSH EDI                            ; 00466c72
    PUSH EBP                            ; 00466c73
    MOV EBP,ESP                         ; 00466c74
    SUB ESP,0x6c                        ; 00466c76
    MOV dword ptr [EBP + -0x8],0x497423fe ; 00466c7c
    MOV dword ptr [EBP + -0x4],0xc97423fe ; 00466c83
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 00466c8a
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    MOV ECX,0x61c7c5                    ; 00466c8f | = "Enter Z distance in feet (,min,max fo..."
    PUSH ECX                            ; 00466c94 | = "Enter Z distance in feet (,min,max fo..."
    PUSH 0x16                           ; 00466c95
    PUSH 0x0                            ; 00466c97
    PUSH 0x14                           ; 00466c99
    LEA ECX,[EBP + -0x6c]               ; 00466c9b
    PUSH ECX                            ; 00466c9e
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 00466c9f
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
    ADD ESP,0x14                        ; 00466ca4
    LEA EDI,[EBP + -0x6c]               ; 00466ca7
    SUB ECX,ECX                         ; 00466caa
    DEC ECX                             ; 00466cac
    XOR EAX,EAX                         ; 00466cad
    SCASB.REPNE ES:EDI                  ; 00466caf
    NOT ECX                             ; 00466cb1
    DEC ECX                             ; 00466cb3
    TEST ECX,ECX                        ; 00466cb4
    JNZ 0x00466cbd                      ; 00466cb6
        ;   XREF to: 00466cbd (CONDITIONAL_JUMP)  ; LAB_00466cbd
    JMP 0x00466e2a                      ; 00466cb8
        ;   XREF to: 00466e2a (UNCONDITIONAL_JUMP)  ; LAB_00466e2a
    LEA EAX,[EBP + -0x18]               ; 00466cbd
        ;   Label: LAB_00466cbd
    PUSH EAX                            ; 00466cc0
    LEA EAX,[EBP + -0x14]               ; 00466cc1
    PUSH EAX                            ; 00466cc4
    LEA EAX,[EBP + -0x10]               ; 00466cc5
    PUSH EAX                            ; 00466cc8
    MOV EAX,0x61c80c                    ; 00466cc9 | = "%f,%d,%d"
    PUSH EAX                            ; 00466cce | = "%f,%d,%d"
    LEA EAX,[EBP + -0x6c]               ; 00466ccf
    PUSH EAX                            ; 00466cd2
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 00466cd3
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x14                        ; 00466cd8
    MOV dword ptr [EBP + -0x1c],EAX     ; 00466cdb
    CMP dword ptr [EBP + -0x1c],0x1     ; 00466cde
    JLE 0x00466d72                      ; 00466ce2
        ;   XREF to: 00466d72 (CONDITIONAL_JUMP)  ; LAB_00466d72
    CMP dword ptr [EBP + -0x1c],0x3     ; 00466ce8
    JZ 0x00466d0f                       ; 00466cec
        ;   XREF to: 00466d0f (CONDITIONAL_JUMP)  ; LAB_00466d0f
    PUSH 0x2c                           ; 00466cee
    PUSH 0x0                            ; 00466cf0
    MOV EAX,0x61c815                    ; 00466cf2 | = "Need distance and two points."
    PUSH EAX                            ; 00466cf7 | = "Need distance and two points."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00466cf8
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 00466cfd
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 00466d00
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 00466d05
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    JMP 0x00466e2a                      ; 00466d0a
        ;   XREF to: 00466e2a (UNCONDITIONAL_JUMP)  ; LAB_00466e2a
    CMP dword ptr [EBP + -0x14],0x0     ; 00466d0f
        ;   Label: LAB_00466d0f
    JL 0x00466d1b                       ; 00466d13
        ;   XREF to: 00466d1b (CONDITIONAL_JUMP)  ; LAB_00466d1b
    CMP dword ptr [EBP + -0x18],0x0     ; 00466d15
    JGE 0x00466d1d                      ; 00466d19
        ;   XREF to: 00466d1d (CONDITIONAL_JUMP)  ; LAB_00466d1d
    JMP 0x00466d28                      ; 00466d1b
        ;   XREF to: 00466d28 (UNCONDITIONAL_JUMP)  ; LAB_00466d28
        ;   Label: LAB_00466d1b
    MOV EAX,[0x01626408]                ; 00466d1d | g_VertexCount
        ;   Label: LAB_00466d1d
    DEC EAX                             ; 00466d22
    CMP EAX,dword ptr [EBP + -0x14]     ; 00466d23
    JGE 0x00466d2a                      ; 00466d26
        ;   XREF to: 00466d2a (CONDITIONAL_JUMP)  ; LAB_00466d2a
    JMP 0x00466d35                      ; 00466d28
        ;   XREF to: 00466d35 (UNCONDITIONAL_JUMP)  ; LAB_00466d35
        ;   Label: LAB_00466d28
    MOV EAX,[0x01626408]                ; 00466d2a | g_VertexCount
        ;   Label: LAB_00466d2a
    DEC EAX                             ; 00466d2f
    CMP EAX,dword ptr [EBP + -0x18]     ; 00466d30
    JGE 0x00466d56                      ; 00466d33
        ;   XREF to: 00466d56 (CONDITIONAL_JUMP)  ; LAB_00466d56
    PUSH 0x2c                           ; 00466d35
        ;   Label: LAB_00466d35
    PUSH 0x0                            ; 00466d37
    MOV EAX,0x61c833                    ; 00466d39 | = "Invalid point."
    PUSH EAX                            ; 00466d3e | = "Invalid point."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00466d3f
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 00466d44
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 00466d47
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 00466d4c
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    JMP 0x00466e2a                      ; 00466d51
        ;   XREF to: 00466e2a (UNCONDITIONAL_JUMP)  ; LAB_00466e2a
    IMUL EAX,dword ptr [EBP + -0x18],0x14 ; 00466d56
        ;   Label: LAB_00466d56
    MOV EAX,dword ptr [EAX + 0x1626414] ; 00466d5a | g_LoadedVertices[0].vertex.z
    MOV dword ptr [EBP + -0x4],EAX      ; 00466d60
    IMUL EAX,dword ptr [EBP + -0x14],0x14 ; 00466d63
    MOV EAX,dword ptr [EAX + 0x1626414] ; 00466d67 | g_LoadedVertices[0].vertex.z
    MOV dword ptr [EBP + -0x8],EAX      ; 00466d6d
    JMP 0x00466dbd                      ; 00466d70
        ;   XREF to: 00466dbd (UNCONDITIONAL_JUMP)  ; LAB_00466dbd
    MOV dword ptr [EBP + -0x1c],0x0     ; 00466d72
        ;   Label: LAB_00466d72
    JMP 0x00466d81                      ; 00466d79
        ;   XREF to: 00466d81 (UNCONDITIONAL_JUMP)  ; LAB_00466d81
    MOV EAX,dword ptr [EBP + -0x1c]     ; 00466d7b
        ;   Label: LAB_00466d7b
    INC dword ptr [EBP + -0x1c]         ; 00466d7e
    MOV EAX,dword ptr [EBP + -0x1c]     ; 00466d81
        ;   Label: LAB_00466d81
    CMP EAX,dword ptr [0x01626408]      ; 00466d84 | g_VertexCount
    JGE 0x00466dbd                      ; 00466d8a
        ;   XREF to: 00466dbd (CONDITIONAL_JUMP)  ; LAB_00466dbd
    IMUL EAX,dword ptr [EBP + -0x1c],0x14 ; 00466d8c
    MOV EAX,dword ptr [EAX + 0x1626414] ; 00466d90 | g_LoadedVertices[0].vertex.z
    MOV dword ptr [EBP + -0xc],EAX      ; 00466d96
    FLD float ptr [EBP + -0xc]          ; 00466d99
    FCOMP float ptr [EBP + -0x4]        ; 00466d9c
    FNSTSW AX                           ; 00466d9f
    SAHF                                ; 00466da1
    JBE 0x00466daa                      ; 00466da2
        ;   XREF to: 00466daa (CONDITIONAL_JUMP)  ; LAB_00466daa
    MOV EAX,dword ptr [EBP + -0xc]      ; 00466da4
    MOV dword ptr [EBP + -0x4],EAX      ; 00466da7
    FLD float ptr [EBP + -0xc]          ; 00466daa
        ;   Label: LAB_00466daa
    FCOMP float ptr [EBP + -0x8]        ; 00466dad
    FNSTSW AX                           ; 00466db0
    SAHF                                ; 00466db2
    JNC 0x00466dbb                      ; 00466db3
        ;   XREF to: 00466dbb (CONDITIONAL_JUMP)  ; LAB_00466dbb
    MOV EAX,dword ptr [EBP + -0xc]      ; 00466db5
    MOV dword ptr [EBP + -0x8],EAX      ; 00466db8
    JMP 0x00466d7b                      ; 00466dbb
        ;   XREF to: 00466d7b (UNCONDITIONAL_JUMP)  ; LAB_00466d7b
        ;   Label: LAB_00466dbb
    FLD float ptr [EBP + -0x4]          ; 00466dbd
        ;   Label: LAB_00466dbd
    FSUB float ptr [EBP + -0x8]         ; 00466dc0
    FDIVR float ptr [EBP + -0x10]       ; 00466dc3
    FSTP float ptr [EBP + -0x10]        ; 00466dc6
    MOV dword ptr [EBP + -0x1c],0x0     ; 00466dc9
    JMP 0x00466dd8                      ; 00466dd0
        ;   XREF to: 00466dd8 (UNCONDITIONAL_JUMP)  ; LAB_00466dd8
    MOV EAX,dword ptr [EBP + -0x1c]     ; 00466dd2
        ;   Label: LAB_00466dd2
    INC dword ptr [EBP + -0x1c]         ; 00466dd5
    MOV EAX,dword ptr [EBP + -0x1c]     ; 00466dd8
        ;   Label: LAB_00466dd8
    CMP EAX,dword ptr [0x01626408]      ; 00466ddb | g_VertexCount
    JGE 0x00466e2a                      ; 00466de1
        ;   XREF to: 00466e2a (CONDITIONAL_JUMP)  ; LAB_00466e2a
    IMUL EAX,dword ptr [EBP + -0x1c],0x14 ; 00466de3
    FLD float ptr [EAX + 0x162640c]     ; 00466de7 | g_LoadedVertices
    FMUL float ptr [EBP + -0x10]        ; 00466ded
    IMUL EAX,dword ptr [EBP + -0x1c],0x14 ; 00466df0
    FSTP float ptr [EAX + 0x162640c]    ; 00466df4 | g_LoadedVertices
    IMUL EAX,dword ptr [EBP + -0x1c],0x14 ; 00466dfa
    FLD float ptr [EAX + 0x1626410]     ; 00466dfe | DAT_01626410
    FMUL float ptr [EBP + -0x10]        ; 00466e04
    IMUL EAX,dword ptr [EBP + -0x1c],0x14 ; 00466e07
    FSTP float ptr [EAX + 0x1626410]    ; 00466e0b | DAT_01626410
    IMUL EAX,dword ptr [EBP + -0x1c],0x14 ; 00466e11
    FLD float ptr [EAX + 0x1626414]     ; 00466e15 | g_LoadedVertices[0].vertex.z
    FMUL float ptr [EBP + -0x10]        ; 00466e1b
    IMUL EAX,dword ptr [EBP + -0x1c],0x14 ; 00466e1e
    FSTP float ptr [EAX + 0x1626414]    ; 00466e22 | g_LoadedVertices[0].vertex.z
    JMP 0x00466dd2                      ; 00466e28
        ;   XREF to: 00466dd2 (UNCONDITIONAL_JUMP)  ; LAB_00466dd2
    MOV ESP,EBP                         ; 00466e2a
        ;   Label: LAB_00466e2a
    POP EBP                             ; 00466e2c
    POP EDI                             ; 00466e2d
    POP ESI                             ; 00466e2e
    POP EBX                             ; 00466e2f
    RET                                 ; 00466e30

