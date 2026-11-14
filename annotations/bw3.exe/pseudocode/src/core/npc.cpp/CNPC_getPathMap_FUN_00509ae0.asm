; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPathMap * __cdecl core_npc_cpp_CNPC_getPathMap_FUN_00509ae0(CNPC *this_ptr)
;
; Parameters:
; CNPC *           Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00509ae0
        ;   Label: core_npc.cpp_CNPC_getPathMap_FUN_00509ae0
    ADD EAX,0xcdcc                      ; 00509ae4
    RET                                 ; 00509ae9

