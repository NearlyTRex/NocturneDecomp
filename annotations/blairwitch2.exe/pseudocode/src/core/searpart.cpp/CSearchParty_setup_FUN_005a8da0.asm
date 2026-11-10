; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_searpart_cpp_CSearchParty_setup_FUN_005a8da0(CSearchParty *this_ptr)
;
; Parameters:
; CSearchParty *   Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_basicnpc.cpp_CBasicNPC_setup_FUN_005a4870
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a8da0
        ;   Label: core_searpart.cpp_CSearchParty_setup_FUN_005a8da0
    PUSH EDX                            ; 005a8da4
    CALL core_basicnpc.cpp_CBasicNPC_setup_FUN_005a4870 ; 005a8da5
        ;   XREF to: 005a4870 (UNCONDITIONAL_CALL)  ; void core_basicnpc.cpp_CBasicNPC_setup_FUN_005a4870(CBasicNPC * this_ptr)
    ADD ESP,0x4                         ; 005a8daa
    RET                                 ; 005a8dad

