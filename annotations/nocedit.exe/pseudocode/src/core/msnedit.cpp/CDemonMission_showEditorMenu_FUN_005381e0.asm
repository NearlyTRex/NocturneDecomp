; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0(CDemonMission * this_ptr)
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
;   core_mission.cpp_CDemonMission_FUN_005235b0
;   core_mission.cpp_CDemonMission_FUN_00523cf0
;   core_mission.cpp_CDemonMission_FUN_00523fb0
;   core_mission.cpp_CDemonMission_FUN_005243a0
;   core_mission.cpp_CDemonMission_load_FUN_00522d90
;   core_mission.cpp_CDemonMission_save_FUN_00522e30
;   core_mission.cpp_FUN_005248e0
;   core_msnedit.cpp_CheckWorldMountedAndSave_FUN_0053d190
;   core_msnedit.cpp_DisplayTextNoSetsDefinedAndAllowCancel_FUN_00538f90
;   core_msnedit.cpp_FUN_00537330
;   core_msnedit.cpp_FUN_005379e0
;   core_msnedit.cpp_FUN_00538df0
;   core_msnedit.cpp_FUN_0053d3b0
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
    PUSH 0x63bd80                       ; 005381f1 | = "Sec..." | s_Sec_0063bd80 = Sec...
    MOV EDX,dword ptr [0x00678a60]      ; 005381f6 | CEditorTools g_CEditorToolsPtr | CEditorTools * g_CEditorToolsPtr
    PUSH EDX                            ; 005381fc | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 005381fd | void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00538202
    PUSH EBP                            ; 00538205
    CALL core_mission.cpp_CDemonMission_checkMemory2_FUN_00522d30 ; 00538206 | void core_mission.cpp_CDemonMission_checkMemory2_FUN_00522d30(CDemonMission * this_ptr)
        ;   XREF to: 00522d30 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0053820b
    PUSH EBP                            ; 0053820e
    CALL core_mission.cpp_FUN_005248e0  ; 0053820f | void core_mission.cpp_FUN_005248e0()
        ;   XREF to: 005248e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00538214
    PUSH 0x680800                       ; 00538217 | = "$$UNDO$$.TMP" | s_UNDO_TMP_00680800 = $$UNDO$$.TMP
    CALL crt_io.c_deleteFile_FUN_005ff9d0 ; 0053821c | int crt_io.c_deleteFile_FUN_005ff9d0(char * filename)
        ;   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00538221
    CALL core_inivar.cpp_readIniData_FUN_004fbd90 ; 00538224 | void core_inivar.cpp_readIniData_FUN_004fbd90()
        ;   XREF to: 004fbd90 (UNCONDITIONAL_CALL)
    LEA EAX,[EBP + 0x44]                ; 00538229
    XOR ECX,ECX                         ; 0053822c
    MOV dword ptr [ESP + 0x7c8],EAX     ; 0053822e
    LEA EAX,[EBP + 0x148]               ; 00538235
    MOV dword ptr [0x00822040],ECX      ; 0053823b | int g_IncludeCommentsWhenWriting
    MOV dword ptr [ESP + 0x7c4],EAX     ; 00538241
    MOV dword ptr [ESP + 0x7c0],EAX     ; 00538248
    MOV dword ptr [EBP + 0x4],0x1       ; 0053824f
        ;   Label: LAB_0053824f
    MOV dword ptr [EBP + 0x3c],0x0      ; 00538256
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 0053825d | void wincore_windll.cpp_clearScreen_FUN_005b3e70()
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
    PUSH 0x0                            ; 00538262
    PUSH 0x0                            ; 00538264
    PUSH 0x63bd87                       ; 00538266 | = "Demented(R) Mission editor" | s_Demented_R_Mission_edito_0063bd87 = Demented(R) Mission editor
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0053826b | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    MOV AH,byte ptr [EBP + 0x44]        ; 00538270
    ADD ESP,0xc                         ; 00538273
    TEST AH,AH                          ; 00538276
    JNZ 0x00538568                      ; 00538278 | LAB_00538568
        ;   XREF to: 00538568 (CONDITIONAL_JUMP)
    MOV ESI,0x63bdba                    ; 0053827e | = "No misison loaded" | s_No_misison_loaded_0063bdba = No misison loaded
    LEA EDI,[ESP + 0x5c0]               ; 00538283
    PUSH EDI                            ; 0053828a
    MOV AL,byte ptr [ESI]               ; 0053828b | = "No misison loaded" | s_No_misison_loaded_0063bdba = No misison loaded
        ;   Label: LAB_0053828b
    MOV byte ptr [EDI],AL               ; 0053828d
    CMP AL,0x0                          ; 0053828f
    JZ 0x005382a3                       ; 00538291 | LAB_005382a3
        ;   XREF to: 005382a3 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 00538293 | s_o_misison_loaded_0063bdbb
    ADD ESI,0x2                         ; 00538296
    MOV byte ptr [EDI + 0x1],AL         ; 00538299
    ADD EDI,0x2                         ; 0053829c
    CMP AL,0x0                          ; 0053829f
    JNZ 0x0053828b                      ; 005382a1 | LAB_0053828b
        ;   XREF to: 0053828b (CONDITIONAL_JUMP)
    POP EDI                             ; 005382a3
        ;   Label: LAB_005382a3
    PUSH 0x16                           ; 005382a4
        ;   Label: LAB_005382a4
    PUSH 0x0                            ; 005382a6
    LEA EAX,[ESP + 0x5c8]               ; 005382a8
    PUSH EAX                            ; 005382af
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005382b0 | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005382b5
    PUSH 0x2c                           ; 005382b8
    PUSH 0x0                            ; 005382ba
    PUSH 0x63bdcc                       ; 005382bc | = "1. Load mission" | s_s_1_Load_mission_0063bdcc = 1. Load mission
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005382c1 | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005382c6
    PUSH 0x37                           ; 005382c9
    PUSH 0x0                            ; 005382cb
    PUSH 0x63bddc                       ; 005382cd | = "2. Save mission" | s_s_2_Save_mission_0063bddc = 2. Save mission
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005382d2 | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005382d7
    PUSH 0x42                           ; 005382da
    PUSH 0x0                            ; 005382dc
    PUSH 0x63bdec                       ; 005382de | = "3. Create mission from single set" | s_s_3_Create_mission_from__0063bdec = 3. Create mission from single set
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005382e3 | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005382e8
    PUSH 0x4d                           ; 005382eb
    PUSH 0x0                            ; 005382ed
    PUSH 0x63be0e                       ; 005382ef | = "4. Add set" | s_s_4_Add_set_0063be0e = 4. Add set
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005382f4 | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005382f9
    PUSH 0x58                           ; 005382fc
    PUSH 0x0                            ; 005382fe
    PUSH 0x63be19                       ; 00538300 | = "5. Remove set" | s_s_5_Remove_set_0063be19 = 5. Remove set
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00538305 | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0053830a
    PUSH 0x63                           ; 0053830d
    PUSH 0x0                            ; 0053830f
    PUSH 0x63be27                       ; 00538311 | = "6. Edit actors in a set" | s_s_6_Edit_actors_in_a_set_0063be27 = 6. Edit actors in a set
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00538316 | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0053831b
    PUSH 0x6e                           ; 0053831e
    PUSH 0x0                            ; 00538320
    PUSH 0x63be3f                       ; 00538322 | = "7. Precompute lights for rooms with m..." | s_s_7_Precompute_lights_fo_0063be3f = 7. Precompute lights for rooms with mirrors
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00538327 | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0053832c
    PUSH 0x79                           ; 0053832f
    PUSH 0x0                            ; 00538331
    PUSH 0x63be6b                       ; 00538333 | = "8. Save mission with a different name" | s_s_8_Save_mission_with_a__0063be6b = 8. Save mission with a different name
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00538338 | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0053833d
    PUSH 0x8f                           ; 00538340
    PUSH 0x0                            ; 00538345
    PUSH 0x63be91                       ; 00538347 | = "A. Play mission." | s_A_Play_mission_0063be91 = A. Play mission.
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0053834c | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00538351
    PUSH 0x9a                           ; 00538354
    PUSH 0x0                            ; 00538359
    PUSH 0x63bea2                       ; 0053835b | = "B. Enemy randomizer" | s_B_Enemy_randomizer_0063bea2 = B. Enemy randomizer
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00538360 | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00538365
    PUSH 0xa5                           ; 00538368
    PUSH 0x0                            ; 0053836d
    PUSH 0x63beb6                       ; 0053836f | = "C. Import actors from another mission" | s_C_Import_actors_from_ano_0063beb6 = C. Import actors from another mission
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00538374 | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00538379
    PUSH 0xb0                           ; 0053837c
    PUSH 0x0                            ; 00538381
    PUSH 0x63bedc                       ; 00538383 | = "D. Difficulty statistics" | s_D_Difficulty_statistics_0063bedc = D. Difficulty statistics
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00538388 | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0053838d
    PUSH 0xbb                           ; 00538390
    PUSH 0x0                            ; 00538395
    PUSH 0x63bef5                       ; 00538397 | = "G. Gore editor" | s_G_Gore_editor_0063bef5 = G. Gore editor
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0053839c | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005383a1
    PUSH 0xc6                           ; 005383a4
    PUSH 0x0                            ; 005383a9
    PUSH 0x63bf04                       ; 005383ab | = "H. Display actor class heirarchy" | s_H_Display_actor_class_he_0063bf04 = H. Display actor class heirarchy
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005383b0 | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005383b5
    PUSH 0xd1                           ; 005383b8
    PUSH 0x0                            ; 005383bd
    PUSH 0x63bf25                       ; 005383bf | = "U. Update all mission files to latest..." | s_U_Update_all_mission_fil_0063bf25 = U. Update all mission files to latest file and actor versions
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005383c4 | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005383c9
    PUSH 0xdc                           ; 005383cc
    PUSH 0x0                            ; 005383d1
    PUSH 0x63bf63                       ; 005383d3 | = "S. Show sound files needed" | s_S_Show_sound_files_neede_0063bf63 = S. Show sound files needed
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005383d8 | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005383dd
    PUSH 0xe7                           ; 005383e0
    PUSH 0x0                            ; 005383e5
    PUSH 0x63bf7e                       ; 005383e7 | = "W. Rebuild waypoint connectivity" | s_W_Rebuild_waypoint_conne_0063bf7e = W. Rebuild waypoint connectivity
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005383ec | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005383f1
    PUSH 0xf2                           ; 005383f4
    PUSH 0x0                            ; 005383f9
    PUSH 0x63bf9f                       ; 005383fb | = "Z. Display memory usage info" | s_Z_Display_memory_usage_i_0063bf9f = Z. Display memory usage info
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00538400 | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    MOV ESI,dword ptr [EBP + 0x144]     ; 00538405
    ADD ESP,0xc                         ; 0053840b
    TEST ESI,ESI                        ; 0053840e
    JLE 0x0053858a                      ; 00538410 | LAB_0053858a
        ;   XREF to: 0053858a (CONDITIONAL_JUMP)
    PUSH 0xfd                           ; 00538416
    PUSH 0x0                            ; 0053841b
    PUSH 0x63bfbc                       ; 0053841d | = "Sets in mission:" | s_Sets_in_mission_0063bfbc = Sets in mission:
    MOV EBX,0x113                       ; 00538422
    XOR EDI,EDI                         ; 00538427
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00538429 | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EBP + 0x144]     ; 0053842e
    ADD ESP,0xc                         ; 00538434
    TEST EAX,EAX                        ; 00538437
    JLE 0x00538462                      ; 00538439 | LAB_00538462
        ;   XREF to: 00538462 (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [ESP + 0x7c0]     ; 0053843b
    PUSH EBX                            ; 00538442
        ;   Label: LAB_00538442
    PUSH 0x0                            ; 00538443
    PUSH ESI                            ; 00538445
    INC EDI                             ; 00538446
    ADD EBX,0xb                         ; 00538447
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0053844a | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0053844f
    MOV EDX,dword ptr [EBP + 0x144]     ; 00538452
    ADD ESI,0x100                       ; 00538458
    CMP EDI,EDX                         ; 0053845e
    JL 0x00538442                       ; 00538460 | LAB_00538442
        ;   XREF to: 00538442 (CONDITIONAL_JUMP)
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 00538462 | void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
        ;   Label: LAB_00538462
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 00538467 | void engine_2d.c_clearInputAndWait_FUN_00403260()
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)
    MOV ECX,dword ptr [0x0067cf44]      ; 0053846c | void * g_CKeysPtr | CKeys * g_CKeysPtr
    PUSH ECX                            ; 00538472 | void * g_CKeysPtr
    CALL engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_00502470 ; 00538473 | int engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_00502470(CKeys * this)
        ;   XREF to: 00502470 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00538478
    MOV ESI,EAX                         ; 0053847b
    MOV EBX,EAX                         ; 0053847d
    CMP EAX,0x41                        ; 0053847f
    JNC 0x00538a86                      ; 00538482 | LAB_00538a86
        ;   XREF to: 00538a86 (CONDITIONAL_JUMP)
    CMP EAX,0x34                        ; 00538488
    JNC 0x00538af3                      ; 0053848b | LAB_00538af3
        ;   XREF to: 00538af3 (CONDITIONAL_JUMP)
    CMP EAX,0x32                        ; 00538491
    JNC 0x00538b1f                      ; 00538494 | LAB_00538b1f
        ;   XREF to: 00538b1f (CONDITIONAL_JUMP)
    CMP EAX,0x31                        ; 0053849a
    JNZ 0x005384ec                      ; 0053849d | LAB_005384ec
        ;   XREF to: 005384ec (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 0053849f
    LEA EAX,[ESP + 0x4c0]               ; 005384a1
    PUSH EAX                            ; 005384a8
    MOV EAX,0x63bfe8                    ; 005384a9 | = "*.msn" | s_msn_0063bfe8 = *.msn
    PUSH EAX                            ; 005384ae | = "*.msn" | s_msn_0063bfe8 = *.msn
    MOV EAX,0x63bfee                    ; 005384af | = "world" | s_world_0063bfee = world
    PUSH EAX                            ; 005384b4 | = "world" | s_world_0063bfee = world
    MOV EAX,0x63bff4                    ; 005384b5 | = "Load mission" | s_Load_mission_0063bff4 = Load mission
    PUSH EAX                            ; 005384ba | = "Load mission" | s_Load_mission_0063bff4 = Load mission
    MOV ECX,dword ptr [0x00678a60]      ; 005384bb | CEditorTools g_CEditorToolsPtr | CEditorTools * g_CEditorToolsPtr
    PUSH ECX                            ; 005384c1 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270 ; 005384c2 | int shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270(CEditorTools * this_ptr, char * search_pattern, char * directory, char * target_filename, ...)
        ;   XREF to: 0049f270 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 005384c7
    TEST EAX,EAX                        ; 005384ca
    JZ 0x005384ec                       ; 005384cc | LAB_005384ec
        ;   XREF to: 005384ec (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 005384ce
    LEA EAX,[ESP + 0x4c0]               ; 005384d0
    PUSH EAX                            ; 005384d7
    PUSH EBP                            ; 005384d8
    CALL core_mission.cpp_CDemonMission_load_FUN_00522d90 ; 005384d9 | void core_mission.cpp_CDemonMission_load_FUN_00522d90(CDemonMission * this_ptr, char * mission_filename, int load_flags)
        ;   XREF to: 00522d90 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005384de
    PUSH 0x1                            ; 005384e1
    PUSH EBP                            ; 005384e3
    CALL core_mission.cpp_CDemonMission_FUN_005235b0 ; 005384e4 | void core_mission.cpp_CDemonMission_FUN_005235b0(CDemonMission * this_ptr)
        ;   XREF to: 005235b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005384e9
        ;   Label: LAB_005384e9
    CMP ESI,0x1b                        ; 005384ec
        ;   Label: LAB_005384ec
    JNZ 0x0053824f                      ; 005384ef | LAB_0053824f
        ;   XREF to: 0053824f (CONDITIONAL_JUMP)
    PUSH 0x63c206                       ; 005384f5 | = "Cleaning up..." | s_Cleaning_up_0063c206 = Cleaning up...
    MOV ESI,dword ptr [0x00678a60]      ; 005384fa | CEditorTools * g_CEditorToolsPtr
    PUSH ESI                            ; 00538500 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 00538501 | void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00538506
    PUSH 0x680800                       ; 00538509 | = "$$UNDO$$.TMP" | s_UNDO_TMP_00680800 = $$UNDO$$.TMP
    CALL crt_io.c_deleteFile_FUN_005ff9d0 ; 0053850e | int crt_io.c_deleteFile_FUN_005ff9d0(char * filename)
        ;   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00538513
    PUSH 0x63c215                       ; 00538516 | = "Deleting actors..." | s_Deleting_actors_0063c215 = Deleting actors...
    MOV EDI,dword ptr [0x00678a60]      ; 0053851b | CEditorTools * g_CEditorToolsPtr
    MOV dword ptr [EBP + 0x4],0x0       ; 00538521
    PUSH EDI                            ; 00538528 | CEditorTools g_CEditorToolsPtr
    MOV dword ptr [EBP + 0x3c],0x0      ; 00538529
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 00538530 | void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00538535
    PUSH EBP                            ; 00538538
    CALL core_mission.cpp_CDemonMission_checkMemory2_FUN_00522d30 ; 00538539 | void core_mission.cpp_CDemonMission_checkMemory2_FUN_00522d30(CDemonMission * this_ptr)
        ;   XREF to: 00522d30 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0053853e
    PUSH 0x63c228                       ; 00538541 | = "Freeing models..." | s_Freeing_models_0063c228 = Freeing models...
    MOV EAX,[0x00678a60]                ; 00538546 | CEditorTools g_CEditorToolsPtr | CEditorTools * g_CEditorToolsPtr
    PUSH EAX                            ; 0053854b | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 0053854c | void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00538551
    PUSH EBP                            ; 00538554
    CALL core_mission.cpp_FUN_005248e0  ; 00538555 | void core_mission.cpp_FUN_005248e0()
        ;   XREF to: 005248e0 (UNCONDITIONAL_CALL)
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
    PUSH 0x63bda2                       ; 00538570 | = "Current mission: %s.msn" | s_Current_mission_s_msn_0063bda2 = Current mission: %s.msn
    LEA EAX,[ESP + 0x5c8]               ; 00538575
    PUSH EAX                            ; 0053857c
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0053857d | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00538582
    JMP 0x005382a4                      ; 00538585 | LAB_005382a4
        ;   XREF to: 005382a4 (UNCONDITIONAL_JUMP)
    PUSH 0xfd                           ; 0053858a
        ;   Label: LAB_0053858a
    PUSH 0x0                            ; 0053858f
    PUSH 0x63bfcd                       ; 00538591 | = "No sets defined in mission" | s_No_sets_defined_in_missi_0063bfcd = No sets defined in mission
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00538596 | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0053859b
    JMP 0x00538462                      ; 0053859e | LAB_00538462
        ;   XREF to: 00538462 (UNCONDITIONAL_JUMP)
    CMP byte ptr [EBP + 0x44],0x0       ; 005385a3
        ;   Label: LAB_005385a3
    JNZ 0x005385c0                      ; 005385a7 | LAB_005385c0
        ;   XREF to: 005385c0 (CONDITIONAL_JUMP)
    MOV EAX,0x63c001                    ; 005385a9 | = "No mission loaded." | s_No_mission_loaded_0063c001 = No mission loaded.
    PUSH EAX                            ; 005385ae | = "No mission loaded." | s_No_mission_loaded_0063c001 = No mission loaded.
    MOV EDX,dword ptr [0x00678a60]      ; 005385af | CEditorTools g_CEditorToolsPtr | CEditorTools * g_CEditorToolsPtr
    PUSH EDX                            ; 005385b5 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 005385b6 | void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)
    JMP 0x005384e9                      ; 005385bb | LAB_005384e9
        ;   XREF to: 005384e9 (UNCONDITIONAL_JUMP)
    MOV EDI,dword ptr [ESP + 0x7c8]     ; 005385c0
        ;   Label: LAB_005385c0
    PUSH EDI                            ; 005385c7
    MOV EAX,0x63c014                    ; 005385c8 | = "%s.msn" | s_s_msn_0063c014 = %s.msn
    PUSH EAX                            ; 005385cd | = "%s.msn" | s_s_msn_0063c014 = %s.msn
    LEA EAX,[ESP + 0x4c4]               ; 005385ce
    PUSH EAX                            ; 005385d5
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005385d6 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005385db
    LEA EAX,[ESP + 0x4bc]               ; 005385de
    PUSH EAX                            ; 005385e5
    MOV EAX,0x63c01b                    ; 005385e6 | = "Save mission to %s" | s_Save_mission_to_s_0063c01b = Save mission to %s
    PUSH EAX                            ; 005385eb | = "Save mission to %s" | s_Save_mission_to_s_0063c01b = Save mission to %s
    MOV EAX,[0x00678a60]                ; 005385ec | CEditorTools g_CEditorToolsPtr | CEditorTools * g_CEditorToolsPtr
    PUSH EAX                            ; 005385f1 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060 ; 005385f2 | int shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060(CEditorTools * this_ptr, char * format_string)
        ;   XREF to: 0049f060 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005385f7
    TEST EAX,EAX                        ; 005385fa
    JZ 0x005384ec                       ; 005385fc | LAB_005384ec
        ;   XREF to: 005384ec (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x4bc]               ; 00538602
    PUSH EAX                            ; 00538609
    PUSH EBP                            ; 0053860a
    CALL core_msnedit.cpp_CheckWorldMountedAndSave_FUN_0053d190 ; 0053860b | undefined core_msnedit.cpp_CheckWorldMountedAndSave_FUN_0053d190()
        ;   XREF to: 0053d190 (UNCONDITIONAL_CALL)
    JMP 0x005384e9                      ; 00538610 | LAB_005384e9
        ;   XREF to: 005384e9 (UNCONDITIONAL_JUMP)
    PUSH 0x0                            ; 00538615
        ;   Label: LAB_00538615
    LEA EAX,[ESP + 0x4c0]               ; 00538617
    PUSH EAX                            ; 0053861e
    MOV EAX,0x63c05d                    ; 0053861f | = "*.set" | s_set_0063c05d = *.set
    PUSH EAX                            ; 00538624 | = "*.set" | s_set_0063c05d = *.set
    MOV EAX,0x63c063                    ; 00538625 | = "models" | s_models_0063c063 = models
    PUSH EAX                            ; 0053862a | = "models" | s_models_0063c063 = models
    MOV EAX,0x63c06a                    ; 0053862b | = "Enter set name to add" | s_Enter_set_name_to_add_0063c06a = Enter set name to add
    PUSH EAX                            ; 00538630 | = "Enter set name to add" | s_Enter_set_name_to_add_0063c06a = Enter set name to add
    MOV EAX,[0x00678a60]                ; 00538631 | CEditorTools g_CEditorToolsPtr | CEditorTools * g_CEditorToolsPtr
    PUSH EAX                            ; 00538636 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270 ; 00538637 | int shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270(CEditorTools * this_ptr, char * search_pattern, char * directory, char * target_filename, ...)
        ;   XREF to: 0049f270 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 0053863c
    TEST EAX,EAX                        ; 0053863f
    JZ 0x005384ec                       ; 00538641 | LAB_005384ec
        ;   XREF to: 005384ec (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x4bc]               ; 00538647
    PUSH EAX                            ; 0053864e
    PUSH EBP                            ; 0053864f
    CALL core_msnedit.cpp_NotGoingtoAddToList_CantAdd_FUN_00538d60 ; 00538650 | undefined core_msnedit.cpp_NotGoingtoAddToList_CantAdd_FUN_00538d60()
        ;   XREF to: 00538d60 (UNCONDITIONAL_CALL)
    JMP 0x005384e9                      ; 00538655 | LAB_005384e9
        ;   XREF to: 005384e9 (UNCONDITIONAL_JUMP)
    MOV EDX,dword ptr [EBP]             ; 0053865a
        ;   Label: LAB_0053865a
    PUSH EDX                            ; 0053865d
    MOV EAX,0x63c080                    ; 0053865e | = "Select set to delete." | s_Select_set_to_delete_0063c080 = Select set to delete.
    PUSH EAX                            ; 00538663 | = "Select set to delete." | s_Select_set_to_delete_0063c080 = Select set to delete.
    PUSH EBP                            ; 00538664
    CALL core_msnedit.cpp_DisplayTextNoSetsDefinedAndAllowCancel_FUN_00538f90 ; 00538665 | undefined core_msnedit.cpp_DisplayTextNoSetsDefinedAndAllowCancel_FUN_00538f90()
        ;   XREF to: 00538f90 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0053866a
    MOV EBX,EAX                         ; 0053866d
    TEST EAX,EAX                        ; 0053866f
    JL 0x005384ec                       ; 00538671 | LAB_005384ec
        ;   XREF to: 005384ec (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [ESP + 0x7c4]     ; 00538677
    SHL EAX,0x8                         ; 0053867e
    ADD EAX,ECX                         ; 00538681
    PUSH EAX                            ; 00538683
    MOV EAX,0x63c096                    ; 00538684 | = "This is going to remove set %s from t..." | s_This_is_going_to_remove__0063c096 = This is going to remove set %s from the mission and delete all the actors in the set.
    PUSH EAX                            ; 00538689 | = "This is going to remove set %s from t..." | s_This_is_going_to_remove__0063c096 = This is going to remove set %s from the mission and delete all the actors in the set.
    MOV EDI,dword ptr [0x00678a60]      ; 0053868a | CEditorTools * g_CEditorToolsPtr
    PUSH EDI                            ; 00538690 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060 ; 00538691 | int shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060(CEditorTools * this_ptr, char * format_string)
        ;   XREF to: 0049f060 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00538696
    TEST EAX,EAX                        ; 00538699
    JZ 0x005384ec                       ; 0053869b | LAB_005384ec
        ;   XREF to: 005384ec (CONDITIONAL_JUMP)
    PUSH EBX                            ; 005386a1
    PUSH EBP                            ; 005386a2
    CALL core_msnedit.cpp_FUN_00538df0  ; 005386a3 | undefined core_msnedit.cpp_FUN_00538df0()
        ;   XREF to: 00538df0 (UNCONDITIONAL_CALL)
    JMP 0x005384e9                      ; 005386a8 | LAB_005384e9
        ;   XREF to: 005384e9 (UNCONDITIONAL_JUMP)
    MOV EBX,dword ptr [EBP]             ; 005386ad
        ;   Label: LAB_005386ad
    PUSH EBX                            ; 005386b0
    MOV EAX,0x63c0ec                    ; 005386b1 | = "Edit actors in which set?" | s_Edit_actors_in_which_set_0063c0ec = Edit actors in which set?
    PUSH EAX                            ; 005386b6 | = "Edit actors in which set?" | s_Edit_actors_in_which_set_0063c0ec = Edit actors in which set?
    PUSH EBP                            ; 005386b7
    CALL core_msnedit.cpp_DisplayTextNoSetsDefinedAndAllowCancel_FUN_00538f90 ; 005386b8 | undefined core_msnedit.cpp_DisplayTextNoSetsDefinedAndAllowCancel_FUN_00538f90()
        ;   XREF to: 00538f90 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005386bd
    MOV EBX,EAX                         ; 005386c0
    TEST EAX,EAX                        ; 005386c2
    JL 0x005384ec                       ; 005386c4 | LAB_005384ec
        ;   XREF to: 005384ec (CONDITIONAL_JUMP)
    MOV EAX,0x63c106                    ; 005386ca | = "Preparing actors." | s_Preparing_actors_0063c106 = Preparing actors.
    PUSH EAX                            ; 005386cf | = "Preparing actors." | s_Preparing_actors_0063c106 = Preparing actors.
    MOV EDI,dword ptr [0x00678a60]      ; 005386d0 | CEditorTools * g_CEditorToolsPtr
    PUSH EDI                            ; 005386d6 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 005386d7 | void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005386dc
    PUSH EBP                            ; 005386df
    CALL core_mission.cpp_CDemonMission_FUN_00523cf0 ; 005386e0 | void core_mission.cpp_CDemonMission_FUN_00523cf0(CDemonMission * this_ptr)
        ;   XREF to: 00523cf0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005386e5
    MOV EAX,0x63c118                    ; 005386e8 | = "Loading set." | s_Loading_set_0063c118 = Loading set.
    PUSH EAX                            ; 005386ed | = "Loading set." | s_Loading_set_0063c118 = Loading set.
    MOV EAX,[0x00678a60]                ; 005386ee | CEditorTools g_CEditorToolsPtr | CEditorTools * g_CEditorToolsPtr
    PUSH EAX                            ; 005386f3 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 005386f4 | void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005386f9
    PUSH EBX                            ; 005386fc
    PUSH EBP                            ; 005386fd
    CALL core_mission.cpp_CDemonMission_FUN_00523fb0 ; 005386fe | void core_mission.cpp_CDemonMission_FUN_00523fb0(CDemonMission * this_ptr)
        ;   XREF to: 00523fb0 (UNCONDITIONAL_CALL)
    MOV EAX,0x1                         ; 00538703
    ADD ESP,0x8                         ; 00538708
    PUSH EAX                            ; 0053870b
        ;   Label: LAB_0053870b
    PUSH EBP                            ; 0053870c
    CALL core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 ; 0053870d | undefined core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0()
        ;   XREF to: 005390f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00538712
    CMP EAX,0x2                         ; 00538715
    JNZ 0x005384ec                      ; 00538718 | LAB_005384ec
        ;   XREF to: 005384ec (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x4bc]               ; 0053871e
    PUSH EAX                            ; 00538725
    PUSH EBP                            ; 00538726
    CALL core_msnedit.cpp_CheckWorldMountedAndSave_FUN_0053d190 ; 00538727 | undefined core_msnedit.cpp_CheckWorldMountedAndSave_FUN_0053d190()
        ;   XREF to: 0053d190 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0053872c
    PUSH EBP                            ; 0053872f
    CALL core_msnedit.cpp_WalkAroundOnSet_FUN_00538ba0 ; 00538730 | undefined core_msnedit.cpp_WalkAroundOnSet_FUN_00538ba0()
        ;   XREF to: 00538ba0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00538735
    XOR EAX,EAX                         ; 00538738
    JMP 0x0053870b                      ; 0053873a | LAB_0053870b
        ;   XREF to: 0053870b (UNCONDITIONAL_JUMP)
    MOV EAX,0x63c125                    ; 0053873c | = "Precompute lights?" | s_Precompute_lights_0063c125 = Precompute lights?
        ;   Label: LAB_0053873c
    PUSH EAX                            ; 00538741 | = "Precompute lights?" | s_Precompute_lights_0063c125 = Precompute lights?
    MOV EDX,dword ptr [0x00678a60]      ; 00538742 | CEditorTools g_CEditorToolsPtr | CEditorTools * g_CEditorToolsPtr
    PUSH EDX                            ; 00538748 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060 ; 00538749 | int shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060(CEditorTools * this_ptr, char * format_string)
        ;   XREF to: 0049f060 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0053874e
    TEST EAX,EAX                        ; 00538751
    JZ 0x005384ec                       ; 00538753 | LAB_005384ec
        ;   XREF to: 005384ec (CONDITIONAL_JUMP)
    PUSH -0x1                           ; 00538759
    MOV ECX,dword ptr [0x006810c8]      ; 0053875b | CDemonSet g_CDemonSetInstance | CDemonSet * g_CDemonSetPtr
    PUSH ECX                            ; 00538761 | CDemonSet g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470 ; 00538762 | void core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470(CDemonSet * this_ptr)
        ;   XREF to: 0056a470 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00538767
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 0053876a | void wincore_windll.cpp_clearScreen_FUN_005b3e70()
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
    PUSH 0x0                            ; 0053876f
    PUSH 0x0                            ; 00538771
    MOV EAX,0x63c138                    ; 00538773 | = "You must now go into set editor and s..." | s_You_must_now_go_into_set_0063c138 = You must now go into set editor and save!
    PUSH EAX                            ; 00538778 | = "You must now go into set editor and s..." | s_You_must_now_go_into_set_0063c138 = You must now go into set editor and save!
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00538779 | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0053877e
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 00538781 | void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 00538786 | int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
    JMP 0x005384ec                      ; 0053878b | LAB_005384ec
        ;   XREF to: 005384ec (UNCONDITIONAL_JUMP)
    PUSH 0x0                            ; 00538790
        ;   Label: LAB_00538790
    LEA EAX,[ESP + 0x4c0]               ; 00538792
    PUSH EAX                            ; 00538799
    MOV EAX,0x63c162                    ; 0053879a | = "msn" | s_msn_0063c162 = msn
    PUSH EAX                            ; 0053879f | = "msn" | s_msn_0063c162 = msn
    MOV EAX,0x63c166                    ; 005387a0 | = "world" | s_world_0063c166 = world
    PUSH EAX                            ; 005387a5 | = "world" | s_world_0063c166 = world
    MOV EAX,0x63c16c                    ; 005387a6 | = "Save mission to new name" | s_Save_mission_to_new_name_0063c16c = Save mission to new name
    PUSH EAX                            ; 005387ab | = "Save mission to new name" | s_Save_mission_to_new_name_0063c16c = Save mission to new name
    MOV EAX,[0x00678a60]                ; 005387ac | CEditorTools g_CEditorToolsPtr | CEditorTools * g_CEditorToolsPtr
    PUSH EAX                            ; 005387b1 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70 ; 005387b2 | bool shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70(CEditorTools * this_ptr, char * prompt_text, char * filename_buffer, int buffer_size, ...)
        ;   XREF to: 0049fb70 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 005387b7
    TEST EAX,EAX                        ; 005387ba
    JZ 0x005384ec                       ; 005387bc | LAB_005384ec
        ;   XREF to: 005384ec (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 005387c2
    LEA EAX,[ESP + 0x6c4]               ; 005387c4
    PUSH EAX                            ; 005387cb
    PUSH 0x0                            ; 005387cc
    PUSH 0x0                            ; 005387ce
    LEA EAX,[ESP + 0x4cc]               ; 005387d0
    PUSH EAX                            ; 005387d7
    CALL crt_string.c_splitpath_FUN_005ff178 ; 005387d8 | void crt_string.c_splitpath_FUN_005ff178(char * path, char * drive, char * dir, char * fname, ...)
        ;   XREF to: 005ff178 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 005387dd
    LEA EAX,[ESP + 0x6c0]               ; 005387e0
    PUSH EAX                            ; 005387e7
    MOV EAX,0x63c185                    ; 005387e8 | = "%s.msn" | s_s_msn_0063c185 = %s.msn
    PUSH EAX                            ; 005387ed | = "%s.msn" | s_s_msn_0063c185 = %s.msn
    LEA EAX,[ESP + 0x4c4]               ; 005387ee
    PUSH EAX                            ; 005387f5
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005387f6 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005387fb
    LEA EAX,[ESP + 0x6c0]               ; 005387fe
    PUSH EAX                            ; 00538805
    PUSH EBP                            ; 00538806
    CALL core_msnedit.cpp_OpenAndCreateWorld_FUN_00537f60 ; 00538807 | undefined core_msnedit.cpp_OpenAndCreateWorld_FUN_00537f60()
        ;   XREF to: 00537f60 (UNCONDITIONAL_CALL)
    JMP 0x005384e9                      ; 0053880c | LAB_005384e9
        ;   XREF to: 005384e9 (UNCONDITIONAL_JUMP)
    PUSH EBP                            ; 00538811
        ;   Label: LAB_00538811
    CALL core_msnedit.cpp_WalkAroundOnSet_FUN_00538ba0 ; 00538812 | undefined core_msnedit.cpp_WalkAroundOnSet_FUN_00538ba0()
        ;   XREF to: 00538ba0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00538817
    JMP 0x005384ec                      ; 0053881a | LAB_005384ec
        ;   XREF to: 005384ec (UNCONDITIONAL_JUMP)
    PUSH EBP                            ; 0053881f
        ;   Label: LAB_0053881f
    CALL core_msnedit.cpp_FUN_005379e0  ; 00538820 | undefined core_msnedit.cpp_FUN_005379e0()
        ;   XREF to: 005379e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00538825
    JMP 0x005384ec                      ; 00538828 | LAB_005384ec
        ;   XREF to: 005384ec (UNCONDITIONAL_JUMP)
    PUSH EBP                            ; 0053882d
        ;   Label: LAB_0053882d
    CALL core_msnedit.cpp_UserInputTempMission_FUN_0053ccf0 ; 0053882e | undefined core_msnedit.cpp_UserInputTempMission_FUN_0053ccf0()
        ;   XREF to: 0053ccf0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00538833
    JMP 0x005384ec                      ; 00538836 | LAB_005384ec
        ;   XREF to: 005384ec (UNCONDITIONAL_JUMP)
    PUSH EBP                            ; 0053883b
        ;   Label: LAB_0053883b
    CALL core_msnedit.cpp_FUN_0053d3b0  ; 0053883c | undefined core_msnedit.cpp_FUN_0053d3b0()
        ;   XREF to: 0053d3b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00538841
    JMP 0x005384ec                      ; 00538844 | LAB_005384ec
        ;   XREF to: 005384ec (UNCONDITIONAL_JUMP)
    MOV EDX,dword ptr [EBP]             ; 00538849
        ;   Label: LAB_00538849
    PUSH EDX                            ; 0053884c
    PUSH 0x63c18c                       ; 0053884d | = "Edit gore in which set?" | s_Edit_gore_in_which_set_0063c18c = Edit gore in which set?
    PUSH EBP                            ; 00538852
    CALL core_msnedit.cpp_DisplayTextNoSetsDefinedAndAllowCancel_FUN_00538f90 ; 00538853 | undefined core_msnedit.cpp_DisplayTextNoSetsDefinedAndAllowCancel_FUN_00538f90()
        ;   XREF to: 00538f90 (UNCONDITIONAL_CALL)
    MOV EBX,EAX                         ; 00538858
    ADD ESP,0xc                         ; 0053885a
    TEST EAX,EAX                        ; 0053885d
    JL 0x005384ec                       ; 0053885f | LAB_005384ec
        ;   XREF to: 005384ec (CONDITIONAL_JUMP)
    PUSH 0x63c1a4                       ; 00538865 | = "Preparing actors." | s_Preparing_actors_0063c1a4 = Preparing actors.
    MOV ECX,dword ptr [0x00678a60]      ; 0053886a | CEditorTools g_CEditorToolsPtr | CEditorTools * g_CEditorToolsPtr
    PUSH ECX                            ; 00538870 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 00538871 | void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00538876
    PUSH EBP                            ; 00538879
    CALL core_mission.cpp_CDemonMission_FUN_00523cf0 ; 0053887a | void core_mission.cpp_CDemonMission_FUN_00523cf0(CDemonMission * this_ptr)
        ;   XREF to: 00523cf0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0053887f
    PUSH 0x63c1b6                       ; 00538882 | = "Loading set." | s_Loading_set_0063c1b6 = Loading set.
    MOV EDI,dword ptr [0x00678a60]      ; 00538887 | CEditorTools * g_CEditorToolsPtr
    PUSH EDI                            ; 0053888d | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 0053888e | void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00538893
    PUSH EBX                            ; 00538896
    PUSH EBP                            ; 00538897
    CALL core_mission.cpp_CDemonMission_FUN_00523fb0 ; 00538898 | void core_mission.cpp_CDemonMission_FUN_00523fb0(CDemonMission * this_ptr)
        ;   XREF to: 00523fb0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0053889d
    PUSH EBP                            ; 005388a0
    CALL core_msnedit.cpp_PrepareMissionAndEditGore_FUN_0053e220 ; 005388a1 | undefined core_msnedit.cpp_PrepareMissionAndEditGore_FUN_0053e220()
        ;   XREF to: 0053e220 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005388a6
    JMP 0x005384ec                      ; 005388a9 | LAB_005384ec
        ;   XREF to: 005384ec (UNCONDITIONAL_JUMP)
    MOV EAX,ESP                         ; 005388ae
        ;   Label: LAB_005388ae
    PUSH EAX                            ; 005388b0
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 005388b1 | CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005388b6
    PUSH 0x0                            ; 005388b9
    PUSH 0x0                            ; 005388bb
    LEA EAX,[ESP + 0x8]                 ; 005388bd
    PUSH EAX                            ; 005388c1
    CALL core_msnedit.cpp_FUN_00537330  ; 005388c2 | undefined core_msnedit.cpp_FUN_00537330()
        ;   XREF to: 00537330 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005388c7
    PUSH 0x1                            ; 005388ca
    LEA EAX,[ESP + 0x4]                 ; 005388cc
    PUSH EAX                            ; 005388d0
    CALL shape_edittool.cpp_CPickList_setSelectedResult_FUN_004a3e10 ; 005388d1 | void shape_edittool.cpp_CPickList_setSelectedResult_FUN_004a3e10(CPickList * this_ptr, int result_value)
        ;   XREF to: 004a3e10 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005388d6
    PUSH 0x0                            ; 005388d9
    LEA EAX,[ESP + 0x4]                 ; 005388db
    PUSH EAX                            ; 005388df
    CALL shape_edittool.cpp_CPickList_setCancelButtonText_FUN_004a3d90 ; 005388e0 | void shape_edittool.cpp_CPickList_setCancelButtonText_FUN_004a3d90(CPickList * this_ptr, char * text)
        ;   XREF to: 004a3d90 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005388e5
    PUSH 0x0                            ; 005388e8
    PUSH -0x1                           ; 005388ea
    PUSH 0x63c1c3                       ; 005388ec | = "Actor class heirarchy." | s_Actor_class_heirarchy_0063c1c3 = Actor class heirarchy.
    LEA EAX,[ESP + 0xc]                 ; 005388f1
    PUSH EAX                            ; 005388f5
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 005388f6 | int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 005388fb
    PUSH 0x0                            ; 005388fe
    LEA EAX,[ESP + 0x4]                 ; 00538900
    PUSH EAX                            ; 00538904
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00538905 | CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
    JMP 0x005384e9                      ; 0053890a | LAB_005384e9
        ;   XREF to: 005384e9 (UNCONDITIONAL_JUMP)
    PUSH EBP                            ; 0053890f
        ;   Label: LAB_0053890f
    CALL core_msnedit.cpp_FUN_0053ec80  ; 00538910 | undefined core_msnedit.cpp_FUN_0053ec80()
        ;   XREF to: 0053ec80 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00538915
    JMP 0x005384ec                      ; 00538918 | LAB_005384ec
        ;   XREF to: 005384ec (UNCONDITIONAL_JUMP)
    PUSH 0x63c1da                       ; 0053891d | = "Update ALL mission files to latest ve..." | s_Update_ALL_mission_files_0063c1da = Update ALL mission files to latest version?
        ;   Label: LAB_0053891d
    MOV EAX,[0x00678a60]                ; 00538922 | CEditorTools g_CEditorToolsPtr | CEditorTools * g_CEditorToolsPtr
    PUSH EAX                            ; 00538927 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060 ; 00538928 | int shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060(CEditorTools * this_ptr, char * format_string)
        ;   XREF to: 0049f060 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0053892d
    TEST EAX,EAX                        ; 00538930
    JZ 0x005384ec                       ; 00538932 | LAB_005384ec
        ;   XREF to: 005384ec (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x3a8]               ; 00538938
    PUSH EAX                            ; 0053893f
    CALL engine_dosio.c_CFileFinder_ctor_FUN_00481c30 ; 00538940 | CFileFinder * engine_dosio.c_CFileFinder_ctor_FUN_00481c30(CFileFinder * this_ptr)
        ;   XREF to: 00481c30 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00538945
    PUSH 0x63b744                       ; 00538948 | = "world\\*.msn" | s_world_msn_0063b744 = world\*.msn
    LEA EAX,[ESP + 0x3ac]               ; 0053894d
    PUSH EAX                            ; 00538954
    CALL engine_dosio.c_CFileFinder_openSearch_FUN_00481c70 ; 00538955 | int engine_dosio.c_CFileFinder_openSearch_FUN_00481c70(CFileFinder * this_ptr, char * search_pattern)
        ;   XREF to: 00481c70 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0053895a
    CMP byte ptr [ESP + 0x3a8],0x0      ; 0053895d
    JZ 0x00538a16                       ; 00538965 | LAB_00538a16
        ;   XREF to: 00538a16 (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 0053896b
        ;   Label: LAB_0053896b
    LEA EAX,[ESP + 0x3ac]               ; 0053896d
    PUSH EAX                            ; 00538974
    PUSH 0x63b750                       ; 00538975 | = "world" | s_world_0063b750 = world
    MOV EBX,dword ptr [0x00680cdc]      ; 0053897a | CDemonPod g_CDemonPodInstance | CDemonPod * g_CDemonPodPtr
    PUSH EBX                            ; 00538980 | CDemonPod g_CDemonPodInstance
    CALL engine_pod.cpp_CPod_locateFile_FUN_005512f0 ; 00538981 | CPodFile * engine_pod.cpp_CPod_locateFile_FUN_005512f0(CPod * this_ptr, char * base_path, char * filename, int * file_index_out)
        ;   XREF to: 005512f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00538986
    TEST EAX,EAX                        ; 00538989
    JNZ 0x00538a2a                      ; 0053898b | LAB_00538a2a
        ;   XREF to: 00538a2a (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x3a8]               ; 00538991
    PUSH EAX                            ; 00538998
    PUSH 0x63b756                       ; 00538999 | = "Loading %s..." | s_Loading_s_0063b756 = Loading %s...
    MOV EAX,[0x00678a60]                ; 0053899e | CEditorTools g_CEditorToolsPtr | CEditorTools * g_CEditorToolsPtr
    PUSH EAX                            ; 005389a3 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 005389a4 | void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005389a9
    PUSH 0x0                            ; 005389ac
    LEA EAX,[ESP + 0x3ac]               ; 005389ae
    PUSH EAX                            ; 005389b5
    MOV EDX,dword ptr [0x0067d550]      ; 005389b6 | CDemonMission g_CDemonMissionInstance | CDemonMission * g_CDemonMissionPtr
    PUSH EDX                            ; 005389bc | CDemonMission g_CDemonMissionInstance
    CALL core_mission.cpp_CDemonMission_load_FUN_00522d90 ; 005389bd | void core_mission.cpp_CDemonMission_load_FUN_00522d90(CDemonMission * this_ptr, char * mission_filename, int load_flags)
        ;   XREF to: 00522d90 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005389c2
    LEA EAX,[ESP + 0x3a8]               ; 005389c5
    PUSH EAX                            ; 005389cc
    PUSH 0x63b764                       ; 005389cd | = "Saving %s..." | s_Saving_s_0063b764 = Saving %s...
    MOV ECX,dword ptr [0x00678a60]      ; 005389d2 | CEditorTools g_CEditorToolsPtr | CEditorTools * g_CEditorToolsPtr
    PUSH ECX                            ; 005389d8 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 005389d9 | void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005389de
    LEA EAX,[ESP + 0x3a8]               ; 005389e1
    PUSH EAX                            ; 005389e8
    MOV EBX,dword ptr [0x0067d550]      ; 005389e9 | CDemonMission g_CDemonMissionInstance | CDemonMission * g_CDemonMissionPtr
    PUSH EBX                            ; 005389ef | CDemonMission g_CDemonMissionInstance
    CALL core_mission.cpp_CDemonMission_save_FUN_00522e30 ; 005389f0 | void core_mission.cpp_CDemonMission_save_FUN_00522e30(CDemonMission * this_ptr)
        ;   XREF to: 00522e30 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005389f5
    LEA EAX,[ESP + 0x3a8]               ; 005389f8
        ;   Label: LAB_005389f8
    PUSH EAX                            ; 005389ff
    CALL engine_dosio.c_CFileFinder_findNext_FUN_00481cf0 ; 00538a00 | int engine_dosio.c_CFileFinder_findNext_FUN_00481cf0(CFileFinder * this_ptr)
        ;   XREF to: 00481cf0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00538a05
    CMP byte ptr [ESP + 0x3a8],0x0      ; 00538a08
    JNZ 0x0053896b                      ; 00538a10 | LAB_0053896b
        ;   XREF to: 0053896b (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 00538a16
        ;   Label: LAB_00538a16
    LEA EAX,[ESP + 0x3ac]               ; 00538a18
    PUSH EAX                            ; 00538a1f
    CALL engine_dosio.c_CFileFinder_dtor_FUN_00481c50 ; 00538a20 | CFileFinder * engine_dosio.c_CFileFinder_dtor_FUN_00481c50(CFileFinder * this_ptr, uint d1)
        ;   XREF to: 00481c50 (UNCONDITIONAL_CALL)
    JMP 0x005384e9                      ; 00538a25 | LAB_005384e9
        ;   XREF to: 005384e9 (UNCONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x3a8]               ; 00538a2a
        ;   Label: LAB_00538a2a
    PUSH EAX                            ; 00538a31
    PUSH 0x63b771                       ; 00538a32 | = "Not converting local file %s - it is ..." | s_Not_converting_local_fil_0063b771 = Not converting local file %s - it is also in a pod
    MOV EDI,dword ptr [0x00678a60]      ; 00538a37 | CEditorTools * g_CEditorToolsPtr
    PUSH EDI                            ; 00538a3d | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0 ; 00538a3e | void shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0(CEditorTools * this_ptr, char * format)
        ;   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00538a43
    JMP 0x005389f8                      ; 00538a46 | LAB_005389f8
        ;   XREF to: 005389f8 (UNCONDITIONAL_JUMP)
    PUSH EBP                            ; 00538a48
        ;   Label: LAB_00538a48
    CALL core_msnedit.cpp_FUN_0053d7b0  ; 00538a49 | undefined core_msnedit.cpp_FUN_0053d7b0()
        ;   XREF to: 0053d7b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00538a4e
    JMP 0x005384ec                      ; 00538a51 | LAB_005384ec
        ;   XREF to: 005384ec (UNCONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x5c0]               ; 00538a56
        ;   Label: LAB_00538a56
    PUSH EAX                            ; 00538a5d
    MOV EBX,dword ptr [0x00678a60]      ; 00538a5e | CEditorTools g_CEditorToolsPtr | CEditorTools * g_CEditorToolsPtr
    PUSH EBX                            ; 00538a64 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_displayMemoryDiagnostics_FUN_004a2590 ; 00538a65 | void shape_edittool.cpp_CEditorTools_displayMemoryDiagnostics_FUN_004a2590(CEditorTools * this_ptr, char * output_buffer)
        ;   XREF to: 004a2590 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00538a6a
    LEA EAX,[ESP + 0x5c0]               ; 00538a6d
    PUSH EAX                            ; 00538a74
    MOV EDI,dword ptr [0x00678a60]      ; 00538a75 | CEditorTools * g_CEditorToolsPtr
    PUSH EDI                            ; 00538a7b | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0 ; 00538a7c | void shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0(CEditorTools * this_ptr, char * format)
        ;   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)
    JMP 0x005384e9                      ; 00538a81 | LAB_005384e9
        ;   XREF to: 005384e9 (UNCONDITIONAL_JUMP)
    JBE 0x00538811                      ; 00538a86 | LAB_00538811
        ;   Label: LAB_00538a86
        ;   XREF to: 00538811 (CONDITIONAL_JUMP)
    CMP EAX,0x48                        ; 00538a8c
    JNC 0x00538ab7                      ; 00538a8f | LAB_00538ab7
        ;   XREF to: 00538ab7 (CONDITIONAL_JUMP)
    CMP EAX,0x43                        ; 00538a91
    JC 0x0053881f                       ; 00538a94 | LAB_0053881f
        ;   XREF to: 0053881f (CONDITIONAL_JUMP)
    JBE 0x0053882d                      ; 00538a9a | LAB_0053882d
        ;   XREF to: 0053882d (CONDITIONAL_JUMP)
    CMP EAX,0x44                        ; 00538aa0
    JBE 0x0053883b                      ; 00538aa3 | LAB_0053883b
        ;   XREF to: 0053883b (CONDITIONAL_JUMP)
    CMP EAX,0x47                        ; 00538aa9
    JZ 0x00538849                       ; 00538aac | LAB_00538849
        ;   XREF to: 00538849 (CONDITIONAL_JUMP)
    JMP 0x005384ec                      ; 00538ab2 | LAB_005384ec
        ;   XREF to: 005384ec (UNCONDITIONAL_JUMP)
    JBE 0x005388ae                      ; 00538ab7 | LAB_005388ae
        ;   Label: LAB_00538ab7
        ;   XREF to: 005388ae (CONDITIONAL_JUMP)
    CMP EAX,0x55                        ; 00538abd
    JNC 0x00538ad0                      ; 00538ac0 | LAB_00538ad0
        ;   XREF to: 00538ad0 (CONDITIONAL_JUMP)
    CMP EAX,0x53                        ; 00538ac2
    JZ 0x0053890f                       ; 00538ac5 | LAB_0053890f
        ;   XREF to: 0053890f (CONDITIONAL_JUMP)
    JMP 0x005384ec                      ; 00538acb | LAB_005384ec
        ;   XREF to: 005384ec (UNCONDITIONAL_JUMP)
    JBE 0x0053891d                      ; 00538ad0 | LAB_0053891d
        ;   Label: LAB_00538ad0
        ;   XREF to: 0053891d (CONDITIONAL_JUMP)
    CMP EAX,0x57                        ; 00538ad6
    JC 0x005384ec                       ; 00538ad9 | LAB_005384ec
        ;   XREF to: 005384ec (CONDITIONAL_JUMP)
    JBE 0x00538a48                      ; 00538adf | LAB_00538a48
        ;   XREF to: 00538a48 (CONDITIONAL_JUMP)
    CMP EAX,0x5a                        ; 00538ae5
    JZ 0x00538a56                       ; 00538ae8 | LAB_00538a56
        ;   XREF to: 00538a56 (CONDITIONAL_JUMP)
    JMP 0x005384ec                      ; 00538aee | LAB_005384ec
        ;   XREF to: 005384ec (UNCONDITIONAL_JUMP)
    JBE 0x00538615                      ; 00538af3 | LAB_00538615
        ;   Label: LAB_00538af3
        ;   XREF to: 00538615 (CONDITIONAL_JUMP)
    CMP EAX,0x36                        ; 00538af9
    JC 0x0053865a                       ; 00538afc | LAB_0053865a
        ;   XREF to: 0053865a (CONDITIONAL_JUMP)
    JBE 0x005386ad                      ; 00538b02 | LAB_005386ad
        ;   XREF to: 005386ad (CONDITIONAL_JUMP)
    CMP EAX,0x37                        ; 00538b08
    JBE 0x0053873c                      ; 00538b0b | LAB_0053873c
        ;   XREF to: 0053873c (CONDITIONAL_JUMP)
    CMP EAX,0x38                        ; 00538b11
    JZ 0x00538790                       ; 00538b14 | LAB_00538790
        ;   XREF to: 00538790 (CONDITIONAL_JUMP)
    JMP 0x005384ec                      ; 00538b1a | LAB_005384ec
        ;   XREF to: 005384ec (UNCONDITIONAL_JUMP)
    JBE 0x005385a3                      ; 00538b1f | LAB_005385a3
        ;   Label: LAB_00538b1f
        ;   XREF to: 005385a3 (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 00538b25
    PUSH 0xf                            ; 00538b27
    MOV EDX,dword ptr [ESP + 0x7d0]     ; 00538b29
    PUSH EDX                            ; 00538b30
    MOV EAX,0x63c02e                    ; 00538b31 | = "Enter mission name" | s_Enter_mission_name_0063c02e = Enter mission name
    PUSH EAX                            ; 00538b36 | = "Enter mission name" | s_Enter_mission_name_0063c02e = Enter mission name
    MOV ECX,dword ptr [0x00678a60]      ; 00538b37 | CEditorTools g_CEditorToolsPtr | CEditorTools * g_CEditorToolsPtr
    PUSH ECX                            ; 00538b3d | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0 ; 00538b3e | int shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
        ;   XREF to: 004a03d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 00538b43
    TEST EAX,EAX                        ; 00538b46
    JZ 0x005384ec                       ; 00538b48 | LAB_005384ec
        ;   XREF to: 005384ec (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 00538b4e
    LEA EAX,[ESP + 0x4c0]               ; 00538b50
    PUSH EAX                            ; 00538b57
    MOV EAX,0x63c041                    ; 00538b58 | = "*.set" | s_set_0063c041 = *.set
    PUSH EAX                            ; 00538b5d | = "*.set" | s_set_0063c041 = *.set
    MOV EAX,0x63c047                    ; 00538b5e | = "models" | s_models_0063c047 = models
    PUSH EAX                            ; 00538b63 | = "models" | s_models_0063c047 = models
    MOV EAX,0x63c04e                    ; 00538b64 | = "Enter set name" | s_Enter_set_name_0063c04e = Enter set name
    PUSH EAX                            ; 00538b69 | = "Enter set name" | s_Enter_set_name_0063c04e = Enter set name
    MOV EBX,dword ptr [0x00678a60]      ; 00538b6a | CEditorTools g_CEditorToolsPtr | CEditorTools * g_CEditorToolsPtr
    PUSH EBX                            ; 00538b70 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270 ; 00538b71 | int shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270(CEditorTools * this_ptr, char * search_pattern, char * directory, char * target_filename, ...)
        ;   XREF to: 0049f270 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 00538b76
    TEST EAX,EAX                        ; 00538b79
    JZ 0x005384ec                       ; 00538b7b | LAB_005384ec
        ;   XREF to: 005384ec (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x4bc]               ; 00538b81
    PUSH EAX                            ; 00538b88
    PUSH EBP                            ; 00538b89
    CALL core_mission.cpp_CDemonMission_FUN_005243a0 ; 00538b8a | void core_mission.cpp_CDemonMission_FUN_005243a0(CDemonMission * this_ptr)
        ;   XREF to: 005243a0 (UNCONDITIONAL_CALL)
    JMP 0x005384e9                      ; 00538b8f | LAB_005384e9
        ;   XREF to: 005384e9 (UNCONDITIONAL_JUMP)

