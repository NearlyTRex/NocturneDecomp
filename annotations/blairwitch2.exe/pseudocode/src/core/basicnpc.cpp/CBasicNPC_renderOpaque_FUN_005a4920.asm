; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_basicnpc_cpp_CBasicNPC_renderOpaque_FUN_005a4920(CBasicNPC *this_ptr)
;
; Parameters:
; CBasicNPC *      Stack[0x4]:4   this_ptr
;
; XREF[5]:
;   core_belling.cpp_CBelling_renderOpaque_FUN_005a9110 at 005a9115
;   core_grandma.cpp_CGrandma_renderOpaque_FUN_005a7cd0 at 005a7cd5
;   core_searpart.cpp_CSearchParty_renderOpaque_FUN_005a8e60 at 005a8e65
;   core_steuben.cpp_CSteuben_renderOpaque_FUN_005a5d50 at 005a5d55
;   core_union.cpp_CUnion_renderOpaque_FUN_005a5440 at 005a5445
;
; Called Functions:
;   core_basicene.cpp_CBasicEnemy_renderOpaque_FUN_0059fa20
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a4920
        ;   Label: core_basicnpc.cpp_CBasicNPC_renderOpaque_FUN_005a4920
    PUSH EDX                            ; 005a4924
    CALL core_basicene.cpp_CBasicEnemy_renderOpaque_FUN_0059fa20 ; 005a4925
        ;   XREF to: 0059fa20 (UNCONDITIONAL_CALL)  ; int core_basicene.cpp_CBasicEnemy_renderOpaque_FUN_0059fa20(CBasicEnemy * this_ptr)
    ADD ESP,0x4                         ; 005a492a
    RET                                 ; 005a492d

