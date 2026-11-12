; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_light_cpp_calculateAndStoreVertexLight_FUN_004e2980(int vertex_index,CVector3i *vertex_position)
;
; Parameters:
; int              Stack[0x4]:4   vertex_index
; CVector3i *      Stack[0x8]:4   vertex_position
;
; XREF[1]:
;   engine_3d.c_processVertexLighting_FUN_00403a40 at 00403a67
;
; Referenced Globals:
;   undefined4 DAT_00622034
;
; Called Functions:
;   engine_light.cpp_calculatePhongLighting_FUN_004e2660
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e2980
        ;   Label: engine_light.cpp_calculateAndStoreVertexLight_FUN_004e2980
    MOV EAX,dword ptr [ESP + 0xc]       ; 004e2981
    MOV EDX,dword ptr [EAX + 0x8]       ; 004e2985
    PUSH EDX                            ; 004e2988
    MOV ECX,dword ptr [EAX + 0x4]       ; 004e2989
    PUSH ECX                            ; 004e298c
    MOV EBX,dword ptr [EAX]             ; 004e298d
    PUSH EBX                            ; 004e298f
    CALL engine_light.cpp_calculatePhongLighting_FUN_004e2660 ; 004e2990
        ;   XREF to: 004e2660 (UNCONDITIONAL_CALL)  ; int engine_light.cpp_calculatePhongLighting_FUN_004e2660(int world_x, int world_y, int world_z)
    ADD ESP,0xc                         ; 004e2995
    MOV EDX,dword ptr [ESP + 0x8]       ; 004e2998
    MOV ECX,EAX                         ; 004e299c
    LEA EAX,[EDX*0x4 + 0x0]             ; 004e299e
    SUB EAX,EDX                         ; 004e29a5
    SHL EAX,0x4                         ; 004e29a7
    MOV dword ptr [EAX + 0x622034],ECX  ; 004e29aa | DAT_00622034
    POP EBX                             ; 004e29b0
    RET                                 ; 004e29b1

