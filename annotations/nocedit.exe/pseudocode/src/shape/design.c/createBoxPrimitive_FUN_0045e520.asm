; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined shape_design.c_createBoxPrimitive_FUN_0045e520()
;
; Local Variables:
; undefined        Stack[-0x88]:1  local_88
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
;   TerminatedCString s_Enter_in_X_Y_Z_box_dimen_0061b54e
;   TerminatedCString s_f_f_f_0061b56f
;   TerminatedCString s_Enter_in_X_Y_Z_box_cente_0061b578
;   TerminatedCString s_f_f_f_0061b595
;   TerminatedCString s_I_nside_O_utside_B_oth_0061b59e
;   float g_BoxScaleFactor = 0.5
;   int g_VertexCount
;   SVertexData[20000] g_LoadedVertices
;   undefined4 DAT_01626410
;   undefined4 g_LoadedVertices[0].vertex.z
;
; Called Functions:
;   crt_ctype.c_toupper_FUN_005ff9e0
;   crt_stdio.c_sscanf_FUN_0060013c
;   engine_2d.c_clearInputAndWait_FUN_00403260
;   engine_2d.c_drawText_FUN_00401fd0
;   engine_2d.c_getInputWithPrompt_FUN_004032c0
;   shape_design.c_createQuadPolygon_FUN_0045df60
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
;   wincore_windll.cpp_clearScreen_FUN_005b3e70
;   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045e520
        ;   Label: shape_design.c_createBoxPrimitive_FUN_0045e520
    PUSH ESI                            ; 0045e521
    PUSH EDI                            ; 0045e522
    PUSH EBP                            ; 0045e523
    MOV EBP,ESP                         ; 0045e524
    SUB ESP,0x78                        ; 0045e526
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 0045e52c | void wincore_windll.cpp_clearScreen_FUN_005b3e70()
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 0045e531 | void engine_2d.c_clearInputAndWait_FUN_00403260()
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)
    MOV dword ptr [EBP + -0x20],0xbf800000 ; 0045e536
    MOV dword ptr [EBP + -0x1c],0xbf800000 ; 0045e53d
    MOV dword ptr [EBP + -0x18],0xbf800000 ; 0045e544
    MOV ECX,0x61b54e                    ; 0045e54b | = "Enter in X,Y,Z box dimentions : " | s_Enter_in_X_Y_Z_box_dimen_0061b54e = Enter in X,Y,Z box dimentions :
    PUSH ECX                            ; 0045e550 | = "Enter in X,Y,Z box dimentions : " | s_Enter_in_X_Y_Z_box_dimen_0061b54e = Enter in X,Y,Z box dimentions :
    PUSH 0x0                            ; 0045e551
    PUSH 0x0                            ; 0045e553
    PUSH 0x4f                           ; 0045e555
    LEA ECX,[EBP + -0x78]               ; 0045e557
    PUSH ECX                            ; 0045e55a
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 0045e55b | int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 0045e560
    LEA EDI,[EBP + -0x78]               ; 0045e563
    SUB ECX,ECX                         ; 0045e566
    DEC ECX                             ; 0045e568
    XOR EAX,EAX                         ; 0045e569
    SCASB.REPNE ES:EDI                  ; 0045e56b
    NOT ECX                             ; 0045e56d
    DEC ECX                             ; 0045e56f
    TEST ECX,ECX                        ; 0045e570
    JNZ 0x0045e579                      ; 0045e572 | LAB_0045e579
        ;   XREF to: 0045e579 (CONDITIONAL_JUMP)
    JMP 0x0045ea82                      ; 0045e574 | LAB_0045ea82
        ;   XREF to: 0045ea82 (UNCONDITIONAL_JUMP)
    LEA EAX,[EBP + -0x18]               ; 0045e579
        ;   Label: LAB_0045e579
    PUSH EAX                            ; 0045e57c
    LEA EAX,[EBP + -0x1c]               ; 0045e57d
    PUSH EAX                            ; 0045e580
    LEA EAX,[EBP + -0x20]               ; 0045e581
    PUSH EAX                            ; 0045e584
    MOV EAX,0x61b56f                    ; 0045e585 | = "%f,%f,%f" | s_f_f_f_0061b56f = %f,%f,%f
    PUSH EAX                            ; 0045e58a | = "%f,%f,%f" | s_f_f_f_0061b56f = %f,%f,%f
    LEA EAX,[EBP + -0x78]               ; 0045e58b
    PUSH EAX                            ; 0045e58e
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 0045e58f | int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 0045e594
    FLD float ptr [EBP + -0x20]         ; 0045e597
    FLDZ                                ; 0045e59a
    FCOMPP                              ; 0045e59c
    FNSTSW AX                           ; 0045e59e
    SAHF                                ; 0045e5a0
    JNC 0x0045e5af                      ; 0045e5a1 | LAB_0045e5af
        ;   XREF to: 0045e5af (CONDITIONAL_JUMP)
    FLD float ptr [EBP + -0x1c]         ; 0045e5a3
    FLDZ                                ; 0045e5a6
    FCOMPP                              ; 0045e5a8
    FNSTSW AX                           ; 0045e5aa
    SAHF                                ; 0045e5ac
    JC 0x0045e5b1                       ; 0045e5ad | LAB_0045e5b1
        ;   XREF to: 0045e5b1 (CONDITIONAL_JUMP)
    JMP 0x0045e5bd                      ; 0045e5af | LAB_0045e5bd
        ;   Label: LAB_0045e5af
        ;   XREF to: 0045e5bd (UNCONDITIONAL_JUMP)
    FLD float ptr [EBP + -0x18]         ; 0045e5b1
        ;   Label: LAB_0045e5b1
    FLDZ                                ; 0045e5b4
    FCOMPP                              ; 0045e5b6
    FNSTSW AX                           ; 0045e5b8
    SAHF                                ; 0045e5ba
    JC 0x0045e5c2                       ; 0045e5bb | LAB_0045e5c2
        ;   XREF to: 0045e5c2 (CONDITIONAL_JUMP)
    JMP 0x0045ea82                      ; 0045e5bd | LAB_0045ea82
        ;   Label: LAB_0045e5bd
        ;   XREF to: 0045ea82 (UNCONDITIONAL_JUMP)
    MOV ECX,0x61b578                    ; 0045e5c2 | = "Enter in X,Y,Z box center : " | s_Enter_in_X_Y_Z_box_cente_0061b578 = Enter in X,Y,Z box center :
        ;   Label: LAB_0045e5c2
    PUSH ECX                            ; 0045e5c7 | = "Enter in X,Y,Z box center : " | s_Enter_in_X_Y_Z_box_cente_0061b578 = Enter in X,Y,Z box center :
    PUSH 0xb                            ; 0045e5c8
    PUSH 0x0                            ; 0045e5ca
    PUSH 0x4f                           ; 0045e5cc
    LEA ECX,[EBP + -0x78]               ; 0045e5ce
    PUSH ECX                            ; 0045e5d1
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 0045e5d2 | int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 0045e5d7
    LEA EDI,[EBP + -0x78]               ; 0045e5da
    SUB ECX,ECX                         ; 0045e5dd
    DEC ECX                             ; 0045e5df
    XOR EAX,EAX                         ; 0045e5e0
    SCASB.REPNE ES:EDI                  ; 0045e5e2
    NOT ECX                             ; 0045e5e4
    DEC ECX                             ; 0045e5e6
    TEST ECX,ECX                        ; 0045e5e7
    JNZ 0x0045e5f0                      ; 0045e5e9 | LAB_0045e5f0
        ;   XREF to: 0045e5f0 (CONDITIONAL_JUMP)
    JMP 0x0045ea82                      ; 0045e5eb | LAB_0045ea82
        ;   XREF to: 0045ea82 (UNCONDITIONAL_JUMP)
    LEA EAX,[EBP + -0xc]                ; 0045e5f0
        ;   Label: LAB_0045e5f0
    PUSH EAX                            ; 0045e5f3
    LEA EAX,[EBP + -0x10]               ; 0045e5f4
    PUSH EAX                            ; 0045e5f7
    LEA EAX,[EBP + -0x14]               ; 0045e5f8
    PUSH EAX                            ; 0045e5fb
    MOV EAX,0x61b595                    ; 0045e5fc | = "%f,%f,%f" | s_f_f_f_0061b595 = %f,%f,%f
    PUSH EAX                            ; 0045e601 | = "%f,%f,%f" | s_f_f_f_0061b595 = %f,%f,%f
    LEA EAX,[EBP + -0x78]               ; 0045e602
    PUSH EAX                            ; 0045e605
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 0045e606 | int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 0045e60b
    MOV dword ptr [EBP + -0x24],EAX     ; 0045e60e
    CMP dword ptr [EBP + -0x24],0x3     ; 0045e611
    JZ 0x0045e61c                       ; 0045e615 | LAB_0045e61c
        ;   XREF to: 0045e61c (CONDITIONAL_JUMP)
    JMP 0x0045ea82                      ; 0045e617 | LAB_0045ea82
        ;   XREF to: 0045ea82 (UNCONDITIONAL_JUMP)
    PUSH 0x16                           ; 0045e61c
        ;   Label: LAB_0045e61c
    PUSH 0x0                            ; 0045e61e
    MOV EAX,0x61b59e                    ; 0045e620 | = "I)nside, O)utside, B)oth ?" | s_I_nside_O_utside_B_oth_0061b59e = I)nside, O)utside, B)oth ?
    PUSH EAX                            ; 0045e625 | = "I)nside, O)utside, B)oth ?" | s_I_nside_O_utside_B_oth_0061b59e = I)nside, O)utside, B)oth ?
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0045e626 | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0045e62b
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0045e62e | void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 0045e633 | int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
    AND EAX,0xff                        ; 0045e638
    PUSH EAX                            ; 0045e63d
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 0045e63e | int crt_ctype.c_toupper_FUN_005ff9e0(int c)
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0045e643
    MOV dword ptr [EBP + -0x8],EAX      ; 0045e646
    MOV EAX,[0x01626408]                ; 0045e649 | int g_VertexCount
    MOV dword ptr [EBP + -0x4],EAX      ; 0045e64e
    ADD dword ptr [0x01626408],0x8      ; 0045e651 | int g_VertexCount
    FLD float ptr [EBP + -0x20]         ; 0045e658
    FMUL float ptr [0x0061b5ba]         ; 0045e65b | float g_BoxScaleFactor
    FADD float ptr [EBP + -0x14]        ; 0045e661
    IMUL EAX,dword ptr [EBP + -0x4],0x14 ; 0045e664
    FSTP float ptr [EAX + 0x162640c]    ; 0045e668 | SVertexData[20000] g_LoadedVertices
    FLD float ptr [EBP + -0x1c]         ; 0045e66e
    FMUL float ptr [0x0061b5ba]         ; 0045e671 | float g_BoxScaleFactor
    FSUBR float ptr [EBP + -0x10]       ; 0045e677
    IMUL EAX,dword ptr [EBP + -0x4],0x14 ; 0045e67a
    FSTP float ptr [EAX + 0x1626410]    ; 0045e67e | DAT_01626410
    FLD float ptr [EBP + -0x18]         ; 0045e684
    FMUL float ptr [0x0061b5ba]         ; 0045e687 | float g_BoxScaleFactor
    FADD float ptr [EBP + -0xc]         ; 0045e68d
    IMUL EAX,dword ptr [EBP + -0x4],0x14 ; 0045e690
    FSTP float ptr [EAX + 0x1626414]    ; 0045e694 | g_LoadedVertices[0].vertex.z
    FLD float ptr [EBP + -0x20]         ; 0045e69a
    FMUL float ptr [0x0061b5ba]         ; 0045e69d | float g_BoxScaleFactor
    FSUBR float ptr [EBP + -0x14]       ; 0045e6a3
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045e6a6
    INC EAX                             ; 0045e6a9
    IMUL EAX,EAX,0x14                   ; 0045e6aa
    FSTP float ptr [EAX + 0x162640c]    ; 0045e6ad | SVertexData[20000] g_LoadedVertices
    FLD float ptr [EBP + -0x1c]         ; 0045e6b3
    FMUL float ptr [0x0061b5ba]         ; 0045e6b6 | float g_BoxScaleFactor
    FSUBR float ptr [EBP + -0x10]       ; 0045e6bc
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045e6bf
    INC EAX                             ; 0045e6c2
    IMUL EAX,EAX,0x14                   ; 0045e6c3
    FSTP float ptr [EAX + 0x1626410]    ; 0045e6c6 | DAT_01626410
    FLD float ptr [EBP + -0x18]         ; 0045e6cc
    FMUL float ptr [0x0061b5ba]         ; 0045e6cf | float g_BoxScaleFactor
    FADD float ptr [EBP + -0xc]         ; 0045e6d5
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045e6d8
    INC EAX                             ; 0045e6db
    IMUL EAX,EAX,0x14                   ; 0045e6dc
    FSTP float ptr [EAX + 0x1626414]    ; 0045e6df | g_LoadedVertices[0].vertex.z
    FLD float ptr [EBP + -0x20]         ; 0045e6e5
    FMUL float ptr [0x0061b5ba]         ; 0045e6e8 | float g_BoxScaleFactor
    FSUBR float ptr [EBP + -0x14]       ; 0045e6ee
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045e6f1
    ADD EAX,0x2                         ; 0045e6f4
    IMUL EAX,EAX,0x14                   ; 0045e6f7
    FSTP float ptr [EAX + 0x162640c]    ; 0045e6fa | SVertexData[20000] g_LoadedVertices
    FLD float ptr [EBP + -0x1c]         ; 0045e700
    FMUL float ptr [0x0061b5ba]         ; 0045e703 | float g_BoxScaleFactor
    FSUBR float ptr [EBP + -0x10]       ; 0045e709
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045e70c
    ADD EAX,0x2                         ; 0045e70f
    IMUL EAX,EAX,0x14                   ; 0045e712
    FSTP float ptr [EAX + 0x1626410]    ; 0045e715 | DAT_01626410
    FLD float ptr [EBP + -0x18]         ; 0045e71b
    FMUL float ptr [0x0061b5ba]         ; 0045e71e | float g_BoxScaleFactor
    FSUBR float ptr [EBP + -0xc]        ; 0045e724
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045e727
    ADD EAX,0x2                         ; 0045e72a
    IMUL EAX,EAX,0x14                   ; 0045e72d
    FSTP float ptr [EAX + 0x1626414]    ; 0045e730 | g_LoadedVertices[0].vertex.z
    FLD float ptr [EBP + -0x20]         ; 0045e736
    FMUL float ptr [0x0061b5ba]         ; 0045e739 | float g_BoxScaleFactor
    FADD float ptr [EBP + -0x14]        ; 0045e73f
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045e742
    ADD EAX,0x3                         ; 0045e745
    IMUL EAX,EAX,0x14                   ; 0045e748
    FSTP float ptr [EAX + 0x162640c]    ; 0045e74b | SVertexData[20000] g_LoadedVertices
    FLD float ptr [EBP + -0x1c]         ; 0045e751
    FMUL float ptr [0x0061b5ba]         ; 0045e754 | float g_BoxScaleFactor
    FSUBR float ptr [EBP + -0x10]       ; 0045e75a
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045e75d
    ADD EAX,0x3                         ; 0045e760
    IMUL EAX,EAX,0x14                   ; 0045e763
    FSTP float ptr [EAX + 0x1626410]    ; 0045e766 | DAT_01626410
    FLD float ptr [EBP + -0x18]         ; 0045e76c
    FMUL float ptr [0x0061b5ba]         ; 0045e76f | float g_BoxScaleFactor
    FSUBR float ptr [EBP + -0xc]        ; 0045e775
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045e778
    ADD EAX,0x3                         ; 0045e77b
    IMUL EAX,EAX,0x14                   ; 0045e77e
    FSTP float ptr [EAX + 0x1626414]    ; 0045e781 | g_LoadedVertices[0].vertex.z
    FLD float ptr [EBP + -0x20]         ; 0045e787
    FMUL float ptr [0x0061b5ba]         ; 0045e78a | float g_BoxScaleFactor
    FADD float ptr [EBP + -0x14]        ; 0045e790
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045e793
    ADD EAX,0x4                         ; 0045e796
    IMUL EAX,EAX,0x14                   ; 0045e799
    FSTP float ptr [EAX + 0x162640c]    ; 0045e79c | SVertexData[20000] g_LoadedVertices
    FLD float ptr [EBP + -0x1c]         ; 0045e7a2
    FMUL float ptr [0x0061b5ba]         ; 0045e7a5 | float g_BoxScaleFactor
    FADD float ptr [EBP + -0x10]        ; 0045e7ab
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045e7ae
    ADD EAX,0x4                         ; 0045e7b1
    IMUL EAX,EAX,0x14                   ; 0045e7b4
    FSTP float ptr [EAX + 0x1626410]    ; 0045e7b7 | DAT_01626410
    FLD float ptr [EBP + -0x18]         ; 0045e7bd
    FMUL float ptr [0x0061b5ba]         ; 0045e7c0 | float g_BoxScaleFactor
    FADD float ptr [EBP + -0xc]         ; 0045e7c6
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045e7c9
    ADD EAX,0x4                         ; 0045e7cc
    IMUL EAX,EAX,0x14                   ; 0045e7cf
    FSTP float ptr [EAX + 0x1626414]    ; 0045e7d2 | g_LoadedVertices[0].vertex.z
    FLD float ptr [EBP + -0x20]         ; 0045e7d8
    FMUL float ptr [0x0061b5ba]         ; 0045e7db | float g_BoxScaleFactor
    FSUBR float ptr [EBP + -0x14]       ; 0045e7e1
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045e7e4
    ADD EAX,0x5                         ; 0045e7e7
    IMUL EAX,EAX,0x14                   ; 0045e7ea
    FSTP float ptr [EAX + 0x162640c]    ; 0045e7ed | SVertexData[20000] g_LoadedVertices
    FLD float ptr [EBP + -0x1c]         ; 0045e7f3
    FMUL float ptr [0x0061b5ba]         ; 0045e7f6 | float g_BoxScaleFactor
    FADD float ptr [EBP + -0x10]        ; 0045e7fc
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045e7ff
    ADD EAX,0x5                         ; 0045e802
    IMUL EAX,EAX,0x14                   ; 0045e805
    FSTP float ptr [EAX + 0x1626410]    ; 0045e808 | DAT_01626410
    FLD float ptr [EBP + -0x18]         ; 0045e80e
    FMUL float ptr [0x0061b5ba]         ; 0045e811 | float g_BoxScaleFactor
    FADD float ptr [EBP + -0xc]         ; 0045e817
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045e81a
    ADD EAX,0x5                         ; 0045e81d
    IMUL EAX,EAX,0x14                   ; 0045e820
    FSTP float ptr [EAX + 0x1626414]    ; 0045e823 | g_LoadedVertices[0].vertex.z
    FLD float ptr [EBP + -0x20]         ; 0045e829
    FMUL float ptr [0x0061b5ba]         ; 0045e82c | float g_BoxScaleFactor
    FSUBR float ptr [EBP + -0x14]       ; 0045e832
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045e835
    ADD EAX,0x6                         ; 0045e838
    IMUL EAX,EAX,0x14                   ; 0045e83b
    FSTP float ptr [EAX + 0x162640c]    ; 0045e83e | SVertexData[20000] g_LoadedVertices
    FLD float ptr [EBP + -0x1c]         ; 0045e844
    FMUL float ptr [0x0061b5ba]         ; 0045e847 | float g_BoxScaleFactor
    FADD float ptr [EBP + -0x10]        ; 0045e84d
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045e850
    ADD EAX,0x6                         ; 0045e853
    IMUL EAX,EAX,0x14                   ; 0045e856
    FSTP float ptr [EAX + 0x1626410]    ; 0045e859 | DAT_01626410
    FLD float ptr [EBP + -0x18]         ; 0045e85f
    FMUL float ptr [0x0061b5ba]         ; 0045e862 | float g_BoxScaleFactor
    FSUBR float ptr [EBP + -0xc]        ; 0045e868
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045e86b
    ADD EAX,0x6                         ; 0045e86e
    IMUL EAX,EAX,0x14                   ; 0045e871
    FSTP float ptr [EAX + 0x1626414]    ; 0045e874 | g_LoadedVertices[0].vertex.z
    FLD float ptr [EBP + -0x20]         ; 0045e87a
    FMUL float ptr [0x0061b5ba]         ; 0045e87d | float g_BoxScaleFactor
    FADD float ptr [EBP + -0x14]        ; 0045e883
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045e886
    ADD EAX,0x7                         ; 0045e889
    IMUL EAX,EAX,0x14                   ; 0045e88c
    FSTP float ptr [EAX + 0x162640c]    ; 0045e88f | SVertexData[20000] g_LoadedVertices
    FLD float ptr [EBP + -0x1c]         ; 0045e895
    FMUL float ptr [0x0061b5ba]         ; 0045e898 | float g_BoxScaleFactor
    FADD float ptr [EBP + -0x10]        ; 0045e89e
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045e8a1
    ADD EAX,0x7                         ; 0045e8a4
    IMUL EAX,EAX,0x14                   ; 0045e8a7
    FSTP float ptr [EAX + 0x1626410]    ; 0045e8aa | DAT_01626410
    FLD float ptr [EBP + -0x18]         ; 0045e8b0
    FMUL float ptr [0x0061b5ba]         ; 0045e8b3 | float g_BoxScaleFactor
    FSUBR float ptr [EBP + -0xc]        ; 0045e8b9
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045e8bc
    ADD EAX,0x7                         ; 0045e8bf
    IMUL EAX,EAX,0x14                   ; 0045e8c2
    FSTP float ptr [EAX + 0x1626414]    ; 0045e8c5 | g_LoadedVertices[0].vertex.z
    CMP dword ptr [EBP + -0x8],0x42     ; 0045e8cb
    JZ 0x0045e8db                       ; 0045e8cf | LAB_0045e8db
        ;   XREF to: 0045e8db (CONDITIONAL_JUMP)
    CMP dword ptr [EBP + -0x8],0x49     ; 0045e8d1
    JNZ 0x0045e9a4                      ; 0045e8d5 | LAB_0045e9a4
        ;   XREF to: 0045e9a4 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045e8db
        ;   Label: LAB_0045e8db
    ADD EAX,0x4                         ; 0045e8de
    PUSH EAX                            ; 0045e8e1
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045e8e2
    ADD EAX,0x5                         ; 0045e8e5
    PUSH EAX                            ; 0045e8e8
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045e8e9
    INC EAX                             ; 0045e8ec
    PUSH EAX                            ; 0045e8ed
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045e8ee
    PUSH EAX                            ; 0045e8f1
    CALL shape_design.c_createQuadPolygon_FUN_0045df60 ; 0045e8f2 | undefined shape_design.c_createQuadPolygon_FUN_0045df60()
        ;   XREF to: 0045df60 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0045e8f7
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045e8fa
    ADD EAX,0x5                         ; 0045e8fd
    PUSH EAX                            ; 0045e900
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045e901
    ADD EAX,0x6                         ; 0045e904
    PUSH EAX                            ; 0045e907
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045e908
    ADD EAX,0x2                         ; 0045e90b
    PUSH EAX                            ; 0045e90e
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045e90f
    INC EAX                             ; 0045e912
    PUSH EAX                            ; 0045e913
    CALL shape_design.c_createQuadPolygon_FUN_0045df60 ; 0045e914 | undefined shape_design.c_createQuadPolygon_FUN_0045df60()
        ;   XREF to: 0045df60 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0045e919
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045e91c
    ADD EAX,0x6                         ; 0045e91f
    PUSH EAX                            ; 0045e922
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045e923
    ADD EAX,0x7                         ; 0045e926
    PUSH EAX                            ; 0045e929
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045e92a
    ADD EAX,0x3                         ; 0045e92d
    PUSH EAX                            ; 0045e930
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045e931
    ADD EAX,0x2                         ; 0045e934
    PUSH EAX                            ; 0045e937
    CALL shape_design.c_createQuadPolygon_FUN_0045df60 ; 0045e938 | undefined shape_design.c_createQuadPolygon_FUN_0045df60()
        ;   XREF to: 0045df60 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0045e93d
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045e940
    ADD EAX,0x7                         ; 0045e943
    PUSH EAX                            ; 0045e946
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045e947
    ADD EAX,0x4                         ; 0045e94a
    PUSH EAX                            ; 0045e94d
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045e94e
    PUSH EAX                            ; 0045e951
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045e952
    ADD EAX,0x3                         ; 0045e955
    PUSH EAX                            ; 0045e958
    CALL shape_design.c_createQuadPolygon_FUN_0045df60 ; 0045e959 | undefined shape_design.c_createQuadPolygon_FUN_0045df60()
        ;   XREF to: 0045df60 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0045e95e
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045e961
    ADD EAX,0x7                         ; 0045e964
    PUSH EAX                            ; 0045e967
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045e968
    ADD EAX,0x6                         ; 0045e96b
    PUSH EAX                            ; 0045e96e
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045e96f
    ADD EAX,0x5                         ; 0045e972
    PUSH EAX                            ; 0045e975
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045e976
    ADD EAX,0x4                         ; 0045e979
    PUSH EAX                            ; 0045e97c
    CALL shape_design.c_createQuadPolygon_FUN_0045df60 ; 0045e97d | undefined shape_design.c_createQuadPolygon_FUN_0045df60()
        ;   XREF to: 0045df60 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0045e982
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045e985
    PUSH EAX                            ; 0045e988
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045e989
    INC EAX                             ; 0045e98c
    PUSH EAX                            ; 0045e98d
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045e98e
    ADD EAX,0x2                         ; 0045e991
    PUSH EAX                            ; 0045e994
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045e995
    ADD EAX,0x3                         ; 0045e998
    PUSH EAX                            ; 0045e99b
    CALL shape_design.c_createQuadPolygon_FUN_0045df60 ; 0045e99c | undefined shape_design.c_createQuadPolygon_FUN_0045df60()
        ;   XREF to: 0045df60 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0045e9a1
    CMP dword ptr [EBP + -0x8],0x42     ; 0045e9a4
        ;   Label: LAB_0045e9a4
    JZ 0x0045e9b4                       ; 0045e9a8 | LAB_0045e9b4
        ;   XREF to: 0045e9b4 (CONDITIONAL_JUMP)
    CMP dword ptr [EBP + -0x8],0x4f     ; 0045e9aa
    JNZ 0x0045ea7d                      ; 0045e9ae | LAB_0045ea7d
        ;   XREF to: 0045ea7d (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045e9b4
        ;   Label: LAB_0045e9b4
    ADD EAX,0x5                         ; 0045e9b7
    PUSH EAX                            ; 0045e9ba
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045e9bb
    ADD EAX,0x4                         ; 0045e9be
    PUSH EAX                            ; 0045e9c1
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045e9c2
    PUSH EAX                            ; 0045e9c5
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045e9c6
    INC EAX                             ; 0045e9c9
    PUSH EAX                            ; 0045e9ca
    CALL shape_design.c_createQuadPolygon_FUN_0045df60 ; 0045e9cb | undefined shape_design.c_createQuadPolygon_FUN_0045df60()
        ;   XREF to: 0045df60 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0045e9d0
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045e9d3
    ADD EAX,0x6                         ; 0045e9d6
    PUSH EAX                            ; 0045e9d9
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045e9da
    ADD EAX,0x5                         ; 0045e9dd
    PUSH EAX                            ; 0045e9e0
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045e9e1
    INC EAX                             ; 0045e9e4
    PUSH EAX                            ; 0045e9e5
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045e9e6
    ADD EAX,0x2                         ; 0045e9e9
    PUSH EAX                            ; 0045e9ec
    CALL shape_design.c_createQuadPolygon_FUN_0045df60 ; 0045e9ed | undefined shape_design.c_createQuadPolygon_FUN_0045df60()
        ;   XREF to: 0045df60 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0045e9f2
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045e9f5
    ADD EAX,0x7                         ; 0045e9f8
    PUSH EAX                            ; 0045e9fb
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045e9fc
    ADD EAX,0x6                         ; 0045e9ff
    PUSH EAX                            ; 0045ea02
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045ea03
    ADD EAX,0x2                         ; 0045ea06
    PUSH EAX                            ; 0045ea09
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045ea0a
    ADD EAX,0x3                         ; 0045ea0d
    PUSH EAX                            ; 0045ea10
    CALL shape_design.c_createQuadPolygon_FUN_0045df60 ; 0045ea11 | undefined shape_design.c_createQuadPolygon_FUN_0045df60()
        ;   XREF to: 0045df60 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0045ea16
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045ea19
    ADD EAX,0x4                         ; 0045ea1c
    PUSH EAX                            ; 0045ea1f
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045ea20
    ADD EAX,0x7                         ; 0045ea23
    PUSH EAX                            ; 0045ea26
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045ea27
    ADD EAX,0x3                         ; 0045ea2a
    PUSH EAX                            ; 0045ea2d
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045ea2e
    PUSH EAX                            ; 0045ea31
    CALL shape_design.c_createQuadPolygon_FUN_0045df60 ; 0045ea32 | undefined shape_design.c_createQuadPolygon_FUN_0045df60()
        ;   XREF to: 0045df60 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0045ea37
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045ea3a
    ADD EAX,0x4                         ; 0045ea3d
    PUSH EAX                            ; 0045ea40
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045ea41
    ADD EAX,0x5                         ; 0045ea44
    PUSH EAX                            ; 0045ea47
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045ea48
    ADD EAX,0x6                         ; 0045ea4b
    PUSH EAX                            ; 0045ea4e
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045ea4f
    ADD EAX,0x7                         ; 0045ea52
    PUSH EAX                            ; 0045ea55
    CALL shape_design.c_createQuadPolygon_FUN_0045df60 ; 0045ea56 | undefined shape_design.c_createQuadPolygon_FUN_0045df60()
        ;   XREF to: 0045df60 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0045ea5b
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045ea5e
    ADD EAX,0x3                         ; 0045ea61
    PUSH EAX                            ; 0045ea64
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045ea65
    ADD EAX,0x2                         ; 0045ea68
    PUSH EAX                            ; 0045ea6b
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045ea6c
    INC EAX                             ; 0045ea6f
    PUSH EAX                            ; 0045ea70
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045ea71
    PUSH EAX                            ; 0045ea74
    CALL shape_design.c_createQuadPolygon_FUN_0045df60 ; 0045ea75 | undefined shape_design.c_createQuadPolygon_FUN_0045df60()
        ;   XREF to: 0045df60 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0045ea7a
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 0045ea7d | void engine_2d.c_clearInputAndWait_FUN_00403260()
        ;   Label: LAB_0045ea7d
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)
    MOV ESP,EBP                         ; 0045ea82
        ;   Label: LAB_0045ea82
    POP EBP                             ; 0045ea84
    POP EDI                             ; 0045ea85
    POP ESI                             ; 0045ea86
    POP EBX                             ; 0045ea87
    RET                                 ; 0045ea88

