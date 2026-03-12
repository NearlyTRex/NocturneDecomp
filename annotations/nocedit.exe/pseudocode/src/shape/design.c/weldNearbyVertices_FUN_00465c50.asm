; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_design_c_weldNearbyVertices_FUN_00465c50(int polygon_index,float tolerance)
;
; Parameters:
; int              Stack[0x4]:4   polygon_index
; float            Stack[0x8]:4   tolerance
; Local Variables:
; int              Stack[-0x1c]:4  local_1c
; uint             Stack[-0x18]:4  local_18
;
; XREF[1]:
;   shape_design.c_polygonToolModeManager_FUN_00464c90 at 00464ec2
;
; Referenced Globals:
;   int g_VertexCount
;   SVertexData[20000] g_LoadedVertices
;   undefined4 DAT_01626410
;   undefined4 g_LoadedVertices[0].vertex.z
;   undefined4 DAT_016e99b4
;   undefined4 DAT_016e99c8
;
; Called Functions:
;   shape_design.c_removeUnusedVertices_FUN_00463830
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00465c50
        ;   Label: shape_design.c_weldNearbyVertices_FUN_00465c50
    PUSH ESI                            ; 00465c51
    PUSH EDI                            ; 00465c52
    PUSH EBP                            ; 00465c53
    MOV EBP,ESP                         ; 00465c54
    SUB ESP,0xc                         ; 00465c56
    MOV dword ptr [EBP + -0xc],0x0      ; 00465c5c
    JMP 0x00465c6b                      ; 00465c63
        ;   XREF to: 00465c6b (UNCONDITIONAL_JUMP)  ; LAB_00465c6b
    MOV EAX,dword ptr [EBP + -0xc]      ; 00465c65
        ;   Label: LAB_00465c65
    INC dword ptr [EBP + -0xc]          ; 00465c68
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 00465c6b
        ;   Label: LAB_00465c6b
    MOV EAX,dword ptr [EBP + -0xc]      ; 00465c72
    CMP EAX,dword ptr [EDX + 0x16e99b4] ; 00465c75 | DAT_016e99b4
    JGE 0x00465d3d                      ; 00465c7b
        ;   XREF to: 00465d3d (CONDITIONAL_JUMP)  ; LAB_00465d3d
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 00465c81
    MOV EAX,dword ptr [EBP + -0xc]      ; 00465c88
    SHL EAX,0x2                         ; 00465c8b
    ADD EAX,EDX                         ; 00465c8e
    MOV EAX,dword ptr [EAX + 0x16e99c8] ; 00465c90 | DAT_016e99c8
    MOV dword ptr [EBP + -0x4],EAX      ; 00465c96
    MOV dword ptr [EBP + -0x8],0x0      ; 00465c99
    JMP 0x00465ca8                      ; 00465ca0
        ;   XREF to: 00465ca8 (UNCONDITIONAL_JUMP)  ; LAB_00465ca8
    MOV EAX,dword ptr [EBP + -0x8]      ; 00465ca2
        ;   Label: LAB_00465ca2
    INC dword ptr [EBP + -0x8]          ; 00465ca5
    MOV EAX,dword ptr [EBP + -0x8]      ; 00465ca8
        ;   Label: LAB_00465ca8
    CMP EAX,dword ptr [0x01626408]      ; 00465cab | g_VertexCount
    JGE 0x00465d38                      ; 00465cb1
        ;   XREF to: 00465d38 (CONDITIONAL_JUMP)  ; LAB_00465d38
    IMUL EDX,dword ptr [EBP + -0x4],0x14 ; 00465cb7
    IMUL EAX,dword ptr [EBP + -0x8],0x14 ; 00465cbb
    FLD float ptr [EDX + 0x162640c]     ; 00465cbf | g_LoadedVertices
    FSUB float ptr [EAX + 0x162640c]    ; 00465cc5 | g_LoadedVertices
    FABS                                ; 00465ccb
    FLD float ptr [EBP + 0x18]          ; 00465ccd
    FCOMPP                              ; 00465cd0
    FNSTSW AX                           ; 00465cd2
    SAHF                                ; 00465cd4
    JBE 0x00465cf7                      ; 00465cd5
        ;   XREF to: 00465cf7 (CONDITIONAL_JUMP)  ; LAB_00465cf7
    IMUL EDX,dword ptr [EBP + -0x4],0x14 ; 00465cd7
    IMUL EAX,dword ptr [EBP + -0x8],0x14 ; 00465cdb
    FLD float ptr [EDX + 0x1626410]     ; 00465cdf | DAT_01626410
    FSUB float ptr [EAX + 0x1626410]    ; 00465ce5 | DAT_01626410
    FABS                                ; 00465ceb
    FLD float ptr [EBP + 0x18]          ; 00465ced
    FCOMPP                              ; 00465cf0
    FNSTSW AX                           ; 00465cf2
    SAHF                                ; 00465cf4
    JA 0x00465cf9                       ; 00465cf5
        ;   XREF to: 00465cf9 (CONDITIONAL_JUMP)  ; LAB_00465cf9
    JMP 0x00465d19                      ; 00465cf7
        ;   XREF to: 00465d19 (UNCONDITIONAL_JUMP)  ; LAB_00465d19
        ;   Label: LAB_00465cf7
    IMUL EDX,dword ptr [EBP + -0x4],0x14 ; 00465cf9
        ;   Label: LAB_00465cf9
    IMUL EAX,dword ptr [EBP + -0x8],0x14 ; 00465cfd
    FLD float ptr [EDX + 0x1626414]     ; 00465d01 | g_LoadedVertices[0].vertex.z
    FSUB float ptr [EAX + 0x1626414]    ; 00465d07 | g_LoadedVertices[0].vertex.z
    FABS                                ; 00465d0d
    FLD float ptr [EBP + 0x18]          ; 00465d0f
    FCOMPP                              ; 00465d12
    FNSTSW AX                           ; 00465d14
    SAHF                                ; 00465d16
    JA 0x00465d1b                       ; 00465d17
        ;   XREF to: 00465d1b (CONDITIONAL_JUMP)  ; LAB_00465d1b
    JMP 0x00465d33                      ; 00465d19
        ;   XREF to: 00465d33 (UNCONDITIONAL_JUMP)  ; LAB_00465d33
        ;   Label: LAB_00465d19
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 00465d1b
        ;   Label: LAB_00465d1b
    MOV EAX,dword ptr [EBP + -0xc]      ; 00465d22
    SHL EAX,0x2                         ; 00465d25
    ADD EDX,EAX                         ; 00465d28
    MOV EAX,dword ptr [EBP + -0x8]      ; 00465d2a
    MOV dword ptr [EDX + 0x16e99c8],EAX ; 00465d2d | DAT_016e99c8
    JMP 0x00465ca2                      ; 00465d33
        ;   XREF to: 00465ca2 (UNCONDITIONAL_JUMP)  ; LAB_00465ca2
        ;   Label: LAB_00465d33
    JMP 0x00465c65                      ; 00465d38
        ;   XREF to: 00465c65 (UNCONDITIONAL_JUMP)  ; LAB_00465c65
        ;   Label: LAB_00465d38
    CALL shape_design.c_removeUnusedVertices_FUN_00463830 ; 00465d3d
        ;   XREF to: 00463830 (UNCONDITIONAL_CALL)  ; void shape_design.c_removeUnusedVertices_FUN_00463830()
        ;   Label: LAB_00465d3d
    MOV ESP,EBP                         ; 00465d42
    POP EBP                             ; 00465d44
    POP EDI                             ; 00465d45
    POP ESI                             ; 00465d46
    POP EBX                             ; 00465d47
    RET                                 ; 00465d48

