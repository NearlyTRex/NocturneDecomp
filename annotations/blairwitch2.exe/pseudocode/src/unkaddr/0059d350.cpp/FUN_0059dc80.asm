; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkaddr_0059d350_cpp_FUN_0059dc80(int param_1)
;
;
; XREF[17]:
;   core_basicnpc.cpp_CBasicNPC_ctor_FUN_005a47b0 at 005a485d
;   core_belling.cpp_CBelling_ctor_FUN_005a8f80 at 005a9035
;   core_confedrt.cpp_CConfederate_ctor_FUN_005a0840 at 005a0952
;   core_confzomb.cpp_CConfederateZombie_ctor_FUN_005a1b40 at 005a1c4e
;   core_dog1.cpp_CDog_ctor_FUN_005aba40 at 005abb3a
;   core_ghostchi.cpp_CGhostChild_ctor_FUN_005a9230 at 005a9333
;   core_grandma.cpp_CGrandma_ctor_FUN_005a7b10 at 005a7bc5
;   core_hag.cpp_CHag_ctor_FUN_005aa600 at 005aa744
;   core_hand.cpp_CHand_ctor_FUN_005a9c00 at 005a9cfa
;   core_robin.cpp_CRobin_ctor_FUN_005a5e70 at 005a5f38
;   ... and 7 more
;
; Called Functions:
;   unkaddr_0059d350.cpp_FUN_0059d960
;   unkaddr_0059d350.cpp_FUN_0059da70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059dc80
        ;   Label: unkaddr_0059d350.cpp_FUN_0059dc80
    MOV EBX,dword ptr [ESP + 0x8]       ; 0059dc81
    MOV EDX,dword ptr [EBX + 0x83c]     ; 0059dc85
    TEST EDX,EDX                        ; 0059dc8b
    JNZ 0x0059dc9a                      ; 0059dc8d
        ;   XREF to: 0059dc9a (CONDITIONAL_JUMP)  ; LAB_0059dc9a
    PUSH EBX                            ; 0059dc8f
    CALL unkaddr_0059d350.cpp_FUN_0059da70 ; 0059dc90
        ;   XREF to: 0059da70 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059da70()
    ADD ESP,0x4                         ; 0059dc95
    POP EBX                             ; 0059dc98
    RET                                 ; 0059dc99
    PUSH EDX                            ; 0059dc9a
        ;   Label: LAB_0059dc9a
    PUSH EBX                            ; 0059dc9b
    CALL unkaddr_0059d350.cpp_FUN_0059d960 ; 0059dc9c
        ;   XREF to: 0059d960 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059d960()
    ADD ESP,0x8                         ; 0059dca1
    PUSH EBX                            ; 0059dca4
    CALL unkaddr_0059d350.cpp_FUN_0059da70 ; 0059dca5
        ;   XREF to: 0059da70 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059da70()
    ADD ESP,0x4                         ; 0059dcaa
    POP EBX                             ; 0059dcad
    RET                                 ; 0059dcae

