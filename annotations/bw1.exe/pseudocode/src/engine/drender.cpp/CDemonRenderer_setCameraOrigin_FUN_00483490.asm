; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_setCameraOrigin_FUN_00483490(CDemonRenderer *this_ptr,CVector3i *origin)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; CVector3i *      Stack[0x8]:4   origin
;
; XREF[1]:
;   core_terrain.cpp_CTerrain_render_FUN_0059f3e0 at 0059f4b5
;
; Called Functions:
;   engine_matrix.c_setCameraOrigin_FUN_00509000
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00483490
        ;   Label: engine_drender.cpp_CDemonRenderer_setCameraOrigin_FUN_00483490
    MOV EAX,dword ptr [ESP + 0xc]       ; 00483491
    MOV EDX,dword ptr [EAX + 0x8]       ; 00483495
    PUSH EDX                            ; 00483498
    MOV ECX,dword ptr [EAX + 0x4]       ; 00483499
    PUSH ECX                            ; 0048349c
    MOV EBX,dword ptr [EAX]             ; 0048349d
    PUSH EBX                            ; 0048349f
    CALL engine_matrix.c_setCameraOrigin_FUN_00509000 ; 004834a0
        ;   XREF to: 00509000 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_setCameraOrigin_FUN_00509000(int x, int y, int z)
    ADD ESP,0xc                         ; 004834a5
    POP EBX                             ; 004834a8
    RET                                 ; 004834a9

