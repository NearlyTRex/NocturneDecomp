; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_belling_cpp_CBelling_setup_FUN_005a9050(CBelling *this_ptr)
;
; Parameters:
; CBelling *       Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_basicnpc.cpp_CBasicNPC_setup_FUN_005a4870
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a9050
        ;   Label: core_belling.cpp_CBelling_setup_FUN_005a9050
    PUSH EDX                            ; 005a9054
    CALL core_basicnpc.cpp_CBasicNPC_setup_FUN_005a4870 ; 005a9055
        ;   XREF to: 005a4870 (UNCONDITIONAL_CALL)  ; void core_basicnpc.cpp_CBasicNPC_setup_FUN_005a4870(CBasicNPC * this_ptr)
    ADD ESP,0x4                         ; 005a905a
    RET                                 ; 005a905d

