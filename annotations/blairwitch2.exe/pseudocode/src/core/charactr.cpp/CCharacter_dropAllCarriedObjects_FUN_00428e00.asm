; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_dropAllCarriedObjects_FUN_00428e00(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
;
; XREF[6]:
;   core_boneguy.cpp_CBoneGuy_explode_FUN_0041a0c0 at 0041a0cc
;   core_charactr.cpp_CCharacter_kill_FUN_00423900 at 0042399b
;   core_charactr.cpp_CCharacter_processDamage_FUN_00427fb0 at 004281c0
;   core_construc.cpp_CConstruct_explode_FUN_00438060 at 0043806c
;   core_construc.cpp_CConstruct_process_FUN_00436e80 at 00437254
;   core_npc.cpp_CNPC_processDamage_FUN_00510b90 at 00510c39
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00428e00
        ;   Label: core_charactr.cpp_CCharacter_dropAllCarriedObjects_FUN_00428e00
    PUSH ESI                            ; 00428e01
    MOV ESI,dword ptr [ESP + 0xc]       ; 00428e02
    XOR EBX,EBX                         ; 00428e06
    PUSH 0x0                            ; 00428e08
        ;   Label: LAB_00428e08
    PUSH EBX                            ; 00428e0a
    MOV EAX,dword ptr [ESI + 0x2b0]     ; 00428e0b
    PUSH ESI                            ; 00428e11
    INC EBX                             ; 00428e12
    CALL dword ptr [EAX + 0x130]        ; 00428e13
    ADD ESP,0xc                         ; 00428e19
    CMP EBX,0x2                         ; 00428e1c
    JL 0x00428e08                       ; 00428e1f
        ;   XREF to: 00428e08 (CONDITIONAL_JUMP)  ; LAB_00428e08
    POP ESI                             ; 00428e21
    POP EBX                             ; 00428e22
    RET                                 ; 00428e23

