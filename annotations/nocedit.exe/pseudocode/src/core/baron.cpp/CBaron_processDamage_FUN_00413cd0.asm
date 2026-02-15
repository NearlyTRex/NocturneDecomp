; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_baron_cpp_CBaron_processDamage_FUN_00413cd0(CBaron *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CBaron *         Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; Called Functions:
;   core_charactr.cpp_CCharacter_processDamage_FUN_0042c3c0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 00413cd0
        ;   Label: core_baron.cpp_CBaron_processDamage_FUN_00413cd0
    PUSH EAX                            ; 00413cd4
    MOV EDX,dword ptr [ESP + 0x8]       ; 00413cd5
    PUSH EDX                            ; 00413cd9
    MOV dword ptr [EAX + 0x4],0x0       ; 00413cda
    CALL core_charactr.cpp_CCharacter_processDamage_FUN_0042c3c0 ; 00413ce1
        ;   XREF to: 0042c3c0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_processDamage_FUN_0042c3c0(CCharacter * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 00413ce6
    LEA EAX,[EAX]                       ; 00413ce9
    NOP                                 ; 00413cef

