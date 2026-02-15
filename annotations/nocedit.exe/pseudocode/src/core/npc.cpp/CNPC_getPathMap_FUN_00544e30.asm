; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPathMap * __cdecl core_npc_cpp_CNPC_getPathMap_FUN_00544e30(CNPC *this_ptr)
;
; Parameters:
; CNPC *           Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00544e30
        ;   Label: core_npc.cpp_CNPC_getPathMap_FUN_00544e30
    ADD EAX,0xbe24                      ; 00544e34
    RET                                 ; 00544e39

