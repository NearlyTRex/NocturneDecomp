; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_design_c_createRotationalSweepGeometry_FUN_0045e070(void)
;
; Local Variables:
; undefined        Stack[-0xc4]:1  local_c4
; undefined4       Stack[-0x74]:4  local_74
; undefined        Stack[-0x70]:1  local_70
; undefined        Stack[-0x6c]:1  local_6c
; undefined        Stack[-0x68]:1  local_68
; undefined        Stack[-0x64]:1  local_64
; undefined        Stack[-0x60]:1  local_60
; undefined        Stack[-0x5c]:1  local_5c
; undefined        Stack[-0x58]:1  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_Sweep_around_X_Y_Z_axis_0061b4af
;   TerminatedCString s_Enter_in_point_list_0061b4cd
;   TerminatedCString s_d_d_d_d_d_d_d_d_0061b4e4
;   TerminatedCString s_Enter_in_of_sections_0061b4fc
;   TerminatedCString s_I_nside_O_utside_B_oth_0061b516
;   double g_DegreesInCircle = 360
;   double g_DegreesToRadiansShapeFactor = 0.00555555555555555
;   double g_Pi_0061b546 = 3.14159265350000
;   int g_VertexCount
;   SVertexData[20000] g_LoadedVertices
;   undefined4 DAT_01626410
;   undefined4 g_LoadedVertices[0].vertex.z
;
; Called Functions:
;   crt_ctype.c_toupper_FUN_005ff9e0
;   crt_stdio.c_sscanf_FUN_0060013c
;   crt_stdlib.c_atoi_FUN_005ffef0
;   engine_2d.c_clearInputAndWait_FUN_00403260
;   engine_2d.c_drawText_FUN_00401fd0
;   engine_2d.c_getInputWithPrompt_FUN_004032c0
;   shape_design.c_createQuadPolygon_FUN_0045df60
;   shape_design.c_createReversedQuadPolygon_FUN_0045e040
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
;   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045e070
        ;   Label: shape_design.c_createRotationalSweepGeometry_FUN_0045e070
    PUSH ESI                            ; 0045e071
    PUSH EDI                            ; 0045e072
    PUSH EBP                            ; 0045e073
    MOV EBP,ESP                         ; 0045e074
    SUB ESP,0xb4                        ; 0045e076
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 0045e07c
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    PUSH 0x0                            ; 0045e081
    PUSH 0x0                            ; 0045e083
    MOV EAX,0x61b4af                    ; 0045e085 | = "Sweep around X) Y) Z) axis : "
    PUSH EAX                            ; 0045e08a | = "Sweep around X) Y) Z) axis : "
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0045e08b
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 0045e090
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0045e093
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 0045e098
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    AND EAX,0xff                        ; 0045e09d
    PUSH EAX                            ; 0045e0a2
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 0045e0a3
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    ADD ESP,0x4                         ; 0045e0a8
    MOV dword ptr [EBP + -0x44],EAX     ; 0045e0ab
    MOV EAX,0x61b4cd                    ; 0045e0ae | = "Enter in point list : "
    PUSH EAX                            ; 0045e0b3 | = "Enter in point list : "
    PUSH 0xb                            ; 0045e0b4
    PUSH 0x0                            ; 0045e0b6
    PUSH 0x4f                           ; 0045e0b8
    LEA EAX,[EBP + 0xffffff4c]          ; 0045e0ba
    PUSH EAX                            ; 0045e0c0
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 0045e0c1
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
    ADD ESP,0x14                        ; 0045e0c6
    LEA EAX,[EBP + -0x48]               ; 0045e0c9
    PUSH EAX                            ; 0045e0cc
    LEA EAX,[EBP + -0x4c]               ; 0045e0cd
    PUSH EAX                            ; 0045e0d0
    LEA EAX,[EBP + -0x50]               ; 0045e0d1
    PUSH EAX                            ; 0045e0d4
    LEA EAX,[EBP + -0x54]               ; 0045e0d5
    PUSH EAX                            ; 0045e0d8
    LEA EAX,[EBP + -0x58]               ; 0045e0d9
    PUSH EAX                            ; 0045e0dc
    LEA EAX,[EBP + -0x5c]               ; 0045e0dd
    PUSH EAX                            ; 0045e0e0
    LEA EAX,[EBP + -0x60]               ; 0045e0e1
    PUSH EAX                            ; 0045e0e4
    LEA EAX,[EBP + -0x64]               ; 0045e0e5
    PUSH EAX                            ; 0045e0e8
    MOV EAX,0x61b4e4                    ; 0045e0e9 | = "%d,%d,%d,%d,%d,%d,%d,%d"
    PUSH EAX                            ; 0045e0ee | = "%d,%d,%d,%d,%d,%d,%d,%d"
    LEA EAX,[EBP + 0xffffff4c]          ; 0045e0ef
    PUSH EAX                            ; 0045e0f5
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 0045e0f6
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x28                        ; 0045e0fb
    MOV dword ptr [EBP + -0x40],EAX     ; 0045e0fe
    MOV EAX,0x61b4fc                    ; 0045e101 | = "Enter in # of sections : "
    PUSH EAX                            ; 0045e106 | = "Enter in # of sections : "
    PUSH 0x16                           ; 0045e107
    PUSH 0x0                            ; 0045e109
    PUSH 0xa                            ; 0045e10b
    LEA EAX,[EBP + 0xffffff4c]          ; 0045e10d
    PUSH EAX                            ; 0045e113
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 0045e114
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
    ADD ESP,0x14                        ; 0045e119
    LEA EAX,[EBP + 0xffffff4c]          ; 0045e11c
    PUSH EAX                            ; 0045e122
    CALL crt_stdlib.c_atoi_FUN_005ffef0 ; 0045e123
        ;   XREF to: 005ffef0 (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_atoi_FUN_005ffef0(char * string_ptr)
    ADD ESP,0x4                         ; 0045e128
    MOV dword ptr [EBP + -0x3c],EAX     ; 0045e12b
    PUSH 0x21                           ; 0045e12e
    PUSH 0x0                            ; 0045e130
    MOV EAX,0x61b516                    ; 0045e132 | = "I)nside, O)utside, B)oth ?"
    PUSH EAX                            ; 0045e137 | = "I)nside, O)utside, B)oth ?"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0045e138
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 0045e13d
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0045e140
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 0045e145
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    AND EAX,0xff                        ; 0045e14a
    PUSH EAX                            ; 0045e14f
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 0045e150
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    ADD ESP,0x4                         ; 0045e155
    MOV dword ptr [EBP + -0x4],EAX      ; 0045e158
    CMP dword ptr [EBP + -0x40],0x0     ; 0045e15b
    JLE 0x0045e167                      ; 0045e15f
        ;   XREF to: 0045e167 (CONDITIONAL_JUMP)  ; LAB_0045e167
    CMP dword ptr [EBP + -0x40],0x7     ; 0045e161
    JL 0x0045e169                       ; 0045e165
        ;   XREF to: 0045e169 (CONDITIONAL_JUMP)  ; LAB_0045e169
    JMP 0x0045e16f                      ; 0045e167
        ;   XREF to: 0045e16f (UNCONDITIONAL_JUMP)  ; LAB_0045e16f
        ;   Label: LAB_0045e167
    CMP dword ptr [EBP + -0x3c],0x0     ; 0045e169
        ;   Label: LAB_0045e169
    JG 0x0045e174                       ; 0045e16d
        ;   XREF to: 0045e174 (CONDITIONAL_JUMP)  ; LAB_0045e174
    JMP 0x0045e50c                      ; 0045e16f
        ;   XREF to: 0045e50c (UNCONDITIONAL_JUMP)  ; LAB_0045e50c
        ;   Label: LAB_0045e16f
    FILD dword ptr [EBP + -0x3c]        ; 0045e174
        ;   Label: LAB_0045e174
    FDIVR double ptr [0x0061b536]       ; 0045e177 | g_DegreesInCircle
    FSTP float ptr [EBP + -0x38]        ; 0045e17d
    MOV EAX,dword ptr [EBP + -0x38]     ; 0045e180
    MOV dword ptr [EBP + -0x34],EAX     ; 0045e183
    MOV EAX,[0x01626408]                ; 0045e186 | g_VertexCount
    MOV dword ptr [EBP + -0x28],EAX     ; 0045e18b
    MOV dword ptr [EBP + -0x30],0x0     ; 0045e18e
    JMP 0x0045e19d                      ; 0045e195
        ;   XREF to: 0045e19d (UNCONDITIONAL_JUMP)  ; LAB_0045e19d
    MOV EAX,dword ptr [EBP + -0x30]     ; 0045e197
        ;   Label: LAB_0045e197
    INC dword ptr [EBP + -0x30]         ; 0045e19a
    MOV EAX,dword ptr [EBP + -0x30]     ; 0045e19d
        ;   Label: LAB_0045e19d
    CMP EAX,dword ptr [EBP + -0x3c]     ; 0045e1a0
    JG 0x0045e3ee                       ; 0045e1a3
        ;   XREF to: 0045e3ee (CONDITIONAL_JUMP)  ; LAB_0045e3ee
    FLD float ptr [EBP + -0x34]         ; 0045e1a9
    FMUL double ptr [0x0061b53e]        ; 0045e1ac | g_DegreesToRadiansShapeFactor
    FMUL double ptr [0x0061b546]        ; 0045e1b2 | g_Pi_0061b546
    FSIN                                ; 0045e1b8
    FSTP float ptr [EBP + -0x24]        ; 0045e1ba
    FLD float ptr [EBP + -0x34]         ; 0045e1bd
    FMUL double ptr [0x0061b53e]        ; 0045e1c0 | g_DegreesToRadiansShapeFactor
    FMUL double ptr [0x0061b546]        ; 0045e1c6 | g_Pi_0061b546
    FCOS                                ; 0045e1cc
    FSTP float ptr [EBP + -0x20]        ; 0045e1ce
    MOV dword ptr [EBP + -0x2c],0x1     ; 0045e1d1
    JMP 0x0045e1e0                      ; 0045e1d8
        ;   XREF to: 0045e1e0 (UNCONDITIONAL_JUMP)  ; LAB_0045e1e0
    MOV EAX,dword ptr [EBP + -0x2c]     ; 0045e1da
        ;   Label: LAB_0045e1da
    INC dword ptr [EBP + -0x2c]         ; 0045e1dd
    MOV EAX,dword ptr [EBP + -0x2c]     ; 0045e1e0
        ;   Label: LAB_0045e1e0
    CMP EAX,dword ptr [EBP + -0x40]     ; 0045e1e3
    JGE 0x0045e3e0                      ; 0045e1e6
        ;   XREF to: 0045e3e0 (CONDITIONAL_JUMP)  ; LAB_0045e3e0
    CMP dword ptr [EBP + -0x44],0x58    ; 0045e1ec
    JNZ 0x0045e284                      ; 0045e1f0
        ;   XREF to: 0045e284 (CONDITIONAL_JUMP)  ; LAB_0045e284
    MOV EAX,dword ptr [EBP + -0x2c]     ; 0045e1f6
    SHL EAX,0x2                         ; 0045e1f9
    IMUL EDX,dword ptr [EAX + EBP*0x1 + -0x64],0x14 ; 0045e1fc
    IMUL EAX,dword ptr [EBP + -0x64],0x14 ; 0045e201
    FLD float ptr [EDX + 0x1626410]     ; 0045e205 | DAT_01626410
    FSUB float ptr [EAX + 0x1626410]    ; 0045e20b | DAT_01626410
    FSTP float ptr [EBP + -0x10]        ; 0045e211
    MOV EAX,dword ptr [EBP + -0x2c]     ; 0045e214
    SHL EAX,0x2                         ; 0045e217
    IMUL EDX,dword ptr [EAX + EBP*0x1 + -0x64],0x14 ; 0045e21a
    IMUL EAX,dword ptr [EBP + -0x64],0x14 ; 0045e21f
    FLD float ptr [EDX + 0x1626414]     ; 0045e223 | g_LoadedVertices[0].vertex.z
    FSUB float ptr [EAX + 0x1626414]    ; 0045e229 | g_LoadedVertices[0].vertex.z
    FSTP float ptr [EBP + -0xc]         ; 0045e22f
    FLD float ptr [EBP + -0x10]         ; 0045e232
    FMUL float ptr [EBP + -0x10]        ; 0045e235
    FLD float ptr [EBP + -0xc]          ; 0045e238
    FMUL float ptr [EBP + -0xc]         ; 0045e23b
    FADDP                               ; 0045e23e
    FSQRT                               ; 0045e240
    FSTP float ptr [EBP + -0x8]         ; 0045e242
    MOV EAX,dword ptr [EBP + -0x2c]     ; 0045e245
    SHL EAX,0x2                         ; 0045e248
    IMUL EAX,dword ptr [EAX + EBP*0x1 + -0x64],0x14 ; 0045e24b
    MOV EAX,dword ptr [EAX + 0x162640c] ; 0045e250 | g_LoadedVertices
    MOV dword ptr [EBP + -0x1c],EAX     ; 0045e256
    IMUL EAX,dword ptr [EBP + -0x64],0x14 ; 0045e259
    FLD float ptr [EBP + -0x24]         ; 0045e25d
    FMUL float ptr [EBP + -0x8]         ; 0045e260
    FADD float ptr [EAX + 0x1626410]    ; 0045e263 | DAT_01626410
    FSTP float ptr [EBP + -0x18]        ; 0045e269
    IMUL EAX,dword ptr [EBP + -0x64],0x14 ; 0045e26c
    FLD float ptr [EBP + -0x20]         ; 0045e270
    FMUL float ptr [EBP + -0x8]         ; 0045e273
    FADD float ptr [EAX + 0x1626414]    ; 0045e276 | g_LoadedVertices[0].vertex.z
    FSTP float ptr [EBP + -0x14]        ; 0045e27c
    JMP 0x0045e3a5                      ; 0045e27f
        ;   XREF to: 0045e3a5 (UNCONDITIONAL_JUMP)  ; LAB_0045e3a5
    CMP dword ptr [EBP + -0x44],0x59    ; 0045e284
        ;   Label: LAB_0045e284
    JNZ 0x0045e31c                      ; 0045e288
        ;   XREF to: 0045e31c (CONDITIONAL_JUMP)  ; LAB_0045e31c
    MOV EAX,dword ptr [EBP + -0x2c]     ; 0045e28e
    SHL EAX,0x2                         ; 0045e291
    IMUL EDX,dword ptr [EAX + EBP*0x1 + -0x64],0x14 ; 0045e294
    IMUL EAX,dword ptr [EBP + -0x64],0x14 ; 0045e299
    FLD float ptr [EDX + 0x162640c]     ; 0045e29d | g_LoadedVertices
    FSUB float ptr [EAX + 0x162640c]    ; 0045e2a3 | g_LoadedVertices
    FSTP float ptr [EBP + -0x10]        ; 0045e2a9
    MOV EAX,dword ptr [EBP + -0x2c]     ; 0045e2ac
    SHL EAX,0x2                         ; 0045e2af
    IMUL EDX,dword ptr [EAX + EBP*0x1 + -0x64],0x14 ; 0045e2b2
    IMUL EAX,dword ptr [EBP + -0x64],0x14 ; 0045e2b7
    FLD float ptr [EDX + 0x1626414]     ; 0045e2bb | g_LoadedVertices[0].vertex.z
    FSUB float ptr [EAX + 0x1626414]    ; 0045e2c1 | g_LoadedVertices[0].vertex.z
    FSTP float ptr [EBP + -0xc]         ; 0045e2c7
    FLD float ptr [EBP + -0x10]         ; 0045e2ca
    FMUL float ptr [EBP + -0x10]        ; 0045e2cd
    FLD float ptr [EBP + -0xc]          ; 0045e2d0
    FMUL float ptr [EBP + -0xc]         ; 0045e2d3
    FADDP                               ; 0045e2d6
    FSQRT                               ; 0045e2d8
    FSTP float ptr [EBP + -0x8]         ; 0045e2da
    IMUL EAX,dword ptr [EBP + -0x64],0x14 ; 0045e2dd
    FLD float ptr [EBP + -0x20]         ; 0045e2e1
    FMUL float ptr [EBP + -0x8]         ; 0045e2e4
    FADD float ptr [EAX + 0x162640c]    ; 0045e2e7 | g_LoadedVertices
    FSTP float ptr [EBP + -0x1c]        ; 0045e2ed
    MOV EAX,dword ptr [EBP + -0x2c]     ; 0045e2f0
    SHL EAX,0x2                         ; 0045e2f3
    IMUL EAX,dword ptr [EAX + EBP*0x1 + -0x64],0x14 ; 0045e2f6
    MOV EAX,dword ptr [EAX + 0x1626410] ; 0045e2fb | DAT_01626410
    MOV dword ptr [EBP + -0x18],EAX     ; 0045e301
    IMUL EAX,dword ptr [EBP + -0x64],0x14 ; 0045e304
    FLD float ptr [EBP + -0x24]         ; 0045e308
    FMUL float ptr [EBP + -0x8]         ; 0045e30b
    FADD float ptr [EAX + 0x1626414]    ; 0045e30e | g_LoadedVertices[0].vertex.z
    FSTP float ptr [EBP + -0x14]        ; 0045e314
    JMP 0x0045e3a5                      ; 0045e317
        ;   XREF to: 0045e3a5 (UNCONDITIONAL_JUMP)  ; LAB_0045e3a5
    MOV EAX,dword ptr [EBP + -0x2c]     ; 0045e31c
        ;   Label: LAB_0045e31c
    SHL EAX,0x2                         ; 0045e31f
    IMUL EDX,dword ptr [EAX + EBP*0x1 + -0x64],0x14 ; 0045e322
    IMUL EAX,dword ptr [EBP + -0x64],0x14 ; 0045e327
    FLD float ptr [EDX + 0x162640c]     ; 0045e32b | g_LoadedVertices
    FSUB float ptr [EAX + 0x162640c]    ; 0045e331 | g_LoadedVertices
    FSTP float ptr [EBP + -0x10]        ; 0045e337
    MOV EAX,dword ptr [EBP + -0x2c]     ; 0045e33a
    SHL EAX,0x2                         ; 0045e33d
    IMUL EDX,dword ptr [EAX + EBP*0x1 + -0x64],0x14 ; 0045e340
    IMUL EAX,dword ptr [EBP + -0x64],0x14 ; 0045e345
    FLD float ptr [EDX + 0x1626410]     ; 0045e349 | DAT_01626410
    FSUB float ptr [EAX + 0x1626410]    ; 0045e34f | DAT_01626410
    FSTP float ptr [EBP + -0xc]         ; 0045e355
    FLD float ptr [EBP + -0x10]         ; 0045e358
    FMUL float ptr [EBP + -0x10]        ; 0045e35b
    FLD float ptr [EBP + -0xc]          ; 0045e35e
    FMUL float ptr [EBP + -0xc]         ; 0045e361
    FADDP                               ; 0045e364
    FSQRT                               ; 0045e366
    FSTP float ptr [EBP + -0x8]         ; 0045e368
    IMUL EAX,dword ptr [EBP + -0x64],0x14 ; 0045e36b
    FLD float ptr [EBP + -0x20]         ; 0045e36f
    FMUL float ptr [EBP + -0x8]         ; 0045e372
    FADD float ptr [EAX + 0x162640c]    ; 0045e375 | g_LoadedVertices
    FSTP float ptr [EBP + -0x1c]        ; 0045e37b
    IMUL EAX,dword ptr [EBP + -0x64],0x14 ; 0045e37e
    FLD float ptr [EBP + -0x24]         ; 0045e382
    FMUL float ptr [EBP + -0x8]         ; 0045e385
    FADD float ptr [EAX + 0x1626410]    ; 0045e388 | DAT_01626410
    FSTP float ptr [EBP + -0x18]        ; 0045e38e
    MOV EAX,dword ptr [EBP + -0x2c]     ; 0045e391
    SHL EAX,0x2                         ; 0045e394
    IMUL EAX,dword ptr [EAX + EBP*0x1 + -0x64],0x14 ; 0045e397
    MOV EAX,dword ptr [EAX + 0x1626414] ; 0045e39c | g_LoadedVertices[0].vertex.z
    MOV dword ptr [EBP + -0x14],EAX     ; 0045e3a2
    IMUL EDX,dword ptr [0x01626408],0x14 ; 0045e3a5 | g_VertexCount
        ;   Label: LAB_0045e3a5
    MOV EAX,dword ptr [EBP + -0x1c]     ; 0045e3ac
    MOV dword ptr [EDX + 0x162640c],EAX ; 0045e3af | g_LoadedVertices
    IMUL EDX,dword ptr [0x01626408],0x14 ; 0045e3b5 | g_VertexCount
    MOV EAX,dword ptr [EBP + -0x18]     ; 0045e3bc
    MOV dword ptr [EDX + 0x1626410],EAX ; 0045e3bf | DAT_01626410
    IMUL EDX,dword ptr [0x01626408],0x14 ; 0045e3c5 | g_VertexCount
    MOV EAX,dword ptr [EBP + -0x14]     ; 0045e3cc
    MOV dword ptr [EDX + 0x1626414],EAX ; 0045e3cf | g_LoadedVertices[0].vertex.z
    INC dword ptr [0x01626408]          ; 0045e3d5 | g_VertexCount
    JMP 0x0045e1da                      ; 0045e3db
        ;   XREF to: 0045e1da (UNCONDITIONAL_JUMP)  ; LAB_0045e1da
    FLD float ptr [EBP + -0x34]         ; 0045e3e0
        ;   Label: LAB_0045e3e0
    FADD float ptr [EBP + -0x38]        ; 0045e3e3
    FSTP float ptr [EBP + -0x34]        ; 0045e3e6
    JMP 0x0045e197                      ; 0045e3e9
        ;   XREF to: 0045e197 (UNCONDITIONAL_JUMP)  ; LAB_0045e197
    CMP dword ptr [EBP + -0x4],0x42     ; 0045e3ee
        ;   Label: LAB_0045e3ee
    JZ 0x0045e3fe                       ; 0045e3f2
        ;   XREF to: 0045e3fe (CONDITIONAL_JUMP)  ; LAB_0045e3fe
    CMP dword ptr [EBP + -0x4],0x49     ; 0045e3f4
    JNZ 0x0045e47d                      ; 0045e3f8
        ;   XREF to: 0045e47d (CONDITIONAL_JUMP)  ; LAB_0045e47d
    MOV dword ptr [EBP + -0x30],0x0     ; 0045e3fe
        ;   Label: LAB_0045e3fe
    JMP 0x0045e40d                      ; 0045e405
        ;   XREF to: 0045e40d (UNCONDITIONAL_JUMP)  ; LAB_0045e40d
    MOV EAX,dword ptr [EBP + -0x30]     ; 0045e407
        ;   Label: LAB_0045e407
    INC dword ptr [EBP + -0x30]         ; 0045e40a
    MOV EAX,dword ptr [EBP + -0x30]     ; 0045e40d
        ;   Label: LAB_0045e40d
    CMP EAX,dword ptr [EBP + -0x3c]     ; 0045e410
    JGE 0x0045e47d                      ; 0045e413
        ;   XREF to: 0045e47d (CONDITIONAL_JUMP)  ; LAB_0045e47d
    MOV dword ptr [EBP + -0x2c],0x1     ; 0045e415
    JMP 0x0045e424                      ; 0045e41c
        ;   XREF to: 0045e424 (UNCONDITIONAL_JUMP)  ; LAB_0045e424
    MOV EAX,dword ptr [EBP + -0x2c]     ; 0045e41e
        ;   Label: LAB_0045e41e
    INC dword ptr [EBP + -0x2c]         ; 0045e421
    MOV EAX,dword ptr [EBP + -0x40]     ; 0045e424
        ;   Label: LAB_0045e424
    DEC EAX                             ; 0045e427
    CMP EAX,dword ptr [EBP + -0x2c]     ; 0045e428
    JLE 0x0045e47b                      ; 0045e42b
        ;   XREF to: 0045e47b (CONDITIONAL_JUMP)  ; LAB_0045e47b
    MOV EAX,dword ptr [EBP + -0x40]     ; 0045e42d
    DEC EAX                             ; 0045e430
    MOV EDX,dword ptr [EBP + -0x30]     ; 0045e431
    INC EDX                             ; 0045e434
    IMUL EAX,EDX                        ; 0045e435
    ADD EAX,dword ptr [EBP + -0x28]     ; 0045e438
    ADD EAX,dword ptr [EBP + -0x2c]     ; 0045e43b
    DEC EAX                             ; 0045e43e
    PUSH EAX                            ; 0045e43f
    MOV EAX,dword ptr [EBP + -0x40]     ; 0045e440
    DEC EAX                             ; 0045e443
    MOV EDX,dword ptr [EBP + -0x30]     ; 0045e444
    INC EDX                             ; 0045e447
    IMUL EAX,EDX                        ; 0045e448
    ADD EAX,dword ptr [EBP + -0x28]     ; 0045e44b
    ADD EAX,dword ptr [EBP + -0x2c]     ; 0045e44e
    PUSH EAX                            ; 0045e451
    MOV EAX,dword ptr [EBP + -0x40]     ; 0045e452
    DEC EAX                             ; 0045e455
    IMUL EAX,dword ptr [EBP + -0x30]    ; 0045e456
    ADD EAX,dword ptr [EBP + -0x28]     ; 0045e45a
    ADD EAX,dword ptr [EBP + -0x2c]     ; 0045e45d
    PUSH EAX                            ; 0045e460
    MOV EAX,dword ptr [EBP + -0x40]     ; 0045e461
    DEC EAX                             ; 0045e464
    IMUL EAX,dword ptr [EBP + -0x30]    ; 0045e465
    ADD EAX,dword ptr [EBP + -0x28]     ; 0045e469
    ADD EAX,dword ptr [EBP + -0x2c]     ; 0045e46c
    DEC EAX                             ; 0045e46f
    PUSH EAX                            ; 0045e470
    CALL shape_design.c_createReversedQuadPolygon_FUN_0045e040 ; 0045e471
        ;   XREF to: 0045e040 (UNCONDITIONAL_CALL)  ; void shape_design.c_createReversedQuadPolygon_FUN_0045e040()
    ADD ESP,0x10                        ; 0045e476
    JMP 0x0045e41e                      ; 0045e479
        ;   XREF to: 0045e41e (UNCONDITIONAL_JUMP)  ; LAB_0045e41e
    JMP 0x0045e407                      ; 0045e47b
        ;   XREF to: 0045e407 (UNCONDITIONAL_JUMP)  ; LAB_0045e407
        ;   Label: LAB_0045e47b
    CMP dword ptr [EBP + -0x4],0x42     ; 0045e47d
        ;   Label: LAB_0045e47d
    JZ 0x0045e48d                       ; 0045e481
        ;   XREF to: 0045e48d (CONDITIONAL_JUMP)  ; LAB_0045e48d
    CMP dword ptr [EBP + -0x4],0x4f     ; 0045e483
    JNZ 0x0045e50c                      ; 0045e487
        ;   XREF to: 0045e50c (CONDITIONAL_JUMP)  ; LAB_0045e50c
    MOV dword ptr [EBP + -0x30],0x0     ; 0045e48d
        ;   Label: LAB_0045e48d
    JMP 0x0045e49c                      ; 0045e494
        ;   XREF to: 0045e49c (UNCONDITIONAL_JUMP)  ; LAB_0045e49c
    MOV EAX,dword ptr [EBP + -0x30]     ; 0045e496
        ;   Label: LAB_0045e496
    INC dword ptr [EBP + -0x30]         ; 0045e499
    MOV EAX,dword ptr [EBP + -0x30]     ; 0045e49c
        ;   Label: LAB_0045e49c
    CMP EAX,dword ptr [EBP + -0x3c]     ; 0045e49f
    JGE 0x0045e50c                      ; 0045e4a2
        ;   XREF to: 0045e50c (CONDITIONAL_JUMP)  ; LAB_0045e50c
    MOV dword ptr [EBP + -0x2c],0x1     ; 0045e4a4
    JMP 0x0045e4b3                      ; 0045e4ab
        ;   XREF to: 0045e4b3 (UNCONDITIONAL_JUMP)  ; LAB_0045e4b3
    MOV EAX,dword ptr [EBP + -0x2c]     ; 0045e4ad
        ;   Label: LAB_0045e4ad
    INC dword ptr [EBP + -0x2c]         ; 0045e4b0
    MOV EAX,dword ptr [EBP + -0x40]     ; 0045e4b3
        ;   Label: LAB_0045e4b3
    DEC EAX                             ; 0045e4b6
    CMP EAX,dword ptr [EBP + -0x2c]     ; 0045e4b7
    JLE 0x0045e50a                      ; 0045e4ba
        ;   XREF to: 0045e50a (CONDITIONAL_JUMP)  ; LAB_0045e50a
    MOV EAX,dword ptr [EBP + -0x40]     ; 0045e4bc
    DEC EAX                             ; 0045e4bf
    MOV EDX,dword ptr [EBP + -0x30]     ; 0045e4c0
    INC EDX                             ; 0045e4c3
    IMUL EAX,EDX                        ; 0045e4c4
    ADD EAX,dword ptr [EBP + -0x28]     ; 0045e4c7
    ADD EAX,dword ptr [EBP + -0x2c]     ; 0045e4ca
    DEC EAX                             ; 0045e4cd
    PUSH EAX                            ; 0045e4ce
    MOV EAX,dword ptr [EBP + -0x40]     ; 0045e4cf
    DEC EAX                             ; 0045e4d2
    MOV EDX,dword ptr [EBP + -0x30]     ; 0045e4d3
    INC EDX                             ; 0045e4d6
    IMUL EAX,EDX                        ; 0045e4d7
    ADD EAX,dword ptr [EBP + -0x28]     ; 0045e4da
    ADD EAX,dword ptr [EBP + -0x2c]     ; 0045e4dd
    PUSH EAX                            ; 0045e4e0
    MOV EAX,dword ptr [EBP + -0x40]     ; 0045e4e1
    DEC EAX                             ; 0045e4e4
    IMUL EAX,dword ptr [EBP + -0x30]    ; 0045e4e5
    ADD EAX,dword ptr [EBP + -0x28]     ; 0045e4e9
    ADD EAX,dword ptr [EBP + -0x2c]     ; 0045e4ec
    PUSH EAX                            ; 0045e4ef
    MOV EAX,dword ptr [EBP + -0x40]     ; 0045e4f0
    DEC EAX                             ; 0045e4f3
    IMUL EAX,dword ptr [EBP + -0x30]    ; 0045e4f4
    ADD EAX,dword ptr [EBP + -0x28]     ; 0045e4f8
    ADD EAX,dword ptr [EBP + -0x2c]     ; 0045e4fb
    DEC EAX                             ; 0045e4fe
    PUSH EAX                            ; 0045e4ff
    CALL shape_design.c_createQuadPolygon_FUN_0045df60 ; 0045e500
        ;   XREF to: 0045df60 (UNCONDITIONAL_CALL)  ; void shape_design.c_createQuadPolygon_FUN_0045df60()
    ADD ESP,0x10                        ; 0045e505
    JMP 0x0045e4ad                      ; 0045e508
        ;   XREF to: 0045e4ad (UNCONDITIONAL_JUMP)  ; LAB_0045e4ad
    JMP 0x0045e496                      ; 0045e50a
        ;   XREF to: 0045e496 (UNCONDITIONAL_JUMP)  ; LAB_0045e496
        ;   Label: LAB_0045e50a
    MOV ESP,EBP                         ; 0045e50c
        ;   Label: LAB_0045e50c
    POP EBP                             ; 0045e50e
    POP EDI                             ; 0045e50f
    POP ESI                             ; 0045e510
    POP EBX                             ; 0045e511
    RET                                 ; 0045e512

