; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_renderEnvMapBatchQuad_FUN_0053a420(CDemonSet *this_ptr,SMRGLHeaderPrimitive *prims,int count,int alpha)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   prims
; int              Stack[0xc]:4   count
; int              Stack[0x10]:4   alpha
;
; XREF[1]:
;   core_set.cpp_FUN_0053ab80 at 0053ac6d
;
; Called Functions:
;   core_set.cpp_CDemonSet_renderEnvMapPrimitives_FUN_0053a450
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053a420
        ;   Label: core_set.cpp_CDemonSet_renderEnvMapBatchQuad_FUN_0053a420
    PUSH ESI                            ; 0053a421
    PUSH 0x48                           ; 0053a422
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0053a424
    PUSH EDX                            ; 0053a428
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0053a429
    PUSH ECX                            ; 0053a42d
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0053a42e
    PUSH EBX                            ; 0053a432
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0053a433
    PUSH ESI                            ; 0053a437
    CALL core_set.cpp_CDemonSet_renderEnvMapPrimitives_FUN_0053a450 ; 0053a438
        ;   XREF to: 0053a450 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderEnvMapPrimitives_FUN_0053a450(CDemonSet * this_ptr, SMRGLHeaderPrimitive * prims, int count, int alpha, ...)
    ADD ESP,0x14                        ; 0053a43d
    POP ESI                             ; 0053a440
    POP EBX                             ; 0053a441
    RET                                 ; 0053a442

