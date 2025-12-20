; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_setedit.cpp_FUN_00581320()
;
; Local Variables:
; undefined1       Stack[-0x110]:1  local_110
;
; XREF[1]:
;   core_setedit.cpp_DementedFogEditor_FUN_00580730 at 00580de6
;
; Referenced Globals:
;   TerminatedCString s_Getting_ready_006489b9
;   TerminatedCString s_Computing_fog_for_camera_006489c7
;   TerminatedCString s_backdrop_s_fog_006489e3
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CGame* g_CGamePtr = 02d81a9c
;   CKeys* g_CKeysPtr = 02dcd7d4
;   CEditorTools g_CEditorToolsPtr
;   undefined4 g_CDemonLightInstance.light_enabled_flag
;   CGame g_CGameInstance
;   CKeys g_CKeysInstance
;
; Called Functions:
;   core_game.cpp_CGame_setGameRes_FUN_004dade0
;   core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004daed0
;   core_set.cpp_CDemonSet_FUN_0056c1a0
;   core_set.cpp_CDemonSet_FUN_0056d2d0
;   core_set.cpp_CDemonSet_initScene_FUN_0056aa10
;   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50
;   crt_io.c_deleteFile_FUN_005ff9d0
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   engine_2d.c_clearInputAndWait_FUN_00403260
;   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00581320
        ;   Label: core_setedit.cpp_FUN_00581320
    PUSH ESI                            ; 00581321
    PUSH EDI                            ; 00581322
    PUSH EBP                            ; 00581323
    SUB ESP,0x100                       ; 00581324
    MOV EBX,dword ptr [ESP + 0x114]     ; 0058132a
    MOV ESI,dword ptr [ESP + 0x118]     ; 00581331
    PUSH 0x6489b9                       ; 00581338 | = "Getting ready"
    MOV ECX,dword ptr [0x00678a60]      ; 0058133d | g_CEditorToolsPtr
    XOR EDX,EDX                         ; 00581343
    PUSH ECX                            ; 00581345 | g_CEditorToolsPtr
    MOV dword ptr [0x02d807a4],EDX      ; 00581346 | g_CDemonLightInstance.light_enabled_flag
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 0058134c
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
    ADD ESP,0x8                         ; 00581351
    MOV EDI,dword ptr [0x0067b654]      ; 00581354 | g_CGamePtr
    PUSH EDI                            ; 0058135a | g_CGameInstance
    CALL core_game.cpp_CGame_setGameRes_FUN_004dade0 ; 0058135b
        ;   XREF to: 004dade0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_setGameRes_FUN_004dade0(CGame * this_ptr)
    ADD ESP,0x4                         ; 00581360
    PUSH EBX                            ; 00581363
    CALL core_set.cpp_CDemonSet_initScene_FUN_0056aa10 ; 00581364
        ;   XREF to: 0056aa10 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_initScene_FUN_0056aa10(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00581369
    LEA EBP,[EBX + 0x4]                 ; 0058136c
    IMUL EDI,ESI,0x1a4                  ; 0058136f
        ;   Label: LAB_0058136f
    ADD EDI,EBP                         ; 00581375
    PUSH EDI                            ; 00581377
    PUSH 0x6489c7                       ; 00581378 | = "Computing fog for camera %s"
    MOV EAX,[0x00678a60]                ; 0058137d | g_CEditorToolsPtr
    PUSH EAX                            ; 00581382 | g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 00581383
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
    ADD ESP,0xc                         ; 00581388
    PUSH EDI                            ; 0058138b
    PUSH 0x6489e3                       ; 0058138c | = "backdrop\\%s.fog"
    LEA EAX,[ESP + 0x8]                 ; 00581391
    PUSH EAX                            ; 00581395
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00581396
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0058139b
    MOV EAX,ESP                         ; 0058139e
    PUSH EAX                            ; 005813a0
    CALL crt_io.c_deleteFile_FUN_005ff9d0 ; 005813a1
        ;   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)  ; int crt_io.c_deleteFile_FUN_005ff9d0(char * filename)
    ADD ESP,0x4                         ; 005813a6
    XOR EDI,EDI                         ; 005813a9
    PUSH ESI                            ; 005813ab
        ;   Label: LAB_005813ab
    PUSH EBX                            ; 005813ac
    CALL core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 ; 005813ad
        ;   XREF to: 0056ae50 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50(CDemonSet * this_ptr, int index)
    ADD ESP,0x8                         ; 005813b2
    PUSH EDI                            ; 005813b5
    PUSH EBX                            ; 005813b6
    CALL core_set.cpp_CDemonSet_FUN_0056c1a0 ; 005813b7
        ;   XREF to: 0056c1a0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_0056c1a0(CDemonSet * this_ptr)
    ADD ESP,0x8                         ; 005813bc
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 005813bf
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    PUSH 0x1                            ; 005813c4
    MOV EAX,[0x0067cf44]                ; 005813c6 | g_CKeysPtr
    PUSH EAX                            ; 005813cb | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005813cc | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 005813ce
    ADD ESP,0x8                         ; 005813d1
    TEST EAX,EAX                        ; 005813d4
    JNZ 0x00581420                      ; 005813d6
        ;   XREF to: 00581420 (CONDITIONAL_JUMP)  ; LAB_00581420
    PUSH 0x2e                           ; 005813d8
    MOV EAX,[0x0067cf44]                ; 005813da | g_CKeysPtr
    PUSH EAX                            ; 005813df | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005813e0 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 005813e2
    ADD ESP,0x8                         ; 005813e5
    TEST EAX,EAX                        ; 005813e8
    JZ 0x005813ab                       ; 005813ea
        ;   XREF to: 005813ab (CONDITIONAL_JUMP)  ; LAB_005813ab
    PUSH 0x2a                           ; 005813ec
    MOV EAX,[0x0067cf44]                ; 005813ee | g_CKeysPtr
    PUSH EAX                            ; 005813f3 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005813f4 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 005813f6
    ADD ESP,0x8                         ; 005813f8
    TEST EAX,EAX                        ; 005813fb
    JZ 0x00581410                       ; 005813fd
        ;   XREF to: 00581410 (CONDITIONAL_JUMP)  ; LAB_00581410
    DEC ESI                             ; 005813ff
    TEST ESI,ESI                        ; 00581400
    JGE 0x0058136f                      ; 00581402
        ;   XREF to: 0058136f (CONDITIONAL_JUMP)  ; LAB_0058136f
    MOV ESI,dword ptr [EBX]             ; 00581408
    DEC ESI                             ; 0058140a
    JMP 0x0058136f                      ; 0058140b
        ;   XREF to: 0058136f (UNCONDITIONAL_JUMP)  ; LAB_0058136f
    INC ESI                             ; 00581410
        ;   Label: LAB_00581410
    CMP ESI,dword ptr [EBX]             ; 00581411
    JL 0x0058136f                       ; 00581413
        ;   XREF to: 0058136f (CONDITIONAL_JUMP)  ; LAB_0058136f
    XOR ESI,ESI                         ; 00581419
    JMP 0x0058136f                      ; 0058141b
        ;   XREF to: 0058136f (UNCONDITIONAL_JUMP)  ; LAB_0058136f
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 00581420
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
        ;   Label: LAB_00581420
    PUSH EBX                            ; 00581425
    CALL core_set.cpp_CDemonSet_FUN_0056d2d0 ; 00581426
        ;   XREF to: 0056d2d0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_0056d2d0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0058142b
    MOV ECX,dword ptr [0x0067b654]      ; 0058142e | g_CGameInstance | g_CGamePtr
    PUSH ECX                            ; 00581434 | g_CGameInstance
    CALL core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004daed0 ; 00581435
        ;   XREF to: 004daed0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004daed0(CGame * this_ptr)
    ADD ESP,0x4                         ; 0058143a
    ADD ESP,0x100                       ; 0058143d
    POP EBP                             ; 00581443
    POP EDI                             ; 00581444
    POP ESI                             ; 00581445
    POP EBX                             ; 00581446
    RET                                 ; 00581447

