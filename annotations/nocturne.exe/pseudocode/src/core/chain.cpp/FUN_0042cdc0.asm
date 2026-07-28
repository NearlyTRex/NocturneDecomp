; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_chain_cpp_FUN_0042cdc0(void *param_1)
;
;
; XREF[1]:
;   core_chain.cpp_FUN_0042cd30 at 0042cd45
;
; Referenced Globals:
;   WatcomTypeInfo g_SChainVertexTypeInfo_0059b320
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x59b320                       ; 0042cdc0 | g_SChainVertexTypeInfo_0059b320
        ;   Label: core_chain.cpp_FUN_0042cdc0
    PUSH 0x14                           ; 0042cdc5
    MOV EDX,dword ptr [ESP + 0xc]       ; 0042cdc7
    PUSH EDX                            ; 0042cdcb
    CALL crt_memory.c___arrfini_FUN_0056494f ; 0042cdcc
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_0056494f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0042cdd1
    RET                                 ; 0042cdd4

