; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_light_cpp_calculateVertexLighting_FUN_004c6d70(int unused_param,CVector3i *vertex_position)
;
; Parameters:
; int              Stack[0x4]:4   unused_param
; CVector3i *      Stack[0x8]:4   vertex_position
;
; Called Functions:
;   engine_light.cpp_calculatePhongLighting_FUN_004c6a70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c6d70
        ;   Label: engine_light.cpp_calculateVertexLighting_FUN_004c6d70
    MOV EAX,dword ptr [ESP + 0xc]       ; 004c6d71
    MOV EDX,dword ptr [EAX + 0x8]       ; 004c6d75
    PUSH EDX                            ; 004c6d78
    MOV ECX,dword ptr [EAX + 0x4]       ; 004c6d79
    PUSH ECX                            ; 004c6d7c
    MOV EBX,dword ptr [EAX]             ; 004c6d7d
    PUSH EBX                            ; 004c6d7f
    CALL engine_light.cpp_calculatePhongLighting_FUN_004c6a70 ; 004c6d80
        ;   XREF to: 004c6a70 (UNCONDITIONAL_CALL)  ; int engine_light.cpp_calculatePhongLighting_FUN_004c6a70(int world_x, int world_y, int world_z)
    ADD ESP,0xc                         ; 004c6d85
    POP EBX                             ; 004c6d88
    RET                                 ; 004c6d89

