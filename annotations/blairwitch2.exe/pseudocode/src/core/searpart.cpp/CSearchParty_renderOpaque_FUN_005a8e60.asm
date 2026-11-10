; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_searpart_cpp_CSearchParty_renderOpaque_FUN_005a8e60(CSearchParty *this_ptr)
;
; Parameters:
; CSearchParty *   Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_basicnpc.cpp_CBasicNPC_renderOpaque_FUN_005a4920
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a8e60
        ;   Label: core_searpart.cpp_CSearchParty_renderOpaque_FUN_005a8e60
    PUSH EDX                            ; 005a8e64
    CALL core_basicnpc.cpp_CBasicNPC_renderOpaque_FUN_005a4920 ; 005a8e65
        ;   XREF to: 005a4920 (UNCONDITIONAL_CALL)  ; int core_basicnpc.cpp_CBasicNPC_renderOpaque_FUN_005a4920(CBasicNPC * this_ptr)
    ADD ESP,0x4                         ; 005a8e6a
    RET                                 ; 005a8e6d

