; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mission_cpp_CDemonMission_process_FUN_004fc940(CDemonMission *this_ptr)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x24]:1  local_24
;
; XREF[1]:
;   core_game.cpp_CGame_process_FUN_004bd570 at 004bd9bd
;
; Referenced Globals:
;   CScript* g_CScriptPtr = 01e65cd0
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 DAT_01cedef4
;   undefined4 g_CScriptInstance.focus_actor_changed
;
; Called Functions:
;   core_mission.cpp_CDemonMission_loadSet_FUN_004fc6b0
;   core_mission.cpp_CDemonMission_removeActor_FUN_004fc570
;   core_mission.cpp_FUN_004fc820
;   core_set.cpp_CDemonSet_clearLights_FUN_005308e0
;   core_set.cpp_CDemonSet_initScene_FUN_0052d980
;   engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d420
;   engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d440
;   engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d540
;   engine_special.cpp_clearScreen_FUN_0055b1f0
;   wincore_wddvmem.cpp_swapBuffers_FUN_00589560
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fc940
        ;   Label: core_mission.cpp_CDemonMission_process_FUN_004fc940
    PUSH ESI                            ; 004fc941
    PUSH EDI                            ; 004fc942
    PUSH EBP                            ; 004fc943
    SUB ESP,0x14                        ; 004fc944
    MOV EDI,dword ptr [ESP + 0x28]      ; 004fc947
    MOV EDX,dword ptr [EDI + 0x112c]    ; 004fc94b
    TEST EDX,EDX                        ; 004fc951
    JZ 0x004fc99a                       ; 004fc953
        ;   XREF to: 004fc99a (CONDITIONAL_JUMP)  ; LAB_004fc99a
    XOR ESI,ESI                         ; 004fc955
    TEST EDX,EDX                        ; 004fc957
    JLE 0x004fc990                      ; 004fc959
        ;   XREF to: 004fc990 (CONDITIONAL_JUMP)  ; LAB_004fc990
    MOV EBX,EDI                         ; 004fc95b
    MOV EBP,dword ptr [EBX + 0x12c0]    ; 004fc95d
        ;   Label: LAB_004fc95d
    PUSH EBP                            ; 004fc963
    MOV EAX,dword ptr [EBX + 0x1130]    ; 004fc964
    PUSH EAX                            ; 004fc96a
    PUSH EDI                            ; 004fc96b
    ADD EBX,0x4                         ; 004fc96c
    INC ESI                             ; 004fc96f
    CALL core_mission.cpp_CDemonMission_removeActor_FUN_004fc570 ; 004fc970
        ;   XREF to: 004fc570 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_removeActor_FUN_004fc570(CDemonMission * this_ptr, CDemonActor * actor, int should_delete)
    MOV EDX,dword ptr [EDI + 0x112c]    ; 004fc975
    ADD ESP,0xc                         ; 004fc97b
    CMP ESI,EDX                         ; 004fc97e
    JL 0x004fc95d                       ; 004fc980
        ;   XREF to: 004fc95d (CONDITIONAL_JUMP)  ; LAB_004fc95d
    LEA EAX,[EAX]                       ; 004fc982
    LEA EDX,[EDX]                       ; 004fc988
    MOV EAX,EAX                         ; 004fc98e
    MOV dword ptr [EDI + 0x112c],0x0    ; 004fc990
        ;   Label: LAB_004fc990
    PUSH EDI                            ; 004fc99a
        ;   Label: LAB_004fc99a
    CALL core_mission.cpp_FUN_004fc820  ; 004fc99b
        ;   XREF to: 004fc820 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_FUN_004fc820()
    MOV ECX,dword ptr [EDI + 0x1128]    ; 004fc9a0
    ADD ESP,0x4                         ; 004fc9a6
    TEST ECX,ECX                        ; 004fc9a9
    JL 0x004fca0d                       ; 004fc9ab
        ;   XREF to: 004fca0d (CONDITIONAL_JUMP)  ; LAB_004fca0d
    MOV EBX,dword ptr [0x01cedef4]      ; 004fc9ad | DAT_01cedef4
    MOV ESI,dword ptr [EBX*0x4 + 0x1cedee4] ; 004fc9b3
    LEA EBX,[EDI + 0x111c]              ; 004fc9ba
    MOV EAX,dword ptr [EBX]             ; 004fc9c0
    MOV dword ptr [ESI + 0x20],EAX      ; 004fc9c2
    MOV EAX,dword ptr [EBX + 0x4]       ; 004fc9c5
    MOV dword ptr [ESI + 0x24],EAX      ; 004fc9c8
    MOV EAX,dword ptr [EBX + 0x8]       ; 004fc9cb
    MOV dword ptr [ESI + 0x28],EAX      ; 004fc9ce
    MOV EBX,dword ptr [EBX + 0xc]       ; 004fc9d1
    MOV dword ptr [ESI + 0x2c],EBX      ; 004fc9d4
    MOV EBX,dword ptr [EDI + 0x1128]    ; 004fc9d7
    CMP EBX,dword ptr [EDI]             ; 004fc9dd
    JNZ 0x004fca15                      ; 004fc9df
        ;   XREF to: 004fca15 (CONDITIONAL_JUMP)  ; LAB_004fca15
    MOV dword ptr [EDI + 0x1128],0xffffffff ; 004fc9e1
        ;   Label: LAB_004fc9e1
    MOV dword ptr [EDI + 0x1124],0x0    ; 004fc9eb
    MOV EAX,dword ptr [EDI + 0x1124]    ; 004fc9f5
    MOV dword ptr [EDI + 0x1120],EAX    ; 004fc9fb
    MOV EAX,dword ptr [EDI + 0x1120]    ; 004fca01
    MOV dword ptr [EDI + 0x111c],EAX    ; 004fca07
    ADD ESP,0x14                        ; 004fca0d
        ;   Label: LAB_004fca0d
    POP EBP                             ; 004fca10
    POP EDI                             ; 004fca11
    POP ESI                             ; 004fca12
    POP EBX                             ; 004fca13
    RET                                 ; 004fca14
    CALL engine_special.cpp_clearScreen_FUN_0055b1f0 ; 004fca15
        ;   XREF to: 0055b1f0 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_0055b1f0()
        ;   Label: LAB_004fca15
    MOV EBX,ESP                         ; 004fca1a
    PUSH EBX                            ; 004fca1c
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d420 ; 004fca1d
        ;   XREF to: 0040d420 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d420(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004fca22
    MOV EBX,ESP                         ; 004fca25
    PUSH EBX                            ; 004fca27
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d540 ; 004fca28
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d540(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004fca2d
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_00589560 ; 004fca30
        ;   XREF to: 00589560 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_00589560()
    MOV EBP,dword ptr [EDI + 0x1128]    ; 004fca35
    PUSH EBP                            ; 004fca3b
    PUSH EDI                            ; 004fca3c
    CALL core_mission.cpp_CDemonMission_loadSet_FUN_004fc6b0 ; 004fca3d
        ;   XREF to: 004fc6b0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_loadSet_FUN_004fc6b0(CDemonMission * this_ptr, int set_index)
    ADD ESP,0x8                         ; 004fca42
    MOV EAX,[0x0061b5a8]                ; 004fca45 | g_CDemonSetPtr
    PUSH EAX                            ; 004fca4a
    CALL core_set.cpp_CDemonSet_clearLights_FUN_005308e0 ; 004fca4b
        ;   XREF to: 005308e0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_clearLights_FUN_005308e0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004fca50
    MOV EDX,dword ptr [0x0061b5a8]      ; 004fca53 | g_CDemonSetPtr
    PUSH EDX                            ; 004fca59
    CALL core_set.cpp_CDemonSet_initScene_FUN_0052d980 ; 004fca5a
        ;   XREF to: 0052d980 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_initScene_FUN_0052d980(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004fca5f
    MOV EBX,dword ptr [0x0061b460]      ; 004fca62 | g_CScriptPtr
    PUSH 0x0                            ; 004fca68
    MOV dword ptr [EBX + 0x10],0x2      ; 004fca6a | g_CScriptInstance.focus_actor_changed
    LEA EBX,[ESP + 0x4]                 ; 004fca71
    PUSH EBX                            ; 004fca75
    CALL engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d440 ; 004fca76
        ;   XREF to: 0040d440 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d440(CAlphaBitmap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004fca7b
    JMP 0x004fc9e1                      ; 004fca7e
        ;   XREF to: 004fc9e1 (UNCONDITIONAL_JUMP)  ; LAB_004fc9e1

