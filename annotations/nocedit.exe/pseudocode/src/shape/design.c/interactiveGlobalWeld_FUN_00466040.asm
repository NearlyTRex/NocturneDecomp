; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_design.c_interactiveGlobalWeld_FUN_00466040(float tolerance)
;
; Parameters:
; float            Stack[0x4]:4   tolerance
; Local Variables:
; undefined4       Stack[-0x74]:4  local_74
; undefined1       Stack[-0x70]:1  local_70
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_design.c_polygonToolModeManager_FUN_00464c90 at 00464efd
;
; Referenced Globals:
;   TerminatedCString s_Enter_weld_point_0061c6e6
;   TerminatedCString s_Invalid_point_0061c6fa
;   int g_VertexCount
;   SVertexData[20000] g_LoadedVertices
;   undefined4 DAT_01626410
;   undefined4 g_LoadedVertices[0].vertex.z
;   int g_PolygonCount
;   SShapeEditorPolygon[20000] g_ModelPolygonData
;   undefined4 DAT_016e99b4
;   undefined4 DAT_016e99c8
;   undefined4 DAT_016e9a94
;
; Called Functions:
;   crt_stdlib.c_atoi_FUN_005ffef0
;   engine_2d.c_drawText_FUN_00401fd0
;   engine_2d.c_getInputWithPrompt_FUN_004032c0
;   shape_design.c_removeUnusedVertices_FUN_00463830
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
;   wincore_windll.cpp_clearScreen_FUN_005b3e70
;   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00466040
        ;   Label: shape_design.c_interactiveGlobalWeld_FUN_00466040
    PUSH ESI                            ; 00466041
    PUSH EDI                            ; 00466042
    PUSH EBP                            ; 00466043
    MOV EBP,ESP                         ; 00466044
    SUB ESP,0x64                        ; 00466046
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 0046604c | void wincore_windll.cpp_clearScreen_FUN_005b3e70()
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
    MOV ECX,0x61c6e6                    ; 00466051 | = "Enter weld point : " | s_Enter_weld_point_0061c6e6 = Enter weld point :
    PUSH ECX                            ; 00466056 | = "Enter weld point : " | s_Enter_weld_point_0061c6e6 = Enter weld point :
    PUSH 0x0                            ; 00466057
    PUSH 0x0                            ; 00466059
    PUSH 0x32                           ; 0046605b
    LEA ECX,[EBP + -0x60]               ; 0046605d
    PUSH ECX                            ; 00466060
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 00466061 | int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 00466066
    LEA EDI,[EBP + -0x60]               ; 00466069
    SUB ECX,ECX                         ; 0046606c
    DEC ECX                             ; 0046606e
    XOR EAX,EAX                         ; 0046606f
    SCASB.REPNE ES:EDI                  ; 00466071
    NOT ECX                             ; 00466073
    DEC ECX                             ; 00466075
    TEST ECX,ECX                        ; 00466076
    JNZ 0x0046607f                      ; 00466078 | LAB_0046607f
        ;   XREF to: 0046607f (CONDITIONAL_JUMP)
    JMP 0x004661c3                      ; 0046607a | LAB_004661c3
        ;   XREF to: 004661c3 (UNCONDITIONAL_JUMP)
    LEA EAX,[EBP + -0x60]               ; 0046607f
        ;   Label: LAB_0046607f
    PUSH EAX                            ; 00466082
    CALL crt_stdlib.c_atoi_FUN_005ffef0 ; 00466083 | int crt_stdlib.c_atoi_FUN_005ffef0(char * string_ptr)
        ;   XREF to: 005ffef0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00466088
    MOV dword ptr [EBP + -0x4],EAX      ; 0046608b
    CMP dword ptr [EBP + -0x4],0x0      ; 0046608e
    JL 0x0046609f                       ; 00466092 | LAB_0046609f
        ;   XREF to: 0046609f (CONDITIONAL_JUMP)
    MOV EAX,[0x01626408]                ; 00466094 | int g_VertexCount
    DEC EAX                             ; 00466099
    CMP EAX,dword ptr [EBP + -0x4]      ; 0046609a
    JGE 0x004660c0                      ; 0046609d | LAB_004660c0
        ;   XREF to: 004660c0 (CONDITIONAL_JUMP)
    PUSH 0x16                           ; 0046609f
        ;   Label: LAB_0046609f
    PUSH 0x0                            ; 004660a1
    MOV EAX,0x61c6fa                    ; 004660a3 | = "Invalid point." | s_Invalid_point_0061c6fa = Invalid point.
    PUSH EAX                            ; 004660a8 | = "Invalid point." | s_Invalid_point_0061c6fa = Invalid point.
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004660a9 | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004660ae
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 004660b1 | void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 004660b6 | int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
    JMP 0x004661c3                      ; 004660bb | LAB_004661c3
        ;   XREF to: 004661c3 (UNCONDITIONAL_JUMP)
    MOV dword ptr [EBP + -0x10],0x0     ; 004660c0
        ;   Label: LAB_004660c0
    JMP 0x004660cf                      ; 004660c7 | LAB_004660cf
        ;   XREF to: 004660cf (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x10]     ; 004660c9
        ;   Label: LAB_004660c9
    INC dword ptr [EBP + -0x10]         ; 004660cc
    MOV EAX,dword ptr [EBP + -0x10]     ; 004660cf
        ;   Label: LAB_004660cf
    CMP EAX,dword ptr [0x01626408]      ; 004660d2 | int g_VertexCount
    JGE 0x004661be                      ; 004660d8 | LAB_004661be
        ;   XREF to: 004661be (CONDITIONAL_JUMP)
    IMUL EDX,dword ptr [EBP + -0x4],0x14 ; 004660de
    IMUL EAX,dword ptr [EBP + -0x10],0x14 ; 004660e2
    FLD float ptr [EDX + 0x162640c]     ; 004660e6 | SVertexData[20000] g_LoadedVertices
    FSUB float ptr [EAX + 0x162640c]    ; 004660ec | SVertexData[20000] g_LoadedVertices
    FABS                                ; 004660f2
    FLD float ptr [EBP + 0x14]          ; 004660f4
    FCOMPP                              ; 004660f7
    FNSTSW AX                           ; 004660f9
    SAHF                                ; 004660fb
    JBE 0x0046611e                      ; 004660fc | LAB_0046611e
        ;   XREF to: 0046611e (CONDITIONAL_JUMP)
    IMUL EDX,dword ptr [EBP + -0x4],0x14 ; 004660fe
    IMUL EAX,dword ptr [EBP + -0x10],0x14 ; 00466102
    FLD float ptr [EDX + 0x1626410]     ; 00466106 | DAT_01626410
    FSUB float ptr [EAX + 0x1626410]    ; 0046610c | DAT_01626410
    FABS                                ; 00466112
    FLD float ptr [EBP + 0x14]          ; 00466114
    FCOMPP                              ; 00466117
    FNSTSW AX                           ; 00466119
    SAHF                                ; 0046611b
    JA 0x00466120                       ; 0046611c | LAB_00466120
        ;   XREF to: 00466120 (CONDITIONAL_JUMP)
    JMP 0x00466140                      ; 0046611e | LAB_00466140
        ;   Label: LAB_0046611e
        ;   XREF to: 00466140 (UNCONDITIONAL_JUMP)
    IMUL EDX,dword ptr [EBP + -0x4],0x14 ; 00466120
        ;   Label: LAB_00466120
    IMUL EAX,dword ptr [EBP + -0x10],0x14 ; 00466124
    FLD float ptr [EDX + 0x1626414]     ; 00466128 | g_LoadedVertices[0].vertex.z
    FSUB float ptr [EAX + 0x1626414]    ; 0046612e | g_LoadedVertices[0].vertex.z
    FABS                                ; 00466134
    FLD float ptr [EBP + 0x14]          ; 00466136
    FCOMPP                              ; 00466139
    FNSTSW AX                           ; 0046613b
    SAHF                                ; 0046613d
    JA 0x00466145                       ; 0046613e | LAB_00466145
        ;   XREF to: 00466145 (CONDITIONAL_JUMP)
    JMP 0x004661b9                      ; 00466140 | LAB_004661b9
        ;   Label: LAB_00466140
        ;   XREF to: 004661b9 (UNCONDITIONAL_JUMP)
    MOV dword ptr [EBP + -0x64],0x16e9910 ; 00466145 | SShapeEditorPolygon[20000] g_ModelPolygonData
        ;   Label: LAB_00466145
    MOV dword ptr [EBP + -0xc],0x0      ; 0046614c
    JMP 0x00466165                      ; 00466153 | LAB_00466165
        ;   XREF to: 00466165 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0xc]      ; 00466155
        ;   Label: LAB_00466155
    INC dword ptr [EBP + -0xc]          ; 00466158
    MOV EAX,dword ptr [EBP + -0x64]     ; 0046615b
    ADD dword ptr [EBP + -0x64],0x184   ; 0046615e | DAT_016e9a94
    MOV EAX,dword ptr [EBP + -0xc]      ; 00466165
        ;   Label: LAB_00466165
    CMP EAX,dword ptr [0x016e990c]      ; 00466168 | int g_PolygonCount
    JGE 0x004661b9                      ; 0046616e | LAB_004661b9
        ;   XREF to: 004661b9 (CONDITIONAL_JUMP)
    MOV dword ptr [EBP + -0x8],0x0      ; 00466170
    JMP 0x0046617f                      ; 00466177 | LAB_0046617f
        ;   XREF to: 0046617f (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x8]      ; 00466179
        ;   Label: LAB_00466179
    INC dword ptr [EBP + -0x8]          ; 0046617c
    MOV EAX,dword ptr [EBP + -0x8]      ; 0046617f
        ;   Label: LAB_0046617f
    MOV EDX,dword ptr [EBP + -0x64]     ; 00466182
    CMP EAX,dword ptr [EDX + 0xa4]      ; 00466185 | DAT_016e99b4
    JGE 0x004661b7                      ; 0046618b | LAB_004661b7
        ;   XREF to: 004661b7 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x8]      ; 0046618d
    SHL EAX,0x2                         ; 00466190
    ADD EAX,dword ptr [EBP + -0x64]     ; 00466193
    MOV EAX,dword ptr [EAX + 0xb8]      ; 00466196 | DAT_016e99c8
    CMP EAX,dword ptr [EBP + -0x10]     ; 0046619c
    JNZ 0x004661b5                      ; 0046619f | LAB_004661b5
        ;   XREF to: 004661b5 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x8]      ; 004661a1
    SHL EAX,0x2                         ; 004661a4
    MOV EDX,dword ptr [EBP + -0x64]     ; 004661a7
    ADD EDX,EAX                         ; 004661aa
    MOV EAX,dword ptr [EBP + -0x4]      ; 004661ac
    MOV dword ptr [EDX + 0xb8],EAX      ; 004661af | DAT_016e99c8
    JMP 0x00466179                      ; 004661b5 | LAB_00466179
        ;   Label: LAB_004661b5
        ;   XREF to: 00466179 (UNCONDITIONAL_JUMP)
    JMP 0x00466155                      ; 004661b7 | LAB_00466155
        ;   Label: LAB_004661b7
        ;   XREF to: 00466155 (UNCONDITIONAL_JUMP)
    JMP 0x004660c9                      ; 004661b9 | LAB_004660c9
        ;   Label: LAB_004661b9
        ;   XREF to: 004660c9 (UNCONDITIONAL_JUMP)
    CALL shape_design.c_removeUnusedVertices_FUN_00463830 ; 004661be | void shape_design.c_removeUnusedVertices_FUN_00463830()
        ;   Label: LAB_004661be
        ;   XREF to: 00463830 (UNCONDITIONAL_CALL)
    MOV ESP,EBP                         ; 004661c3
        ;   Label: LAB_004661c3
    POP EBP                             ; 004661c5
    POP EDI                             ; 004661c6
    POP ESI                             ; 004661c7
    POP EBX                             ; 004661c8
    RET                                 ; 004661c9

