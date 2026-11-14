; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hpriest_cpp_CHighPriestOfGardath_processDamage_FUN_004d4860(CHighPriestOfGardath *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CHighPriestOfGardath * Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 004d4860
        ;   Label: core_hpriest.cpp_CHighPriestOfGardath_processDamage_FUN_004d4860
    MOV EDX,dword ptr [ESP + 0x4]       ; 004d4864
    MOV ECX,dword ptr [EDX + 0x281c]    ; 004d4868
    TEST ECX,ECX                        ; 004d486e
    JZ 0x004d4873                       ; 004d4870
        ;   XREF to: 004d4873 (CONDITIONAL_JUMP)  ; LAB_004d4873
    RET                                 ; 004d4872
    MOV dword ptr [EAX + 0x30],0x64     ; 004d4873
        ;   Label: LAB_004d4873
    MOV dword ptr [EAX + 0x4],ECX       ; 004d487a
    RET                                 ; 004d487d

