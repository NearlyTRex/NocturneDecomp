; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined shape_design.c_showPolygonDetailsList_FUN_0045d9c0()
;
; Local Variables:
; undefined        Stack[-0x11c]:1  local_11c
; undefined1       Stack[-0x11b]:1  local_11b
; undefined        Stack[-0x7c]:1  local_7c
; undefined1       Stack[-0x7b]:1  local_7b
; undefined        Stack[-0x2c]:1  local_2c
; undefined1       Stack[-0x2b]:1  local_2b
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_Poly_d_0061b416
;   TerminatedCString s_d_0061b420
;   TerminatedCString s_Part_s_0061b424
;   TerminatedCString s_Color_d_0061b42f
;   int g_WindowHeight = 0xc8
;   int g_PolygonCount
;   undefined4 DAT_016e99b4
;   undefined4 DAT_016e99c8
;   undefined4 DAT_016e9a88
;   undefined4 DAT_016e9a8c
;   SModelPartName[500] g_ModelPartNames
;   int g_CurrentPartIndex
;   int g_WireframeMode
;
; Called Functions:
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   engine_2d.c_clearInputAndWait_FUN_00403260
;   engine_2d.c_drawText_FUN_00401fd0
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
;   wincore_windll.cpp_clearScreen_FUN_005b3e70
;   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045d9c0
        ;   Label: shape_design.c_showPolygonDetailsList_FUN_0045d9c0
    PUSH ESI                            ; 0045d9c1
    PUSH EDI                            ; 0045d9c2
    PUSH EBP                            ; 0045d9c3
    MOV EBP,ESP                         ; 0045d9c4
    SUB ESP,0x10c                       ; 0045d9c6
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 0045d9cc | void engine_2d.c_clearInputAndWait_FUN_00403260()
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)
    MOV dword ptr [EBP + -0xc],0x0      ; 0045d9d1
    JMP 0x0045d9f2                      ; 0045d9d8 | LAB_0045d9f2
        ;   XREF to: 0045d9f2 (UNCONDITIONAL_JUMP)
    MOV ECX,0xb                         ; 0045d9da
        ;   Label: LAB_0045d9da
    MOV EAX,[0x00679398]                ; 0045d9df | int g_WindowHeight
    MOV EDX,dword ptr [0x00679398]      ; 0045d9e4 | int g_WindowHeight
    SAR EDX,0x1f                        ; 0045d9ea
    IDIV ECX                            ; 0045d9ed
    ADD dword ptr [EBP + -0xc],EAX      ; 0045d9ef
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045d9f2
        ;   Label: LAB_0045d9f2
    CMP EAX,dword ptr [0x016e990c]      ; 0045d9f5 | int g_PolygonCount
    JGE 0x0045dbd1                      ; 0045d9fb | LAB_0045dbd1
        ;   XREF to: 0045dbd1 (CONDITIONAL_JUMP)
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 0045da01 | void wincore_windll.cpp_clearScreen_FUN_005b3e70()
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
    MOV dword ptr [EBP + -0x10],0x0     ; 0045da06
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045da0d
    MOV dword ptr [EBP + -0x8],EAX      ; 0045da10
    JMP 0x0045da1b                      ; 0045da13 | LAB_0045da1b
        ;   XREF to: 0045da1b (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x8]      ; 0045da15
        ;   Label: LAB_0045da15
    INC dword ptr [EBP + -0x8]          ; 0045da18
    MOV ECX,0xb                         ; 0045da1b
        ;   Label: LAB_0045da1b
    MOV EAX,[0x00679398]                ; 0045da20 | int g_WindowHeight
    MOV EDX,dword ptr [0x00679398]      ; 0045da25 | int g_WindowHeight
    SAR EDX,0x1f                        ; 0045da2b
    IDIV ECX                            ; 0045da2e
    ADD EAX,dword ptr [EBP + -0xc]      ; 0045da30
    CMP EAX,dword ptr [EBP + -0x8]      ; 0045da33
    JLE 0x0045dbc2                      ; 0045da36 | LAB_0045dbc2
        ;   XREF to: 0045dbc2 (CONDITIONAL_JUMP)
    CMP dword ptr [0x01e66158],0x0      ; 0045da3c | int g_WireframeMode
    JZ 0x0045da4e                       ; 0045da43 | LAB_0045da4e
        ;   XREF to: 0045da4e (CONDITIONAL_JUMP)
    CMP dword ptr [0x01e6614c],-0x1     ; 0045da45 | int g_CurrentPartIndex
    JNZ 0x0045da50                      ; 0045da4c | LAB_0045da50
        ;   XREF to: 0045da50 (CONDITIONAL_JUMP)
    JMP 0x0045da6a                      ; 0045da4e | LAB_0045da6a
        ;   Label: LAB_0045da4e
        ;   XREF to: 0045da6a (UNCONDITIONAL_JUMP)
    IMUL EAX,dword ptr [EBP + -0x8],0x184 ; 0045da50
        ;   Label: LAB_0045da50
    MOV EAX,dword ptr [EAX + 0x16e9a88] ; 0045da57 | DAT_016e9a88
    CMP EAX,dword ptr [0x01e6614c]      ; 0045da5d | int g_CurrentPartIndex
    JZ 0x0045da6a                       ; 0045da63 | LAB_0045da6a
        ;   XREF to: 0045da6a (CONDITIONAL_JUMP)
    JMP 0x0045dbbd                      ; 0045da65 | LAB_0045dbbd
        ;   XREF to: 0045dbbd (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x8]      ; 0045da6a
        ;   Label: LAB_0045da6a
    CMP EAX,dword ptr [0x016e990c]      ; 0045da6d | int g_PolygonCount
    JGE 0x0045dbbd                      ; 0045da73 | LAB_0045dbbd
        ;   XREF to: 0045dbbd (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x8]      ; 0045da79
    PUSH EAX                            ; 0045da7c
    MOV EAX,0x61b416                    ; 0045da7d | = "Poly %d :" | s_Poly_d_0061b416 = Poly %d :
    PUSH EAX                            ; 0045da82 | = "Poly %d :" | s_Poly_d_0061b416 = Poly %d :
    LEA EAX,[EBP + 0xfffffef4]          ; 0045da83
    PUSH EAX                            ; 0045da89
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0045da8a | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0045da8f
    MOV dword ptr [EBP + -0x4],0x0      ; 0045da92
    JMP 0x0045daa1                      ; 0045da99 | LAB_0045daa1
        ;   XREF to: 0045daa1 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045da9b
        ;   Label: LAB_0045da9b
    INC dword ptr [EBP + -0x4]          ; 0045da9e
    IMUL EDX,dword ptr [EBP + -0x8],0x184 ; 0045daa1
        ;   Label: LAB_0045daa1
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045daa8
    CMP EAX,dword ptr [EDX + 0x16e99b4] ; 0045daab | DAT_016e99b4
    JGE 0x0045db07                      ; 0045dab1 | LAB_0045db07
        ;   XREF to: 0045db07 (CONDITIONAL_JUMP)
    IMUL ESI,dword ptr [EBP + -0x8],0x184 ; 0045dab3
    MOV EDI,dword ptr [EBP + -0x4]      ; 0045daba
    SHL EDI,0x2                         ; 0045dabd
    ADD ESI,EDI                         ; 0045dac0
    PUSH dword ptr [ESI + 0x16e99c8]    ; 0045dac2 | DAT_016e99c8
    MOV ESI,0x61b420                    ; 0045dac8 | = " %d" | s_d_0061b420 =  %d
    PUSH ESI                            ; 0045dacd | = " %d" | s_d_0061b420 =  %d
    LEA ESI,[EBP + -0x1c]               ; 0045dace
    PUSH ESI                            ; 0045dad1
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0045dad2 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0045dad7
    LEA ESI,[EBP + -0x1c]               ; 0045dada
    LEA EDI,[EBP + 0xfffffef4]          ; 0045dadd
    PUSH EDI                            ; 0045dae3
    SUB ECX,ECX                         ; 0045dae4
    DEC ECX                             ; 0045dae6
    MOV AL,0x0                          ; 0045dae7
    SCASB.REPNE ES:EDI                  ; 0045dae9
    DEC EDI                             ; 0045daeb
    MOV AL,byte ptr [ESI]               ; 0045daec
        ;   Label: LAB_0045daec
    MOV byte ptr [EDI],AL               ; 0045daee
    CMP AL,0x0                          ; 0045daf0
    JZ 0x0045db04                       ; 0045daf2 | LAB_0045db04
        ;   XREF to: 0045db04 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 0045daf4
    ADD ESI,0x2                         ; 0045daf7
    MOV byte ptr [EDI + 0x1],AL         ; 0045dafa
    ADD EDI,0x2                         ; 0045dafd
    CMP AL,0x0                          ; 0045db00
    JNZ 0x0045daec                      ; 0045db02 | LAB_0045daec
        ;   XREF to: 0045daec (CONDITIONAL_JUMP)
    POP EDI                             ; 0045db04
        ;   Label: LAB_0045db04
    JMP 0x0045da9b                      ; 0045db05 | LAB_0045da9b
        ;   XREF to: 0045da9b (UNCONDITIONAL_JUMP)
    IMUL ESI,dword ptr [EBP + -0x8],0x184 ; 0045db07
        ;   Label: LAB_0045db07
    IMUL ESI,dword ptr [ESI + 0x16e9a88],0x14 ; 0045db0e | DAT_016e9a88
    MOV EDI,0x1e50190                   ; 0045db15 | SModelPartName[500] g_ModelPartNames
    ADD ESI,EDI                         ; 0045db1a
    PUSH ESI                            ; 0045db1c
    MOV ESI,0x61b424                    ; 0045db1d | = " Part : %s" | s_Part_s_0061b424 =  Part : %s
    PUSH ESI                            ; 0045db22 | = " Part : %s" | s_Part_s_0061b424 =  Part : %s
    LEA ESI,[EBP + -0x6c]               ; 0045db23
    PUSH ESI                            ; 0045db26
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0045db27 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0045db2c
    LEA ESI,[EBP + -0x6c]               ; 0045db2f
    LEA EDI,[EBP + 0xfffffef4]          ; 0045db32
    PUSH EDI                            ; 0045db38
    SUB ECX,ECX                         ; 0045db39
    DEC ECX                             ; 0045db3b
    MOV AL,0x0                          ; 0045db3c
    SCASB.REPNE ES:EDI                  ; 0045db3e
    DEC EDI                             ; 0045db40
    MOV AL,byte ptr [ESI]               ; 0045db41
        ;   Label: LAB_0045db41
    MOV byte ptr [EDI],AL               ; 0045db43
    CMP AL,0x0                          ; 0045db45
    JZ 0x0045db59                       ; 0045db47 | LAB_0045db59
        ;   XREF to: 0045db59 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 0045db49
    ADD ESI,0x2                         ; 0045db4c
    MOV byte ptr [EDI + 0x1],AL         ; 0045db4f
    ADD EDI,0x2                         ; 0045db52
    CMP AL,0x0                          ; 0045db55
    JNZ 0x0045db41                      ; 0045db57 | LAB_0045db41
        ;   XREF to: 0045db41 (CONDITIONAL_JUMP)
    POP EDI                             ; 0045db59
        ;   Label: LAB_0045db59
    IMUL ESI,dword ptr [EBP + -0x8],0x184 ; 0045db5a
    PUSH dword ptr [ESI + 0x16e9a8c]    ; 0045db61 | DAT_016e9a8c
    MOV ESI,0x61b42f                    ; 0045db67 | = " Color : %d" | s_Color_d_0061b42f =  Color : %d
    PUSH ESI                            ; 0045db6c | = " Color : %d" | s_Color_d_0061b42f =  Color : %d
    LEA ESI,[EBP + -0x6c]               ; 0045db6d
    PUSH ESI                            ; 0045db70
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0045db71 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0045db76
    LEA ESI,[EBP + -0x6c]               ; 0045db79
    LEA EDI,[EBP + 0xfffffef4]          ; 0045db7c
    PUSH EDI                            ; 0045db82
    SUB ECX,ECX                         ; 0045db83
    DEC ECX                             ; 0045db85
    MOV AL,0x0                          ; 0045db86
    SCASB.REPNE ES:EDI                  ; 0045db88
    DEC EDI                             ; 0045db8a
    MOV AL,byte ptr [ESI]               ; 0045db8b
        ;   Label: LAB_0045db8b
    MOV byte ptr [EDI],AL               ; 0045db8d
    CMP AL,0x0                          ; 0045db8f
    JZ 0x0045dba3                       ; 0045db91 | LAB_0045dba3
        ;   XREF to: 0045dba3 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 0045db93
    ADD ESI,0x2                         ; 0045db96
    MOV byte ptr [EDI + 0x1],AL         ; 0045db99
    ADD EDI,0x2                         ; 0045db9c
    CMP AL,0x0                          ; 0045db9f
    JNZ 0x0045db8b                      ; 0045dba1 | LAB_0045db8b
        ;   XREF to: 0045db8b (CONDITIONAL_JUMP)
    POP EDI                             ; 0045dba3
        ;   Label: LAB_0045dba3
    MOV ESI,dword ptr [EBP + -0x10]     ; 0045dba4
    PUSH ESI                            ; 0045dba7
    PUSH 0x0                            ; 0045dba8
    LEA ESI,[EBP + 0xfffffef4]          ; 0045dbaa
    PUSH ESI                            ; 0045dbb0
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0045dbb1 | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0045dbb6
    ADD dword ptr [EBP + -0x10],0xb     ; 0045dbb9
    JMP 0x0045da15                      ; 0045dbbd | LAB_0045da15
        ;   Label: LAB_0045dbbd
        ;   XREF to: 0045da15 (UNCONDITIONAL_JUMP)
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0045dbc2 | void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
        ;   Label: LAB_0045dbc2
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 0045dbc7 | int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
    JMP 0x0045d9da                      ; 0045dbcc | LAB_0045d9da
        ;   XREF to: 0045d9da (UNCONDITIONAL_JUMP)
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 0045dbd1 | void engine_2d.c_clearInputAndWait_FUN_00403260()
        ;   Label: LAB_0045dbd1
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)
    MOV ESP,EBP                         ; 0045dbd6
    POP EBP                             ; 0045dbd8
    POP EDI                             ; 0045dbd9
    POP ESI                             ; 0045dbda
    POP EBX                             ; 0045dbdb
    RET                                 ; 0045dbdc

