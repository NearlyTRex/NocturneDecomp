; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_basicnpc_cpp_CBasicNPC_archive_FUN_005a4930(CBasicNPC *this_ptr)
;
; Parameters:
; CBasicNPC *      Stack[0x4]:4   this_ptr
;
; XREF[6]:
;   core_belling.cpp_CBelling_archive_FUN_005a9120 at 005a9125
;   core_grandma.cpp_CGrandma_archive_FUN_005a7ce0 at 005a7ce5
;   core_robin.cpp_CRobin_archive_FUN_005a6750 at 005a6755
;   core_searpart.cpp_CSearchParty_archive_FUN_005a8e70 at 005a8e75
;   core_steuben.cpp_CSteuben_archive_FUN_005a5d60 at 005a5d65
;   core_union.cpp_CUnion_archive_FUN_005a5450 at 005a5455
;
; Called Functions:
;   core_basicene.cpp_CBasicEnemy_archive_FUN_0059fc10
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a4930
        ;   Label: core_basicnpc.cpp_CBasicNPC_archive_FUN_005a4930
    PUSH EDX                            ; 005a4934
    CALL core_basicene.cpp_CBasicEnemy_archive_FUN_0059fc10 ; 005a4935
        ;   XREF to: 0059fc10 (UNCONDITIONAL_CALL)  ; void core_basicene.cpp_CBasicEnemy_archive_FUN_0059fc10(CBasicEnemy * this_ptr)
    ADD ESP,0x4                         ; 005a493a
    RET                                 ; 005a493d

