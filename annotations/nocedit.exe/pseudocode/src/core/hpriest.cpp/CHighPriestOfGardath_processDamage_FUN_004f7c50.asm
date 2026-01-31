; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_hpriest_cpp_CHighPriestOfGardath_processDamage_FUN_004f7c50 (CHighPriestOfGardath *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CHighPriestOfGardath * Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 004f7c50
        ;   Label: core_hpriest.cpp_CHighPriestOfGardath_processDamage_FUN_004f7c50
    MOV dword ptr [EAX + 0x30],0x64     ; 004f7c54
    MOV dword ptr [EAX + 0x4],0x0       ; 004f7c5b
    RET                                 ; 004f7c62

