; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mission_cpp_FUN_004fbce0(CDemonMission *this_ptr,_FILE *file_handle)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_game.cpp_FUN_004bb9b0 at 004bbac4
;   core_mission.cpp_FUN_004fb530 at 004fb555
;
; Referenced Globals:
;   TerminatedCString s_mission_version_actor_ve_005de471
;   TerminatedCString s_d_d_005de494
;   TerminatedCString s_Root_name_of_mission_005de49b
;   undefined4 DAT_005de4b4
;   TerminatedCString s_setList_005de4b8
;   undefined4 DAT_005de4c4
;   undefined4 DAT_005de4c8
;   TerminatedCString s_actorTypeList_005de4cc
;   undefined4 DAT_005de4de
;   TerminatedCString s_s_d_005de4e2
;   TerminatedCString s_actor_count_005de4e9
;   undefined4 DAT_005de4f9
;   TerminatedCString s_inventory_actor_count_005de4fd
;   undefined4 DAT_005de517
;   TerminatedCString s_actor_name_list_005de51b
;   ... and 13 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_actor.cpp_CDemonActor_save_FUN_0040b0a0
;   core_actor.cpp_FUN_00408a50
;   core_actor.cpp_syncActorTypeIDs_FUN_0040c920
;   core_gore.cpp_CGore_save_FUN_004c9f20
;   core_inv.cpp_FUN_004dc460
;   core_main.c_FUN_004e4500
;   core_mission.cpp_FUN_004fc320
;   crt_unknown.c_FUN_005b8010
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fbce0
        ;   Label: core_mission.cpp_FUN_004fbce0
    PUSH ESI                            ; 004fbce1
    PUSH EDI                            ; 004fbce2
    PUSH EBP                            ; 004fbce3
    SUB ESP,0x4                         ; 004fbce4
    MOV EBX,dword ptr [ESP + 0x18]      ; 004fbce7
    PUSH 0x5de471                       ; 004fbceb | = "// mission version, actor version\n"
    MOV EDX,dword ptr [ESP + 0x20]      ; 004fbcf0
    PUSH EDX                            ; 004fbcf4
    MOV dword ptr [EBX + 0x100c],0x7    ; 004fbcf5
    CALL crt_unknown.c_FUN_005b8010     ; 004fbcff
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x8                         ; 004fbd04
    PUSH 0x4                            ; 004fbd07
    MOV ECX,dword ptr [EBX + 0x100c]    ; 004fbd09
    PUSH ECX                            ; 004fbd0f
    PUSH 0x5de494                       ; 004fbd10 | = "%d,%d\n"
    MOV ESI,dword ptr [ESP + 0x28]      ; 004fbd15
    PUSH ESI                            ; 004fbd19
    CALL crt_unknown.c_FUN_005b8010     ; 004fbd1a
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x10                        ; 004fbd1f
    PUSH 0x5de49b                       ; 004fbd22 | = "// Root name of mission\n"
    PUSH ESI                            ; 004fbd27
    CALL crt_unknown.c_FUN_005b8010     ; 004fbd28
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x8                         ; 004fbd2d
    LEA EAX,[EBX + 0x1014]              ; 004fbd30
    PUSH EAX                            ; 004fbd36
    PUSH 0x5de4b4                       ; 004fbd37 | DAT_005de4b4
    PUSH ESI                            ; 004fbd3c
    CALL crt_unknown.c_FUN_005b8010     ; 004fbd3d
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0xc                         ; 004fbd42
    PUSH 0x5de4b8                       ; 004fbd45 | = "// setList\n"
    PUSH ESI                            ; 004fbd4a
    CALL crt_unknown.c_FUN_005b8010     ; 004fbd4b
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x8                         ; 004fbd50
    MOV EDX,dword ptr [EBX + 0x4]       ; 004fbd53
    PUSH EDX                            ; 004fbd56
    PUSH 0x5de4c4                       ; 004fbd57 | DAT_005de4c4
    MOV EDI,ESI                         ; 004fbd5c
    PUSH ESI                            ; 004fbd5e
    XOR EDI,ESI                         ; 004fbd5f
    CALL crt_unknown.c_FUN_005b8010     ; 004fbd61
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    MOV ESI,dword ptr [EBX + 0x4]       ; 004fbd66
    ADD ESP,0xc                         ; 004fbd69
    TEST ESI,ESI                        ; 004fbd6c
    JLE 0x004fbda0                      ; 004fbd6e
        ;   XREF to: 004fbda0 (CONDITIONAL_JUMP)  ; LAB_004fbda0
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004fbd70
    LEA ESI,[EBX + 0x8]                 ; 004fbd74
    PUSH ESI                            ; 004fbd77
        ;   Label: LAB_004fbd77
    PUSH 0x5de4c8                       ; 004fbd78 | DAT_005de4c8
    PUSH EBP                            ; 004fbd7d
    INC EDI                             ; 004fbd7e
    ADD ESI,0x100                       ; 004fbd7f
    CALL crt_unknown.c_FUN_005b8010     ; 004fbd85
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    MOV EAX,dword ptr [EBX + 0x4]       ; 004fbd8a
    ADD ESP,0xc                         ; 004fbd8d
    CMP EDI,EAX                         ; 004fbd90
    JL 0x004fbd77                       ; 004fbd92
        ;   XREF to: 004fbd77 (CONDITIONAL_JUMP)  ; LAB_004fbd77
    LEA EAX,[EAX]                       ; 004fbd94
    LEA EDX,[EDX]                       ; 004fbd9a
    PUSH 0x5de4cc                       ; 004fbda0 | = "// actorTypeList\n"
        ;   Label: LAB_004fbda0
    MOV EDX,dword ptr [ESP + 0x20]      ; 004fbda5
    PUSH EDX                            ; 004fbda9
    CALL crt_unknown.c_FUN_005b8010     ; 004fbdaa
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x8                         ; 004fbdaf
    MOV ECX,dword ptr [0x007bc044]      ; 004fbdb2 | DAT_007bc044
    PUSH ECX                            ; 004fbdb8
    PUSH 0x5de4de                       ; 004fbdb9 | DAT_005de4de
    MOV ESI,dword ptr [ESP + 0x24]      ; 004fbdbe
    PUSH ESI                            ; 004fbdc2
    CALL crt_unknown.c_FUN_005b8010     ; 004fbdc3
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0xc                         ; 004fbdc8
    CALL core_actor.cpp_syncActorTypeIDs_FUN_0040c920 ; 004fbdcb
        ;   XREF to: 0040c920 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_syncActorTypeIDs_FUN_0040c920()
    MOV EDI,dword ptr [0x007bc044]      ; 004fbdd0 | DAT_007bc044
    XOR ESI,ESI                         ; 004fbdd6
    TEST EDI,EDI                        ; 004fbdd8
    JLE 0x004fbe10                      ; 004fbdda
        ;   XREF to: 004fbe10 (CONDITIONAL_JUMP)  ; LAB_004fbe10
    XOR EDI,EDI                         ; 004fbddc
    MOV EAX,dword ptr [EDI + 0x7bc048]  ; 004fbdde | DAT_007bc048 | DAT_007bc04c
        ;   Label: LAB_004fbdde
    MOV EBP,dword ptr [EAX + 0x34]      ; 004fbde4
    PUSH EBP                            ; 004fbde7
    PUSH EAX                            ; 004fbde8
    PUSH 0x5de4e2                       ; 004fbde9 | = "%s %d\n"
    MOV EAX,dword ptr [ESP + 0x28]      ; 004fbdee
    PUSH EAX                            ; 004fbdf2
    ADD EDI,0x4                         ; 004fbdf3
    INC ESI                             ; 004fbdf6
    CALL crt_unknown.c_FUN_005b8010     ; 004fbdf7
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    MOV EDX,dword ptr [0x007bc044]      ; 004fbdfc | DAT_007bc044
    ADD ESP,0x10                        ; 004fbe02
    CMP ESI,EDX                         ; 004fbe05
    JL 0x004fbdde                       ; 004fbe07
        ;   XREF to: 004fbdde (CONDITIONAL_JUMP)  ; LAB_004fbdde
    LEA EAX,[EAX]                       ; 004fbe09
    NOP                                 ; 004fbe0f
    PUSH 0x5de4e9                       ; 004fbe10 | = "// actor count\n"
        ;   Label: LAB_004fbe10
    MOV ECX,dword ptr [ESP + 0x20]      ; 004fbe15
    PUSH ECX                            ; 004fbe19
    CALL crt_unknown.c_FUN_005b8010     ; 004fbe1a
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x8                         ; 004fbe1f
    PUSH EBX                            ; 004fbe22
    CALL core_mission.cpp_FUN_004fc320  ; 004fbe23
        ;   XREF to: 004fc320 (UNCONDITIONAL_CALL)  ; int core_mission.cpp_FUN_004fc320(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 004fbe28
    PUSH EAX                            ; 004fbe2b
    PUSH 0x5de4f9                       ; 004fbe2c | DAT_005de4f9
    MOV ESI,dword ptr [ESP + 0x24]      ; 004fbe31
    PUSH ESI                            ; 004fbe35
    CALL crt_unknown.c_FUN_005b8010     ; 004fbe36
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0xc                         ; 004fbe3b
    PUSH 0x5de4fd                       ; 004fbe3e | = "// inventory actor count\n"
    PUSH ESI                            ; 004fbe43
    XOR EDI,EDI                         ; 004fbe44
    CALL crt_unknown.c_FUN_005b8010     ; 004fbe46
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    MOV ESI,dword ptr [EBX + 0x1114]    ; 004fbe4b
    ADD ESP,0x8                         ; 004fbe51
    TEST ESI,ESI                        ; 004fbe54
    JZ 0x004fbe7e                       ; 004fbe56
        ;   XREF to: 004fbe7e (CONDITIONAL_JUMP)  ; LAB_004fbe7e
    MOV ECX,dword ptr [0x01cedf50]      ; 004fbe58 | g_CHeroClassInfo.name_hash
        ;   Label: LAB_004fbe58
    PUSH ECX                            ; 004fbe5e
    PUSH ESI                            ; 004fbe5f
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004fbe60
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 004fbe65
    TEST EAX,EAX                        ; 004fbe68
    JZ 0x004fbe74                       ; 004fbe6a
        ;   XREF to: 004fbe74 (CONDITIONAL_JUMP)  ; LAB_004fbe74
    MOV EAX,dword ptr [EAX + 0x2438c]   ; 004fbe6c
    ADD EDI,EAX                         ; 004fbe72
    MOV ESI,dword ptr [ESI + 0x14c]     ; 004fbe74
        ;   Label: LAB_004fbe74
    TEST ESI,ESI                        ; 004fbe7a
    JNZ 0x004fbe58                      ; 004fbe7c
        ;   XREF to: 004fbe58 (CONDITIONAL_JUMP)  ; LAB_004fbe58
    PUSH EDI                            ; 004fbe7e
        ;   Label: LAB_004fbe7e
    PUSH 0x5de517                       ; 004fbe7f | DAT_005de517
    MOV EAX,dword ptr [ESP + 0x24]      ; 004fbe84
    PUSH EAX                            ; 004fbe88
    CALL crt_unknown.c_FUN_005b8010     ; 004fbe89
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0xc                         ; 004fbe8e
    PUSH 0x5de51b                       ; 004fbe91 | = "// actor name list\n"
    MOV EDX,dword ptr [ESP + 0x20]      ; 004fbe96
    PUSH EDX                            ; 004fbe9a
    CALL crt_unknown.c_FUN_005b8010     ; 004fbe9b
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x8                         ; 004fbea0
    MOV ESI,dword ptr [EBX + 0x1114]    ; 004fbea3
    MOV dword ptr [EBX + 0x1458],0x0    ; 004fbea9
    TEST ESI,ESI                        ; 004fbeb3
    JZ 0x004fbf22                       ; 004fbeb5
        ;   XREF to: 004fbf22 (CONDITIONAL_JUMP)  ; LAB_004fbf22
    PUSH ESI                            ; 004fbeb7
        ;   Label: LAB_004fbeb7
    PUSH ESI                            ; 004fbeb8
    CALL core_actor.cpp_FUN_00408a50    ; 004fbeb9
        ;   XREF to: 00408a50 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408a50()
    ADD ESP,0x4                         ; 004fbebe
    PUSH EAX                            ; 004fbec1
    PUSH 0x5de52f                       ; 004fbec2 | = "%s \"%s\"\n"
    MOV EAX,dword ptr [ESP + 0x28]      ; 004fbec7
    PUSH EAX                            ; 004fbecb
    CALL crt_unknown.c_FUN_005b8010     ; 004fbecc
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    MOV EDX,dword ptr [EBX + 0x1458]    ; 004fbed1
    ADD ESP,0x10                        ; 004fbed7
    CMP EDX,0xbb8                       ; 004fbeda
    JL 0x004fbf05                       ; 004fbee0
        ;   XREF to: 004fbf05 (CONDITIONAL_JUMP)  ; LAB_004fbf05
    MOV ECX,0x5de538                    ; 004fbee2 | = "..\\core\\mission.cpp"
    MOV EDI,0x1ed                       ; 004fbee7
    PUSH 0x5de54c                       ; 004fbeec | = "Too many actors"
    MOV dword ptr [0x01d046a0],ECX      ; 004fbef1 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 004fbef7 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004fbefd
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004fbf02
    MOV EAX,dword ptr [EBX + 0x1458]    ; 004fbf05
        ;   Label: LAB_004fbf05
    MOV dword ptr [EBX + EAX*0x4 + 0x145c],ESI ; 004fbf0b
    INC dword ptr [EBX + 0x1458]        ; 004fbf12
    MOV ESI,dword ptr [ESI + 0x14c]     ; 004fbf18
    TEST ESI,ESI                        ; 004fbf1e
    JNZ 0x004fbeb7                      ; 004fbf20
        ;   XREF to: 004fbeb7 (CONDITIONAL_JUMP)  ; LAB_004fbeb7
    MOV EAX,dword ptr [EBX + 0x1114]    ; 004fbf22
        ;   Label: LAB_004fbf22
    MOV dword ptr [ESP],EAX             ; 004fbf28
    TEST EAX,EAX                        ; 004fbf2b
    JZ 0x004fbf9f                       ; 004fbf2d
        ;   XREF to: 004fbf9f (CONDITIONAL_JUMP)  ; LAB_004fbf9f
    MOV EDX,dword ptr [0x01cedf50]      ; 004fbf2f | g_CHeroClassInfo.name_hash
        ;   Label: LAB_004fbf2f
    PUSH EDX                            ; 004fbf35
    MOV ECX,dword ptr [ESP + 0x4]       ; 004fbf36
    PUSH ECX                            ; 004fbf3a
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004fbf3b
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 004fbf40
    TEST EAX,EAX                        ; 004fbf43
    JZ 0x004fbf8f                       ; 004fbf45
        ;   XREF to: 004fbf8f (CONDITIONAL_JUMP)  ; LAB_004fbf8f
    LEA EBP,[EAX + 0x2437c]             ; 004fbf47
    XOR EDI,EDI                         ; 004fbf4d
    MOV ESI,EBP                         ; 004fbf4f
    MOV EAX,dword ptr [EBP + 0x10]      ; 004fbf51
        ;   Label: LAB_004fbf51
    CMP EDI,EAX                         ; 004fbf54
    JGE 0x004fc02d                      ; 004fbf56
        ;   XREF to: 004fc02d (CONDITIONAL_JUMP)  ; LAB_004fc02d
    CMP dword ptr [EBX + 0x1458],0xbb8  ; 004fbf5c
    JGE 0x004fc006                      ; 004fbf66
        ;   XREF to: 004fc006 (CONDITIONAL_JUMP)  ; LAB_004fc006
    MOV EAX,dword ptr [EBX + 0x1458]    ; 004fbf6c
        ;   Label: LAB_004fbf6c
    MOV EDX,dword ptr [ESI + 0x14]      ; 004fbf72
    MOV dword ptr [EBX + EAX*0x4 + 0x145c],EDX ; 004fbf75
    MOV EDX,dword ptr [EBX + 0x1458]    ; 004fbf7c
    ADD ESI,0x4                         ; 004fbf82
    INC EDX                             ; 004fbf85
    INC EDI                             ; 004fbf86
    MOV dword ptr [EBX + 0x1458],EDX    ; 004fbf87
    JMP 0x004fbf51                      ; 004fbf8d
        ;   XREF to: 004fbf51 (UNCONDITIONAL_JUMP)  ; LAB_004fbf51
    MOV EAX,dword ptr [ESP]             ; 004fbf8f
        ;   Label: LAB_004fbf8f
    MOV EAX,dword ptr [EAX + 0x14c]     ; 004fbf92
    MOV dword ptr [ESP],EAX             ; 004fbf98
    TEST EAX,EAX                        ; 004fbf9b
    JNZ 0x004fbf2f                      ; 004fbf9d
        ;   XREF to: 004fbf2f (CONDITIONAL_JUMP)  ; LAB_004fbf2f
    PUSH 0x5de580                       ; 004fbf9f | = "// actor data list\n"
        ;   Label: LAB_004fbf9f
    MOV EAX,dword ptr [ESP + 0x20]      ; 004fbfa4
    PUSH EAX                            ; 004fbfa8
    CALL crt_unknown.c_FUN_005b8010     ; 004fbfa9
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    MOV ESI,dword ptr [EBX + 0x1114]    ; 004fbfae
    ADD ESP,0x8                         ; 004fbfb4
    TEST ESI,ESI                        ; 004fbfb7
    JZ 0x004fbfe0                       ; 004fbfb9
        ;   XREF to: 004fbfe0 (CONDITIONAL_JUMP)  ; LAB_004fbfe0
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004fbfbb
    PUSH EDI                            ; 004fbfbf
        ;   Label: LAB_004fbfbf
    PUSH ESI                            ; 004fbfc0
    CALL core_actor.cpp_CDemonActor_save_FUN_0040b0a0 ; 004fbfc1
        ;   XREF to: 0040b0a0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_save_FUN_0040b0a0(CDemonActor * this_ptr, _FILE * file_handle)
    MOV ESI,dword ptr [ESI + 0x14c]     ; 004fbfc6
    ADD ESP,0x8                         ; 004fbfcc
    TEST ESI,ESI                        ; 004fbfcf
    JNZ 0x004fbfbf                      ; 004fbfd1
        ;   XREF to: 004fbfbf (CONDITIONAL_JUMP)  ; LAB_004fbfbf
    LEA EAX,[EAX]                       ; 004fbfd3
    LEA EDX,[EDX]                       ; 004fbfd9
    NOP                                 ; 004fbfdf
    MOV ECX,dword ptr [ESP + 0x1c]      ; 004fbfe0
        ;   Label: LAB_004fbfe0
    PUSH ECX                            ; 004fbfe4
    MOV ESI,dword ptr [0x006167e0]      ; 004fbfe5 | g_CGorePtr
    PUSH ESI                            ; 004fbfeb
    CALL core_gore.cpp_CGore_save_FUN_004c9f20 ; 004fbfec
        ;   XREF to: 004c9f20 (UNCONDITIONAL_CALL)  ; int core_gore.cpp_CGore_save_FUN_004c9f20(CGore * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 004fbff1
    MOV dword ptr [EBX + 0x1458],0x0    ; 004fbff4
    ADD ESP,0x4                         ; 004fbffe
    POP EBP                             ; 004fc001
    POP EDI                             ; 004fc002
    POP ESI                             ; 004fc003
    POP EBX                             ; 004fc004
    RET                                 ; 004fc005
    MOV ECX,0x5de55c                    ; 004fc006 | = "..\\core\\mission.cpp"
        ;   Label: LAB_004fc006
    MOV EAX,0x1f8                       ; 004fc00b
    PUSH 0x5de570                       ; 004fc010 | = "Too many actors"
    MOV dword ptr [0x01d046a0],ECX      ; 004fc015 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 004fc01b | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004fc020
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004fc025
    JMP 0x004fbf6c                      ; 004fc028
        ;   XREF to: 004fbf6c (UNCONDITIONAL_JUMP)  ; LAB_004fbf6c
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004fc02d
        ;   Label: LAB_004fc02d
    PUSH EAX                            ; 004fc031
    PUSH EBP                            ; 004fc032
    CALL core_inv.cpp_FUN_004dc460      ; 004fc033
        ;   XREF to: 004dc460 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_FUN_004dc460(CInventory * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 004fc038
    JMP 0x004fbf8f                      ; 004fc03b
        ;   XREF to: 004fbf8f (UNCONDITIONAL_JUMP)  ; LAB_004fbf8f

