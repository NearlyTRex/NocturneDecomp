; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_charactr_cpp_CCharacter_FUN_0042d060(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   core_boneguy.cpp_CBoneGuy_FUN_0041d680 at 0041d68c
;   core_charactr.cpp_CCharacter_FUN_00428e30 at 00428ecb
;   core_charactr.cpp_CCharacter_processDamage_FUN_0042c3c0 at 0042c56b
;   core_npc.cpp_CNPC_processDamage_FUN_00544d30 at 00544dd9
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042d060
        ;   Label: core_charactr.cpp_CCharacter_FUN_0042d060
    PUSH ESI                            ; 0042d061
    MOV ESI,dword ptr [ESP + 0xc]       ; 0042d062
    XOR EBX,EBX                         ; 0042d066
    PUSH 0x0                            ; 0042d068
        ;   Label: LAB_0042d068
    PUSH EBX                            ; 0042d06a
    MOV EAX,dword ptr [ESI + 0x154]     ; 0042d06b
    PUSH ESI                            ; 0042d071
    INC EBX                             ; 0042d072
    CALL dword ptr [EAX + 0x13c]        ; 0042d073
    ADD ESP,0xc                         ; 0042d079
    CMP EBX,0x2                         ; 0042d07c
    JL 0x0042d068                       ; 0042d07f
        ;   XREF to: 0042d068 (CONDITIONAL_JUMP)  ; LAB_0042d068
    POP ESI                             ; 0042d081
    POP EBX                             ; 0042d082
    RET                                 ; 0042d083

