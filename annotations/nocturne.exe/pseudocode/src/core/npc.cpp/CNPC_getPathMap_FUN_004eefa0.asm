; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPathMap * __cdecl core_npc_cpp_CNPC_getPathMap_FUN_004eefa0(CNPC *this_ptr)
;
; Parameters:
; CNPC *           Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004eefa0
        ;   Label: core_npc.cpp_CNPC_getPathMap_FUN_004eefa0
    ADD EAX,0xbc8c                      ; 004eefa4
    RET                                 ; 004eefa9

