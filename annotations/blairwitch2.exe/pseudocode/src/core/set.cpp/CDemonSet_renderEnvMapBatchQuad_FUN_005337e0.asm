; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_renderEnvMapBatchQuad_FUN_005337e0(CDemonSet *this_ptr,SMRGLHeaderPrimitive *prims,int count,int alpha)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   prims
; int              Stack[0xc]:4   count
; int              Stack[0x10]:4   alpha
;
; XREF[1]:
;   core_set.cpp_FUN_00533f40 at 0053402d
;
; Called Functions:
;   core_set.cpp_CDemonSet_renderEnvMapPrimitives_FUN_00533810
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005337e0
        ;   Label: core_set.cpp_CDemonSet_renderEnvMapBatchQuad_FUN_005337e0
    PUSH ESI                            ; 005337e1
    PUSH 0x48                           ; 005337e2
    MOV EDX,dword ptr [ESP + 0x1c]      ; 005337e4
    PUSH EDX                            ; 005337e8
    MOV ECX,dword ptr [ESP + 0x1c]      ; 005337e9
    PUSH ECX                            ; 005337ed
    MOV EBX,dword ptr [ESP + 0x1c]      ; 005337ee
    PUSH EBX                            ; 005337f2
    MOV ESI,dword ptr [ESP + 0x1c]      ; 005337f3
    PUSH ESI                            ; 005337f7
    CALL core_set.cpp_CDemonSet_renderEnvMapPrimitives_FUN_00533810 ; 005337f8
        ;   XREF to: 00533810 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderEnvMapPrimitives_FUN_00533810(CDemonSet * this_ptr, SMRGLHeaderPrimitive * prims, int count, int alpha, ...)
    ADD ESP,0x14                        ; 005337fd
    POP ESI                             ; 00533800
    POP EBX                             ; 00533801
    RET                                 ; 00533802

