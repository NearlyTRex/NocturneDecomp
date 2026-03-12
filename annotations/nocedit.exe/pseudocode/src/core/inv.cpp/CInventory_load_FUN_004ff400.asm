; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_inv_cpp_CInventory_load_FUN_004ff400(CInventory *this_ptr,_FILE *file_handle)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; Local Variables:
; char[256]        Stack[-0x1dc]:256  local_1dc
; char[100]        Stack[-0xdc]:100  local_dc
; char[100]        Stack[-0x78]:100  local_78
; int              Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_hero.cpp_CHero_archive_FUN_004f2610 at 004f2840
;
; Referenced Globals:
;   TerminatedCString s_d_0063094a
;   TerminatedCString s_d_0063094e
;   TerminatedCString s_d_00630952
;   TerminatedCString s_f_00630956
;   TerminatedCString s_s_0063095a
;   TerminatedCString s_core_inv_cpp_00630967
;   TerminatedCString s_CInventory_load_Can_t_fi_00630977
;   undefined4 DAT_0067ce48
;   undefined4 DAT_0067ce4c
;   undefined4 DAT_0067ceb0
;   undefined4 DAT_0067ceb4
;   CDemonMission* g_CDemonMissionPtr = 02f33740
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   CDemonMission g_CDemonMissionInstance
;   ... and 2 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_actor.cpp_CDemonActor_load_FUN_0040b050
;   core_actor.cpp_createActorByName_FUN_0040c430
;   core_inv.cpp_CInventory_clear_FUN_004fd0e0
;   core_inv.cpp_CInventory_initialize_FUN_004fd190
;   core_inv.cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004ffe10
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_mission.cpp_CDemonMission_getNextLoadedInventoryActor_FUN_00523520
;   crt_stdio.c_fgets_FUN_005fefd0
;   crt_stdio.c_fscanf_FUN_005fe7c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ff400
        ;   Label: core_inv.cpp_CInventory_load_FUN_004ff400
    PUSH ESI                            ; 004ff401
    PUSH EDI                            ; 004ff402
    PUSH EBP                            ; 004ff403
    SUB ESP,0x1cc                       ; 004ff404
    MOV EDX,dword ptr [ESP + 0x1e0]     ; 004ff40a
    PUSH EDX                            ; 004ff411
    CALL core_inv.cpp_CInventory_clear_FUN_004fd0e0 ; 004ff412
        ;   XREF to: 004fd0e0 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_clear_FUN_004fd0e0(CInventory * this_ptr)
    ADD ESP,0x4                         ; 004ff417
    MOV ECX,dword ptr [ESP + 0x1e0]     ; 004ff41a
    PUSH ECX                            ; 004ff421
    CALL core_inv.cpp_CInventory_initialize_FUN_004fd190 ; 004ff422
        ;   XREF to: 004fd190 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_initialize_FUN_004fd190(CInventory * this_ptr)
    ADD ESP,0x4                         ; 004ff427
    MOV EBX,dword ptr [ESP + 0x1e4]     ; 004ff42a
    PUSH EBX                            ; 004ff431
    PUSH 0xff                           ; 004ff432
    LEA EAX,[ESP + 0x8]                 ; 004ff437
    PUSH EAX                            ; 004ff43b
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 004ff43c
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004ff441
    PUSH EBX                            ; 004ff444
    PUSH 0xff                           ; 004ff445
    LEA EAX,[ESP + 0x8]                 ; 004ff44a
    PUSH EAX                            ; 004ff44e
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 004ff44f
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004ff454
    MOV EAX,dword ptr [ESP + 0x1e0]     ; 004ff457
    ADD EAX,0x32c                       ; 004ff45e
    PUSH EAX                            ; 004ff463
    PUSH 0x63094a                       ; 004ff464 | = "%d\n"
    PUSH EBX                            ; 004ff469
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 004ff46a
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 004ff46f
    PUSH EBX                            ; 004ff472
    PUSH 0xff                           ; 004ff473
    LEA EAX,[ESP + 0x8]                 ; 004ff478
    PUSH EAX                            ; 004ff47c
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 004ff47d
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004ff482
    MOV EAX,dword ptr [ESP + 0x1e0]     ; 004ff485
    ADD EAX,0x8                         ; 004ff48c
    PUSH EAX                            ; 004ff48f
    PUSH 0x63094e                       ; 004ff490 | = "%d\n"
    PUSH EBX                            ; 004ff495
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 004ff496
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 004ff49b
    PUSH EBX                            ; 004ff49e
    PUSH 0xff                           ; 004ff49f
    LEA EAX,[ESP + 0x8]                 ; 004ff4a4
    PUSH EAX                            ; 004ff4a8
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 004ff4a9
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004ff4ae
    LEA EAX,[ESP + 0x1c8]               ; 004ff4b1
    PUSH EAX                            ; 004ff4b8
    PUSH 0x630952                       ; 004ff4b9 | = "%d\n"
    PUSH EBX                            ; 004ff4be
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 004ff4bf
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 004ff4c4
    MOV EAX,dword ptr [ESP + 0x1e0]     ; 004ff4c7
    CMP dword ptr [EAX + 0x32c],0x1     ; 004ff4ce
    JGE 0x004ff668                      ; 004ff4d5
        ;   XREF to: 004ff668 (CONDITIONAL_JUMP)  ; LAB_004ff668
    MOV EAX,dword ptr [ESP + 0x1e4]     ; 004ff4db
        ;   Label: LAB_004ff4db
    PUSH EAX                            ; 004ff4e2
    PUSH 0xff                           ; 004ff4e3
    LEA EAX,[ESP + 0x8]                 ; 004ff4e8
    PUSH EAX                            ; 004ff4ec
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 004ff4ed
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004ff4f2
    MOV EAX,dword ptr [ESP + 0x1e0]     ; 004ff4f5
    MOV EDX,dword ptr [EAX + 0x8]       ; 004ff4fc
    XOR EBP,EBP                         ; 004ff4ff
    TEST EDX,EDX                        ; 004ff501
    JLE 0x004ff591                      ; 004ff503
        ;   XREF to: 004ff591 (CONDITIONAL_JUMP)  ; LAB_004ff591
    MOV EBX,EAX                         ; 004ff509
    MOV ECX,0x19                        ; 004ff50b
        ;   Label: LAB_004ff50b
    LEA EDI,[ESP + 0x100]               ; 004ff510
    LEA EAX,[ESP + 0x164]               ; 004ff517
    MOV ESI,0x67ce48                    ; 004ff51e | DAT_0067ce48
    PUSH EAX                            ; 004ff523
    LEA EAX,[ESP + 0x104]               ; 004ff524
    MOVSD.REP ES:EDI,ESI                ; 004ff52b | DAT_0067ce48 | DAT_0067ce4c
    PUSH EAX                            ; 004ff52d
    MOV ECX,0x19                        ; 004ff52e
    LEA EDI,[ESP + 0x16c]               ; 004ff533
    PUSH 0x63095a                       ; 004ff53a | = " %s \"%[^\"]\"\n"
    MOV EAX,dword ptr [ESP + 0x1f0]     ; 004ff53f
    MOV ESI,0x67ceb0                    ; 004ff546 | DAT_0067ceb0
    PUSH EAX                            ; 004ff54b
    MOVSD.REP ES:EDI,ESI                ; 004ff54c | DAT_0067ceb0 | DAT_0067ceb4
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 004ff54e
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    MOV ESI,dword ptr [0x0067d550]      ; 004ff553 | g_CDemonMissionPtr
    MOV EDX,dword ptr [ESI + 0xc]       ; 004ff559 | DAT_02f3374c
    ADD ESP,0x10                        ; 004ff55c
    TEST EDX,EDX                        ; 004ff55f
    JZ 0x004ff69d                       ; 004ff561
        ;   XREF to: 004ff69d (CONDITIONAL_JUMP)  ; LAB_004ff69d
    LEA EAX,[ESP + 0x164]               ; 004ff567
    PUSH EAX                            ; 004ff56e
    PUSH ESI                            ; 004ff56f | g_CDemonMissionInstance
    CALL core_mission.cpp_CDemonMission_getNextLoadedInventoryActor_FUN_00523520 ; 004ff570
        ;   XREF to: 00523520 (UNCONDITIONAL_CALL)  ; CDemonActor * core_mission.cpp_CDemonMission_getNextLoadedInventoryActor_FUN_00523520(CDemonMission * this_ptr, char * actor_name)
    ADD ESP,0x8                         ; 004ff575
    MOV dword ptr [EBX + 0xc],EAX       ; 004ff578
    MOV EAX,dword ptr [ESP + 0x1e0]     ; 004ff57b
        ;   Label: LAB_004ff57b
    INC EBP                             ; 004ff582
    MOV ECX,dword ptr [EAX + 0x8]       ; 004ff583
    ADD EBX,0x4                         ; 004ff586
    CMP EBP,ECX                         ; 004ff589
    JL 0x004ff50b                       ; 004ff58b
        ;   XREF to: 004ff50b (CONDITIONAL_JUMP)  ; LAB_004ff50b
    MOV EBX,dword ptr [ESP + 0x1e4]     ; 004ff591
        ;   Label: LAB_004ff591
    PUSH EBX                            ; 004ff598
    PUSH 0xff                           ; 004ff599
    LEA EAX,[ESP + 0x8]                 ; 004ff59e
    PUSH EAX                            ; 004ff5a2
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 004ff5a3
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004ff5a8
    MOV EAX,dword ptr [ESP + 0x1e0]     ; 004ff5ab
    MOV EDI,dword ptr [EAX + 0x8]       ; 004ff5b2
    XOR ESI,ESI                         ; 004ff5b5
    TEST EDI,EDI                        ; 004ff5b7
    JLE 0x004ff5f0                      ; 004ff5b9
        ;   XREF to: 004ff5f0 (CONDITIONAL_JUMP)  ; LAB_004ff5f0
    MOV EBX,EAX                         ; 004ff5bb
    MOV ECX,dword ptr [ESP + 0x1e4]     ; 004ff5bd
        ;   Label: LAB_004ff5bd
    PUSH ECX                            ; 004ff5c4
    MOV EDI,dword ptr [EBX + 0xc]       ; 004ff5c5
    PUSH EDI                            ; 004ff5c8
    CALL core_actor.cpp_CDemonActor_load_FUN_0040b050 ; 004ff5c9
        ;   XREF to: 0040b050 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_load_FUN_0040b050(CDemonActor * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 004ff5ce
    MOV EAX,dword ptr [ESP + 0x1e0]     ; 004ff5d1
    INC ESI                             ; 004ff5d8
    MOV EBP,dword ptr [EAX + 0x8]       ; 004ff5d9
    ADD EBX,0x4                         ; 004ff5dc
    CMP ESI,EBP                         ; 004ff5df
    JL 0x004ff5bd                       ; 004ff5e1
        ;   XREF to: 004ff5bd (CONDITIONAL_JUMP)  ; LAB_004ff5bd
    LEA EAX,[EAX]                       ; 004ff5e3
    LEA EDX,[EDX]                       ; 004ff5e9
    NOP                                 ; 004ff5ef
    MOV EAX,dword ptr [ESP + 0x1e0]     ; 004ff5f0
        ;   Label: LAB_004ff5f0
    CMP dword ptr [EAX + 0x32c],0x2     ; 004ff5f7
    JL 0x004ff61a                       ; 004ff5fe
        ;   XREF to: 004ff61a (CONDITIONAL_JUMP)  ; LAB_004ff61a
    MOV ECX,dword ptr [ESP + 0x1e4]     ; 004ff600
    PUSH ECX                            ; 004ff607
    PUSH 0xff                           ; 004ff608
    LEA EAX,[ESP + 0x8]                 ; 004ff60d
    PUSH EAX                            ; 004ff611
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 004ff612
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004ff617
    MOV EAX,[0x0067d550]                ; 004ff61a | g_CDemonMissionPtr
        ;   Label: LAB_004ff61a
    MOV EDX,dword ptr [ESP + 0x1e0]     ; 004ff61f
    MOV EAX,dword ptr [EAX + 0xc]       ; 004ff626 | DAT_02f3374c
    MOV dword ptr [EDX + 0x330],0x0     ; 004ff629
    MOV dword ptr [EDX + 0x450],EAX     ; 004ff633
    MOV EBX,dword ptr [ESP + 0x1c8]     ; 004ff639
    TEST EBX,EBX                        ; 004ff640
    JGE 0x004ff6da                      ; 004ff642
        ;   XREF to: 004ff6da (CONDITIONAL_JUMP)  ; LAB_004ff6da
    PUSH 0x3e7                          ; 004ff648
        ;   Label: LAB_004ff648
    MOV ESI,dword ptr [ESP + 0x1e4]     ; 004ff64d
    PUSH ESI                            ; 004ff654
    CALL core_inv.cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004ffe10 ; 004ff655
        ;   XREF to: 004ffe10 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004ffe10(CInventory * this_ptr)
    ADD ESP,0x8                         ; 004ff65a
    ADD ESP,0x1cc                       ; 004ff65d
    POP EBP                             ; 004ff663
    POP EDI                             ; 004ff664
    POP ESI                             ; 004ff665
    POP EBX                             ; 004ff666
    RET                                 ; 004ff667
    MOV ESI,dword ptr [ESP + 0x1e4]     ; 004ff668
        ;   Label: LAB_004ff668
    PUSH ESI                            ; 004ff66f
    PUSH 0xff                           ; 004ff670
    LEA EAX,[ESP + 0x8]                 ; 004ff675
    PUSH EAX                            ; 004ff679
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 004ff67a
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004ff67f
    MOV EDI,dword ptr [ESP + 0x1e0]     ; 004ff682
    PUSH EDI                            ; 004ff689
    PUSH 0x630956                       ; 004ff68a | = "%f\n"
    PUSH ESI                            ; 004ff68f
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 004ff690
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 004ff695
    JMP 0x004ff4db                      ; 004ff698
        ;   XREF to: 004ff4db (UNCONDITIONAL_JUMP)  ; LAB_004ff4db
    LEA EAX,[ESP + 0x100]               ; 004ff69d
        ;   Label: LAB_004ff69d
    PUSH EAX                            ; 004ff6a4
    LEA ESI,[ESP + 0x168]               ; 004ff6a5
    CALL core_actor.cpp_createActorByName_FUN_0040c430 ; 004ff6ac
        ;   XREF to: 0040c430 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_createActorByName_FUN_0040c430(char * class_name)
    ADD ESP,0x4                         ; 004ff6b1
    MOV EDI,EAX                         ; 004ff6b4
    MOV EDX,EAX                         ; 004ff6b6
    PUSH EDI                            ; 004ff6b8
    MOV AL,byte ptr [ESI]               ; 004ff6b9
        ;   Label: LAB_004ff6b9
    MOV byte ptr [EDI],AL               ; 004ff6bb
    CMP AL,0x0                          ; 004ff6bd
    JZ 0x004ff6d1                       ; 004ff6bf
        ;   XREF to: 004ff6d1 (CONDITIONAL_JUMP)  ; LAB_004ff6d1
    MOV AL,byte ptr [ESI + 0x1]         ; 004ff6c1
    ADD ESI,0x2                         ; 004ff6c4
    MOV byte ptr [EDI + 0x1],AL         ; 004ff6c7
    ADD EDI,0x2                         ; 004ff6ca
    CMP AL,0x0                          ; 004ff6cd
    JNZ 0x004ff6b9                      ; 004ff6cf
        ;   XREF to: 004ff6b9 (CONDITIONAL_JUMP)  ; LAB_004ff6b9
    POP EDI                             ; 004ff6d1
        ;   Label: LAB_004ff6d1
    MOV dword ptr [EBX + 0xc],EDX       ; 004ff6d2
    JMP 0x004ff57b                      ; 004ff6d5
        ;   XREF to: 004ff57b (UNCONDITIONAL_JUMP)  ; LAB_004ff57b
    LEA EAX,[EBX*0x4 + 0x0]             ; 004ff6da
        ;   Label: LAB_004ff6da
    MOV ESI,dword ptr [0x03f95d78]      ; 004ff6e1 | g_CWeaponClassInfo.name_hash
    ADD EAX,EDX                         ; 004ff6e7
    PUSH ESI                            ; 004ff6e9
    MOV EBP,dword ptr [EAX + 0xc]       ; 004ff6ea
    PUSH EBP                            ; 004ff6ed
    MOV EDI,EDX                         ; 004ff6ee
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004ff6f0
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EDX,EDI                         ; 004ff6f5
    MOV dword ptr [EDX + 0x330],EAX     ; 004ff6f7
    MOV EDX,dword ptr [EDI + 0x330]     ; 004ff6fd
    ADD ESP,0x8                         ; 004ff703
    TEST EDX,EDX                        ; 004ff706
    JNZ 0x004ff648                      ; 004ff708
        ;   XREF to: 004ff648 (CONDITIONAL_JUMP)  ; LAB_004ff648
    MOV ECX,0x630967                    ; 004ff70e | = "..\\core\\inv.cpp"
    MOV EBX,0x54b                       ; 004ff713
    PUSH 0x630977                       ; 004ff718 | = "CInventory::load - Can't find your we..."
    MOV dword ptr [0x02f0ca48],ECX      ; 004ff71d | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 004ff723 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004ff729
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004ff72e
    JMP 0x004ff648                      ; 004ff731
        ;   XREF to: 004ff648 (UNCONDITIONAL_JUMP)  ; LAB_004ff648

