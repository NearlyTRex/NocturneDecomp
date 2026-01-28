; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_set_cpp_CDemonSet_computeLighting_FUN_0056e110 (CDemonSet *this_ptr,CVector3i *world_position,CVector3i *surface_normal, int start_vertex_index,int vertex_count)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; CVector3i *      Stack[0x8]:4   world_position
; CVector3i *      Stack[0xc]:4   surface_normal
; int              Stack[0x10]:4   start_vertex_index
; int              Stack[0x14]:4   vertex_count
;
; XREF[8]:
;   core_chain.cpp_FUN_004308f0 at 00430e36
;   core_fire.cpp_CBulletHole_render_FUN_004bfac0 at 004bfdd2
;   core_fire.cpp_CGlassParticle_render_FUN_004c1ef0 at 004c207a
;   core_fire.cpp_CPopcorn_render_FUN_004c64c0 at 004c6795
;   core_fire.cpp_CRainDrop_render_FUN_004c6830 at 004c6b3f
;   core_fire.cpp_CSmokeParticle_render_FUN_004bf4c0 at 004bf784
;   core_gore.cpp_FUN_004ebac0 at 004ebd83
;   core_weather.cpp_CWeather_FUN_005ef190 at 005ef3ae
;
; Referenced Globals:
;   SRenderVertex[16] g_RenderVertexBuffer
;   undefined4 g_RenderVertexBuffer[0].light
;   undefined4 g_RenderVertexBuffer[0].color
;   undefined4 g_RenderVertexBuffer[0].fog
;   undefined4 g_RenderVertexBuffer[1].light
;   undefined4 g_RenderVertexBuffer[1].color
;   undefined4 g_RenderVertexBuffer[1].fog
;   undefined4 g_RenderVertexBuffer[2].light
;   undefined4 g_RenderVertexBuffer[2].color
;   undefined4 g_RenderVertexBuffer[2].fog
;
; Called Functions:
;   core_set.cpp_CDemonSet_lightVertexColor_FUN_0056ddb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056e110
        ;   Label: core_set.cpp_CDemonSet_computeLighting_FUN_0056e110
    PUSH ESI                            ; 0056e111
    PUSH EDI                            ; 0056e112
    MOV EBX,dword ptr [ESP + 0x20]      ; 0056e113
    PUSH 0x0                            ; 0056e117
    MOV EDX,dword ptr [ESP + 0x20]      ; 0056e119
    PUSH EDX                            ; 0056e11d
    MOV ECX,dword ptr [ESP + 0x20]      ; 0056e11e
    PUSH ECX                            ; 0056e122
    MOV ESI,dword ptr [ESP + 0x20]      ; 0056e123
    PUSH ESI                            ; 0056e127
    MOV EDI,dword ptr [ESP + 0x20]      ; 0056e128
    PUSH EDI                            ; 0056e12c
    CALL core_set.cpp_CDemonSet_lightVertexColor_FUN_0056ddb0 ; 0056e12d
        ;   XREF to: 0056ddb0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_lightVertexColor_FUN_0056ddb0(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal, int vertex_index, ...)
    ADD ESP,0x14                        ; 0056e132
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0056e135
    LEA EAX,[EDX*0x4 + 0x0]             ; 0056e139
    SUB EAX,EDX                         ; 0056e140
    MOV EDX,0x688014                    ; 0056e142 | g_RenderVertexBuffer
    SHL EAX,0x4                         ; 0056e147
    ADD EDX,EAX                         ; 0056e14a
    DEC EBX                             ; 0056e14c
    LEA EAX,[EDX + 0x30]                ; 0056e14d
    TEST EBX,EBX                        ; 0056e150
    JLE 0x0056e170                      ; 0056e152
        ;   XREF to: 0056e170 (CONDITIONAL_JUMP)  ; LAB_0056e170
    MOV ECX,dword ptr [EDX + 0x20]      ; 0056e154 | g_RenderVertexBuffer[0].light
        ;   Label: LAB_0056e154
    MOV dword ptr [EAX + 0x20],ECX      ; 0056e157 | g_RenderVertexBuffer[1].light | g_RenderVertexBuffer[2].light
    MOV ECX,dword ptr [EDX + 0x24]      ; 0056e15a | g_RenderVertexBuffer[0].color
    MOV dword ptr [EAX + 0x24],ECX      ; 0056e15d | g_RenderVertexBuffer[1].color | g_RenderVertexBuffer[2].color
    ADD EAX,0x30                        ; 0056e160
    MOV ECX,dword ptr [EDX + 0x28]      ; 0056e163 | g_RenderVertexBuffer[0].fog
    DEC EBX                             ; 0056e166
    MOV dword ptr [EAX + -0x8],ECX      ; 0056e167 | g_RenderVertexBuffer[1].fog | g_RenderVertexBuffer[2].fog
    TEST EBX,EBX                        ; 0056e16a
    JG 0x0056e154                       ; 0056e16c
        ;   XREF to: 0056e154 (CONDITIONAL_JUMP)  ; LAB_0056e154
    MOV EAX,EAX                         ; 0056e16e
    POP EDI                             ; 0056e170
        ;   Label: LAB_0056e170
    POP ESI                             ; 0056e171
    POP EBX                             ; 0056e172
    RET                                 ; 0056e173

