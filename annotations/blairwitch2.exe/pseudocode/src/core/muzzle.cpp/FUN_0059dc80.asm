; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_muzzle_cpp_FUN_0059dc80(int param_1)
;
;
; XREF[17]:
;   core_basicene.cpp_CBasicEnemy_ctor_FUN_0059e3b0 at 0059e5a0
;   core_basicnpc.cpp_CBasicNPC_ctor_FUN_005a47b0 at 005a485d
;   core_belling.cpp_CBelling_ctor_FUN_005a8f80 at 005a9035
;   core_bwgrndma.cpp_CGrandma_ctor_FUN_005a7b10 at 005a7bc5
;   core_bwsearch.cpp_CSearchParty_ctor_FUN_005a8cf0 at 005a8d91
;   core_confedrt.cpp_CConfederate_ctor_FUN_005a0840 at 005a0952
;   core_confzomb.cpp_CConfederateZombie_ctor_FUN_005a1b40 at 005a1c4e
;   core_fforest.cpp_CTwigZombie_ctor_FUN_005a26d0 at 005a27ba
;   core_ghostchi.cpp_CGhostChild_ctor_FUN_005a9230 at 005a9333
;   core_hand.cpp_CHand_ctor_FUN_005a9c00 at 005a9cfa
;   ... and 7 more
;
; Called Functions:
;   core_muzzle.cpp_FUN_0059d960
;   core_muzzle.cpp_FUN_0059da70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059dc80
        ;   Label: core_muzzle.cpp_FUN_0059dc80
    MOV EBX,dword ptr [ESP + 0x8]       ; 0059dc81
    MOV EDX,dword ptr [EBX + 0x83c]     ; 0059dc85
    TEST EDX,EDX                        ; 0059dc8b
    JNZ 0x0059dc9a                      ; 0059dc8d
        ;   XREF to: 0059dc9a (CONDITIONAL_JUMP)  ; LAB_0059dc9a
    PUSH EBX                            ; 0059dc8f
    CALL core_muzzle.cpp_FUN_0059da70   ; 0059dc90
        ;   XREF to: 0059da70 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059da70()
    ADD ESP,0x4                         ; 0059dc95
    POP EBX                             ; 0059dc98
    RET                                 ; 0059dc99
    PUSH EDX                            ; 0059dc9a
        ;   Label: LAB_0059dc9a
    PUSH EBX                            ; 0059dc9b
    CALL core_muzzle.cpp_FUN_0059d960   ; 0059dc9c
        ;   XREF to: 0059d960 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059d960()
    ADD ESP,0x8                         ; 0059dca1
    PUSH EBX                            ; 0059dca4
    CALL core_muzzle.cpp_FUN_0059da70   ; 0059dca5
        ;   XREF to: 0059da70 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059da70()
    ADD ESP,0x4                         ; 0059dcaa
    POP EBX                             ; 0059dcad
    RET                                 ; 0059dcae

