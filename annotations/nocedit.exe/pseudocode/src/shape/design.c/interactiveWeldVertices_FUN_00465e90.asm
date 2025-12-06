; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_design.c_interactiveWeldVertices_FUN_00465e90(int polygon_index, float tolerance)
;
; Parameters:
; int              Stack[0x4]:4   polygon_index
; float            Stack[0x8]:4   tolerance
; Local Variables:
; undefined1       Stack[-0x70]:1  local_70
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_design.c_polygonToolModeManager_FUN_00464c90 at 00464eea
;
; Referenced Globals:
;   TerminatedCString s_Enter_weld_points_a_b_we_0061c694
;   TerminatedCString s_d_d_0061c6bb
;   TerminatedCString s_Invalid_point_0061c6c1
;   TerminatedCString s_Point_not_on_polygon_0061c6d0
;   int g_VertexCount
;   SVertexData[20000] g_LoadedVertices
;   undefined4 DAT_01626410
;   undefined4 g_LoadedVertices[0].vertex.z
;   undefined4 DAT_016e99b4
;   undefined4 DAT_016e99c8
;
; Called Functions:
;   crt_stdio.c_sscanf_FUN_0060013c
;   engine_2d.c_drawText_FUN_00401fd0
;   engine_2d.c_getInputWithPrompt_FUN_004032c0
;   shape_design.c_removeUnusedVertices_FUN_00463830
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
;   wincore_windll.cpp_clearScreen_FUN_005b3e70
;   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00465e90
        ;   Label: shape_design.c_interactiveWeldVertices_FUN_00465e90
    PUSH ESI                            ; 00465e91
    PUSH EDI                            ; 00465e92
    PUSH EBP                            ; 00465e93
    MOV EBP,ESP                         ; 00465e94
    SUB ESP,0x60                        ; 00465e96
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 00465e9c | void wincore_windll.cpp_clearScreen_FUN_005b3e70()
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
    MOV ECX,0x61c694                    ; 00465ea1 | = "Enter weld points a,b (weld a -> b) : " | s_Enter_weld_points_a_b_we_0061c694 = Enter weld points a,b (weld a -> b) :
    PUSH ECX                            ; 00465ea6 | = "Enter weld points a,b (weld a -> b) : " | s_Enter_weld_points_a_b_we_0061c694 = Enter weld points a,b (weld a -> b) :
    PUSH 0x0                            ; 00465ea7
    PUSH 0x0                            ; 00465ea9
    PUSH 0x32                           ; 00465eab
    LEA ECX,[EBP + -0x60]               ; 00465ead
    PUSH ECX                            ; 00465eb0
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 00465eb1 | int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 00465eb6
    LEA EDI,[EBP + -0x60]               ; 00465eb9
    SUB ECX,ECX                         ; 00465ebc
    DEC ECX                             ; 00465ebe
    XOR EAX,EAX                         ; 00465ebf
    SCASB.REPNE ES:EDI                  ; 00465ec1
    NOT ECX                             ; 00465ec3
    DEC ECX                             ; 00465ec5
    TEST ECX,ECX                        ; 00465ec6
    JNZ 0x00465ecf                      ; 00465ec8 | LAB_00465ecf
        ;   XREF to: 00465ecf (CONDITIONAL_JUMP)
    JMP 0x00466032                      ; 00465eca | LAB_00466032
        ;   XREF to: 00466032 (UNCONDITIONAL_JUMP)
    LEA EAX,[EBP + -0xc]                ; 00465ecf
        ;   Label: LAB_00465ecf
    PUSH EAX                            ; 00465ed2
    LEA EAX,[EBP + -0x10]               ; 00465ed3
    PUSH EAX                            ; 00465ed6
    MOV EAX,0x61c6bb                    ; 00465ed7 | = "%d,%d" | s_d_d_0061c6bb = %d,%d
    PUSH EAX                            ; 00465edc | = "%d,%d" | s_d_d_0061c6bb = %d,%d
    LEA EAX,[EBP + -0x60]               ; 00465edd
    PUSH EAX                            ; 00465ee0
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 00465ee1 | int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00465ee6
    MOV dword ptr [EBP + -0x8],EAX      ; 00465ee9
    CMP dword ptr [EBP + -0x8],0x2      ; 00465eec
    JZ 0x00465ef7                       ; 00465ef0 | LAB_00465ef7
        ;   XREF to: 00465ef7 (CONDITIONAL_JUMP)
    JMP 0x00466032                      ; 00465ef2 | LAB_00466032
        ;   XREF to: 00466032 (UNCONDITIONAL_JUMP)
    CMP dword ptr [EBP + -0x10],0x0     ; 00465ef7
        ;   Label: LAB_00465ef7
    JL 0x00465f03                       ; 00465efb | LAB_00465f03
        ;   XREF to: 00465f03 (CONDITIONAL_JUMP)
    CMP dword ptr [EBP + -0xc],0x0      ; 00465efd
    JGE 0x00465f05                      ; 00465f01 | LAB_00465f05
        ;   XREF to: 00465f05 (CONDITIONAL_JUMP)
    JMP 0x00465f10                      ; 00465f03 | LAB_00465f10
        ;   Label: LAB_00465f03
        ;   XREF to: 00465f10 (UNCONDITIONAL_JUMP)
    MOV EAX,[0x01626408]                ; 00465f05 | int g_VertexCount
        ;   Label: LAB_00465f05
    DEC EAX                             ; 00465f0a
    CMP EAX,dword ptr [EBP + -0x10]     ; 00465f0b
    JGE 0x00465f12                      ; 00465f0e | LAB_00465f12
        ;   XREF to: 00465f12 (CONDITIONAL_JUMP)
    JMP 0x00465f1d                      ; 00465f10 | LAB_00465f1d
        ;   Label: LAB_00465f10
        ;   XREF to: 00465f1d (UNCONDITIONAL_JUMP)
    MOV EAX,[0x01626408]                ; 00465f12 | int g_VertexCount
        ;   Label: LAB_00465f12
    DEC EAX                             ; 00465f17
    CMP EAX,dword ptr [EBP + -0xc]      ; 00465f18
    JGE 0x00465f3e                      ; 00465f1b | LAB_00465f3e
        ;   XREF to: 00465f3e (CONDITIONAL_JUMP)
    PUSH 0x16                           ; 00465f1d
        ;   Label: LAB_00465f1d
    PUSH 0x0                            ; 00465f1f
    MOV EAX,0x61c6c1                    ; 00465f21 | = "Invalid point." | s_Invalid_point_0061c6c1 = Invalid point.
    PUSH EAX                            ; 00465f26 | = "Invalid point." | s_Invalid_point_0061c6c1 = Invalid point.
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00465f27 | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00465f2c
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 00465f2f | void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 00465f34 | int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
    JMP 0x00466032                      ; 00465f39 | LAB_00466032
        ;   XREF to: 00466032 (UNCONDITIONAL_JUMP)
    MOV dword ptr [EBP + -0x4],0xffffffff ; 00465f3e
        ;   Label: LAB_00465f3e
    MOV dword ptr [EBP + -0x8],0x0      ; 00465f45
    JMP 0x00465f54                      ; 00465f4c | LAB_00465f54
        ;   XREF to: 00465f54 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x8]      ; 00465f4e
        ;   Label: LAB_00465f4e
    INC dword ptr [EBP + -0x8]          ; 00465f51
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 00465f54
        ;   Label: LAB_00465f54
    MOV EAX,dword ptr [EBP + -0x8]      ; 00465f5b
    CMP EAX,dword ptr [EDX + 0x16e99b4] ; 00465f5e | DAT_016e99b4
    JGE 0x00465f8a                      ; 00465f64 | LAB_00465f8a
        ;   XREF to: 00465f8a (CONDITIONAL_JUMP)
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 00465f66
    MOV EAX,dword ptr [EBP + -0x8]      ; 00465f6d
    SHL EAX,0x2                         ; 00465f70
    ADD EDX,EAX                         ; 00465f73
    MOV EAX,dword ptr [EBP + -0x10]     ; 00465f75
    CMP EAX,dword ptr [EDX + 0x16e99c8] ; 00465f78 | DAT_016e99c8
    JNZ 0x00465f88                      ; 00465f7e | LAB_00465f88
        ;   XREF to: 00465f88 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x8]      ; 00465f80
    MOV dword ptr [EBP + -0x4],EAX      ; 00465f83
    JMP 0x00465f8a                      ; 00465f86 | LAB_00465f8a
        ;   XREF to: 00465f8a (UNCONDITIONAL_JUMP)
    JMP 0x00465f4e                      ; 00465f88 | LAB_00465f4e
        ;   Label: LAB_00465f88
        ;   XREF to: 00465f4e (UNCONDITIONAL_JUMP)
    CMP dword ptr [EBP + -0x4],-0x1     ; 00465f8a
        ;   Label: LAB_00465f8a
    JNZ 0x00465fb1                      ; 00465f8e | LAB_00465fb1
        ;   XREF to: 00465fb1 (CONDITIONAL_JUMP)
    PUSH 0x16                           ; 00465f90
    PUSH 0x0                            ; 00465f92
    MOV EAX,0x61c6d0                    ; 00465f94 | = "Point not on polygon." | s_Point_not_on_polygon_0061c6d0 = Point not on polygon.
    PUSH EAX                            ; 00465f99 | = "Point not on polygon." | s_Point_not_on_polygon_0061c6d0 = Point not on polygon.
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00465f9a | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00465f9f
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 00465fa2 | void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 00465fa7 | int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
    JMP 0x00466032                      ; 00465fac | LAB_00466032
        ;   XREF to: 00466032 (UNCONDITIONAL_JUMP)
    IMUL EDX,dword ptr [EBP + -0x10],0x14 ; 00465fb1
        ;   Label: LAB_00465fb1
    IMUL EAX,dword ptr [EBP + -0xc],0x14 ; 00465fb5
    FLD float ptr [EDX + 0x162640c]     ; 00465fb9 | SVertexData[20000] g_LoadedVertices
    FSUB float ptr [EAX + 0x162640c]    ; 00465fbf | SVertexData[20000] g_LoadedVertices
    FABS                                ; 00465fc5
    FLD float ptr [EBP + 0x18]          ; 00465fc7
    FCOMPP                              ; 00465fca
    FNSTSW AX                           ; 00465fcc
    SAHF                                ; 00465fce
    JBE 0x00465ff1                      ; 00465fcf | LAB_00465ff1
        ;   XREF to: 00465ff1 (CONDITIONAL_JUMP)
    IMUL EDX,dword ptr [EBP + -0x10],0x14 ; 00465fd1
    IMUL EAX,dword ptr [EBP + -0xc],0x14 ; 00465fd5
    FLD float ptr [EDX + 0x1626410]     ; 00465fd9 | DAT_01626410
    FSUB float ptr [EAX + 0x1626410]    ; 00465fdf | DAT_01626410
    FABS                                ; 00465fe5
    FLD float ptr [EBP + 0x18]          ; 00465fe7
    FCOMPP                              ; 00465fea
    FNSTSW AX                           ; 00465fec
    SAHF                                ; 00465fee
    JA 0x00465ff3                       ; 00465fef | LAB_00465ff3
        ;   XREF to: 00465ff3 (CONDITIONAL_JUMP)
    JMP 0x00466013                      ; 00465ff1 | LAB_00466013
        ;   Label: LAB_00465ff1
        ;   XREF to: 00466013 (UNCONDITIONAL_JUMP)
    IMUL EDX,dword ptr [EBP + -0x10],0x14 ; 00465ff3
        ;   Label: LAB_00465ff3
    IMUL EAX,dword ptr [EBP + -0xc],0x14 ; 00465ff7
    FLD float ptr [EDX + 0x1626414]     ; 00465ffb | g_LoadedVertices[0].vertex.z
    FSUB float ptr [EAX + 0x1626414]    ; 00466001 | g_LoadedVertices[0].vertex.z
    FABS                                ; 00466007
    FLD float ptr [EBP + 0x18]          ; 00466009
    FCOMPP                              ; 0046600c
    FNSTSW AX                           ; 0046600e
    SAHF                                ; 00466010
    JA 0x00466015                       ; 00466011 | LAB_00466015
        ;   XREF to: 00466015 (CONDITIONAL_JUMP)
    JMP 0x00466032                      ; 00466013 | LAB_00466032
        ;   Label: LAB_00466013
        ;   XREF to: 00466032 (UNCONDITIONAL_JUMP)
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 00466015
        ;   Label: LAB_00466015
    MOV EAX,dword ptr [EBP + -0x4]      ; 0046601c
    SHL EAX,0x2                         ; 0046601f
    ADD EDX,EAX                         ; 00466022
    MOV EAX,dword ptr [EBP + -0xc]      ; 00466024
    MOV dword ptr [EDX + 0x16e99c8],EAX ; 00466027 | DAT_016e99c8
    CALL shape_design.c_removeUnusedVertices_FUN_00463830 ; 0046602d | void shape_design.c_removeUnusedVertices_FUN_00463830()
        ;   XREF to: 00463830 (UNCONDITIONAL_CALL)
    MOV ESP,EBP                         ; 00466032
        ;   Label: LAB_00466032
    POP EBP                             ; 00466034
    POP EDI                             ; 00466035
    POP ESI                             ; 00466036
    POP EBX                             ; 00466037
    RET                                 ; 00466038

