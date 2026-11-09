; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_setCameraOrigin_FUN_0046cb70(CDemonRenderer *this_ptr,CVector3i *origin)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; CVector3i *      Stack[0x8]:4   origin
;
; XREF[1]:
;   core_terrain.cpp_CTerrain_render_FUN_005723d0 at 005724a5
;
; Called Functions:
;   engine_matrix.c_setCameraOrigin_FUN_004e6a40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046cb70
        ;   Label: engine_drender.cpp_CDemonRenderer_setCameraOrigin_FUN_0046cb70
    MOV EAX,dword ptr [ESP + 0xc]       ; 0046cb71
    MOV EDX,dword ptr [EAX + 0x8]       ; 0046cb75
    PUSH EDX                            ; 0046cb78
    MOV ECX,dword ptr [EAX + 0x4]       ; 0046cb79
    PUSH ECX                            ; 0046cb7c
    MOV EBX,dword ptr [EAX]             ; 0046cb7d
    PUSH EBX                            ; 0046cb7f
    CALL engine_matrix.c_setCameraOrigin_FUN_004e6a40 ; 0046cb80
        ;   XREF to: 004e6a40 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_setCameraOrigin_FUN_004e6a40(int x, int y, int z)
    ADD ESP,0xc                         ; 0046cb85
    POP EBX                             ; 0046cb88
    RET                                 ; 0046cb89

