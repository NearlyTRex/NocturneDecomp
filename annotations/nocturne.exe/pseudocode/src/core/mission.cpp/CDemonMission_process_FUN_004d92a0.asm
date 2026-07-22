; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mission_cpp_CDemonMission_process_FUN_004d92a0(int *param_1)
;
;
; XREF[1]:
;   core_game.cpp_CGame_process_FUN_004a6010 at 004a641e
;
; Referenced Globals:
;   string s_Changing_sets..._00589da6
;   string s_Insert_wipe_here..._00589db7
;   undefined4 DAT_005be220
;   undefined4 DAT_005be368
;   undefined4 DAT_01cae0e8
;   undefined4 DAT_01e56db0
;   undefined4 DAT_01e57284
;
; Called Functions:
;   core_mission.cpp_CDemonMission_buildActiveSetActorList_FUN_004d9180
;   core_mission.cpp_CDemonMission_loadSet_FUN_004d9020
;   core_mission.cpp_CDemonMission_removeActor_FUN_004d8f90
;   core_set.cpp_CDemonSet_initScene_FUN_005084c0
;   core_set.cpp_FUN_0050ad20
;   engine_2d.c_drawText_FUN_00402600
;   wincore_wddvmem.cpp_swapBuffers_FUN_00553910
;   wincore_windll.cpp_clearScreen_FUN_0052ee70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d92a0
        ;   Label: core_mission.cpp_CDemonMission_process_FUN_004d92a0
    PUSH ESI                            ; 004d92a1
    PUSH EDI                            ; 004d92a2
    PUSH EBP                            ; 004d92a3
    MOV EDI,dword ptr [ESP + 0x14]      ; 004d92a4
    MOV EDX,dword ptr [EDI + 0x52c]     ; 004d92a8
    TEST EDX,EDX                        ; 004d92ae
    JZ 0x004d92ea                       ; 004d92b0
        ;   XREF to: 004d92ea (CONDITIONAL_JUMP)  ; LAB_004d92ea
    XOR ESI,ESI                         ; 004d92b2
    TEST EDX,EDX                        ; 004d92b4
    JLE 0x004d92e0                      ; 004d92b6
        ;   XREF to: 004d92e0 (CONDITIONAL_JUMP)  ; LAB_004d92e0
    MOV EBX,EDI                         ; 004d92b8
    MOV EBP,dword ptr [EBX + 0x6c0]     ; 004d92ba
        ;   Label: LAB_004d92ba
    PUSH EBP                            ; 004d92c0
    MOV EAX,dword ptr [EBX + 0x530]     ; 004d92c1
    PUSH EAX                            ; 004d92c7
    PUSH EDI                            ; 004d92c8
    ADD EBX,0x4                         ; 004d92c9
    INC ESI                             ; 004d92cc
    CALL core_mission.cpp_CDemonMission_removeActor_FUN_004d8f90 ; 004d92cd
        ;   XREF to: 004d8f90 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_CDemonMission_removeActor_FUN_004d8f90()
    MOV EDX,dword ptr [EDI + 0x52c]     ; 004d92d2
    ADD ESP,0xc                         ; 004d92d8
    CMP ESI,EDX                         ; 004d92db
    JL 0x004d92ba                       ; 004d92dd
        ;   XREF to: 004d92ba (CONDITIONAL_JUMP)  ; LAB_004d92ba
    NOP                                 ; 004d92df
    MOV dword ptr [EDI + 0x52c],0x0     ; 004d92e0
        ;   Label: LAB_004d92e0
    PUSH EDI                            ; 004d92ea
        ;   Label: LAB_004d92ea
    CALL core_mission.cpp_CDemonMission_buildActiveSetActorList_FUN_004d9180 ; 004d92eb
        ;   XREF to: 004d9180 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_CDemonMission_buildActiveSetActorList_FUN_004d9180()
    MOV ECX,dword ptr [EDI + 0x528]     ; 004d92f0
    ADD ESP,0x4                         ; 004d92f6
    TEST ECX,ECX                        ; 004d92f9
    JL 0x004d935d                       ; 004d92fb
        ;   XREF to: 004d935d (CONDITIONAL_JUMP)  ; LAB_004d935d
    MOV EBX,dword ptr [0x01cae0e8]      ; 004d92fd | DAT_01cae0e8
    LEA ESI,[EDI + 0x51c]               ; 004d9303
    MOV EBX,dword ptr [EBX*0x4 + 0x1cae0d8] ; 004d9309
    MOV EAX,dword ptr [ESI]             ; 004d9310
    MOV dword ptr [EBX + 0x20],EAX      ; 004d9312
    MOV EAX,dword ptr [ESI + 0x4]       ; 004d9315
    MOV dword ptr [EBX + 0x24],EAX      ; 004d9318
    MOV EAX,dword ptr [ESI + 0x8]       ; 004d931b
    MOV dword ptr [EBX + 0x28],EAX      ; 004d931e
    MOV ESI,dword ptr [ESI + 0xc]       ; 004d9321
    MOV dword ptr [EBX + 0x2c],ESI      ; 004d9324
    MOV EBX,dword ptr [EDI + 0x528]     ; 004d9327
    CMP EBX,dword ptr [EDI]             ; 004d932d
    JNZ 0x004d9362                      ; 004d932f
        ;   XREF to: 004d9362 (CONDITIONAL_JUMP)  ; LAB_004d9362
    MOV dword ptr [EDI + 0x528],0xffffffff ; 004d9331
        ;   Label: LAB_004d9331
    MOV dword ptr [EDI + 0x524],0x0     ; 004d933b
    MOV EAX,dword ptr [EDI + 0x524]     ; 004d9345
    MOV dword ptr [EDI + 0x520],EAX     ; 004d934b
    MOV EAX,dword ptr [EDI + 0x520]     ; 004d9351
    MOV dword ptr [EDI + 0x51c],EAX     ; 004d9357
    POP EBP                             ; 004d935d
        ;   Label: LAB_004d935d
    POP EDI                             ; 004d935e
    POP ESI                             ; 004d935f
    POP EBX                             ; 004d9360
    RET                                 ; 004d9361
    CALL wincore_windll.cpp_clearScreen_FUN_0052ee70 ; 004d9362
        ;   XREF to: 0052ee70 (UNCONDITIONAL_CALL)  ; undefined wincore_windll.cpp_clearScreen_FUN_0052ee70()
        ;   Label: LAB_004d9362
    PUSH 0x0                            ; 004d9367
    PUSH 0x0                            ; 004d9369
    PUSH 0x589da6                       ; 004d936b | = "Changing sets..."
    CALL engine_2d.c_drawText_FUN_00402600 ; 004d9370
        ;   XREF to: 00402600 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_drawText_FUN_00402600()
    ADD ESP,0xc                         ; 004d9375
    PUSH 0xb                            ; 004d9378
    PUSH 0x0                            ; 004d937a
    PUSH 0x589db7                       ; 004d937c | = "Insert wipe here..."
    CALL engine_2d.c_drawText_FUN_00402600 ; 004d9381
        ;   XREF to: 00402600 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_drawText_FUN_00402600()
    ADD ESP,0xc                         ; 004d9386
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_00553910 ; 004d9389
        ;   XREF to: 00553910 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_swapBuffers_FUN_00553910()
    MOV EBP,dword ptr [EDI + 0x528]     ; 004d938e
    PUSH EBP                            ; 004d9394
    PUSH EDI                            ; 004d9395
    CALL core_mission.cpp_CDemonMission_loadSet_FUN_004d9020 ; 004d9396
        ;   XREF to: 004d9020 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_CDemonMission_loadSet_FUN_004d9020()
    ADD ESP,0x8                         ; 004d939b
    MOV EAX,[0x005be368]                ; 004d939e | DAT_005be368
    PUSH EAX                            ; 004d93a3 | DAT_01e57284
    CALL core_set.cpp_FUN_0050ad20      ; 004d93a4
        ;   XREF to: 0050ad20 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_FUN_0050ad20()
    ADD ESP,0x4                         ; 004d93a9
    MOV EDX,dword ptr [0x005be368]      ; 004d93ac | DAT_005be368
    PUSH EDX                            ; 004d93b2 | DAT_01e57284
    CALL core_set.cpp_CDemonSet_initScene_FUN_005084c0 ; 004d93b3
        ;   XREF to: 005084c0 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_CDemonSet_initScene_FUN_005084c0()
    MOV EBX,dword ptr [0x005be220]      ; 004d93b8 | DAT_005be220
    ADD ESP,0x4                         ; 004d93be
    MOV dword ptr [EBX + 0x10],0x2      ; 004d93c1 | DAT_01e56db0
    JMP 0x004d9331                      ; 004d93c8
        ;   XREF to: 004d9331 (UNCONDITIONAL_JUMP)  ; LAB_004d9331

