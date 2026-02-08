; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_enemy_cpp_CEnemy_FUN_004a9fd0(CEnemy *this_ptr)
;
; Parameters:
; CEnemy *         Stack[0x4]:4   this_ptr
;
; XREF[18]:
;   core_batcreat.cpp_CBatCreature_process_FUN_00415470 at 00415a33
;   core_batman.cpp_CBatman_process_FUN_00416870 at 00416fea
;   core_boneguy.cpp_CBoneGuy_process_FUN_0041bf90 at 0041c857
;   core_bride.cpp_CBride_process_FUN_00423a30 at 00423b65
;   core_cow.cpp_CZombieCow_process_FUN_00444310 at 0044468b
;   core_dog.cpp_CZombieDog_process_FUN_0047f140 at 0047f511
;   core_dracbrid.cpp_CDraculaBride_process_FUN_00484410 at 004851dd
;   core_drone.cpp_CDrone_process_FUN_0048ec70 at 0048f0eb
;   core_gargoyle.cpp_CGargoyle_process_FUN_004e4a00 at 004e5020
;   core_ghoul.cpp_CGhoul_process_FUN_004e6600 at 004e756a
;   ... and 8 more
;
; Referenced Globals:
;   TerminatedCString s_Capture_006243da
;   CEventList* g_CEventListPtr = 02d05310
;   CGame* g_CGamePtr = 02d81a9c
;   CEventList g_CEventListInstance
;   CGame g_CGameInstance
;   undefined4 DAT_02d81c70
;
; Called Functions:
;   core_charactr.cpp_CCharacter_FUN_0042e050
;   core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a9fd0
        ;   Label: core_enemy.cpp_CEnemy_FUN_004a9fd0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a9fd1
    MOV EAX,[0x0067b654]                ; 004a9fd5 | g_CGameInstance | g_CGamePtr
    CMP dword ptr [EAX + 0x1d4],0x0     ; 004a9fda | DAT_02d81c70
    JNZ 0x004a9ffb                      ; 004a9fe1
        ;   XREF to: 004a9ffb (CONDITIONAL_JUMP)  ; LAB_004a9ffb
    PUSH 0x6243da                       ; 004a9fe3 | = "Capture"
    MOV ECX,dword ptr [0x006793d0]      ; 004a9fe8 | g_CEventListInstance | g_CEventListPtr
    PUSH ECX                            ; 004a9fee | g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 004a9fef
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 004a9ff4
    TEST EAX,EAX                        ; 004a9ff7
    JZ 0x004aa00c                       ; 004a9ff9
        ;   XREF to: 004aa00c (CONDITIONAL_JUMP)  ; LAB_004aa00c
    PUSH 0x0                            ; 004a9ffb
        ;   Label: LAB_004a9ffb
    PUSH dword ptr [ESP + 0x10]         ; 004a9ffd
    PUSH EBX                            ; 004aa001
    CALL core_charactr.cpp_CCharacter_FUN_0042e050 ; 004aa002
        ;   XREF to: 0042e050 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_FUN_0042e050(CCharacter * this_ptr)
    ADD ESP,0xc                         ; 004aa007
    POP EBX                             ; 004aa00a
    RET                                 ; 004aa00b
    LEA EAX,[EBX + 0xbe48]              ; 004aa00c
        ;   Label: LAB_004aa00c
    PUSH EAX                            ; 004aa012
    PUSH dword ptr [ESP + 0x10]         ; 004aa013
    PUSH EBX                            ; 004aa017
    CALL core_charactr.cpp_CCharacter_FUN_0042e050 ; 004aa018
        ;   XREF to: 0042e050 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_FUN_0042e050(CCharacter * this_ptr)
    ADD ESP,0xc                         ; 004aa01d
    POP EBX                             ; 004aa020
    RET                                 ; 004aa021

