; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_union_cpp_CUnion_renderOpaque_FUN_005a5440(CUnion *this_ptr)
;
; Parameters:
; CUnion *         Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_basicnpc.cpp_CBasicNPC_renderOpaque_FUN_005a4920
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a5440
        ;   Label: core_union.cpp_CUnion_renderOpaque_FUN_005a5440
    PUSH EDX                            ; 005a5444
    CALL core_basicnpc.cpp_CBasicNPC_renderOpaque_FUN_005a4920 ; 005a5445
        ;   XREF to: 005a4920 (UNCONDITIONAL_CALL)  ; int core_basicnpc.cpp_CBasicNPC_renderOpaque_FUN_005a4920(CBasicNPC * this_ptr)
    ADD ESP,0x4                         ; 005a544a
    RET                                 ; 005a544d

