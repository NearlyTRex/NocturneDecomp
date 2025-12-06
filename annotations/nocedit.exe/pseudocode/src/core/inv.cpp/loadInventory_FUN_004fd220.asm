; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_inv.cpp_loadInventory_FUN_004fd220(void)
;
;
; XREF[3]:
;   core_game.cpp_CGame_FUN_004e07a0 at 004e07ce
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
;   engine_dosio.c_getFile_FUN_00481a50
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fd220
        ;   Label: core_inv.cpp_loadInventory_FUN_004fd220
    PUSH EBP                            ; 004fd221
    PUSH 0x6303e2                       ; 004fd222 | = "rt" | s_rt_006303e2 = rt
    PUSH 0x6303e5                       ; 004fd227 | = "invsize.txt" | s_invsize_txt_006303e5 = invsize.txt
    MOV EAX,[0x00679398]                ; 004fd22c | int g_WindowHeight
    PUSH 0x6303f1                       ; 004fd231 | = "data" | s_data_006303f1 = data
    MOV [0x02dcd790],EAX                ; 004fd236 | int g_InventoryScreenHeight
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 004fd23b | FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)
    MOV EBX,EAX                         ; 004fd240
    ADD ESP,0xc                         ; 004fd242
    TEST EAX,EAX                        ; 004fd245
    JNZ 0x004fd4bd                      ; 004fd247 | LAB_004fd4bd
        ;   XREF to: 004fd4bd (CONDITIONAL_JUMP)
    PUSH EDI                            ; 004fd24d
        ;   Label: LAB_004fd24d
    MOV EDX,dword ptr [0x0067ce44]      ; 004fd24e | int g_InventoryHeight
    PUSH EDX                            ; 004fd254
    MOV ECX,dword ptr [0x0067ce40]      ; 004fd255 | int g_InventoryWidth
    PUSH ECX                            ; 004fd25b
    PUSH 0x63040d                       ; 004fd25c | = "invback" | s_invback_0063040d = invback
    PUSH 0x2dbaa70                      ; 004fd261 | CAlphaBitmap g_InvBackgroundBitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0 ; 004fd266 | void engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
        ;   XREF to: 004105d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004fd26b
    MOV EBX,dword ptr [0x0067ce44]      ; 004fd26e | int g_InventoryHeight
    PUSH EBX                            ; 004fd274
    PUSH EBX                            ; 004fd275
    PUSH 0x630415                       ; 004fd276 | = "invback2" | s_invback2_00630415 = invback2
    PUSH 0x2dbaa84                      ; 004fd27b | CAlphaBitmap g_InvBackground2Bitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0 ; 004fd280 | void engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
        ;   XREF to: 004105d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004fd285
    MOV EDI,dword ptr [0x0067ce44]      ; 004fd288 | int g_InventoryHeight
    PUSH EDI                            ; 004fd28e
    MOV EBP,dword ptr [0x0067ce40]      ; 004fd28f | int g_InventoryWidth
    PUSH EBP                            ; 004fd295
    PUSH 0x63041e                       ; 004fd296 | = "weapback" | s_weapback_0063041e = weapback
    PUSH 0x2dbaa98                      ; 004fd29b | CAlphaBitmap g_WeapBackgroundBitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0 ; 004fd2a0 | void engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
        ;   XREF to: 004105d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004fd2a5
    MOV EAX,[0x0067ce44]                ; 004fd2a8 | int g_InventoryHeight
    PUSH EAX                            ; 004fd2ad
    PUSH EAX                            ; 004fd2ae
    PUSH 0x630427                       ; 004fd2af | = "weapback2" | s_weapback2_00630427 = weapback2
    PUSH 0x2dbaaac                      ; 004fd2b4 | CAlphaBitmap g_WeapBackground2Bitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0 ; 004fd2b9 | void engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
        ;   XREF to: 004105d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004fd2be
    PUSH 0x20                           ; 004fd2c1
    PUSH 0x10                           ; 004fd2c3
    PUSH 0x630431                       ; 004fd2c5 | = "battery" | s_battery_00630431 = battery
    PUSH 0x2dcd6c8                      ; 004fd2ca | CAlphaBitmap g_BatteryIconBitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0 ; 004fd2cf | void engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
        ;   XREF to: 004105d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004fd2d4
    PUSH 0x40                           ; 004fd2d7
    PUSH 0x1b                           ; 004fd2d9
    PUSH 0x630439                       ; 004fd2db | = "hbar1" | s_hbar1_00630439 = hbar1
    PUSH 0x2dcd6dc                      ; 004fd2e0 | CAlphaBitmap g_HealthBar1Bitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0 ; 004fd2e5 | void engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
        ;   XREF to: 004105d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004fd2ea
    PUSH 0x40                           ; 004fd2ed
    PUSH 0x1b                           ; 004fd2ef
    PUSH 0x63043f                       ; 004fd2f1 | = "hbar2" | s_hbar2_0063043f = hbar2
    PUSH 0x2dcd6f0                      ; 004fd2f6 | CAlphaBitmap g_HealthBar2Bitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0 ; 004fd2fb | void engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
        ;   XREF to: 004105d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004fd300
    PUSH 0x18                           ; 004fd303
    PUSH 0x18                           ; 004fd305
    PUSH 0x630445                       ; 004fd307 | = "tommyclip24x24" | s_tommyclip24x24_00630445 = tommyclip24x24
    PUSH 0x2dcd704                      ; 004fd30c | CAlphaBitmap g_TommyClipIconBitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0 ; 004fd311 | void engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
        ;   XREF to: 004105d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004fd316
    PUSH 0x18                           ; 004fd319
    PUSH 0x18                           ; 004fd31b
    PUSH 0x630454                       ; 004fd31d | = "bullet24x24" | s_bullet24x24_00630454 = bullet24x24
    PUSH 0x2dcd718                      ; 004fd322 | CAlphaBitmap g_BulletIconBitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0 ; 004fd327 | void engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
        ;   XREF to: 004105d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004fd32c
    PUSH 0x18                           ; 004fd32f
    PUSH 0x18                           ; 004fd331
    PUSH 0x630460                       ; 004fd333 | = "lithium24x24" | s_lithium24x24_00630460 = lithium24x24
    PUSH 0x2dcd72c                      ; 004fd338 | CAlphaBitmap g_LithiumIconBitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0 ; 004fd33d | void engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
        ;   XREF to: 004105d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004fd342
    POP EDI                             ; 004fd345
    PUSH 0x18                           ; 004fd346
    PUSH 0x18                           ; 004fd348
    PUSH 0x63046d                       ; 004fd34a | = "mercurybullet24x24" | s_mercurybullet24x24_0063046d = mercurybullet24x24
    PUSH 0x2dcd740                      ; 004fd34f | CAlphaBitmap g_MercuryBulletIconBitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0 ; 004fd354 | void engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
        ;   XREF to: 004105d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004fd359
    PUSH 0x18                           ; 004fd35c
    PUSH 0x18                           ; 004fd35e
    PUSH 0x630480                       ; 004fd360 | = "shotshell24x24" | s_shotshell24x24_00630480 = shotshell24x24
    PUSH 0x2dcd754                      ; 004fd365 | CAlphaBitmap g_ShotShellIconBitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0 ; 004fd36a | void engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
        ;   XREF to: 004105d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004fd36f
    PUSH 0x18                           ; 004fd372
    PUSH 0x18                           ; 004fd374
    PUSH 0x63048f                       ; 004fd376 | = "silverbullet24x24" | s_silverbullet24x24_0063048f = silverbullet24x24
    PUSH 0x2dcd768                      ; 004fd37b | CAlphaBitmap g_SilverBulletIconBitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0 ; 004fd380 | void engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
        ;   XREF to: 004105d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004fd385
    PUSH 0x18                           ; 004fd388
    PUSH 0x18                           ; 004fd38a
    PUSH 0x6304a1                       ; 004fd38c | = "holybullet24x24" | s_holybullet24x24_006304a1 = holybullet24x24
    PUSH 0x2dcd77c                      ; 004fd391 | CAlphaBitmap g_HolyBulletIconBitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0 ; 004fd396 | void engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
        ;   XREF to: 004105d0 (UNCONDITIONAL_CALL)
    MOV EAX,[0x0067b654]                ; 004fd39b | CGame g_CGameInstance | CGame * g_CGamePtr
    MOV ECX,dword ptr [EAX + 0x4]       ; 004fd3a0 | g_CGameInstance.game_pixy
    ADD ESP,0x10                        ; 004fd3a3
    CMP ECX,0x180                       ; 004fd3a6
    JGE 0x004fd46d                      ; 004fd3ac | LAB_004fd46d
        ;   XREF to: 004fd46d (CONDITIONAL_JUMP)
    PUSH 0x2                            ; 004fd3b2
    PUSH 0x2                            ; 004fd3b4
    PUSH 0x2dbaa84                      ; 004fd3b6 | CAlphaBitmap g_InvBackground2Bitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_scale_FUN_00410c20 ; 004fd3bb | void engine_alphabit.cpp_CAlphaBitmap_scale_FUN_00410c20(CAlphaBitmap * this_ptr, int scaleFactorX, int scaleFactorY)
        ;   XREF to: 00410c20 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004fd3c0
    PUSH 0x2                            ; 004fd3c3
    PUSH 0x2                            ; 004fd3c5
    PUSH 0x2dbaaac                      ; 004fd3c7 | CAlphaBitmap g_WeapBackground2Bitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_scale_FUN_00410c20 ; 004fd3cc | void engine_alphabit.cpp_CAlphaBitmap_scale_FUN_00410c20(CAlphaBitmap * this_ptr, int scaleFactorX, int scaleFactorY)
        ;   XREF to: 00410c20 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004fd3d1
    PUSH 0x2                            ; 004fd3d4
    PUSH 0x2                            ; 004fd3d6
    PUSH 0x2dcd6dc                      ; 004fd3d8 | CAlphaBitmap g_HealthBar1Bitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_scale_FUN_00410c20 ; 004fd3dd | void engine_alphabit.cpp_CAlphaBitmap_scale_FUN_00410c20(CAlphaBitmap * this_ptr, int scaleFactorX, int scaleFactorY)
        ;   XREF to: 00410c20 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004fd3e2
    PUSH 0x2                            ; 004fd3e5
    PUSH 0x2                            ; 004fd3e7
    PUSH 0x2dcd6f0                      ; 004fd3e9 | CAlphaBitmap g_HealthBar2Bitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_scale_FUN_00410c20 ; 004fd3ee | void engine_alphabit.cpp_CAlphaBitmap_scale_FUN_00410c20(CAlphaBitmap * this_ptr, int scaleFactorX, int scaleFactorY)
        ;   XREF to: 00410c20 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004fd3f3
    PUSH 0x2                            ; 004fd3f6
    PUSH 0x2                            ; 004fd3f8
    PUSH 0x2dcd704                      ; 004fd3fa | CAlphaBitmap g_TommyClipIconBitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_scale_FUN_00410c20 ; 004fd3ff | void engine_alphabit.cpp_CAlphaBitmap_scale_FUN_00410c20(CAlphaBitmap * this_ptr, int scaleFactorX, int scaleFactorY)
        ;   XREF to: 00410c20 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004fd404
    PUSH 0x2                            ; 004fd407
    PUSH 0x2                            ; 004fd409
    PUSH 0x2dcd718                      ; 004fd40b | CAlphaBitmap g_BulletIconBitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_scale_FUN_00410c20 ; 004fd410 | void engine_alphabit.cpp_CAlphaBitmap_scale_FUN_00410c20(CAlphaBitmap * this_ptr, int scaleFactorX, int scaleFactorY)
        ;   XREF to: 00410c20 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004fd415
    PUSH 0x2                            ; 004fd418
    PUSH 0x2                            ; 004fd41a
    PUSH 0x2dcd72c                      ; 004fd41c | CAlphaBitmap g_LithiumIconBitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_scale_FUN_00410c20 ; 004fd421 | void engine_alphabit.cpp_CAlphaBitmap_scale_FUN_00410c20(CAlphaBitmap * this_ptr, int scaleFactorX, int scaleFactorY)
        ;   XREF to: 00410c20 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004fd426
    PUSH 0x2                            ; 004fd429
    PUSH 0x2                            ; 004fd42b
    PUSH 0x2dcd740                      ; 004fd42d | CAlphaBitmap g_MercuryBulletIconBitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_scale_FUN_00410c20 ; 004fd432 | void engine_alphabit.cpp_CAlphaBitmap_scale_FUN_00410c20(CAlphaBitmap * this_ptr, int scaleFactorX, int scaleFactorY)
        ;   XREF to: 00410c20 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004fd437
    PUSH 0x2                            ; 004fd43a
    PUSH 0x2                            ; 004fd43c
    PUSH 0x2dcd754                      ; 004fd43e | CAlphaBitmap g_ShotShellIconBitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_scale_FUN_00410c20 ; 004fd443 | void engine_alphabit.cpp_CAlphaBitmap_scale_FUN_00410c20(CAlphaBitmap * this_ptr, int scaleFactorX, int scaleFactorY)
        ;   XREF to: 00410c20 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004fd448
    PUSH 0x2                            ; 004fd44b
    PUSH 0x2                            ; 004fd44d
    PUSH 0x2dcd768                      ; 004fd44f | CAlphaBitmap g_SilverBulletIconBitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_scale_FUN_00410c20 ; 004fd454 | void engine_alphabit.cpp_CAlphaBitmap_scale_FUN_00410c20(CAlphaBitmap * this_ptr, int scaleFactorX, int scaleFactorY)
        ;   XREF to: 00410c20 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004fd459
    PUSH 0x2                            ; 004fd45c
    PUSH 0x2                            ; 004fd45e
    PUSH 0x2dcd77c                      ; 004fd460 | CAlphaBitmap g_HolyBulletIconBitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_scale_FUN_00410c20 ; 004fd465 | void engine_alphabit.cpp_CAlphaBitmap_scale_FUN_00410c20(CAlphaBitmap * this_ptr, int scaleFactorX, int scaleFactorY)
        ;   XREF to: 00410c20 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004fd46a
    PUSH 0x6304b1                       ; 004fd46d | = "rt" | s_rt_006304b1 = rt
        ;   Label: LAB_004fd46d
    PUSH 0x6304b4                       ; 004fd472 | = "itemlist.txt" | s_itemlist_txt_006304b4 = itemlist.txt
    XOR EBX,EBX                         ; 004fd477
    PUSH 0x6304c1                       ; 004fd479 | char s_EmptyChar_006304c1
    MOV dword ptr [0x02dbaac0],EBX      ; 004fd47e | int g_ItemDefinitionCount
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 004fd484 | FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004fd489
    MOV EBX,EAX                         ; 004fd48c
    TEST EAX,EAX                        ; 004fd48e
    JZ 0x004fd500                       ; 004fd490 | LAB_004fd500
        ;   XREF to: 004fd500 (CONDITIONAL_JUMP)
    TEST byte ptr [EBX + 0xc],0x10      ; 004fd492
        ;   Label: LAB_004fd492
    JNZ 0x004fd4ed                      ; 004fd496 | LAB_004fd4ed
        ;   XREF to: 004fd4ed (CONDITIONAL_JUMP)
    IMUL EAX,dword ptr [0x02dbaac0],0x300 ; 004fd498 | int g_ItemDefinitionCount
    PUSH EBX                            ; 004fd4a2
    ADD EAX,0x2dbaac8                   ; 004fd4a3 | DAT_02dbadc8 | SInventoryItemInfo[100] g_ItemDefinitionArray
    PUSH EAX                            ; 004fd4a8 | SInventoryItemInfo[100] g_ItemDefinitionArray
    CALL core_inv.cpp_loadItem_FUN_004fcfe0 ; 004fd4a9 | int core_inv.cpp_loadItem_FUN_004fcfe0(SInventoryItemInfo * item_info, FILE * file_handle)
        ;   XREF to: 004fcfe0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004fd4ae
    TEST EAX,EAX                        ; 004fd4b1
    JZ 0x004fd4ed                       ; 004fd4b3 | LAB_004fd4ed
        ;   XREF to: 004fd4ed (CONDITIONAL_JUMP)
    INC dword ptr [0x02dbaac0]          ; 004fd4b5 | int g_ItemDefinitionCount
    JMP 0x004fd492                      ; 004fd4bb | LAB_004fd492
        ;   XREF to: 004fd492 (UNCONDITIONAL_JUMP)
    PUSH 0x67ce44                       ; 004fd4bd | int g_InventoryHeight
        ;   Label: LAB_004fd4bd
    PUSH 0x67ce40                       ; 004fd4c2 | int g_InventoryWidth
    PUSH 0x6303f6                       ; 004fd4c7 | = "%d,%d\n" | s_d_d_006303f6 = %d,%d

    PUSH EAX                            ; 004fd4cc
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 004fd4cd | int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004fd4d2
    PUSH 0x139                          ; 004fd4d5
    PUSH 0x6303fd                       ; 004fd4da | = "..\\core\\inv.cpp" | s_core_inv_cpp_006303fd = ..\core\inv.cpp
    PUSH EBX                            ; 004fd4df
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004fd4e0 | int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004fd4e5
    JMP 0x004fd24d                      ; 004fd4e8 | LAB_004fd24d
        ;   XREF to: 004fd24d (UNCONDITIONAL_JUMP)
    PUSH 0x169                          ; 004fd4ed
        ;   Label: LAB_004fd4ed
    PUSH 0x6304c2                       ; 004fd4f2 | = "..\\core\\inv.cpp" | s_core_inv_cpp_006304c2 = ..\core\inv.cpp
    PUSH EBX                            ; 004fd4f7
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004fd4f8 | int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004fd4fd
    POP EBP                             ; 004fd500
        ;   Label: LAB_004fd500
    POP EBX                             ; 004fd501
    RET                                 ; 004fd502

