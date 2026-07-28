; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_dropAllCarriedObjects_FUN_004291f0(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   core_boneguy.cpp_CBoneGuy_explode_FUN_0041a0f0 at 0041a0fc
;   core_charactr.cpp_CCharacter_kill_FUN_00424f40 at 00424fdb
;   core_charactr.cpp_CCharacter_processDamage_FUN_00428510 at 004286bf
;   core_npc.cpp_FUN_004eeea0 at 004eef49
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004291f0
        ;   Label: core_charactr.cpp_CCharacter_dropAllCarriedObjects_FUN_004291f0
    PUSH ESI                            ; 004291f1
    MOV ESI,dword ptr [ESP + 0xc]       ; 004291f2
    XOR EBX,EBX                         ; 004291f6
    PUSH 0x0                            ; 004291f8
        ;   Label: LAB_004291f8
    PUSH EBX                            ; 004291fa
    MOV EAX,dword ptr [ESI + 0x14c]     ; 004291fb
    PUSH ESI                            ; 00429201
    INC EBX                             ; 00429202
    CALL dword ptr [EAX + 0x120]        ; 00429203
    ADD ESP,0xc                         ; 00429209
    CMP EBX,0x2                         ; 0042920c
    JL 0x004291f8                       ; 0042920f
        ;   XREF to: 004291f8 (CONDITIONAL_JUMP)  ; LAB_004291f8
    POP ESI                             ; 00429211
    POP EBX                             ; 00429212
    RET                                 ; 00429213

