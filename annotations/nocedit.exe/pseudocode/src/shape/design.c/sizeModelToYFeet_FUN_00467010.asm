; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_design_c_sizeModelToYFeet_FUN_00467010(void)
;
; Local Variables:
; char[80]         Stack[-0x7c]:80  local_7c
; int              Stack[-0x2c]:4  local_2c
; int              Stack[-0x28]:4  local_28
; int              Stack[-0x24]:4  local_24
; float[2]         Stack[-0x20]:8  local_20
; float            Stack[-0x18]:4  local_18
; float            Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_design.c_showShapeEditorMenu_FUN_0046f290 at 0046f754
;
; Referenced Globals:
;   TerminatedCString s_Enter_Y_distance_in_feet_0061c8bf
;   TerminatedCString s_f_d_d_0061c906
;   TerminatedCString s_Need_distance_and_two_po_0061c90f
;   TerminatedCString s_Invalid_point_0061c92d
;   int g_VertexCount
;   SVertexData[20000] g_LoadedVertices
;   undefined4 g_LoadedVertices[0].vertex.y
;   undefined4 g_LoadedVertices[0].vertex.z
;
; Called Functions:
;   crt_stdio.c_sscanf_FUN_0060013c
;   engine_2d.c_drawText_FUN_00401fd0
;   engine_2d.c_getInputWithPrompt_FUN_004032c0
;   engine_special.cpp_clearScreen_FUN_005b3e70
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
;   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00467010
        ;   Label: shape_design.c_sizeModelToYFeet_FUN_00467010
    PUSH ESI                            ; 00467011
    PUSH EDI                            ; 00467012
    PUSH EBP                            ; 00467013
    MOV EBP,ESP                         ; 00467014
    SUB ESP,0x6c                        ; 00467016
    MOV dword ptr [EBP + -0x8],0x497423fe ; 0046701c
    MOV dword ptr [EBP + -0x4],0xc97423fe ; 00467023
    CALL engine_special.cpp_clearScreen_FUN_005b3e70 ; 0046702a
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_005b3e70()
    MOV ECX,0x61c8bf                    ; 0046702f | = "Enter Y distance in feet (,min,max fo..."
    PUSH ECX                            ; 00467034 | = "Enter Y distance in feet (,min,max fo..."
    PUSH 0x16                           ; 00467035
    PUSH 0x0                            ; 00467037
    PUSH 0x14                           ; 00467039
    LEA ECX,[EBP + -0x6c]               ; 0046703b
    PUSH ECX                            ; 0046703e
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 0046703f
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
    ADD ESP,0x14                        ; 00467044
    LEA EDI,[EBP + -0x6c]               ; 00467047
    SUB ECX,ECX                         ; 0046704a
    DEC ECX                             ; 0046704c
    XOR EAX,EAX                         ; 0046704d
    SCASB.REPNE ES:EDI                  ; 0046704f
    NOT ECX                             ; 00467051
    DEC ECX                             ; 00467053
    TEST ECX,ECX                        ; 00467054
    JNZ 0x0046705d                      ; 00467056
        ;   XREF to: 0046705d (CONDITIONAL_JUMP)  ; LAB_0046705d
    JMP 0x004671ca                      ; 00467058
        ;   XREF to: 004671ca (UNCONDITIONAL_JUMP)  ; LAB_004671ca
    LEA EAX,[EBP + -0x18]               ; 0046705d
        ;   Label: LAB_0046705d
    PUSH EAX                            ; 00467060
    LEA EAX,[EBP + -0x14]               ; 00467061
    PUSH EAX                            ; 00467064
    LEA EAX,[EBP + -0x10]               ; 00467065
    PUSH EAX                            ; 00467068
    MOV EAX,0x61c906                    ; 00467069 | = "%f,%d,%d"
    PUSH EAX                            ; 0046706e | = "%f,%d,%d"
    LEA EAX,[EBP + -0x6c]               ; 0046706f
    PUSH EAX                            ; 00467072
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 00467073
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x14                        ; 00467078
    MOV dword ptr [EBP + -0x1c],EAX     ; 0046707b
    CMP dword ptr [EBP + -0x1c],0x1     ; 0046707e
    JLE 0x00467112                      ; 00467082
        ;   XREF to: 00467112 (CONDITIONAL_JUMP)  ; LAB_00467112
    CMP dword ptr [EBP + -0x1c],0x3     ; 00467088
    JZ 0x004670af                       ; 0046708c
        ;   XREF to: 004670af (CONDITIONAL_JUMP)  ; LAB_004670af
    PUSH 0x2c                           ; 0046708e
    PUSH 0x0                            ; 00467090
    MOV EAX,0x61c90f                    ; 00467092 | = "Need distance and two points."
    PUSH EAX                            ; 00467097 | = "Need distance and two points."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00467098
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046709d
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 004670a0
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 004670a5
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    JMP 0x004671ca                      ; 004670aa
        ;   XREF to: 004671ca (UNCONDITIONAL_JUMP)  ; LAB_004671ca
    CMP dword ptr [EBP + -0x14],0x0     ; 004670af
        ;   Label: LAB_004670af
    JL 0x004670bb                       ; 004670b3
        ;   XREF to: 004670bb (CONDITIONAL_JUMP)  ; LAB_004670bb
    CMP dword ptr [EBP + -0x18],0x0     ; 004670b5
    JGE 0x004670bd                      ; 004670b9
        ;   XREF to: 004670bd (CONDITIONAL_JUMP)  ; LAB_004670bd
    JMP 0x004670c8                      ; 004670bb
        ;   XREF to: 004670c8 (UNCONDITIONAL_JUMP)  ; LAB_004670c8
        ;   Label: LAB_004670bb
    MOV EAX,[0x01626408]                ; 004670bd | g_VertexCount
        ;   Label: LAB_004670bd
    DEC EAX                             ; 004670c2
    CMP EAX,dword ptr [EBP + -0x14]     ; 004670c3
    JGE 0x004670ca                      ; 004670c6
        ;   XREF to: 004670ca (CONDITIONAL_JUMP)  ; LAB_004670ca
    JMP 0x004670d5                      ; 004670c8
        ;   XREF to: 004670d5 (UNCONDITIONAL_JUMP)  ; LAB_004670d5
        ;   Label: LAB_004670c8
    MOV EAX,[0x01626408]                ; 004670ca | g_VertexCount
        ;   Label: LAB_004670ca
    DEC EAX                             ; 004670cf
    CMP EAX,dword ptr [EBP + -0x18]     ; 004670d0
    JGE 0x004670f6                      ; 004670d3
        ;   XREF to: 004670f6 (CONDITIONAL_JUMP)  ; LAB_004670f6
    PUSH 0x2c                           ; 004670d5
        ;   Label: LAB_004670d5
    PUSH 0x0                            ; 004670d7
    MOV EAX,0x61c92d                    ; 004670d9 | = "Invalid point."
    PUSH EAX                            ; 004670de | = "Invalid point."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004670df
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 004670e4
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 004670e7
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 004670ec
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    JMP 0x004671ca                      ; 004670f1
        ;   XREF to: 004671ca (UNCONDITIONAL_JUMP)  ; LAB_004671ca
    IMUL EAX,dword ptr [EBP + -0x18],0x14 ; 004670f6
        ;   Label: LAB_004670f6
    MOV EAX,dword ptr [EAX + 0x1626410] ; 004670fa | g_LoadedVertices[0].vertex.y
    MOV dword ptr [EBP + -0x4],EAX      ; 00467100
    IMUL EAX,dword ptr [EBP + -0x14],0x14 ; 00467103
    MOV EAX,dword ptr [EAX + 0x1626410] ; 00467107 | g_LoadedVertices[0].vertex.y
    MOV dword ptr [EBP + -0x8],EAX      ; 0046710d
    JMP 0x0046715d                      ; 00467110
        ;   XREF to: 0046715d (UNCONDITIONAL_JUMP)  ; LAB_0046715d
    MOV dword ptr [EBP + -0x1c],0x0     ; 00467112
        ;   Label: LAB_00467112
    JMP 0x00467121                      ; 00467119
        ;   XREF to: 00467121 (UNCONDITIONAL_JUMP)  ; LAB_00467121
    MOV EAX,dword ptr [EBP + -0x1c]     ; 0046711b
        ;   Label: LAB_0046711b
    INC dword ptr [EBP + -0x1c]         ; 0046711e
    MOV EAX,dword ptr [EBP + -0x1c]     ; 00467121
        ;   Label: LAB_00467121
    CMP EAX,dword ptr [0x01626408]      ; 00467124 | g_VertexCount
    JGE 0x0046715d                      ; 0046712a
        ;   XREF to: 0046715d (CONDITIONAL_JUMP)  ; LAB_0046715d
    IMUL EAX,dword ptr [EBP + -0x1c],0x14 ; 0046712c
    MOV EAX,dword ptr [EAX + 0x1626410] ; 00467130 | g_LoadedVertices[0].vertex.y
    MOV dword ptr [EBP + -0xc],EAX      ; 00467136
    FLD float ptr [EBP + -0xc]          ; 00467139
    FCOMP float ptr [EBP + -0x4]        ; 0046713c
    FNSTSW AX                           ; 0046713f
    SAHF                                ; 00467141
    JBE 0x0046714a                      ; 00467142
        ;   XREF to: 0046714a (CONDITIONAL_JUMP)  ; LAB_0046714a
    MOV EAX,dword ptr [EBP + -0xc]      ; 00467144
    MOV dword ptr [EBP + -0x4],EAX      ; 00467147
    FLD float ptr [EBP + -0xc]          ; 0046714a
        ;   Label: LAB_0046714a
    FCOMP float ptr [EBP + -0x8]        ; 0046714d
    FNSTSW AX                           ; 00467150
    SAHF                                ; 00467152
    JNC 0x0046715b                      ; 00467153
        ;   XREF to: 0046715b (CONDITIONAL_JUMP)  ; LAB_0046715b
    MOV EAX,dword ptr [EBP + -0xc]      ; 00467155
    MOV dword ptr [EBP + -0x8],EAX      ; 00467158
    JMP 0x0046711b                      ; 0046715b
        ;   XREF to: 0046711b (UNCONDITIONAL_JUMP)  ; LAB_0046711b
        ;   Label: LAB_0046715b
    FLD float ptr [EBP + -0x4]          ; 0046715d
        ;   Label: LAB_0046715d
    FSUB float ptr [EBP + -0x8]         ; 00467160
    FDIVR float ptr [EBP + -0x10]       ; 00467163
    FSTP float ptr [EBP + -0x10]        ; 00467166
    MOV dword ptr [EBP + -0x1c],0x0     ; 00467169
    JMP 0x00467178                      ; 00467170
        ;   XREF to: 00467178 (UNCONDITIONAL_JUMP)  ; LAB_00467178
    MOV EAX,dword ptr [EBP + -0x1c]     ; 00467172
        ;   Label: LAB_00467172
    INC dword ptr [EBP + -0x1c]         ; 00467175
    MOV EAX,dword ptr [EBP + -0x1c]     ; 00467178
        ;   Label: LAB_00467178
    CMP EAX,dword ptr [0x01626408]      ; 0046717b | g_VertexCount
    JGE 0x004671ca                      ; 00467181
        ;   XREF to: 004671ca (CONDITIONAL_JUMP)  ; LAB_004671ca
    IMUL EAX,dword ptr [EBP + -0x1c],0x14 ; 00467183
    FLD float ptr [EAX + 0x162640c]     ; 00467187 | g_LoadedVertices
    FMUL float ptr [EBP + -0x10]        ; 0046718d
    IMUL EAX,dword ptr [EBP + -0x1c],0x14 ; 00467190
    FSTP float ptr [EAX + 0x162640c]    ; 00467194 | g_LoadedVertices
    IMUL EAX,dword ptr [EBP + -0x1c],0x14 ; 0046719a
    FLD float ptr [EAX + 0x1626410]     ; 0046719e | g_LoadedVertices[0].vertex.y
    FMUL float ptr [EBP + -0x10]        ; 004671a4
    IMUL EAX,dword ptr [EBP + -0x1c],0x14 ; 004671a7
    FSTP float ptr [EAX + 0x1626410]    ; 004671ab | g_LoadedVertices[0].vertex.y
    IMUL EAX,dword ptr [EBP + -0x1c],0x14 ; 004671b1
    FLD float ptr [EAX + 0x1626414]     ; 004671b5 | g_LoadedVertices[0].vertex.z
    FMUL float ptr [EBP + -0x10]        ; 004671bb
    IMUL EAX,dword ptr [EBP + -0x1c],0x14 ; 004671be
    FSTP float ptr [EAX + 0x1626414]    ; 004671c2 | g_LoadedVertices[0].vertex.z
    JMP 0x00467172                      ; 004671c8
        ;   XREF to: 00467172 (UNCONDITIONAL_JUMP)  ; LAB_00467172
    MOV ESP,EBP                         ; 004671ca
        ;   Label: LAB_004671ca
    POP EBP                             ; 004671cc
    POP EDI                             ; 004671cd
    POP ESI                             ; 004671ce
    POP EBX                             ; 004671cf
    RET                                 ; 004671d0

