; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPathMap * __cdecl core_npc_cpp_CNPC_getPathMap_FUN_00510c90(CNPC *this_ptr)
;
; Parameters:
; CNPC *           Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00510c90
        ;   Label: core_npc.cpp_CNPC_getPathMap_FUN_00510c90
    ADD EAX,0x10a60                     ; 00510c94
    RET                                 ; 00510c99

