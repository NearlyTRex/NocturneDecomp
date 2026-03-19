; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mission_cpp_CDemonMission_process_FUN_00524250(CDemonMission *this_ptr)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_game.cpp_CGame_process_FUN_004e3190 at 004e359e
;
; Referenced Globals:
;   TerminatedCString s_core_mission_cpp_00639271
;   TerminatedCString s_Changing_sets_00639285
;   TerminatedCString s_Insert_wipe_here_00639296
;   CScript* g_CScriptPtr = 0310f858
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CHero*[4] g_HeroActors
;   int g_LocalHeroIndex
;   undefined4 g_CScriptInstance.focus_actor_changed
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
;   core_mission.cpp_CDemonMission_buildActiveSetActorList_FUN_00524120
;   core_mission.cpp_CDemonMission_loadSet_FUN_00523fb0
;   core_mission.cpp_CDemonMission_removeActor_FUN_00523f20
;   core_set.cpp_CDemonSet_clearLights_FUN_0056d2d0
;   core_set.cpp_CDemonSet_initScene_FUN_0056aa10
;   engine_2d.c_drawText_FUN_00401fd0
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
;   wincore_windll.cpp_clearScreen_FUN_005b3e70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00524250
        ;   Label: core_mission.cpp_CDemonMission_process_FUN_00524250
    PUSH ESI                            ; 00524251
    PUSH EDI                            ; 00524252
    PUSH EBP                            ; 00524253
    MOV EDI,dword ptr [ESP + 0x14]      ; 00524254
    MOV EDX,dword ptr [EDI + 0x560]     ; 00524258
    TEST EDX,EDX                        ; 0052425e
    JZ 0x005242ba                       ; 00524260
        ;   XREF to: 005242ba (CONDITIONAL_JUMP)  ; LAB_005242ba
    XOR ESI,ESI                         ; 00524262
    TEST EDX,EDX                        ; 00524264
    JLE 0x005242b0                      ; 00524266
        ;   XREF to: 005242b0 (CONDITIONAL_JUMP)  ; LAB_005242b0
    MOV EBX,EDI                         ; 00524268
    PUSH 0x46b                          ; 0052426a
        ;   Label: LAB_0052426a
    PUSH 0x639271                       ; 0052426f | = "..\\core\\mission.cpp"
    MOV EBP,dword ptr [EBX + 0x564]     ; 00524274
    PUSH EBP                            ; 0052427a
    CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80 ; 0052427b
        ;   XREF to: 0040ac80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80(CDemonActor * this_ptr, char * context_file, int context_line)
    ADD ESP,0xc                         ; 00524280
    MOV EAX,dword ptr [EBX + 0x6f4]     ; 00524283
    PUSH EAX                            ; 00524289
    MOV EDX,dword ptr [EBX + 0x564]     ; 0052428a
    PUSH EDX                            ; 00524290
    PUSH EDI                            ; 00524291
    ADD EBX,0x4                         ; 00524292
    INC ESI                             ; 00524295
    CALL core_mission.cpp_CDemonMission_removeActor_FUN_00523f20 ; 00524296
        ;   XREF to: 00523f20 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_removeActor_FUN_00523f20(CDemonMission * this_ptr, CDemonActor * actor, int should_delete)
    MOV ECX,dword ptr [EDI + 0x560]     ; 0052429b
    ADD ESP,0xc                         ; 005242a1
    CMP ESI,ECX                         ; 005242a4
    JL 0x0052426a                       ; 005242a6
        ;   XREF to: 0052426a (CONDITIONAL_JUMP)  ; LAB_0052426a
    LEA EAX,[EAX]                       ; 005242a8
    MOV EDX,EDX                         ; 005242ae
    MOV dword ptr [EDI + 0x560],0x0     ; 005242b0
        ;   Label: LAB_005242b0
    PUSH EDI                            ; 005242ba
        ;   Label: LAB_005242ba
    CALL core_mission.cpp_CDemonMission_buildActiveSetActorList_FUN_00524120 ; 005242bb
        ;   XREF to: 00524120 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_buildActiveSetActorList_FUN_00524120(CDemonMission * this_ptr)
    MOV EBX,dword ptr [EDI + 0x55c]     ; 005242c0
    ADD ESP,0x4                         ; 005242c6
    TEST EBX,EBX                        ; 005242c9
    JL 0x0052432d                       ; 005242cb
        ;   XREF to: 0052432d (CONDITIONAL_JUMP)  ; LAB_0052432d
    MOV EBX,dword ptr [0x02db87d0]      ; 005242cd | g_LocalHeroIndex
    MOV ESI,dword ptr [EBX*0x4 + 0x2db87c0] ; 005242d3 | g_HeroActors
    LEA EBX,[EDI + 0x550]               ; 005242da
    MOV EAX,dword ptr [EBX]             ; 005242e0
    MOV dword ptr [ESI + 0x20],EAX      ; 005242e2
    MOV EAX,dword ptr [EBX + 0x4]       ; 005242e5
    MOV dword ptr [ESI + 0x24],EAX      ; 005242e8
    MOV EAX,dword ptr [EBX + 0x8]       ; 005242eb
    MOV dword ptr [ESI + 0x28],EAX      ; 005242ee
    MOV EBX,dword ptr [EBX + 0xc]       ; 005242f1
    MOV dword ptr [ESI + 0x2c],EBX      ; 005242f4
    MOV EBX,dword ptr [EDI + 0x55c]     ; 005242f7
    CMP EBX,dword ptr [EDI]             ; 005242fd
    JNZ 0x00524332                      ; 005242ff
        ;   XREF to: 00524332 (CONDITIONAL_JUMP)  ; LAB_00524332
    MOV dword ptr [EDI + 0x55c],0xffffffff ; 00524301
        ;   Label: LAB_00524301
    MOV dword ptr [EDI + 0x558],0x0     ; 0052430b
    MOV EAX,dword ptr [EDI + 0x558]     ; 00524315
    MOV dword ptr [EDI + 0x554],EAX     ; 0052431b
    MOV EAX,dword ptr [EDI + 0x554]     ; 00524321
    MOV dword ptr [EDI + 0x550],EAX     ; 00524327
    POP EBP                             ; 0052432d
        ;   Label: LAB_0052432d
    POP EDI                             ; 0052432e
    POP ESI                             ; 0052432f
    POP EBX                             ; 00524330
    RET                                 ; 00524331
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 00524332
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
        ;   Label: LAB_00524332
    PUSH 0x0                            ; 00524337
    PUSH 0x0                            ; 00524339
    PUSH 0x639285                       ; 0052433b | = "Changing sets..."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00524340
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00524345
    PUSH 0xb                            ; 00524348
    PUSH 0x0                            ; 0052434a
    PUSH 0x639296                       ; 0052434c | = "Insert wipe here..."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00524351
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00524356
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 00524359
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    MOV EBP,dword ptr [EDI + 0x55c]     ; 0052435e
    PUSH EBP                            ; 00524364
    PUSH EDI                            ; 00524365
    CALL core_mission.cpp_CDemonMission_loadSet_FUN_00523fb0 ; 00524366
        ;   XREF to: 00523fb0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_loadSet_FUN_00523fb0(CDemonMission * this_ptr, int set_index)
    ADD ESP,0x8                         ; 0052436b
    MOV EAX,[0x006810c8]                ; 0052436e | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EAX                            ; 00524373 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_clearLights_FUN_0056d2d0 ; 00524374
        ;   XREF to: 0056d2d0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_clearLights_FUN_0056d2d0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00524379
    MOV EDX,dword ptr [0x006810c8]      ; 0052437c | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EDX                            ; 00524382 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_initScene_FUN_0056aa10 ; 00524383
        ;   XREF to: 0056aa10 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_initScene_FUN_0056aa10(CDemonSet * this_ptr)
    MOV EBX,dword ptr [0x00680d50]      ; 00524388 | g_CScriptPtr
    ADD ESP,0x4                         ; 0052438e
    MOV dword ptr [EBX + 0x10],0x2      ; 00524391 | g_CScriptInstance.focus_actor_changed
    JMP 0x00524301                      ; 00524398
        ;   XREF to: 00524301 (UNCONDITIONAL_JUMP)  ; LAB_00524301

