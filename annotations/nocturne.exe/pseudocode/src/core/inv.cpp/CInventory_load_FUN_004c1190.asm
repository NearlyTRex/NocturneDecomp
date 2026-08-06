; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_inv_cpp_CInventory_load_FUN_004c1190(CInventory *this_ptr,_FILE *file_handle)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; Local Variables:
; undefined        Stack[-0x1dc]:1  local_1dc
; undefined        Stack[-0xdc]:1  local_dc
; undefined        Stack[-0x78]:1  local_78
; undefined1       Stack[-0x77]:1  local_77
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_hero.cpp_CHero_archive_FUN_004b49a0 at 004b4bd0
;
; Referenced Globals:
;   TerminatedCString s_d_005872b9
;   TerminatedCString s_d_005872bd
;   TerminatedCString s_d_005872c1
;   TerminatedCString s_f_005872c5
;   TerminatedCString s_s_005872c9
;   TerminatedCString s_core_inv_cpp_005872d6
;   TerminatedCString s_CInventory_load_Can_t_fi_005872e6
;   int INT_005bab68 = 0x0
;   int INT_005bab6c = 0x0
;   int INT_005babd0 = 0x0
;   int INT_005babd4 = 0x0
;   CDemonMission* g_CDemonMission_PTR_005baf90 = 01cc9450
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   undefined4 DAT_01cc9450
;   ... and 2 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;   core_actor.cpp_CDemonActor_load_FUN_0040c160
;   core_actor.cpp_createActorByName_FUN_0040d540
;   core_inv.cpp_CInventory_clear_FUN_004bee80
;   core_inv.cpp_CInventory_initialize_FUN_004bef10
;   core_inv.cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004c1b90
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;   core_mission.cpp_CDemonMission_getNextLoadedInventoryActor_FUN_004d8640
;   crt_stdio.c_fgets_FUN_00564b20
;   crt_stdio.c_fscanf_FUN_00563350
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c1190
        ;   Label: core_inv.cpp_CInventory_load_FUN_004c1190
    PUSH ESI                            ; 004c1191
    PUSH EDI                            ; 004c1192
    PUSH EBP                            ; 004c1193
    SUB ESP,0x1cc                       ; 004c1194
    MOV EDX,dword ptr [ESP + 0x1e0]     ; 004c119a
    PUSH EDX                            ; 004c11a1
    CALL core_inv.cpp_CInventory_clear_FUN_004bee80 ; 004c11a2
        ;   XREF to: 004bee80 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_clear_FUN_004bee80(CInventory * this_ptr)
    ADD ESP,0x4                         ; 004c11a7
    MOV ECX,dword ptr [ESP + 0x1e0]     ; 004c11aa
    PUSH ECX                            ; 004c11b1
    CALL core_inv.cpp_CInventory_initialize_FUN_004bef10 ; 004c11b2
        ;   XREF to: 004bef10 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_initialize_FUN_004bef10(CInventory * this_ptr)
    ADD ESP,0x4                         ; 004c11b7
    MOV EBX,dword ptr [ESP + 0x1e4]     ; 004c11ba
    PUSH EBX                            ; 004c11c1
    PUSH 0xff                           ; 004c11c2
    LEA EAX,[ESP + 0x8]                 ; 004c11c7
    PUSH EAX                            ; 004c11cb
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 004c11cc
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004c11d1
    PUSH EBX                            ; 004c11d4
    PUSH 0xff                           ; 004c11d5
    LEA EAX,[ESP + 0x8]                 ; 004c11da
    PUSH EAX                            ; 004c11de
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 004c11df
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004c11e4
    MOV EAX,dword ptr [ESP + 0x1e0]     ; 004c11e7
    ADD EAX,0x32c                       ; 004c11ee
    PUSH EAX                            ; 004c11f3
    PUSH 0x5872b9                       ; 004c11f4 | = "%d\n"
    PUSH EBX                            ; 004c11f9
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 004c11fa
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    ADD ESP,0xc                         ; 004c11ff
    PUSH EBX                            ; 004c1202
    PUSH 0xff                           ; 004c1203
    LEA EAX,[ESP + 0x8]                 ; 004c1208
    PUSH EAX                            ; 004c120c
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 004c120d
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004c1212
    MOV EAX,dword ptr [ESP + 0x1e0]     ; 004c1215
    ADD EAX,0x8                         ; 004c121c
    PUSH EAX                            ; 004c121f
    PUSH 0x5872bd                       ; 004c1220 | = "%d\n"
    PUSH EBX                            ; 004c1225
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 004c1226
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    ADD ESP,0xc                         ; 004c122b
    PUSH EBX                            ; 004c122e
    PUSH 0xff                           ; 004c122f
    LEA EAX,[ESP + 0x8]                 ; 004c1234
    PUSH EAX                            ; 004c1238
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 004c1239
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004c123e
    LEA EAX,[ESP + 0x1c8]               ; 004c1241
    PUSH EAX                            ; 004c1248
    PUSH 0x5872c1                       ; 004c1249 | = "%d\n"
    PUSH EBX                            ; 004c124e
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 004c124f
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    ADD ESP,0xc                         ; 004c1254
    MOV EAX,dword ptr [ESP + 0x1e0]     ; 004c1257
    CMP dword ptr [EAX + 0x32c],0x1     ; 004c125e
    JGE 0x004c13f8                      ; 004c1265
        ;   XREF to: 004c13f8 (CONDITIONAL_JUMP)  ; LAB_004c13f8
    MOV EAX,dword ptr [ESP + 0x1e4]     ; 004c126b
        ;   Label: LAB_004c126b
    PUSH EAX                            ; 004c1272
    PUSH 0xff                           ; 004c1273
    LEA EAX,[ESP + 0x8]                 ; 004c1278
    PUSH EAX                            ; 004c127c
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 004c127d
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004c1282
    MOV EAX,dword ptr [ESP + 0x1e0]     ; 004c1285
    MOV EDX,dword ptr [EAX + 0x8]       ; 004c128c
    XOR EBP,EBP                         ; 004c128f
    TEST EDX,EDX                        ; 004c1291
    JLE 0x004c1321                      ; 004c1293
        ;   XREF to: 004c1321 (CONDITIONAL_JUMP)  ; LAB_004c1321
    MOV EBX,EAX                         ; 004c1299
    MOV ECX,0x19                        ; 004c129b
        ;   Label: LAB_004c129b
    LEA EDI,[ESP + 0x100]               ; 004c12a0
    LEA EAX,[ESP + 0x164]               ; 004c12a7
    MOV ESI,0x5bab68                    ; 004c12ae | INT_005bab68
    PUSH EAX                            ; 004c12b3
    LEA EAX,[ESP + 0x104]               ; 004c12b4
    MOVSD.REP ES:EDI,ESI                ; 004c12bb | INT_005bab68 | INT_005bab6c
    PUSH EAX                            ; 004c12bd
    MOV ECX,0x19                        ; 004c12be
    LEA EDI,[ESP + 0x16c]               ; 004c12c3
    PUSH 0x5872c9                       ; 004c12ca | = " %s \"%[^\"]\"\n"
    MOV EAX,dword ptr [ESP + 0x1f0]     ; 004c12cf
    MOV ESI,0x5babd0                    ; 004c12d6 | INT_005babd0
    PUSH EAX                            ; 004c12db
    MOVSD.REP ES:EDI,ESI                ; 004c12dc | INT_005babd0 | INT_005babd4
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 004c12de
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    MOV ESI,dword ptr [0x005baf90]      ; 004c12e3 | g_CDemonMission_PTR_005baf90
    MOV EDX,dword ptr [ESI + 0xc]       ; 004c12e9 | DAT_01cc945c
    ADD ESP,0x10                        ; 004c12ec
    TEST EDX,EDX                        ; 004c12ef
    JZ 0x004c142d                       ; 004c12f1
        ;   XREF to: 004c142d (CONDITIONAL_JUMP)  ; LAB_004c142d
    LEA EAX,[ESP + 0x164]               ; 004c12f7
    PUSH EAX                            ; 004c12fe
    PUSH ESI                            ; 004c12ff | DAT_01cc9450
    CALL core_mission.cpp_CDemonMission_getNextLoadedInventoryActor_FUN_004d8640 ; 004c1300
        ;   XREF to: 004d8640 (UNCONDITIONAL_CALL)  ; CDemonActor * core_mission.cpp_CDemonMission_getNextLoadedInventoryActor_FUN_004d8640(CDemonMission * this_ptr, char * actor_name)
    ADD ESP,0x8                         ; 004c1305
    MOV dword ptr [EBX + 0xc],EAX       ; 004c1308
    MOV EAX,dword ptr [ESP + 0x1e0]     ; 004c130b
        ;   Label: LAB_004c130b
    INC EBP                             ; 004c1312
    MOV ECX,dword ptr [EAX + 0x8]       ; 004c1313
    ADD EBX,0x4                         ; 004c1316
    CMP EBP,ECX                         ; 004c1319
    JL 0x004c129b                       ; 004c131b
        ;   XREF to: 004c129b (CONDITIONAL_JUMP)  ; LAB_004c129b
    MOV EBX,dword ptr [ESP + 0x1e4]     ; 004c1321
        ;   Label: LAB_004c1321
    PUSH EBX                            ; 004c1328
    PUSH 0xff                           ; 004c1329
    LEA EAX,[ESP + 0x8]                 ; 004c132e
    PUSH EAX                            ; 004c1332
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 004c1333
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004c1338
    MOV EAX,dword ptr [ESP + 0x1e0]     ; 004c133b
    MOV EDI,dword ptr [EAX + 0x8]       ; 004c1342
    XOR ESI,ESI                         ; 004c1345
    TEST EDI,EDI                        ; 004c1347
    JLE 0x004c1380                      ; 004c1349
        ;   XREF to: 004c1380 (CONDITIONAL_JUMP)  ; LAB_004c1380
    MOV EBX,EAX                         ; 004c134b
    MOV ECX,dword ptr [ESP + 0x1e4]     ; 004c134d
        ;   Label: LAB_004c134d
    PUSH ECX                            ; 004c1354
    MOV EDI,dword ptr [EBX + 0xc]       ; 004c1355
    PUSH EDI                            ; 004c1358
    CALL core_actor.cpp_CDemonActor_load_FUN_0040c160 ; 004c1359
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_load_FUN_0040c160(CDemonActor * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 004c135e
    MOV EAX,dword ptr [ESP + 0x1e0]     ; 004c1361
    INC ESI                             ; 004c1368
    MOV EBP,dword ptr [EAX + 0x8]       ; 004c1369
    ADD EBX,0x4                         ; 004c136c
    CMP ESI,EBP                         ; 004c136f
    JL 0x004c134d                       ; 004c1371
        ;   XREF to: 004c134d (CONDITIONAL_JUMP)  ; LAB_004c134d
    LEA EAX,[EAX]                       ; 004c1373
    LEA EDX,[EDX]                       ; 004c1379
    NOP                                 ; 004c137f
    MOV EAX,dword ptr [ESP + 0x1e0]     ; 004c1380
        ;   Label: LAB_004c1380
    CMP dword ptr [EAX + 0x32c],0x2     ; 004c1387
    JL 0x004c13aa                       ; 004c138e
        ;   XREF to: 004c13aa (CONDITIONAL_JUMP)  ; LAB_004c13aa
    MOV ECX,dword ptr [ESP + 0x1e4]     ; 004c1390
    PUSH ECX                            ; 004c1397
    PUSH 0xff                           ; 004c1398
    LEA EAX,[ESP + 0x8]                 ; 004c139d
    PUSH EAX                            ; 004c13a1
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 004c13a2
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004c13a7
    MOV EAX,[0x005baf90]                ; 004c13aa | g_CDemonMission_PTR_005baf90
        ;   Label: LAB_004c13aa
    MOV EDX,dword ptr [ESP + 0x1e0]     ; 004c13af
    MOV EAX,dword ptr [EAX + 0xc]       ; 004c13b6 | DAT_01cc945c
    MOV dword ptr [EDX + 0x330],0x0     ; 004c13b9
    MOV dword ptr [EDX + 0x450],EAX     ; 004c13c3
    MOV EBX,dword ptr [ESP + 0x1c8]     ; 004c13c9
    TEST EBX,EBX                        ; 004c13d0
    JGE 0x004c146a                      ; 004c13d2
        ;   XREF to: 004c146a (CONDITIONAL_JUMP)  ; LAB_004c146a
    PUSH 0x3e7                          ; 004c13d8
        ;   Label: LAB_004c13d8
    MOV ESI,dword ptr [ESP + 0x1e4]     ; 004c13dd
    PUSH ESI                            ; 004c13e4
    CALL core_inv.cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004c1b90 ; 004c13e5
        ;   XREF to: 004c1b90 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004c1b90(CInventory * this_ptr, int ammo_type)
    ADD ESP,0x8                         ; 004c13ea
    ADD ESP,0x1cc                       ; 004c13ed
    POP EBP                             ; 004c13f3
    POP EDI                             ; 004c13f4
    POP ESI                             ; 004c13f5
    POP EBX                             ; 004c13f6
    RET                                 ; 004c13f7
    MOV ESI,dword ptr [ESP + 0x1e4]     ; 004c13f8
        ;   Label: LAB_004c13f8
    PUSH ESI                            ; 004c13ff
    PUSH 0xff                           ; 004c1400
    LEA EAX,[ESP + 0x8]                 ; 004c1405
    PUSH EAX                            ; 004c1409
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 004c140a
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004c140f
    MOV EDI,dword ptr [ESP + 0x1e0]     ; 004c1412
    PUSH EDI                            ; 004c1419
    PUSH 0x5872c5                       ; 004c141a | = "%f\n"
    PUSH ESI                            ; 004c141f
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 004c1420
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    ADD ESP,0xc                         ; 004c1425
    JMP 0x004c126b                      ; 004c1428
        ;   XREF to: 004c126b (UNCONDITIONAL_JUMP)  ; LAB_004c126b
    LEA EAX,[ESP + 0x100]               ; 004c142d
        ;   Label: LAB_004c142d
    PUSH EAX                            ; 004c1434
    LEA ESI,[ESP + 0x168]               ; 004c1435
    CALL core_actor.cpp_createActorByName_FUN_0040d540 ; 004c143c
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_createActorByName_FUN_0040d540(char * class_name)
    ADD ESP,0x4                         ; 004c1441
    MOV EDI,EAX                         ; 004c1444
    MOV EDX,EAX                         ; 004c1446
    PUSH EDI                            ; 004c1448
    MOV AL,byte ptr [ESI]               ; 004c1449
        ;   Label: LAB_004c1449
    MOV byte ptr [EDI],AL               ; 004c144b
    CMP AL,0x0                          ; 004c144d
    JZ 0x004c1461                       ; 004c144f
        ;   XREF to: 004c1461 (CONDITIONAL_JUMP)  ; LAB_004c1461
    MOV AL,byte ptr [ESI + 0x1]         ; 004c1451
    ADD ESI,0x2                         ; 004c1454
    MOV byte ptr [EDI + 0x1],AL         ; 004c1457
    ADD EDI,0x2                         ; 004c145a
    CMP AL,0x0                          ; 004c145d
    JNZ 0x004c1449                      ; 004c145f
        ;   XREF to: 004c1449 (CONDITIONAL_JUMP)  ; LAB_004c1449
    POP EDI                             ; 004c1461
        ;   Label: LAB_004c1461
    MOV dword ptr [EBX + 0xc],EDX       ; 004c1462
    JMP 0x004c130b                      ; 004c1465
        ;   XREF to: 004c130b (UNCONDITIONAL_JUMP)  ; LAB_004c130b
    LEA EAX,[EBX*0x4 + 0x0]             ; 004c146a
        ;   Label: LAB_004c146a
    MOV ESI,dword ptr [0x02ddf9a8]      ; 004c1471 | g_CWeaponActorType_02ddf970.name_hash
    ADD EAX,EDX                         ; 004c1477
    PUSH ESI                            ; 004c1479
    MOV EBP,dword ptr [EAX + 0xc]       ; 004c147a
    PUSH EBP                            ; 004c147d
    MOV EDI,EDX                         ; 004c147e
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 004c1480
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EDX,EDI                         ; 004c1485
    MOV dword ptr [EDX + 0x330],EAX     ; 004c1487
    MOV EDX,dword ptr [EDI + 0x330]     ; 004c148d
    ADD ESP,0x8                         ; 004c1493
    TEST EDX,EDX                        ; 004c1496
    JNZ 0x004c13d8                      ; 004c1498
        ;   XREF to: 004c13d8 (CONDITIONAL_JUMP)  ; LAB_004c13d8
    MOV ECX,0x5872d6                    ; 004c149e | = "..\\core\\inv.cpp"
    MOV EBX,0x54b                       ; 004c14a3
    PUSH 0x5872e6                       ; 004c14a8 | = "CInventory::load - Can't find your we..."
    MOV dword ptr [0x01cc4800],ECX      ; 004c14ad | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EBX      ; 004c14b3 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 004c14b9
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 004c14be
    JMP 0x004c13d8                      ; 004c14c1
        ;   XREF to: 004c13d8 (UNCONDITIONAL_JUMP)  ; LAB_004c13d8

