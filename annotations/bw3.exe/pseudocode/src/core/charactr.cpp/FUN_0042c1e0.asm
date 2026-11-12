; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_charactr_cpp_FUN_0042c1e0(int param_1,float param_2)
;
;
; XREF[34]:
;   core_asgaya.cpp_CAsgaya_process_FUN_005a0be0 at 005a0f1e
;   core_baal.cpp_CBaal_process_FUN_005968a0 at 00596b6b
;   core_bird.cpp_CBird_process_FUN_0040fb40 at 0040fcc7
;   core_boneguy.cpp_CBaalSkel_process_FUN_00419b40 at 0041a08c
;   core_boneguy.cpp_CBoneGuy_process_FUN_004179b0 at 00417f34
;   core_carved.cpp_CCarved_process_FUN_00425da0 at 00426a2b
;   core_construc.cpp_CConstruct_process_FUN_00442a20 at 0044349d
;   core_cow.cpp_CZombieCow_process_FUN_00445130 at 004452a0
;   core_darkwolf.cpp_CDarkwolf_process_FUN_005989e0 at 00598b2e
;   core_demnfolk.cpp_FUN_00455080 at 00456ff9
;   ... and 24 more
;
; Referenced Globals:
;   undefined4 DAT_005b8226
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0042c1e0
        ;   Label: core_charactr.cpp_FUN_0042c1e0
    CMP dword ptr [EAX + 0x27a8],0x0    ; 0042c1e4
    JZ 0x0042c210                       ; 0042c1eb
        ;   XREF to: 0042c210 (CONDITIONAL_JUMP)  ; LAB_0042c210
    MOV dword ptr [EAX + 0x2520],0x0    ; 0042c1ed
    MOV EDX,dword ptr [EAX + 0x2520]    ; 0042c1f7
    MOV dword ptr [EAX + 0x251c],EDX    ; 0042c1fd
    MOV EDX,dword ptr [EAX + 0x251c]    ; 0042c203
    MOV dword ptr [EAX + 0x2518],EDX    ; 0042c209
    RET                                 ; 0042c20f
    FLD float ptr [ESP + 0x8]           ; 0042c210
        ;   Label: LAB_0042c210
    FMUL float ptr [0x005b8226]         ; 0042c214 | DAT_005b8226
    FADD float ptr [EAX + 0x251c]       ; 0042c21a
    FSTP float ptr [EAX + 0x251c]       ; 0042c220
    RET                                 ; 0042c226

