; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_renderEnvMapBatchTri_FUN_0050d640(CDemonSet *this_ptr,SMRGLHeaderPrimitive *prims,int count,int alpha)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   prims
; int              Stack[0xc]:4   count
; int              Stack[0x10]:4   alpha
;
; XREF[1]:
;   core_set.cpp_CDemonSet_FUN_0050dd60 at 0050ddc3
;
; Called Functions:
;   core_set.cpp_CDemonSet_renderEnvMapPrimitives_FUN_0050d6a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050d640
        ;   Label: core_set.cpp_CDemonSet_renderEnvMapBatchTri_FUN_0050d640
    PUSH ESI                            ; 0050d641
    PUSH 0x3c                           ; 0050d642
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0050d644
    PUSH EDX                            ; 0050d648
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0050d649
    PUSH ECX                            ; 0050d64d
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0050d64e
    PUSH EBX                            ; 0050d652
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0050d653
    PUSH ESI                            ; 0050d657
    CALL core_set.cpp_CDemonSet_renderEnvMapPrimitives_FUN_0050d6a0 ; 0050d658
        ;   XREF to: 0050d6a0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderEnvMapPrimitives_FUN_0050d6a0(CDemonSet * this_ptr, SMRGLHeaderPrimitive * prims, int count, int alpha, ...)
    ADD ESP,0x14                        ; 0050d65d
    POP ESI                             ; 0050d660
    POP EBX                             ; 0050d661
    RET                                 ; 0050d662

