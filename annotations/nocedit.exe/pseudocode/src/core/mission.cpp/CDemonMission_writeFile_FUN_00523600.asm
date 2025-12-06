; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_mission.cpp_CDemonMission_writeFile_FUN_00523600(CDemonMission * this_ptr)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_game.cpp_CGame_saveGame_FUN_004e0cd0 at 004e0de0
;   core_mission.cpp_CDemonMission_save_FUN_00522e30 at 00522e67
;
; Referenced Globals:
;   TerminatedCString s_core_mission_cpp_00638e50
;   TerminatedCString s_Preparing_actors_00638e64
;   TerminatedCString s_mission_version_actor_ve_00638e78
;   TerminatedCString s_d_d_00638e9b
;   TerminatedCString s_Root_name_of_mission_00638ea2
;   TerminatedCString s_s_00638ebb
;   TerminatedCString s_setList_00638ebf
;   TerminatedCString s_d_00638ecb
;   TerminatedCString s_s_00638ecf
;   TerminatedCString s_actorTypeList_00638ed3
;   TerminatedCString s_d_00638ee5
;   TerminatedCString s_s_d_00638ee9
;   TerminatedCString s_actor_count_00638ef0
;   TerminatedCString s_d_00638f00
;   TerminatedCString s_inventory_actor_count_00638f04
;   ... and 18 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90
;   core_actor.cpp_CDemonActor_save_FUN_0040af30
;   core_actor.cpp_syncActorTypeIDs_FUN_0040c7c0
;   core_gore.cpp_FUN_004ee290
;   core_inv.cpp_CInventory_saveItems_FUN_004ff3b0
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_mission.cpp_CDemonMission_FUN_00523cc0
;   core_mission.cpp_CDemonMission_FUN_00523cf0
;   crt_stdio.c_fprintf_FUN_005fe6d0
;   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
;   shape_memdbg.cpp_SMemHead_checkAllMemory_FUN_0050efe0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00523600
        ;   Label: core_mission.cpp_CDemonMission_writeFile_FUN_00523600
    PUSH ESI                            ; 00523601
    PUSH EDI                            ; 00523602
    PUSH EBP                            ; 00523603
    SUB ESP,0x4                         ; 00523604
    MOV EBX,dword ptr [ESP + 0x18]      ; 00523607
    PUSH 0x1ae                          ; 0052360b
    PUSH 0x638e50                       ; 00523610 | = "..\\core\\mission.cpp" | s_core_mission_cpp_00638e50 = ..\core\mission.cpp
    CALL shape_memdbg.cpp_SMemHead_checkAllMemory_FUN_0050efe0 ; 00523615 | void shape_memdbg.cpp_SMemHead_checkAllMemory_FUN_0050efe0(char * filename, int context)
        ;   XREF to: 0050efe0 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [EBX + 0x884]     ; 0052361a
    ADD ESP,0x8                         ; 00523620
    TEST EDX,EDX                        ; 00523623
    JNZ 0x00523644                      ; 00523625 | LAB_00523644
        ;   XREF to: 00523644 (CONDITIONAL_JUMP)
    PUSH 0x638e64                       ; 00523627 | = "Preparing actors..." | s_Preparing_actors_00638e64 = Preparing actors...
    MOV ECX,dword ptr [0x00678a60]      ; 0052362c | CEditorTools g_CEditorToolsPtr | CEditorTools * g_CEditorToolsPtr
    PUSH ECX                            ; 00523632 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 00523633 | void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00523638
    PUSH EBX                            ; 0052363b
    CALL core_mission.cpp_CDemonMission_FUN_00523cf0 ; 0052363c | void core_mission.cpp_CDemonMission_FUN_00523cf0(CDemonMission * this_ptr)
        ;   XREF to: 00523cf0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00523641
    PUSH 0x638e78                       ; 00523644 | = "// mission version, actor version\n" | s_mission_version_actor_ve_00638e78 = // mission version, actor version

        ;   Label: LAB_00523644
    MOV ESI,dword ptr [ESP + 0x20]      ; 00523649
    PUSH ESI                            ; 0052364d
    MOV dword ptr [EBX + 0x8],0x7       ; 0052364e
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00523655 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0052365a
    PUSH 0x4                            ; 0052365d
    MOV EDI,dword ptr [EBX + 0x8]       ; 0052365f
    PUSH EDI                            ; 00523662
    PUSH 0x638e9b                       ; 00523663 | = "%d,%d\n" | s_d_d_00638e9b = %d,%d

    PUSH ESI                            ; 00523668
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00523669 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0052366e
    PUSH 0x638ea2                       ; 00523671 | = "// Root name of mission\n" | s_Root_name_of_mission_00638ea2 = // Root name of mission

    PUSH ESI                            ; 00523676
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00523677 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0052367c
    LEA EAX,[EBX + 0x44]                ; 0052367f
    PUSH EAX                            ; 00523682
    PUSH 0x638ebb                       ; 00523683 | = "%s\n" | s_s_00638ebb = %s

    PUSH ESI                            ; 00523688
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00523689 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0052368e
    PUSH 0x638ebf                       ; 00523691 | = "// setList\n" | s_setList_00638ebf = // setList

    PUSH ESI                            ; 00523696
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00523697 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0052369c
    MOV EBP,ESI                         ; 0052369f
    MOV ESI,dword ptr [EBX + 0x144]     ; 005236a1
    PUSH ESI                            ; 005236a7
    PUSH 0x638ecb                       ; 005236a8 | = "%d\n" | s_d_00638ecb = %d

    MOV EDI,EBP                         ; 005236ad
    PUSH EDI                            ; 005236af
    XOR ESI,ESI                         ; 005236b0
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 005236b2 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    MOV EBP,dword ptr [EBX + 0x144]     ; 005236b7
    ADD ESP,0xc                         ; 005236bd
    TEST EBP,EBP                        ; 005236c0
    JLE 0x005236f0                      ; 005236c2 | LAB_005236f0
        ;   XREF to: 005236f0 (CONDITIONAL_JUMP)
    LEA EDI,[EBX + 0x148]               ; 005236c4
    PUSH EDI                            ; 005236ca
        ;   Label: LAB_005236ca
    PUSH 0x638ecf                       ; 005236cb | = "%s\n" | s_s_00638ecf = %s

    MOV EAX,dword ptr [ESP + 0x24]      ; 005236d0
    PUSH EAX                            ; 005236d4
    INC ESI                             ; 005236d5
    ADD EDI,0x100                       ; 005236d6
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 005236dc | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [EBX + 0x144]     ; 005236e1
    ADD ESP,0xc                         ; 005236e7
    CMP ESI,EDX                         ; 005236ea
    JL 0x005236ca                       ; 005236ec | LAB_005236ca
        ;   XREF to: 005236ca (CONDITIONAL_JUMP)
    MOV EAX,EAX                         ; 005236ee
    PUSH 0x638ed3                       ; 005236f0 | = "// actorTypeList\n" | s_actorTypeList_00638ed3 = // actorTypeList

        ;   Label: LAB_005236f0
    MOV ECX,dword ptr [ESP + 0x20]      ; 005236f5
    PUSH ECX                            ; 005236f9
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 005236fa | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005236ff
    MOV ESI,dword ptr [0x00822044]      ; 00523702 | int g_NumActorClassTypes
    PUSH ESI                            ; 00523708
    PUSH 0x638ee5                       ; 00523709 | = "%d\n" | s_d_00638ee5 = %d

    MOV EDI,dword ptr [ESP + 0x24]      ; 0052370e
    PUSH EDI                            ; 00523712
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00523713 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00523718
    CALL core_actor.cpp_syncActorTypeIDs_FUN_0040c7c0 ; 0052371b | void core_actor.cpp_syncActorTypeIDs_FUN_0040c7c0()
        ;   XREF to: 0040c7c0 (UNCONDITIONAL_CALL)
    MOV EBP,dword ptr [0x00822044]      ; 00523720 | int g_NumActorClassTypes
    XOR ESI,ESI                         ; 00523726
    TEST EBP,EBP                        ; 00523728
    JLE 0x00523760                      ; 0052372a | LAB_00523760
        ;   XREF to: 00523760 (CONDITIONAL_JUMP)
    XOR EDI,EDI                         ; 0052372c
    MOV EAX,dword ptr [EDI + 0x822048]  ; 0052372e | CDemonActorType *[200] g_ActorClassRegistrations
        ;   Label: LAB_0052372e
    MOV EDX,dword ptr [EAX + 0x34]      ; 00523734
    PUSH EDX                            ; 00523737
    PUSH EAX                            ; 00523738
    PUSH 0x638ee9                       ; 00523739 | = "%s %d\n" | s_s_d_00638ee9 = %s %d

    MOV ECX,dword ptr [ESP + 0x28]      ; 0052373e
    PUSH ECX                            ; 00523742
    ADD EDI,0x4                         ; 00523743
    INC ESI                             ; 00523746
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00523747 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    MOV EBP,dword ptr [0x00822044]      ; 0052374c | int g_NumActorClassTypes
    ADD ESP,0x10                        ; 00523752
    CMP ESI,EBP                         ; 00523755
    JL 0x0052372e                       ; 00523757 | LAB_0052372e
        ;   XREF to: 0052372e (CONDITIONAL_JUMP)
    LEA EAX,[EAX]                       ; 00523759
    NOP                                 ; 0052375f
    PUSH 0x638ef0                       ; 00523760 | = "// actor count\n" | s_actor_count_00638ef0 = // actor count

        ;   Label: LAB_00523760
    MOV EAX,dword ptr [ESP + 0x20]      ; 00523765
    PUSH EAX                            ; 00523769
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0052376a | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0052376f
    PUSH EBX                            ; 00523772
    CALL core_mission.cpp_CDemonMission_FUN_00523cc0 ; 00523773 | int core_mission.cpp_CDemonMission_FUN_00523cc0(CDemonMission * this_ptr)
        ;   XREF to: 00523cc0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00523778
    PUSH EAX                            ; 0052377b
    PUSH 0x638f00                       ; 0052377c | = "%d\n" | s_d_00638f00 = %d

    MOV EDX,dword ptr [ESP + 0x24]      ; 00523781
    PUSH EDX                            ; 00523785
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00523786 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0052378b
    PUSH 0x638f04                       ; 0052378e | = "// inventory actor count\n" | s_inventory_actor_count_00638f04 = // inventory actor count

    MOV ECX,dword ptr [ESP + 0x20]      ; 00523793
    PUSH ECX                            ; 00523797
    XOR EDI,EDI                         ; 00523798
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0052379a | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    MOV ESI,dword ptr [EBX + 0x548]     ; 0052379f
    ADD ESP,0x8                         ; 005237a5
    TEST ESI,ESI                        ; 005237a8
    JZ 0x005237d2                       ; 005237aa | LAB_005237d2
        ;   XREF to: 005237d2 (CONDITIONAL_JUMP)
    MOV EBP,dword ptr [0x02db880c]      ; 005237ac | g_CHeroClassInfo.name_hash
        ;   Label: LAB_005237ac
    PUSH EBP                            ; 005237b2
    PUSH ESI                            ; 005237b3
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 005237b4 | CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005237b9
    TEST EAX,EAX                        ; 005237bc
    JZ 0x005237c8                       ; 005237be | LAB_005237c8
        ;   XREF to: 005237c8 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EAX + 0x1f740]   ; 005237c0
    ADD EDI,EAX                         ; 005237c6
    MOV ESI,dword ptr [ESI + 0x14c]     ; 005237c8
        ;   Label: LAB_005237c8
    TEST ESI,ESI                        ; 005237ce
    JNZ 0x005237ac                      ; 005237d0 | LAB_005237ac
        ;   XREF to: 005237ac (CONDITIONAL_JUMP)
    PUSH EDI                            ; 005237d2
        ;   Label: LAB_005237d2
    PUSH 0x638f1e                       ; 005237d3 | = "%d\n" | s_d_00638f1e = %d

    MOV ESI,dword ptr [ESP + 0x24]      ; 005237d8
    PUSH ESI                            ; 005237dc
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 005237dd | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005237e2
    PUSH 0x638f22                       ; 005237e5 | = "// actor name list\n" | s_actor_name_list_00638f22 = // actor name list

    PUSH ESI                            ; 005237ea
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 005237eb | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005237f0
    MOV ESI,dword ptr [EBX + 0x548]     ; 005237f3
    MOV dword ptr [EBX + 0x88c],0x0     ; 005237f9
    TEST ESI,ESI                        ; 00523803
    JZ 0x00523871                       ; 00523805 | LAB_00523871
        ;   XREF to: 00523871 (CONDITIONAL_JUMP)
    MOV EBP,0x638f3f                    ; 00523807 | = "..\\core\\mission.cpp" | s_core_mission_cpp_00638f3f = ..\core\mission.cpp
    PUSH ESI                            ; 0052380c
        ;   Label: LAB_0052380c
    PUSH ESI                            ; 0052380d
    CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90 ; 0052380e | char * core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90(CDemonActor * this_ptr)
        ;   XREF to: 00408b90 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00523813
    PUSH EAX                            ; 00523816
    PUSH 0x638f36                       ; 00523817 | = "%s \"%s\"\n" | s_s_s_00638f36 = %s "%s"

    MOV ECX,dword ptr [ESP + 0x28]      ; 0052381c
    PUSH ECX                            ; 00523820
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00523821 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    MOV EDI,dword ptr [EBX + 0x88c]     ; 00523826
    ADD ESP,0x10                        ; 0052382c
    CMP EDI,0x7d0                       ; 0052382f
    JL 0x00523854                       ; 00523835 | LAB_00523854
        ;   XREF to: 00523854 (CONDITIONAL_JUMP)
    MOV EAX,0x1e9                       ; 00523837
    PUSH 0x638f53                       ; 0052383c | = "Too many actors" | s_Too_many_actors_00638f53 = Too many actors
    MOV dword ptr [0x02f0ca48],EBP      ; 00523841 | char * g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 00523847 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0052384c | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00523851
    MOV EAX,dword ptr [EBX + 0x88c]     ; 00523854
        ;   Label: LAB_00523854
    MOV dword ptr [EBX + EAX*0x4 + 0x890],ESI ; 0052385a
    INC dword ptr [EBX + 0x88c]         ; 00523861
    MOV ESI,dword ptr [ESI + 0x14c]     ; 00523867
    TEST ESI,ESI                        ; 0052386d
    JNZ 0x0052380c                      ; 0052386f | LAB_0052380c
        ;   XREF to: 0052380c (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0x548]     ; 00523871
        ;   Label: LAB_00523871
    MOV dword ptr [ESP],EAX             ; 00523877
    TEST EAX,EAX                        ; 0052387a
    JZ 0x005238ee                       ; 0052387c | LAB_005238ee
        ;   XREF to: 005238ee (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [0x02db880c]      ; 0052387e | g_CHeroClassInfo.name_hash
        ;   Label: LAB_0052387e
    PUSH ESI                            ; 00523884
    MOV EDI,dword ptr [ESP + 0x4]       ; 00523885
    PUSH EDI                            ; 00523889
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 0052388a | CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0052388f
    TEST EAX,EAX                        ; 00523892
    JZ 0x005238de                       ; 00523894 | LAB_005238de
        ;   XREF to: 005238de (CONDITIONAL_JUMP)
    LEA EBP,[EAX + 0x1f738]             ; 00523896
    XOR EDI,EDI                         ; 0052389c
    MOV ESI,EBP                         ; 0052389e
    MOV EAX,dword ptr [EBP + 0x8]       ; 005238a0
        ;   Label: LAB_005238a0
    CMP EDI,EAX                         ; 005238a3
    JGE 0x0052397d                      ; 005238a5 | LAB_0052397d
        ;   XREF to: 0052397d (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0x88c],0x7d0   ; 005238ab
    JGE 0x00523956                      ; 005238b5 | LAB_00523956
        ;   XREF to: 00523956 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [EBX + 0x88c]     ; 005238bb
        ;   Label: LAB_005238bb
    MOV EAX,dword ptr [ESI + 0xc]       ; 005238c1
    MOV dword ptr [EBX + EDX*0x4 + 0x890],EAX ; 005238c4
    MOV EDX,dword ptr [EBX + 0x88c]     ; 005238cb
    ADD ESI,0x4                         ; 005238d1
    INC EDX                             ; 005238d4
    INC EDI                             ; 005238d5
    MOV dword ptr [EBX + 0x88c],EDX     ; 005238d6
    JMP 0x005238a0                      ; 005238dc | LAB_005238a0
        ;   XREF to: 005238a0 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP]             ; 005238de
        ;   Label: LAB_005238de
    MOV EAX,dword ptr [EAX + 0x14c]     ; 005238e1
    MOV dword ptr [ESP],EAX             ; 005238e7
    TEST EAX,EAX                        ; 005238ea
    JNZ 0x0052387e                      ; 005238ec | LAB_0052387e
        ;   XREF to: 0052387e (CONDITIONAL_JUMP)
    PUSH 0x638f87                       ; 005238ee | = "// actor data list\n" | s_actor_data_list_00638f87 = // actor data list

        ;   Label: LAB_005238ee
    MOV ECX,dword ptr [ESP + 0x20]      ; 005238f3
    PUSH ECX                            ; 005238f7
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 005238f8 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    MOV ESI,dword ptr [EBX + 0x548]     ; 005238fd
    ADD ESP,0x8                         ; 00523903
    TEST ESI,ESI                        ; 00523906
    JZ 0x00523930                       ; 00523908 | LAB_00523930
        ;   XREF to: 00523930 (CONDITIONAL_JUMP)
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0052390a
    PUSH EBP                            ; 0052390e
        ;   Label: LAB_0052390e
    PUSH ESI                            ; 0052390f
    CALL core_actor.cpp_CDemonActor_save_FUN_0040af30 ; 00523910 | void core_actor.cpp_CDemonActor_save_FUN_0040af30(CDemonActor * this_ptr, FILE * file_handle)
        ;   XREF to: 0040af30 (UNCONDITIONAL_CALL)
    MOV ESI,dword ptr [ESI + 0x14c]     ; 00523915
    ADD ESP,0x8                         ; 0052391b
    TEST ESI,ESI                        ; 0052391e
    JNZ 0x0052390e                      ; 00523920 | LAB_0052390e
        ;   XREF to: 0052390e (CONDITIONAL_JUMP)
    LEA EAX,[EAX]                       ; 00523922
    LEA EDX,[EDX]                       ; 00523928
    MOV EAX,EAX                         ; 0052392e
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00523930
        ;   Label: LAB_00523930
    PUSH ECX                            ; 00523934
    MOV ESI,dword ptr [0x0067b9a0]      ; 00523935 | CGore * g_CGorePtr
    PUSH ESI                            ; 0052393b | CGore g_CGoreInstance
    CALL core_gore.cpp_FUN_004ee290     ; 0052393c | int core_gore.cpp_FUN_004ee290(CGore * this_ptr)
        ;   XREF to: 004ee290 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00523941
    MOV dword ptr [EBX + 0x88c],0x0     ; 00523944
    ADD ESP,0x4                         ; 0052394e
    POP EBP                             ; 00523951
    POP EDI                             ; 00523952
    POP ESI                             ; 00523953
    POP EBX                             ; 00523954
    RET                                 ; 00523955
    MOV ECX,0x638f63                    ; 00523956 | = "..\\core\\mission.cpp" | s_core_mission_cpp_00638f63 = ..\core\mission.cpp
        ;   Label: LAB_00523956
    MOV EAX,0x1f4                       ; 0052395b
    PUSH 0x638f77                       ; 00523960 | = "Too many actors" | s_Too_many_actors_00638f77 = Too many actors
    MOV dword ptr [0x02f0ca48],ECX      ; 00523965 | char * g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 0052396b | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00523970 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00523975
    JMP 0x005238bb                      ; 00523978 | LAB_005238bb
        ;   XREF to: 005238bb (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0052397d
        ;   Label: LAB_0052397d
    PUSH EAX                            ; 00523981
    PUSH EBP                            ; 00523982
    CALL core_inv.cpp_CInventory_saveItems_FUN_004ff3b0 ; 00523983 | void core_inv.cpp_CInventory_saveItems_FUN_004ff3b0(CInventory * this_ptr, FILE * file_handle)
        ;   XREF to: 004ff3b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00523988
    JMP 0x005238de                      ; 0052398b | LAB_005238de
        ;   XREF to: 005238de (UNCONDITIONAL_JUMP)

