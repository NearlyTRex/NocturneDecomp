; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkaddr_005a7eb0_cpp_FUN_005a80d0(int param_1,int param_2)
;
;
; XREF[6]:
;   core_actor.cpp_FUN_0040ce40 at 0040ce60
;   core_confzomb.cpp_CConfederateZombie_setup_FUN_005a1d90 at 005a1df8
;   core_ghostchi.cpp_CGhostChild_setup_FUN_005a9440 at 005a94b4
;   core_hag.cpp_CHag_setup_FUN_005aa8c0 at 005aa934
;   core_spirmine.cpp_CSpiritMine_setup_FUN_005ad4f0 at 005ad520
;   core_unionzom.cpp_CUnionZombie_setup_FUN_005a3f40 at 005a3fa8
;
; Called Functions:
;   unkafter_superopt.cpp_FUN_005a8160
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a80d0
        ;   Label: unkaddr_005a7eb0.cpp_FUN_005a80d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a80d1
    CMP dword ptr [EBX + 0x14],0x0      ; 005a80d5
    JZ 0x005a80e9                       ; 005a80d9
        ;   XREF to: 005a80e9 (CONDITIONAL_JUMP)  ; LAB_005a80e9
    CMP dword ptr [ESP + 0xc],0x0       ; 005a80db
    JNZ 0x005a80eb                      ; 005a80e0
        ;   XREF to: 005a80eb (CONDITIONAL_JUMP)  ; LAB_005a80eb
    MOV dword ptr [EBX + 0x10],0x1      ; 005a80e2
    POP EBX                             ; 005a80e9
        ;   Label: LAB_005a80e9
    RET                                 ; 005a80ea
    PUSH EBX                            ; 005a80eb
        ;   Label: LAB_005a80eb
    CALL unkafter_superopt.cpp_FUN_005a8160 ; 005a80ec
        ;   XREF to: 005a8160 (UNCONDITIONAL_CALL)  ; undefined unkafter_superopt.cpp_FUN_005a8160()
    ADD ESP,0x4                         ; 005a80f1
    MOV dword ptr [EBX + 0x10],0x1      ; 005a80f4
    POP EBX                             ; 005a80fb
    RET                                 ; 005a80fc

