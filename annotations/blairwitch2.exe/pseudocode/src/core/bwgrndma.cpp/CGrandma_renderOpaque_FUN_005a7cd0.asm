; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_bwgrndma_cpp_CGrandma_renderOpaque_FUN_005a7cd0(CGrandma *this_ptr)
;
; Parameters:
; CGrandma *       Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_basicnpc.cpp_CBasicNPC_renderOpaque_FUN_005a4920
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a7cd0
        ;   Label: core_bwgrndma.cpp_CGrandma_renderOpaque_FUN_005a7cd0
    PUSH EDX                            ; 005a7cd4
    CALL core_basicnpc.cpp_CBasicNPC_renderOpaque_FUN_005a4920 ; 005a7cd5
        ;   XREF to: 005a4920 (UNCONDITIONAL_CALL)  ; int core_basicnpc.cpp_CBasicNPC_renderOpaque_FUN_005a4920(CBasicNPC * this_ptr)
    ADD ESP,0x4                         ; 005a7cda
    RET                                 ; 005a7cdd

