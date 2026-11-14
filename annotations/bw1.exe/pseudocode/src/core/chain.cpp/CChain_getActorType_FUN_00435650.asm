; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * __cdecl core_chain_cpp_CChain_getActorType_FUN_00435650(CChain *this_ptr)
;
; Parameters:
; CChain *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CChainClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x7c6514                    ; 00435650 | g_CChainClassInfo
        ;   Label: core_chain.cpp_CChain_getActorType_FUN_00435650
    RET                                 ; 00435655

