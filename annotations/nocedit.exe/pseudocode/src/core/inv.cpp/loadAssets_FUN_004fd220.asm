; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_inv_cpp_loadAssets_FUN_004fd220(void)
;
;
; XREF[3]:
;   core_game.cpp_CGame_loadAssets_FUN_004e07a0 at 004e07ce
;   core_inv.cpp_CInventory_renderAllItems_FUN_00500690 at 00500ff3
;   core_inv.cpp_CInventory_renderSelectedItems_FUN_00500370 at 005005f1
;
; Referenced Globals:
;   TerminatedCString s_rt_006303e2
;   TerminatedCString s_invsize_txt_006303e5
;   TerminatedCString s_data_006303f1
;   TerminatedCString s_d_d_006303f6
;   TerminatedCString s_core_inv_cpp_006303fd
;   TerminatedCString s_invback_0063040d
;   TerminatedCString s_invback2_00630415
;   TerminatedCString s_weapback_0063041e
;   TerminatedCString s_weapback2_00630427
;   TerminatedCString s_battery_00630431
;   TerminatedCString s_hbar1_00630439
;   TerminatedCString s_hbar2_0063043f
;   TerminatedCString s_tommyclip24x24_00630445
;   TerminatedCString s_bullet24x24_00630454
;   TerminatedCString s_lithium24x24_00630460
;   ... and 32 more
;
; Called Functions:
;   core_inv.cpp_loadItem_FUN_004fcfe0
;   crt_stdio.c_fscanf_FUN_005fe7c0
;   engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0
;   engine_alphabit.cpp_CAlphaBitmap_scale_FUN_00410c20
;   engine_dosio.cpp_getFile_FUN_00481a50
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fd220
        ;   Label: core_inv.cpp_loadAssets_FUN_004fd220
    PUSH EBP                            ; 004fd221
    PUSH 0x6303e2                       ; 004fd222 | = "rt"
    PUSH 0x6303e5                       ; 004fd227 | = "invsize.txt"
    MOV EAX,[0x00679398]                ; 004fd22c | g_WindowHeight
    PUSH 0x6303f1                       ; 004fd231 | = "data"
    MOV [0x02dcd790],EAX                ; 004fd236 | g_InventoryScreenHeight
    CALL engine_dosio.cpp_getFile_FUN_00481a50 ; 004fd23b
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    MOV EBX,EAX                         ; 004fd240
    ADD ESP,0xc                         ; 004fd242
    TEST EAX,EAX                        ; 004fd245
    JNZ 0x004fd4bd                      ; 004fd247
        ;   XREF to: 004fd4bd (CONDITIONAL_JUMP)  ; LAB_004fd4bd
    PUSH EDI                            ; 004fd24d
        ;   Label: LAB_004fd24d
    MOV EDX,dword ptr [0x0067ce44]      ; 004fd24e | g_InventoryHeight
    PUSH EDX                            ; 004fd254
    MOV ECX,dword ptr [0x0067ce40]      ; 004fd255 | g_InventoryWidth
    PUSH ECX                            ; 004fd25b
    PUSH 0x63040d                       ; 004fd25c | = "invback"
    PUSH 0x2dbaa70                      ; 004fd261 | g_InvBackgroundBitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0 ; 004fd266
        ;   XREF to: 004105d0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004fd26b
    MOV EBX,dword ptr [0x0067ce44]      ; 004fd26e | g_InventoryHeight
    PUSH EBX                            ; 004fd274
    PUSH EBX                            ; 004fd275
    PUSH 0x630415                       ; 004fd276 | = "invback2"
    PUSH 0x2dbaa84                      ; 004fd27b | g_InvBackground2Bitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0 ; 004fd280
        ;   XREF to: 004105d0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004fd285
    MOV EDI,dword ptr [0x0067ce44]      ; 004fd288 | g_InventoryHeight
    PUSH EDI                            ; 004fd28e
    MOV EBP,dword ptr [0x0067ce40]      ; 004fd28f | g_InventoryWidth
    PUSH EBP                            ; 004fd295
    PUSH 0x63041e                       ; 004fd296 | = "weapback"
    PUSH 0x2dbaa98                      ; 004fd29b | g_WeapBackgroundBitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0 ; 004fd2a0
        ;   XREF to: 004105d0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004fd2a5
    MOV EAX,[0x0067ce44]                ; 004fd2a8 | g_InventoryHeight
    PUSH EAX                            ; 004fd2ad
    PUSH EAX                            ; 004fd2ae
    PUSH 0x630427                       ; 004fd2af | = "weapback2"
    PUSH 0x2dbaaac                      ; 004fd2b4 | g_WeapBackground2Bitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0 ; 004fd2b9
        ;   XREF to: 004105d0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004fd2be
    PUSH 0x20                           ; 004fd2c1
    PUSH 0x10                           ; 004fd2c3
    PUSH 0x630431                       ; 004fd2c5 | = "battery"
    PUSH 0x2dcd6c8                      ; 004fd2ca | g_BatteryIconBitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0 ; 004fd2cf
        ;   XREF to: 004105d0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004fd2d4
    PUSH 0x40                           ; 004fd2d7
    PUSH 0x1b                           ; 004fd2d9
    PUSH 0x630439                       ; 004fd2db | = "hbar1"
    PUSH 0x2dcd6dc                      ; 004fd2e0 | g_HealthBar1Bitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0 ; 004fd2e5
        ;   XREF to: 004105d0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004fd2ea
    PUSH 0x40                           ; 004fd2ed
    PUSH 0x1b                           ; 004fd2ef
    PUSH 0x63043f                       ; 004fd2f1 | = "hbar2"
    PUSH 0x2dcd6f0                      ; 004fd2f6 | g_HealthBar2Bitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0 ; 004fd2fb
        ;   XREF to: 004105d0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004fd300
    PUSH 0x18                           ; 004fd303
    PUSH 0x18                           ; 004fd305
    PUSH 0x630445                       ; 004fd307 | = "tommyclip24x24"
    PUSH 0x2dcd704                      ; 004fd30c | g_TommyClipIconBitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0 ; 004fd311
        ;   XREF to: 004105d0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004fd316
    PUSH 0x18                           ; 004fd319
    PUSH 0x18                           ; 004fd31b
    PUSH 0x630454                       ; 004fd31d | = "bullet24x24"
    PUSH 0x2dcd718                      ; 004fd322 | g_BulletIconBitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0 ; 004fd327
        ;   XREF to: 004105d0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004fd32c
    PUSH 0x18                           ; 004fd32f
    PUSH 0x18                           ; 004fd331
    PUSH 0x630460                       ; 004fd333 | = "lithium24x24"
    PUSH 0x2dcd72c                      ; 004fd338 | g_LithiumIconBitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0 ; 004fd33d
        ;   XREF to: 004105d0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004fd342
    POP EDI                             ; 004fd345
    PUSH 0x18                           ; 004fd346
    PUSH 0x18                           ; 004fd348
    PUSH 0x63046d                       ; 004fd34a | = "mercurybullet24x24"
    PUSH 0x2dcd740                      ; 004fd34f | g_MercuryBulletIconBitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0 ; 004fd354
        ;   XREF to: 004105d0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004fd359
    PUSH 0x18                           ; 004fd35c
    PUSH 0x18                           ; 004fd35e
    PUSH 0x630480                       ; 004fd360 | = "shotshell24x24"
    PUSH 0x2dcd754                      ; 004fd365 | g_ShotShellIconBitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0 ; 004fd36a
        ;   XREF to: 004105d0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004fd36f
    PUSH 0x18                           ; 004fd372
    PUSH 0x18                           ; 004fd374
    PUSH 0x63048f                       ; 004fd376 | = "silverbullet24x24"
    PUSH 0x2dcd768                      ; 004fd37b | g_SilverBulletIconBitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0 ; 004fd380
        ;   XREF to: 004105d0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004fd385
    PUSH 0x18                           ; 004fd388
    PUSH 0x18                           ; 004fd38a
    PUSH 0x6304a1                       ; 004fd38c | = "holybullet24x24"
    PUSH 0x2dcd77c                      ; 004fd391 | g_HolyBulletIconBitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0 ; 004fd396
        ;   XREF to: 004105d0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    MOV EAX,[0x0067b654]                ; 004fd39b | g_CGameInstance | g_CGamePtr
    MOV ECX,dword ptr [EAX + 0x4]       ; 004fd3a0 | g_CGameInstance.game_pixy
    ADD ESP,0x10                        ; 004fd3a3
    CMP ECX,0x180                       ; 004fd3a6
    JGE 0x004fd46d                      ; 004fd3ac
        ;   XREF to: 004fd46d (CONDITIONAL_JUMP)  ; LAB_004fd46d
    PUSH 0x2                            ; 004fd3b2
    PUSH 0x2                            ; 004fd3b4
    PUSH 0x2dbaa84                      ; 004fd3b6 | g_InvBackground2Bitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_scale_FUN_00410c20 ; 004fd3bb
        ;   XREF to: 00410c20 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_scale_FUN_00410c20(CAlphaBitmap * this_ptr, int scaleFactorX, int scaleFactorY)
    ADD ESP,0xc                         ; 004fd3c0
    PUSH 0x2                            ; 004fd3c3
    PUSH 0x2                            ; 004fd3c5
    PUSH 0x2dbaaac                      ; 004fd3c7 | g_WeapBackground2Bitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_scale_FUN_00410c20 ; 004fd3cc
        ;   XREF to: 00410c20 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_scale_FUN_00410c20(CAlphaBitmap * this_ptr, int scaleFactorX, int scaleFactorY)
    ADD ESP,0xc                         ; 004fd3d1
    PUSH 0x2                            ; 004fd3d4
    PUSH 0x2                            ; 004fd3d6
    PUSH 0x2dcd6dc                      ; 004fd3d8 | g_HealthBar1Bitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_scale_FUN_00410c20 ; 004fd3dd
        ;   XREF to: 00410c20 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_scale_FUN_00410c20(CAlphaBitmap * this_ptr, int scaleFactorX, int scaleFactorY)
    ADD ESP,0xc                         ; 004fd3e2
    PUSH 0x2                            ; 004fd3e5
    PUSH 0x2                            ; 004fd3e7
    PUSH 0x2dcd6f0                      ; 004fd3e9 | g_HealthBar2Bitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_scale_FUN_00410c20 ; 004fd3ee
        ;   XREF to: 00410c20 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_scale_FUN_00410c20(CAlphaBitmap * this_ptr, int scaleFactorX, int scaleFactorY)
    ADD ESP,0xc                         ; 004fd3f3
    PUSH 0x2                            ; 004fd3f6
    PUSH 0x2                            ; 004fd3f8
    PUSH 0x2dcd704                      ; 004fd3fa | g_TommyClipIconBitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_scale_FUN_00410c20 ; 004fd3ff
        ;   XREF to: 00410c20 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_scale_FUN_00410c20(CAlphaBitmap * this_ptr, int scaleFactorX, int scaleFactorY)
    ADD ESP,0xc                         ; 004fd404
    PUSH 0x2                            ; 004fd407
    PUSH 0x2                            ; 004fd409
    PUSH 0x2dcd718                      ; 004fd40b | g_BulletIconBitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_scale_FUN_00410c20 ; 004fd410
        ;   XREF to: 00410c20 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_scale_FUN_00410c20(CAlphaBitmap * this_ptr, int scaleFactorX, int scaleFactorY)
    ADD ESP,0xc                         ; 004fd415
    PUSH 0x2                            ; 004fd418
    PUSH 0x2                            ; 004fd41a
    PUSH 0x2dcd72c                      ; 004fd41c | g_LithiumIconBitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_scale_FUN_00410c20 ; 004fd421
        ;   XREF to: 00410c20 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_scale_FUN_00410c20(CAlphaBitmap * this_ptr, int scaleFactorX, int scaleFactorY)
    ADD ESP,0xc                         ; 004fd426
    PUSH 0x2                            ; 004fd429
    PUSH 0x2                            ; 004fd42b
    PUSH 0x2dcd740                      ; 004fd42d | g_MercuryBulletIconBitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_scale_FUN_00410c20 ; 004fd432
        ;   XREF to: 00410c20 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_scale_FUN_00410c20(CAlphaBitmap * this_ptr, int scaleFactorX, int scaleFactorY)
    ADD ESP,0xc                         ; 004fd437
    PUSH 0x2                            ; 004fd43a
    PUSH 0x2                            ; 004fd43c
    PUSH 0x2dcd754                      ; 004fd43e | g_ShotShellIconBitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_scale_FUN_00410c20 ; 004fd443
        ;   XREF to: 00410c20 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_scale_FUN_00410c20(CAlphaBitmap * this_ptr, int scaleFactorX, int scaleFactorY)
    ADD ESP,0xc                         ; 004fd448
    PUSH 0x2                            ; 004fd44b
    PUSH 0x2                            ; 004fd44d
    PUSH 0x2dcd768                      ; 004fd44f | g_SilverBulletIconBitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_scale_FUN_00410c20 ; 004fd454
        ;   XREF to: 00410c20 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_scale_FUN_00410c20(CAlphaBitmap * this_ptr, int scaleFactorX, int scaleFactorY)
    ADD ESP,0xc                         ; 004fd459
    PUSH 0x2                            ; 004fd45c
    PUSH 0x2                            ; 004fd45e
    PUSH 0x2dcd77c                      ; 004fd460 | g_HolyBulletIconBitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_scale_FUN_00410c20 ; 004fd465
        ;   XREF to: 00410c20 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_scale_FUN_00410c20(CAlphaBitmap * this_ptr, int scaleFactorX, int scaleFactorY)
    ADD ESP,0xc                         ; 004fd46a
    PUSH 0x6304b1                       ; 004fd46d | = "rt"
        ;   Label: LAB_004fd46d
    PUSH 0x6304b4                       ; 004fd472 | = "itemlist.txt"
    XOR EBX,EBX                         ; 004fd477
    PUSH 0x6304c1                       ; 004fd479 | s_EmptyChar_006304c1
    MOV dword ptr [0x02dbaac0],EBX      ; 004fd47e | g_ItemDefinitionCount
    CALL engine_dosio.cpp_getFile_FUN_00481a50 ; 004fd484
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 004fd489
    MOV EBX,EAX                         ; 004fd48c
    TEST EAX,EAX                        ; 004fd48e
    JZ 0x004fd500                       ; 004fd490
        ;   XREF to: 004fd500 (CONDITIONAL_JUMP)  ; LAB_004fd500
    TEST byte ptr [EBX + 0xc],0x10      ; 004fd492
        ;   Label: LAB_004fd492
    JNZ 0x004fd4ed                      ; 004fd496
        ;   XREF to: 004fd4ed (CONDITIONAL_JUMP)  ; LAB_004fd4ed
    IMUL EAX,dword ptr [0x02dbaac0],0x300 ; 004fd498 | g_ItemDefinitionCount
    PUSH EBX                            ; 004fd4a2
    ADD EAX,0x2dbaac8                   ; 004fd4a3 | g_ItemDefinitionArray[1].string1[0]
    PUSH EAX                            ; 004fd4a8 | g_ItemDefinitionArray | g_ItemDefinitionArray[1].string1[0]
    CALL core_inv.cpp_loadItem_FUN_004fcfe0 ; 004fd4a9
        ;   XREF to: 004fcfe0 (UNCONDITIONAL_CALL)  ; int core_inv.cpp_loadItem_FUN_004fcfe0(SInventoryItemInfo * item_info, _FILE * file_handle)
    ADD ESP,0x8                         ; 004fd4ae
    TEST EAX,EAX                        ; 004fd4b1
    JZ 0x004fd4ed                       ; 004fd4b3
        ;   XREF to: 004fd4ed (CONDITIONAL_JUMP)  ; LAB_004fd4ed
    INC dword ptr [0x02dbaac0]          ; 004fd4b5 | g_ItemDefinitionCount
    JMP 0x004fd492                      ; 004fd4bb
        ;   XREF to: 004fd492 (UNCONDITIONAL_JUMP)  ; LAB_004fd492
    PUSH 0x67ce44                       ; 004fd4bd | g_InventoryHeight
        ;   Label: LAB_004fd4bd
    PUSH 0x67ce40                       ; 004fd4c2 | g_InventoryWidth
    PUSH 0x6303f6                       ; 004fd4c7 | = "%d,%d\n"
    PUSH EAX                            ; 004fd4cc
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 004fd4cd
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x10                        ; 004fd4d2
    PUSH 0x139                          ; 004fd4d5
    PUSH 0x6303fd                       ; 004fd4da | = "..\\core\\inv.cpp"
    PUSH EBX                            ; 004fd4df
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004fd4e0
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004fd4e5
    JMP 0x004fd24d                      ; 004fd4e8
        ;   XREF to: 004fd24d (UNCONDITIONAL_JUMP)  ; LAB_004fd24d
    PUSH 0x169                          ; 004fd4ed
        ;   Label: LAB_004fd4ed
    PUSH 0x6304c2                       ; 004fd4f2 | = "..\\core\\inv.cpp"
    PUSH EBX                            ; 004fd4f7
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004fd4f8
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004fd4fd
    POP EBP                             ; 004fd500
        ;   Label: LAB_004fd500
    POP EBX                             ; 004fd501
    RET                                 ; 004fd502

