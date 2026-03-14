; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setedit_cpp_CDemonSet_save_FUN_0057a2a0(CDemonSet *this_ptr,char *filename)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
; Local Variables:
; char[100]        Stack[-0xa0]:100  local_a0
; CVector3f        Stack[-0x3c]:12  local_3c
; CVector3f        Stack[-0x30]:12  local_30
; SVDBox *         Stack[-0x24]:4  local_24
; SRoom *          Stack[-0x20]:4  local_20
; CMatrix3x3f *    Stack[-0x1c]:4  local_1c
; CMatrix3x3f *    Stack[-0x18]:4  local_18
;
; XREF[4]:
;   core_setedit.cpp_CDemonSet_showCameraEditor_FUN_0057e7c0 at 0057ed41
;   core_setedit.cpp_CDemonSet_showEditorMenu_FUN_00584940 at 00584e61
;   core_setedit.cpp_CDemonSet_showFogEditor_FUN_00580730 at 00580e54
;   core_setedit.cpp_CDemonSet_showLightEditor_FUN_0057c5d0 at 0057cd6f
;
; Referenced Globals:
;   TerminatedCString s_wt_0064741d
;   TerminatedCString s_models_00647420
;   TerminatedCString s_core_setedit_cpp_00647427
;   TerminatedCString s_CDemonSet_Unable_to_save_0064743b
;   TerminatedCString s_d_0064745c
;   TerminatedCString s_f_00647460
;   TerminatedCString s_unused_act_00647464
;   TerminatedCString s_s_00647470
;   TerminatedCString s_f_00647474
;   TerminatedCString s_waterHeight_waterTileSiz_00647478
;   TerminatedCString s_f_f_00647493
;   TerminatedCString s_useEnviroModel_enviroMod_0064749a
;   TerminatedCString s_d_s_006474ba
;   TerminatedCString s_transparentWaterFlag_006474c1
;   TerminatedCString s_d_006474d7
;   ... and 41 more
;
; Called Functions:
;   core_dcamera.cpp_saveCameraFog_FUN_00453f10
;   core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_setdir.cpp_CDemonSet_saveThumbsNoFile_FUN_00575f60
;   core_setdir.cpp_CDemonSet_writeThumbs_FUN_00575e40
;   core_setutil.cpp_C3DSCamera_save_FUN_00585a40
;   core_setutil.cpp_C3DSCamera_savePVS_FUN_00587450
;   core_setutil.cpp_C3DSLight_save_FUN_00587090
;   crt_stdio.c_fprintf_FUN_005fe6d0
;   engine_dosio.c_getFile_FUN_00481a50
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057a2a0
        ;   Label: core_setedit.cpp_CDemonSet_save_FUN_0057a2a0
    PUSH ESI                            ; 0057a2a1
    PUSH EDI                            ; 0057a2a2
    PUSH EBP                            ; 0057a2a3
    MOV EBP,ESP                         ; 0057a2a4
    SUB ESP,0x8c                        ; 0057a2a6
    AND ESP,0xfffffff8                  ; 0057a2ac
    PUSH 0x64741d                       ; 0057a2af | = "wt"
    MOV EDX,dword ptr [EBP + 0x18]      ; 0057a2b4
    PUSH EDX                            ; 0057a2b7
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057a2b8
    PUSH 0x647420                       ; 0057a2bb | = "models"
    MOV dword ptr [EAX + 0x15acac],0x1c ; 0057a2c0
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 0057a2ca
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0057a2cf
    MOV ESI,EAX                         ; 0057a2d2
    TEST EAX,EAX                        ; 0057a2d4
    JZ 0x0057a8bc                       ; 0057a2d6
        ;   XREF to: 0057a8bc (CONDITIONAL_JUMP)  ; LAB_0057a8bc
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057a2dc
        ;   Label: LAB_0057a2dc
    MOV EDI,dword ptr [EAX + 0x15acac]  ; 0057a2df
    PUSH EDI                            ; 0057a2e5
    PUSH 0x64745c                       ; 0057a2e6 | = "%d\n"
    PUSH ESI                            ; 0057a2eb
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0057a2ec
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0057a2f1
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057a2f4
    SUB ESP,0x8                         ; 0057a2f7
    FLD float ptr [EAX + 0x15ae94]      ; 0057a2fa
    FSTP double ptr [ESP]               ; 0057a300
    PUSH 0x647460                       ; 0057a303 | = "%f\n"
    PUSH ESI                            ; 0057a308
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0057a309
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x10                        ; 0057a30e
    PUSH 0x647464                       ; 0057a311 | = "unused.act\n"
    PUSH ESI                            ; 0057a316
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0057a317
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 0057a31c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057a31f
    ADD EAX,0x14d0f0                    ; 0057a322
    PUSH EAX                            ; 0057a327
    PUSH 0x647470                       ; 0057a328 | = "%s\n"
    PUSH ESI                            ; 0057a32d
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0057a32e
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0057a333
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057a336
    SUB ESP,0x8                         ; 0057a339
    FLD float ptr [EAX + 0x14d150]      ; 0057a33c
    FSTP double ptr [ESP]               ; 0057a342
    PUSH 0x647474                       ; 0057a345 | = "%f\n"
    PUSH ESI                            ; 0057a34a
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0057a34b
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x10                        ; 0057a350
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057a353
    PUSH ESI                            ; 0057a356
    ADD EAX,0x15ac30                    ; 0057a357
    PUSH EAX                            ; 0057a35c
    CALL core_dcamera.cpp_saveCameraFog_FUN_00453f10 ; 0057a35d
        ;   XREF to: 00453f10 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_saveCameraFog_FUN_00453f10(SFog * fog, _FILE * file_handle)
    ADD ESP,0x8                         ; 0057a362
    PUSH 0x647478                       ; 0057a365 | = "waterHeight,waterTileSize\n"
    PUSH ESI                            ; 0057a36a
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0057a36b
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 0057a370
    MOV EAX,[0x006844f0]                ; 0057a373 | g_CWaterInstance | g_CWaterPtr
    SUB ESP,0x8                         ; 0057a378
    FLD float ptr [EAX + 0x8]           ; 0057a37b | DAT_03f875e8
    FSTP double ptr [ESP]               ; 0057a37e
    SUB ESP,0x8                         ; 0057a381
    FLD float ptr [EAX + 0x4]           ; 0057a384 | DAT_03f875e4
    FSTP double ptr [ESP]               ; 0057a387
    PUSH 0x647493                       ; 0057a38a | = "%f,%f\n"
    PUSH ESI                            ; 0057a38f
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0057a390
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x18                        ; 0057a395
    PUSH 0x64749a                       ; 0057a398 | = "useEnviroModel,enviroModelName\n"
    PUSH ESI                            ; 0057a39d
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0057a39e
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 0057a3a3
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057a3a6
    ADD EAX,0x15ac98                    ; 0057a3a9
    PUSH EAX                            ; 0057a3ae
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057a3af
    MOV EDX,dword ptr [EAX + 0x15ac94]  ; 0057a3b2
    PUSH EDX                            ; 0057a3b8
    PUSH 0x6474ba                       ; 0057a3b9 | = "%d,%s\n"
    PUSH ESI                            ; 0057a3be
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0057a3bf
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x10                        ; 0057a3c4
    PUSH 0x6474c1                       ; 0057a3c7 | = "transparentWaterFlag\n"
    PUSH ESI                            ; 0057a3cc
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0057a3cd
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    MOV EAX,[0x006844f0]                ; 0057a3d2 | g_CWaterInstance | g_CWaterPtr
    ADD ESP,0x8                         ; 0057a3d7
    MOV ECX,dword ptr [EAX]             ; 0057a3da | g_CWaterInstance
    PUSH ECX                            ; 0057a3dc
    PUSH 0x6474d7                       ; 0057a3dd | = "%d\n"
    PUSH ESI                            ; 0057a3e2
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0057a3e3
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0057a3e8
    PUSH 0x6474db                       ; 0057a3eb | = "hasSky\n"
    PUSH ESI                            ; 0057a3f0
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0057a3f1
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 0057a3f6
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057a3f9
    MOV EBX,dword ptr [EAX + 0x161628]  ; 0057a3fc
    PUSH EBX                            ; 0057a402
    PUSH 0x6474e3                       ; 0057a403 | = "%d\n"
    PUSH ESI                            ; 0057a408
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0057a409
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0057a40e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057a411
    CMP dword ptr [EAX + 0x161628],0x0  ; 0057a414
    JNZ 0x0057a8e4                      ; 0057a41b
        ;   XREF to: 0057a8e4 (CONDITIONAL_JUMP)  ; LAB_0057a8e4
    PUSH 0x6474e7                       ; 0057a421 | = "0,none\n"
    PUSH ESI                            ; 0057a426
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0057a427
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 0057a42c
    PUSH 0x6474f6                       ; 0057a42f | = "useWorldGeometryFlag,worldGeometryName\n"
        ;   Label: LAB_0057a42f
    PUSH ESI                            ; 0057a434
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0057a435
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 0057a43a
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057a43d
    CMP dword ptr [EAX + 0x15ae4c],0x0  ; 0057a440
    JZ 0x0057a907                       ; 0057a447
        ;   XREF to: 0057a907 (CONDITIONAL_JUMP)  ; LAB_0057a907
    ADD EAX,0x15ae50                    ; 0057a44d
    PUSH EAX                            ; 0057a452
    PUSH 0x64751e                       ; 0057a453 | = "1,%s\n"
    PUSH ESI                            ; 0057a458
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0057a459
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0057a45e
    PUSH 0x64752c                       ; 0057a461 | = "weatherType\n"
        ;   Label: LAB_0057a461
    PUSH ESI                            ; 0057a466
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0057a467
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 0057a46c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057a46f
    MOV EBX,dword ptr [EAX + 0x161668]  ; 0057a472
    PUSH EBX                            ; 0057a478
    PUSH 0x647539                       ; 0057a479 | = "%d\n"
    PUSH ESI                            ; 0057a47e
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0057a47f
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0057a484
    PUSH 0x64753d                       ; 0057a487 | = "lightCount\n"
    PUSH ESI                            ; 0057a48c
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0057a48d
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 0057a492
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057a495
    MOV EDI,dword ptr [EAX + 0x19a2c]   ; 0057a498
    PUSH EDI                            ; 0057a49e
    PUSH 0x647549                       ; 0057a49f | = "%d\n"
    PUSH ESI                            ; 0057a4a4
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0057a4a5
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0057a4aa
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057a4ad
    MOV EDX,dword ptr [EAX + 0x19a2c]   ; 0057a4b0
    XOR EDI,EDI                         ; 0057a4b6
    TEST EDX,EDX                        ; 0057a4b8
    JLE 0x0057a4e0                      ; 0057a4ba
        ;   XREF to: 0057a4e0 (CONDITIONAL_JUMP)  ; LAB_0057a4e0
    LEA EBX,[EAX + 0x19a30]             ; 0057a4bc
    PUSH ESI                            ; 0057a4c2
        ;   Label: LAB_0057a4c2
    PUSH EBX                            ; 0057a4c3
    CALL core_setutil.cpp_C3DSLight_save_FUN_00587090 ; 0057a4c4
        ;   XREF to: 00587090 (UNCONDITIONAL_CALL)  ; void core_setutil.cpp_C3DSLight_save_FUN_00587090(C3DSLight * this_ptr, _FILE * file_ptr)
    ADD ESP,0x8                         ; 0057a4c9
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057a4cc
    INC EDI                             ; 0057a4cf
    MOV ECX,dword ptr [EAX + 0x19a2c]   ; 0057a4d0
    ADD EBX,0x1898                      ; 0057a4d6
    CMP EDI,ECX                         ; 0057a4dc
    JL 0x0057a4c2                       ; 0057a4de
        ;   XREF to: 0057a4c2 (CONDITIONAL_JUMP)  ; LAB_0057a4c2
    PUSH 0x64754d                       ; 0057a4e0 | = "cameraCount\n"
        ;   Label: LAB_0057a4e0
    PUSH ESI                            ; 0057a4e5
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0057a4e6
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 0057a4eb
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057a4ee
    MOV EBX,dword ptr [EAX]             ; 0057a4f1
    PUSH EBX                            ; 0057a4f3
    PUSH 0x64755a                       ; 0057a4f4 | = "%d\n"
    PUSH ESI                            ; 0057a4f9
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0057a4fa
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0057a4ff
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057a502
    MOV EDI,dword ptr [EAX]             ; 0057a505
    XOR EBX,EBX                         ; 0057a507
    TEST EDI,EDI                        ; 0057a509
    JLE 0x0057a530                      ; 0057a50b
        ;   XREF to: 0057a530 (CONDITIONAL_JUMP)  ; LAB_0057a530
    LEA EDI,[EAX + 0x4]                 ; 0057a50d
    PUSH ESI                            ; 0057a510
        ;   Label: LAB_0057a510
    PUSH EDI                            ; 0057a511
    CALL core_setutil.cpp_C3DSCamera_save_FUN_00585a40 ; 0057a512
        ;   XREF to: 00585a40 (UNCONDITIONAL_CALL)  ; void core_setutil.cpp_C3DSCamera_save_FUN_00585a40(C3DSCamera * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 0057a517
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057a51a
    INC EBX                             ; 0057a51d
    MOV EDX,dword ptr [EAX]             ; 0057a51e
    ADD EDI,0x1a4                       ; 0057a520
    CMP EBX,EDX                         ; 0057a526
    JL 0x0057a510                       ; 0057a528
        ;   XREF to: 0057a510 (CONDITIONAL_JUMP)  ; LAB_0057a510
    LEA EAX,[EAX]                       ; 0057a52a
    PUSH 0x64755e                       ; 0057a530 | = "Room size info\n"
        ;   Label: LAB_0057a530
    PUSH ESI                            ; 0057a535
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0057a536
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 0057a53b
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057a53e
    MOV ECX,dword ptr [EAX + 0x15aeb8]  ; 0057a541
    PUSH ECX                            ; 0057a547
    PUSH 0x64756e                       ; 0057a548 | = "%d\n"
    PUSH ESI                            ; 0057a54d
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0057a54e
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0057a553
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057a556
    MOV EBX,dword ptr [EAX + 0x15aebc]  ; 0057a559
    PUSH EBX                            ; 0057a55f
    PUSH 0x647572                       ; 0057a560 | = "%d\n"
    PUSH ESI                            ; 0057a565
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0057a566
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0057a56b
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057a56e
    MOV EDX,dword ptr [EAX + 0x15aebc]  ; 0057a571
    XOR EDI,EDI                         ; 0057a577
    TEST EDX,EDX                        ; 0057a579
    JLE 0x0057a680                      ; 0057a57b
        ;   XREF to: 0057a680 (CONDITIONAL_JUMP)  ; LAB_0057a680
    ADD EAX,0x15aec0                    ; 0057a581
    MOV dword ptr [ESP + 0x80],EAX      ; 0057a586
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057a58d
    ADD EAX,0x15aed8                    ; 0057a590
    MOV dword ptr [ESP + 0x88],EAX      ; 0057a595
    IMUL EBX,EDI,0x44                   ; 0057a59c
        ;   Label: LAB_0057a59c
    ADD EBX,dword ptr [ESP + 0x80]      ; 0057a59f
    SUB ESP,0x8                         ; 0057a5a6
    FLD float ptr [EBX + 0x8]           ; 0057a5a9
    FSTP double ptr [ESP]               ; 0057a5ac
    SUB ESP,0x8                         ; 0057a5af
    FLD float ptr [EBX + 0x4]           ; 0057a5b2
    FSTP double ptr [ESP]               ; 0057a5b5
    SUB ESP,0x8                         ; 0057a5b8
    FLD float ptr [EBX]                 ; 0057a5bb
    FSTP double ptr [ESP]               ; 0057a5bd
    PUSH 0x647576                       ; 0057a5c0 | = "%g,%g,%g\n"
    PUSH ESI                            ; 0057a5c5
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0057a5c6
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x20                        ; 0057a5cb
    SUB ESP,0x8                         ; 0057a5ce
    FLD float ptr [EBX + 0x14]          ; 0057a5d1
    FSTP double ptr [ESP]               ; 0057a5d4
    SUB ESP,0x8                         ; 0057a5d7
    FLD float ptr [EBX + 0x10]          ; 0057a5da
    FSTP double ptr [ESP]               ; 0057a5dd
    SUB ESP,0x8                         ; 0057a5e0
    FLD float ptr [EBX + 0xc]           ; 0057a5e3
    FSTP double ptr [ESP]               ; 0057a5e6
    PUSH 0x647580                       ; 0057a5e9 | = "%g,%g,%g\n"
    PUSH ESI                            ; 0057a5ee
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0057a5ef
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x20                        ; 0057a5f4
    LEA EAX,[ESP + 0x70]                ; 0057a5f7
    PUSH EAX                            ; 0057a5fb
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0057a5fc
    PUSH EAX                            ; 0057a603
    CALL core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160 ; 0057a604
        ;   XREF to: 00472160 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 0057a609
    FLD float ptr [ESP + 0x74]          ; 0057a60c
    SUB ESP,0x8                         ; 0057a610
    FSTP double ptr [ESP]               ; 0057a613
    FLD float ptr [ESP + 0x80]          ; 0057a616
    SUB ESP,0x8                         ; 0057a61d
    FSTP double ptr [ESP]               ; 0057a620
    FLD float ptr [ESP + 0x80]          ; 0057a623
    SUB ESP,0x8                         ; 0057a62a
    FSTP double ptr [ESP]               ; 0057a62d
    PUSH 0x64758a                       ; 0057a630 | = "%g,%g,%g\n"
    PUSH ESI                            ; 0057a635
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0057a636
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x20                        ; 0057a63b
    MOV EDX,dword ptr [EBX + 0x40]      ; 0057a63e
    PUSH EDX                            ; 0057a641
    PUSH 0x647594                       ; 0057a642 | = "%d\n"
    PUSH ESI                            ; 0057a647
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0057a648
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0057a64d
    MOV ECX,dword ptr [ESP + 0x88]      ; 0057a650
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057a657
    INC EDI                             ; 0057a65a
    ADD ECX,0x44                        ; 0057a65b
    MOV EBX,dword ptr [EAX + 0x15aebc]  ; 0057a65e
    MOV dword ptr [ESP + 0x88],ECX      ; 0057a664
    CMP EDI,EBX                         ; 0057a66b
    JL 0x0057a59c                       ; 0057a66d
        ;   XREF to: 0057a59c (CONDITIONAL_JUMP)  ; LAB_0057a59c
    LEA EAX,[EAX]                       ; 0057a673
    LEA EDX,[EDX]                       ; 0057a679
    NOP                                 ; 0057a67f
    PUSH 0x647598                       ; 0057a680 | = "Default ground type\n"
        ;   Label: LAB_0057a680
    PUSH ESI                            ; 0057a685
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0057a686
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 0057a68b
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057a68e
    MOV EDI,dword ptr [EAX + 0x15f67c]  ; 0057a691
    PUSH EDI                            ; 0057a697
    PUSH 0x6475ad                       ; 0057a698 | = "%d\n"
    PUSH ESI                            ; 0057a69d
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0057a69e
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0057a6a3
    PUSH 0x6475b1                       ; 0057a6a6 | = "Default master reverb\n"
    PUSH ESI                            ; 0057a6ab
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0057a6ac
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 0057a6b1
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057a6b4
    MOV EDX,dword ptr [EAX + 0x15ac7c]  ; 0057a6b7
    PUSH EDX                            ; 0057a6bd
    PUSH 0x6475c8                       ; 0057a6be | = "%d\n"
    PUSH ESI                            ; 0057a6c3
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0057a6c4
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0057a6c9
    PUSH 0x6475cc                       ; 0057a6cc | = "Virtual director boxes\n"
    PUSH ESI                            ; 0057a6d1
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0057a6d2
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 0057a6d7
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057a6da
    MOV ECX,dword ptr [EAX + 0x15b410]  ; 0057a6dd
    PUSH ECX                            ; 0057a6e3
    PUSH 0x6475e4                       ; 0057a6e4 | = "%d\n"
    PUSH ESI                            ; 0057a6e9
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0057a6ea
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0057a6ef
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057a6f2
    MOV EBX,dword ptr [EAX + 0x15b410]  ; 0057a6f5
    XOR EDI,EDI                         ; 0057a6fb
    TEST EBX,EBX                        ; 0057a6fd
    JLE 0x0057a7e0                      ; 0057a6ff
        ;   XREF to: 0057a7e0 (CONDITIONAL_JUMP)  ; LAB_0057a7e0
    ADD EAX,0x15b414                    ; 0057a705
    MOV dword ptr [ESP + 0x7c],EAX      ; 0057a70a
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057a70e
    ADD EAX,0x15b42c                    ; 0057a711
    MOV dword ptr [ESP + 0x84],EAX      ; 0057a716
    IMUL EBX,EDI,0x44                   ; 0057a71d
        ;   Label: LAB_0057a71d
    ADD EBX,dword ptr [ESP + 0x7c]      ; 0057a720
    SUB ESP,0x8                         ; 0057a724
    FLD float ptr [EBX + 0x8]           ; 0057a727
    FSTP double ptr [ESP]               ; 0057a72a
    SUB ESP,0x8                         ; 0057a72d
    FLD float ptr [EBX + 0x4]           ; 0057a730
    FSTP double ptr [ESP]               ; 0057a733
    SUB ESP,0x8                         ; 0057a736
    FLD float ptr [EBX]                 ; 0057a739
    FSTP double ptr [ESP]               ; 0057a73b
    PUSH 0x6475e8                       ; 0057a73e | = "%g,%g,%g\n"
    PUSH ESI                            ; 0057a743
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0057a744
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x20                        ; 0057a749
    SUB ESP,0x8                         ; 0057a74c
    FLD float ptr [EBX + 0x14]          ; 0057a74f
    FSTP double ptr [ESP]               ; 0057a752
    SUB ESP,0x8                         ; 0057a755
    FLD float ptr [EBX + 0x10]          ; 0057a758
    FSTP double ptr [ESP]               ; 0057a75b
    SUB ESP,0x8                         ; 0057a75e
    FLD float ptr [EBX + 0xc]           ; 0057a761
    FSTP double ptr [ESP]               ; 0057a764
    PUSH 0x6475f2                       ; 0057a767 | = "%g,%g,%g\n"
    PUSH ESI                            ; 0057a76c
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0057a76d
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x20                        ; 0057a772
    LEA EAX,[ESP + 0x64]                ; 0057a775
    PUSH EAX                            ; 0057a779
    MOV EDX,dword ptr [ESP + 0x88]      ; 0057a77a
    PUSH EDX                            ; 0057a781
    CALL core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160 ; 0057a782
        ;   XREF to: 00472160 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 0057a787
    FLD float ptr [ESP + 0x68]          ; 0057a78a
    SUB ESP,0x8                         ; 0057a78e
    FSTP double ptr [ESP]               ; 0057a791
    FLD float ptr [ESP + 0x74]          ; 0057a794
    SUB ESP,0x8                         ; 0057a798
    FSTP double ptr [ESP]               ; 0057a79b
    FLD float ptr [ESP + 0x74]          ; 0057a79e
    SUB ESP,0x8                         ; 0057a7a2
    FSTP double ptr [ESP]               ; 0057a7a5
    PUSH 0x6475fc                       ; 0057a7a8 | = "%g,%g,%g\n"
    PUSH ESI                            ; 0057a7ad
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0057a7ae
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x20                        ; 0057a7b3
    MOV ECX,dword ptr [ESP + 0x84]      ; 0057a7b6
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057a7bd
    INC EDI                             ; 0057a7c0
    ADD ECX,0x44                        ; 0057a7c1
    MOV EBX,dword ptr [EAX + 0x15b410]  ; 0057a7c4
    MOV dword ptr [ESP + 0x84],ECX      ; 0057a7ca
    CMP EDI,EBX                         ; 0057a7d1
    JL 0x0057a71d                       ; 0057a7d3
        ;   XREF to: 0057a71d (CONDITIONAL_JUMP)  ; LAB_0057a71d
    LEA EAX,[EAX]                       ; 0057a7d9
    NOP                                 ; 0057a7df
    PUSH 0x647606                       ; 0057a7e0 | = "PVS list\n"
        ;   Label: LAB_0057a7e0
    PUSH ESI                            ; 0057a7e5
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0057a7e6
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 0057a7eb
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057a7ee
    MOV EDX,dword ptr [EAX]             ; 0057a7f1
    XOR EDI,EDI                         ; 0057a7f3
    TEST EDX,EDX                        ; 0057a7f5
    JLE 0x0057a820                      ; 0057a7f7
        ;   XREF to: 0057a820 (CONDITIONAL_JUMP)  ; LAB_0057a820
    LEA EBX,[EAX + 0x4]                 ; 0057a7f9
    PUSH ESI                            ; 0057a7fc
        ;   Label: LAB_0057a7fc
    PUSH EBX                            ; 0057a7fd
    CALL core_setutil.cpp_C3DSCamera_savePVS_FUN_00587450 ; 0057a7fe
        ;   XREF to: 00587450 (UNCONDITIONAL_CALL)  ; int core_setutil.cpp_C3DSCamera_savePVS_FUN_00587450(C3DSCamera * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 0057a803
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057a806
    INC EDI                             ; 0057a809
    MOV ECX,dword ptr [EAX]             ; 0057a80a
    ADD EBX,0x1a4                       ; 0057a80c
    CMP EDI,ECX                         ; 0057a812
    JL 0x0057a7fc                       ; 0057a814
        ;   XREF to: 0057a7fc (CONDITIONAL_JUMP)  ; LAB_0057a7fc
    LEA EAX,[EAX]                       ; 0057a816
    LEA EDX,[EDX]                       ; 0057a81c
    PUSH 0x74d                          ; 0057a820
        ;   Label: LAB_0057a820
    PUSH 0x647610                       ; 0057a825 | = "..\\core\\setedit.cpp"
    PUSH ESI                            ; 0057a82a
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0057a82b
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 0057a830
    MOV ESI,dword ptr [EBP + 0x14]      ; 0057a833
    MOV EDI,ESP                         ; 0057a836
    ADD ESI,0x14d0f0                    ; 0057a838
    MOV DL,0x2e                         ; 0057a83e
    PUSH EDI                            ; 0057a840
    MOV AL,byte ptr [ESI]               ; 0057a841
        ;   Label: LAB_0057a841
    MOV byte ptr [EDI],AL               ; 0057a843
    CMP AL,0x0                          ; 0057a845
    JZ 0x0057a859                       ; 0057a847
        ;   XREF to: 0057a859 (CONDITIONAL_JUMP)  ; LAB_0057a859
    MOV AL,byte ptr [ESI + 0x1]         ; 0057a849
    ADD ESI,0x2                         ; 0057a84c
    MOV byte ptr [EDI + 0x1],AL         ; 0057a84f
    ADD EDI,0x2                         ; 0057a852
    CMP AL,0x0                          ; 0057a855
    JNZ 0x0057a841                      ; 0057a857
        ;   XREF to: 0057a841 (CONDITIONAL_JUMP)  ; LAB_0057a841
    POP EDI                             ; 0057a859
        ;   Label: LAB_0057a859
    MOV ESI,ESP                         ; 0057a85a
    MOV AL,byte ptr [ESI]               ; 0057a85c
        ;   Label: LAB_0057a85c
    CMP AL,DL                           ; 0057a85e
    JZ 0x0057a874                       ; 0057a860
        ;   XREF to: 0057a874 (CONDITIONAL_JUMP)  ; LAB_0057a874
    CMP AL,0x0                          ; 0057a862
    JZ 0x0057a872                       ; 0057a864
        ;   XREF to: 0057a872 (CONDITIONAL_JUMP)  ; LAB_0057a872
    INC ESI                             ; 0057a866
    MOV AL,byte ptr [ESI]               ; 0057a867
    CMP AL,DL                           ; 0057a869
    JZ 0x0057a874                       ; 0057a86b
        ;   XREF to: 0057a874 (CONDITIONAL_JUMP)  ; LAB_0057a874
    INC ESI                             ; 0057a86d
    CMP AL,0x0                          ; 0057a86e
    JNZ 0x0057a85c                      ; 0057a870
        ;   XREF to: 0057a85c (CONDITIONAL_JUMP)  ; LAB_0057a85c
    SUB ESI,ESI                         ; 0057a872
        ;   Label: LAB_0057a872
    MOV EDI,ESI                         ; 0057a874
        ;   Label: LAB_0057a874
    TEST ESI,ESI                        ; 0057a876
    JZ 0x0057a91a                       ; 0057a878
        ;   XREF to: 0057a91a (CONDITIONAL_JUMP)  ; LAB_0057a91a
    MOV ESI,0x647624                    ; 0057a87e | = ".zth"
        ;   Label: LAB_0057a87e
    MOV EBX,dword ptr [EBP + 0x14]      ; 0057a883
    PUSH EDI                            ; 0057a886
    MOV AL,byte ptr [ESI]               ; 0057a887 | = ".zth" | DAT_00647626
        ;   Label: LAB_0057a887
    MOV byte ptr [EDI],AL               ; 0057a889
    CMP AL,0x0                          ; 0057a88b
    JZ 0x0057a89f                       ; 0057a88d
        ;   XREF to: 0057a89f (CONDITIONAL_JUMP)  ; LAB_0057a89f
    MOV AL,byte ptr [ESI + 0x1]         ; 0057a88f | DAT_00647625 | DAT_00647627
    ADD ESI,0x2                         ; 0057a892
    MOV byte ptr [EDI + 0x1],AL         ; 0057a895
    ADD EDI,0x2                         ; 0057a898
    CMP AL,0x0                          ; 0057a89b
    JNZ 0x0057a887                      ; 0057a89d
        ;   XREF to: 0057a887 (CONDITIONAL_JUMP)  ; LAB_0057a887
    POP EDI                             ; 0057a89f
        ;   Label: LAB_0057a89f
    PUSH EBX                            ; 0057a8a0
    CALL core_setdir.cpp_CDemonSet_saveThumbsNoFile_FUN_00575f60 ; 0057a8a1
        ;   XREF to: 00575f60 (UNCONDITIONAL_CALL)  ; void core_setdir.cpp_CDemonSet_saveThumbsNoFile_FUN_00575f60(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0057a8a6
    MOV EAX,ESP                         ; 0057a8a9
    PUSH EAX                            ; 0057a8ab
    PUSH EBX                            ; 0057a8ac
    CALL core_setdir.cpp_CDemonSet_writeThumbs_FUN_00575e40 ; 0057a8ad
        ;   XREF to: 00575e40 (UNCONDITIONAL_CALL)  ; void core_setdir.cpp_CDemonSet_writeThumbs_FUN_00575e40(CDemonSet * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0057a8b2
    MOV ESP,EBP                         ; 0057a8b5
    POP EBP                             ; 0057a8b7
    POP EDI                             ; 0057a8b8
    POP ESI                             ; 0057a8b9
    POP EBX                             ; 0057a8ba
    RET                                 ; 0057a8bb
    MOV ECX,0x647427                    ; 0057a8bc | = "..\\core\\setedit.cpp"
        ;   Label: LAB_0057a8bc
    MOV EBX,0x6d6                       ; 0057a8c1
    PUSH 0x64743b                       ; 0057a8c6 | = "CDemonSet::Unable to save output"
    MOV dword ptr [0x02f0ca48],ECX      ; 0057a8cb | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 0057a8d1 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0057a8d7
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0057a8dc
    JMP 0x0057a2dc                      ; 0057a8df
        ;   XREF to: 0057a2dc (UNCONDITIONAL_JUMP)  ; LAB_0057a2dc
    ADD EAX,0x16162c                    ; 0057a8e4
        ;   Label: LAB_0057a8e4
    PUSH EAX                            ; 0057a8e9
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057a8ea
    MOV EDX,dword ptr [EAX + 0x16164c]  ; 0057a8ed
    PUSH EDX                            ; 0057a8f3
    PUSH 0x6474ef                       ; 0057a8f4 | = "%d,%s\n"
    PUSH ESI                            ; 0057a8f9
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0057a8fa
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x10                        ; 0057a8ff
    JMP 0x0057a42f                      ; 0057a902
        ;   XREF to: 0057a42f (UNCONDITIONAL_JUMP)  ; LAB_0057a42f
    PUSH 0x647524                       ; 0057a907 | = "0,none\n"
        ;   Label: LAB_0057a907
    PUSH ESI                            ; 0057a90c
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0057a90d
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 0057a912
    JMP 0x0057a461                      ; 0057a915
        ;   XREF to: 0057a461 (UNCONDITIONAL_JUMP)  ; LAB_0057a461
    MOV ESI,ESP                         ; 0057a91a
        ;   Label: LAB_0057a91a
    XOR DL,DL                           ; 0057a91c
    MOV AL,byte ptr [ESI]               ; 0057a91e
        ;   Label: LAB_0057a91e
    CMP AL,DL                           ; 0057a920
    JZ 0x0057a936                       ; 0057a922
        ;   XREF to: 0057a936 (CONDITIONAL_JUMP)  ; LAB_0057a936
    CMP AL,0x0                          ; 0057a924
    JZ 0x0057a934                       ; 0057a926
        ;   XREF to: 0057a934 (CONDITIONAL_JUMP)  ; LAB_0057a934
    INC ESI                             ; 0057a928
    MOV AL,byte ptr [ESI]               ; 0057a929
    CMP AL,DL                           ; 0057a92b
    JZ 0x0057a936                       ; 0057a92d
        ;   XREF to: 0057a936 (CONDITIONAL_JUMP)  ; LAB_0057a936
    INC ESI                             ; 0057a92f
    CMP AL,0x0                          ; 0057a930
    JNZ 0x0057a91e                      ; 0057a932
        ;   XREF to: 0057a91e (CONDITIONAL_JUMP)  ; LAB_0057a91e
    SUB ESI,ESI                         ; 0057a934
        ;   Label: LAB_0057a934
    MOV EDI,ESI                         ; 0057a936
        ;   Label: LAB_0057a936
    JMP 0x0057a87e                      ; 0057a938
        ;   XREF to: 0057a87e (UNCONDITIONAL_JUMP)  ; LAB_0057a87e

