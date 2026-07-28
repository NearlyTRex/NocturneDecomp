; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ground_cpp_CGround_render_FUN_004b2110(CGround *this_ptr)
;
; Parameters:
; CGround *        Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_terrain.cpp_CTerrain_render_FUN_00549310 at 005493e7
;
; Referenced Globals:
;   undefined4 DAT_005ae704
;   undefined4 DAT_01b4d738
;
; Called Functions:
;   core_ground.cpp_CGround_renderVisibleTerrain_FUN_004b1ff0
;   core_ground.cpp_CGround_transformAndStoreVertices_FUN_004b1910
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0
;   engine_matrix.c_getCameraOrigin_FUN_004ce760
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b2110
        ;   Label: core_ground.cpp_CGround_render_FUN_004b2110
    PUSH ESI                            ; 004b2111
    PUSH EBP                            ; 004b2112
    SUB ESP,0xc                         ; 004b2113
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004b2116
    MOV ESI,ESP                         ; 004b211a
    CALL engine_matrix.c_getCameraOrigin_FUN_004ce760 ; 004b211c
        ;   XREF to: 004ce760 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_getCameraOrigin_FUN_004ce760(CVector3i * output)
    MOV EAX,dword ptr [ESP]             ; 004b2121
    MOV ESI,dword ptr [EBX + 0x1c]      ; 004b2124
    MOV EDX,EAX                         ; 004b2127
    SHL ESI,0x8                         ; 004b2129
    SAR EDX,0x1f                        ; 004b212c
    IDIV ESI                            ; 004b212f
    MOV dword ptr [EBX + 0x2c],EAX      ; 004b2131
    MOV EAX,dword ptr [ESP + 0x8]       ; 004b2134
    MOV ESI,dword ptr [EBX + 0x1c]      ; 004b2138
    MOV EDX,EAX                         ; 004b213b
    SHL ESI,0x8                         ; 004b213d
    SAR EDX,0x1f                        ; 004b2140
    IDIV ESI                            ; 004b2143
    MOV EDX,dword ptr [EBX + 0x2c]      ; 004b2145
    MOV dword ptr [EBX + 0x30],EAX      ; 004b2148
    TEST EDX,EDX                        ; 004b214b
    JL 0x004b2190                       ; 004b214d
        ;   XREF to: 004b2190 (CONDITIONAL_JUMP)  ; LAB_004b2190
    MOV ESI,dword ptr [EBX + 0x30]      ; 004b214f
        ;   Label: LAB_004b214f
    TEST ESI,ESI                        ; 004b2152
    JL 0x004b2198                       ; 004b2154
        ;   XREF to: 004b2198 (CONDITIONAL_JUMP)  ; LAB_004b2198
    PUSH EBX                            ; 004b2156
        ;   Label: LAB_004b2156
    CALL core_ground.cpp_CGround_transformAndStoreVertices_FUN_004b1910 ; 004b2157
        ;   XREF to: 004b1910 (UNCONDITIONAL_CALL)  ; void core_ground.cpp_CGround_transformAndStoreVertices_FUN_004b1910(CGround * this_ptr)
    ADD ESP,0x4                         ; 004b215c
    PUSH 0x1                            ; 004b215f
    MOV EBP,dword ptr [0x005ae704]      ; 004b2161 | DAT_005ae704
    PUSH EBP                            ; 004b2167 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0 ; 004b2168
        ;   XREF to: 00460fb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 004b216d
    PUSH EBX                            ; 004b2170
    CALL core_ground.cpp_CGround_renderVisibleTerrain_FUN_004b1ff0 ; 004b2171
        ;   XREF to: 004b1ff0 (UNCONDITIONAL_CALL)  ; void core_ground.cpp_CGround_renderVisibleTerrain_FUN_004b1ff0(CGround * this_ptr)
    ADD ESP,0x4                         ; 004b2176
    PUSH 0x0                            ; 004b2179
    MOV EAX,[0x005ae704]                ; 004b217b | DAT_005ae704
    PUSH EAX                            ; 004b2180 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0 ; 004b2181
        ;   XREF to: 00460fb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 004b2186
    ADD ESP,0xc                         ; 004b2189
    POP EBP                             ; 004b218c
    POP ESI                             ; 004b218d
    POP EBX                             ; 004b218e
    RET                                 ; 004b218f
    LEA ECX,[EDX + -0x1]                ; 004b2190
        ;   Label: LAB_004b2190
    MOV dword ptr [EBX + 0x2c],ECX      ; 004b2193
    JMP 0x004b214f                      ; 004b2196
        ;   XREF to: 004b214f (UNCONDITIONAL_JUMP)  ; LAB_004b214f
    PUSH EDI                            ; 004b2198
        ;   Label: LAB_004b2198
    LEA EDI,[ESI + -0x1]                ; 004b2199
    MOV dword ptr [EBX + 0x30],EDI      ; 004b219c
    POP EDI                             ; 004b219f
    JMP 0x004b2156                      ; 004b21a0
        ;   XREF to: 004b2156 (UNCONDITIONAL_JUMP)  ; LAB_004b2156

