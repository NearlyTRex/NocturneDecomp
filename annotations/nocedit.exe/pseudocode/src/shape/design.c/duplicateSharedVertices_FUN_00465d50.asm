; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_design.c_duplicateSharedVertices_FUN_00465d50(int polygon_index)
;
; Parameters:
; int              Stack[0x4]:4   polygon_index
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_design.c_polygonToolModeManager_FUN_00464c90 at 00464ed3
;
; Referenced Globals:
;   TerminatedCString s_shape_design_c_0061c666
;   TerminatedCString s_Cannot_add_any_more_poin_0061c678
;   int g_VertexCount
;   SVertexData[20000] g_LoadedVertices
;   undefined4 DAT_01626410
;   undefined4 g_LoadedVertices[0].vertex.z
;   undefined4 DAT_01626418
;   undefined4 DAT_0162641c
;   int g_PolygonCount
;   SShapeEditorPolygon[20000] g_ModelPolygonData
;   undefined4 DAT_016e99b4
;   undefined4 DAT_016e99c8
;   undefined4 DAT_016e9a94
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00465d50
        ;   Label: shape_design.c_duplicateSharedVertices_FUN_00465d50
    PUSH ESI                            ; 00465d51
    PUSH EDI                            ; 00465d52
    PUSH EBP                            ; 00465d53
    MOV EBP,ESP                         ; 00465d54
    SUB ESP,0x18                        ; 00465d56
    MOV dword ptr [EBP + -0x14],0x0     ; 00465d5c
    JMP 0x00465d6b                      ; 00465d63
        ;   XREF to: 00465d6b (UNCONDITIONAL_JUMP)  ; LAB_00465d6b
    MOV EAX,dword ptr [EBP + -0x14]     ; 00465d65
        ;   Label: LAB_00465d65
    INC dword ptr [EBP + -0x14]         ; 00465d68
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 00465d6b
        ;   Label: LAB_00465d6b
    MOV EAX,dword ptr [EBP + -0x14]     ; 00465d72
    CMP EAX,dword ptr [EDX + 0x16e99b4] ; 00465d75 | DAT_016e99b4
    JGE 0x00465e88                      ; 00465d7b
        ;   XREF to: 00465e88 (CONDITIONAL_JUMP)  ; LAB_00465e88
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 00465d81
    MOV EAX,dword ptr [EBP + -0x14]     ; 00465d88
    SHL EAX,0x2                         ; 00465d8b
    ADD EAX,EDX                         ; 00465d8e
    MOV EAX,dword ptr [EAX + 0x16e99c8] ; 00465d90 | DAT_016e99c8
    MOV dword ptr [EBP + -0x8],EAX      ; 00465d96
    MOV dword ptr [EBP + -0x4],0x0      ; 00465d99
    MOV dword ptr [EBP + -0x18],0x16e9910 ; 00465da0 | g_ModelPolygonData
    MOV dword ptr [EBP + -0x10],0x0     ; 00465da7
    JMP 0x00465dc0                      ; 00465dae
        ;   XREF to: 00465dc0 (UNCONDITIONAL_JUMP)  ; LAB_00465dc0
    MOV EAX,dword ptr [EBP + -0x10]     ; 00465db0
        ;   Label: LAB_00465db0
    INC dword ptr [EBP + -0x10]         ; 00465db3
    MOV EAX,dword ptr [EBP + -0x18]     ; 00465db6
    ADD dword ptr [EBP + -0x18],0x184   ; 00465db9 | DAT_016e9a94
    MOV EAX,dword ptr [EBP + -0x10]     ; 00465dc0
        ;   Label: LAB_00465dc0
    CMP EAX,dword ptr [0x016e990c]      ; 00465dc3 | g_PolygonCount
    JGE 0x00465e13                      ; 00465dc9
        ;   XREF to: 00465e13 (CONDITIONAL_JUMP)  ; LAB_00465e13
    MOV EAX,dword ptr [EBP + -0x10]     ; 00465dcb
    CMP EAX,dword ptr [EBP + 0x14]      ; 00465dce
    JZ 0x00465e11                       ; 00465dd1
        ;   XREF to: 00465e11 (CONDITIONAL_JUMP)  ; LAB_00465e11
    MOV dword ptr [EBP + -0xc],0x0      ; 00465dd3
    JMP 0x00465de2                      ; 00465dda
        ;   XREF to: 00465de2 (UNCONDITIONAL_JUMP)  ; LAB_00465de2
    MOV EAX,dword ptr [EBP + -0xc]      ; 00465ddc
        ;   Label: LAB_00465ddc
    INC dword ptr [EBP + -0xc]          ; 00465ddf
    MOV EAX,dword ptr [EBP + -0xc]      ; 00465de2
        ;   Label: LAB_00465de2
    MOV EDX,dword ptr [EBP + -0x18]     ; 00465de5
    CMP EAX,dword ptr [EDX + 0xa4]      ; 00465de8 | DAT_016e99b4
    JGE 0x00465e11                      ; 00465dee
        ;   XREF to: 00465e11 (CONDITIONAL_JUMP)  ; LAB_00465e11
    MOV EAX,dword ptr [EBP + -0xc]      ; 00465df0
    SHL EAX,0x2                         ; 00465df3
    MOV EDX,dword ptr [EBP + -0x18]     ; 00465df6
    ADD EDX,EAX                         ; 00465df9
    MOV EAX,dword ptr [EBP + -0x8]      ; 00465dfb
    CMP EAX,dword ptr [EDX + 0xb8]      ; 00465dfe | DAT_016e99c8
    JNZ 0x00465e0f                      ; 00465e04
        ;   XREF to: 00465e0f (CONDITIONAL_JUMP)  ; LAB_00465e0f
    MOV dword ptr [EBP + -0x4],0x1      ; 00465e06
    JMP 0x00465e13                      ; 00465e0d
        ;   XREF to: 00465e13 (UNCONDITIONAL_JUMP)  ; LAB_00465e13
    JMP 0x00465ddc                      ; 00465e0f
        ;   XREF to: 00465ddc (UNCONDITIONAL_JUMP)  ; LAB_00465ddc
        ;   Label: LAB_00465e0f
    JMP 0x00465db0                      ; 00465e11
        ;   XREF to: 00465db0 (UNCONDITIONAL_JUMP)  ; LAB_00465db0
        ;   Label: LAB_00465e11
    CMP dword ptr [EBP + -0x4],0x0      ; 00465e13
        ;   Label: LAB_00465e13
    JZ 0x00465e83                       ; 00465e17
        ;   XREF to: 00465e83 (CONDITIONAL_JUMP)  ; LAB_00465e83
    CMP dword ptr [0x01626408],0x4e20   ; 00465e19 | g_VertexCount
    JL 0x00465e47                       ; 00465e23
        ;   XREF to: 00465e47 (CONDITIONAL_JUMP)  ; LAB_00465e47
    MOV dword ptr [0x02f0ca48],0x61c666 ; 00465e25 | g_CurrentFilename | = "..\\shape\\design.c"
    MOV dword ptr [0x02f0ca4c],0x1d5a   ; 00465e2f | g_CurrentLineNumber
    MOV EAX,0x61c678                    ; 00465e39 | = "Cannot add any more points!"
    PUSH EAX                            ; 00465e3e | = "Cannot add any more points!"
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00465e3f
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00465e44
    IMUL ESI,dword ptr [EBP + -0x8],0x14 ; 00465e47
        ;   Label: LAB_00465e47
    IMUL EDI,dword ptr [0x01626408],0x14 ; 00465e4b | g_VertexCount
    LEA EDI,[EDI + 0x162640c]           ; 00465e52 | g_LoadedVertices
    LEA ESI,[ESI + 0x162640c]           ; 00465e58 | g_LoadedVertices
    MOVSD ES:EDI,ESI                    ; 00465e5e | g_LoadedVertices
    MOVSD ES:EDI,ESI                    ; 00465e5f | DAT_01626410
    MOVSD ES:EDI,ESI                    ; 00465e60 | g_LoadedVertices[0].vertex.z
    MOVSD ES:EDI,ESI                    ; 00465e61 | DAT_01626418
    MOVSD ES:EDI,ESI                    ; 00465e62 | DAT_0162641c
    IMUL ESI,dword ptr [EBP + 0x14],0x184 ; 00465e63
    MOV EAX,dword ptr [EBP + -0x14]     ; 00465e6a
    SHL EAX,0x2                         ; 00465e6d
    ADD ESI,EAX                         ; 00465e70
    MOV EAX,[0x01626408]                ; 00465e72 | g_VertexCount
    MOV dword ptr [ESI + 0x16e99c8],EAX ; 00465e77 | DAT_016e99c8
    INC dword ptr [0x01626408]          ; 00465e7d | g_VertexCount
    JMP 0x00465d65                      ; 00465e83
        ;   XREF to: 00465d65 (UNCONDITIONAL_JUMP)  ; LAB_00465d65
        ;   Label: LAB_00465e83
    MOV ESP,EBP                         ; 00465e88
        ;   Label: LAB_00465e88
    POP EBP                             ; 00465e8a
    POP EDI                             ; 00465e8b
    POP ESI                             ; 00465e8c
    POP EBX                             ; 00465e8d
    RET                                 ; 00465e8e

