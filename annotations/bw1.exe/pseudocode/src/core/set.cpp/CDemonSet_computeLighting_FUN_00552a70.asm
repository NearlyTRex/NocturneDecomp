; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_computeLighting_FUN_00552a70(CDemonSet *this_ptr,CVector3i *world_position,CVector3i *surface_normal,int start_vertex_index,int vertex_count)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; CVector3i *      Stack[0x8]:4   world_position
; CVector3i *      Stack[0xc]:4   surface_normal
; int              Stack[0x10]:4   start_vertex_index
; int              Stack[0x14]:4   vertex_count
;
; XREF[8]:
;   core_chain.cpp_CChain_renderTransparent_FUN_00436600 at 00436923
;   core_fire.cpp_CBulletHole_render_FUN_004ac770 at 004aca94
;   core_fire.cpp_CGlassParticle_render_FUN_004af9f0 at 004afb7d
;   core_fire.cpp_CPopcorn_render_FUN_004b4370 at 004b4645
;   core_fire.cpp_CRainDrop_render_FUN_004b46e0 at 004b49ef
;   core_fire.cpp_CSmokeParticle_render_FUN_004ac0b0 at 004ac374
;   core_gore.cpp_FUN_004e3f40 at 004e41e1
;   core_weather.cpp_CWeather_renderParticles_FUN_005ae890 at 005aeabb
;
; Referenced Globals:
;   undefined4 DAT_00629014
;   undefined4 DAT_00629034
;   undefined4 DAT_00629038
;   undefined4 DAT_0062903c
;   undefined4 DAT_00629064
;   undefined4 DAT_00629068
;   undefined4 DAT_0062906c
;   undefined4 DAT_00629094
;   undefined4 DAT_00629098
;   undefined4 DAT_0062909c
;
; Called Functions:
;   core_set.cpp_CDemonSet_lightVertexColor_FUN_00552710
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00552a70
        ;   Label: core_set.cpp_CDemonSet_computeLighting_FUN_00552a70
    PUSH ESI                            ; 00552a71
    PUSH EDI                            ; 00552a72
    MOV EBX,dword ptr [ESP + 0x20]      ; 00552a73
    PUSH 0x0                            ; 00552a77
    MOV EDX,dword ptr [ESP + 0x20]      ; 00552a79
    PUSH EDX                            ; 00552a7d
    MOV ECX,dword ptr [ESP + 0x20]      ; 00552a7e
    PUSH ECX                            ; 00552a82
    MOV ESI,dword ptr [ESP + 0x20]      ; 00552a83
    PUSH ESI                            ; 00552a87
    MOV EDI,dword ptr [ESP + 0x20]      ; 00552a88
    PUSH EDI                            ; 00552a8c
    CALL core_set.cpp_CDemonSet_lightVertexColor_FUN_00552710 ; 00552a8d
        ;   XREF to: 00552710 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_lightVertexColor_FUN_00552710(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal, int vertex_index, ...)
    ADD ESP,0x14                        ; 00552a92
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00552a95
    LEA EAX,[EDX*0x4 + 0x0]             ; 00552a99
    SUB EAX,EDX                         ; 00552aa0
    MOV EDX,0x629014                    ; 00552aa2 | DAT_00629014
    SHL EAX,0x4                         ; 00552aa7
    ADD EDX,EAX                         ; 00552aaa
    DEC EBX                             ; 00552aac
    LEA EAX,[EDX + 0x30]                ; 00552aad
    TEST EBX,EBX                        ; 00552ab0
    JLE 0x00552ad0                      ; 00552ab2
        ;   XREF to: 00552ad0 (CONDITIONAL_JUMP)  ; LAB_00552ad0
    MOV ECX,dword ptr [EDX + 0x20]      ; 00552ab4 | DAT_00629034
        ;   Label: LAB_00552ab4
    MOV dword ptr [EAX + 0x20],ECX      ; 00552ab7 | DAT_00629064 | DAT_00629094
    MOV ECX,dword ptr [EDX + 0x24]      ; 00552aba | DAT_00629038
    MOV dword ptr [EAX + 0x24],ECX      ; 00552abd | DAT_00629068 | DAT_00629098
    ADD EAX,0x30                        ; 00552ac0
    MOV ECX,dword ptr [EDX + 0x28]      ; 00552ac3 | DAT_0062903c
    DEC EBX                             ; 00552ac6
    MOV dword ptr [EAX + -0x8],ECX      ; 00552ac7 | DAT_0062906c | DAT_0062909c
    TEST EBX,EBX                        ; 00552aca
    JG 0x00552ab4                       ; 00552acc
        ;   XREF to: 00552ab4 (CONDITIONAL_JUMP)  ; LAB_00552ab4
    MOV EAX,EAX                         ; 00552ace
    POP EDI                             ; 00552ad0
        ;   Label: LAB_00552ad0
    POP ESI                             ; 00552ad1
    POP EBX                             ; 00552ad2
    RET                                 ; 00552ad3

