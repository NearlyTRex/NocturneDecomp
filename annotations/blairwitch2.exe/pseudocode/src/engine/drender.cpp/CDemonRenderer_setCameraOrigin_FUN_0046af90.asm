; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_setCameraOrigin_FUN_0046af90(CDemonRenderer *this_ptr,CVector3i *origin)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; CVector3i *      Stack[0x8]:4   origin
;
; XREF[1]:
;   core_terrain.cpp_CTerrain_render_FUN_0057b860 at 0057b935
;
; Called Functions:
;   engine_matrix.c_setCameraOrigin_FUN_004ea360
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046af90
        ;   Label: engine_drender.cpp_CDemonRenderer_setCameraOrigin_FUN_0046af90
    MOV EAX,dword ptr [ESP + 0xc]       ; 0046af91
    MOV EDX,dword ptr [EAX + 0x8]       ; 0046af95
    PUSH EDX                            ; 0046af98
    MOV ECX,dword ptr [EAX + 0x4]       ; 0046af99
    PUSH ECX                            ; 0046af9c
    MOV EBX,dword ptr [EAX]             ; 0046af9d
    PUSH EBX                            ; 0046af9f
    CALL engine_matrix.c_setCameraOrigin_FUN_004ea360 ; 0046afa0
        ;   XREF to: 004ea360 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_setCameraOrigin_FUN_004ea360(int x, int y, int z)
    ADD ESP,0xc                         ; 0046afa5
    POP EBX                             ; 0046afa8
    RET                                 ; 0046afa9

