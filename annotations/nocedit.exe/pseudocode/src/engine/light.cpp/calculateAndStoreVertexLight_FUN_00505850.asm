; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_light_cpp_calculateAndStoreVertexLight_FUN_00505850(int vertex_index,CVector3i *vertex_position)
;
; Parameters:
; int              Stack[0x4]:4   vertex_index
; CVector3i *      Stack[0x8]:4   vertex_position
;
; XREF[2]:
;   engine_3d.c_processVertexLighting_FUN_00403a20 at 00403a47
;   engine_drender.cpp_calculateVertexLight_FUN_0048c740 at 0048c74a
;
; Referenced Globals:
;   undefined4 g_RenderVertexBuffer[0].z
;
; Called Functions:
;   engine_light.cpp_calculatePhongLighting_FUN_00505530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00505850
        ;   Label: engine_light.cpp_calculateAndStoreVertexLight_FUN_00505850
    MOV EAX,dword ptr [ESP + 0xc]       ; 00505851
    MOV EDX,dword ptr [EAX + 0x8]       ; 00505855
    PUSH EDX                            ; 00505858
    MOV ECX,dword ptr [EAX + 0x4]       ; 00505859
    PUSH ECX                            ; 0050585c
    MOV EBX,dword ptr [EAX]             ; 0050585d
    PUSH EBX                            ; 0050585f
    CALL engine_light.cpp_calculatePhongLighting_FUN_00505530 ; 00505860
        ;   XREF to: 00505530 (UNCONDITIONAL_CALL)  ; int engine_light.cpp_calculatePhongLighting_FUN_00505530(int world_x, int world_y, int world_z)
    ADD ESP,0xc                         ; 00505865
    MOV EDX,dword ptr [ESP + 0x8]       ; 00505868
    MOV ECX,EAX                         ; 0050586c
    LEA EAX,[EDX*0x4 + 0x0]             ; 0050586e
    SUB EAX,EDX                         ; 00505875
    SHL EAX,0x4                         ; 00505877
    MOV dword ptr [EAX + 0x688034],ECX  ; 0050587a | g_RenderVertexBuffer[0].z
    POP EBX                             ; 00505880
    RET                                 ; 00505881

