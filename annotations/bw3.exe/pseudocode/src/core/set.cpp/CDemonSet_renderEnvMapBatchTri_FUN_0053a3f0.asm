; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_renderEnvMapBatchTri_FUN_0053a3f0(CDemonSet *this_ptr,SMRGLHeaderPrimitive *prims,int count,int alpha)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   prims
; int              Stack[0xc]:4   count
; int              Stack[0x10]:4   alpha
;
; XREF[1]:
;   core_set.cpp_FUN_0053ab0e at 0053ab73
;
; Called Functions:
;   core_set.cpp_CDemonSet_renderEnvMapPrimitives_FUN_0053a450
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053a3f0
        ;   Label: core_set.cpp_CDemonSet_renderEnvMapBatchTri_FUN_0053a3f0
    PUSH ESI                            ; 0053a3f1
    PUSH 0x3c                           ; 0053a3f2
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0053a3f4
    PUSH EDX                            ; 0053a3f8
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0053a3f9
    PUSH ECX                            ; 0053a3fd
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0053a3fe
    PUSH EBX                            ; 0053a402
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0053a403
    PUSH ESI                            ; 0053a407
    CALL core_set.cpp_CDemonSet_renderEnvMapPrimitives_FUN_0053a450 ; 0053a408
        ;   XREF to: 0053a450 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderEnvMapPrimitives_FUN_0053a450(CDemonSet * this_ptr, SMRGLHeaderPrimitive * prims, int count, int alpha, ...)
    ADD ESP,0x14                        ; 0053a40d
    POP ESI                             ; 0053a410
    POP EBX                             ; 0053a411
    RET                                 ; 0053a412

