; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_npc_cpp_CNPC_setup_FUN_00544870(CNPC *this_ptr)
;
; Parameters:
; CNPC *           Stack[0x4]:4   this_ptr
;
; XREF[5]:
;   core_hiram.cpp_CHiram_setup_FUN_004f4530 at 004f4535
;   core_hostage.cpp_CHostage_setup_FUN_004f4970 at 004f4b0c
;   core_passngr.cpp_FUN_00545d30 at 00545d38
;   core_tbplayer.cpp_CBassPlayer_FUN_005da090 at 005da097
;   core_tbplayer.cpp_CDrummer_FUN_005da2f0 at 005da2f7
;
; Referenced Globals:
;   TerminatedCString s_priest_dfm_0063e314
;
; Called Functions:
;   core_charactr.cpp_CCharacter_setup_FUN_00428140
;   crt_string.c_stricmp_FUN_005fe7f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00544870
        ;   Label: core_npc.cpp_CNPC_setup_FUN_00544870
    PUSH EBP                            ; 00544871
    MOV EBP,ESP                         ; 00544872
    MOV EBX,dword ptr [EBP + 0xc]       ; 00544874
    PUSH EBX                            ; 00544877
    CALL core_charactr.cpp_CCharacter_setup_FUN_00428140 ; 00544878
        ;   XREF to: 00428140 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_setup_FUN_00428140(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0054487d
    PUSH 0x63e314                       ; 00544880 | = "priest.dfm"
    LEA EAX,[EBX + 0x23b8]              ; 00544885
    PUSH EAX                            ; 0054488b
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 0054488c
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 00544891
    TEST EAX,EAX                        ; 00544894
    JZ 0x0054489b                       ; 00544896
        ;   XREF to: 0054489b (CONDITIONAL_JUMP)  ; LAB_0054489b
    POP EBP                             ; 00544898
    POP EBX                             ; 00544899
    RET                                 ; 0054489a
    MOV dword ptr [EBX + 0x2610],0x2    ; 0054489b
        ;   Label: LAB_0054489b
    POP EBP                             ; 005448a5
    POP EBX                             ; 005448a6
    RET                                 ; 005448a7

