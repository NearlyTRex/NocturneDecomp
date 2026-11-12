; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_charactr_cpp_FUN_00434850(int param_1,float param_2)
;
;
; XREF[35]:
;   core_asgaya.cpp_CAsgaya_process_FUN_005a0be0 at 005a0e59
;   core_baal.cpp_CBaal_process_FUN_005968a0 at 00596ab9
;   core_bird.cpp_CBird_process_FUN_0040fb40 at 0040fc60
;   core_boneguy.cpp_CBaalSkel_process_FUN_00419b40 at 00419fa6
;   core_boneguy.cpp_CBoneGuy_process_FUN_004179b0 at 00417e38
;   core_carved.cpp_CCarved_process_FUN_00425da0 at 00426e36
;   core_construc.cpp_CConstruct_process_FUN_00442a20 at 004433f8
;   core_cow.cpp_CZombieCow_process_FUN_00445130 at 004451bf
;   core_darkwolf.cpp_CDarkwolf_process_FUN_005989e0 at 00598aac
;   core_demnfolk.cpp_FUN_00455080 at 00455fd1
;   ... and 25 more
;
; Referenced Globals:
;   TerminatedCString s_ghost_005b8922
;   CGame* g_CGamePtr = 01d2130c
;   undefined4 g_CGameInstance.letterbox_mode
;
; Called Functions:
;   crt_string.c__strnicmp_FUN_005a3f90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00434850
        ;   Label: core_charactr.cpp_FUN_00434850
    PUSH EBP                            ; 00434851
    MOV EBP,ESP                         ; 00434852
    MOV EBX,dword ptr [EBP + 0xc]       ; 00434854
    MOV EAX,[0x005fe9dc]                ; 00434857 | g_CGamePtr
    CMP dword ptr [EAX + 0x24c],0x0     ; 0043485c | g_CGameInstance.letterbox_mode
    JNZ 0x00434891                      ; 00434863
        ;   XREF to: 00434891 (CONDITIONAL_JUMP)  ; LAB_00434891
    FLD float ptr [EBX + 0x252c]        ; 00434865
    FMUL float ptr [EBP + 0x10]         ; 0043486b
        ;   Label: LAB_0043486b
    FSTP float ptr [EBX + 0x2528]       ; 0043486e
    PUSH 0x5                            ; 00434874
    PUSH 0x5b8922                       ; 00434876 | = "ghost"
    LEA EAX,[EBX + 0x24a8]              ; 0043487b
    PUSH EAX                            ; 00434881
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 00434882
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00434887
    TEST EAX,EAX                        ; 0043488a
    JZ 0x00434899                       ; 0043488c
        ;   XREF to: 00434899 (CONDITIONAL_JUMP)  ; LAB_00434899
    POP EBP                             ; 0043488e
    POP EBX                             ; 0043488f
    RET                                 ; 00434890
    FLD float ptr [EBX + 0x2530]        ; 00434891
        ;   Label: LAB_00434891
    JMP 0x0043486b                      ; 00434897
        ;   XREF to: 0043486b (UNCONDITIONAL_JUMP)  ; LAB_0043486b
    FLD float ptr [EBX + 0x2534]        ; 00434899
        ;   Label: LAB_00434899
    FMUL float ptr [EBP + 0x10]         ; 0043489f
    FSTP float ptr [EBX + 0x2528]       ; 004348a2
    POP EBP                             ; 004348a8
    POP EBX                             ; 004348a9
    RET                                 ; 004348aa

