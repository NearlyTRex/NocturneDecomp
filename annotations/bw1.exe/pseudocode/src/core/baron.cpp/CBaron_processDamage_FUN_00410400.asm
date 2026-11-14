; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_baron_cpp_CBaron_processDamage_FUN_00410400(CBaron *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CBaron *         Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; Called Functions:
;   core_charactr.cpp_CCharacter_processDamage_FUN_004319e0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00410400
        ;   Label: core_baron.cpp_CBaron_processDamage_FUN_00410400
    MOV EDX,dword ptr [ESP + 0x8]       ; 00410404
    MOV ECX,dword ptr [EAX + 0x27b0]    ; 00410408
    TEST ECX,ECX                        ; 0041040e
    JZ 0x00410413                       ; 00410410
        ;   XREF to: 00410413 (CONDITIONAL_JUMP)  ; LAB_00410413
    RET                                 ; 00410412
    PUSH EDX                            ; 00410413
        ;   Label: LAB_00410413
    PUSH EAX                            ; 00410414
    MOV dword ptr [EDX + 0x4],ECX       ; 00410415
    CALL core_charactr.cpp_CCharacter_processDamage_FUN_004319e0 ; 00410418
        ;   XREF to: 004319e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_processDamage_FUN_004319e0(CCharacter * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 0041041d

