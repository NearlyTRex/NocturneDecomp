; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl SChainVertex * __cdecl core_chain_cpp_SChainVertex_arrdtor_FUN_004313f0(SChainVertex *objs,uint flags)
;
; Parameters:
; SChainVertex *   Stack[0x4]:4   objs
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   core_chain.cpp_CChain_dtor_FUN_00431360 at 00431375
;
; Referenced Globals:
;   WatcomTypeInfo g_SChainVertexTypeInfo
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x65baf0                       ; 004313f0 | g_SChainVertexTypeInfo
        ;   Label: core_chain.cpp_SChainVertex_arrdtor_FUN_004313f0
    PUSH 0x14                           ; 004313f5
    MOV EDX,dword ptr [ESP + 0xc]       ; 004313f7
    PUSH EDX                            ; 004313fb
    CALL crt_memory.c___arrfini_FUN_005feee9 ; 004313fc
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005feee9(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00431401
    RET                                 ; 00431404

