; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_steuben_cpp_CSteuben_setup_FUN_005a5c10(CSteuben *this_ptr)
;
; Parameters:
; CSteuben *       Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_basicnpc.cpp_CBasicNPC_setup_FUN_005a4870
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a5c10
        ;   Label: core_steuben.cpp_CSteuben_setup_FUN_005a5c10
    PUSH EDX                            ; 005a5c14
    CALL core_basicnpc.cpp_CBasicNPC_setup_FUN_005a4870 ; 005a5c15
        ;   XREF to: 005a4870 (UNCONDITIONAL_CALL)  ; void core_basicnpc.cpp_CBasicNPC_setup_FUN_005a4870(CBasicNPC * this_ptr)
    ADD ESP,0x4                         ; 005a5c1a
    RET                                 ; 005a5c1d

