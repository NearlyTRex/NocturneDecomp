; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_load_FUN_00569410(CDemonSet *this_ptr,char *filename)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
; Local Variables:
; char[256]        Stack[-0x228]:256  local_228
; char[100]        Stack[-0x128]:100  local_128
; char[100]        Stack[-0xc4]:100  local_c4
; CVector3f        Stack[-0x60]:12  local_60
; CVector3f        Stack[-0x54]:12  local_54
; undefined1[4]    Stack[-0x48]:4  local_48
; float *          Stack[-0x44]:4  local_44
; int *            Stack[-0x40]:4  local_40
; float *          Stack[-0x3c]:4  local_3c
; SRoom *          Stack[-0x38]:4  local_38
; SVDBox *         Stack[-0x34]:4  local_34
; float *          Stack[-0x30]:4  local_30
; float *          Stack[-0x2c]:4  local_2c
; float *          Stack[-0x28]:4  local_28
; float *          Stack[-0x24]:4  local_24
; float *          Stack[-0x20]:4  local_20
; CVector3f *      Stack[-0x1c]:4  local_1c
; CVector3f *      Stack[-0x18]:4  local_18
; float *          Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_fileman.cpp_CDemonFileManager_addSetToExtractList_FUN_004bd8e0 at 004bd909
;   core_mission.cpp_CDemonMission_loadSet_FUN_00523fb0 at 00523fd8
;   core_setedit.cpp_CDemonSet_showEditorMenu_FUN_00584940 at 00584b55
;
; Referenced Globals:
;   TerminatedCString s_Loading_set_006458f1
;   TerminatedCString s_rt_006458fd
;   TerminatedCString s_models_00645900
;   TerminatedCString s_core_set_cpp_00645907
;   TerminatedCString s_CDemonSet_Unable_to_open_00645917
;   TerminatedCString s_d_00645934
;   TerminatedCString s_f_00645938
;   TerminatedCString s_s_0064593c
;   TerminatedCString s_s_00645940
;   TerminatedCString s_f_00645944
;   TerminatedCString s_d_d_d_d_00645948
;   TerminatedCString s_f_f_f_00645955
;   TerminatedCString s_f_f_f_f_0064595f
;   TerminatedCString s_f_f_0064596c
;   TerminatedCString s_d_s_00645973
;   ... and 63 more
;
; Called Functions:
;   core_dcamera.cpp_loadCameraFog_FUN_00453e50
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
;   core_dmodel.cpp_CKeyFramedModel_load_FUN_00476db0
;   core_dtrace.cpp_CDemonRaytrace_loadAndSyncWithGeoFile_FUN_00494de0
;   core_level.cpp_CLevelLoader_update_FUN_00504160
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_path.cpp_resetAllPathMaps_FUN_00548590
;   core_set.cpp_CDemonSet_clear_FUN_005693c0
;   core_setcolid.cpp_CDemonSet_commitVoxelBuffer_FUN_00574560
;   core_setdir.cpp_CDemonSet_buildVdirBoxGroups_FUN_00576710
;   core_setdir.cpp_CDemonSet_refreshThumbs_FUN_00575b40
;   core_setdir.cpp_CDemonSet_skipDeprecatedVirtualDirectorData_FUN_00576200
;   core_setutil.cpp_C3DSCamera_load_FUN_00585420
;   core_setutil.cpp_C3DSCamera_loadPVS_FUN_005857b0
;   core_setutil.cpp_C3DSLight_load_FUN_00586310
;   ... and 14 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00569410
        ;   Label: core_set.cpp_CDemonSet_load_FUN_00569410
    PUSH ESI                            ; 00569411
    PUSH EDI                            ; 00569412
    PUSH EBP                            ; 00569413
    SUB ESP,0x218                       ; 00569414
    MOV EBP,dword ptr [ESP + 0x22c]     ; 0056941a
    MOV ESI,dword ptr [ESP + 0x230]     ; 00569421
    PUSH 0x0                            ; 00569428
    PUSH 0x6458f1                       ; 0056942a | = "Loading set"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 0056942f
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 00569434
    PUSH EAX                            ; 00569437
    MOV EDX,dword ptr [0x0067cf80]      ; 00569438 | g_CLevelLoaderInstance | g_CLevelLoaderPtr
    PUSH EDX                            ; 0056943e | g_CLevelLoaderInstance
    CALL core_level.cpp_CLevelLoader_update_FUN_00504160 ; 0056943f
        ;   XREF to: 00504160 (UNCONDITIONAL_CALL)  ; void core_level.cpp_CLevelLoader_update_FUN_00504160(CLevelLoader * this_ptr, char * text, int clear_screen)
    ADD ESP,0xc                         ; 00569444
    PUSH EBP                            ; 00569447
    CALL core_set.cpp_CDemonSet_clear_FUN_005693c0 ; 00569448
        ;   XREF to: 005693c0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_clear_FUN_005693c0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0056944d
    PUSH 0x6458fd                       ; 00569450 | = "rt"
    PUSH ESI                            ; 00569455
    PUSH 0x645900                       ; 00569456 | = "models"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 0056945b
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 00569460
    MOV EBX,EAX                         ; 00569463
    TEST EAX,EAX                        ; 00569465
    JZ 0x00569e6b                       ; 00569467
        ;   XREF to: 00569e6b (CONDITIONAL_JUMP)  ; LAB_00569e6b
    LEA EAX,[EBP + 0x15acac]            ; 0056946d
        ;   Label: LAB_0056946d
    PUSH EAX                            ; 00569473
    PUSH 0x645934                       ; 00569474 | = "%d\n"
    PUSH EBX                            ; 00569479
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0056947a
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0056947f
    LEA EAX,[EBP + 0x15ae94]            ; 00569482
    PUSH EAX                            ; 00569488
    PUSH 0x645938                       ; 00569489 | = "%f\n"
    PUSH EBX                            ; 0056948e
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0056948f
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00569494
    MOV EAX,ESP                         ; 00569497
    PUSH EAX                            ; 00569499
    PUSH 0x64593c                       ; 0056949a | = "%s\n"
    PUSH EBX                            ; 0056949f
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 005694a0
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 005694a5
    LEA EAX,[ESP + 0x100]               ; 005694a8
    PUSH EAX                            ; 005694af
    PUSH 0x645940                       ; 005694b0 | = "%s\n"
    PUSH EBX                            ; 005694b5
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 005694b6
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 005694bb
    LEA EAX,[EBP + 0x14d150]            ; 005694be
    PUSH EAX                            ; 005694c4
    PUSH 0x645944                       ; 005694c5 | = "%f\n"
    PUSH EBX                            ; 005694ca
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 005694cb
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    MOV EAX,dword ptr [EBP + 0x15acac]  ; 005694d0
    ADD ESP,0xc                         ; 005694d6
    TEST EAX,EAX                        ; 005694d9
    JNZ 0x00569516                      ; 005694db
        ;   XREF to: 00569516 (CONDITIONAL_JUMP)  ; LAB_00569516
    PUSH EBX                            ; 005694dd
    PUSH 0xff                           ; 005694de
    LEA EAX,[ESP + 0x8]                 ; 005694e3
    PUSH EAX                            ; 005694e7
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 005694e8
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 005694ed
    PUSH EBX                            ; 005694f0
    PUSH 0xff                           ; 005694f1
    LEA EAX,[ESP + 0x8]                 ; 005694f6
    PUSH EAX                            ; 005694fa
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 005694fb
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 00569500
    PUSH EBX                            ; 00569503
    PUSH 0xff                           ; 00569504
    LEA EAX,[ESP + 0x8]                 ; 00569509
    PUSH EAX                            ; 0056950d
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 0056950e
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 00569513
    MOV EDX,dword ptr [EBP + 0x15acac]  ; 00569516
        ;   Label: LAB_00569516
    LEA ESI,[EBP + 0x15ac30]            ; 0056951c
    CMP EDX,0x11                        ; 00569522
    JGE 0x00569e94                      ; 00569525
        ;   XREF to: 00569e94 (CONDITIONAL_JUMP)  ; LAB_00569e94
    PUSH EBX                            ; 0056952b
    PUSH 0xff                           ; 0056952c
    LEA EAX,[ESP + 0x8]                 ; 00569531
    PUSH EAX                            ; 00569535
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 00569536
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 0056953b
    LEA EAX,[EBP + 0x15ac38]            ; 0056953e
    PUSH EAX                            ; 00569544
    LEA EAX,[EBP + 0x15ac34]            ; 00569545
    PUSH EAX                            ; 0056954b
    PUSH ESI                            ; 0056954c
    LEA EAX,[ESP + 0x1ec]               ; 0056954d
    PUSH EAX                            ; 00569554
    PUSH 0x645948                       ; 00569555 | = "%d,%d,%d,%d\n"
    PUSH EBX                            ; 0056955a
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0056955b
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x18                        ; 00569560
    PUSH EBX                            ; 00569563
    PUSH 0xff                           ; 00569564
    LEA EAX,[ESP + 0x8]                 ; 00569569
    PUSH EAX                            ; 0056956d
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 0056956e
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 00569573
    LEA EAX,[EBP + 0x15ac44]            ; 00569576
    PUSH EAX                            ; 0056957c
    LEA EAX,[EBP + 0x15ac40]            ; 0056957d
    PUSH EAX                            ; 00569583
    LEA EAX,[EBP + 0x15ac3c]            ; 00569584
    PUSH EAX                            ; 0056958a
    PUSH 0x645955                       ; 0056958b | = "%f,%f,%f\n"
    PUSH EBX                            ; 00569590
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00569591
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x14                        ; 00569596
    LEA EAX,[ESP + 0x1e0]               ; 00569599
    PUSH EAX                            ; 005695a0
    PUSH EAX                            ; 005695a1
    LEA EAX,[EBP + 0x15ac4c]            ; 005695a2
    PUSH EAX                            ; 005695a8
    LEA EAX,[EBP + 0x15ac48]            ; 005695a9
    PUSH EAX                            ; 005695af
    PUSH 0x64595f                       ; 005695b0 | = "%f,%f,%f,%f\n"
    PUSH EBX                            ; 005695b5
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 005695b6
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x18                        ; 005695bb
    MOV dword ptr [EBP + 0x15ac50],0x42480000 ; 005695be
    PUSH EBX                            ; 005695c8
        ;   Label: LAB_005695c8
    PUSH 0xff                           ; 005695c9
    LEA EAX,[ESP + 0x8]                 ; 005695ce
    PUSH EAX                            ; 005695d2
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 005695d3
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    MOV EAX,[0x006844f0]                ; 005695d8 | g_CWaterPtr
    ADD ESP,0xc                         ; 005695dd
    LEA ESI,[EAX + 0x8]                 ; 005695e0 | g_CWaterInstance.tile_size
    PUSH ESI                            ; 005695e3 | g_CWaterInstance.tile_size
    ADD EAX,0x4                         ; 005695e4 | g_CWaterInstance.water_level_y
    PUSH EAX                            ; 005695e7 | g_CWaterInstance.water_level_y
    PUSH 0x64596c                       ; 005695e8 | = "%f,%f\n"
    PUSH EBX                            ; 005695ed
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 005695ee
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x10                        ; 005695f3
    PUSH EBX                            ; 005695f6
    PUSH 0xff                           ; 005695f7
    LEA EAX,[ESP + 0x8]                 ; 005695fc
    PUSH EAX                            ; 00569600
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 00569601
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 00569606
    LEA EAX,[EBP + 0x15ac98]            ; 00569609
    PUSH EAX                            ; 0056960f
    LEA EAX,[EBP + 0x15ac94]            ; 00569610
    PUSH EAX                            ; 00569616
    PUSH 0x645973                       ; 00569617 | = "%d,%s\n"
    PUSH EBX                            ; 0056961c
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0056961d
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    MOV ESI,dword ptr [EBP + 0x15acac]  ; 00569622
    ADD ESP,0x10                        ; 00569628
    CMP ESI,0x5                         ; 0056962b
    JL 0x00569ea4                       ; 0056962e
        ;   XREF to: 00569ea4 (CONDITIONAL_JUMP)  ; LAB_00569ea4
    PUSH EBX                            ; 00569634
    PUSH 0xff                           ; 00569635
    LEA EAX,[ESP + 0x8]                 ; 0056963a
    PUSH EAX                            ; 0056963e
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 0056963f
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 00569644
    MOV EDI,dword ptr [0x006844f0]      ; 00569647 | g_CWaterPtr
    PUSH EDI                            ; 0056964d | g_CWaterInstance
    PUSH 0x64597a                       ; 0056964e | = "%d\n"
    PUSH EBX                            ; 00569653
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00569654
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00569659
    CMP dword ptr [EBP + 0x15acac],0x6  ; 0056965c
        ;   Label: LAB_0056965c
    JL 0x00569edf                       ; 00569663
        ;   XREF to: 00569edf (CONDITIONAL_JUMP)  ; LAB_00569edf
    PUSH EBX                            ; 00569669
    PUSH 0xff                           ; 0056966a
    LEA EAX,[ESP + 0x8]                 ; 0056966f
    PUSH EAX                            ; 00569673
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 00569674
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 00569679
    LEA EAX,[EBP + 0x161628]            ; 0056967c
    PUSH EAX                            ; 00569682
    PUSH 0x645983                       ; 00569683 | = "%d\n"
    PUSH EBX                            ; 00569688
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00569689
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0056968e
    MOV EDX,dword ptr [EBP + 0x15acac]  ; 00569691
        ;   Label: LAB_00569691
    LEA EDI,[EBP + 0x16162c]            ; 00569697
    CMP EDX,0xc                         ; 0056969d
    JL 0x00569eee                       ; 005696a0
        ;   XREF to: 00569eee (CONDITIONAL_JUMP)  ; LAB_00569eee
    PUSH EDI                            ; 005696a6
    LEA EAX,[EBP + 0x16164c]            ; 005696a7
    PUSH EAX                            ; 005696ad
    PUSH 0x645987                       ; 005696ae | = "%d,%s\n"
    PUSH EBX                            ; 005696b3
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 005696b4
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x10                        ; 005696b9
    MOV ECX,dword ptr [EBP + 0x15acac]  ; 005696bc
        ;   Label: LAB_005696bc
    LEA EDI,[EBP + 0x15ae50]            ; 005696c2
    CMP ECX,0xd                         ; 005696c8
    JL 0x00569f1c                       ; 005696cb
        ;   XREF to: 00569f1c (CONDITIONAL_JUMP)  ; LAB_00569f1c
    PUSH EBX                            ; 005696d1
    PUSH 0xff                           ; 005696d2
    LEA EAX,[ESP + 0x8]                 ; 005696d7
    PUSH EAX                            ; 005696db
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 005696dc
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 005696e1
    PUSH EDI                            ; 005696e4
    LEA EAX,[EBP + 0x15ae4c]            ; 005696e5
    PUSH EAX                            ; 005696eb
    PUSH 0x64599a                       ; 005696ec | = "%d,%s\n"
    PUSH EBX                            ; 005696f1
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 005696f2
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x10                        ; 005696f7
    CMP dword ptr [EBP + 0x15acac],0x19 ; 005696fa
        ;   Label: LAB_005696fa
    JL 0x00569f4a                       ; 00569701
        ;   XREF to: 00569f4a (CONDITIONAL_JUMP)  ; LAB_00569f4a
    PUSH EBX                            ; 00569707
    PUSH 0xff                           ; 00569708
    LEA EAX,[ESP + 0x8]                 ; 0056970d
    PUSH EAX                            ; 00569711
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 00569712
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 00569717
    LEA EAX,[EBP + 0x161668]            ; 0056971a
    PUSH EAX                            ; 00569720
    PUSH 0x6459a6                       ; 00569721 | = "%d\n"
    PUSH EBX                            ; 00569726
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00569727
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0056972c
    PUSH 0x5                            ; 0056972f
        ;   Label: LAB_0056972f
    PUSH 0x6459aa                       ; 00569731 | = "train"
    LEA EAX,[ESP + 0x108]               ; 00569736
    PUSH EAX                            ; 0056973d
    CALL crt_string.c__strnicmp_FUN_005ff070 ; 0056973e
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00569743
    TEST EAX,EAX                        ; 00569746
    JNZ 0x00569f59                      ; 00569748
        ;   XREF to: 00569f59 (CONDITIONAL_JUMP)  ; LAB_00569f59
    MOV EAX,[0x006843f8]                ; 0056974e | g_CTerrainInstance | g_CTerrainPtr
    PUSH EAX                            ; 00569753 | g_CTerrainInstance
    MOV dword ptr [EBP + 0x15aca8],0x1  ; 00569754
    CALL core_terrain.cpp_CTerrain_init_FUN_005e1ef0 ; 0056975e
        ;   XREF to: 005e1ef0 (UNCONDITIONAL_CALL)  ; void core_terrain.cpp_CTerrain_init_FUN_005e1ef0(CTerrain * this_ptr)
    ADD ESP,0x4                         ; 00569763
    PUSH EBP                            ; 00569766
        ;   Label: LAB_00569766
    MOV EDX,dword ptr [EBP + 0x15acac]  ; 00569767
    ADD ESP,0x4                         ; 0056976d
    CMP EDX,0xb                         ; 00569770
    JL 0x00569788                       ; 00569773
        ;   XREF to: 00569788 (CONDITIONAL_JUMP)  ; LAB_00569788
    PUSH EBX                            ; 00569775
    PUSH 0xff                           ; 00569776
    LEA EAX,[ESP + 0x8]                 ; 0056977b
    PUSH EAX                            ; 0056977f
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 00569780
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 00569785
    LEA EAX,[EBP + 0x19a2c]             ; 00569788
        ;   Label: LAB_00569788
    PUSH EAX                            ; 0056978e
    PUSH 0x6459b0                       ; 0056978f | = "%d\n"
    PUSH EBX                            ; 00569794
    XOR EDI,EDI                         ; 00569795
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00569797
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    MOV ECX,dword ptr [EBP + 0x19a2c]   ; 0056979c
    ADD ESP,0xc                         ; 005697a2
    TEST ECX,ECX                        ; 005697a5
    JLE 0x005697d0                      ; 005697a7
        ;   XREF to: 005697d0 (CONDITIONAL_JUMP)  ; LAB_005697d0
    LEA ESI,[EBP + 0x19a30]             ; 005697a9
    PUSH EBX                            ; 005697af
        ;   Label: LAB_005697af
    PUSH ESI                            ; 005697b0
    INC EDI                             ; 005697b1
    CALL core_setutil.cpp_C3DSLight_load_FUN_00586310 ; 005697b2
        ;   XREF to: 00586310 (UNCONDITIONAL_CALL)  ; void core_setutil.cpp_C3DSLight_load_FUN_00586310(C3DSLight * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 005697b7
    MOV EAX,dword ptr [EBP + 0x19a2c]   ; 005697ba
    ADD ESI,0x1898                      ; 005697c0
    CMP EDI,EAX                         ; 005697c6
    JL 0x005697af                       ; 005697c8
        ;   XREF to: 005697af (CONDITIONAL_JUMP)  ; LAB_005697af
    LEA EAX,[EAX]                       ; 005697ca
    CMP dword ptr [EBP + 0x15acac],0xb  ; 005697d0
        ;   Label: LAB_005697d0
    JL 0x005697ec                       ; 005697d7
        ;   XREF to: 005697ec (CONDITIONAL_JUMP)  ; LAB_005697ec
    PUSH EBX                            ; 005697d9
    PUSH 0xff                           ; 005697da
    LEA EAX,[ESP + 0x8]                 ; 005697df
    PUSH EAX                            ; 005697e3
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 005697e4
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 005697e9
    PUSH EBP                            ; 005697ec
        ;   Label: LAB_005697ec
    PUSH 0x6459b4                       ; 005697ed | = "%d\n"
    PUSH EBX                            ; 005697f2
    XOR EDI,EDI                         ; 005697f3
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 005697f5
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    MOV ECX,dword ptr [EBP]             ; 005697fa
    ADD ESP,0xc                         ; 005697fd
    TEST ECX,ECX                        ; 00569800
    JLE 0x00569820                      ; 00569802
        ;   XREF to: 00569820 (CONDITIONAL_JUMP)  ; LAB_00569820
    LEA ESI,[EBP + 0x4]                 ; 00569804
    PUSH EBX                            ; 00569807
        ;   Label: LAB_00569807
    PUSH ESI                            ; 00569808
    INC EDI                             ; 00569809
    CALL core_setutil.cpp_C3DSCamera_load_FUN_00585420 ; 0056980a
        ;   XREF to: 00585420 (UNCONDITIONAL_CALL)  ; void core_setutil.cpp_C3DSCamera_load_FUN_00585420(C3DSCamera * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 0056980f
    MOV EAX,dword ptr [EBP]             ; 00569812
    ADD ESI,0x1a4                       ; 00569815
    CMP EDI,EAX                         ; 0056981b
    JL 0x00569807                       ; 0056981d
        ;   XREF to: 00569807 (CONDITIONAL_JUMP)  ; LAB_00569807
    NOP                                 ; 0056981f
    CMP dword ptr [EBP + 0x15acac],0x0  ; 00569820
        ;   Label: LAB_00569820
    JLE 0x00569f77                      ; 00569827
        ;   XREF to: 00569f77 (CONDITIONAL_JUMP)  ; LAB_00569f77
    PUSH EBX                            ; 0056982d
    PUSH 0xff                           ; 0056982e
    LEA EAX,[ESP + 0x8]                 ; 00569833
    PUSH EAX                            ; 00569837
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 00569838
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 0056983d
    LEA EAX,[EBP + 0x15aeb8]            ; 00569840
    PUSH EAX                            ; 00569846
    PUSH 0x6459b8                       ; 00569847 | = "%d\n"
    PUSH EBX                            ; 0056984c
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0056984d
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00569852
    LEA EAX,[EBP + 0x15aebc]            ; 00569855
    PUSH EAX                            ; 0056985b
    PUSH 0x6459bc                       ; 0056985c | = "%d\n"
    PUSH EBX                            ; 00569861
    XOR ESI,ESI                         ; 00569862
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00569864
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    MOV ECX,dword ptr [EBP + 0x15aebc]  ; 00569869
    ADD ESP,0xc                         ; 0056986f
    TEST ECX,ECX                        ; 00569872
    JLE 0x00569a00                      ; 00569874
        ;   XREF to: 00569a00 (CONDITIONAL_JUMP)  ; LAB_00569a00
    LEA EAX,[EBP + 0x15aec0]            ; 0056987a
    MOV dword ptr [ESP + 0x1f0],EAX     ; 00569880
    LEA EAX,[EBP + 0x15af00]            ; 00569887
    LEA EDI,[EBP + 0x15aed8]            ; 0056988d
    MOV dword ptr [ESP + 0x1e8],EAX     ; 00569893
    LEA EAX,[EBP + 0x15aecc]            ; 0056989a
    MOV dword ptr [ESP + 0x210],EAX     ; 005698a0
    LEA EAX,[EBP + 0x15aed0]            ; 005698a7
    MOV dword ptr [ESP + 0x1fc],EAX     ; 005698ad
    LEA EAX,[EBP + 0x15aed4]            ; 005698b4
    MOV dword ptr [ESP + 0x200],EAX     ; 005698ba
    LEA EAX,[EBP + 0x15aec4]            ; 005698c1
    MOV dword ptr [ESP + 0x208],EAX     ; 005698c7
    LEA EAX,[EBP + 0x15aec8]            ; 005698ce
    MOV dword ptr [ESP + 0x1e4],EAX     ; 005698d4
    IMUL EAX,ESI,0x44                   ; 005698db
        ;   Label: LAB_005698db
    MOV ECX,dword ptr [ESP + 0x1e4]     ; 005698de
    MOV EDX,dword ptr [ESP + 0x1f0]     ; 005698e5
    PUSH ECX                            ; 005698ec
    ADD EAX,EDX                         ; 005698ed
    MOV EDX,dword ptr [ESP + 0x20c]     ; 005698ef
    PUSH EDX                            ; 005698f6
    PUSH EAX                            ; 005698f7
    PUSH 0x6459c0                       ; 005698f8 | = "%f,%f,%f\n"
    PUSH EBX                            ; 005698fd
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 005698fe
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x14                        ; 00569903
    MOV ECX,dword ptr [ESP + 0x200]     ; 00569906
    PUSH ECX                            ; 0056990d
    MOV EAX,dword ptr [ESP + 0x200]     ; 0056990e
    PUSH EAX                            ; 00569915
    MOV EDX,dword ptr [ESP + 0x218]     ; 00569916
    PUSH EDX                            ; 0056991d
    PUSH 0x6459ca                       ; 0056991e | = "%f,%f,%f\n"
    PUSH EBX                            ; 00569923
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00569924
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x14                        ; 00569929
    LEA EAX,[ESP + 0x1d8]               ; 0056992c
    PUSH EAX                            ; 00569933
    LEA EAX,[ESP + 0x1e0]               ; 00569934
    PUSH EAX                            ; 0056993b
    LEA EAX,[ESP + 0x1dc]               ; 0056993c
    PUSH EAX                            ; 00569943
    PUSH 0x6459d4                       ; 00569944 | = "%f,%f,%f\n"
    PUSH EBX                            ; 00569949
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0056994a
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x14                        ; 0056994f
    LEA EAX,[ESP + 0x1d4]               ; 00569952
    PUSH EAX                            ; 00569959
    PUSH EDI                            ; 0056995a
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30 ; 0056995b
        ;   XREF to: 00471d30 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 00569960
    MOV ECX,dword ptr [ESP + 0x1e8]     ; 00569963
    PUSH ECX                            ; 0056996a
    PUSH 0x6459de                       ; 0056996b | = "%d\n"
    PUSH EBX                            ; 00569970
    INC ESI                             ; 00569971
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00569972
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00569977
    ADD EDI,0x44                        ; 0056997a
    MOV EAX,dword ptr [ESP + 0x1e8]     ; 0056997d
    MOV EDX,dword ptr [ESP + 0x210]     ; 00569984
    MOV ECX,dword ptr [ESP + 0x1fc]     ; 0056998b
    ADD EAX,0x44                        ; 00569992
    ADD EDX,0x44                        ; 00569995
    ADD ECX,0x44                        ; 00569998
    MOV dword ptr [ESP + 0x1e8],EAX     ; 0056999b
    MOV dword ptr [ESP + 0x210],EDX     ; 005699a2
    MOV dword ptr [ESP + 0x1fc],ECX     ; 005699a9
    MOV EAX,dword ptr [ESP + 0x200]     ; 005699b0
    MOV EDX,dword ptr [ESP + 0x208]     ; 005699b7
    MOV ECX,dword ptr [ESP + 0x1e4]     ; 005699be
    ADD EAX,0x44                        ; 005699c5
    ADD EDX,0x44                        ; 005699c8
    ADD ECX,0x44                        ; 005699cb
    MOV dword ptr [ESP + 0x200],EAX     ; 005699ce
    MOV dword ptr [ESP + 0x208],EDX     ; 005699d5
    MOV EAX,dword ptr [EBP + 0x15aebc]  ; 005699dc
    MOV dword ptr [ESP + 0x1e4],ECX     ; 005699e2
    CMP ESI,EAX                         ; 005699e9
    JL 0x005698db                       ; 005699eb
        ;   XREF to: 005698db (CONDITIONAL_JUMP)  ; LAB_005698db
    LEA EAX,[EAX]                       ; 005699f1
    LEA EDX,[EDX]                       ; 005699f7
    LEA EAX,[EAX]                       ; 005699fd
    CMP dword ptr [EBP + 0x15acac],0x3  ; 00569a00
        ;   Label: LAB_00569a00
    JL 0x0056a041                       ; 00569a07
        ;   XREF to: 0056a041 (CONDITIONAL_JUMP)  ; LAB_0056a041
    PUSH EBX                            ; 00569a0d
    PUSH 0xff                           ; 00569a0e
    LEA EAX,[ESP + 0x8]                 ; 00569a13
    PUSH EAX                            ; 00569a17
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 00569a18
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 00569a1d
    LEA EAX,[EBP + 0x15f67c]            ; 00569a20
    PUSH EAX                            ; 00569a26
    PUSH 0x6459ff                       ; 00569a27 | = "%d\n"
    PUSH EBX                            ; 00569a2c
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00569a2d
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00569a32
    CMP dword ptr [EBP + 0x15acac],0x18 ; 00569a35
        ;   Label: LAB_00569a35
    JL 0x0056a132                       ; 00569a3c
        ;   XREF to: 0056a132 (CONDITIONAL_JUMP)  ; LAB_0056a132
    PUSH EBX                            ; 00569a42
    PUSH 0xff                           ; 00569a43
    LEA EAX,[ESP + 0x8]                 ; 00569a48
    PUSH EAX                            ; 00569a4c
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 00569a4d
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 00569a52
    LEA EAX,[EBP + 0x15ac7c]            ; 00569a55
    PUSH EAX                            ; 00569a5b
    PUSH 0x645a27                       ; 00569a5c | = "%d\n"
    PUSH EBX                            ; 00569a61
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00569a62
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00569a67
    MOV ESI,dword ptr [EBP + 0x15acac]  ; 00569a6a
        ;   Label: LAB_00569a6a
    CMP ESI,0x4                         ; 00569a70
    JL 0x00569a84                       ; 00569a73
        ;   XREF to: 00569a84 (CONDITIONAL_JUMP)  ; LAB_00569a84
    CMP ESI,0x9                         ; 00569a75
    JG 0x00569a84                       ; 00569a78
        ;   XREF to: 00569a84 (CONDITIONAL_JUMP)  ; LAB_00569a84
    PUSH EBX                            ; 00569a7a
    PUSH EBP                            ; 00569a7b
    CALL core_setdir.cpp_CDemonSet_skipDeprecatedVirtualDirectorData_FUN_00576200 ; 00569a7c
        ;   XREF to: 00576200 (UNCONDITIONAL_CALL)  ; void core_setdir.cpp_CDemonSet_skipDeprecatedVirtualDirectorData_FUN_00576200(CDemonSet * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 00569a81
    CMP dword ptr [EBP + 0x15acac],0x5  ; 00569a84
        ;   Label: LAB_00569a84
    JL 0x0056a141                       ; 00569a8b
        ;   XREF to: 0056a141 (CONDITIONAL_JUMP)  ; LAB_0056a141
    PUSH EBX                            ; 00569a91
    PUSH 0xff                           ; 00569a92
    LEA EAX,[ESP + 0x8]                 ; 00569a97
    PUSH EAX                            ; 00569a9b
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 00569a9c
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 00569aa1
    LEA EAX,[EBP + 0x15b410]            ; 00569aa4
    PUSH EAX                            ; 00569aaa
    PUSH 0x645a2b                       ; 00569aab | = "%d\n"
    PUSH EBX                            ; 00569ab0
    XOR ESI,ESI                         ; 00569ab1
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00569ab3
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    MOV EDX,dword ptr [EBP + 0x15b410]  ; 00569ab8
    ADD ESP,0xc                         ; 00569abe
    TEST EDX,EDX                        ; 00569ac1
    JLE 0x00569c10                      ; 00569ac3
        ;   XREF to: 00569c10 (CONDITIONAL_JUMP)  ; LAB_00569c10
    LEA EAX,[EBP + 0x15b414]            ; 00569ac9
    LEA EDI,[EBP + 0x15b42c]            ; 00569acf
    MOV dword ptr [ESP + 0x1f4],EAX     ; 00569ad5
    LEA EAX,[EBP + 0x15b420]            ; 00569adc
    MOV dword ptr [ESP + 0x20c],EAX     ; 00569ae2
    LEA EAX,[EBP + 0x15b424]            ; 00569ae9
    MOV dword ptr [ESP + 0x1ec],EAX     ; 00569aef
    LEA EAX,[EBP + 0x15b428]            ; 00569af6
    MOV dword ptr [ESP + 0x1f8],EAX     ; 00569afc
    LEA EAX,[EBP + 0x15b418]            ; 00569b03
    MOV dword ptr [ESP + 0x204],EAX     ; 00569b09
    LEA EAX,[EBP + 0x15b41c]            ; 00569b10
    MOV dword ptr [ESP + 0x214],EAX     ; 00569b16
    IMUL EAX,ESI,0x44                   ; 00569b1d
        ;   Label: LAB_00569b1d
    MOV EDX,dword ptr [ESP + 0x214]     ; 00569b20
    MOV ECX,dword ptr [ESP + 0x1f4]     ; 00569b27
    PUSH EDX                            ; 00569b2e
    ADD EAX,ECX                         ; 00569b2f
    MOV ECX,dword ptr [ESP + 0x208]     ; 00569b31
    PUSH ECX                            ; 00569b38
    PUSH EAX                            ; 00569b39
    PUSH 0x645a2f                       ; 00569b3a | = "%f,%f,%f\n"
    PUSH EBX                            ; 00569b3f
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00569b40
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x14                        ; 00569b45
    MOV EAX,dword ptr [ESP + 0x1f8]     ; 00569b48
    PUSH EAX                            ; 00569b4f
    MOV EDX,dword ptr [ESP + 0x1f0]     ; 00569b50
    PUSH EDX                            ; 00569b57
    MOV ECX,dword ptr [ESP + 0x214]     ; 00569b58
    PUSH ECX                            ; 00569b5f
    PUSH 0x645a39                       ; 00569b60 | = "%f,%f,%f\n"
    PUSH EBX                            ; 00569b65
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00569b66
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x14                        ; 00569b6b
    LEA EAX,[ESP + 0x1cc]               ; 00569b6e
    PUSH EAX                            ; 00569b75
    LEA EAX,[ESP + 0x1d4]               ; 00569b76
    PUSH EAX                            ; 00569b7d
    LEA EAX,[ESP + 0x1d0]               ; 00569b7e
    PUSH EAX                            ; 00569b85
    PUSH 0x645a43                       ; 00569b86 | = "%f,%f,%f\n"
    PUSH EBX                            ; 00569b8b
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00569b8c
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x14                        ; 00569b91
    LEA EAX,[ESP + 0x1c8]               ; 00569b94
    PUSH EAX                            ; 00569b9b
    PUSH EDI                            ; 00569b9c
    INC ESI                             ; 00569b9d
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30 ; 00569b9e
        ;   XREF to: 00471d30 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 00569ba3
    ADD EDI,0x44                        ; 00569ba6
    MOV EAX,dword ptr [ESP + 0x20c]     ; 00569ba9
    MOV EDX,dword ptr [ESP + 0x1ec]     ; 00569bb0
    MOV ECX,dword ptr [ESP + 0x1f8]     ; 00569bb7
    ADD EAX,0x44                        ; 00569bbe
    ADD EDX,0x44                        ; 00569bc1
    ADD ECX,0x44                        ; 00569bc4
    MOV dword ptr [ESP + 0x20c],EAX     ; 00569bc7
    MOV dword ptr [ESP + 0x1ec],EDX     ; 00569bce
    MOV dword ptr [ESP + 0x1f8],ECX     ; 00569bd5
    MOV EAX,dword ptr [ESP + 0x204]     ; 00569bdc
    MOV EDX,dword ptr [ESP + 0x214]     ; 00569be3
    MOV ECX,dword ptr [EBP + 0x15b410]  ; 00569bea
    ADD EAX,0x44                        ; 00569bf0
    ADD EDX,0x44                        ; 00569bf3
    MOV dword ptr [ESP + 0x204],EAX     ; 00569bf6
    MOV dword ptr [ESP + 0x214],EDX     ; 00569bfd
    CMP ESI,ECX                         ; 00569c04
    JL 0x00569b1d                       ; 00569c06
        ;   XREF to: 00569b1d (CONDITIONAL_JUMP)  ; LAB_00569b1d
    LEA EAX,[EAX]                       ; 00569c0c
    PUSH EBP                            ; 00569c10
        ;   Label: LAB_00569c10
    CALL core_setdir.cpp_CDemonSet_buildVdirBoxGroups_FUN_00576710 ; 00569c11
        ;   XREF to: 00576710 (UNCONDITIONAL_CALL)  ; int core_setdir.cpp_CDemonSet_buildVdirBoxGroups_FUN_00576710(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00569c16
    CMP dword ptr [EBP + 0x15acac],0xe  ; 00569c19
        ;   Label: LAB_00569c19
    JNZ 0x00569c48                      ; 00569c20
        ;   XREF to: 00569c48 (CONDITIONAL_JUMP)  ; LAB_00569c48
    PUSH EBX                            ; 00569c22
    PUSH 0xff                           ; 00569c23
    LEA EAX,[ESP + 0x8]                 ; 00569c28
    PUSH EAX                            ; 00569c2c
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 00569c2d
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 00569c32
    PUSH EBX                            ; 00569c35
    PUSH 0xff                           ; 00569c36
    LEA EAX,[ESP + 0x8]                 ; 00569c3b
    PUSH EAX                            ; 00569c3f
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 00569c40
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 00569c45
    CMP dword ptr [EBP + 0x15acac],0x14 ; 00569c48
        ;   Label: LAB_00569c48
    JL 0x00569c90                       ; 00569c4f
        ;   XREF to: 00569c90 (CONDITIONAL_JUMP)  ; LAB_00569c90
    PUSH EBX                            ; 00569c51
    PUSH 0xff                           ; 00569c52
    LEA EAX,[ESP + 0x8]                 ; 00569c57
    PUSH EAX                            ; 00569c5b
    XOR EDI,EDI                         ; 00569c5c
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 00569c5e
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    MOV EAX,dword ptr [EBP]             ; 00569c63
    ADD ESP,0xc                         ; 00569c66
    TEST EAX,EAX                        ; 00569c69
    JLE 0x00569c90                      ; 00569c6b
        ;   XREF to: 00569c90 (CONDITIONAL_JUMP)  ; LAB_00569c90
    LEA ESI,[EBP + 0x4]                 ; 00569c6d
    PUSH EBX                            ; 00569c70
        ;   Label: LAB_00569c70
    PUSH ESI                            ; 00569c71
    INC EDI                             ; 00569c72
    CALL core_setutil.cpp_C3DSCamera_loadPVS_FUN_005857b0 ; 00569c73
        ;   XREF to: 005857b0 (UNCONDITIONAL_CALL)  ; void core_setutil.cpp_C3DSCamera_loadPVS_FUN_005857b0(C3DSCamera * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 00569c78
    MOV EDX,dword ptr [EBP]             ; 00569c7b
    ADD ESI,0x1a4                       ; 00569c7e
    CMP EDI,EDX                         ; 00569c84
    JL 0x00569c70                       ; 00569c86
        ;   XREF to: 00569c70 (CONDITIONAL_JUMP)  ; LAB_00569c70
    LEA EAX,[EAX]                       ; 00569c88
    MOV EDX,EDX                         ; 00569c8e
    PUSH 0x1e8                          ; 00569c90
        ;   Label: LAB_00569c90
    PUSH 0x645a4d                       ; 00569c95 | = "..\\core\\set.cpp"
    PUSH EBX                            ; 00569c9a
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 00569c9b
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 00569ca0
    PUSH 0x0                            ; 00569ca3
    PUSH 0x645a5d                       ; 00569ca5 | = "Loading set geometry"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00569caa
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 00569caf
    PUSH EAX                            ; 00569cb2
    MOV ECX,dword ptr [0x0067cf80]      ; 00569cb3 | g_CLevelLoaderInstance | g_CLevelLoaderPtr
    PUSH ECX                            ; 00569cb9 | g_CLevelLoaderInstance
    CALL core_level.cpp_CLevelLoader_update_FUN_00504160 ; 00569cba
        ;   XREF to: 00504160 (UNCONDITIONAL_CALL)  ; void core_level.cpp_CLevelLoader_update_FUN_00504160(CLevelLoader * this_ptr, char * text, int clear_screen)
    ADD ESP,0xc                         ; 00569cbf
    LEA EAX,[ESP + 0x100]               ; 00569cc2
    PUSH EAX                            ; 00569cc9
    LEA EBX,[EBP + 0x14d0f0]            ; 00569cca
    PUSH EBX                            ; 00569cd0
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 00569cd1
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 00569cd6
    TEST EAX,EAX                        ; 00569cd9
    JZ 0x0056a17a                       ; 00569cdb
        ;   XREF to: 0056a17a (CONDITIONAL_JUMP)  ; LAB_0056a17a
    LEA ESI,[ESP + 0x100]               ; 00569ce1
    MOV EDI,EBX                         ; 00569ce8
    PUSH EDI                            ; 00569cea
    MOV AL,byte ptr [ESI]               ; 00569ceb
        ;   Label: LAB_00569ceb
    MOV byte ptr [EDI],AL               ; 00569ced
    CMP AL,0x0                          ; 00569cef
    JZ 0x00569d03                       ; 00569cf1
        ;   XREF to: 00569d03 (CONDITIONAL_JUMP)  ; LAB_00569d03
    MOV AL,byte ptr [ESI + 0x1]         ; 00569cf3
    ADD ESI,0x2                         ; 00569cf6
    MOV byte ptr [EDI + 0x1],AL         ; 00569cf9
    ADD EDI,0x2                         ; 00569cfc
    CMP AL,0x0                          ; 00569cff
    JNZ 0x00569ceb                      ; 00569d01
        ;   XREF to: 00569ceb (CONDITIONAL_JUMP)  ; LAB_00569ceb
    POP EDI                             ; 00569d03
        ;   Label: LAB_00569d03
    PUSH 0x645a72                       ; 00569d04 | = "rb"
    PUSH EBX                            ; 00569d09
    PUSH 0x645a75                       ; 00569d0a | = "data"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 00569d0f
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 00569d14
    TEST EAX,EAX                        ; 00569d17
    JZ 0x0056a150                       ; 00569d19
        ;   XREF to: 0056a150 (CONDITIONAL_JUMP)  ; LAB_0056a150
    PUSH 0x1f1                          ; 00569d1f
    PUSH 0x645a7a                       ; 00569d24 | = "..\\core\\set.cpp"
    PUSH EAX                            ; 00569d29
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 00569d2a
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 00569d2f
    PUSH EBX                            ; 00569d32
    PUSH 0x3277d14                      ; 00569d33 | g_CDemonRaytraceInstance
    CALL core_dtrace.cpp_CDemonRaytrace_loadAndSyncWithGeoFile_FUN_00494de0 ; 00569d38
        ;   XREF to: 00494de0 (UNCONDITIONAL_CALL)  ; int core_dtrace.cpp_CDemonRaytrace_loadAndSyncWithGeoFile_FUN_00494de0(CDemonRaytrace * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00569d3d
    CALL core_path.cpp_resetAllPathMaps_FUN_00548590 ; 00569d40
        ;   XREF to: 00548590 (UNCONDITIONAL_CALL)  ; void core_path.cpp_resetAllPathMaps_FUN_00548590()
        ;   Label: LAB_00569d40
    PUSH 0x0                            ; 00569d45
        ;   Label: LAB_00569d45
    PUSH 0x645ab1                       ; 00569d47 | = "Loading thumbs"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00569d4c
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 00569d51
    PUSH EAX                            ; 00569d54
    MOV EBX,dword ptr [0x0067cf80]      ; 00569d55 | g_CLevelLoaderInstance | g_CLevelLoaderPtr
    PUSH EBX                            ; 00569d5b | g_CLevelLoaderInstance
    LEA EDI,[ESP + 0x170]               ; 00569d5c
    CALL core_level.cpp_CLevelLoader_update_FUN_00504160 ; 00569d63
        ;   XREF to: 00504160 (UNCONDITIONAL_CALL)  ; void core_level.cpp_CLevelLoader_update_FUN_00504160(CLevelLoader * this_ptr, char * text, int clear_screen)
    ADD ESP,0xc                         ; 00569d68
    LEA ESI,[EBP + 0x14d0f0]            ; 00569d6b
    MOV DL,0x2e                         ; 00569d71
    PUSH EDI                            ; 00569d73
    MOV AL,byte ptr [ESI]               ; 00569d74
        ;   Label: LAB_00569d74
    MOV byte ptr [EDI],AL               ; 00569d76
    CMP AL,0x0                          ; 00569d78
    JZ 0x00569d8c                       ; 00569d7a
        ;   XREF to: 00569d8c (CONDITIONAL_JUMP)  ; LAB_00569d8c
    MOV AL,byte ptr [ESI + 0x1]         ; 00569d7c
    ADD ESI,0x2                         ; 00569d7f
    MOV byte ptr [EDI + 0x1],AL         ; 00569d82
    ADD EDI,0x2                         ; 00569d85
    CMP AL,0x0                          ; 00569d88
    JNZ 0x00569d74                      ; 00569d8a
        ;   XREF to: 00569d74 (CONDITIONAL_JUMP)  ; LAB_00569d74
    POP EDI                             ; 00569d8c
        ;   Label: LAB_00569d8c
    LEA ESI,[ESP + 0x164]               ; 00569d8d
    MOV AL,byte ptr [ESI]               ; 00569d94
        ;   Label: LAB_00569d94
    CMP AL,DL                           ; 00569d96
    JZ 0x00569dac                       ; 00569d98
        ;   XREF to: 00569dac (CONDITIONAL_JUMP)  ; LAB_00569dac
    CMP AL,0x0                          ; 00569d9a
    JZ 0x00569daa                       ; 00569d9c
        ;   XREF to: 00569daa (CONDITIONAL_JUMP)  ; LAB_00569daa
    INC ESI                             ; 00569d9e
    MOV AL,byte ptr [ESI]               ; 00569d9f
    CMP AL,DL                           ; 00569da1
    JZ 0x00569dac                       ; 00569da3
        ;   XREF to: 00569dac (CONDITIONAL_JUMP)  ; LAB_00569dac
    INC ESI                             ; 00569da5
    CMP AL,0x0                          ; 00569da6
    JNZ 0x00569d94                      ; 00569da8
        ;   XREF to: 00569d94 (CONDITIONAL_JUMP)  ; LAB_00569d94
    SUB ESI,ESI                         ; 00569daa
        ;   Label: LAB_00569daa
    MOV EDI,ESI                         ; 00569dac
        ;   Label: LAB_00569dac
    TEST ESI,ESI                        ; 00569dae
    JNZ 0x00569dd5                      ; 00569db0
        ;   XREF to: 00569dd5 (CONDITIONAL_JUMP)  ; LAB_00569dd5
    LEA ESI,[ESP + 0x164]               ; 00569db2
    XOR DL,DL                           ; 00569db9
    MOV AL,byte ptr [ESI]               ; 00569dbb
        ;   Label: LAB_00569dbb
    CMP AL,DL                           ; 00569dbd
    JZ 0x00569dd3                       ; 00569dbf
        ;   XREF to: 00569dd3 (CONDITIONAL_JUMP)  ; LAB_00569dd3
    CMP AL,0x0                          ; 00569dc1
    JZ 0x00569dd1                       ; 00569dc3
        ;   XREF to: 00569dd1 (CONDITIONAL_JUMP)  ; LAB_00569dd1
    INC ESI                             ; 00569dc5
    MOV AL,byte ptr [ESI]               ; 00569dc6
    CMP AL,DL                           ; 00569dc8
    JZ 0x00569dd3                       ; 00569dca
        ;   XREF to: 00569dd3 (CONDITIONAL_JUMP)  ; LAB_00569dd3
    INC ESI                             ; 00569dcc
    CMP AL,0x0                          ; 00569dcd
    JNZ 0x00569dbb                      ; 00569dcf
        ;   XREF to: 00569dbb (CONDITIONAL_JUMP)  ; LAB_00569dbb
    SUB ESI,ESI                         ; 00569dd1
        ;   Label: LAB_00569dd1
    MOV EDI,ESI                         ; 00569dd3
        ;   Label: LAB_00569dd3
    MOV ESI,0x645ac0                    ; 00569dd5 | = ".zth"
        ;   Label: LAB_00569dd5
    PUSH EDI                            ; 00569dda
    MOV AL,byte ptr [ESI]               ; 00569ddb | = ".zth" | s_zth_00645ac0+2
        ;   Label: LAB_00569ddb
    MOV byte ptr [EDI],AL               ; 00569ddd
    CMP AL,0x0                          ; 00569ddf
    JZ 0x00569df3                       ; 00569de1
        ;   XREF to: 00569df3 (CONDITIONAL_JUMP)  ; LAB_00569df3
    MOV AL,byte ptr [ESI + 0x1]         ; 00569de3 | s_zth_00645ac0+1 | s_zth_00645ac0+3
    ADD ESI,0x2                         ; 00569de6
    MOV byte ptr [EDI + 0x1],AL         ; 00569de9
    ADD EDI,0x2                         ; 00569dec
    CMP AL,0x0                          ; 00569def
    JNZ 0x00569ddb                      ; 00569df1
        ;   XREF to: 00569ddb (CONDITIONAL_JUMP)  ; LAB_00569ddb
    POP EDI                             ; 00569df3
        ;   Label: LAB_00569df3
    LEA EAX,[ESP + 0x164]               ; 00569df4
    PUSH EAX                            ; 00569dfb
    PUSH EBP                            ; 00569dfc
    CALL core_setdir.cpp_CDemonSet_refreshThumbs_FUN_00575b40 ; 00569dfd
        ;   XREF to: 00575b40 (UNCONDITIONAL_CALL)  ; void core_setdir.cpp_CDemonSet_refreshThumbs_FUN_00575b40(CDemonSet * this_ptr, char * filename)
    MOV ESI,dword ptr [EBP + 0x15ac94]  ; 00569e02
    ADD ESP,0x8                         ; 00569e08
    TEST ESI,ESI                        ; 00569e0b
    JZ 0x00569e23                       ; 00569e0d
        ;   XREF to: 00569e23 (CONDITIONAL_JUMP)  ; LAB_00569e23
    LEA EAX,[EBP + 0x15ac98]            ; 00569e0f
    PUSH EAX                            ; 00569e15
    PUSH 0x32780a4                      ; 00569e16 | g_CKeyFramedModelInstance
    CALL core_dmodel.cpp_CKeyFramedModel_load_FUN_00476db0 ; 00569e1b
        ;   XREF to: 00476db0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_load_FUN_00476db0(CKeyFramedModel * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00569e20
    MOV EDI,dword ptr [EBP]             ; 00569e23
        ;   Label: LAB_00569e23
    XOR ESI,ESI                         ; 00569e26
    TEST EDI,EDI                        ; 00569e28
    JLE 0x00569e60                      ; 00569e2a
        ;   XREF to: 00569e60 (CONDITIONAL_JUMP)  ; LAB_00569e60
    MOV EBX,EBP                         ; 00569e2c
    FLD float ptr [EBP + 0x14d150]      ; 00569e2e
        ;   Label: LAB_00569e2e
    MOV dword ptr [EBX + 0x150],0x0     ; 00569e34
    MOV dword ptr [EBX + 0x1a4],0x1     ; 00569e3e
    INC ESI                             ; 00569e48
    FSTP float ptr [EBX + 0x14c]        ; 00569e49
    MOV EAX,dword ptr [EBP]             ; 00569e4f
    ADD EBX,0x1a4                       ; 00569e52
    CMP ESI,EAX                         ; 00569e58
    JL 0x00569e2e                       ; 00569e5a
        ;   XREF to: 00569e2e (CONDITIONAL_JUMP)  ; LAB_00569e2e
    LEA EAX,[EAX]                       ; 00569e5c
    ADD ESP,0x218                       ; 00569e60
        ;   Label: LAB_00569e60
    POP EBP                             ; 00569e66
    POP EDI                             ; 00569e67
    POP ESI                             ; 00569e68
    POP EBX                             ; 00569e69
    RET                                 ; 00569e6a
    PUSH ESI                            ; 00569e6b
        ;   Label: LAB_00569e6b
    MOV ECX,0x645907                    ; 00569e6c | = "..\\core\\set.cpp"
    MOV EDI,0x122                       ; 00569e71
    PUSH 0x645917                       ; 00569e76 | = "CDemonSet::Unable to open %s"
    MOV dword ptr [0x02f0ca48],ECX      ; 00569e7b | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 00569e81 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00569e87
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 00569e8c
    JMP 0x0056946d                      ; 00569e8f
        ;   XREF to: 0056946d (UNCONDITIONAL_JUMP)  ; LAB_0056946d
    PUSH EDX                            ; 00569e94
        ;   Label: LAB_00569e94
    PUSH EBX                            ; 00569e95
    PUSH ESI                            ; 00569e96
    CALL core_dcamera.cpp_loadCameraFog_FUN_00453e50 ; 00569e97
        ;   XREF to: 00453e50 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_loadCameraFog_FUN_00453e50(SFog * fog, _FILE * file_handle, int file_version)
    ADD ESP,0xc                         ; 00569e9c
    JMP 0x005695c8                      ; 00569e9f
        ;   XREF to: 005695c8 (UNCONDITIONAL_JUMP)  ; LAB_005695c8
    PUSH 0x4                            ; 00569ea4
        ;   Label: LAB_00569ea4
    PUSH 0x64597e                       ; 00569ea6 | = "ndun"
    LEA EAX,[ESP + 0x108]               ; 00569eab
    PUSH EAX                            ; 00569eb2
    CALL crt_string.c__strnicmp_FUN_005ff070 ; 00569eb3
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00569eb8
    TEST EAX,EAX                        ; 00569ebb
    JNZ 0x00569ecf                      ; 00569ebd
        ;   XREF to: 00569ecf (CONDITIONAL_JUMP)  ; LAB_00569ecf
    MOV EAX,[0x006844f0]                ; 00569ebf | g_CWaterPtr
    MOV dword ptr [EAX],0x1             ; 00569ec4 | g_CWaterInstance
    JMP 0x0056965c                      ; 00569eca
        ;   XREF to: 0056965c (UNCONDITIONAL_JUMP)  ; LAB_0056965c
    MOV EAX,[0x006844f0]                ; 00569ecf | g_CWaterPtr
        ;   Label: LAB_00569ecf
    MOV dword ptr [EAX],0x0             ; 00569ed4 | g_CWaterInstance
    JMP 0x0056965c                      ; 00569eda
        ;   XREF to: 0056965c (UNCONDITIONAL_JUMP)  ; LAB_0056965c
    MOV dword ptr [EBP + 0x161628],0x1  ; 00569edf
        ;   Label: LAB_00569edf
    JMP 0x00569691                      ; 00569ee9
        ;   XREF to: 00569691 (UNCONDITIONAL_JUMP)  ; LAB_00569691
    MOV ESI,0x64598e                    ; 00569eee | = "NITESKY.RAW"
        ;   Label: LAB_00569eee
    PUSH EDI                            ; 00569ef3
    MOV AL,byte ptr [ESI]               ; 00569ef4 | = "NITESKY.RAW" | s_TESKY.RAW_00645990
        ;   Label: LAB_00569ef4
    MOV byte ptr [EDI],AL               ; 00569ef6
    CMP AL,0x0                          ; 00569ef8
    JZ 0x00569f0c                       ; 00569efa
        ;   XREF to: 00569f0c (CONDITIONAL_JUMP)  ; LAB_00569f0c
    MOV AL,byte ptr [ESI + 0x1]         ; 00569efc | s_ITESKY.RAW_0064598f | s_ESKY.RAW_00645991
    ADD ESI,0x2                         ; 00569eff
    MOV byte ptr [EDI + 0x1],AL         ; 00569f02
    ADD EDI,0x2                         ; 00569f05
    CMP AL,0x0                          ; 00569f08
    JNZ 0x00569ef4                      ; 00569f0a
        ;   XREF to: 00569ef4 (CONDITIONAL_JUMP)  ; LAB_00569ef4
    POP EDI                             ; 00569f0c
        ;   Label: LAB_00569f0c
    MOV dword ptr [EBP + 0x16164c],0x4000 ; 00569f0d
    JMP 0x005696bc                      ; 00569f17
        ;   XREF to: 005696bc (UNCONDITIONAL_JUMP)  ; LAB_005696bc
    MOV ESI,0x6459a1                    ; 00569f1c | = "none"
        ;   Label: LAB_00569f1c
    MOV dword ptr [EBP + 0x15ae4c],0x0  ; 00569f21
    PUSH EDI                            ; 00569f2b
    MOV AL,byte ptr [ESI]               ; 00569f2c | = "none" | s_ne_006459a1+2
        ;   Label: LAB_00569f2c
    MOV byte ptr [EDI],AL               ; 00569f2e
    CMP AL,0x0                          ; 00569f30
    JZ 0x00569f44                       ; 00569f32
        ;   XREF to: 00569f44 (CONDITIONAL_JUMP)  ; LAB_00569f44
    MOV AL,byte ptr [ESI + 0x1]         ; 00569f34 | s_one_006459a1+1 | s_e_006459a1+3
    ADD ESI,0x2                         ; 00569f37
    MOV byte ptr [EDI + 0x1],AL         ; 00569f3a
    ADD EDI,0x2                         ; 00569f3d
    CMP AL,0x0                          ; 00569f40
    JNZ 0x00569f2c                      ; 00569f42
        ;   XREF to: 00569f2c (CONDITIONAL_JUMP)  ; LAB_00569f2c
    POP EDI                             ; 00569f44
        ;   Label: LAB_00569f44
    JMP 0x005696fa                      ; 00569f45
        ;   XREF to: 005696fa (UNCONDITIONAL_JUMP)  ; LAB_005696fa
    MOV dword ptr [EBP + 0x161668],0x0  ; 00569f4a
        ;   Label: LAB_00569f4a
    JMP 0x0056972f                      ; 00569f54
        ;   XREF to: 0056972f (UNCONDITIONAL_JUMP)  ; LAB_0056972f
    MOV EDI,dword ptr [0x006843f8]      ; 00569f59 | g_CTerrainPtr
        ;   Label: LAB_00569f59
    PUSH EDI                            ; 00569f5f | g_CTerrainInstance
    CALL core_terrain.cpp_CTerrain_free_FUN_005e1f30 ; 00569f60
        ;   XREF to: 005e1f30 (UNCONDITIONAL_CALL)  ; void core_terrain.cpp_CTerrain_free_FUN_005e1f30(CTerrain * this_ptr)
    ADD ESP,0x4                         ; 00569f65
    MOV dword ptr [EBP + 0x15aca8],0x0  ; 00569f68
    JMP 0x00569766                      ; 00569f72
        ;   XREF to: 00569766 (UNCONDITIONAL_JUMP)  ; LAB_00569766
    PUSH 0x5                            ; 00569f77
        ;   Label: LAB_00569f77
    PUSH 0x6459e2                       ; 00569f79 | = "mauso"
    LEA EAX,[ESP + 0x108]               ; 00569f7e
    PUSH EAX                            ; 00569f85
    MOV dword ptr [EBP + 0x15aeb8],0x0  ; 00569f86
    CALL crt_string.c__strnicmp_FUN_005ff070 ; 00569f90
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00569f95
    TEST EAX,EAX                        ; 00569f98
    JNZ 0x00569fa6                      ; 00569f9a
        ;   XREF to: 00569fa6 (CONDITIONAL_JUMP)  ; LAB_00569fa6
    MOV dword ptr [EBP + 0x15aeb8],0x2  ; 00569f9c
    PUSH 0x4                            ; 00569fa6
        ;   Label: LAB_00569fa6
    PUSH 0x6459e8                       ; 00569fa8 | = "h109"
    LEA EAX,[ESP + 0x108]               ; 00569fad
    PUSH EAX                            ; 00569fb4
    CALL crt_string.c__strnicmp_FUN_005ff070 ; 00569fb5
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00569fba
    TEST EAX,EAX                        ; 00569fbd
    JNZ 0x00569fc7                      ; 00569fbf
        ;   XREF to: 00569fc7 (CONDITIONAL_JUMP)  ; LAB_00569fc7
    MOV dword ptr [EBP + 0x15aeb8],EAX  ; 00569fc1
    PUSH 0x5                            ; 00569fc7
        ;   Label: LAB_00569fc7
    PUSH 0x6459ed                       ; 00569fc9 | = "smill"
    LEA EAX,[ESP + 0x108]               ; 00569fce
    PUSH EAX                            ; 00569fd5
    CALL crt_string.c__strnicmp_FUN_005ff070 ; 00569fd6
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00569fdb
    TEST EAX,EAX                        ; 00569fde
    JNZ 0x00569fec                      ; 00569fe0
        ;   XREF to: 00569fec (CONDITIONAL_JUMP)  ; LAB_00569fec
    MOV dword ptr [EBP + 0x15aeb8],0x3  ; 00569fe2
    PUSH 0x6                            ; 00569fec
        ;   Label: LAB_00569fec
    PUSH 0x6459f3                       ; 00569fee | = "pier59"
    LEA EAX,[ESP + 0x108]               ; 00569ff3
    PUSH EAX                            ; 00569ffa
    CALL crt_string.c__strnicmp_FUN_005ff070 ; 00569ffb
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0056a000
    TEST EAX,EAX                        ; 0056a003
    JNZ 0x0056a00d                      ; 0056a005
        ;   XREF to: 0056a00d (CONDITIONAL_JUMP)  ; LAB_0056a00d
    MOV dword ptr [EBP + 0x15aeb8],EAX  ; 0056a007
    PUSH 0x4                            ; 0056a00d
        ;   Label: LAB_0056a00d
    PUSH 0x6459fa                       ; 0056a00f | = "ndun"
    LEA EAX,[ESP + 0x108]               ; 0056a014
    PUSH EAX                            ; 0056a01b
    CALL crt_string.c__strnicmp_FUN_005ff070 ; 0056a01c
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0056a021
    TEST EAX,EAX                        ; 0056a024
    JNZ 0x0056a032                      ; 0056a026
        ;   XREF to: 0056a032 (CONDITIONAL_JUMP)  ; LAB_0056a032
    MOV dword ptr [EBP + 0x15aeb8],0x3  ; 0056a028
    MOV dword ptr [EBP + 0x15aebc],0x0  ; 0056a032
        ;   Label: LAB_0056a032
    JMP 0x00569a00                      ; 0056a03c
        ;   XREF to: 00569a00 (UNCONDITIONAL_JUMP)  ; LAB_00569a00
    PUSH 0x5                            ; 0056a041
        ;   Label: LAB_0056a041
    PUSH 0x645a03                       ; 0056a043 | = "mauso"
    LEA EAX,[ESP + 0x108]               ; 0056a048
    PUSH EAX                            ; 0056a04f
    MOV dword ptr [EBP + 0x15f67c],0x2  ; 0056a050
    CALL crt_string.c__strnicmp_FUN_005ff070 ; 0056a05a
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0056a05f
    TEST EAX,EAX                        ; 0056a062
    JNZ 0x0056a070                      ; 0056a064
        ;   XREF to: 0056a070 (CONDITIONAL_JUMP)  ; LAB_0056a070
    MOV dword ptr [EBP + 0x15f67c],0x8  ; 0056a066
    PUSH 0x4                            ; 0056a070
        ;   Label: LAB_0056a070
    PUSH 0x645a09                       ; 0056a072 | = "h109"
    LEA EAX,[ESP + 0x108]               ; 0056a077
    PUSH EAX                            ; 0056a07e
    CALL crt_string.c__strnicmp_FUN_005ff070 ; 0056a07f
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0056a084
    TEST EAX,EAX                        ; 0056a087
    JNZ 0x0056a095                      ; 0056a089
        ;   XREF to: 0056a095 (CONDITIONAL_JUMP)  ; LAB_0056a095
    MOV dword ptr [EBP + 0x15f67c],0x3  ; 0056a08b
    PUSH 0x5                            ; 0056a095
        ;   Label: LAB_0056a095
    PUSH 0x645a0e                       ; 0056a097 | = "smill"
    LEA EAX,[ESP + 0x108]               ; 0056a09c
    PUSH EAX                            ; 0056a0a3
    CALL crt_string.c__strnicmp_FUN_005ff070 ; 0056a0a4
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0056a0a9
    TEST EAX,EAX                        ; 0056a0ac
    JNZ 0x0056a0ba                      ; 0056a0ae
        ;   XREF to: 0056a0ba (CONDITIONAL_JUMP)  ; LAB_0056a0ba
    MOV dword ptr [EBP + 0x15f67c],0x2  ; 0056a0b0
    PUSH 0x6                            ; 0056a0ba
        ;   Label: LAB_0056a0ba
    PUSH 0x645a14                       ; 0056a0bc | = "pier59"
    LEA EAX,[ESP + 0x108]               ; 0056a0c1
    PUSH EAX                            ; 0056a0c8
    CALL crt_string.c__strnicmp_FUN_005ff070 ; 0056a0c9
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0056a0ce
    TEST EAX,EAX                        ; 0056a0d1
    JNZ 0x0056a0df                      ; 0056a0d3
        ;   XREF to: 0056a0df (CONDITIONAL_JUMP)  ; LAB_0056a0df
    MOV dword ptr [EBP + 0x15f67c],0x7  ; 0056a0d5
    PUSH 0x6                            ; 0056a0df
        ;   Label: LAB_0056a0df
    PUSH 0x645a1b                       ; 0056a0e1 | = "castle"
    LEA EAX,[ESP + 0x108]               ; 0056a0e6
    PUSH EAX                            ; 0056a0ed
    CALL crt_string.c__strnicmp_FUN_005ff070 ; 0056a0ee
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0056a0f3
    TEST EAX,EAX                        ; 0056a0f6
    JNZ 0x0056a104                      ; 0056a0f8
        ;   XREF to: 0056a104 (CONDITIONAL_JUMP)  ; LAB_0056a104
    MOV dword ptr [EBP + 0x15f67c],0x2  ; 0056a0fa
    PUSH 0x4                            ; 0056a104
        ;   Label: LAB_0056a104
    PUSH 0x645a22                       ; 0056a106 | = "ndun"
    LEA EAX,[ESP + 0x108]               ; 0056a10b
    PUSH EAX                            ; 0056a112
    CALL crt_string.c__strnicmp_FUN_005ff070 ; 0056a113
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0056a118
    TEST EAX,EAX                        ; 0056a11b
    JNZ 0x00569a35                      ; 0056a11d
        ;   XREF to: 00569a35 (CONDITIONAL_JUMP)  ; LAB_00569a35
    MOV dword ptr [EBP + 0x15f67c],0x8  ; 0056a123
    JMP 0x00569a35                      ; 0056a12d
        ;   XREF to: 00569a35 (UNCONDITIONAL_JUMP)  ; LAB_00569a35
    MOV dword ptr [EBP + 0x15ac7c],0x0  ; 0056a132
        ;   Label: LAB_0056a132
    JMP 0x00569a6a                      ; 0056a13c
        ;   XREF to: 00569a6a (UNCONDITIONAL_JUMP)  ; LAB_00569a6a
    MOV dword ptr [EBP + 0x15b410],0x0  ; 0056a141
        ;   Label: LAB_0056a141
    JMP 0x00569c19                      ; 0056a14b
        ;   XREF to: 00569c19 (UNCONDITIONAL_JUMP)  ; LAB_00569c19
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 0056a150
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
        ;   Label: LAB_0056a150
    PUSH 0x0                            ; 0056a155
    PUSH 0x0                            ; 0056a157
    PUSH 0x645a8a                       ; 0056a159 | = "Warning!  No .GEO file.  Press any key"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0056a15e
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0056a163
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0056a166
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 0056a16b
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 0056a170
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    JMP 0x00569d40                      ; 0056a175
        ;   XREF to: 00569d40 (UNCONDITIONAL_JUMP)  ; LAB_00569d40
    PUSH EBP                            ; 0056a17a
        ;   Label: LAB_0056a17a
    CALL core_setcolid.cpp_CDemonSet_commitVoxelBuffer_FUN_00574560 ; 0056a17b
        ;   XREF to: 00574560 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_commitVoxelBuffer_FUN_00574560(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0056a180
    JMP 0x00569d45                      ; 0056a183
        ;   XREF to: 00569d45 (UNCONDITIONAL_JUMP)  ; LAB_00569d45

