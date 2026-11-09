; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ground_cpp_CGround_renderTerrainPrimitive_FUN_004e7c60(CGround *this_ptr,SMRGLHeaderPrimitive *primitive)
;
; Parameters:
; CGround *        Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   primitive
;
; XREF[1]:
;   core_ground.cpp_CGround_renderTerrainQuad_FUN_004e7c80 at 004e7dbc
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   undefined4 DAT_01bc120c
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_00482170
;
; *****************************************************************************

section .text

    PUSH 0x24d                          ; 004e7c60
        ;   Label: core_ground.cpp_CGround_renderTerrainPrimitive_FUN_004e7c60
    MOV EDX,dword ptr [ESP + 0xc]       ; 004e7c65
    PUSH EDX                            ; 004e7c69
    MOV ECX,dword ptr [0x00612560]      ; 004e7c6a | DAT_00612560
    PUSH ECX                            ; 004e7c70 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_00482170 ; 004e7c71
        ;   XREF to: 00482170 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_00482170(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim, int render_flags)
    ADD ESP,0xc                         ; 004e7c76
    RET                                 ; 004e7c79

