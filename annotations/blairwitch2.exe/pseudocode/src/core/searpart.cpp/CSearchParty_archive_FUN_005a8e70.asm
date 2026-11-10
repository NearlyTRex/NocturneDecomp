; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_searpart_cpp_CSearchParty_archive_FUN_005a8e70(CSearchParty *this_ptr)
;
; Parameters:
; CSearchParty *   Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_basicnpc.cpp_CBasicNPC_archive_FUN_005a4930
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a8e70
        ;   Label: core_searpart.cpp_CSearchParty_archive_FUN_005a8e70
    PUSH EDX                            ; 005a8e74
    CALL core_basicnpc.cpp_CBasicNPC_archive_FUN_005a4930 ; 005a8e75
        ;   XREF to: 005a4930 (UNCONDITIONAL_CALL)  ; void core_basicnpc.cpp_CBasicNPC_archive_FUN_005a4930(CBasicNPC * this_ptr)
    ADD ESP,0x4                         ; 005a8e7a
    RET                                 ; 005a8e7d

