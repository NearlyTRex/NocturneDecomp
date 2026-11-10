; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mission_cpp_CDemonMission_writeFile_FUN_0051ac40(CDemonMission *this_ptr,_FILE *file_handle)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_game.cpp_FUN_004d6420 at 004d6539
;   core_mission.cpp_FUN_0051a490 at 0051a4b5
;
; Referenced Globals:
;   TerminatedCString s_mission_version_actor_ve_005e94b4
;   TerminatedCString s_d_d_005e94d7
;   TerminatedCString s_Root_name_of_mission_005e94de
;   undefined4 DAT_005e94f7
;   TerminatedCString s_setList_005e94fb
;   undefined4 DAT_005e9507
;   undefined4 DAT_005e950b
;   TerminatedCString s_actorTypeList_005e950f
;   undefined4 DAT_005e9521
;   TerminatedCString s_s_d_005e9525
;   TerminatedCString s_actor_count_005e952c
;   undefined4 DAT_005e953c
;   TerminatedCString s_inventory_actor_count_005e9540
;   undefined4 DAT_005e955a
;   TerminatedCString s_actor_name_list_005e955e
;   ... and 13 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_actor.cpp_CDemonActor_getActorClassName_FUN_00408830
;   core_actor.cpp_CDemonActor_save_FUN_0040adb0
;   core_actor.cpp_syncActorTypeIDs_FUN_0040c630
;   core_gore.cpp_CGore_save_FUN_004e6730
;   core_inv.cpp_CInventory_saveItems_FUN_004f9750
;   core_main.c_FUN_005030e0
;   core_mission.cpp_CDemonMission_countActors_FUN_0051b280
;   crt_unknown.c_FUN_005c03c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051ac40
        ;   Label: core_mission.cpp_CDemonMission_writeFile_FUN_0051ac40
    PUSH ESI                            ; 0051ac41
    PUSH EDI                            ; 0051ac42
    PUSH EBP                            ; 0051ac43
    SUB ESP,0x4                         ; 0051ac44
    MOV EBX,dword ptr [ESP + 0x18]      ; 0051ac47
    PUSH 0x5e94b4                       ; 0051ac4b | = "// mission version, actor version\n"
    MOV EDX,dword ptr [ESP + 0x20]      ; 0051ac50
    PUSH EDX                            ; 0051ac54
    MOV dword ptr [EBX + 0x100c],0x7    ; 0051ac55
    CALL crt_unknown.c_FUN_005c03c0     ; 0051ac5f
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x8                         ; 0051ac64
    PUSH 0x4                            ; 0051ac67
    MOV ECX,dword ptr [EBX + 0x100c]    ; 0051ac69
    PUSH ECX                            ; 0051ac6f
    PUSH 0x5e94d7                       ; 0051ac70 | = "%d,%d\n"
    MOV ESI,dword ptr [ESP + 0x28]      ; 0051ac75
    PUSH ESI                            ; 0051ac79
    CALL crt_unknown.c_FUN_005c03c0     ; 0051ac7a
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x10                        ; 0051ac7f
    PUSH 0x5e94de                       ; 0051ac82 | = "// Root name of mission\n"
    PUSH ESI                            ; 0051ac87
    CALL crt_unknown.c_FUN_005c03c0     ; 0051ac88
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x8                         ; 0051ac8d
    LEA EAX,[EBX + 0x1018]              ; 0051ac90
    PUSH EAX                            ; 0051ac96
    PUSH 0x5e94f7                       ; 0051ac97 | DAT_005e94f7
    PUSH ESI                            ; 0051ac9c
    CALL crt_unknown.c_FUN_005c03c0     ; 0051ac9d
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0xc                         ; 0051aca2
    PUSH 0x5e94fb                       ; 0051aca5 | = "// setList\n"
    PUSH ESI                            ; 0051acaa
    CALL crt_unknown.c_FUN_005c03c0     ; 0051acab
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x8                         ; 0051acb0
    MOV EDX,dword ptr [EBX + 0x4]       ; 0051acb3
    PUSH EDX                            ; 0051acb6
    PUSH 0x5e9507                       ; 0051acb7 | DAT_005e9507
    MOV EDI,ESI                         ; 0051acbc
    PUSH ESI                            ; 0051acbe
    XOR EDI,ESI                         ; 0051acbf
    CALL crt_unknown.c_FUN_005c03c0     ; 0051acc1
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    MOV ESI,dword ptr [EBX + 0x4]       ; 0051acc6
    ADD ESP,0xc                         ; 0051acc9
    TEST ESI,ESI                        ; 0051accc
    JLE 0x0051ad00                      ; 0051acce
        ;   XREF to: 0051ad00 (CONDITIONAL_JUMP)  ; LAB_0051ad00
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0051acd0
    LEA ESI,[EBX + 0x8]                 ; 0051acd4
    PUSH ESI                            ; 0051acd7
        ;   Label: LAB_0051acd7
    PUSH 0x5e950b                       ; 0051acd8 | DAT_005e950b
    PUSH EBP                            ; 0051acdd
    INC EDI                             ; 0051acde
    ADD ESI,0x100                       ; 0051acdf
    CALL crt_unknown.c_FUN_005c03c0     ; 0051ace5
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    MOV EAX,dword ptr [EBX + 0x4]       ; 0051acea
    ADD ESP,0xc                         ; 0051aced
    CMP EDI,EAX                         ; 0051acf0
    JL 0x0051acd7                       ; 0051acf2
        ;   XREF to: 0051acd7 (CONDITIONAL_JUMP)  ; LAB_0051acd7
    LEA EAX,[EAX]                       ; 0051acf4
    LEA EDX,[EDX]                       ; 0051acfa
    PUSH 0x5e950f                       ; 0051ad00 | = "// actorTypeList\n"
        ;   Label: LAB_0051ad00
    MOV EDX,dword ptr [ESP + 0x20]      ; 0051ad05
    PUSH EDX                            ; 0051ad09
    CALL crt_unknown.c_FUN_005c03c0     ; 0051ad0a
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x8                         ; 0051ad0f
    MOV ECX,dword ptr [0x007c3044]      ; 0051ad12 | DAT_007c3044
    PUSH ECX                            ; 0051ad18
    PUSH 0x5e9521                       ; 0051ad19 | DAT_005e9521
    MOV ESI,dword ptr [ESP + 0x24]      ; 0051ad1e
    PUSH ESI                            ; 0051ad22
    CALL crt_unknown.c_FUN_005c03c0     ; 0051ad23
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0xc                         ; 0051ad28
    CALL core_actor.cpp_syncActorTypeIDs_FUN_0040c630 ; 0051ad2b
        ;   XREF to: 0040c630 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_syncActorTypeIDs_FUN_0040c630()
    MOV EDI,dword ptr [0x007c3044]      ; 0051ad30 | DAT_007c3044
    XOR ESI,ESI                         ; 0051ad36
    TEST EDI,EDI                        ; 0051ad38
    JLE 0x0051ad70                      ; 0051ad3a
        ;   XREF to: 0051ad70 (CONDITIONAL_JUMP)  ; LAB_0051ad70
    XOR EDI,EDI                         ; 0051ad3c
    MOV EAX,dword ptr [EDI + 0x7c3048]  ; 0051ad3e | DAT_007c3048 | DAT_007c304c
        ;   Label: LAB_0051ad3e
    MOV EBP,dword ptr [EAX + 0x34]      ; 0051ad44
    PUSH EBP                            ; 0051ad47
    PUSH EAX                            ; 0051ad48
    PUSH 0x5e9525                       ; 0051ad49 | = "%s %d\n"
    MOV EAX,dword ptr [ESP + 0x28]      ; 0051ad4e
    PUSH EAX                            ; 0051ad52
    ADD EDI,0x4                         ; 0051ad53
    INC ESI                             ; 0051ad56
    CALL crt_unknown.c_FUN_005c03c0     ; 0051ad57
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    MOV EDX,dword ptr [0x007c3044]      ; 0051ad5c | DAT_007c3044
    ADD ESP,0x10                        ; 0051ad62
    CMP ESI,EDX                         ; 0051ad65
    JL 0x0051ad3e                       ; 0051ad67
        ;   XREF to: 0051ad3e (CONDITIONAL_JUMP)  ; LAB_0051ad3e
    LEA EAX,[EAX]                       ; 0051ad69
    NOP                                 ; 0051ad6f
    PUSH 0x5e952c                       ; 0051ad70 | = "// actor count\n"
        ;   Label: LAB_0051ad70
    MOV ECX,dword ptr [ESP + 0x20]      ; 0051ad75
    PUSH ECX                            ; 0051ad79
    CALL crt_unknown.c_FUN_005c03c0     ; 0051ad7a
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x8                         ; 0051ad7f
    PUSH EBX                            ; 0051ad82
    CALL core_mission.cpp_CDemonMission_countActors_FUN_0051b280 ; 0051ad83
        ;   XREF to: 0051b280 (UNCONDITIONAL_CALL)  ; int core_mission.cpp_CDemonMission_countActors_FUN_0051b280(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 0051ad88
    PUSH EAX                            ; 0051ad8b
    PUSH 0x5e953c                       ; 0051ad8c | DAT_005e953c
    MOV ESI,dword ptr [ESP + 0x24]      ; 0051ad91
    PUSH ESI                            ; 0051ad95
    CALL crt_unknown.c_FUN_005c03c0     ; 0051ad96
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0xc                         ; 0051ad9b
    PUSH 0x5e9540                       ; 0051ad9e | = "// inventory actor count\n"
    PUSH ESI                            ; 0051ada3
    XOR EDI,EDI                         ; 0051ada4
    CALL crt_unknown.c_FUN_005c03c0     ; 0051ada6
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    MOV ESI,dword ptr [EBX + 0x1118]    ; 0051adab
    ADD ESP,0x8                         ; 0051adb1
    TEST ESI,ESI                        ; 0051adb4
    JZ 0x0051adde                       ; 0051adb6
        ;   XREF to: 0051adde (CONDITIONAL_JUMP)  ; LAB_0051adde
    MOV ECX,dword ptr [0x01d06b10]      ; 0051adb8 | g_CHeroClassInfo.name_hash
        ;   Label: LAB_0051adb8
    PUSH ECX                            ; 0051adbe
    PUSH ESI                            ; 0051adbf
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 0051adc0
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 0051adc5
    TEST EAX,EAX                        ; 0051adc8
    JZ 0x0051add4                       ; 0051adca
        ;   XREF to: 0051add4 (CONDITIONAL_JUMP)  ; LAB_0051add4
    MOV EAX,dword ptr [EAX + 0x1faf8]   ; 0051adcc
    ADD EDI,EAX                         ; 0051add2
    MOV ESI,dword ptr [ESI + 0x14c]     ; 0051add4
        ;   Label: LAB_0051add4
    TEST ESI,ESI                        ; 0051adda
    JNZ 0x0051adb8                      ; 0051addc
        ;   XREF to: 0051adb8 (CONDITIONAL_JUMP)  ; LAB_0051adb8
    PUSH EDI                            ; 0051adde
        ;   Label: LAB_0051adde
    PUSH 0x5e955a                       ; 0051addf | DAT_005e955a
    MOV EAX,dword ptr [ESP + 0x24]      ; 0051ade4
    PUSH EAX                            ; 0051ade8
    CALL crt_unknown.c_FUN_005c03c0     ; 0051ade9
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0xc                         ; 0051adee
    PUSH 0x5e955e                       ; 0051adf1 | = "// actor name list\n"
    MOV EDX,dword ptr [ESP + 0x20]      ; 0051adf6
    PUSH EDX                            ; 0051adfa
    CALL crt_unknown.c_FUN_005c03c0     ; 0051adfb
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x8                         ; 0051ae00
    MOV ESI,dword ptr [EBX + 0x1118]    ; 0051ae03
    MOV dword ptr [EBX + 0x145c],0x0    ; 0051ae09
    TEST ESI,ESI                        ; 0051ae13
    JZ 0x0051ae82                       ; 0051ae15
        ;   XREF to: 0051ae82 (CONDITIONAL_JUMP)  ; LAB_0051ae82
    PUSH ESI                            ; 0051ae17
        ;   Label: LAB_0051ae17
    PUSH ESI                            ; 0051ae18
    CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00408830 ; 0051ae19
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; char * core_actor.cpp_CDemonActor_getActorClassName_FUN_00408830(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0051ae1e
    PUSH EAX                            ; 0051ae21
    PUSH 0x5e9572                       ; 0051ae22 | = "%s \"%s\"\n"
    MOV EAX,dword ptr [ESP + 0x28]      ; 0051ae27
    PUSH EAX                            ; 0051ae2b
    CALL crt_unknown.c_FUN_005c03c0     ; 0051ae2c
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    MOV EDX,dword ptr [EBX + 0x145c]    ; 0051ae31
    ADD ESP,0x10                        ; 0051ae37
    CMP EDX,0x1770                      ; 0051ae3a
    JL 0x0051ae65                       ; 0051ae40
        ;   XREF to: 0051ae65 (CONDITIONAL_JUMP)  ; LAB_0051ae65
    MOV ECX,0x5e957b                    ; 0051ae42 | = "..\\core\\mission.cpp"
    MOV EDI,0x1f0                       ; 0051ae47
    PUSH 0x5e958f                       ; 0051ae4c | = "Too many actors"
    MOV dword ptr [0x01d1d400],ECX      ; 0051ae51 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 0051ae57 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0051ae5d
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0051ae62
    MOV EAX,dword ptr [EBX + 0x145c]    ; 0051ae65
        ;   Label: LAB_0051ae65
    MOV dword ptr [EBX + EAX*0x4 + 0x1460],ESI ; 0051ae6b
    INC dword ptr [EBX + 0x145c]        ; 0051ae72
    MOV ESI,dword ptr [ESI + 0x14c]     ; 0051ae78
    TEST ESI,ESI                        ; 0051ae7e
    JNZ 0x0051ae17                      ; 0051ae80
        ;   XREF to: 0051ae17 (CONDITIONAL_JUMP)  ; LAB_0051ae17
    MOV EAX,dword ptr [EBX + 0x1118]    ; 0051ae82
        ;   Label: LAB_0051ae82
    MOV dword ptr [ESP],EAX             ; 0051ae88
    TEST EAX,EAX                        ; 0051ae8b
    JZ 0x0051aeff                       ; 0051ae8d
        ;   XREF to: 0051aeff (CONDITIONAL_JUMP)  ; LAB_0051aeff
    MOV EDX,dword ptr [0x01d06b10]      ; 0051ae8f | g_CHeroClassInfo.name_hash
        ;   Label: LAB_0051ae8f
    PUSH EDX                            ; 0051ae95
    MOV ECX,dword ptr [ESP + 0x4]       ; 0051ae96
    PUSH ECX                            ; 0051ae9a
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 0051ae9b
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 0051aea0
    TEST EAX,EAX                        ; 0051aea3
    JZ 0x0051aeef                       ; 0051aea5
        ;   XREF to: 0051aeef (CONDITIONAL_JUMP)  ; LAB_0051aeef
    LEA EBP,[EAX + 0x1fae8]             ; 0051aea7
    XOR EDI,EDI                         ; 0051aead
    MOV ESI,EBP                         ; 0051aeaf
    MOV EAX,dword ptr [EBP + 0x10]      ; 0051aeb1
        ;   Label: LAB_0051aeb1
    CMP EDI,EAX                         ; 0051aeb4
    JGE 0x0051af8d                      ; 0051aeb6
        ;   XREF to: 0051af8d (CONDITIONAL_JUMP)  ; LAB_0051af8d
    CMP dword ptr [EBX + 0x145c],0x1770 ; 0051aebc
    JGE 0x0051af66                      ; 0051aec6
        ;   XREF to: 0051af66 (CONDITIONAL_JUMP)  ; LAB_0051af66
    MOV EAX,dword ptr [EBX + 0x145c]    ; 0051aecc
        ;   Label: LAB_0051aecc
    MOV EDX,dword ptr [ESI + 0x14]      ; 0051aed2
    MOV dword ptr [EBX + EAX*0x4 + 0x1460],EDX ; 0051aed5
    MOV EDX,dword ptr [EBX + 0x145c]    ; 0051aedc
    ADD ESI,0x4                         ; 0051aee2
    INC EDX                             ; 0051aee5
    INC EDI                             ; 0051aee6
    MOV dword ptr [EBX + 0x145c],EDX    ; 0051aee7
    JMP 0x0051aeb1                      ; 0051aeed
        ;   XREF to: 0051aeb1 (UNCONDITIONAL_JUMP)  ; LAB_0051aeb1
    MOV EAX,dword ptr [ESP]             ; 0051aeef
        ;   Label: LAB_0051aeef
    MOV EAX,dword ptr [EAX + 0x14c]     ; 0051aef2
    MOV dword ptr [ESP],EAX             ; 0051aef8
    TEST EAX,EAX                        ; 0051aefb
    JNZ 0x0051ae8f                      ; 0051aefd
        ;   XREF to: 0051ae8f (CONDITIONAL_JUMP)  ; LAB_0051ae8f
    PUSH 0x5e95c3                       ; 0051aeff | = "// actor data list\n"
        ;   Label: LAB_0051aeff
    MOV EAX,dword ptr [ESP + 0x20]      ; 0051af04
    PUSH EAX                            ; 0051af08
    CALL crt_unknown.c_FUN_005c03c0     ; 0051af09
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    MOV ESI,dword ptr [EBX + 0x1118]    ; 0051af0e
    ADD ESP,0x8                         ; 0051af14
    TEST ESI,ESI                        ; 0051af17
    JZ 0x0051af40                       ; 0051af19
        ;   XREF to: 0051af40 (CONDITIONAL_JUMP)  ; LAB_0051af40
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0051af1b
    PUSH EDI                            ; 0051af1f
        ;   Label: LAB_0051af1f
    PUSH ESI                            ; 0051af20
    CALL core_actor.cpp_CDemonActor_save_FUN_0040adb0 ; 0051af21
        ;   XREF to: 0040adb0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_save_FUN_0040adb0(CDemonActor * this_ptr, _FILE * file_handle)
    MOV ESI,dword ptr [ESI + 0x14c]     ; 0051af26
    ADD ESP,0x8                         ; 0051af2c
    TEST ESI,ESI                        ; 0051af2f
    JNZ 0x0051af1f                      ; 0051af31
        ;   XREF to: 0051af1f (CONDITIONAL_JUMP)  ; LAB_0051af1f
    LEA EAX,[EAX]                       ; 0051af33
    LEA EDX,[EDX]                       ; 0051af39
    NOP                                 ; 0051af3f
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0051af40
        ;   Label: LAB_0051af40
    PUSH ECX                            ; 0051af44
    MOV ESI,dword ptr [0x0061dca4]      ; 0051af45 | g_CGorePtr
    PUSH ESI                            ; 0051af4b
    CALL core_gore.cpp_CGore_save_FUN_004e6730 ; 0051af4c
        ;   XREF to: 004e6730 (UNCONDITIONAL_CALL)  ; int core_gore.cpp_CGore_save_FUN_004e6730(CGore * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 0051af51
    MOV dword ptr [EBX + 0x145c],0x0    ; 0051af54
    ADD ESP,0x4                         ; 0051af5e
    POP EBP                             ; 0051af61
    POP EDI                             ; 0051af62
    POP ESI                             ; 0051af63
    POP EBX                             ; 0051af64
    RET                                 ; 0051af65
    MOV ECX,0x5e959f                    ; 0051af66 | = "..\\core\\mission.cpp"
        ;   Label: LAB_0051af66
    MOV EAX,0x1fb                       ; 0051af6b
    PUSH 0x5e95b3                       ; 0051af70 | = "Too many actors"
    MOV dword ptr [0x01d1d400],ECX      ; 0051af75 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0051af7b | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0051af80
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0051af85
    JMP 0x0051aecc                      ; 0051af88
        ;   XREF to: 0051aecc (UNCONDITIONAL_JUMP)  ; LAB_0051aecc
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0051af8d
        ;   Label: LAB_0051af8d
    PUSH EAX                            ; 0051af91
    PUSH EBP                            ; 0051af92
    CALL core_inv.cpp_CInventory_saveItems_FUN_004f9750 ; 0051af93
        ;   XREF to: 004f9750 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_saveItems_FUN_004f9750(CInventory * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 0051af98
    JMP 0x0051aeef                      ; 0051af9b
        ;   XREF to: 0051aeef (UNCONDITIONAL_JUMP)  ; LAB_0051aeef

