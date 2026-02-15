; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_setCameraOrigin_FUN_0048c130(CDemonRenderer *this_ptr,CVector3i *origin)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; CVector3i *      Stack[0x8]:4   origin
;
; XREF[1]:
;   core_terrain.cpp_CTerrain_render_FUN_005e1f50 at 005e2019
;
; Called Functions:
;   engine_matrix.c_setCameraOrigin_FUN_0050e270
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048c130
        ;   Label: engine_drender.cpp_CDemonRenderer_setCameraOrigin_FUN_0048c130
    MOV EAX,dword ptr [ESP + 0xc]       ; 0048c131
    MOV EDX,dword ptr [EAX + 0x8]       ; 0048c135
    PUSH EDX                            ; 0048c138
    MOV ECX,dword ptr [EAX + 0x4]       ; 0048c139
    PUSH ECX                            ; 0048c13c
    MOV EBX,dword ptr [EAX]             ; 0048c13d
    PUSH EBX                            ; 0048c13f
    CALL engine_matrix.c_setCameraOrigin_FUN_0050e270 ; 0048c140
        ;   XREF to: 0050e270 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_setCameraOrigin_FUN_0050e270(int x, int y, int z)
    ADD ESP,0xc                         ; 0048c145
    POP EBX                             ; 0048c148
    RET                                 ; 0048c149

