; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ground_cpp_CGround_render_FUN_004efc90(CGround *this_ptr)
;
; Parameters:
; CGround *        Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_terrain.cpp_CTerrain_render_FUN_005e1f50 at 005e2027
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;
; Called Functions:
;   core_ground.cpp_CGround_renderVisibleTerrain_FUN_004efb70
;   core_ground.cpp_CGround_transformAndStoreVertices_FUN_004ef490
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00
;   engine_matrix.c_getCameraOrigin_FUN_0050e2c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004efc90
        ;   Label: core_ground.cpp_CGround_render_FUN_004efc90
    PUSH ESI                            ; 004efc91
    PUSH EBP                            ; 004efc92
    SUB ESP,0xc                         ; 004efc93
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004efc96
    MOV ESI,ESP                         ; 004efc9a
    CALL engine_matrix.c_getCameraOrigin_FUN_0050e2c0 ; 004efc9c
        ;   XREF to: 0050e2c0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_getCameraOrigin_FUN_0050e2c0(CVector3i * output)
    MOV EAX,dword ptr [ESP]             ; 004efca1
    MOV ESI,dword ptr [EBX + 0x1c]      ; 004efca4
    MOV EDX,EAX                         ; 004efca7
    SHL ESI,0x8                         ; 004efca9
    SAR EDX,0x1f                        ; 004efcac
    IDIV ESI                            ; 004efcaf
    MOV dword ptr [EBX + 0x2c],EAX      ; 004efcb1
    MOV EAX,dword ptr [ESP + 0x8]       ; 004efcb4
    MOV ESI,dword ptr [EBX + 0x1c]      ; 004efcb8
    MOV EDX,EAX                         ; 004efcbb
    SHL ESI,0x8                         ; 004efcbd
    SAR EDX,0x1f                        ; 004efcc0
    IDIV ESI                            ; 004efcc3
    MOV EDX,dword ptr [EBX + 0x2c]      ; 004efcc5
    MOV dword ptr [EBX + 0x30],EAX      ; 004efcc8
    TEST EDX,EDX                        ; 004efccb
    JL 0x004efd10                       ; 004efccd
        ;   XREF to: 004efd10 (CONDITIONAL_JUMP)  ; LAB_004efd10
    MOV ESI,dword ptr [EBX + 0x30]      ; 004efccf
        ;   Label: LAB_004efccf
    TEST ESI,ESI                        ; 004efcd2
    JL 0x004efd18                       ; 004efcd4
        ;   XREF to: 004efd18 (CONDITIONAL_JUMP)  ; LAB_004efd18
    PUSH EBX                            ; 004efcd6
        ;   Label: LAB_004efcd6
    CALL core_ground.cpp_CGround_transformAndStoreVertices_FUN_004ef490 ; 004efcd7
        ;   XREF to: 004ef490 (UNCONDITIONAL_CALL)  ; void core_ground.cpp_CGround_transformAndStoreVertices_FUN_004ef490(CGround * this_ptr)
    ADD ESP,0x4                         ; 004efcdc
    PUSH 0x1                            ; 004efcdf
    MOV EBP,dword ptr [0x006703ec]      ; 004efce1 | g_CDemonRendererPtr2
    PUSH EBP                            ; 004efce7 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00 ; 004efce8
        ;   XREF to: 0048ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 004efced
    PUSH EBX                            ; 004efcf0
    CALL core_ground.cpp_CGround_renderVisibleTerrain_FUN_004efb70 ; 004efcf1
        ;   XREF to: 004efb70 (UNCONDITIONAL_CALL)  ; void core_ground.cpp_CGround_renderVisibleTerrain_FUN_004efb70(CGround * this_ptr)
    ADD ESP,0x4                         ; 004efcf6
    PUSH 0x0                            ; 004efcf9
    MOV EAX,[0x006703ec]                ; 004efcfb | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EAX                            ; 004efd00 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00 ; 004efd01
        ;   XREF to: 0048ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 004efd06
    ADD ESP,0xc                         ; 004efd09
    POP EBP                             ; 004efd0c
    POP ESI                             ; 004efd0d
    POP EBX                             ; 004efd0e
    RET                                 ; 004efd0f
    LEA ECX,[EDX + -0x1]                ; 004efd10
        ;   Label: LAB_004efd10
    MOV dword ptr [EBX + 0x2c],ECX      ; 004efd13
    JMP 0x004efccf                      ; 004efd16
        ;   XREF to: 004efccf (UNCONDITIONAL_JUMP)  ; LAB_004efccf
    PUSH EDI                            ; 004efd18
        ;   Label: LAB_004efd18
    LEA EDI,[ESI + -0x1]                ; 004efd19
    MOV dword ptr [EBX + 0x30],EDI      ; 004efd1c
    POP EDI                             ; 004efd1f
    JMP 0x004efcd6                      ; 004efd20
        ;   XREF to: 004efcd6 (UNCONDITIONAL_JUMP)  ; LAB_004efcd6

