; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_renderEnvMapBatchTri_FUN_005337b0(CDemonSet *this_ptr,SMRGLHeaderPrimitive *prims,int count,int alpha)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   prims
; int              Stack[0xc]:4   count
; int              Stack[0x10]:4   alpha
;
; XREF[1]:
;   core_set.cpp_FUN_00533ece at 00533f33
;
; Called Functions:
;   core_set.cpp_CDemonSet_renderEnvMapPrimitives_FUN_00533810
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005337b0
        ;   Label: core_set.cpp_CDemonSet_renderEnvMapBatchTri_FUN_005337b0
    PUSH ESI                            ; 005337b1
    PUSH 0x3c                           ; 005337b2
    MOV EDX,dword ptr [ESP + 0x1c]      ; 005337b4
    PUSH EDX                            ; 005337b8
    MOV ECX,dword ptr [ESP + 0x1c]      ; 005337b9
    PUSH ECX                            ; 005337bd
    MOV EBX,dword ptr [ESP + 0x1c]      ; 005337be
    PUSH EBX                            ; 005337c2
    MOV ESI,dword ptr [ESP + 0x1c]      ; 005337c3
    PUSH ESI                            ; 005337c7
    CALL core_set.cpp_CDemonSet_renderEnvMapPrimitives_FUN_00533810 ; 005337c8
        ;   XREF to: 00533810 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderEnvMapPrimitives_FUN_00533810(CDemonSet * this_ptr, SMRGLHeaderPrimitive * prims, int count, int alpha, ...)
    ADD ESP,0x14                        ; 005337cd
    POP ESI                             ; 005337d0
    POP EBX                             ; 005337d1
    RET                                 ; 005337d2

