; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_renderEnvMapBatchTri_FUN_00554a60(CDemonSet *this_ptr,SMRGLHeaderPrimitive *prims,int count,int alpha)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   prims
; int              Stack[0xc]:4   count
; int              Stack[0x10]:4   alpha
;
; XREF[1]:
;   core_set.cpp_FUN_00555180 at 005551e3
;
; Called Functions:
;   core_set.cpp_CDemonSet_renderEnvMapPrimitives_FUN_00554ac0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00554a60
        ;   Label: core_set.cpp_CDemonSet_renderEnvMapBatchTri_FUN_00554a60
    PUSH ESI                            ; 00554a61
    PUSH 0x3c                           ; 00554a62
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00554a64
    PUSH EDX                            ; 00554a68
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00554a69
    PUSH ECX                            ; 00554a6d
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00554a6e
    PUSH EBX                            ; 00554a72
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00554a73
    PUSH ESI                            ; 00554a77
    CALL core_set.cpp_CDemonSet_renderEnvMapPrimitives_FUN_00554ac0 ; 00554a78
        ;   XREF to: 00554ac0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderEnvMapPrimitives_FUN_00554ac0(CDemonSet * this_ptr, SMRGLHeaderPrimitive * prims, int count, int alpha, ...)
    ADD ESP,0x14                        ; 00554a7d
    POP ESI                             ; 00554a80
    POP EBX                             ; 00554a81
    RET                                 ; 00554a82

