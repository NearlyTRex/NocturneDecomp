; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_baron_cpp_CBaron_processDamage_FUN_00410880(CBaron *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CBaron *         Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; Called Functions:
;   core_charactr.cpp_CCharacter_processDamage_FUN_00427fb0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00410880
        ;   Label: core_baron.cpp_CBaron_processDamage_FUN_00410880
    MOV EDX,dword ptr [ESP + 0x8]       ; 00410884
    MOV ECX,dword ptr [EAX + 0x281c]    ; 00410888
    TEST ECX,ECX                        ; 0041088e
    JZ 0x00410893                       ; 00410890
        ;   XREF to: 00410893 (CONDITIONAL_JUMP)  ; LAB_00410893
    RET                                 ; 00410892
    PUSH EDX                            ; 00410893
        ;   Label: LAB_00410893
    PUSH EAX                            ; 00410894
    MOV dword ptr [EDX + 0x4],ECX       ; 00410895
    CALL core_charactr.cpp_CCharacter_processDamage_FUN_00427fb0 ; 00410898
        ;   XREF to: 00427fb0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_processDamage_FUN_00427fb0(CCharacter * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 0041089d

