; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_setLightDirection_FUN_00460c70(CDemonRenderer *this_ptr,CVector3i *direction)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; CVector3i *      Stack[0x8]:4   direction
;
; XREF[1]:
;   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_00507c80 at 00507c9b
;
; Called Functions:
;   engine_light.cpp_setDirectionalLightVector_FUN_004c6a10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00460c70
        ;   Label: engine_drender.cpp_CDemonRenderer_setLightDirection_FUN_00460c70
    MOV EAX,dword ptr [ESP + 0xc]       ; 00460c71
    MOV EDX,dword ptr [EAX + 0x8]       ; 00460c75
    PUSH EDX                            ; 00460c78
    MOV ECX,dword ptr [EAX + 0x4]       ; 00460c79
    PUSH ECX                            ; 00460c7c
    MOV EBX,dword ptr [EAX]             ; 00460c7d
    PUSH EBX                            ; 00460c7f
    CALL engine_light.cpp_setDirectionalLightVector_FUN_004c6a10 ; 00460c80
        ;   XREF to: 004c6a10 (UNCONDITIONAL_CALL)  ; void engine_light.cpp_setDirectionalLightVector_FUN_004c6a10(int dir_x, int dir_y, int dir_z)
    ADD ESP,0xc                         ; 00460c85
    POP EBX                             ; 00460c88
    RET                                 ; 00460c89

