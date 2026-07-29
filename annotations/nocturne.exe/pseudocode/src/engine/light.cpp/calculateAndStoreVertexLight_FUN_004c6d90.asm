; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_light_cpp_calculateAndStoreVertexLight_FUN_004c6d90(int vertex_index,CVector3i *vertex_position)
;
; Parameters:
; int              Stack[0x4]:4   vertex_index
; CVector3i *      Stack[0x8]:4   vertex_position
;
; XREF[1]:
;   engine_3d.c_processVertexLighting_FUN_00404730 at 00404757
;
; Referenced Globals:
;   undefined4 DAT_005c5034
;
; Called Functions:
;   engine_light.cpp_calculatePhongLighting_FUN_004c6a70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c6d90
        ;   Label: engine_light.cpp_calculateAndStoreVertexLight_FUN_004c6d90
    MOV EAX,dword ptr [ESP + 0xc]       ; 004c6d91
    MOV EDX,dword ptr [EAX + 0x8]       ; 004c6d95
    PUSH EDX                            ; 004c6d98
    MOV ECX,dword ptr [EAX + 0x4]       ; 004c6d99
    PUSH ECX                            ; 004c6d9c
    MOV EBX,dword ptr [EAX]             ; 004c6d9d
    PUSH EBX                            ; 004c6d9f
    CALL engine_light.cpp_calculatePhongLighting_FUN_004c6a70 ; 004c6da0
        ;   XREF to: 004c6a70 (UNCONDITIONAL_CALL)  ; int engine_light.cpp_calculatePhongLighting_FUN_004c6a70(int world_x, int world_y, int world_z)
    ADD ESP,0xc                         ; 004c6da5
    MOV EDX,dword ptr [ESP + 0x8]       ; 004c6da8
    MOV ECX,EAX                         ; 004c6dac
    LEA EAX,[EDX*0x4 + 0x0]             ; 004c6dae
    SUB EAX,EDX                         ; 004c6db5
    SHL EAX,0x4                         ; 004c6db7
    MOV dword ptr [EAX + 0x5c5034],ECX  ; 004c6dba | DAT_005c5034
    POP EBX                             ; 004c6dc0
    RET                                 ; 004c6dc1

