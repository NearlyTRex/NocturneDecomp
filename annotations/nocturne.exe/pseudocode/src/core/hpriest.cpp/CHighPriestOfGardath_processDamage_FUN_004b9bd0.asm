; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hpriest_cpp_CHighPriestOfGardath_processDamage_FUN_004b9bd0(CHighPriestOfGardath *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CHighPriestOfGardath * Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 004b9bd0
        ;   Label: core_hpriest.cpp_CHighPriestOfGardath_processDamage_FUN_004b9bd0
    MOV dword ptr [EAX + 0x30],0x64     ; 004b9bd4
    MOV dword ptr [EAX + 0x4],0x0       ; 004b9bdb
    RET                                 ; 004b9be2

