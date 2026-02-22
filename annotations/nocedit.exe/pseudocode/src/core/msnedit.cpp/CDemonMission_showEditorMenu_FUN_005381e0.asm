; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_msnedit_cpp_CDemonMission_showEditorMenu_FUN_005381e0(CDemonMission *this_ptr)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x7dc]:1  local_7dc
; undefined1       Stack[-0x434]:1  local_434
; undefined1       Stack[-0x320]:1  local_320
; undefined1       Stack[-0x21c]:1  local_21c
; undefined1       Stack[-0x21b]:1  local_21b
; undefined1       Stack[-0x11c]:1  local_11c
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_main.c_showDeveloperToolsMenu_FUN_005073a0 at 005078f2
;
; Referenced Globals:
;   TerminatedCString s_world_msn_0063b744
;   TerminatedCString s_world_0063b750
;   TerminatedCString s_Loading_s_0063b756
;   TerminatedCString s_Saving_s_0063b764
;   TerminatedCString s_Not_converting_local_fil_0063b771
;   TerminatedCString s_Sec_0063bd80
;   TerminatedCString s_Demented_R_Mission_edito_0063bd87
;   TerminatedCString s_Current_mission_s_msn_0063bda2
;   TerminatedCString s_No_misison_loaded_0063bdba
;   undefined4 s_o_misison_loaded_0063bdbb
;   undefined4 s_misison_loaded_0063bdbc
;   undefined4 s_misison_loaded_0063bdbd
;   TerminatedCString s_s_1_Load_mission_0063bdcc
;   TerminatedCString s_s_2_Save_mission_0063bddc
;   TerminatedCString s_s_3_Create_mission_from__0063bdec
;   ... and 61 more
;
; Called Functions:
;   core_inivar.cpp_readIniData_FUN_004fbd90
;   core_mission.cpp_CDemonMission_checkMemory2_FUN_00522d30
;   core_mission.cpp_CDemonMission_createFromSingleSet_FUN_005243a0
;   core_mission.cpp_CDemonMission_FUN_005248e0
;   core_mission.cpp_CDemonMission_load_FUN_00522d90
;   core_mission.cpp_CDemonMission_loadScript_FUN_005235b0
;   core_mission.cpp_CDemonMission_loadSet_FUN_00523fb0
;   core_mission.cpp_CDemonMission_prepareAllActors_FUN_00523cf0
;   core_mission.cpp_CDemonMission_save_FUN_00522e30
;   core_msnedit.cpp_CDemonMission_addSet_FUN_00538d60
;   core_msnedit.cpp_CDemonMission_editActorsInSet_FUN_005390f0
;   core_msnedit.cpp_CDemonMission_enemyRandomizer_FUN_005379e0
;   core_msnedit.cpp_CDemonMission_FUN_00538f90
;   core_msnedit.cpp_CDemonMission_FUN_0053d3b0
;   core_msnedit.cpp_CDemonMission_FUN_0053d7b0
;   ... and 36 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005381e0
        ;   Label: core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0
    PUSH ESI                            ; 005381e1
    PUSH EDI                            ; 005381e2
    PUSH EBP                            ; 005381e3
    SUB ESP,0x7cc                       ; 005381e4
    MOV EBP,dword ptr [ESP + 0x7e0]     ; 005381ea
    PUSH 0x63bd80                       ; 005381f1 | = "Sec..."
    MOV EDX,dword ptr [0x00678a60]      ; 005381f6 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EDX                            ; 005381fc | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 005381fd
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
    ADD ESP,0x8                         ; 00538202
    PUSH EBP                            ; 00538205
    CALL core_mission.cpp_CDemonMission_checkMemory2_FUN_00522d30 ; 00538206
        ;   XREF to: 00522d30 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_checkMemory2_FUN_00522d30(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 0053820b
    PUSH EBP                            ; 0053820e
    CALL core_mission.cpp_CDemonMission_FUN_005248e0 ; 0053820f
        ;   XREF to: 005248e0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_FUN_005248e0(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 00538214
    PUSH 0x680800                       ; 00538217 | = "$$UNDO$$.TMP"
    CALL crt_stdio.c_remove_FUN_005ff9d0 ; 0053821c
        ;   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_remove_FUN_005ff9d0(char * filename)
    ADD ESP,0x4                         ; 00538221
    CALL core_inivar.cpp_readIniData_FUN_004fbd90 ; 00538224
        ;   XREF to: 004fbd90 (UNCONDITIONAL_CALL)  ; void core_inivar.cpp_readIniData_FUN_004fbd90()
    LEA EAX,[EBP + 0x44]                ; 00538229
    XOR ECX,ECX                         ; 0053822c
    MOV dword ptr [ESP + 0x7c8],EAX     ; 0053822e
    LEA EAX,[EBP + 0x148]               ; 00538235
    MOV dword ptr [0x00822040],ECX      ; 0053823b | g_IncludeCommentsWhenWriting
    MOV dword ptr [ESP + 0x7c4],EAX     ; 00538241
    MOV dword ptr [ESP + 0x7c0],EAX     ; 00538248
    MOV dword ptr [EBP + 0x4],0x1       ; 0053824f
        ;   Label: LAB_0053824f
    MOV dword ptr [EBP + 0x3c],0x0      ; 00538256
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 0053825d
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    PUSH 0x0                            ; 00538262
    PUSH 0x0                            ; 00538264
    PUSH 0x63bd87                       ; 00538266 | = "Demented(R) Mission editor"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0053826b
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV AH,byte ptr [EBP + 0x44]        ; 00538270
    ADD ESP,0xc                         ; 00538273
    TEST AH,AH                          ; 00538276
    JNZ 0x00538568                      ; 00538278
        ;   XREF to: 00538568 (CONDITIONAL_JUMP)  ; LAB_00538568
    MOV ESI,0x63bdba                    ; 0053827e | = "No misison loaded"
    LEA EDI,[ESP + 0x5c0]               ; 00538283
    PUSH EDI                            ; 0053828a
    MOV AL,byte ptr [ESI]               ; 0053828b | = "No misison loaded" | s_misison_loaded_0063bdbc
        ;   Label: LAB_0053828b
    MOV byte ptr [EDI],AL               ; 0053828d
    CMP AL,0x0                          ; 0053828f
    JZ 0x005382a3                       ; 00538291
        ;   XREF to: 005382a3 (CONDITIONAL_JUMP)  ; LAB_005382a3
    MOV AL,byte ptr [ESI + 0x1]         ; 00538293 | s_o_misison_loaded_0063bdbb | s_misison_loaded_0063bdbd
    ADD ESI,0x2                         ; 00538296
    MOV byte ptr [EDI + 0x1],AL         ; 00538299
    ADD EDI,0x2                         ; 0053829c
    CMP AL,0x0                          ; 0053829f
    JNZ 0x0053828b                      ; 005382a1
        ;   XREF to: 0053828b (CONDITIONAL_JUMP)  ; LAB_0053828b
    POP EDI                             ; 005382a3
        ;   Label: LAB_005382a3
    PUSH 0x16                           ; 005382a4
        ;   Label: LAB_005382a4
    PUSH 0x0                            ; 005382a6
    LEA EAX,[ESP + 0x5c8]               ; 005382a8
    PUSH EAX                            ; 005382af
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005382b0
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 005382b5
    PUSH 0x2c                           ; 005382b8
    PUSH 0x0                            ; 005382ba
    PUSH 0x63bdcc                       ; 005382bc | = "1. Load mission"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005382c1
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 005382c6
    PUSH 0x37                           ; 005382c9
    PUSH 0x0                            ; 005382cb
    PUSH 0x63bddc                       ; 005382cd | = "2. Save mission"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005382d2
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 005382d7
    PUSH 0x42                           ; 005382da
    PUSH 0x0                            ; 005382dc
    PUSH 0x63bdec                       ; 005382de | = "3. Create mission from single set"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005382e3
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 005382e8
    PUSH 0x4d                           ; 005382eb
    PUSH 0x0                            ; 005382ed
    PUSH 0x63be0e                       ; 005382ef | = "4. Add set"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005382f4
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 005382f9
    PUSH 0x58                           ; 005382fc
    PUSH 0x0                            ; 005382fe
    PUSH 0x63be19                       ; 00538300 | = "5. Remove set"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00538305
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0053830a
    PUSH 0x63                           ; 0053830d
    PUSH 0x0                            ; 0053830f
    PUSH 0x63be27                       ; 00538311 | = "6. Edit actors in a set"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00538316
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0053831b
    PUSH 0x6e                           ; 0053831e
    PUSH 0x0                            ; 00538320
    PUSH 0x63be3f                       ; 00538322 | = "7. Precompute lights for rooms with m..."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00538327
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0053832c
    PUSH 0x79                           ; 0053832f
    PUSH 0x0                            ; 00538331
    PUSH 0x63be6b                       ; 00538333 | = "8. Save mission with a different name"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00538338
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0053833d
    PUSH 0x8f                           ; 00538340
    PUSH 0x0                            ; 00538345
    PUSH 0x63be91                       ; 00538347 | = "A. Play mission."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0053834c
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00538351
    PUSH 0x9a                           ; 00538354
    PUSH 0x0                            ; 00538359
    PUSH 0x63bea2                       ; 0053835b | = "B. Enemy randomizer"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00538360
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00538365
    PUSH 0xa5                           ; 00538368
    PUSH 0x0                            ; 0053836d
    PUSH 0x63beb6                       ; 0053836f | = "C. Import actors from another mission"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00538374
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00538379
    PUSH 0xb0                           ; 0053837c
    PUSH 0x0                            ; 00538381
    PUSH 0x63bedc                       ; 00538383 | = "D. Difficulty statistics"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00538388
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0053838d
    PUSH 0xbb                           ; 00538390
    PUSH 0x0                            ; 00538395
    PUSH 0x63bef5                       ; 00538397 | = "G. Gore editor"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0053839c
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 005383a1
    PUSH 0xc6                           ; 005383a4
    PUSH 0x0                            ; 005383a9
    PUSH 0x63bf04                       ; 005383ab | = "H. Display actor class heirarchy"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005383b0
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 005383b5
    PUSH 0xd1                           ; 005383b8
    PUSH 0x0                            ; 005383bd
    PUSH 0x63bf25                       ; 005383bf | = "U. Update all mission files to latest..."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005383c4
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 005383c9
    PUSH 0xdc                           ; 005383cc
    PUSH 0x0                            ; 005383d1
    PUSH 0x63bf63                       ; 005383d3 | = "S. Show sound files needed"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005383d8
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 005383dd
    PUSH 0xe7                           ; 005383e0
    PUSH 0x0                            ; 005383e5
    PUSH 0x63bf7e                       ; 005383e7 | = "W. Rebuild waypoint connectivity"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005383ec
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 005383f1
    PUSH 0xf2                           ; 005383f4
    PUSH 0x0                            ; 005383f9
    PUSH 0x63bf9f                       ; 005383fb | = "Z. Display memory usage info"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00538400
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV ESI,dword ptr [EBP + 0x144]     ; 00538405
    ADD ESP,0xc                         ; 0053840b
    TEST ESI,ESI                        ; 0053840e
    JLE 0x0053858a                      ; 00538410
        ;   XREF to: 0053858a (CONDITIONAL_JUMP)  ; LAB_0053858a
    PUSH 0xfd                           ; 00538416
    PUSH 0x0                            ; 0053841b
    PUSH 0x63bfbc                       ; 0053841d | = "Sets in mission:"
    MOV EBX,0x113                       ; 00538422
    XOR EDI,EDI                         ; 00538427
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00538429
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EAX,dword ptr [EBP + 0x144]     ; 0053842e
    ADD ESP,0xc                         ; 00538434
    TEST EAX,EAX                        ; 00538437
    JLE 0x00538462                      ; 00538439
        ;   XREF to: 00538462 (CONDITIONAL_JUMP)  ; LAB_00538462
    MOV ESI,dword ptr [ESP + 0x7c0]     ; 0053843b
    PUSH EBX                            ; 00538442
        ;   Label: LAB_00538442
    PUSH 0x0                            ; 00538443
    PUSH ESI                            ; 00538445
    INC EDI                             ; 00538446
    ADD EBX,0xb                         ; 00538447
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0053844a
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0053844f
    MOV EDX,dword ptr [EBP + 0x144]     ; 00538452
    ADD ESI,0x100                       ; 00538458
    CMP EDI,EDX                         ; 0053845e
    JL 0x00538442                       ; 00538460
        ;   XREF to: 00538442 (CONDITIONAL_JUMP)  ; LAB_00538442
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 00538462
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
        ;   Label: LAB_00538462
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 00538467
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    MOV ECX,dword ptr [0x0067cf44]      ; 0053846c | g_CKeysInstance | g_CKeysPtr
    PUSH ECX                            ; 00538472 | g_CKeysInstance
    CALL engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_00502470 ; 00538473
        ;   XREF to: 00502470 (UNCONDITIONAL_CALL)  ; int engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_00502470(CKeys * this_ptr)
    ADD ESP,0x4                         ; 00538478
    MOV ESI,EAX                         ; 0053847b
    MOV EBX,EAX                         ; 0053847d
    CMP EAX,0x41                        ; 0053847f
    JNC 0x00538a86                      ; 00538482
        ;   XREF to: 00538a86 (CONDITIONAL_JUMP)  ; LAB_00538a86
    CMP EAX,0x34                        ; 00538488
    JNC 0x00538af3                      ; 0053848b
        ;   XREF to: 00538af3 (CONDITIONAL_JUMP)  ; LAB_00538af3
    CMP EAX,0x32                        ; 00538491
    JNC 0x00538b1f                      ; 00538494
        ;   XREF to: 00538b1f (CONDITIONAL_JUMP)  ; LAB_00538b1f
    CMP EAX,0x31                        ; 0053849a
    JNZ 0x005384ec                      ; 0053849d
        ;   XREF to: 005384ec (CONDITIONAL_JUMP)  ; LAB_005384ec
    PUSH 0x0                            ; 0053849f
    LEA EAX,[ESP + 0x4c0]               ; 005384a1
    PUSH EAX                            ; 005384a8
    MOV EAX,0x63bfe8                    ; 005384a9 | = "*.msn"
    PUSH EAX                            ; 005384ae | = "*.msn"
    MOV EAX,0x63bfee                    ; 005384af | = "world"
    PUSH EAX                            ; 005384b4 | = "world"
    MOV EAX,0x63bff4                    ; 005384b5 | = "Load mission"
    PUSH EAX                            ; 005384ba | = "Load mission"
    MOV ECX,dword ptr [0x00678a60]      ; 005384bb | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH ECX                            ; 005384c1 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270 ; 005384c2
        ;   XREF to: 0049f270 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270(CEditorTools * this_ptr, char * search_pattern, char * directory, char * target_filename, ...)
    ADD ESP,0x18                        ; 005384c7
    TEST EAX,EAX                        ; 005384ca
    JZ 0x005384ec                       ; 005384cc
        ;   XREF to: 005384ec (CONDITIONAL_JUMP)  ; LAB_005384ec
    PUSH 0x0                            ; 005384ce
    LEA EAX,[ESP + 0x4c0]               ; 005384d0
    PUSH EAX                            ; 005384d7
    PUSH EBP                            ; 005384d8
    CALL core_mission.cpp_CDemonMission_load_FUN_00522d90 ; 005384d9
        ;   XREF to: 00522d90 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_load_FUN_00522d90(CDemonMission * this_ptr, char * mission_filename, int load_flags)
    ADD ESP,0xc                         ; 005384de
    PUSH 0x1                            ; 005384e1
    PUSH EBP                            ; 005384e3
    CALL core_mission.cpp_CDemonMission_loadScript_FUN_005235b0 ; 005384e4
        ;   XREF to: 005235b0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_loadScript_FUN_005235b0(CDemonMission * this_ptr, int param_2)
    ADD ESP,0x8                         ; 005384e9
        ;   Label: LAB_005384e9
    CMP ESI,0x1b                        ; 005384ec
        ;   Label: LAB_005384ec
    JNZ 0x0053824f                      ; 005384ef
        ;   XREF to: 0053824f (CONDITIONAL_JUMP)  ; LAB_0053824f
    PUSH 0x63c206                       ; 005384f5 | = "Cleaning up..."
    MOV ESI,dword ptr [0x00678a60]      ; 005384fa | g_CEditorToolsPtr
    PUSH ESI                            ; 00538500 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 00538501
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
    ADD ESP,0x8                         ; 00538506
    PUSH 0x680800                       ; 00538509 | = "$$UNDO$$.TMP"
    CALL crt_stdio.c_remove_FUN_005ff9d0 ; 0053850e
        ;   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_remove_FUN_005ff9d0(char * filename)
    ADD ESP,0x4                         ; 00538513
    PUSH 0x63c215                       ; 00538516 | = "Deleting actors..."
    MOV EDI,dword ptr [0x00678a60]      ; 0053851b | g_CEditorToolsPtr
    MOV dword ptr [EBP + 0x4],0x0       ; 00538521
    PUSH EDI                            ; 00538528 | g_CEditorToolsInstance
    MOV dword ptr [EBP + 0x3c],0x0      ; 00538529
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 00538530
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
    ADD ESP,0x8                         ; 00538535
    PUSH EBP                            ; 00538538
    CALL core_mission.cpp_CDemonMission_checkMemory2_FUN_00522d30 ; 00538539
        ;   XREF to: 00522d30 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_checkMemory2_FUN_00522d30(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 0053853e
    PUSH 0x63c228                       ; 00538541 | = "Freeing models..."
    MOV EAX,[0x00678a60]                ; 00538546 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EAX                            ; 0053854b | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 0053854c
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
    ADD ESP,0x8                         ; 00538551
    PUSH EBP                            ; 00538554
    CALL core_mission.cpp_CDemonMission_FUN_005248e0 ; 00538555
        ;   XREF to: 005248e0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_FUN_005248e0(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 0053855a
    ADD ESP,0x7cc                       ; 0053855d
    POP EBP                             ; 00538563
    POP EDI                             ; 00538564
    POP ESI                             ; 00538565
    POP EBX                             ; 00538566
    RET                                 ; 00538567
    MOV EBX,dword ptr [ESP + 0x7c8]     ; 00538568
        ;   Label: LAB_00538568
    PUSH EBX                            ; 0053856f
    PUSH 0x63bda2                       ; 00538570 | = "Current mission: %s.msn"
    LEA EAX,[ESP + 0x5c8]               ; 00538575
    PUSH EAX                            ; 0053857c
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0053857d
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 00538582
    JMP 0x005382a4                      ; 00538585
        ;   XREF to: 005382a4 (UNCONDITIONAL_JUMP)  ; LAB_005382a4
    PUSH 0xfd                           ; 0053858a
        ;   Label: LAB_0053858a
    PUSH 0x0                            ; 0053858f
    PUSH 0x63bfcd                       ; 00538591 | = "No sets defined in mission"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00538596
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0053859b
    JMP 0x00538462                      ; 0053859e
        ;   XREF to: 00538462 (UNCONDITIONAL_JUMP)  ; LAB_00538462
    CMP byte ptr [EBP + 0x44],0x0       ; 005385a3
        ;   Label: LAB_005385a3
    JNZ 0x005385c0                      ; 005385a7
        ;   XREF to: 005385c0 (CONDITIONAL_JUMP)  ; LAB_005385c0
    MOV EAX,0x63c001                    ; 005385a9 | = "No mission loaded."
    PUSH EAX                            ; 005385ae | = "No mission loaded."
    MOV EDX,dword ptr [0x00678a60]      ; 005385af | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EDX                            ; 005385b5 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 005385b6
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    JMP 0x005384e9                      ; 005385bb
        ;   XREF to: 005384e9 (UNCONDITIONAL_JUMP)  ; LAB_005384e9
    MOV EDI,dword ptr [ESP + 0x7c8]     ; 005385c0
        ;   Label: LAB_005385c0
    PUSH EDI                            ; 005385c7
    MOV EAX,0x63c014                    ; 005385c8 | = "%s.msn"
    PUSH EAX                            ; 005385cd | = "%s.msn"
    LEA EAX,[ESP + 0x4c4]               ; 005385ce
    PUSH EAX                            ; 005385d5
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 005385d6
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 005385db
    LEA EAX,[ESP + 0x4bc]               ; 005385de
    PUSH EAX                            ; 005385e5
    MOV EAX,0x63c01b                    ; 005385e6 | = "Save mission to %s"
    PUSH EAX                            ; 005385eb | = "Save mission to %s"
    MOV EAX,[0x00678a60]                ; 005385ec | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EAX                            ; 005385f1 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060 ; 005385f2
        ;   XREF to: 0049f060 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060(CEditorTools * this_ptr, char * format_string)
    ADD ESP,0xc                         ; 005385f7
    TEST EAX,EAX                        ; 005385fa
    JZ 0x005384ec                       ; 005385fc
        ;   XREF to: 005384ec (CONDITIONAL_JUMP)  ; LAB_005384ec
    LEA EAX,[ESP + 0x4bc]               ; 00538602
    PUSH EAX                            ; 00538609
    PUSH EBP                            ; 0053860a
    CALL core_msnedit.cpp_CDemonMission_saveMissionAndScript_FUN_0053d190 ; 0053860b
        ;   XREF to: 0053d190 (UNCONDITIONAL_CALL)  ; void core_msnedit.cpp_CDemonMission_saveMissionAndScript_FUN_0053d190(CDemonMission * this_ptr, char * filename)
    JMP 0x005384e9                      ; 00538610
        ;   XREF to: 005384e9 (UNCONDITIONAL_JUMP)  ; LAB_005384e9
    PUSH 0x0                            ; 00538615
        ;   Label: LAB_00538615
    LEA EAX,[ESP + 0x4c0]               ; 00538617
    PUSH EAX                            ; 0053861e
    MOV EAX,0x63c05d                    ; 0053861f | = "*.set"
    PUSH EAX                            ; 00538624 | = "*.set"
    MOV EAX,0x63c063                    ; 00538625 | = "models"
    PUSH EAX                            ; 0053862a | = "models"
    MOV EAX,0x63c06a                    ; 0053862b | = "Enter set name to add"
    PUSH EAX                            ; 00538630 | = "Enter set name to add"
    MOV EAX,[0x00678a60]                ; 00538631 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EAX                            ; 00538636 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270 ; 00538637
        ;   XREF to: 0049f270 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270(CEditorTools * this_ptr, char * search_pattern, char * directory, char * target_filename, ...)
    ADD ESP,0x18                        ; 0053863c
    TEST EAX,EAX                        ; 0053863f
    JZ 0x005384ec                       ; 00538641
        ;   XREF to: 005384ec (CONDITIONAL_JUMP)  ; LAB_005384ec
    LEA EAX,[ESP + 0x4bc]               ; 00538647
    PUSH EAX                            ; 0053864e
    PUSH EBP                            ; 0053864f
    CALL core_msnedit.cpp_CDemonMission_addSet_FUN_00538d60 ; 00538650
        ;   XREF to: 00538d60 (UNCONDITIONAL_CALL)  ; void core_msnedit.cpp_CDemonMission_addSet_FUN_00538d60(CDemonMission * this_ptr, char * param_2)
    JMP 0x005384e9                      ; 00538655
        ;   XREF to: 005384e9 (UNCONDITIONAL_JUMP)  ; LAB_005384e9
    MOV EDX,dword ptr [EBP]             ; 0053865a
        ;   Label: LAB_0053865a
    PUSH EDX                            ; 0053865d
    MOV EAX,0x63c080                    ; 0053865e | = "Select set to delete."
    PUSH EAX                            ; 00538663 | = "Select set to delete."
    PUSH EBP                            ; 00538664
    CALL core_msnedit.cpp_CDemonMission_FUN_00538f90 ; 00538665
        ;   XREF to: 00538f90 (UNCONDITIONAL_CALL)  ; int core_msnedit.cpp_CDemonMission_FUN_00538f90(CDemonMission * this_ptr, char * param_2, int param_3)
    ADD ESP,0xc                         ; 0053866a
    MOV EBX,EAX                         ; 0053866d
    TEST EAX,EAX                        ; 0053866f
    JL 0x005384ec                       ; 00538671
        ;   XREF to: 005384ec (CONDITIONAL_JUMP)  ; LAB_005384ec
    MOV ECX,dword ptr [ESP + 0x7c4]     ; 00538677
    SHL EAX,0x8                         ; 0053867e
    ADD EAX,ECX                         ; 00538681
    PUSH EAX                            ; 00538683
    MOV EAX,0x63c096                    ; 00538684 | = "This is going to remove set %s from t..."
    PUSH EAX                            ; 00538689 | = "This is going to remove set %s from t..."
    MOV EDI,dword ptr [0x00678a60]      ; 0053868a | g_CEditorToolsPtr
    PUSH EDI                            ; 00538690 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060 ; 00538691
        ;   XREF to: 0049f060 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060(CEditorTools * this_ptr, char * format_string)
    ADD ESP,0xc                         ; 00538696
    TEST EAX,EAX                        ; 00538699
    JZ 0x005384ec                       ; 0053869b
        ;   XREF to: 005384ec (CONDITIONAL_JUMP)  ; LAB_005384ec
    PUSH EBX                            ; 005386a1
    PUSH EBP                            ; 005386a2
    CALL core_msnedit.cpp_CDemonMission_removeSet_FUN_00538df0 ; 005386a3
        ;   XREF to: 00538df0 (UNCONDITIONAL_CALL)  ; void core_msnedit.cpp_CDemonMission_removeSet_FUN_00538df0(CDemonMission * this_ptr, int param_2)
    JMP 0x005384e9                      ; 005386a8
        ;   XREF to: 005384e9 (UNCONDITIONAL_JUMP)  ; LAB_005384e9
    MOV EBX,dword ptr [EBP]             ; 005386ad
        ;   Label: LAB_005386ad
    PUSH EBX                            ; 005386b0
    MOV EAX,0x63c0ec                    ; 005386b1 | = "Edit actors in which set?"
    PUSH EAX                            ; 005386b6 | = "Edit actors in which set?"
    PUSH EBP                            ; 005386b7
    CALL core_msnedit.cpp_CDemonMission_FUN_00538f90 ; 005386b8
        ;   XREF to: 00538f90 (UNCONDITIONAL_CALL)  ; int core_msnedit.cpp_CDemonMission_FUN_00538f90(CDemonMission * this_ptr, char * param_2, int param_3)
    ADD ESP,0xc                         ; 005386bd
    MOV EBX,EAX                         ; 005386c0
    TEST EAX,EAX                        ; 005386c2
    JL 0x005384ec                       ; 005386c4
        ;   XREF to: 005384ec (CONDITIONAL_JUMP)  ; LAB_005384ec
    MOV EAX,0x63c106                    ; 005386ca | = "Preparing actors."
    PUSH EAX                            ; 005386cf | = "Preparing actors."
    MOV EDI,dword ptr [0x00678a60]      ; 005386d0 | g_CEditorToolsPtr
    PUSH EDI                            ; 005386d6 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 005386d7
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
    ADD ESP,0x8                         ; 005386dc
    PUSH EBP                            ; 005386df
    CALL core_mission.cpp_CDemonMission_prepareAllActors_FUN_00523cf0 ; 005386e0
        ;   XREF to: 00523cf0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_prepareAllActors_FUN_00523cf0(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 005386e5
    MOV EAX,0x63c118                    ; 005386e8 | = "Loading set."
    PUSH EAX                            ; 005386ed | = "Loading set."
    MOV EAX,[0x00678a60]                ; 005386ee | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EAX                            ; 005386f3 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 005386f4
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
    ADD ESP,0x8                         ; 005386f9
    PUSH EBX                            ; 005386fc
    PUSH EBP                            ; 005386fd
    CALL core_mission.cpp_CDemonMission_loadSet_FUN_00523fb0 ; 005386fe
        ;   XREF to: 00523fb0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_loadSet_FUN_00523fb0(CDemonMission * this_ptr, int set_index)
    MOV EAX,0x1                         ; 00538703
    ADD ESP,0x8                         ; 00538708
    PUSH EAX                            ; 0053870b
        ;   Label: LAB_0053870b
    PUSH EBP                            ; 0053870c
    CALL core_msnedit.cpp_CDemonMission_editActorsInSet_FUN_005390f0 ; 0053870d
        ;   XREF to: 005390f0 (UNCONDITIONAL_CALL)  ; int core_msnedit.cpp_CDemonMission_editActorsInSet_FUN_005390f0(CDemonMission * this_ptr, int param_2)
    ADD ESP,0x8                         ; 00538712
    CMP EAX,0x2                         ; 00538715
    JNZ 0x005384ec                      ; 00538718
        ;   XREF to: 005384ec (CONDITIONAL_JUMP)  ; LAB_005384ec
    LEA EAX,[ESP + 0x4bc]               ; 0053871e
    PUSH EAX                            ; 00538725
    PUSH EBP                            ; 00538726
    CALL core_msnedit.cpp_CDemonMission_saveMissionAndScript_FUN_0053d190 ; 00538727
        ;   XREF to: 0053d190 (UNCONDITIONAL_CALL)  ; void core_msnedit.cpp_CDemonMission_saveMissionAndScript_FUN_0053d190(CDemonMission * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0053872c
    PUSH EBP                            ; 0053872f
    CALL core_msnedit.cpp_CDemonMission_playMission_FUN_00538ba0 ; 00538730
        ;   XREF to: 00538ba0 (UNCONDITIONAL_CALL)  ; void core_msnedit.cpp_CDemonMission_playMission_FUN_00538ba0(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 00538735
    XOR EAX,EAX                         ; 00538738
    JMP 0x0053870b                      ; 0053873a
        ;   XREF to: 0053870b (UNCONDITIONAL_JUMP)  ; LAB_0053870b
    MOV EAX,0x63c125                    ; 0053873c | = "Precompute lights?"
        ;   Label: LAB_0053873c
    PUSH EAX                            ; 00538741 | = "Precompute lights?"
    MOV EDX,dword ptr [0x00678a60]      ; 00538742 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EDX                            ; 00538748 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060 ; 00538749
        ;   XREF to: 0049f060 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060(CEditorTools * this_ptr, char * format_string)
    ADD ESP,0x8                         ; 0053874e
    TEST EAX,EAX                        ; 00538751
    JZ 0x005384ec                       ; 00538753
        ;   XREF to: 005384ec (CONDITIONAL_JUMP)  ; LAB_005384ec
    PUSH -0x1                           ; 00538759
    MOV ECX,dword ptr [0x006810c8]      ; 0053875b | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH ECX                            ; 00538761 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470 ; 00538762
        ;   XREF to: 0056a470 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470(CDemonSet * this_ptr, int param_2)
    ADD ESP,0x8                         ; 00538767
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 0053876a
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    PUSH 0x0                            ; 0053876f
    PUSH 0x0                            ; 00538771
    MOV EAX,0x63c138                    ; 00538773 | = "You must now go into set editor and s..."
    PUSH EAX                            ; 00538778 | = "You must now go into set editor and s..."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00538779
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0053877e
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 00538781
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 00538786
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    JMP 0x005384ec                      ; 0053878b
        ;   XREF to: 005384ec (UNCONDITIONAL_JUMP)  ; LAB_005384ec
    PUSH 0x0                            ; 00538790
        ;   Label: LAB_00538790
    LEA EAX,[ESP + 0x4c0]               ; 00538792
    PUSH EAX                            ; 00538799
    MOV EAX,0x63c162                    ; 0053879a | = "msn"
    PUSH EAX                            ; 0053879f | = "msn"
    MOV EAX,0x63c166                    ; 005387a0 | = "world"
    PUSH EAX                            ; 005387a5 | = "world"
    MOV EAX,0x63c16c                    ; 005387a6 | = "Save mission to new name"
    PUSH EAX                            ; 005387ab | = "Save mission to new name"
    MOV EAX,[0x00678a60]                ; 005387ac | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EAX                            ; 005387b1 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70 ; 005387b2
        ;   XREF to: 0049fb70 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70(CEditorTools * this_ptr, char * prompt_text, char * filename_buffer, int buffer_size, ...)
    ADD ESP,0x18                        ; 005387b7
    TEST EAX,EAX                        ; 005387ba
    JZ 0x005384ec                       ; 005387bc
        ;   XREF to: 005384ec (CONDITIONAL_JUMP)  ; LAB_005384ec
    PUSH 0x0                            ; 005387c2
    LEA EAX,[ESP + 0x6c4]               ; 005387c4
    PUSH EAX                            ; 005387cb
    PUSH 0x0                            ; 005387cc
    PUSH 0x0                            ; 005387ce
    LEA EAX,[ESP + 0x4cc]               ; 005387d0
    PUSH EAX                            ; 005387d7
    CALL crt_string.c_splitpath_FUN_005ff178 ; 005387d8
        ;   XREF to: 005ff178 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_005ff178(char * path, char * drive, char * dir, char * fname, ...)
    ADD ESP,0x14                        ; 005387dd
    LEA EAX,[ESP + 0x6c0]               ; 005387e0
    PUSH EAX                            ; 005387e7
    MOV EAX,0x63c185                    ; 005387e8 | = "%s.msn"
    PUSH EAX                            ; 005387ed | = "%s.msn"
    LEA EAX,[ESP + 0x4c4]               ; 005387ee
    PUSH EAX                            ; 005387f5
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 005387f6
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 005387fb
    LEA EAX,[ESP + 0x6c0]               ; 005387fe
    PUSH EAX                            ; 00538805
    PUSH EBP                            ; 00538806
    CALL core_msnedit.cpp_CDemonMission_saveWithNewName_FUN_00537f60 ; 00538807
        ;   XREF to: 00537f60 (UNCONDITIONAL_CALL)  ; void core_msnedit.cpp_CDemonMission_saveWithNewName_FUN_00537f60(CDemonMission * this_ptr, char * name)
    JMP 0x005384e9                      ; 0053880c
        ;   XREF to: 005384e9 (UNCONDITIONAL_JUMP)  ; LAB_005384e9
    PUSH EBP                            ; 00538811
        ;   Label: LAB_00538811
    CALL core_msnedit.cpp_CDemonMission_playMission_FUN_00538ba0 ; 00538812
        ;   XREF to: 00538ba0 (UNCONDITIONAL_CALL)  ; void core_msnedit.cpp_CDemonMission_playMission_FUN_00538ba0(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 00538817
    JMP 0x005384ec                      ; 0053881a
        ;   XREF to: 005384ec (UNCONDITIONAL_JUMP)  ; LAB_005384ec
    PUSH EBP                            ; 0053881f
        ;   Label: LAB_0053881f
    CALL core_msnedit.cpp_CDemonMission_enemyRandomizer_FUN_005379e0 ; 00538820
        ;   XREF to: 005379e0 (UNCONDITIONAL_CALL)  ; void core_msnedit.cpp_CDemonMission_enemyRandomizer_FUN_005379e0(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 00538825
    JMP 0x005384ec                      ; 00538828
        ;   XREF to: 005384ec (UNCONDITIONAL_JUMP)  ; LAB_005384ec
    PUSH EBP                            ; 0053882d
        ;   Label: LAB_0053882d
    CALL core_msnedit.cpp_CDemonMission_importActors_FUN_0053ccf0 ; 0053882e
        ;   XREF to: 0053ccf0 (UNCONDITIONAL_CALL)  ; void core_msnedit.cpp_CDemonMission_importActors_FUN_0053ccf0(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 00538833
    JMP 0x005384ec                      ; 00538836
        ;   XREF to: 005384ec (UNCONDITIONAL_JUMP)  ; LAB_005384ec
    PUSH EBP                            ; 0053883b
        ;   Label: LAB_0053883b
    CALL core_msnedit.cpp_CDemonMission_FUN_0053d3b0 ; 0053883c
        ;   XREF to: 0053d3b0 (UNCONDITIONAL_CALL)  ; void core_msnedit.cpp_CDemonMission_FUN_0053d3b0(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 00538841
    JMP 0x005384ec                      ; 00538844
        ;   XREF to: 005384ec (UNCONDITIONAL_JUMP)  ; LAB_005384ec
    MOV EDX,dword ptr [EBP]             ; 00538849
        ;   Label: LAB_00538849
    PUSH EDX                            ; 0053884c
    PUSH 0x63c18c                       ; 0053884d | = "Edit gore in which set?"
    PUSH EBP                            ; 00538852
    CALL core_msnedit.cpp_CDemonMission_FUN_00538f90 ; 00538853
        ;   XREF to: 00538f90 (UNCONDITIONAL_CALL)  ; int core_msnedit.cpp_CDemonMission_FUN_00538f90(CDemonMission * this_ptr, char * param_2, int param_3)
    MOV EBX,EAX                         ; 00538858
    ADD ESP,0xc                         ; 0053885a
    TEST EAX,EAX                        ; 0053885d
    JL 0x005384ec                       ; 0053885f
        ;   XREF to: 005384ec (CONDITIONAL_JUMP)  ; LAB_005384ec
    PUSH 0x63c1a4                       ; 00538865 | = "Preparing actors."
    MOV ECX,dword ptr [0x00678a60]      ; 0053886a | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH ECX                            ; 00538870 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 00538871
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
    ADD ESP,0x8                         ; 00538876
    PUSH EBP                            ; 00538879
    CALL core_mission.cpp_CDemonMission_prepareAllActors_FUN_00523cf0 ; 0053887a
        ;   XREF to: 00523cf0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_prepareAllActors_FUN_00523cf0(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 0053887f
    PUSH 0x63c1b6                       ; 00538882 | = "Loading set."
    MOV EDI,dword ptr [0x00678a60]      ; 00538887 | g_CEditorToolsPtr
    PUSH EDI                            ; 0053888d | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 0053888e
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
    ADD ESP,0x8                         ; 00538893
    PUSH EBX                            ; 00538896
    PUSH EBP                            ; 00538897
    CALL core_mission.cpp_CDemonMission_loadSet_FUN_00523fb0 ; 00538898
        ;   XREF to: 00523fb0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_loadSet_FUN_00523fb0(CDemonMission * this_ptr, int set_index)
    ADD ESP,0x8                         ; 0053889d
    PUSH EBP                            ; 005388a0
    CALL core_msnedit.cpp_CDemonMission_FUN_0053e220 ; 005388a1
        ;   XREF to: 0053e220 (UNCONDITIONAL_CALL)  ; void core_msnedit.cpp_CDemonMission_FUN_0053e220(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 005388a6
    JMP 0x005384ec                      ; 005388a9
        ;   XREF to: 005384ec (UNCONDITIONAL_JUMP)  ; LAB_005384ec
    MOV EAX,ESP                         ; 005388ae
        ;   Label: LAB_005388ae
    PUSH EAX                            ; 005388b0
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 005388b1
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 005388b6
    PUSH 0x0                            ; 005388b9
    PUSH 0x0                            ; 005388bb
    LEA EAX,[ESP + 0x8]                 ; 005388bd
    PUSH EAX                            ; 005388c1
    CALL core_msnedit.cpp_FUN_00537330  ; 005388c2
        ;   XREF to: 00537330 (UNCONDITIONAL_CALL)  ; void core_msnedit.cpp_FUN_00537330(CStrList * param_1, int param_2, int param_3)
    ADD ESP,0xc                         ; 005388c7
    PUSH 0x1                            ; 005388ca
    LEA EAX,[ESP + 0x4]                 ; 005388cc
    PUSH EAX                            ; 005388d0
    CALL shape_edittool.cpp_CPickList_setSelectedResult_FUN_004a3e10 ; 005388d1
        ;   XREF to: 004a3e10 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_setSelectedResult_FUN_004a3e10(CPickList * this_ptr, int result_value)
    ADD ESP,0x8                         ; 005388d6
    PUSH 0x0                            ; 005388d9
    LEA EAX,[ESP + 0x4]                 ; 005388db
    PUSH EAX                            ; 005388df
    CALL shape_edittool.cpp_CPickList_setCancelButtonText_FUN_004a3d90 ; 005388e0
        ;   XREF to: 004a3d90 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_setCancelButtonText_FUN_004a3d90(CPickList * this_ptr, char * text)
    ADD ESP,0x8                         ; 005388e5
    PUSH 0x0                            ; 005388e8
    PUSH -0x1                           ; 005388ea
    PUSH 0x63c1c3                       ; 005388ec | = "Actor class heirarchy."
    LEA EAX,[ESP + 0xc]                 ; 005388f1
    PUSH EAX                            ; 005388f5
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 005388f6
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
    ADD ESP,0x10                        ; 005388fb
    PUSH 0x0                            ; 005388fe
    LEA EAX,[ESP + 0x4]                 ; 00538900
    PUSH EAX                            ; 00538904
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00538905
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    JMP 0x005384e9                      ; 0053890a
        ;   XREF to: 005384e9 (UNCONDITIONAL_JUMP)  ; LAB_005384e9
    PUSH EBP                            ; 0053890f
        ;   Label: LAB_0053890f
    CALL core_msnedit.cpp_CDemonMission_FUN_0053ec80 ; 00538910
        ;   XREF to: 0053ec80 (UNCONDITIONAL_CALL)  ; void core_msnedit.cpp_CDemonMission_FUN_0053ec80(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 00538915
    JMP 0x005384ec                      ; 00538918
        ;   XREF to: 005384ec (UNCONDITIONAL_JUMP)  ; LAB_005384ec
    PUSH 0x63c1da                       ; 0053891d | = "Update ALL mission files to latest ve..."
        ;   Label: LAB_0053891d
    MOV EAX,[0x00678a60]                ; 00538922 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EAX                            ; 00538927 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060 ; 00538928
        ;   XREF to: 0049f060 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060(CEditorTools * this_ptr, char * format_string)
    ADD ESP,0x8                         ; 0053892d
    TEST EAX,EAX                        ; 00538930
    JZ 0x005384ec                       ; 00538932
        ;   XREF to: 005384ec (CONDITIONAL_JUMP)  ; LAB_005384ec
    LEA EAX,[ESP + 0x3a8]               ; 00538938
    PUSH EAX                            ; 0053893f
    CALL engine_dosio.c_CFileFinder_ctor_FUN_00481c30 ; 00538940
        ;   XREF to: 00481c30 (UNCONDITIONAL_CALL)  ; CFileFinder * engine_dosio.c_CFileFinder_ctor_FUN_00481c30(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 00538945
    PUSH 0x63b744                       ; 00538948 | = "world\\*.msn"
    LEA EAX,[ESP + 0x3ac]               ; 0053894d
    PUSH EAX                            ; 00538954
    CALL engine_dosio.c_CFileFinder_openSearch_FUN_00481c70 ; 00538955
        ;   XREF to: 00481c70 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_CFileFinder_openSearch_FUN_00481c70(CFileFinder * this_ptr, char * search_pattern)
    ADD ESP,0x8                         ; 0053895a
    CMP byte ptr [ESP + 0x3a8],0x0      ; 0053895d
    JZ 0x00538a16                       ; 00538965
        ;   XREF to: 00538a16 (CONDITIONAL_JUMP)  ; LAB_00538a16
    PUSH 0x0                            ; 0053896b
        ;   Label: LAB_0053896b
    LEA EAX,[ESP + 0x3ac]               ; 0053896d
    PUSH EAX                            ; 00538974
    PUSH 0x63b750                       ; 00538975 | = "world"
    MOV EBX,dword ptr [0x00680cdc]      ; 0053897a | g_CDemonPodInstance | g_CDemonPodPtr
    PUSH EBX                            ; 00538980 | g_CDemonPodInstance
    CALL engine_pod.cpp_CPod_locateFile_FUN_005512f0 ; 00538981
        ;   XREF to: 005512f0 (UNCONDITIONAL_CALL)  ; CPodFile * engine_pod.cpp_CPod_locateFile_FUN_005512f0(CPod * this_ptr, char * base_path, char * filename, int * file_index_out)
    ADD ESP,0x10                        ; 00538986
    TEST EAX,EAX                        ; 00538989
    JNZ 0x00538a2a                      ; 0053898b
        ;   XREF to: 00538a2a (CONDITIONAL_JUMP)  ; LAB_00538a2a
    LEA EAX,[ESP + 0x3a8]               ; 00538991
    PUSH EAX                            ; 00538998
    PUSH 0x63b756                       ; 00538999 | = "Loading %s..."
    MOV EAX,[0x00678a60]                ; 0053899e | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EAX                            ; 005389a3 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 005389a4
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
    ADD ESP,0xc                         ; 005389a9
    PUSH 0x0                            ; 005389ac
    LEA EAX,[ESP + 0x3ac]               ; 005389ae
    PUSH EAX                            ; 005389b5
    MOV EDX,dword ptr [0x0067d550]      ; 005389b6 | g_CDemonMissionInstance | g_CDemonMissionPtr
    PUSH EDX                            ; 005389bc | g_CDemonMissionInstance
    CALL core_mission.cpp_CDemonMission_load_FUN_00522d90 ; 005389bd
        ;   XREF to: 00522d90 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_load_FUN_00522d90(CDemonMission * this_ptr, char * mission_filename, int load_flags)
    ADD ESP,0xc                         ; 005389c2
    LEA EAX,[ESP + 0x3a8]               ; 005389c5
    PUSH EAX                            ; 005389cc
    PUSH 0x63b764                       ; 005389cd | = "Saving %s..."
    MOV ECX,dword ptr [0x00678a60]      ; 005389d2 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH ECX                            ; 005389d8 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 005389d9
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
    ADD ESP,0xc                         ; 005389de
    LEA EAX,[ESP + 0x3a8]               ; 005389e1
    PUSH EAX                            ; 005389e8
    MOV EBX,dword ptr [0x0067d550]      ; 005389e9 | g_CDemonMissionInstance | g_CDemonMissionPtr
    PUSH EBX                            ; 005389ef | g_CDemonMissionInstance
    CALL core_mission.cpp_CDemonMission_save_FUN_00522e30 ; 005389f0
        ;   XREF to: 00522e30 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_save_FUN_00522e30(CDemonMission * this_ptr, char * filename)
    ADD ESP,0x8                         ; 005389f5
    LEA EAX,[ESP + 0x3a8]               ; 005389f8
        ;   Label: LAB_005389f8
    PUSH EAX                            ; 005389ff
    CALL engine_dosio.c_CFileFinder_findNext_FUN_00481cf0 ; 00538a00
        ;   XREF to: 00481cf0 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_CFileFinder_findNext_FUN_00481cf0(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 00538a05
    CMP byte ptr [ESP + 0x3a8],0x0      ; 00538a08
    JNZ 0x0053896b                      ; 00538a10
        ;   XREF to: 0053896b (CONDITIONAL_JUMP)  ; LAB_0053896b
    PUSH 0x0                            ; 00538a16
        ;   Label: LAB_00538a16
    LEA EAX,[ESP + 0x3ac]               ; 00538a18
    PUSH EAX                            ; 00538a1f
    CALL engine_dosio.c_CFileFinder_dtor_FUN_00481c50 ; 00538a20
        ;   XREF to: 00481c50 (UNCONDITIONAL_CALL)  ; CFileFinder * engine_dosio.c_CFileFinder_dtor_FUN_00481c50(CFileFinder * this_ptr, uint flags)
    JMP 0x005384e9                      ; 00538a25
        ;   XREF to: 005384e9 (UNCONDITIONAL_JUMP)  ; LAB_005384e9
    LEA EAX,[ESP + 0x3a8]               ; 00538a2a
        ;   Label: LAB_00538a2a
    PUSH EAX                            ; 00538a31
    PUSH 0x63b771                       ; 00538a32 | = "Not converting local file %s - it is ..."
    MOV EDI,dword ptr [0x00678a60]      ; 00538a37 | g_CEditorToolsPtr
    PUSH EDI                            ; 00538a3d | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0 ; 00538a3e
        ;   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 00538a43
    JMP 0x005389f8                      ; 00538a46
        ;   XREF to: 005389f8 (UNCONDITIONAL_JUMP)  ; LAB_005389f8
    PUSH EBP                            ; 00538a48
        ;   Label: LAB_00538a48
    CALL core_msnedit.cpp_CDemonMission_FUN_0053d7b0 ; 00538a49
        ;   XREF to: 0053d7b0 (UNCONDITIONAL_CALL)  ; void core_msnedit.cpp_CDemonMission_FUN_0053d7b0(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 00538a4e
    JMP 0x005384ec                      ; 00538a51
        ;   XREF to: 005384ec (UNCONDITIONAL_JUMP)  ; LAB_005384ec
    LEA EAX,[ESP + 0x5c0]               ; 00538a56
        ;   Label: LAB_00538a56
    PUSH EAX                            ; 00538a5d
    MOV EBX,dword ptr [0x00678a60]      ; 00538a5e | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EBX                            ; 00538a64 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayMemoryDiagnostics_FUN_004a2590 ; 00538a65
        ;   XREF to: 004a2590 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayMemoryDiagnostics_FUN_004a2590(CEditorTools * this_ptr, char * output_buffer)
    ADD ESP,0x8                         ; 00538a6a
    LEA EAX,[ESP + 0x5c0]               ; 00538a6d
    PUSH EAX                            ; 00538a74
    MOV EDI,dword ptr [0x00678a60]      ; 00538a75 | g_CEditorToolsPtr
    PUSH EDI                            ; 00538a7b | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0 ; 00538a7c
        ;   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0(CEditorTools * this_ptr, char * format)
    JMP 0x005384e9                      ; 00538a81
        ;   XREF to: 005384e9 (UNCONDITIONAL_JUMP)  ; LAB_005384e9
    JBE 0x00538811                      ; 00538a86
        ;   XREF to: 00538811 (CONDITIONAL_JUMP)  ; LAB_00538811
        ;   Label: LAB_00538a86
    CMP EAX,0x48                        ; 00538a8c
    JNC 0x00538ab7                      ; 00538a8f
        ;   XREF to: 00538ab7 (CONDITIONAL_JUMP)  ; LAB_00538ab7
    CMP EAX,0x43                        ; 00538a91
    JC 0x0053881f                       ; 00538a94
        ;   XREF to: 0053881f (CONDITIONAL_JUMP)  ; LAB_0053881f
    JBE 0x0053882d                      ; 00538a9a
        ;   XREF to: 0053882d (CONDITIONAL_JUMP)  ; LAB_0053882d
    CMP EAX,0x44                        ; 00538aa0
    JBE 0x0053883b                      ; 00538aa3
        ;   XREF to: 0053883b (CONDITIONAL_JUMP)  ; LAB_0053883b
    CMP EAX,0x47                        ; 00538aa9
    JZ 0x00538849                       ; 00538aac
        ;   XREF to: 00538849 (CONDITIONAL_JUMP)  ; LAB_00538849
    JMP 0x005384ec                      ; 00538ab2
        ;   XREF to: 005384ec (UNCONDITIONAL_JUMP)  ; LAB_005384ec
    JBE 0x005388ae                      ; 00538ab7
        ;   XREF to: 005388ae (CONDITIONAL_JUMP)  ; LAB_005388ae
        ;   Label: LAB_00538ab7
    CMP EAX,0x55                        ; 00538abd
    JNC 0x00538ad0                      ; 00538ac0
        ;   XREF to: 00538ad0 (CONDITIONAL_JUMP)  ; LAB_00538ad0
    CMP EAX,0x53                        ; 00538ac2
    JZ 0x0053890f                       ; 00538ac5
        ;   XREF to: 0053890f (CONDITIONAL_JUMP)  ; LAB_0053890f
    JMP 0x005384ec                      ; 00538acb
        ;   XREF to: 005384ec (UNCONDITIONAL_JUMP)  ; LAB_005384ec
    JBE 0x0053891d                      ; 00538ad0
        ;   XREF to: 0053891d (CONDITIONAL_JUMP)  ; LAB_0053891d
        ;   Label: LAB_00538ad0
    CMP EAX,0x57                        ; 00538ad6
    JC 0x005384ec                       ; 00538ad9
        ;   XREF to: 005384ec (CONDITIONAL_JUMP)  ; LAB_005384ec
    JBE 0x00538a48                      ; 00538adf
        ;   XREF to: 00538a48 (CONDITIONAL_JUMP)  ; LAB_00538a48
    CMP EAX,0x5a                        ; 00538ae5
    JZ 0x00538a56                       ; 00538ae8
        ;   XREF to: 00538a56 (CONDITIONAL_JUMP)  ; LAB_00538a56
    JMP 0x005384ec                      ; 00538aee
        ;   XREF to: 005384ec (UNCONDITIONAL_JUMP)  ; LAB_005384ec
    JBE 0x00538615                      ; 00538af3
        ;   XREF to: 00538615 (CONDITIONAL_JUMP)  ; LAB_00538615
        ;   Label: LAB_00538af3
    CMP EAX,0x36                        ; 00538af9
    JC 0x0053865a                       ; 00538afc
        ;   XREF to: 0053865a (CONDITIONAL_JUMP)  ; LAB_0053865a
    JBE 0x005386ad                      ; 00538b02
        ;   XREF to: 005386ad (CONDITIONAL_JUMP)  ; LAB_005386ad
    CMP EAX,0x37                        ; 00538b08
    JBE 0x0053873c                      ; 00538b0b
        ;   XREF to: 0053873c (CONDITIONAL_JUMP)  ; LAB_0053873c
    CMP EAX,0x38                        ; 00538b11
    JZ 0x00538790                       ; 00538b14
        ;   XREF to: 00538790 (CONDITIONAL_JUMP)  ; LAB_00538790
    JMP 0x005384ec                      ; 00538b1a
        ;   XREF to: 005384ec (UNCONDITIONAL_JUMP)  ; LAB_005384ec
    JBE 0x005385a3                      ; 00538b1f
        ;   XREF to: 005385a3 (CONDITIONAL_JUMP)  ; LAB_005385a3
        ;   Label: LAB_00538b1f
    PUSH 0x0                            ; 00538b25
    PUSH 0xf                            ; 00538b27
    MOV EDX,dword ptr [ESP + 0x7d0]     ; 00538b29
    PUSH EDX                            ; 00538b30
    MOV EAX,0x63c02e                    ; 00538b31 | = "Enter mission name"
    PUSH EAX                            ; 00538b36 | = "Enter mission name"
    MOV ECX,dword ptr [0x00678a60]      ; 00538b37 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH ECX                            ; 00538b3d | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0 ; 00538b3e
        ;   XREF to: 004a03d0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
    ADD ESP,0x14                        ; 00538b43
    TEST EAX,EAX                        ; 00538b46
    JZ 0x005384ec                       ; 00538b48
        ;   XREF to: 005384ec (CONDITIONAL_JUMP)  ; LAB_005384ec
    PUSH 0x0                            ; 00538b4e
    LEA EAX,[ESP + 0x4c0]               ; 00538b50
    PUSH EAX                            ; 00538b57
    MOV EAX,0x63c041                    ; 00538b58 | = "*.set"
    PUSH EAX                            ; 00538b5d | = "*.set"
    MOV EAX,0x63c047                    ; 00538b5e | = "models"
    PUSH EAX                            ; 00538b63 | = "models"
    MOV EAX,0x63c04e                    ; 00538b64 | = "Enter set name"
    PUSH EAX                            ; 00538b69 | = "Enter set name"
    MOV EBX,dword ptr [0x00678a60]      ; 00538b6a | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EBX                            ; 00538b70 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270 ; 00538b71
        ;   XREF to: 0049f270 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270(CEditorTools * this_ptr, char * search_pattern, char * directory, char * target_filename, ...)
    ADD ESP,0x18                        ; 00538b76
    TEST EAX,EAX                        ; 00538b79
    JZ 0x005384ec                       ; 00538b7b
        ;   XREF to: 005384ec (CONDITIONAL_JUMP)  ; LAB_005384ec
    LEA EAX,[ESP + 0x4bc]               ; 00538b81
    PUSH EAX                            ; 00538b88
    PUSH EBP                            ; 00538b89
    CALL core_mission.cpp_CDemonMission_createFromSingleSet_FUN_005243a0 ; 00538b8a
        ;   XREF to: 005243a0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_createFromSingleSet_FUN_005243a0(CDemonMission * this_ptr, char * set_name)
    JMP 0x005384e9                      ; 00538b8f
        ;   XREF to: 005384e9 (UNCONDITIONAL_JUMP)  ; LAB_005384e9

