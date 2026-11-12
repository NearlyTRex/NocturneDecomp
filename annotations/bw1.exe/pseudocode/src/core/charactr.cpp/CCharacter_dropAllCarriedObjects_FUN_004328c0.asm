; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_dropAllCarriedObjects_FUN_004328c0(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
;
; XREF[8]:
;   core_bird.cpp_CBird_processDamage_FUN_00415910 at 004159a3
;   core_boneguy.cpp_CBoneGuy_explode_FUN_0041d540 at 0041d54c
;   core_charactr.cpp_CCharacter_kill_FUN_0042d5f0 at 0042d68b
;   core_charactr.cpp_CCharacter_processDamage_FUN_004319e0 at 00431c14
;   core_construc.cpp_CConstruct_process_FUN_00445cb0 at 00445f36
;   core_construc.cpp_FUN_004472a0 at 004472ac
;   core_game.cpp_FUN_004d9260 at 004d9e85
;   core_npc.cpp_CNPC_processDamage_FUN_00531da0 at 00531e49
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004328c0
        ;   Label: core_charactr.cpp_CCharacter_dropAllCarriedObjects_FUN_004328c0
    PUSH ESI                            ; 004328c1
    MOV ESI,dword ptr [ESP + 0xc]       ; 004328c2
    XOR EBX,EBX                         ; 004328c6
    PUSH 0x0                            ; 004328c8
        ;   Label: LAB_004328c8
    PUSH EBX                            ; 004328ca
    MOV EAX,dword ptr [ESI + 0x154]     ; 004328cb
    PUSH ESI                            ; 004328d1
    INC EBX                             ; 004328d2
    CALL dword ptr [EAX + 0x128]        ; 004328d3
    ADD ESP,0xc                         ; 004328d9
    CMP EBX,0x2                         ; 004328dc
    JL 0x004328c8                       ; 004328df
        ;   XREF to: 004328c8 (CONDITIONAL_JUMP)  ; LAB_004328c8
    POP ESI                             ; 004328e1
    POP EBX                             ; 004328e2
    RET                                 ; 004328e3

