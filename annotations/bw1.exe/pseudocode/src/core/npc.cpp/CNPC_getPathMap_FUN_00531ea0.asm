; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPathMap * __cdecl core_npc_cpp_CNPC_getPathMap_FUN_00531ea0(CNPC *this_ptr)
;
; Parameters:
; CNPC *           Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00531ea0
        ;   Label: core_npc.cpp_CNPC_getPathMap_FUN_00531ea0
    ADD EAX,0xc1d0                      ; 00531ea4
    RET                                 ; 00531ea9

