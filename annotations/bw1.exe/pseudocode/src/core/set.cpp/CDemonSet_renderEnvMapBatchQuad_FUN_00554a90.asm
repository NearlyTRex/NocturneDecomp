; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_renderEnvMapBatchQuad_FUN_00554a90(CDemonSet *this_ptr,SMRGLHeaderPrimitive *prims,int count,int alpha)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   prims
; int              Stack[0xc]:4   count
; int              Stack[0x10]:4   alpha
;
; XREF[1]:
;   core_set.cpp_FUN_005551f0 at 005552dd
;
; Called Functions:
;   core_set.cpp_CDemonSet_renderEnvMapPrimitives_FUN_00554ac0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00554a90
        ;   Label: core_set.cpp_CDemonSet_renderEnvMapBatchQuad_FUN_00554a90
    PUSH ESI                            ; 00554a91
    PUSH 0x48                           ; 00554a92
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00554a94
    PUSH EDX                            ; 00554a98
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00554a99
    PUSH ECX                            ; 00554a9d
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00554a9e
    PUSH EBX                            ; 00554aa2
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00554aa3
    PUSH ESI                            ; 00554aa7
    CALL core_set.cpp_CDemonSet_renderEnvMapPrimitives_FUN_00554ac0 ; 00554aa8
        ;   XREF to: 00554ac0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderEnvMapPrimitives_FUN_00554ac0(CDemonSet * this_ptr, SMRGLHeaderPrimitive * prims, int count, int alpha, ...)
    ADD ESP,0x14                        ; 00554aad
    POP ESI                             ; 00554ab0
    POP EBX                             ; 00554ab1
    RET                                 ; 00554ab2

