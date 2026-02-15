; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_setLightDirection_FUN_0048c6c0(CDemonRenderer *this_ptr,CVector3i *direction)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; CVector3i *      Stack[0x8]:4   direction
;
; XREF[1]:
;   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190 at 0056a1ab
;
; Called Functions:
;   engine_light.cpp_setDirectionalLightVector_FUN_005054d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048c6c0
        ;   Label: engine_drender.cpp_CDemonRenderer_setLightDirection_FUN_0048c6c0
    MOV EAX,dword ptr [ESP + 0xc]       ; 0048c6c1
    MOV EDX,dword ptr [EAX + 0x8]       ; 0048c6c5
    PUSH EDX                            ; 0048c6c8
    MOV ECX,dword ptr [EAX + 0x4]       ; 0048c6c9
    PUSH ECX                            ; 0048c6cc
    MOV EBX,dword ptr [EAX]             ; 0048c6cd
    PUSH EBX                            ; 0048c6cf
    CALL engine_light.cpp_setDirectionalLightVector_FUN_005054d0 ; 0048c6d0
        ;   XREF to: 005054d0 (UNCONDITIONAL_CALL)  ; void engine_light.cpp_setDirectionalLightVector_FUN_005054d0(int dir_x, int dir_y, int dir_z)
    ADD ESP,0xc                         ; 0048c6d5
    POP EBX                             ; 0048c6d8
    RET                                 ; 0048c6d9

