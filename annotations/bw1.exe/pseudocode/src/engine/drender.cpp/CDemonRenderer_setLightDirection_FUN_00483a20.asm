; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_setLightDirection_FUN_00483a20(CDemonRenderer *this_ptr,CVector3i *direction)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; CVector3i *      Stack[0x8]:4   direction
;
; XREF[1]:
;   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0054e3c0 at 0054e3db
;
; Called Functions:
;   engine_light.cpp_setDirectionalLightVector_FUN_004ffa90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00483a20
        ;   Label: engine_drender.cpp_CDemonRenderer_setLightDirection_FUN_00483a20
    MOV EAX,dword ptr [ESP + 0xc]       ; 00483a21
    MOV EDX,dword ptr [EAX + 0x8]       ; 00483a25
    PUSH EDX                            ; 00483a28
    MOV ECX,dword ptr [EAX + 0x4]       ; 00483a29
    PUSH ECX                            ; 00483a2c
    MOV EBX,dword ptr [EAX]             ; 00483a2d
    PUSH EBX                            ; 00483a2f
    CALL engine_light.cpp_setDirectionalLightVector_FUN_004ffa90 ; 00483a30
        ;   XREF to: 004ffa90 (UNCONDITIONAL_CALL)  ; void engine_light.cpp_setDirectionalLightVector_FUN_004ffa90(int dir_x, int dir_y, int dir_z)
    ADD ESP,0xc                         ; 00483a35
    POP EBX                             ; 00483a38
    RET                                 ; 00483a39

