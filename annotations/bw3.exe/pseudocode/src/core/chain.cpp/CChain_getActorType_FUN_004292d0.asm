; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * __cdecl core_chain_cpp_CChain_getActorType_FUN_004292d0(CChain *this_ptr)
;
; Parameters:
; CChain *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CChainClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x7e2a94                    ; 004292d0 | g_CChainClassInfo
        ;   Label: core_chain.cpp_CChain_getActorType_FUN_004292d0
    RET                                 ; 004292d5

