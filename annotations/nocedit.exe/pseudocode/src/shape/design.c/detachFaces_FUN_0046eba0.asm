; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_design_c_detachFaces_FUN_0046eba0(void)
;
; Local Variables:
; int              Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
;
; XREF[1]:
;   shape_design.c_showShapeEditorMenu_FUN_0046f290 at 0046f797
;
; Referenced Globals:
;   TerminatedCString s_Ran_out_of_verticies_0061e07d
;   TerminatedCString s_Faces_detached_0061e093
;   int g_VertexCount
;   SVertexData[20000] g_LoadedVertices
;   undefined4 DAT_01626410
;   undefined4 g_LoadedVertices[0].vertex.z
;   undefined4 DAT_01626418
;   undefined4 DAT_0162641c
;   int g_PolygonCount
;   undefined4 DAT_016e99b4
;   undefined4 DAT_016e99c8
;
; Called Functions:
;   engine_2d.c_clearInputAndWait_FUN_00403260
;   engine_2d.c_drawText_FUN_00401fd0
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
;   wincore_windll.cpp_clearScreen_FUN_005b3e70
;   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046eba0
        ;   Label: shape_design.c_detachFaces_FUN_0046eba0
    PUSH ESI                            ; 0046eba1
    PUSH EDI                            ; 0046eba2
    PUSH EBP                            ; 0046eba3
    MOV EBP,ESP                         ; 0046eba4
    SUB ESP,0x10                        ; 0046eba6
    MOV EAX,[0x01626408]                ; 0046ebac | g_VertexCount
    MOV dword ptr [EBP + -0x4],EAX      ; 0046ebb1
    MOV dword ptr [EBP + -0x10],0x0     ; 0046ebb4
    JMP 0x0046ebc3                      ; 0046ebbb
        ;   XREF to: 0046ebc3 (UNCONDITIONAL_JUMP)  ; LAB_0046ebc3
    MOV EAX,dword ptr [EBP + -0x10]     ; 0046ebbd
        ;   Label: LAB_0046ebbd
    INC dword ptr [EBP + -0x10]         ; 0046ebc0
    MOV EAX,dword ptr [EBP + -0x10]     ; 0046ebc3
        ;   Label: LAB_0046ebc3
    CMP EAX,dword ptr [0x016e990c]      ; 0046ebc6 | g_PolygonCount
    JGE 0x0046ec8d                      ; 0046ebcc
        ;   XREF to: 0046ec8d (CONDITIONAL_JUMP)  ; LAB_0046ec8d
    MOV dword ptr [EBP + -0xc],0x0      ; 0046ebd2
    JMP 0x0046ebe1                      ; 0046ebd9
        ;   XREF to: 0046ebe1 (UNCONDITIONAL_JUMP)  ; LAB_0046ebe1
    MOV EAX,dword ptr [EBP + -0xc]      ; 0046ebdb
        ;   Label: LAB_0046ebdb
    INC dword ptr [EBP + -0xc]          ; 0046ebde
    IMUL EDX,dword ptr [EBP + -0x10],0x184 ; 0046ebe1
        ;   Label: LAB_0046ebe1
    MOV EAX,dword ptr [EBP + -0xc]      ; 0046ebe8
    CMP EAX,dword ptr [EDX + 0x16e99b4] ; 0046ebeb | DAT_016e99b4
    JGE 0x0046ec88                      ; 0046ebf1
        ;   XREF to: 0046ec88 (CONDITIONAL_JUMP)  ; LAB_0046ec88
    IMUL EDX,dword ptr [EBP + -0x10],0x184 ; 0046ebf7
    MOV EAX,dword ptr [EBP + -0xc]      ; 0046ebfe
    SHL EAX,0x2                         ; 0046ec01
    ADD EAX,EDX                         ; 0046ec04
    MOV EAX,dword ptr [EAX + 0x16e99c8] ; 0046ec06 | DAT_016e99c8
    MOV dword ptr [EBP + -0x8],EAX      ; 0046ec0c
    IMUL ESI,dword ptr [EBP + -0x8],0x14 ; 0046ec0f
    IMUL EDI,dword ptr [0x01626408],0x14 ; 0046ec13 | g_VertexCount
    LEA EDI,[EDI + 0x162640c]           ; 0046ec1a | g_LoadedVertices
    LEA ESI,[ESI + 0x162640c]           ; 0046ec20 | g_LoadedVertices
    MOVSD ES:EDI,ESI                    ; 0046ec26 | g_LoadedVertices
    MOVSD ES:EDI,ESI                    ; 0046ec27 | DAT_01626410
    MOVSD ES:EDI,ESI                    ; 0046ec28 | g_LoadedVertices[0].vertex.z
    MOVSD ES:EDI,ESI                    ; 0046ec29 | DAT_01626418
    MOVSD ES:EDI,ESI                    ; 0046ec2a | DAT_0162641c
    MOV ESI,dword ptr [0x01626408]      ; 0046ec2b | g_VertexCount
    SUB ESI,dword ptr [EBP + -0x4]      ; 0046ec31
    IMUL EDX,dword ptr [EBP + -0x10],0x184 ; 0046ec34
    MOV EAX,dword ptr [EBP + -0xc]      ; 0046ec3b
    SHL EAX,0x2                         ; 0046ec3e
    ADD EAX,EDX                         ; 0046ec41
    MOV dword ptr [EAX + 0x16e99c8],ESI ; 0046ec43 | DAT_016e99c8
    INC dword ptr [0x01626408]          ; 0046ec49 | g_VertexCount
    CMP dword ptr [0x01626408],0x4e20   ; 0046ec4f | g_VertexCount
    JLE 0x0046ec83                      ; 0046ec59
        ;   XREF to: 0046ec83 (CONDITIONAL_JUMP)  ; LAB_0046ec83
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 0046ec5b
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    PUSH 0x0                            ; 0046ec60
    PUSH 0x0                            ; 0046ec62
    MOV EAX,0x61e07d                    ; 0046ec64 | = "Ran out of verticies!"
    PUSH EAX                            ; 0046ec69 | = "Ran out of verticies!"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046ec6a
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046ec6f
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0046ec72
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 0046ec77
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 0046ec7c
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    JMP 0x0046eceb                      ; 0046ec81
        ;   XREF to: 0046eceb (UNCONDITIONAL_JUMP)  ; LAB_0046eceb
    JMP 0x0046ebdb                      ; 0046ec83
        ;   XREF to: 0046ebdb (UNCONDITIONAL_JUMP)  ; LAB_0046ebdb
        ;   Label: LAB_0046ec83
    JMP 0x0046ebbd                      ; 0046ec88
        ;   XREF to: 0046ebbd (UNCONDITIONAL_JUMP)  ; LAB_0046ebbd
        ;   Label: LAB_0046ec88
    MOV EAX,dword ptr [EBP + -0x4]      ; 0046ec8d
        ;   Label: LAB_0046ec8d
    MOV dword ptr [EBP + -0xc],EAX      ; 0046ec90
    JMP 0x0046ec9b                      ; 0046ec93
        ;   XREF to: 0046ec9b (UNCONDITIONAL_JUMP)  ; LAB_0046ec9b
    MOV EAX,dword ptr [EBP + -0xc]      ; 0046ec95
        ;   Label: LAB_0046ec95
    INC dword ptr [EBP + -0xc]          ; 0046ec98
    MOV EAX,dword ptr [EBP + -0xc]      ; 0046ec9b
        ;   Label: LAB_0046ec9b
    CMP EAX,dword ptr [0x01626408]      ; 0046ec9e | g_VertexCount
    JGE 0x0046ecc6                      ; 0046eca4
        ;   XREF to: 0046ecc6 (CONDITIONAL_JUMP)  ; LAB_0046ecc6
    IMUL ESI,dword ptr [EBP + -0xc],0x14 ; 0046eca6
    MOV EAX,dword ptr [EBP + -0xc]      ; 0046ecaa
    SUB EAX,dword ptr [EBP + -0x4]      ; 0046ecad
    IMUL EAX,EAX,0x14                   ; 0046ecb0
    LEA EDI,[EAX + 0x162640c]           ; 0046ecb3 | g_LoadedVertices
    LEA ESI,[ESI + 0x162640c]           ; 0046ecb9 | g_LoadedVertices
    MOVSD ES:EDI,ESI                    ; 0046ecbf | g_LoadedVertices
    MOVSD ES:EDI,ESI                    ; 0046ecc0 | DAT_01626410
    MOVSD ES:EDI,ESI                    ; 0046ecc1 | g_LoadedVertices[0].vertex.z
    MOVSD ES:EDI,ESI                    ; 0046ecc2 | DAT_01626418
    MOVSD ES:EDI,ESI                    ; 0046ecc3 | DAT_0162641c
    JMP 0x0046ec95                      ; 0046ecc4
        ;   XREF to: 0046ec95 (UNCONDITIONAL_JUMP)  ; LAB_0046ec95
    MOV EAX,dword ptr [EBP + -0x4]      ; 0046ecc6
        ;   Label: LAB_0046ecc6
    SUB dword ptr [0x01626408],EAX      ; 0046ecc9 | g_VertexCount
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 0046eccf
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    PUSH 0x0                            ; 0046ecd4
    PUSH 0x0                            ; 0046ecd6
    MOV EAX,0x61e093                    ; 0046ecd8 | = "Faces detached."
    PUSH EAX                            ; 0046ecdd | = "Faces detached."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046ecde
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046ece3
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0046ece6
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    MOV ESP,EBP                         ; 0046eceb
        ;   Label: LAB_0046eceb
    POP EBP                             ; 0046eced
    POP EDI                             ; 0046ecee
    POP ESI                             ; 0046ecef
    POP EBX                             ; 0046ecf0
    RET                                 ; 0046ecf1

