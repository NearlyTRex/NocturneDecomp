; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl engine_light_cpp_calculateVertexLighting_FUN_00505830(int unused_param,CVector3i *vertex_position)
;
; Parameters:
; int              Stack[0x4]:4   unused_param
; CVector3i *      Stack[0x8]:4   vertex_position
;
; Called Functions:
;   engine_light.cpp_calculatePhongLighting_FUN_00505530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00505830
        ;   Label: engine_light.cpp_calculateVertexLighting_FUN_00505830
    MOV EAX,dword ptr [ESP + 0xc]       ; 00505831
    MOV EDX,dword ptr [EAX + 0x8]       ; 00505835
    PUSH EDX                            ; 00505838
    MOV ECX,dword ptr [EAX + 0x4]       ; 00505839
    PUSH ECX                            ; 0050583c
    MOV EBX,dword ptr [EAX]             ; 0050583d
    PUSH EBX                            ; 0050583f
    CALL engine_light.cpp_calculatePhongLighting_FUN_00505530 ; 00505840
        ;   XREF to: 00505530 (UNCONDITIONAL_CALL)  ; int engine_light.cpp_calculatePhongLighting_FUN_00505530(int world_x, int world_y, int world_z)
    ADD ESP,0xc                         ; 00505845
    POP EBX                             ; 00505848
    RET                                 ; 00505849

