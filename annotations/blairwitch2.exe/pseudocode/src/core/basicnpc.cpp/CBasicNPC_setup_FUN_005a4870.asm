; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_basicnpc_cpp_CBasicNPC_setup_FUN_005a4870(CBasicNPC *this_ptr)
;
; Parameters:
; CBasicNPC *      Stack[0x4]:4   this_ptr
;
; XREF[6]:
;   core_belling.cpp_CBelling_setup_FUN_005a9050 at 005a9055
;   core_bwgrndma.cpp_CGrandma_setup_FUN_005a7be0 at 005a7be6
;   core_bwsearch.cpp_CSearchParty_setup_FUN_005a8da0 at 005a8da5
;   core_union.cpp_CUnion_setup_FUN_005a4c00 at 005a4c07
;   core_villain.cpp_CSteuben_setup_FUN_005a5c10 at 005a5c15
;   core_weaver.cpp_CRobin_setup_FUN_005a6030 at 005a6037
;
; Called Functions:
;   core_basicene.cpp_CBasicEnemy_setup_FUN_0059e6a0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a4870
        ;   Label: core_basicnpc.cpp_CBasicNPC_setup_FUN_005a4870
    PUSH EDX                            ; 005a4874
    CALL core_basicene.cpp_CBasicEnemy_setup_FUN_0059e6a0 ; 005a4875
        ;   XREF to: 0059e6a0 (UNCONDITIONAL_CALL)  ; void core_basicene.cpp_CBasicEnemy_setup_FUN_0059e6a0(CBasicEnemy * this_ptr)
    ADD ESP,0x4                         ; 005a487a
    RET                                 ; 005a487d

