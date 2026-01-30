; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * __cdecl core_chain_cpp_CChain_getActorType_FUN_0042fb70(CChain *this_ptr)
;
; Parameters:
; CChain *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CChainClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x823de4                    ; 0042fb70 | g_CChainClassInfo
        ;   Label: core_chain.cpp_CChain_getActorType_FUN_0042fb70
    RET                                 ; 0042fb75

