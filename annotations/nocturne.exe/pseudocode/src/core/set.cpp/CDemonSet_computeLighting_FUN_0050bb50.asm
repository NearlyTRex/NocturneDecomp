; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_computeLighting_FUN_0050bb50(CDemonSet *this_ptr,CVector3i *world_position,CVector3i *surface_normal,int start_vertex_index,int vertex_count)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; CVector3i *      Stack[0x8]:4   world_position
; CVector3i *      Stack[0xc]:4   surface_normal
; int              Stack[0x10]:4   start_vertex_index
; int              Stack[0x14]:4   vertex_count
;
; XREF[8]:
;   core_chain.cpp_CChain_renderTransparent_FUN_0042c4c0 at 0042c7d0
;   core_fire.cpp_CBulletHole_render_FUN_00482f50 at 0048325f
;   core_fire.cpp_CGlassParticle_render_FUN_004853c0 at 0048554a
;   core_fire.cpp_CPopcorn_render_FUN_00489990 at 00489c61
;   core_fire.cpp_CRainDrop_render_FUN_00489d00 at 0048a00e
;   core_fire.cpp_CSmokeParticle_render_FUN_00482950 at 00482c14
;   core_gore.cpp_CBloodParticle_render_FUN_004ae190 at 004ae432
;   core_weather.cpp_CWeather_renderParticles_FUN_00555020 at 0055523e
;
; Referenced Globals:
;   SRenderVertex[20000] g_SRenderVertex_ARRAY_005c5014
;   undefined4 g_SRenderVertex_ARRAY_005c5014[0].r
;   undefined4 g_SRenderVertex_ARRAY_005c5014[0].g
;   undefined4 g_SRenderVertex_ARRAY_005c5014[0].b
;   undefined4 g_SRenderVertex_ARRAY_005c5014[1].r
;   undefined4 g_SRenderVertex_ARRAY_005c5014[1].g
;   undefined4 g_SRenderVertex_ARRAY_005c5014[1].b
;   undefined4 g_SRenderVertex_ARRAY_005c5014[2].r
;   undefined4 g_SRenderVertex_ARRAY_005c5014[2].g
;   undefined4 g_SRenderVertex_ARRAY_005c5014[2].b
;
; Called Functions:
;   core_set.cpp_CDemonSet_lightVertexColor_FUN_0050b7f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050bb50
        ;   Label: core_set.cpp_CDemonSet_computeLighting_FUN_0050bb50
    PUSH ESI                            ; 0050bb51
    PUSH EDI                            ; 0050bb52
    MOV EBX,dword ptr [ESP + 0x20]      ; 0050bb53
    PUSH 0x0                            ; 0050bb57
    MOV EDX,dword ptr [ESP + 0x20]      ; 0050bb59
    PUSH EDX                            ; 0050bb5d
    MOV ECX,dword ptr [ESP + 0x20]      ; 0050bb5e
    PUSH ECX                            ; 0050bb62
    MOV ESI,dword ptr [ESP + 0x20]      ; 0050bb63
    PUSH ESI                            ; 0050bb67
    MOV EDI,dword ptr [ESP + 0x20]      ; 0050bb68
    PUSH EDI                            ; 0050bb6c
    CALL core_set.cpp_CDemonSet_lightVertexColor_FUN_0050b7f0 ; 0050bb6d
        ;   XREF to: 0050b7f0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_lightVertexColor_FUN_0050b7f0(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal, int vertex_index, ...)
    ADD ESP,0x14                        ; 0050bb72
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0050bb75
    LEA EAX,[EDX*0x4 + 0x0]             ; 0050bb79
    SUB EAX,EDX                         ; 0050bb80
    MOV EDX,0x5c5014                    ; 0050bb82 | g_SRenderVertex_ARRAY_005c5014
    SHL EAX,0x4                         ; 0050bb87
    ADD EDX,EAX                         ; 0050bb8a
    DEC EBX                             ; 0050bb8c
    LEA EAX,[EDX + 0x30]                ; 0050bb8d
    TEST EBX,EBX                        ; 0050bb90
    JLE 0x0050bbb0                      ; 0050bb92
        ;   XREF to: 0050bbb0 (CONDITIONAL_JUMP)  ; LAB_0050bbb0
    MOV ECX,dword ptr [EDX + 0x20]      ; 0050bb94 | g_SRenderVertex_ARRAY_005c5014[0].r
        ;   Label: LAB_0050bb94
    MOV dword ptr [EAX + 0x20],ECX      ; 0050bb97 | g_SRenderVertex_ARRAY_005c5014[1].r | g_SRenderVertex_ARRAY_005c5014[2].r
    MOV ECX,dword ptr [EDX + 0x24]      ; 0050bb9a | g_SRenderVertex_ARRAY_005c5014[0].g
    MOV dword ptr [EAX + 0x24],ECX      ; 0050bb9d | g_SRenderVertex_ARRAY_005c5014[1].g | g_SRenderVertex_ARRAY_005c5014[2].g
    ADD EAX,0x30                        ; 0050bba0
    MOV ECX,dword ptr [EDX + 0x28]      ; 0050bba3 | g_SRenderVertex_ARRAY_005c5014[0].b
    DEC EBX                             ; 0050bba6
    MOV dword ptr [EAX + -0x8],ECX      ; 0050bba7 | g_SRenderVertex_ARRAY_005c5014[1].b | g_SRenderVertex_ARRAY_005c5014[2].b
    TEST EBX,EBX                        ; 0050bbaa
    JG 0x0050bb94                       ; 0050bbac
        ;   XREF to: 0050bb94 (CONDITIONAL_JUMP)  ; LAB_0050bb94
    MOV EAX,EAX                         ; 0050bbae
    POP EDI                             ; 0050bbb0
        ;   Label: LAB_0050bbb0
    POP ESI                             ; 0050bbb1
    POP EBX                             ; 0050bbb2
    RET                                 ; 0050bbb3

