; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_design_c_createCenterVertex_FUN_00469690(void)
;
; Local Variables:
; undefined1       Stack[-0x9c]:1  local_9c
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_design.c_showShapeEditorMenu_FUN_0046f290 at 0046f70e
;
; Referenced Globals:
;   TerminatedCString s_Enter_of_vertices_to_use_0061cf96
;   TerminatedCString s_Enter_vertex_0061cfb4
;   TerminatedCString s_New_vertex_created_d_Pre_0061cfc6
;   int g_VertexCount
;   SVertexData[20000] g_LoadedVertices
;   undefined4 DAT_01626410
;   undefined4 g_LoadedVertices[0].vertex.z
;
; Called Functions:
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   crt_stdlib.c_atoi_FUN_005ffef0
;   engine_2d.c_clearInputAndWait_FUN_00403260
;   engine_2d.c_drawText_FUN_00401fd0
;   engine_2d.c_getInputWithPrompt_FUN_004032c0
;   wincore_windll.cpp_clearScreen_FUN_005b3e70
;   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00469690
        ;   Label: shape_design.c_createCenterVertex_FUN_00469690
    PUSH ESI                            ; 00469691
    PUSH EDI                            ; 00469692
    PUSH EBP                            ; 00469693
    MOV EBP,ESP                         ; 00469694
    SUB ESP,0x8c                        ; 00469696
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 0046969c
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    MOV ECX,0x61cf96                    ; 004696a1 | = "Enter # of vertices to use : "
    PUSH ECX                            ; 004696a6 | = "Enter # of vertices to use : "
    PUSH 0x0                            ; 004696a7
    PUSH 0x0                            ; 004696a9
    PUSH 0xa                            ; 004696ab
    LEA ECX,[EBP + 0xffffff74]          ; 004696ad
    PUSH ECX                            ; 004696b3
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 004696b4
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
    ADD ESP,0x14                        ; 004696b9
    LEA EDI,[EBP + 0xffffff74]          ; 004696bc
    SUB ECX,ECX                         ; 004696c2
    DEC ECX                             ; 004696c4
    XOR EAX,EAX                         ; 004696c5
    SCASB.REPNE ES:EDI                  ; 004696c7
    NOT ECX                             ; 004696c9
    DEC ECX                             ; 004696cb
    TEST ECX,ECX                        ; 004696cc
    JNZ 0x004696d5                      ; 004696ce
        ;   XREF to: 004696d5 (CONDITIONAL_JUMP)  ; LAB_004696d5
    JMP 0x00469843                      ; 004696d0
        ;   XREF to: 00469843 (UNCONDITIONAL_JUMP)  ; LAB_00469843
    LEA EAX,[EBP + 0xffffff74]          ; 004696d5
        ;   Label: LAB_004696d5
    PUSH EAX                            ; 004696db
    CALL crt_stdlib.c_atoi_FUN_005ffef0 ; 004696dc
        ;   XREF to: 005ffef0 (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_atoi_FUN_005ffef0(char * string_ptr)
    ADD ESP,0x4                         ; 004696e1
    MOV dword ptr [EBP + -0x8],EAX      ; 004696e4
    CMP dword ptr [EBP + -0x8],0x1      ; 004696e7
    JL 0x004696f3                       ; 004696eb
        ;   XREF to: 004696f3 (CONDITIONAL_JUMP)  ; LAB_004696f3
    CMP dword ptr [EBP + -0x8],0x8      ; 004696ed
    JLE 0x004696f8                      ; 004696f1
        ;   XREF to: 004696f8 (CONDITIONAL_JUMP)  ; LAB_004696f8
    JMP 0x00469843                      ; 004696f3
        ;   XREF to: 00469843 (UNCONDITIONAL_JUMP)  ; LAB_00469843
        ;   Label: LAB_004696f3
    MOV dword ptr [EBP + -0x18],0xb     ; 004696f8
        ;   Label: LAB_004696f8
    MOV dword ptr [EBP + -0x14],0x0     ; 004696ff
    MOV dword ptr [EBP + -0x10],0x0     ; 00469706
    MOV dword ptr [EBP + -0xc],0x0      ; 0046970d
    MOV dword ptr [EBP + -0x4],0x0      ; 00469714
    JMP 0x00469723                      ; 0046971b
        ;   XREF to: 00469723 (UNCONDITIONAL_JUMP)  ; LAB_00469723
    MOV EAX,dword ptr [EBP + -0x4]      ; 0046971d
        ;   Label: LAB_0046971d
    INC dword ptr [EBP + -0x4]          ; 00469720
    MOV EAX,dword ptr [EBP + -0x4]      ; 00469723
        ;   Label: LAB_00469723
    CMP EAX,dword ptr [EBP + -0x8]      ; 00469726
    JGE 0x004697c6                      ; 00469729
        ;   XREF to: 004697c6 (CONDITIONAL_JUMP)  ; LAB_004697c6
    MOV ECX,0x61cfb4                    ; 0046972f | = "Enter vertex # : "
    PUSH ECX                            ; 00469734 | = "Enter vertex # : "
    MOV ECX,dword ptr [EBP + -0x18]     ; 00469735
    PUSH ECX                            ; 00469738
    PUSH 0x0                            ; 00469739
    PUSH 0xa                            ; 0046973b
    LEA ECX,[EBP + 0xffffff74]          ; 0046973d
    PUSH ECX                            ; 00469743
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 00469744
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
    ADD ESP,0x14                        ; 00469749
    LEA EDI,[EBP + 0xffffff74]          ; 0046974c
    SUB ECX,ECX                         ; 00469752
    DEC ECX                             ; 00469754
    XOR EAX,EAX                         ; 00469755
    SCASB.REPNE ES:EDI                  ; 00469757
    NOT ECX                             ; 00469759
    DEC ECX                             ; 0046975b
    TEST ECX,ECX                        ; 0046975c
    JNZ 0x00469765                      ; 0046975e
        ;   XREF to: 00469765 (CONDITIONAL_JUMP)  ; LAB_00469765
    JMP 0x00469843                      ; 00469760
        ;   XREF to: 00469843 (UNCONDITIONAL_JUMP)  ; LAB_00469843
    LEA EAX,[EBP + 0xffffff74]          ; 00469765
        ;   Label: LAB_00469765
    PUSH EAX                            ; 0046976b
    CALL crt_stdlib.c_atoi_FUN_005ffef0 ; 0046976c
        ;   XREF to: 005ffef0 (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_atoi_FUN_005ffef0(char * string_ptr)
    ADD ESP,0x4                         ; 00469771
    MOV dword ptr [EBP + -0x1c],EAX     ; 00469774
    CMP dword ptr [EBP + -0x1c],0x0     ; 00469777
    JL 0x00469788                       ; 0046977b
        ;   XREF to: 00469788 (CONDITIONAL_JUMP)  ; LAB_00469788
    MOV EAX,dword ptr [EBP + -0x1c]     ; 0046977d
    CMP EAX,dword ptr [0x01626408]      ; 00469780 | g_VertexCount
    JL 0x0046978d                       ; 00469786
        ;   XREF to: 0046978d (CONDITIONAL_JUMP)  ; LAB_0046978d
    JMP 0x00469843                      ; 00469788
        ;   XREF to: 00469843 (UNCONDITIONAL_JUMP)  ; LAB_00469843
        ;   Label: LAB_00469788
    IMUL EAX,dword ptr [EBP + -0x1c],0x14 ; 0046978d
        ;   Label: LAB_0046978d
    FLD float ptr [EBP + -0x14]         ; 00469791
    FADD float ptr [EAX + 0x162640c]    ; 00469794 | g_LoadedVertices
    FSTP float ptr [EBP + -0x14]        ; 0046979a
    IMUL EAX,dword ptr [EBP + -0x1c],0x14 ; 0046979d
    FLD float ptr [EBP + -0x10]         ; 004697a1
    FADD float ptr [EAX + 0x1626410]    ; 004697a4 | DAT_01626410
    FSTP float ptr [EBP + -0x10]        ; 004697aa
    IMUL EAX,dword ptr [EBP + -0x1c],0x14 ; 004697ad
    FLD float ptr [EBP + -0xc]          ; 004697b1
    FADD float ptr [EAX + 0x1626414]    ; 004697b4 | g_LoadedVertices[0].vertex.z
    FSTP float ptr [EBP + -0xc]         ; 004697ba
    ADD dword ptr [EBP + -0x18],0xb     ; 004697bd
    JMP 0x0046971d                      ; 004697c1
        ;   XREF to: 0046971d (UNCONDITIONAL_JUMP)  ; LAB_0046971d
    FILD dword ptr [EBP + -0x8]         ; 004697c6
        ;   Label: LAB_004697c6
    FDIVR float ptr [EBP + -0x14]       ; 004697c9
    IMUL EAX,dword ptr [0x01626408],0x14 ; 004697cc | g_VertexCount
    FSTP float ptr [EAX + 0x162640c]    ; 004697d3 | g_LoadedVertices
    FILD dword ptr [EBP + -0x8]         ; 004697d9
    FDIVR float ptr [EBP + -0x10]       ; 004697dc
    IMUL EAX,dword ptr [0x01626408],0x14 ; 004697df | g_VertexCount
    FSTP float ptr [EAX + 0x1626410]    ; 004697e6 | DAT_01626410
    FILD dword ptr [EBP + -0x8]         ; 004697ec
    FDIVR float ptr [EBP + -0xc]        ; 004697ef
    IMUL EAX,dword ptr [0x01626408],0x14 ; 004697f2 | g_VertexCount
    FSTP float ptr [EAX + 0x1626414]    ; 004697f9 | g_LoadedVertices[0].vertex.z
    ADD dword ptr [EBP + -0x18],0xb     ; 004697ff
    PUSH dword ptr [0x01626408]         ; 00469803 | g_VertexCount
    MOV EAX,0x61cfc6                    ; 00469809 | = "New vertex created : %d.  Press a key..."
    PUSH EAX                            ; 0046980e | = "New vertex created : %d.  Press a key..."
    LEA EAX,[EBP + 0xffffff74]          ; 0046980f
    PUSH EAX                            ; 00469815
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00469816
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0046981b
    MOV EAX,dword ptr [EBP + -0x18]     ; 0046981e
    PUSH EAX                            ; 00469821
    PUSH 0x0                            ; 00469822
    LEA EAX,[EBP + 0xffffff74]          ; 00469824
    PUSH EAX                            ; 0046982a
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046982b
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 00469830
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 00469833
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 00469838
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    INC dword ptr [0x01626408]          ; 0046983d | g_VertexCount
    MOV ESP,EBP                         ; 00469843
        ;   Label: LAB_00469843
    POP EBP                             ; 00469845
    POP EDI                             ; 00469846
    POP ESI                             ; 00469847
    POP EBX                             ; 00469848
    RET                                 ; 00469849

