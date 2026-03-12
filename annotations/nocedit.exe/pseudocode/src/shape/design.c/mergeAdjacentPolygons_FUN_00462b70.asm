; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_design_c_mergeAdjacentPolygons_FUN_00462b70(int polygon1_index,int polygon2_index)
;
; Parameters:
; int              Stack[0x4]:4   polygon1_index
; int              Stack[0x8]:4   polygon2_index
; Local Variables:
; undefined8       Stack[-0x21c]:8  local_21c
; undefined4       Stack[-0x15c]:4  local_15c
; undefined4       Stack[-0x158]:4  local_158
; undefined4       Stack[-0x154]:4  local_154
; float[6]         Stack[-0x90]:24  local_90
; float            Stack[-0x78]:4  local_78
; float[6]         Stack[-0x74]:24  local_74
; float            Stack[-0x5c]:4  local_5c
; float[2]         Stack[-0x58]:8  local_58
; int              Stack[-0x50]:4  local_50
; float[3]         Stack[-0x4c]:12  afStack_4c
; float            Stack[-0x40]:4  local_40
; uint[7]          Stack[-0x3c]:28  local_3c
; int              Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; float            Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_design.c_mergePolygonsWithValidation_FUN_00465b40 at 00465c3b
;
; Referenced Globals:
;   TerminatedCString s_ERROR_Polygons_share_mor_0061bfee
;   TerminatedCString s_ERROR_More_than_3_vertic_0061c01a
;   double g_WindingOrderAngleThreshold = 170
;   int g_PolygonCount
;   SShapeEditorPolygon[20000] g_ModelPolygonData
;   undefined4 DAT_016e9914
;   undefined4 DAT_016e99b4
;   undefined4 DAT_016e99c8
;   undefined4 DAT_016e9a08
;   undefined4 DAT_016e9a48
;
; Called Functions:
;   engine_2d.c_clearInputAndWait_FUN_00403260
;   engine_2d.c_drawText_FUN_00401fd0
;   shape_design.c_calculatePolygonNormal_FUN_0045caa0
;   shape_design.c_calculateVertexAngle_FUN_00462050
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
;   wincore_windll.cpp_clearScreen_FUN_005b3e70
;   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00462b70
        ;   Label: shape_design.c_mergeAdjacentPolygons_FUN_00462b70
    PUSH ESI                            ; 00462b71
    PUSH EDI                            ; 00462b72
    PUSH EBP                            ; 00462b73
    MOV EBP,ESP                         ; 00462b74
    SUB ESP,0x20c                       ; 00462b76
    MOV dword ptr [EBP + -0x20],0x0     ; 00462b7c
    MOV dword ptr [EBP + -0x1c],0x0     ; 00462b83
    JMP 0x00462b92                      ; 00462b8a
        ;   XREF to: 00462b92 (UNCONDITIONAL_JUMP)  ; LAB_00462b92
    MOV EAX,dword ptr [EBP + -0x1c]     ; 00462b8c
        ;   Label: LAB_00462b8c
    INC dword ptr [EBP + -0x1c]         ; 00462b8f
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 00462b92
        ;   Label: LAB_00462b92
    MOV EAX,dword ptr [EBP + -0x1c]     ; 00462b99
    CMP EAX,dword ptr [EDX + 0x16e99b4] ; 00462b9c | DAT_016e99b4
    JGE 0x00462c5f                      ; 00462ba2
        ;   XREF to: 00462c5f (CONDITIONAL_JUMP)  ; LAB_00462c5f
    MOV dword ptr [EBP + -0x18],0x0     ; 00462ba8
    JMP 0x00462bb7                      ; 00462baf
        ;   XREF to: 00462bb7 (UNCONDITIONAL_JUMP)  ; LAB_00462bb7
    MOV EAX,dword ptr [EBP + -0x18]     ; 00462bb1
        ;   Label: LAB_00462bb1
    INC dword ptr [EBP + -0x18]         ; 00462bb4
    IMUL EDX,dword ptr [EBP + 0x18],0x184 ; 00462bb7
        ;   Label: LAB_00462bb7
    MOV EAX,dword ptr [EBP + -0x18]     ; 00462bbe
    CMP EAX,dword ptr [EDX + 0x16e99b4] ; 00462bc1 | DAT_016e99b4
    JGE 0x00462c5a                      ; 00462bc7
        ;   XREF to: 00462c5a (CONDITIONAL_JUMP)  ; LAB_00462c5a
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 00462bcd
    MOV EAX,dword ptr [EBP + -0x1c]     ; 00462bd4
    SHL EAX,0x2                         ; 00462bd7
    LEA ECX,[EDX + EAX*0x1]             ; 00462bda
    IMUL EDX,dword ptr [EBP + 0x18],0x184 ; 00462bdd
    MOV EAX,dword ptr [EBP + -0x18]     ; 00462be4
    SHL EAX,0x2                         ; 00462be7
    ADD EDX,EAX                         ; 00462bea
    MOV EAX,dword ptr [ECX + 0x16e99c8] ; 00462bec | DAT_016e99c8
    CMP EAX,dword ptr [EDX + 0x16e99c8] ; 00462bf2 | DAT_016e99c8
    JNZ 0x00462c55                      ; 00462bf8
        ;   XREF to: 00462c55 (CONDITIONAL_JUMP)  ; LAB_00462c55
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 00462bfa
    MOV EAX,dword ptr [EBP + -0x1c]     ; 00462c01
    SHL EAX,0x2                         ; 00462c04
    ADD EAX,EDX                         ; 00462c07
    MOV EDX,dword ptr [EBP + -0x20]     ; 00462c09
    SHL EDX,0x2                         ; 00462c0c
    MOV EAX,dword ptr [EAX + 0x16e99c8] ; 00462c0f | DAT_016e99c8
    MOV dword ptr [EDX + EBP*0x1 + -0x2c],EAX ; 00462c15
    MOV EAX,dword ptr [EBP + -0x20]     ; 00462c19
    INC dword ptr [EBP + -0x20]         ; 00462c1c
    CMP dword ptr [EBP + -0x20],0x2     ; 00462c1f
    JLE 0x00462c55                      ; 00462c23
        ;   XREF to: 00462c55 (CONDITIONAL_JUMP)  ; LAB_00462c55
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 00462c25
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    PUSH 0x0                            ; 00462c2a
    PUSH 0x0                            ; 00462c2c
    MOV EAX,0x61bfee                    ; 00462c2e | = "ERROR: Polygons share more than 2 ver..."
    PUSH EAX                            ; 00462c33 | = "ERROR: Polygons share more than 2 ver..."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00462c34
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00462c39
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 00462c3c
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 00462c41
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 00462c46
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 00462c4b
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    JMP 0x0046359c                      ; 00462c50
        ;   XREF to: 0046359c (UNCONDITIONAL_JUMP)  ; LAB_0046359c
    JMP 0x00462bb1                      ; 00462c55
        ;   XREF to: 00462bb1 (UNCONDITIONAL_JUMP)  ; LAB_00462bb1
        ;   Label: LAB_00462c55
    JMP 0x00462b8c                      ; 00462c5a
        ;   XREF to: 00462b8c (UNCONDITIONAL_JUMP)  ; LAB_00462b8c
        ;   Label: LAB_00462c5a
    MOV dword ptr [EBP + -0x1c],0x0     ; 00462c5f
        ;   Label: LAB_00462c5f
    MOV dword ptr [EBP + -0x18],0x0     ; 00462c66
    JMP 0x00462c75                      ; 00462c6d
        ;   XREF to: 00462c75 (UNCONDITIONAL_JUMP)  ; LAB_00462c75
    MOV EAX,dword ptr [EBP + -0x1c]     ; 00462c6f
        ;   Label: LAB_00462c6f
    INC dword ptr [EBP + -0x1c]         ; 00462c72
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 00462c75
        ;   Label: LAB_00462c75
    MOV EAX,dword ptr [EBP + -0x1c]     ; 00462c7c
    CMP EAX,dword ptr [EDX + 0x16e99b4] ; 00462c7f | DAT_016e99b4
    JGE 0x00462ccb                      ; 00462c85
        ;   XREF to: 00462ccb (CONDITIONAL_JUMP)  ; LAB_00462ccb
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 00462c87
    MOV EAX,dword ptr [EBP + -0x1c]     ; 00462c8e
    SHL EAX,0x2                         ; 00462c91
    ADD EAX,EDX                         ; 00462c94
    MOV EAX,dword ptr [EAX + 0x16e99c8] ; 00462c96 | DAT_016e99c8
    CMP EAX,dword ptr [EBP + -0x2c]     ; 00462c9c
    JZ 0x00462cbb                       ; 00462c9f
        ;   XREF to: 00462cbb (CONDITIONAL_JUMP)  ; LAB_00462cbb
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 00462ca1
    MOV EAX,dword ptr [EBP + -0x1c]     ; 00462ca8
    SHL EAX,0x2                         ; 00462cab
    ADD EAX,EDX                         ; 00462cae
    MOV EAX,dword ptr [EAX + 0x16e99c8] ; 00462cb0 | DAT_016e99c8
    CMP EAX,dword ptr [EBP + -0x28]     ; 00462cb6
    JNZ 0x00462cc9                      ; 00462cb9
        ;   XREF to: 00462cc9 (CONDITIONAL_JUMP)  ; LAB_00462cc9
    MOV EAX,dword ptr [EBP + -0x18]     ; 00462cbb
        ;   Label: LAB_00462cbb
    INC dword ptr [EBP + -0x18]         ; 00462cbe
    CMP dword ptr [EBP + -0x18],0x2     ; 00462cc1
    JNZ 0x00462cc9                      ; 00462cc5
        ;   XREF to: 00462cc9 (CONDITIONAL_JUMP)  ; LAB_00462cc9
    JMP 0x00462ccb                      ; 00462cc7
        ;   XREF to: 00462ccb (UNCONDITIONAL_JUMP)  ; LAB_00462ccb
    JMP 0x00462c6f                      ; 00462cc9
        ;   XREF to: 00462c6f (UNCONDITIONAL_JUMP)  ; LAB_00462c6f
        ;   Label: LAB_00462cc9
    IMUL EAX,dword ptr [EBP + 0x14],0x184 ; 00462ccb
        ;   Label: LAB_00462ccb
    MOV EAX,dword ptr [EAX + 0x16e99c8] ; 00462cd2 | DAT_016e99c8
    MOV dword ptr [EBP + -0x18],EAX     ; 00462cd8
    IMUL EAX,dword ptr [EBP + 0x14],0x184 ; 00462cdb
    MOV EAX,dword ptr [EAX + 0x16e99b4] ; 00462ce2 | DAT_016e99b4
    DEC EAX                             ; 00462ce8
    CMP EAX,dword ptr [EBP + -0x1c]     ; 00462ce9
    JLE 0x00462cf7                      ; 00462cec
        ;   XREF to: 00462cf7 (CONDITIONAL_JUMP)  ; LAB_00462cf7
    MOV EAX,dword ptr [EBP + -0x1c]     ; 00462cee
    INC EAX                             ; 00462cf1
    MOV dword ptr [EBP + -0xc],EAX      ; 00462cf2
    JMP 0x00462d17                      ; 00462cf5
        ;   XREF to: 00462d17 (UNCONDITIONAL_JUMP)  ; LAB_00462d17
    MOV EAX,dword ptr [EBP + -0x18]     ; 00462cf7
        ;   Label: LAB_00462cf7
    CMP EAX,dword ptr [EBP + -0x2c]     ; 00462cfa
    JZ 0x00462d07                       ; 00462cfd
        ;   XREF to: 00462d07 (CONDITIONAL_JUMP)  ; LAB_00462d07
    MOV EAX,dword ptr [EBP + -0x18]     ; 00462cff
    CMP EAX,dword ptr [EBP + -0x28]     ; 00462d02
    JNZ 0x00462d10                      ; 00462d05
        ;   XREF to: 00462d10 (CONDITIONAL_JUMP)  ; LAB_00462d10
    MOV dword ptr [EBP + -0xc],0x1      ; 00462d07
        ;   Label: LAB_00462d07
    JMP 0x00462d17                      ; 00462d0e
        ;   XREF to: 00462d17 (UNCONDITIONAL_JUMP)  ; LAB_00462d17
    MOV dword ptr [EBP + -0xc],0x0      ; 00462d10
        ;   Label: LAB_00462d10
    MOV dword ptr [EBP + -0x1c],0x0     ; 00462d17
        ;   Label: LAB_00462d17
    MOV dword ptr [EBP + -0x18],0x0     ; 00462d1e
    JMP 0x00462d2d                      ; 00462d25
        ;   XREF to: 00462d2d (UNCONDITIONAL_JUMP)  ; LAB_00462d2d
    MOV EAX,dword ptr [EBP + -0x1c]     ; 00462d27
        ;   Label: LAB_00462d27
    INC dword ptr [EBP + -0x1c]         ; 00462d2a
    IMUL EDX,dword ptr [EBP + 0x18],0x184 ; 00462d2d
        ;   Label: LAB_00462d2d
    MOV EAX,dword ptr [EBP + -0x1c]     ; 00462d34
    CMP EAX,dword ptr [EDX + 0x16e99b4] ; 00462d37 | DAT_016e99b4
    JGE 0x00462d83                      ; 00462d3d
        ;   XREF to: 00462d83 (CONDITIONAL_JUMP)  ; LAB_00462d83
    IMUL EDX,dword ptr [EBP + 0x18],0x184 ; 00462d3f
    MOV EAX,dword ptr [EBP + -0x1c]     ; 00462d46
    SHL EAX,0x2                         ; 00462d49
    ADD EAX,EDX                         ; 00462d4c
    MOV EAX,dword ptr [EAX + 0x16e99c8] ; 00462d4e | DAT_016e99c8
    CMP EAX,dword ptr [EBP + -0x2c]     ; 00462d54
    JZ 0x00462d73                       ; 00462d57
        ;   XREF to: 00462d73 (CONDITIONAL_JUMP)  ; LAB_00462d73
    IMUL EDX,dword ptr [EBP + 0x18],0x184 ; 00462d59
    MOV EAX,dword ptr [EBP + -0x1c]     ; 00462d60
    SHL EAX,0x2                         ; 00462d63
    ADD EAX,EDX                         ; 00462d66
    MOV EAX,dword ptr [EAX + 0x16e99c8] ; 00462d68 | DAT_016e99c8
    CMP EAX,dword ptr [EBP + -0x28]     ; 00462d6e
    JNZ 0x00462d81                      ; 00462d71
        ;   XREF to: 00462d81 (CONDITIONAL_JUMP)  ; LAB_00462d81
    MOV EAX,dword ptr [EBP + -0x18]     ; 00462d73
        ;   Label: LAB_00462d73
    INC dword ptr [EBP + -0x18]         ; 00462d76
    CMP dword ptr [EBP + -0x18],0x2     ; 00462d79
    JNZ 0x00462d81                      ; 00462d7d
        ;   XREF to: 00462d81 (CONDITIONAL_JUMP)  ; LAB_00462d81
    JMP 0x00462d83                      ; 00462d7f
        ;   XREF to: 00462d83 (UNCONDITIONAL_JUMP)  ; LAB_00462d83
    JMP 0x00462d27                      ; 00462d81
        ;   XREF to: 00462d27 (UNCONDITIONAL_JUMP)  ; LAB_00462d27
        ;   Label: LAB_00462d81
    IMUL EAX,dword ptr [EBP + 0x18],0x184 ; 00462d83
        ;   Label: LAB_00462d83
    MOV EAX,dword ptr [EAX + 0x16e99c8] ; 00462d8a | DAT_016e99c8
    MOV dword ptr [EBP + -0x18],EAX     ; 00462d90
    IMUL EAX,dword ptr [EBP + 0x18],0x184 ; 00462d93
    MOV EAX,dword ptr [EAX + 0x16e99b4] ; 00462d9a | DAT_016e99b4
    DEC EAX                             ; 00462da0
    CMP EAX,dword ptr [EBP + -0x1c]     ; 00462da1
    JLE 0x00462daf                      ; 00462da4
        ;   XREF to: 00462daf (CONDITIONAL_JUMP)  ; LAB_00462daf
    MOV EAX,dword ptr [EBP + -0x1c]     ; 00462da6
    INC EAX                             ; 00462da9
    MOV dword ptr [EBP + -0x8],EAX      ; 00462daa
    JMP 0x00462dcf                      ; 00462dad
        ;   XREF to: 00462dcf (UNCONDITIONAL_JUMP)  ; LAB_00462dcf
    MOV EAX,dword ptr [EBP + -0x18]     ; 00462daf
        ;   Label: LAB_00462daf
    CMP EAX,dword ptr [EBP + -0x2c]     ; 00462db2
    JZ 0x00462dbf                       ; 00462db5
        ;   XREF to: 00462dbf (CONDITIONAL_JUMP)  ; LAB_00462dbf
    MOV EAX,dword ptr [EBP + -0x18]     ; 00462db7
    CMP EAX,dword ptr [EBP + -0x28]     ; 00462dba
    JNZ 0x00462dc8                      ; 00462dbd
        ;   XREF to: 00462dc8 (CONDITIONAL_JUMP)  ; LAB_00462dc8
    MOV dword ptr [EBP + -0x8],0x1      ; 00462dbf
        ;   Label: LAB_00462dbf
    JMP 0x00462dcf                      ; 00462dc6
        ;   XREF to: 00462dcf (UNCONDITIONAL_JUMP)  ; LAB_00462dcf
    MOV dword ptr [EBP + -0x8],0x0      ; 00462dc8
        ;   Label: LAB_00462dc8
    MOV EAX,dword ptr [EBP + -0xc]      ; 00462dcf
        ;   Label: LAB_00462dcf
    MOV dword ptr [EBP + -0x1c],EAX     ; 00462dd2
    JMP 0x00462ddd                      ; 00462dd5
        ;   XREF to: 00462ddd (UNCONDITIONAL_JUMP)  ; LAB_00462ddd
    MOV EAX,dword ptr [EBP + -0x1c]     ; 00462dd7
        ;   Label: LAB_00462dd7
    INC dword ptr [EBP + -0x1c]         ; 00462dda
    IMUL EAX,dword ptr [EBP + 0x14],0x184 ; 00462ddd
        ;   Label: LAB_00462ddd
    MOV EDX,dword ptr [EBP + -0xc]      ; 00462de4
    ADD EDX,dword ptr [EAX + 0x16e99b4] ; 00462de7 | DAT_016e99b4
    MOV EAX,EDX                         ; 00462ded
    CMP EAX,dword ptr [EBP + -0x1c]     ; 00462def
    JLE 0x00462e72                      ; 00462df2
        ;   XREF to: 00462e72 (CONDITIONAL_JUMP)  ; LAB_00462e72
    IMUL ECX,dword ptr [EBP + 0x14],0x184 ; 00462df8
    MOV EAX,dword ptr [EBP + -0x1c]     ; 00462dff
    MOV EDX,dword ptr [EBP + -0x1c]     ; 00462e02
    SAR EDX,0x1f                        ; 00462e05
    IDIV dword ptr [ECX + 0x16e99b4]    ; 00462e08 | DAT_016e99b4
    SHL EDX,0x2                         ; 00462e0e
    IMUL EAX,dword ptr [EBP + 0x14],0x184 ; 00462e11
    ADD EAX,EDX                         ; 00462e18
    MOV EAX,dword ptr [EAX + 0x16e99c8] ; 00462e1a | DAT_016e99c8
    CMP EAX,dword ptr [EBP + -0x2c]     ; 00462e20
    JZ 0x00462e52                       ; 00462e23
        ;   XREF to: 00462e52 (CONDITIONAL_JUMP)  ; LAB_00462e52
    IMUL ECX,dword ptr [EBP + 0x14],0x184 ; 00462e25
    MOV EAX,dword ptr [EBP + -0x1c]     ; 00462e2c
    MOV EDX,dword ptr [EBP + -0x1c]     ; 00462e2f
    SAR EDX,0x1f                        ; 00462e32
    IDIV dword ptr [ECX + 0x16e99b4]    ; 00462e35 | DAT_016e99b4
    SHL EDX,0x2                         ; 00462e3b
    IMUL EAX,dword ptr [EBP + 0x14],0x184 ; 00462e3e
    ADD EAX,EDX                         ; 00462e45
    MOV EAX,dword ptr [EAX + 0x16e99c8] ; 00462e47 | DAT_016e99c8
    CMP EAX,dword ptr [EBP + -0x28]     ; 00462e4d
    JNZ 0x00462e6d                      ; 00462e50
        ;   XREF to: 00462e6d (CONDITIONAL_JUMP)  ; LAB_00462e6d
    IMUL ECX,dword ptr [EBP + 0x14],0x184 ; 00462e52
        ;   Label: LAB_00462e52
    MOV EAX,dword ptr [EBP + -0x1c]     ; 00462e59
    MOV EDX,dword ptr [EBP + -0x1c]     ; 00462e5c
    SAR EDX,0x1f                        ; 00462e5f
    IDIV dword ptr [ECX + 0x16e99b4]    ; 00462e62 | DAT_016e99b4
    MOV dword ptr [EBP + -0x10],EDX     ; 00462e68
    JMP 0x00462e72                      ; 00462e6b
        ;   XREF to: 00462e72 (UNCONDITIONAL_JUMP)  ; LAB_00462e72
    JMP 0x00462dd7                      ; 00462e6d
        ;   XREF to: 00462dd7 (UNCONDITIONAL_JUMP)  ; LAB_00462dd7
        ;   Label: LAB_00462e6d
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 00462e72
        ;   Label: LAB_00462e72
    MOV EAX,dword ptr [EBP + -0xc]      ; 00462e79
    SHL EAX,0x2                         ; 00462e7c
    ADD EAX,EDX                         ; 00462e7f
    MOV dword ptr [EBP + -0x1c],0x0     ; 00462e81
    MOV EDX,dword ptr [EBP + -0x1c]     ; 00462e88
    SHL EDX,0x2                         ; 00462e8b
    MOV EAX,dword ptr [EAX + 0x16e99c8] ; 00462e8e | DAT_016e99c8
    MOV dword ptr [EDX + EBP*0x1 + -0x48],EAX ; 00462e94
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 00462e98
    MOV EAX,dword ptr [EBP + -0xc]      ; 00462e9f
    SHL EAX,0x2                         ; 00462ea2
    ADD EAX,EDX                         ; 00462ea5
    MOV EDX,dword ptr [EBP + -0x1c]     ; 00462ea7
    SHL EDX,0x2                         ; 00462eaa
    FLD float ptr [EAX + 0x16e9a08]     ; 00462ead | DAT_016e9a08
    FSTP float ptr [EDX + EBP*0x1 + -0x64] ; 00462eb3
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 00462eb7
    MOV EAX,dword ptr [EBP + -0xc]      ; 00462ebe
    SHL EAX,0x2                         ; 00462ec1
    ADD EAX,EDX                         ; 00462ec4
    MOV EDX,dword ptr [EBP + -0x1c]     ; 00462ec6
    SHL EDX,0x2                         ; 00462ec9
    FLD float ptr [EAX + 0x16e9a48]     ; 00462ecc | DAT_016e9a48
    FSTP float ptr [EDX + EBP*0x1 + -0x80] ; 00462ed2
    IMUL EAX,dword ptr [EBP + 0x14],0x184 ; 00462ed6
    CMP dword ptr [EAX + 0x16e99b4],0x4 ; 00462edd | DAT_016e99b4
    JNZ 0x00462f71                      ; 00462ee4
        ;   XREF to: 00462f71 (CONDITIONAL_JUMP)  ; LAB_00462f71
    IMUL EBX,dword ptr [EBP + 0x14],0x184 ; 00462eea
    MOV EDX,dword ptr [EBP + -0xc]      ; 00462ef1
    INC EDX                             ; 00462ef4
    MOV ECX,0x4                         ; 00462ef5
    MOV EAX,EDX                         ; 00462efa
    SAR EDX,0x1f                        ; 00462efc
    IDIV ECX                            ; 00462eff
    SHL EDX,0x2                         ; 00462f01
    ADD EDX,EBX                         ; 00462f04
    INC dword ptr [EBP + -0x1c]         ; 00462f06
    MOV ECX,dword ptr [EBP + -0x1c]     ; 00462f09
    SHL ECX,0x2                         ; 00462f0c
    MOV EDX,dword ptr [EDX + 0x16e99c8] ; 00462f0f | DAT_016e99c8
    MOV dword ptr [ECX + EBP*0x1 + -0x48],EDX ; 00462f15
    IMUL EBX,dword ptr [EBP + 0x14],0x184 ; 00462f19
    MOV EDX,dword ptr [EBP + -0xc]      ; 00462f20
    INC EDX                             ; 00462f23
    MOV ECX,0x4                         ; 00462f24
    MOV EAX,EDX                         ; 00462f29
    SAR EDX,0x1f                        ; 00462f2b
    IDIV ECX                            ; 00462f2e
    SHL EDX,0x2                         ; 00462f30
    ADD EDX,EBX                         ; 00462f33
    MOV ECX,dword ptr [EBP + -0x1c]     ; 00462f35
    SHL ECX,0x2                         ; 00462f38
    FLD float ptr [EDX + 0x16e9a08]     ; 00462f3b | DAT_016e9a08
    FSTP float ptr [ECX + EBP*0x1 + -0x64] ; 00462f41
    IMUL EBX,dword ptr [EBP + 0x14],0x184 ; 00462f45
    MOV EDX,dword ptr [EBP + -0xc]      ; 00462f4c
    INC EDX                             ; 00462f4f
    MOV ECX,0x4                         ; 00462f50
    MOV EAX,EDX                         ; 00462f55
    SAR EDX,0x1f                        ; 00462f57
    IDIV ECX                            ; 00462f5a
    SHL EDX,0x2                         ; 00462f5c
    ADD EDX,EBX                         ; 00462f5f
    MOV ECX,dword ptr [EBP + -0x1c]     ; 00462f61
    SHL ECX,0x2                         ; 00462f64
    FLD float ptr [EDX + 0x16e9a48]     ; 00462f67 | DAT_016e9a48
    FSTP float ptr [ECX + EBP*0x1 + -0x80] ; 00462f6d
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 00462f71
        ;   Label: LAB_00462f71
    MOV EAX,dword ptr [EBP + -0x10]     ; 00462f78
    SHL EAX,0x2                         ; 00462f7b
    ADD EAX,EDX                         ; 00462f7e
    INC dword ptr [EBP + -0x1c]         ; 00462f80
    MOV EDX,dword ptr [EBP + -0x1c]     ; 00462f83
    SHL EDX,0x2                         ; 00462f86
    MOV EAX,dword ptr [EAX + 0x16e99c8] ; 00462f89 | DAT_016e99c8
    MOV dword ptr [EDX + EBP*0x1 + -0x48],EAX ; 00462f8f
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 00462f93
    MOV EAX,dword ptr [EBP + -0x10]     ; 00462f9a
    SHL EAX,0x2                         ; 00462f9d
    ADD EAX,EDX                         ; 00462fa0
    MOV EDX,dword ptr [EBP + -0x1c]     ; 00462fa2
    SHL EDX,0x2                         ; 00462fa5
    FLD float ptr [EAX + 0x16e9a08]     ; 00462fa8 | DAT_016e9a08
    FSTP float ptr [EDX + EBP*0x1 + -0x64] ; 00462fae
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 00462fb2
    MOV EAX,dword ptr [EBP + -0x10]     ; 00462fb9
    SHL EAX,0x2                         ; 00462fbc
    ADD EAX,EDX                         ; 00462fbf
    MOV EDX,dword ptr [EBP + -0x1c]     ; 00462fc1
    SHL EDX,0x2                         ; 00462fc4
    FLD float ptr [EAX + 0x16e9a48]     ; 00462fc7 | DAT_016e9a48
    FSTP float ptr [EDX + EBP*0x1 + -0x80] ; 00462fcd
    IMUL EDX,dword ptr [EBP + 0x18],0x184 ; 00462fd1
    MOV EAX,dword ptr [EBP + -0x8]      ; 00462fd8
    SHL EAX,0x2                         ; 00462fdb
    ADD EAX,EDX                         ; 00462fde
    INC dword ptr [EBP + -0x1c]         ; 00462fe0
    MOV EDX,dword ptr [EBP + -0x1c]     ; 00462fe3
    SHL EDX,0x2                         ; 00462fe6
    MOV EAX,dword ptr [EAX + 0x16e99c8] ; 00462fe9 | DAT_016e99c8
    MOV dword ptr [EDX + EBP*0x1 + -0x48],EAX ; 00462fef
    IMUL EDX,dword ptr [EBP + 0x18],0x184 ; 00462ff3
    MOV EAX,dword ptr [EBP + -0x8]      ; 00462ffa
    SHL EAX,0x2                         ; 00462ffd
    ADD EAX,EDX                         ; 00463000
    MOV EDX,dword ptr [EBP + -0x1c]     ; 00463002
    SHL EDX,0x2                         ; 00463005
    FLD float ptr [EAX + 0x16e9a08]     ; 00463008 | DAT_016e9a08
    FSTP float ptr [EDX + EBP*0x1 + -0x64] ; 0046300e
    IMUL EDX,dword ptr [EBP + 0x18],0x184 ; 00463012
    MOV EAX,dword ptr [EBP + -0x8]      ; 00463019
    SHL EAX,0x2                         ; 0046301c
    ADD EAX,EDX                         ; 0046301f
    MOV EDX,dword ptr [EBP + -0x1c]     ; 00463021
    SHL EDX,0x2                         ; 00463024
    FLD float ptr [EAX + 0x16e9a48]     ; 00463027 | DAT_016e9a48
    FSTP float ptr [EDX + EBP*0x1 + -0x80] ; 0046302d
    IMUL EAX,dword ptr [EBP + 0x18],0x184 ; 00463031
    CMP dword ptr [EAX + 0x16e99b4],0x4 ; 00463038 | DAT_016e99b4
    JNZ 0x004630cc                      ; 0046303f
        ;   XREF to: 004630cc (CONDITIONAL_JUMP)  ; LAB_004630cc
    IMUL EBX,dword ptr [EBP + 0x18],0x184 ; 00463045
    MOV EDX,dword ptr [EBP + -0x8]      ; 0046304c
    INC EDX                             ; 0046304f
    MOV ECX,0x4                         ; 00463050
    MOV EAX,EDX                         ; 00463055
    SAR EDX,0x1f                        ; 00463057
    IDIV ECX                            ; 0046305a
    SHL EDX,0x2                         ; 0046305c
    ADD EDX,EBX                         ; 0046305f
    INC dword ptr [EBP + -0x1c]         ; 00463061
    MOV ECX,dword ptr [EBP + -0x1c]     ; 00463064
    SHL ECX,0x2                         ; 00463067
    MOV EDX,dword ptr [EDX + 0x16e99c8] ; 0046306a | DAT_016e99c8
    MOV dword ptr [ECX + EBP*0x1 + -0x48],EDX ; 00463070
    IMUL EBX,dword ptr [EBP + 0x18],0x184 ; 00463074
    MOV EDX,dword ptr [EBP + -0x8]      ; 0046307b
    INC EDX                             ; 0046307e
    MOV ECX,0x4                         ; 0046307f
    MOV EAX,EDX                         ; 00463084
    SAR EDX,0x1f                        ; 00463086
    IDIV ECX                            ; 00463089
    SHL EDX,0x2                         ; 0046308b
    ADD EDX,EBX                         ; 0046308e
    MOV ECX,dword ptr [EBP + -0x1c]     ; 00463090
    SHL ECX,0x2                         ; 00463093
    FLD float ptr [EDX + 0x16e9a08]     ; 00463096 | DAT_016e9a08
    FSTP float ptr [ECX + EBP*0x1 + -0x64] ; 0046309c
    IMUL EBX,dword ptr [EBP + 0x18],0x184 ; 004630a0
    MOV EDX,dword ptr [EBP + -0x8]      ; 004630a7
    INC EDX                             ; 004630aa
    MOV ECX,0x4                         ; 004630ab
    MOV EAX,EDX                         ; 004630b0
    SAR EDX,0x1f                        ; 004630b2
    IDIV ECX                            ; 004630b5
    SHL EDX,0x2                         ; 004630b7
    ADD EDX,EBX                         ; 004630ba
    MOV ECX,dword ptr [EBP + -0x1c]     ; 004630bc
    SHL ECX,0x2                         ; 004630bf
    FLD float ptr [EDX + 0x16e9a48]     ; 004630c2 | DAT_016e9a48
    FSTP float ptr [ECX + EBP*0x1 + -0x80] ; 004630c8
    IMUL ECX,dword ptr [EBP + 0x14],0x184 ; 004630cc
        ;   Label: LAB_004630cc
    MOV EDX,dword ptr [EBP + -0x10]     ; 004630d3
    INC EDX                             ; 004630d6
    MOV EAX,EDX                         ; 004630d7
    SAR EDX,0x1f                        ; 004630d9
    IDIV dword ptr [ECX + 0x16e99b4]    ; 004630dc | DAT_016e99b4
    SHL EDX,0x2                         ; 004630e2
    IMUL EAX,dword ptr [EBP + 0x14],0x184 ; 004630e5
    ADD EDX,EAX                         ; 004630ec
    INC dword ptr [EBP + -0x1c]         ; 004630ee
    MOV EAX,dword ptr [EBP + -0x1c]     ; 004630f1
    SHL EAX,0x2                         ; 004630f4
    MOV EDX,dword ptr [EDX + 0x16e99c8] ; 004630f7 | DAT_016e99c8
    MOV dword ptr [EAX + EBP*0x1 + -0x48],EDX ; 004630fd
    IMUL ECX,dword ptr [EBP + 0x14],0x184 ; 00463101
    MOV EDX,dword ptr [EBP + -0x10]     ; 00463108
    INC EDX                             ; 0046310b
    MOV EAX,EDX                         ; 0046310c
    SAR EDX,0x1f                        ; 0046310e
    IDIV dword ptr [ECX + 0x16e99b4]    ; 00463111 | DAT_016e99b4
    SHL EDX,0x2                         ; 00463117
    IMUL EAX,dword ptr [EBP + 0x14],0x184 ; 0046311a
    ADD EAX,EDX                         ; 00463121
    MOV EDX,dword ptr [EBP + -0x1c]     ; 00463123
    SHL EDX,0x2                         ; 00463126
    FLD float ptr [EAX + 0x16e9a08]     ; 00463129 | DAT_016e9a08
    FSTP float ptr [EDX + EBP*0x1 + -0x64] ; 0046312f
    IMUL ECX,dword ptr [EBP + 0x14],0x184 ; 00463133
    MOV EDX,dword ptr [EBP + -0x10]     ; 0046313a
    INC EDX                             ; 0046313d
    MOV EAX,EDX                         ; 0046313e
    SAR EDX,0x1f                        ; 00463140
    IDIV dword ptr [ECX + 0x16e99b4]    ; 00463143 | DAT_016e99b4
    SHL EDX,0x2                         ; 00463149
    IMUL EAX,dword ptr [EBP + 0x14],0x184 ; 0046314c
    ADD EAX,EDX                         ; 00463153
    MOV EDX,dword ptr [EBP + -0x1c]     ; 00463155
    SHL EDX,0x2                         ; 00463158
    FLD float ptr [EAX + 0x16e9a48]     ; 0046315b | DAT_016e9a48
    FSTP float ptr [EDX + EBP*0x1 + -0x80] ; 00463161
    MOV dword ptr [EBP + -0x4],0x4333fae1 ; 00463165
    MOV dword ptr [EBP + -0x20],0x0     ; 0046316c
    MOV EAX,dword ptr [EBP + -0x1c]     ; 00463173
    INC EAX                             ; 00463176
    MOV dword ptr [EBP + -0x14],EAX     ; 00463177
    MOV dword ptr [EBP + -0x1c],0x0     ; 0046317a
    JMP 0x00463189                      ; 00463181
        ;   XREF to: 00463189 (UNCONDITIONAL_JUMP)  ; LAB_00463189
    MOV EAX,dword ptr [EBP + -0x1c]     ; 00463183
        ;   Label: LAB_00463183
    INC dword ptr [EBP + -0x1c]         ; 00463186
    MOV EAX,dword ptr [EBP + -0x14]     ; 00463189
        ;   Label: LAB_00463189
    SUB EAX,0x2                         ; 0046318c
    CMP EAX,dword ptr [EBP + -0x1c]     ; 0046318f
    JLE 0x0046321a                      ; 00463192
        ;   XREF to: 0046321a (CONDITIONAL_JUMP)  ; LAB_0046321a
    MOV EAX,dword ptr [EBP + -0x1c]     ; 00463198
    SHL EAX,0x2                         ; 0046319b
    MOV EAX,dword ptr [EAX + EBP*0x1 + -0x48] ; 0046319e
    MOV dword ptr [EBP + 0xfffffeb4],EAX ; 004631a2
    MOV EAX,dword ptr [EBP + -0x1c]     ; 004631a8
    SHL EAX,0x2                         ; 004631ab
    MOV EAX,dword ptr [EAX + EBP*0x1 + -0x44] ; 004631ae
    MOV dword ptr [EBP + 0xfffffeb8],EAX ; 004631b2
    MOV EAX,dword ptr [EBP + -0x1c]     ; 004631b8
    SHL EAX,0x2                         ; 004631bb
    MOV EAX,dword ptr [EAX + EBP*0x1 + -0x40] ; 004631be
    MOV dword ptr [EBP + 0xfffffebc],EAX ; 004631c2
    MOV EAX,dword ptr [EBP + 0xfffffebc] ; 004631c8
    PUSH EAX                            ; 004631ce
    MOV EAX,dword ptr [EBP + 0xfffffeb8] ; 004631cf
    PUSH EAX                            ; 004631d5
    MOV EAX,dword ptr [EBP + 0xfffffeb4] ; 004631d6
    PUSH EAX                            ; 004631dc
    CALL shape_design.c_calculateVertexAngle_FUN_00462050 ; 004631dd
        ;   XREF to: 00462050 (UNCONDITIONAL_CALL)  ; double shape_design.c_calculateVertexAngle_FUN_00462050(int vertex1_index, int vertex2_index, int vertex3_index)
    MOV dword ptr [EBP + 0xfffffdf4],EAX ; 004631e2
    MOV dword ptr [EBP + 0xfffffdf8],EDX ; 004631e8
    FLD double ptr [EBP + 0xfffffdf4]   ; 004631ee
    ADD ESP,0xc                         ; 004631f4
    FLD float ptr [EBP + -0x4]          ; 004631f7
    FCOMPP                              ; 004631fa
    FNSTSW AX                           ; 004631fc
    SAHF                                ; 004631fe
    JNC 0x00463215                      ; 004631ff
        ;   XREF to: 00463215 (CONDITIONAL_JUMP)  ; LAB_00463215
    MOV EDX,dword ptr [EBP + -0x20]     ; 00463201
    SHL EDX,0x2                         ; 00463204
    MOV EAX,dword ptr [EBP + -0x1c]     ; 00463207
    INC EAX                             ; 0046320a
    MOV dword ptr [EDX + EBP*0x1 + -0x2c],EAX ; 0046320b
    MOV EAX,dword ptr [EBP + -0x20]     ; 0046320f
    INC dword ptr [EBP + -0x20]         ; 00463212
    JMP 0x00463183                      ; 00463215
        ;   XREF to: 00463183 (UNCONDITIONAL_JUMP)  ; LAB_00463183
        ;   Label: LAB_00463215
    MOV EAX,dword ptr [EBP + -0x14]     ; 0046321a
        ;   Label: LAB_0046321a
    SHL EAX,0x2                         ; 0046321d
    MOV EAX,dword ptr [EAX + EBP*0x1 + -0x50] ; 00463220
    MOV dword ptr [EBP + 0xfffffeb4],EAX ; 00463224
    MOV EAX,dword ptr [EBP + -0x14]     ; 0046322a
    SHL EAX,0x2                         ; 0046322d
    MOV EAX,dword ptr [EAX + EBP*0x1 + -0x4c] ; 00463230
    MOV dword ptr [EBP + 0xfffffeb8],EAX ; 00463234
    MOV EAX,dword ptr [EBP + -0x48]     ; 0046323a
    MOV dword ptr [EBP + 0xfffffebc],EAX ; 0046323d
    MOV EAX,dword ptr [EBP + 0xfffffebc] ; 00463243
    PUSH EAX                            ; 00463249
    MOV EAX,dword ptr [EBP + 0xfffffeb8] ; 0046324a
    PUSH EAX                            ; 00463250
    MOV EAX,dword ptr [EBP + 0xfffffeb4] ; 00463251
    PUSH EAX                            ; 00463257
    CALL shape_design.c_calculateVertexAngle_FUN_00462050 ; 00463258
        ;   XREF to: 00462050 (UNCONDITIONAL_CALL)  ; double shape_design.c_calculateVertexAngle_FUN_00462050(int vertex1_index, int vertex2_index, int vertex3_index)
    MOV dword ptr [EBP + 0xfffffdf4],EAX ; 0046325d
    MOV dword ptr [EBP + 0xfffffdf8],EDX ; 00463263
    FLD double ptr [EBP + 0xfffffdf4]   ; 00463269
    ADD ESP,0xc                         ; 0046326f
    FLD float ptr [EBP + -0x4]          ; 00463272
    FCOMPP                              ; 00463275
    FNSTSW AX                           ; 00463277
    SAHF                                ; 00463279
    JNC 0x00463290                      ; 0046327a
        ;   XREF to: 00463290 (CONDITIONAL_JUMP)  ; LAB_00463290
    MOV EDX,dword ptr [EBP + -0x20]     ; 0046327c
    SHL EDX,0x2                         ; 0046327f
    MOV EAX,dword ptr [EBP + -0x14]     ; 00463282
    DEC EAX                             ; 00463285
    MOV dword ptr [EDX + EBP*0x1 + -0x2c],EAX ; 00463286
    MOV EAX,dword ptr [EBP + -0x20]     ; 0046328a
    INC dword ptr [EBP + -0x20]         ; 0046328d
    MOV EAX,dword ptr [EBP + -0x14]     ; 00463290
        ;   Label: LAB_00463290
    SHL EAX,0x2                         ; 00463293
    MOV EAX,dword ptr [EAX + EBP*0x1 + -0x4c] ; 00463296
    MOV dword ptr [EBP + 0xfffffeb4],EAX ; 0046329a
    MOV EAX,dword ptr [EBP + -0x48]     ; 004632a0
    MOV dword ptr [EBP + 0xfffffeb8],EAX ; 004632a3
    MOV EAX,dword ptr [EBP + -0x44]     ; 004632a9
    MOV dword ptr [EBP + 0xfffffebc],EAX ; 004632ac
    MOV EAX,dword ptr [EBP + 0xfffffebc] ; 004632b2
    PUSH EAX                            ; 004632b8
    MOV EAX,dword ptr [EBP + 0xfffffeb8] ; 004632b9
    PUSH EAX                            ; 004632bf
    MOV EAX,dword ptr [EBP + 0xfffffeb4] ; 004632c0
    PUSH EAX                            ; 004632c6
    CALL shape_design.c_calculateVertexAngle_FUN_00462050 ; 004632c7
        ;   XREF to: 00462050 (UNCONDITIONAL_CALL)  ; double shape_design.c_calculateVertexAngle_FUN_00462050(int vertex1_index, int vertex2_index, int vertex3_index)
    MOV dword ptr [EBP + 0xfffffdf4],EAX ; 004632cc
    MOV dword ptr [EBP + 0xfffffdf8],EDX ; 004632d2
    FLD double ptr [EBP + 0xfffffdf4]   ; 004632d8
    ADD ESP,0xc                         ; 004632de
    FLD float ptr [EBP + -0x4]          ; 004632e1
    FCOMPP                              ; 004632e4
    FNSTSW AX                           ; 004632e6
    SAHF                                ; 004632e8
    JNC 0x004632ff                      ; 004632e9
        ;   XREF to: 004632ff (CONDITIONAL_JUMP)  ; LAB_004632ff
    MOV EAX,dword ptr [EBP + -0x20]     ; 004632eb
    SHL EAX,0x2                         ; 004632ee
    MOV dword ptr [EAX + EBP*0x1 + -0x2c],0x0 ; 004632f1
    MOV EAX,dword ptr [EBP + -0x20]     ; 004632f9
    INC dword ptr [EBP + -0x20]         ; 004632fc
    CMP dword ptr [EBP + -0x20],0x3     ; 004632ff
        ;   Label: LAB_004632ff
    JLE 0x00463335                      ; 00463303
        ;   XREF to: 00463335 (CONDITIONAL_JUMP)  ; LAB_00463335
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 00463305
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    PUSH 0x0                            ; 0046330a
    PUSH 0x0                            ; 0046330c
    MOV EAX,0x61c01a                    ; 0046330e | = "ERROR: More than 3 vertices to delete!"
    PUSH EAX                            ; 00463313 | = "ERROR: More than 3 vertices to delete!"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00463314
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00463319
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0046331c
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 00463321
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 00463326
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 0046332b
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    JMP 0x0046359c                      ; 00463330
        ;   XREF to: 0046359c (UNCONDITIONAL_JUMP)  ; LAB_0046359c
    MOV dword ptr [EBP + -0x1c],0x0     ; 00463335
        ;   Label: LAB_00463335
    JMP 0x00463344                      ; 0046333c
        ;   XREF to: 00463344 (UNCONDITIONAL_JUMP)  ; LAB_00463344
    MOV EAX,dword ptr [EBP + -0x1c]     ; 0046333e
        ;   Label: LAB_0046333e
    INC dword ptr [EBP + -0x1c]         ; 00463341
    MOV EAX,dword ptr [EBP + -0x1c]     ; 00463344
        ;   Label: LAB_00463344
    CMP EAX,dword ptr [EBP + -0x20]     ; 00463347
    JGE 0x004633b4                      ; 0046334a
        ;   XREF to: 004633b4 (CONDITIONAL_JUMP)  ; LAB_004633b4
    MOV EAX,dword ptr [EBP + -0x1c]     ; 0046334c
    SHL EAX,0x2                         ; 0046334f
    MOV EAX,dword ptr [EAX + EBP*0x1 + -0x2c] ; 00463352
    SUB EAX,dword ptr [EBP + -0x1c]     ; 00463356
    MOV dword ptr [EBP + -0x18],EAX     ; 00463359
    JMP 0x00463364                      ; 0046335c
        ;   XREF to: 00463364 (UNCONDITIONAL_JUMP)  ; LAB_00463364
    MOV EAX,dword ptr [EBP + -0x18]     ; 0046335e
        ;   Label: LAB_0046335e
    INC dword ptr [EBP + -0x18]         ; 00463361
    MOV EAX,dword ptr [EBP + -0x14]     ; 00463364
        ;   Label: LAB_00463364
    DEC EAX                             ; 00463367
    CMP EAX,dword ptr [EBP + -0x18]     ; 00463368
    JLE 0x004633ab                      ; 0046336b
        ;   XREF to: 004633ab (CONDITIONAL_JUMP)  ; LAB_004633ab
    MOV EAX,dword ptr [EBP + -0x18]     ; 0046336d
    SHL EAX,0x2                         ; 00463370
    MOV EDX,dword ptr [EBP + -0x18]     ; 00463373
    SHL EDX,0x2                         ; 00463376
    MOV EAX,dword ptr [EAX + EBP*0x1 + -0x44] ; 00463379
    MOV dword ptr [EDX + EBP*0x1 + -0x48],EAX ; 0046337d
    MOV EAX,dword ptr [EBP + -0x18]     ; 00463381
    SHL EAX,0x2                         ; 00463384
    MOV EDX,dword ptr [EBP + -0x18]     ; 00463387
    SHL EDX,0x2                         ; 0046338a
    FLD float ptr [EAX + EBP*0x1 + -0x60] ; 0046338d
    FSTP float ptr [EDX + EBP*0x1 + -0x64] ; 00463391
    MOV EAX,dword ptr [EBP + -0x18]     ; 00463395
    SHL EAX,0x2                         ; 00463398
    MOV EDX,dword ptr [EBP + -0x18]     ; 0046339b
    SHL EDX,0x2                         ; 0046339e
    FLD float ptr [EAX + EBP*0x1 + -0x7c] ; 004633a1
    FSTP float ptr [EDX + EBP*0x1 + -0x80] ; 004633a5
    JMP 0x0046335e                      ; 004633a9
        ;   XREF to: 0046335e (UNCONDITIONAL_JUMP)  ; LAB_0046335e
    MOV EAX,dword ptr [EBP + -0x14]     ; 004633ab
        ;   Label: LAB_004633ab
    ADD dword ptr [EBP + -0x14],-0x1    ; 004633ae
    JMP 0x0046333e                      ; 004633b2
        ;   XREF to: 0046333e (UNCONDITIONAL_JUMP)  ; LAB_0046333e
    MOV EAX,dword ptr [EBP + -0x40]     ; 004633b4
        ;   Label: LAB_004633b4
    PUSH EAX                            ; 004633b7
    MOV EAX,dword ptr [EBP + -0x44]     ; 004633b8
    PUSH EAX                            ; 004633bb
    MOV EAX,dword ptr [EBP + -0x48]     ; 004633bc
    PUSH EAX                            ; 004633bf
    CALL shape_design.c_calculateVertexAngle_FUN_00462050 ; 004633c0
        ;   XREF to: 00462050 (UNCONDITIONAL_CALL)  ; double shape_design.c_calculateVertexAngle_FUN_00462050(int vertex1_index, int vertex2_index, int vertex3_index)
    MOV dword ptr [EBP + 0xfffffdf4],EAX ; 004633c5
    MOV dword ptr [EBP + 0xfffffdf8],EDX ; 004633cb
    FLD double ptr [EBP + 0xfffffdf4]   ; 004633d1
    ADD ESP,0xc                         ; 004633d7
    FCOMP double ptr [0x0061c046]       ; 004633da | g_WindingOrderAngleThreshold
    FNSTSW AX                           ; 004633e0
    SAHF                                ; 004633e2
    JBE 0x00463478                      ; 004633e3
        ;   XREF to: 00463478 (CONDITIONAL_JUMP)  ; LAB_00463478
    MOV EAX,dword ptr [EBP + -0x48]     ; 004633e9
    MOV dword ptr [EBP + -0x30],EAX     ; 004633ec
    MOV EAX,dword ptr [EBP + -0x64]     ; 004633ef
    MOV dword ptr [EBP + -0x4c],EAX     ; 004633f2
    MOV EAX,dword ptr [EBP + -0x80]     ; 004633f5
    MOV dword ptr [EBP + -0x68],EAX     ; 004633f8
    MOV dword ptr [EBP + -0x1c],0x0     ; 004633fb
    JMP 0x0046340a                      ; 00463402
        ;   XREF to: 0046340a (UNCONDITIONAL_JUMP)  ; LAB_0046340a
    MOV EAX,dword ptr [EBP + -0x1c]     ; 00463404
        ;   Label: LAB_00463404
    INC dword ptr [EBP + -0x1c]         ; 00463407
    MOV EAX,dword ptr [EBP + -0x14]     ; 0046340a
        ;   Label: LAB_0046340a
    DEC EAX                             ; 0046340d
    CMP EAX,dword ptr [EBP + -0x1c]     ; 0046340e
    JLE 0x00463451                      ; 00463411
        ;   XREF to: 00463451 (CONDITIONAL_JUMP)  ; LAB_00463451
    MOV EAX,dword ptr [EBP + -0x1c]     ; 00463413
    SHL EAX,0x2                         ; 00463416
    MOV EDX,dword ptr [EBP + -0x1c]     ; 00463419
    SHL EDX,0x2                         ; 0046341c
    MOV EAX,dword ptr [EAX + EBP*0x1 + -0x44] ; 0046341f
    MOV dword ptr [EDX + EBP*0x1 + -0x48],EAX ; 00463423
    MOV EAX,dword ptr [EBP + -0x1c]     ; 00463427
    SHL EAX,0x2                         ; 0046342a
    MOV EDX,dword ptr [EBP + -0x1c]     ; 0046342d
    SHL EDX,0x2                         ; 00463430
    FLD float ptr [EAX + EBP*0x1 + -0x60] ; 00463433
    FSTP float ptr [EDX + EBP*0x1 + -0x64] ; 00463437
    MOV EAX,dword ptr [EBP + -0x1c]     ; 0046343b
    SHL EAX,0x2                         ; 0046343e
    MOV EDX,dword ptr [EBP + -0x1c]     ; 00463441
    SHL EDX,0x2                         ; 00463444
    FLD float ptr [EAX + EBP*0x1 + -0x7c] ; 00463447
    FSTP float ptr [EDX + EBP*0x1 + -0x80] ; 0046344b
    JMP 0x00463404                      ; 0046344f
        ;   XREF to: 00463404 (UNCONDITIONAL_JUMP)  ; LAB_00463404
    MOV EDX,dword ptr [EBP + -0x1c]     ; 00463451
        ;   Label: LAB_00463451
    SHL EDX,0x2                         ; 00463454
    MOV EAX,dword ptr [EBP + -0x30]     ; 00463457
    MOV dword ptr [EDX + EBP*0x1 + -0x48],EAX ; 0046345a
    MOV EDX,dword ptr [EBP + -0x1c]     ; 0046345e
    SHL EDX,0x2                         ; 00463461
    MOV EAX,dword ptr [EBP + -0x4c]     ; 00463464
    MOV dword ptr [EDX + EBP*0x1 + -0x64],EAX ; 00463467
    MOV EDX,dword ptr [EBP + -0x1c]     ; 0046346b
    SHL EDX,0x2                         ; 0046346e
    MOV EAX,dword ptr [EBP + -0x68]     ; 00463471
    MOV dword ptr [EDX + EBP*0x1 + -0x80],EAX ; 00463474
    IMUL EAX,dword ptr [EBP + 0x14],0x184 ; 00463478
        ;   Label: LAB_00463478
    CMP dword ptr [EAX + 0x16e99b4],0x3 ; 0046347f | DAT_016e99b4
    JNZ 0x00463498                      ; 00463486
        ;   XREF to: 00463498 (CONDITIONAL_JUMP)  ; LAB_00463498
    IMUL EAX,dword ptr [EBP + 0x18],0x184 ; 00463488
    CMP dword ptr [EAX + 0x16e99b4],0x3 ; 0046348f | DAT_016e99b4
    JZ 0x0046349a                       ; 00463496
        ;   XREF to: 0046349a (CONDITIONAL_JUMP)  ; LAB_0046349a
    JMP 0x004634a7                      ; 00463498
        ;   XREF to: 004634a7 (UNCONDITIONAL_JUMP)  ; LAB_004634a7
        ;   Label: LAB_00463498
    CMP dword ptr [EBP + -0x14],0x3     ; 0046349a
        ;   Label: LAB_0046349a
    JZ 0x004634a5                       ; 0046349e
        ;   XREF to: 004634a5 (CONDITIONAL_JUMP)  ; LAB_004634a5
    JMP 0x0046359c                      ; 004634a0
        ;   XREF to: 0046359c (UNCONDITIONAL_JUMP)  ; LAB_0046359c
    JMP 0x004634ba                      ; 004634a5
        ;   XREF to: 004634ba (UNCONDITIONAL_JUMP)  ; LAB_004634ba
        ;   Label: LAB_004634a5
    CMP dword ptr [EBP + -0x14],0x3     ; 004634a7
        ;   Label: LAB_004634a7
    JZ 0x004634b3                       ; 004634ab
        ;   XREF to: 004634b3 (CONDITIONAL_JUMP)  ; LAB_004634b3
    CMP dword ptr [EBP + -0x14],0x4     ; 004634ad
    JNZ 0x004634b5                      ; 004634b1
        ;   XREF to: 004634b5 (CONDITIONAL_JUMP)  ; LAB_004634b5
    JMP 0x004634ba                      ; 004634b3
        ;   XREF to: 004634ba (UNCONDITIONAL_JUMP)  ; LAB_004634ba
        ;   Label: LAB_004634b3
    JMP 0x0046359c                      ; 004634b5
        ;   XREF to: 0046359c (UNCONDITIONAL_JUMP)  ; LAB_0046359c
        ;   Label: LAB_004634b5
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 004634ba
        ;   Label: LAB_004634ba
    MOV EAX,dword ptr [EBP + -0x14]     ; 004634c1
    MOV dword ptr [EDX + 0x16e99b4],EAX ; 004634c4 | DAT_016e99b4
    MOV dword ptr [EBP + -0x1c],0x0     ; 004634ca
    JMP 0x004634d9                      ; 004634d1
        ;   XREF to: 004634d9 (UNCONDITIONAL_JUMP)  ; LAB_004634d9
    MOV EAX,dword ptr [EBP + -0x1c]     ; 004634d3
        ;   Label: LAB_004634d3
    INC dword ptr [EBP + -0x1c]         ; 004634d6
    MOV EAX,dword ptr [EBP + -0x1c]     ; 004634d9
        ;   Label: LAB_004634d9
    CMP EAX,dword ptr [EBP + -0x14]     ; 004634dc
    JGE 0x00463540                      ; 004634df
        ;   XREF to: 00463540 (CONDITIONAL_JUMP)  ; LAB_00463540
    MOV ECX,dword ptr [EBP + -0x1c]     ; 004634e1
    SHL ECX,0x2                         ; 004634e4
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 004634e7
    MOV EAX,dword ptr [EBP + -0x1c]     ; 004634ee
    SHL EAX,0x2                         ; 004634f1
    ADD EDX,EAX                         ; 004634f4
    MOV EAX,dword ptr [ECX + EBP*0x1 + -0x48] ; 004634f6
    MOV dword ptr [EDX + 0x16e99c8],EAX ; 004634fa | DAT_016e99c8
    MOV ECX,dword ptr [EBP + -0x1c]     ; 00463500
    SHL ECX,0x2                         ; 00463503
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 00463506
    MOV EAX,dword ptr [EBP + -0x1c]     ; 0046350d
    SHL EAX,0x2                         ; 00463510
    ADD EAX,EDX                         ; 00463513
    FLD float ptr [ECX + EBP*0x1 + -0x64] ; 00463515
    FSTP float ptr [EAX + 0x16e9a08]    ; 00463519 | DAT_016e9a08
    MOV ECX,dword ptr [EBP + -0x1c]     ; 0046351f
    SHL ECX,0x2                         ; 00463522
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 00463525
    MOV EAX,dword ptr [EBP + -0x1c]     ; 0046352c
    SHL EAX,0x2                         ; 0046352f
    ADD EAX,EDX                         ; 00463532
    FLD float ptr [ECX + EBP*0x1 + -0x80] ; 00463534
    FSTP float ptr [EAX + 0x16e9a48]    ; 00463538 | DAT_016e9a48
    JMP 0x004634d3                      ; 0046353e
        ;   XREF to: 004634d3 (UNCONDITIONAL_JUMP)  ; LAB_004634d3
    IMUL EAX,dword ptr [EBP + 0x14],0x184 ; 00463540
        ;   Label: LAB_00463540
    MOV EDX,0x16e9910                   ; 00463547 | g_ModelPolygonData
    ADD EAX,EDX                         ; 0046354c
    PUSH EAX                            ; 0046354e
    CALL shape_design.c_calculatePolygonNormal_FUN_0045caa0 ; 0046354f
        ;   XREF to: 0045caa0 (UNCONDITIONAL_CALL)  ; void shape_design.c_calculatePolygonNormal_FUN_0045caa0(SShapeEditorPolygon * polygon)
    ADD ESP,0x4                         ; 00463554
    MOV EAX,dword ptr [EBP + 0x18]      ; 00463557
    MOV dword ptr [EBP + -0x1c],EAX     ; 0046355a
    JMP 0x00463565                      ; 0046355d
        ;   XREF to: 00463565 (UNCONDITIONAL_JUMP)  ; LAB_00463565
    MOV EAX,dword ptr [EBP + -0x1c]     ; 0046355f
        ;   Label: LAB_0046355f
    INC dword ptr [EBP + -0x1c]         ; 00463562
    MOV EAX,[0x016e990c]                ; 00463565 | g_PolygonCount
        ;   Label: LAB_00463565
    DEC EAX                             ; 0046356a
    CMP EAX,dword ptr [EBP + -0x1c]     ; 0046356b
    JLE 0x00463596                      ; 0046356e
        ;   XREF to: 00463596 (CONDITIONAL_JUMP)  ; LAB_00463596
    MOV EAX,dword ptr [EBP + -0x1c]     ; 00463570
    INC EAX                             ; 00463573
    IMUL EAX,EAX,0x184                  ; 00463574
    IMUL ESI,dword ptr [EBP + -0x1c],0x184 ; 0046357a
    MOV ECX,0x61                        ; 00463581
    LEA EDI,[ESI + 0x16e9910]           ; 00463586 | g_ModelPolygonData
    LEA ESI,[EAX + 0x16e9910]           ; 0046358c | g_ModelPolygonData
    MOVSD.REP ES:EDI,ESI                ; 00463592 | g_ModelPolygonData | DAT_016e9914
    JMP 0x0046355f                      ; 00463594
        ;   XREF to: 0046355f (UNCONDITIONAL_JUMP)  ; LAB_0046355f
    DEC dword ptr [0x016e990c]          ; 00463596 | g_PolygonCount
        ;   Label: LAB_00463596
    MOV ESP,EBP                         ; 0046359c
        ;   Label: LAB_0046359c
    POP EBP                             ; 0046359e
    POP EDI                             ; 0046359f
    POP ESI                             ; 004635a0
    POP EBX                             ; 004635a1
    RET                                 ; 004635a2

