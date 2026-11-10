; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_computeLighting_FUN_005317c0(CDemonSet *this_ptr,CVector3i *world_position,CVector3i *surface_normal,int start_vertex_index,int vertex_count)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; CVector3i *      Stack[0x8]:4   world_position
; CVector3i *      Stack[0xc]:4   surface_normal
; int              Stack[0x10]:4   start_vertex_index
; int              Stack[0x14]:4   vertex_count
;
; XREF[8]:
;   core_chain.cpp_FUN_005b56c0 at 005b59e3
;   core_fire.cpp_CBulletHole_render_FUN_00493dd0 at 004940f4
;   core_fire.cpp_CGlassParticle_render_FUN_00497050 at 004971dd
;   core_fire.cpp_CPopcorn_render_FUN_0049b9d0 at 0049bca5
;   core_fire.cpp_CRainDrop_render_FUN_0049bd40 at 0049c04f
;   core_fire.cpp_CSmokeParticle_render_FUN_00493710 at 004939d4
;   core_gore.cpp_FUN_004c7580 at 004c7821
;   core_weather.cpp_CWeather_renderParticles_FUN_0058ad40 at 0058af6b
;
; Referenced Globals:
;   undefined4 DAT_00622014
;   undefined4 DAT_00622034
;   undefined4 DAT_00622038
;   undefined4 DAT_0062203c
;   undefined4 DAT_00622064
;   undefined4 DAT_00622068
;   undefined4 DAT_0062206c
;   undefined4 DAT_00622094
;   undefined4 DAT_00622098
;   undefined4 DAT_0062209c
;
; Called Functions:
;   core_set.cpp_CDemonSet_lightVertexColor_FUN_00531460
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005317c0
        ;   Label: core_set.cpp_CDemonSet_computeLighting_FUN_005317c0
    PUSH ESI                            ; 005317c1
    PUSH EDI                            ; 005317c2
    MOV EBX,dword ptr [ESP + 0x20]      ; 005317c3
    PUSH 0x0                            ; 005317c7
    MOV EDX,dword ptr [ESP + 0x20]      ; 005317c9
    PUSH EDX                            ; 005317cd
    MOV ECX,dword ptr [ESP + 0x20]      ; 005317ce
    PUSH ECX                            ; 005317d2
    MOV ESI,dword ptr [ESP + 0x20]      ; 005317d3
    PUSH ESI                            ; 005317d7
    MOV EDI,dword ptr [ESP + 0x20]      ; 005317d8
    PUSH EDI                            ; 005317dc
    CALL core_set.cpp_CDemonSet_lightVertexColor_FUN_00531460 ; 005317dd
        ;   XREF to: 00531460 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_lightVertexColor_FUN_00531460(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal, int vertex_index, ...)
    ADD ESP,0x14                        ; 005317e2
    MOV EDX,dword ptr [ESP + 0x1c]      ; 005317e5
    LEA EAX,[EDX*0x4 + 0x0]             ; 005317e9
    SUB EAX,EDX                         ; 005317f0
    MOV EDX,0x622014                    ; 005317f2 | DAT_00622014
    SHL EAX,0x4                         ; 005317f7
    ADD EDX,EAX                         ; 005317fa
    DEC EBX                             ; 005317fc
    LEA EAX,[EDX + 0x30]                ; 005317fd
    TEST EBX,EBX                        ; 00531800
    JLE 0x00531820                      ; 00531802
        ;   XREF to: 00531820 (CONDITIONAL_JUMP)  ; LAB_00531820
    MOV ECX,dword ptr [EDX + 0x20]      ; 00531804 | DAT_00622034
        ;   Label: LAB_00531804
    MOV dword ptr [EAX + 0x20],ECX      ; 00531807 | DAT_00622064 | DAT_00622094
    MOV ECX,dword ptr [EDX + 0x24]      ; 0053180a | DAT_00622038
    MOV dword ptr [EAX + 0x24],ECX      ; 0053180d | DAT_00622068 | DAT_00622098
    ADD EAX,0x30                        ; 00531810
    MOV ECX,dword ptr [EDX + 0x28]      ; 00531813 | DAT_0062203c
    DEC EBX                             ; 00531816
    MOV dword ptr [EAX + -0x8],ECX      ; 00531817 | DAT_0062206c | DAT_0062209c
    TEST EBX,EBX                        ; 0053181a
    JG 0x00531804                       ; 0053181c
        ;   XREF to: 00531804 (CONDITIONAL_JUMP)  ; LAB_00531804
    MOV EAX,EAX                         ; 0053181e
    POP EDI                             ; 00531820
        ;   Label: LAB_00531820
    POP ESI                             ; 00531821
    POP EBX                             ; 00531822
    RET                                 ; 00531823

