; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_design_c_configureSpatialSplittingPlane_FUN_004617c0(STreeNode *node)
;
; Parameters:
; STreeNode *      Stack[0x4]:4   node
; Local Variables:
; SShapeEditorPolygon Stack[-0x214]:388  local_214
; byte[80]         Stack[-0x90]:80  local_90
; float            Stack[-0x40]:4  local_40
; float            Stack[-0x3c]:4  local_3c
; float            Stack[-0x38]:4  local_38
; float            Stack[-0x34]:4  local_34
; STreeNode *      Stack[-0x30]:4  local_30
; float            Stack[-0x28]:4  local_28
; uint             Stack[-0x24]:4  local_24
; uint             Stack[-0x20]:4  local_20
; uint             Stack[-0x1c]:4  local_1c
; float            Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_Connecting_part_0061bf06
;   TerminatedCString s_Separation_Method_P_oint_0061bf19
;   TerminatedCString s_Enter_in_3_points_0061bf46
;   TerminatedCString s_d_d_d_0061bf5b
;   TerminatedCString s_Enter_in_point_number_0061bf64
;   SVertexData[20000] g_LoadedVertices
;   undefined4 g_LoadedVertices[0].vertex.y
;   undefined4 g_LoadedVertices[0].vertex.z
;   SModelPartName[500] g_ModelPartNames
;   int g_PartsCount
;
; Called Functions:
;   crt_ctype.c_toupper_FUN_005ff9e0
;   crt_stdio.c_sscanf_FUN_0060013c
;   crt_stdlib.c_atoi_FUN_005ffef0
;   crt_string.c__strcmp_FUN_005fef20
;   engine_2d.c_drawText_FUN_00401fd0
;   engine_2d.c_getInputWithPrompt_FUN_004032c0
;   shape_design.c_allocateSpatialTreeNode_FUN_00457ed0
;   shape_design.c_calculatePolygonNormal_FUN_0045caa0
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
;   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004617c0
        ;   Label: shape_design.c_configureSpatialSplittingPlane_FUN_004617c0
    PUSH ESI                            ; 004617c1
    PUSH EDI                            ; 004617c2
    PUSH EBP                            ; 004617c3
    MOV EBP,ESP                         ; 004617c4
    SUB ESP,0x208                       ; 004617c6
    MOV EAX,0x61bf06                    ; 004617cc | = "Connecting part : "
    PUSH EAX                            ; 004617d1 | = "Connecting part : "
    PUSH 0x0                            ; 004617d2
    PUSH 0x0                            ; 004617d4
    PUSH 0x13                           ; 004617d6
    LEA EAX,[EBP + -0x80]               ; 004617d8
    PUSH EAX                            ; 004617db
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 004617dc
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
    ADD ESP,0x14                        ; 004617e1
    MOV dword ptr [EBP + -0x18],0x0     ; 004617e4
    JMP 0x004617f3                      ; 004617eb
        ;   XREF to: 004617f3 (UNCONDITIONAL_JUMP)  ; LAB_004617f3
    MOV EAX,dword ptr [EBP + -0x18]     ; 004617ed
        ;   Label: LAB_004617ed
    INC dword ptr [EBP + -0x18]         ; 004617f0
    LEA EDI,[EBP + -0x80]               ; 004617f3
        ;   Label: LAB_004617f3
    SUB ECX,ECX                         ; 004617f6
    DEC ECX                             ; 004617f8
    XOR EAX,EAX                         ; 004617f9
    SCASB.REPNE ES:EDI                  ; 004617fb
    NOT ECX                             ; 004617fd
    DEC ECX                             ; 004617ff
    CMP ECX,dword ptr [EBP + -0x18]     ; 00461800
    JBE 0x00461823                      ; 00461803
        ;   XREF to: 00461823 (CONDITIONAL_JUMP)  ; LAB_00461823
    MOV EAX,dword ptr [EBP + -0x18]     ; 00461805
    MOV AL,byte ptr [EAX + EBP*0x1 + -0x80] ; 00461808
    AND EAX,0xff                        ; 0046180c
    PUSH EAX                            ; 00461811
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 00461812
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    ADD ESP,0x4                         ; 00461817
    MOV EDX,dword ptr [EBP + -0x18]     ; 0046181a
    MOV byte ptr [EDX + EBP*0x1 + -0x80],AL ; 0046181d
    JMP 0x004617ed                      ; 00461821
        ;   XREF to: 004617ed (UNCONDITIONAL_JUMP)  ; LAB_004617ed
    MOV dword ptr [EBP + -0x8],0xffffffff ; 00461823
        ;   Label: LAB_00461823
    MOV dword ptr [EBP + -0x18],0x0     ; 0046182a
    JMP 0x00461839                      ; 00461831
        ;   XREF to: 00461839 (UNCONDITIONAL_JUMP)  ; LAB_00461839
    MOV EAX,dword ptr [EBP + -0x18]     ; 00461833
        ;   Label: LAB_00461833
    INC dword ptr [EBP + -0x18]         ; 00461836
    MOV EAX,dword ptr [EBP + -0x18]     ; 00461839
        ;   Label: LAB_00461839
    CMP EAX,dword ptr [0x01e528a0]      ; 0046183c | g_PartsCount
    JGE 0x0046186a                      ; 00461842
        ;   XREF to: 0046186a (CONDITIONAL_JUMP)  ; LAB_0046186a
    IMUL EDX,dword ptr [EBP + -0x18],0x14 ; 00461844
    MOV EAX,0x1e50190                   ; 00461848 | g_ModelPartNames
    ADD EAX,EDX                         ; 0046184d
    PUSH EAX                            ; 0046184f
    LEA EAX,[EBP + -0x80]               ; 00461850
    PUSH EAX                            ; 00461853
    CALL crt_string.c__strcmp_FUN_005fef20 ; 00461854
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005fef20(char * str1, char * str2)
    ADD ESP,0x8                         ; 00461859
    TEST EAX,EAX                        ; 0046185c
    JNZ 0x00461868                      ; 0046185e
        ;   XREF to: 00461868 (CONDITIONAL_JUMP)  ; LAB_00461868
    MOV EAX,dword ptr [EBP + -0x18]     ; 00461860
    MOV dword ptr [EBP + -0x8],EAX      ; 00461863
    JMP 0x0046186a                      ; 00461866
        ;   XREF to: 0046186a (UNCONDITIONAL_JUMP)  ; LAB_0046186a
    JMP 0x00461833                      ; 00461868
        ;   XREF to: 00461833 (UNCONDITIONAL_JUMP)  ; LAB_00461833
        ;   Label: LAB_00461868
    CMP dword ptr [EBP + -0x8],-0x1     ; 0046186a
        ;   Label: LAB_0046186a
    JZ 0x00461a93                       ; 0046186e
        ;   XREF to: 00461a93 (CONDITIONAL_JUMP)  ; LAB_00461a93
    PUSH 0xb                            ; 00461874
    PUSH 0x0                            ; 00461876
    MOV EAX,0x61bf19                    ; 00461878 | = "Separation Method : (P)oint list (X) ..."
    PUSH EAX                            ; 0046187d | = "Separation Method : (P)oint list (X) ..."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046187e
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00461883
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 00461886
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 0046188b
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    AND EAX,0xff                        ; 00461890
    PUSH EAX                            ; 00461895
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 00461896
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    ADD ESP,0x4                         ; 0046189b
    MOV dword ptr [EBP + -0x18],EAX     ; 0046189e
    CMP dword ptr [EBP + -0x18],0x50    ; 004618a1
    JNZ 0x0046193e                      ; 004618a5
        ;   XREF to: 0046193e (CONDITIONAL_JUMP)  ; LAB_0046193e
    MOV EAX,0x61bf46                    ; 004618ab | = "Enter in 3 points : "
    PUSH EAX                            ; 004618b0 | = "Enter in 3 points : "
    PUSH 0x16                           ; 004618b1
    PUSH 0x0                            ; 004618b3
    PUSH 0x46                           ; 004618b5
    LEA EAX,[EBP + -0x80]               ; 004618b7
    PUSH EAX                            ; 004618ba
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 004618bb
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
    ADD ESP,0x14                        ; 004618c0
    LEA EAX,[EBP + -0xc]                ; 004618c3
    PUSH EAX                            ; 004618c6
    LEA EAX,[EBP + -0x10]               ; 004618c7
    PUSH EAX                            ; 004618ca
    LEA EAX,[EBP + -0x14]               ; 004618cb
    PUSH EAX                            ; 004618ce
    MOV EAX,0x61bf5b                    ; 004618cf | = "%d,%d,%d"
    PUSH EAX                            ; 004618d4 | = "%d,%d,%d"
    LEA EAX,[EBP + -0x80]               ; 004618d5
    PUSH EAX                            ; 004618d8
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 004618d9
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x14                        ; 004618de
    MOV dword ptr [EBP + 0xfffffea0],0x3 ; 004618e1
    MOV EAX,dword ptr [EBP + -0x14]     ; 004618eb
    MOV dword ptr [EBP + 0xfffffeb4],EAX ; 004618ee
    MOV EAX,dword ptr [EBP + -0x10]     ; 004618f4
    MOV dword ptr [EBP + 0xfffffeb8],EAX ; 004618f7
    MOV EAX,dword ptr [EBP + -0xc]      ; 004618fd
    MOV dword ptr [EBP + 0xfffffebc],EAX ; 00461900
    LEA EAX,[EBP + 0xfffffdfc]          ; 00461906
    PUSH EAX                            ; 0046190c
    CALL shape_design.c_calculatePolygonNormal_FUN_0045caa0 ; 0046190d
        ;   XREF to: 0045caa0 (UNCONDITIONAL_CALL)  ; void shape_design.c_calculatePolygonNormal_FUN_0045caa0(SShapeEditorPolygon * polygon)
    ADD ESP,0x4                         ; 00461912
    MOV EAX,dword ptr [EBP + 0xfffffea4] ; 00461915
    MOV dword ptr [EBP + -0x30],EAX     ; 0046191b
    MOV EAX,dword ptr [EBP + 0xfffffea8] ; 0046191e
    MOV dword ptr [EBP + -0x2c],EAX     ; 00461924
    MOV EAX,dword ptr [EBP + 0xfffffeac] ; 00461927
    MOV dword ptr [EBP + -0x28],EAX     ; 0046192d
    MOV EAX,dword ptr [EBP + 0xfffffeb0] ; 00461930
    MOV dword ptr [EBP + -0x24],EAX     ; 00461936
    JMP 0x004619f5                      ; 00461939
        ;   XREF to: 004619f5 (UNCONDITIONAL_JUMP)  ; LAB_004619f5
    MOV EAX,0x61bf64                    ; 0046193e | = "Enter in point number : "
        ;   Label: LAB_0046193e
    PUSH EAX                            ; 00461943 | = "Enter in point number : "
    PUSH 0x16                           ; 00461944
    PUSH 0x0                            ; 00461946
    PUSH 0x28                           ; 00461948
    LEA EAX,[EBP + -0x80]               ; 0046194a
    PUSH EAX                            ; 0046194d
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 0046194e
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
    ADD ESP,0x14                        ; 00461953
    LEA EAX,[EBP + -0x80]               ; 00461956
    PUSH EAX                            ; 00461959
    CALL crt_stdlib.c_atoi_FUN_005ffef0 ; 0046195a
        ;   XREF to: 005ffef0 (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_atoi_FUN_005ffef0(char * string_ptr)
    ADD ESP,0x4                         ; 0046195f
    MOV dword ptr [EBP + -0x4],EAX      ; 00461962
    MOV dword ptr [EBP + -0x24],0x0     ; 00461965
    MOV EAX,dword ptr [EBP + -0x24]     ; 0046196c
    MOV dword ptr [EBP + -0x28],EAX     ; 0046196f
    MOV EAX,dword ptr [EBP + -0x28]     ; 00461972
    MOV dword ptr [EBP + -0x2c],EAX     ; 00461975
    MOV EAX,dword ptr [EBP + -0x2c]     ; 00461978
    MOV dword ptr [EBP + -0x30],EAX     ; 0046197b
    MOV EAX,dword ptr [EBP + -0x18]     ; 0046197e
    MOV dword ptr [EBP + 0xfffffdf8],EAX ; 00461981
    JMP 0x004619cd                      ; 00461987
        ;   XREF to: 004619cd (UNCONDITIONAL_JUMP)  ; LAB_004619cd
    MOV dword ptr [EBP + -0x30],0x3f800000 ; 00461989
        ;   Label: LAB_00461989
    IMUL EAX,dword ptr [EBP + -0x4],0x14 ; 00461990
    MOV EAX,dword ptr [EAX + 0x162640c] ; 00461994 | g_LoadedVertices
    MOV dword ptr [EBP + -0x24],EAX     ; 0046199a
    JMP 0x004619f5                      ; 0046199d
        ;   XREF to: 004619f5 (UNCONDITIONAL_JUMP)  ; LAB_004619f5
    MOV dword ptr [EBP + -0x2c],0x3f800000 ; 0046199f
        ;   Label: LAB_0046199f
    IMUL EAX,dword ptr [EBP + -0x4],0x14 ; 004619a6
    MOV EAX,dword ptr [EAX + 0x1626410] ; 004619aa | g_LoadedVertices[0].vertex.y
    MOV dword ptr [EBP + -0x24],EAX     ; 004619b0
    JMP 0x004619f5                      ; 004619b3
        ;   XREF to: 004619f5 (UNCONDITIONAL_JUMP)  ; LAB_004619f5
    MOV dword ptr [EBP + -0x28],0x3f800000 ; 004619b5
        ;   Label: LAB_004619b5
    IMUL EAX,dword ptr [EBP + -0x4],0x14 ; 004619bc
    MOV EAX,dword ptr [EAX + 0x1626414] ; 004619c0 | g_LoadedVertices[0].vertex.z
    MOV dword ptr [EBP + -0x24],EAX     ; 004619c6
    JMP 0x004619f5                      ; 004619c9
        ;   XREF to: 004619f5 (UNCONDITIONAL_JUMP)  ; LAB_004619f5
    JMP 0x004619f5                      ; 004619cb
        ;   XREF to: 004619f5 (UNCONDITIONAL_JUMP)  ; LAB_004619f5
        ;   Label: LAB_004619cb
    CMP dword ptr [EBP + 0xfffffdf8],0x59 ; 004619cd
        ;   Label: LAB_004619cd
    JC 0x004619ea                       ; 004619d4
        ;   XREF to: 004619ea (CONDITIONAL_JUMP)  ; LAB_004619ea
    CMP dword ptr [EBP + 0xfffffdf8],0x59 ; 004619d6
    JBE 0x0046199f                      ; 004619dd
        ;   XREF to: 0046199f (CONDITIONAL_JUMP)  ; LAB_0046199f
    CMP dword ptr [EBP + 0xfffffdf8],0x5a ; 004619df
    JZ 0x004619b5                       ; 004619e6
        ;   XREF to: 004619b5 (CONDITIONAL_JUMP)  ; LAB_004619b5
    JMP 0x004619cb                      ; 004619e8
        ;   XREF to: 004619cb (UNCONDITIONAL_JUMP)  ; LAB_004619cb
    CMP dword ptr [EBP + 0xfffffdf8],0x58 ; 004619ea
        ;   Label: LAB_004619ea
    JZ 0x00461989                       ; 004619f1
        ;   XREF to: 00461989 (CONDITIONAL_JUMP)  ; LAB_00461989
    JMP 0x004619cb                      ; 004619f3
        ;   XREF to: 004619cb (UNCONDITIONAL_JUMP)  ; LAB_004619cb
    CALL shape_design.c_allocateSpatialTreeNode_FUN_00457ed0 ; 004619f5
        ;   XREF to: 00457ed0 (UNCONDITIONAL_CALL)  ; STreeNode * shape_design.c_allocateSpatialTreeNode_FUN_00457ed0()
        ;   Label: LAB_004619f5
    MOV dword ptr [EBP + -0x20],EAX     ; 004619fa
    MOV EAX,dword ptr [EBP + -0x20]     ; 004619fd
    MOV dword ptr [EAX],0x0             ; 00461a00
    MOV EAX,dword ptr [EBP + -0x20]     ; 00461a06
    MOV dword ptr [EAX + 0x4],0x0       ; 00461a09
    MOV EAX,dword ptr [EBP + -0x20]     ; 00461a10
    MOV dword ptr [EAX + 0x8],0x0       ; 00461a13
    MOV EAX,dword ptr [EBP + 0x14]      ; 00461a1a
    MOV EDX,dword ptr [EAX + 0xc]       ; 00461a1d
    MOV EAX,dword ptr [EBP + -0x20]     ; 00461a20
    MOV dword ptr [EAX + 0xc],EDX       ; 00461a23
    CALL shape_design.c_allocateSpatialTreeNode_FUN_00457ed0 ; 00461a26
        ;   XREF to: 00457ed0 (UNCONDITIONAL_CALL)  ; STreeNode * shape_design.c_allocateSpatialTreeNode_FUN_00457ed0()
    MOV dword ptr [EBP + -0x1c],EAX     ; 00461a2b
    MOV EAX,dword ptr [EBP + -0x1c]     ; 00461a2e
    MOV dword ptr [EAX],0x0             ; 00461a31
    MOV EAX,dword ptr [EBP + -0x1c]     ; 00461a37
    MOV dword ptr [EAX + 0x4],0x0       ; 00461a3a
    MOV EAX,dword ptr [EBP + -0x1c]     ; 00461a41
    MOV dword ptr [EAX + 0x8],0x0       ; 00461a44
    MOV EAX,dword ptr [EBP + -0x8]      ; 00461a4b
    MOV EDX,dword ptr [EBP + -0x1c]     ; 00461a4e
    MOV dword ptr [EDX + 0xc],EAX       ; 00461a51
    MOV EAX,dword ptr [EBP + -0x20]     ; 00461a54
    MOV EDX,dword ptr [EBP + 0x14]      ; 00461a57
    MOV dword ptr [EDX],EAX             ; 00461a5a
    MOV EAX,dword ptr [EBP + -0x1c]     ; 00461a5c
    MOV EDX,dword ptr [EBP + 0x14]      ; 00461a5f
    MOV dword ptr [EDX + 0x4],EAX       ; 00461a62
    MOV EAX,dword ptr [EBP + 0x14]      ; 00461a65
    MOV dword ptr [EAX + 0x8],0x1       ; 00461a68
    MOV EAX,dword ptr [EBP + -0x30]     ; 00461a6f
    MOV EDX,dword ptr [EBP + 0x14]      ; 00461a72
    MOV dword ptr [EDX + 0xc],EAX       ; 00461a75
    MOV EAX,dword ptr [EBP + -0x2c]     ; 00461a78
    MOV EDX,dword ptr [EBP + 0x14]      ; 00461a7b
    MOV dword ptr [EDX + 0x10],EAX      ; 00461a7e
    MOV EAX,dword ptr [EBP + -0x28]     ; 00461a81
    MOV EDX,dword ptr [EBP + 0x14]      ; 00461a84
    MOV dword ptr [EDX + 0x14],EAX      ; 00461a87
    MOV EAX,dword ptr [EBP + -0x24]     ; 00461a8a
    MOV EDX,dword ptr [EBP + 0x14]      ; 00461a8d
    MOV dword ptr [EDX + 0x18],EAX      ; 00461a90
    MOV ESP,EBP                         ; 00461a93
        ;   Label: LAB_00461a93
    POP EBP                             ; 00461a95
    POP EDI                             ; 00461a96
    POP ESI                             ; 00461a97
    POP EBX                             ; 00461a98
    RET                                 ; 00461a99

