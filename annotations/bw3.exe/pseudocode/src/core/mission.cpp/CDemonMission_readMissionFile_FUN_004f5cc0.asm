; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mission_cpp_CDemonMission_readMissionFile_FUN_004f5cc0(CDemonMission *this_ptr,_FILE *file_handle,int load_flags)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; int              Stack[0xc]:4   load_flags
; Local Variables:
; undefined        Stack[-0x158]:1  local_158
; undefined        Stack[-0xf4]:1  local_f4
; undefined1       Stack[-0xf3]:1  local_f3
; undefined        Stack[-0x90]:1  local_90
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_game.cpp_FUN_004bdfb0 at 004be581
;   core_mission.cpp_CDemonMission_load_FUN_004f5bc0 at 004f5c0a
;
; Referenced Globals:
;   TerminatedCString s_d_d_005c8419
;   TerminatedCString s_core_mission_cpp_005c8420
;   TerminatedCString s_Invalid_mission_version_005c8434
;   TerminatedCString s_core_mission_cpp_005c8490
;   TerminatedCString s_This_mission_uses_actor_005c84a4
;   TerminatedCString s_core_mission_cpp_005c84ef
;   TerminatedCString s_No_name_in_mission_005c8503
;   undefined4 DAT_005c8516
;   undefined4 DAT_005c851a
;   undefined4 DAT_005c851e
;   undefined4 DAT_005c8522
;   TerminatedCString s_s_d_005c8526
;   TerminatedCString s_core_mission_cpp_005c852d
;   TerminatedCString s_Actor_type_s_is_saved_in_005c8541
;   undefined4 DAT_005c85aa
;   ... and 22 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_actor.cpp_CDemonActor_load_FUN_0040b110
;   core_actor.cpp_createActorByName_FUN_0040c4f0
;   core_actor.cpp_getActorClassByName_FUN_0040c480
;   core_actor.cpp_resetActorTypeInfo_FUN_0040c8a0
;   core_gore.cpp_CGore_load_FUN_004cf010
;   core_gore.cpp_CGore_reset_FUN_004ce560
;   core_inv.cpp_CInventory_loadItems_FUN_004dca90
;   core_main.c_FUN_004e4330
;   core_mission.cpp_CDemonMission_addActorToList_FUN_004f6930
;   core_mission.cpp_FUN_004f5b80
;   core_mission.cpp_FUN_004f76f0
;   crt_stdio.c_fgetc_FUN_005a32b0
;   crt_stdio.c_fscanf_FUN_005a3230
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f5cc0
        ;   Label: core_mission.cpp_CDemonMission_readMissionFile_FUN_004f5cc0
    PUSH ESI                            ; 004f5cc1
    PUSH EDI                            ; 004f5cc2
    PUSH EBP                            ; 004f5cc3
    SUB ESP,0x148                       ; 004f5cc4
    MOV EBX,dword ptr [ESP + 0x15c]     ; 004f5cca
    PUSH EBX                            ; 004f5cd1
    CALL core_mission.cpp_FUN_004f5b80  ; 004f5cd2
        ;   XREF to: 004f5b80 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_FUN_004f5b80()
    ADD ESP,0x4                         ; 004f5cd7
    CMP dword ptr [ESP + 0x164],0x0     ; 004f5cda
    JZ 0x004f61c6                       ; 004f5ce2
        ;   XREF to: 004f61c6 (CONDITIONAL_JUMP)  ; LAB_004f61c6
    MOV ESI,dword ptr [ESP + 0x160]     ; 004f5ce8
        ;   Label: LAB_004f5ce8
    PUSH ESI                            ; 004f5cef
        ;   Label: LAB_004f5cef
    CALL crt_stdio.c_fgetc_FUN_005a32b0 ; 004f5cf0
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005a32b0()
    ADD ESP,0x4                         ; 004f5cf5
    TEST EAX,EAX                        ; 004f5cf8
    JL 0x004f5d01                       ; 004f5cfa
        ;   XREF to: 004f5d01 (CONDITIONAL_JUMP)  ; LAB_004f5d01
    CMP EAX,0xa                         ; 004f5cfc
    JNZ 0x004f5cef                      ; 004f5cff
        ;   XREF to: 004f5cef (CONDITIONAL_JUMP)  ; LAB_004f5cef
    LEA EAX,[ESP + 0x12c]               ; 004f5d01
        ;   Label: LAB_004f5d01
    PUSH EAX                            ; 004f5d08
    LEA EAX,[EBX + 0x100c]              ; 004f5d09
    PUSH EAX                            ; 004f5d0f
    PUSH 0x5c8419                       ; 004f5d10 | = "%d,%d\n"
    MOV ECX,dword ptr [ESP + 0x16c]     ; 004f5d15
    PUSH ECX                            ; 004f5d1c
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 004f5d1d
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    MOV ESI,dword ptr [EBX + 0x100c]    ; 004f5d22
    ADD ESP,0x10                        ; 004f5d28
    CMP ESI,0x7                         ; 004f5d2b
    JLE 0x004f5d56                      ; 004f5d2e
        ;   XREF to: 004f5d56 (CONDITIONAL_JUMP)  ; LAB_004f5d56
    PUSH 0x7                            ; 004f5d30
    PUSH ESI                            ; 004f5d32
    MOV EDI,0x5c8420                    ; 004f5d33 | = "..\\core\\mission.cpp"
    MOV EBP,0xe9                        ; 004f5d38
    PUSH 0x5c8434                       ; 004f5d3d | = "Invalid mission version number: %d, c..."
    MOV dword ptr [0x01d71de0],EDI      ; 004f5d42 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBP      ; 004f5d48 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004f5d4e
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0xc                         ; 004f5d53
    MOV EDX,dword ptr [ESP + 0x12c]     ; 004f5d56
        ;   Label: LAB_004f5d56
    CMP EDX,0x4                         ; 004f5d5d
    JGE 0x004f5d86                      ; 004f5d60
        ;   XREF to: 004f5d86 (CONDITIONAL_JUMP)  ; LAB_004f5d86
    PUSH EDX                            ; 004f5d62
    MOV ECX,0x5c8490                    ; 004f5d63 | = "..\\core\\mission.cpp"
    MOV ESI,0xec                        ; 004f5d68
    PUSH 0x5c84a4                       ; 004f5d6d | = "This mission uses actor format versio..."
    MOV dword ptr [0x01d71de0],ECX      ; 004f5d72 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 004f5d78 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004f5d7e
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 004f5d83
    CMP dword ptr [EBX + 0x100c],0x2    ; 004f5d86
        ;   Label: LAB_004f5d86
    JL 0x004f61d4                       ; 004f5d8d
        ;   XREF to: 004f61d4 (CONDITIONAL_JUMP)  ; LAB_004f61d4
    MOV ESI,dword ptr [ESP + 0x160]     ; 004f5d93
        ;   Label: LAB_004f5d93
    PUSH ESI                            ; 004f5d9a
        ;   Label: LAB_004f5d9a
    CALL crt_stdio.c_fgetc_FUN_005a32b0 ; 004f5d9b
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005a32b0()
    ADD ESP,0x4                         ; 004f5da0
    TEST EAX,EAX                        ; 004f5da3
    JL 0x004f5dac                       ; 004f5da5
        ;   XREF to: 004f5dac (CONDITIONAL_JUMP)  ; LAB_004f5dac
    CMP EAX,0xa                         ; 004f5da7
    JNZ 0x004f5d9a                      ; 004f5daa
        ;   XREF to: 004f5d9a (CONDITIONAL_JUMP)  ; LAB_004f5d9a
    LEA EAX,[EBX + 0x133c]              ; 004f5dac
        ;   Label: LAB_004f5dac
    PUSH EAX                            ; 004f5db2
    PUSH 0x5c8516                       ; 004f5db3 | DAT_005c8516
    MOV ECX,dword ptr [ESP + 0x168]     ; 004f5db8
    PUSH ECX                            ; 004f5dbf
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 004f5dc0
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0xc                         ; 004f5dc5
    MOV ESI,dword ptr [ESP + 0x160]     ; 004f5dc8
    PUSH ESI                            ; 004f5dcf
        ;   Label: LAB_004f5dcf
    CALL crt_stdio.c_fgetc_FUN_005a32b0 ; 004f5dd0
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005a32b0()
    ADD ESP,0x4                         ; 004f5dd5
    TEST EAX,EAX                        ; 004f5dd8
    JL 0x004f5de1                       ; 004f5dda
        ;   XREF to: 004f5de1 (CONDITIONAL_JUMP)  ; LAB_004f5de1
    CMP EAX,0xa                         ; 004f5ddc
    JNZ 0x004f5dcf                      ; 004f5ddf
        ;   XREF to: 004f5dcf (CONDITIONAL_JUMP)  ; LAB_004f5dcf
    LEA EAX,[EBX + 0x4]                 ; 004f5de1
        ;   Label: LAB_004f5de1
    PUSH EAX                            ; 004f5de4
    PUSH 0x5c851a                       ; 004f5de5 | DAT_005c851a
    MOV ESI,dword ptr [ESP + 0x168]     ; 004f5dea
    PUSH ESI                            ; 004f5df1
    XOR EBP,EBP                         ; 004f5df2
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 004f5df4
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    MOV EDI,dword ptr [EBX + 0x4]       ; 004f5df9
    ADD ESP,0xc                         ; 004f5dfc
    TEST EDI,EDI                        ; 004f5dff
    JLE 0x004f5e30                      ; 004f5e01
        ;   XREF to: 004f5e30 (CONDITIONAL_JUMP)  ; LAB_004f5e30
    LEA ESI,[EBX + 0x8]                 ; 004f5e03
    PUSH ESI                            ; 004f5e06
        ;   Label: LAB_004f5e06
    PUSH 0x5c851e                       ; 004f5e07 | DAT_005c851e
    MOV EAX,dword ptr [ESP + 0x168]     ; 004f5e0c
    PUSH EAX                            ; 004f5e13
    INC EBP                             ; 004f5e14
    ADD ESI,0x100                       ; 004f5e15
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 004f5e1b
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    MOV EDX,dword ptr [EBX + 0x4]       ; 004f5e20
    ADD ESP,0xc                         ; 004f5e23
    CMP EBP,EDX                         ; 004f5e26
    JL 0x004f5e06                       ; 004f5e28
        ;   XREF to: 004f5e06 (CONDITIONAL_JUMP)  ; LAB_004f5e06
    LEA EAX,[EAX]                       ; 004f5e2a
    CALL core_actor.cpp_resetActorTypeInfo_FUN_0040c8a0 ; 004f5e30
        ;   XREF to: 0040c8a0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_resetActorTypeInfo_FUN_0040c8a0()
        ;   Label: LAB_004f5e30
    CMP dword ptr [EBX + 0x100c],0x3    ; 004f5e35
    JL 0x004f5f28                       ; 004f5e3c
        ;   XREF to: 004f5f28 (CONDITIONAL_JUMP)  ; LAB_004f5f28
    MOV ESI,dword ptr [ESP + 0x160]     ; 004f5e42
    PUSH ESI                            ; 004f5e49
        ;   Label: LAB_004f5e49
    CALL crt_stdio.c_fgetc_FUN_005a32b0 ; 004f5e4a
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005a32b0()
    ADD ESP,0x4                         ; 004f5e4f
    TEST EAX,EAX                        ; 004f5e52
    JL 0x004f5e5b                       ; 004f5e54
        ;   XREF to: 004f5e5b (CONDITIONAL_JUMP)  ; LAB_004f5e5b
    CMP EAX,0xa                         ; 004f5e56
    JNZ 0x004f5e49                      ; 004f5e59
        ;   XREF to: 004f5e49 (CONDITIONAL_JUMP)  ; LAB_004f5e49
    LEA EAX,[ESP + 0x138]               ; 004f5e5b
        ;   Label: LAB_004f5e5b
    PUSH EAX                            ; 004f5e62
    PUSH 0x5c8522                       ; 004f5e63 | DAT_005c8522
    MOV ESI,dword ptr [ESP + 0x168]     ; 004f5e68
    PUSH ESI                            ; 004f5e6f
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 004f5e70
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0xc                         ; 004f5e75
    MOV EDI,dword ptr [ESP + 0x138]     ; 004f5e78
    XOR EBP,EBP                         ; 004f5e7f
    TEST EDI,EDI                        ; 004f5e81
    JLE 0x004f5f28                      ; 004f5e83
        ;   XREF to: 004f5f28 (CONDITIONAL_JUMP)  ; LAB_004f5f28
    LEA EAX,[ESP + 0x13c]               ; 004f5e89
        ;   Label: LAB_004f5e89
    PUSH EAX                            ; 004f5e90
    LEA EAX,[ESP + 0x4]                 ; 004f5e91
    PUSH EAX                            ; 004f5e95
    MOV ECX,0x19                        ; 004f5e96
    LEA EDI,[ESP + 0x8]                 ; 004f5e9b
    PUSH 0x5c8526                       ; 004f5e9f | = "%s %d\n"
    MOV EDX,dword ptr [ESP + 0x16c]     ; 004f5ea4
    MOV ESI,0x600538                    ; 004f5eab | = "corrupt!"
    PUSH EDX                            ; 004f5eb0
    MOVSD.REP ES:EDI,ESI                ; 004f5eb1 | = "corrupt!" | s_corrupt_00600538+4
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 004f5eb3
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0x10                        ; 004f5eb8
    MOV EAX,ESP                         ; 004f5ebb
    PUSH EAX                            ; 004f5ebd
    CALL core_actor.cpp_getActorClassByName_FUN_0040c480 ; 004f5ebe
        ;   XREF to: 0040c480 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getActorClassByName_FUN_0040c480()
    MOV ESI,EAX                         ; 004f5ec3
    ADD ESP,0x4                         ; 004f5ec5
    MOV EDI,EAX                         ; 004f5ec8
    TEST EAX,EAX                        ; 004f5eca
    JZ 0x004f5f18                       ; 004f5ecc
        ;   XREF to: 004f5f18 (CONDITIONAL_JUMP)  ; LAB_004f5f18
    MOV EAX,dword ptr [ESP + 0x13c]     ; 004f5ece
    MOV ECX,dword ptr [ESI + 0x34]      ; 004f5ed5
    CMP EAX,ECX                         ; 004f5ed8
    JLE 0x004f5f0c                      ; 004f5eda
        ;   XREF to: 004f5f0c (CONDITIONAL_JUMP)  ; LAB_004f5f0c
    PUSH ECX                            ; 004f5edc
    MOV ESI,dword ptr [ESP + 0x140]     ; 004f5edd
    MOV EAX,0x5c852d                    ; 004f5ee4 | = "..\\core\\mission.cpp"
    PUSH ESI                            ; 004f5ee9
    MOV [0x01d71de0],EAX                ; 004f5eea | DAT_01d71de0
    LEA EAX,[ESP + 0x8]                 ; 004f5eef
    PUSH EAX                            ; 004f5ef3
    MOV EDX,0x10f                       ; 004f5ef4
    PUSH 0x5c8541                       ; 004f5ef9 | = "Actor type %s is saved in mission in ..."
    MOV dword ptr [0x01d71de4],EDX      ; 004f5efe | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004f5f04
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x10                        ; 004f5f09
    MOV ESI,dword ptr [EDI + 0x30]      ; 004f5f0c
        ;   Label: LAB_004f5f0c
    MOV EAX,dword ptr [ESP + 0x13c]     ; 004f5f0f
    MOV dword ptr [ESI],EAX             ; 004f5f16
    MOV EAX,dword ptr [ESP + 0x138]     ; 004f5f18
        ;   Label: LAB_004f5f18
    INC EBP                             ; 004f5f1f
    CMP EBP,EAX                         ; 004f5f20
    JL 0x004f5e89                       ; 004f5f22
        ;   XREF to: 004f5e89 (CONDITIONAL_JUMP)  ; LAB_004f5e89
    MOV ESI,dword ptr [ESP + 0x160]     ; 004f5f28
        ;   Label: LAB_004f5f28
    PUSH ESI                            ; 004f5f2f
        ;   Label: LAB_004f5f2f
    CALL crt_stdio.c_fgetc_FUN_005a32b0 ; 004f5f30
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005a32b0()
    ADD ESP,0x4                         ; 004f5f35
    TEST EAX,EAX                        ; 004f5f38
    JL 0x004f5f41                       ; 004f5f3a
        ;   XREF to: 004f5f41 (CONDITIONAL_JUMP)  ; LAB_004f5f41
    CMP EAX,0xa                         ; 004f5f3c
    JNZ 0x004f5f2f                      ; 004f5f3f
        ;   XREF to: 004f5f2f (CONDITIONAL_JUMP)  ; LAB_004f5f2f
    LEA EAX,[ESP + 0x130]               ; 004f5f41
        ;   Label: LAB_004f5f41
    PUSH EAX                            ; 004f5f48
    PUSH 0x5c85aa                       ; 004f5f49 | DAT_005c85aa
    MOV EDI,dword ptr [ESP + 0x168]     ; 004f5f4e
    PUSH EDI                            ; 004f5f55
    XOR EBP,EBP                         ; 004f5f56
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 004f5f58
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0xc                         ; 004f5f5d
    MOV dword ptr [ESP + 0x134],EBP     ; 004f5f60
    CMP dword ptr [EBX + 0x100c],0x6    ; 004f5f67
    JL 0x004f61fb                       ; 004f5f6e
        ;   XREF to: 004f61fb (CONDITIONAL_JUMP)  ; LAB_004f61fb
    MOV ESI,EDI                         ; 004f5f74
    PUSH ESI                            ; 004f5f76
        ;   Label: LAB_004f5f76
    CALL crt_stdio.c_fgetc_FUN_005a32b0 ; 004f5f77
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005a32b0()
    ADD ESP,0x4                         ; 004f5f7c
    TEST EAX,EAX                        ; 004f5f7f
    JL 0x004f5f88                       ; 004f5f81
        ;   XREF to: 004f5f88 (CONDITIONAL_JUMP)  ; LAB_004f5f88
    CMP EAX,0xa                         ; 004f5f83
    JNZ 0x004f5f76                      ; 004f5f86
        ;   XREF to: 004f5f76 (CONDITIONAL_JUMP)  ; LAB_004f5f76
    LEA EAX,[ESP + 0x134]               ; 004f5f88
        ;   Label: LAB_004f5f88
    PUSH EAX                            ; 004f5f8f
    PUSH 0x5c85ae                       ; 004f5f90 | DAT_005c85ae
    MOV EDX,dword ptr [ESP + 0x168]     ; 004f5f95
    PUSH EDX                            ; 004f5f9c
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 004f5f9d
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0xc                         ; 004f5fa2
    MOV dword ptr [EBX + 0x1010],0x1    ; 004f5fa5
    MOV ESI,dword ptr [ESP + 0x160]     ; 004f5faf
        ;   Label: LAB_004f5faf
    PUSH ESI                            ; 004f5fb6
        ;   Label: LAB_004f5fb6
    CALL crt_stdio.c_fgetc_FUN_005a32b0 ; 004f5fb7
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005a32b0()
    ADD ESP,0x4                         ; 004f5fbc
    TEST EAX,EAX                        ; 004f5fbf
    JL 0x004f5fc8                       ; 004f5fc1
        ;   XREF to: 004f5fc8 (CONDITIONAL_JUMP)  ; LAB_004f5fc8
    CMP EAX,0xa                         ; 004f5fc3
    JNZ 0x004f5fb6                      ; 004f5fc6
        ;   XREF to: 004f5fb6 (CONDITIONAL_JUMP)  ; LAB_004f5fb6
    MOV dword ptr [EBX + 0x145c],0x0    ; 004f5fc8
        ;   Label: LAB_004f5fc8
    XOR ECX,ECX                         ; 004f5fd2
    MOV dword ptr [EBX + 0x1458],0x0    ; 004f5fd4
    MOV dword ptr [ESP + 0x144],ECX     ; 004f5fde
    MOV EAX,dword ptr [ESP + 0x130]     ; 004f5fe5
        ;   Label: LAB_004f5fe5
    MOV ESI,dword ptr [ESP + 0x134]     ; 004f5fec
    MOV EDI,dword ptr [ESP + 0x144]     ; 004f5ff3
    ADD EAX,ESI                         ; 004f5ffa
    CMP EAX,EDI                         ; 004f5ffc
    JG 0x004f6206                       ; 004f5ffe
        ;   XREF to: 004f6206 (CONDITIONAL_JUMP)  ; LAB_004f6206
    MOV ESI,dword ptr [ESP + 0x160]     ; 004f6004
    PUSH ESI                            ; 004f600b
        ;   Label: LAB_004f600b
    CALL crt_stdio.c_fgetc_FUN_005a32b0 ; 004f600c
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005a32b0()
    ADD ESP,0x4                         ; 004f6011
    TEST EAX,EAX                        ; 004f6014
    JL 0x004f601d                       ; 004f6016
        ;   XREF to: 004f601d (CONDITIONAL_JUMP)  ; LAB_004f601d
    CMP EAX,0xa                         ; 004f6018
    JNZ 0x004f600b                      ; 004f601b
        ;   XREF to: 004f600b (CONDITIONAL_JUMP)  ; LAB_004f600b
    MOV EDX,dword ptr [ESP + 0x130]     ; 004f601d
        ;   Label: LAB_004f601d
    MOV ESI,dword ptr [EBX + 0x143c]    ; 004f6024
    XOR EBP,EBP                         ; 004f602a
    TEST EDX,EDX                        ; 004f602c
    JLE 0x004f607a                      ; 004f602e
        ;   XREF to: 004f607a (CONDITIONAL_JUMP)  ; LAB_004f607a
    TEST ESI,ESI                        ; 004f6030
        ;   Label: LAB_004f6030
    JNZ 0x004f6057                      ; 004f6032
        ;   XREF to: 004f6057 (CONDITIONAL_JUMP)  ; LAB_004f6057
    MOV EDX,0x5c85e2                    ; 004f6034 | = "..\\core\\mission.cpp"
    MOV ECX,0x149                       ; 004f6039
    PUSH 0x5c85f6                       ; 004f603e | = "CDemonMission::load - actor list coun..."
    MOV dword ptr [0x01d71de0],EDX      ; 004f6043 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 004f6049 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004f604f
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004f6054
    MOV ECX,dword ptr [ESP + 0x160]     ; 004f6057
        ;   Label: LAB_004f6057
    PUSH ECX                            ; 004f605e
    PUSH ESI                            ; 004f605f
    CALL core_actor.cpp_CDemonActor_load_FUN_0040b110 ; 004f6060
        ;   XREF to: 0040b110 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_load_FUN_0040b110(CDemonActor * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 004f6065
    INC EBP                             ; 004f6068
    MOV EDI,dword ptr [ESP + 0x130]     ; 004f6069
    MOV ESI,dword ptr [ESI + 0x14c]     ; 004f6070
    CMP EBP,EDI                         ; 004f6076
    JL 0x004f6030                       ; 004f6078
        ;   XREF to: 004f6030 (CONDITIONAL_JUMP)  ; LAB_004f6030
    CMP dword ptr [EBX + 0x1010],0x0    ; 004f607a
        ;   Label: LAB_004f607a
    JZ 0x004f60fe                       ; 004f6081
        ;   XREF to: 004f60fe (CONDITIONAL_JUMP)  ; LAB_004f60fe
    MOV EAX,dword ptr [ESP + 0x130]     ; 004f6087
    MOV ESI,dword ptr [EBX + 0x143c]    ; 004f608e
    XOR EBP,EBP                         ; 004f6094
    TEST EAX,EAX                        ; 004f6096
    JLE 0x004f60f4                      ; 004f6098
        ;   XREF to: 004f60f4 (CONDITIONAL_JUMP)  ; LAB_004f60f4
    TEST ESI,ESI                        ; 004f609a
        ;   Label: LAB_004f609a
    JNZ 0x004f60c0                      ; 004f609c
        ;   XREF to: 004f60c0 (CONDITIONAL_JUMP)  ; LAB_004f60c0
    MOV EAX,0x5c862a                    ; 004f609e | = "..\\core\\mission.cpp"
    MOV EDX,0x155                       ; 004f60a3
    PUSH 0x5c863e                       ; 004f60a8 | = "CDemonMission::load - actor list coun..."
    MOV [0x01d71de0],EAX                ; 004f60ad | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 004f60b2 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004f60b8
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004f60bd
    MOV ECX,dword ptr [0x01d5ba70]      ; 004f60c0 | g_CHeroClassInfo.name_hash
        ;   Label: LAB_004f60c0
    PUSH ECX                            ; 004f60c6
    PUSH ESI                            ; 004f60c7
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004f60c8
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 004f60cd
    TEST EAX,EAX                        ; 004f60d0
    JZ 0x004f60e2                       ; 004f60d2
        ;   XREF to: 004f60e2 (CONDITIONAL_JUMP)  ; LAB_004f60e2
    ADD EAX,0x206e8                     ; 004f60d4
    PUSH EAX                            ; 004f60d9
    CALL core_inv.cpp_CInventory_loadItems_FUN_004dca90 ; 004f60da
        ;   XREF to: 004dca90 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_loadItems_FUN_004dca90(CInventory * this_ptr)
    ADD ESP,0x4                         ; 004f60df
    MOV EDI,dword ptr [ESP + 0x130]     ; 004f60e2
        ;   Label: LAB_004f60e2
    INC EBP                             ; 004f60e9
    MOV ESI,dword ptr [ESI + 0x14c]     ; 004f60ea
    CMP EBP,EDI                         ; 004f60f0
    JL 0x004f609a                       ; 004f60f2
        ;   XREF to: 004f609a (CONDITIONAL_JUMP)  ; LAB_004f609a
    MOV dword ptr [EBX + 0x1010],0x0    ; 004f60f4
        ;   Label: LAB_004f60f4
    TEST ESI,ESI                        ; 004f60fe
        ;   Label: LAB_004f60fe
    JZ 0x004f6125                       ; 004f6100
        ;   XREF to: 004f6125 (CONDITIONAL_JUMP)  ; LAB_004f6125
    MOV ESI,0x5c8672                    ; 004f6102 | = "..\\core\\mission.cpp"
    MOV EDI,0x15c                       ; 004f6107
    PUSH 0x5c8686                       ; 004f610c | = "CDemonMission::load - actor list coun..."
    MOV dword ptr [0x01d71de0],ESI      ; 004f6111 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 004f6117 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004f611d
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004f6122
    CMP dword ptr [EBX + 0x1458],0x0    ; 004f6125
        ;   Label: LAB_004f6125
    JZ 0x004f6150                       ; 004f612c
        ;   XREF to: 004f6150 (CONDITIONAL_JUMP)  ; LAB_004f6150
    MOV EAX,0x5c86ba                    ; 004f612e | = "..\\core\\mission.cpp"
    MOV EDX,0x15d                       ; 004f6133
    PUSH 0x5c86ce                       ; 004f6138 | = "CDemonMission::load - actor list coun..."
    MOV [0x01d71de0],EAX                ; 004f613d | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 004f6142 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004f6148
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004f614d
    MOV ECX,dword ptr [EBX + 0x100c]    ; 004f6150
        ;   Label: LAB_004f6150
    MOV dword ptr [EBX + 0x145c],0x0    ; 004f6156
    CMP ECX,0x4                         ; 004f6160
    JGE 0x004f6197                      ; 004f6163
        ;   XREF to: 004f6197 (CONDITIONAL_JUMP)  ; LAB_004f6197
    MOV ESI,dword ptr [ESP + 0x160]     ; 004f6165
    PUSH ESI                            ; 004f616c
        ;   Label: LAB_004f616c
    CALL crt_stdio.c_fgetc_FUN_005a32b0 ; 004f616d
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005a32b0()
    ADD ESP,0x4                         ; 004f6172
    TEST EAX,EAX                        ; 004f6175
    JL 0x004f617e                       ; 004f6177
        ;   XREF to: 004f617e (CONDITIONAL_JUMP)  ; LAB_004f617e
    CMP EAX,0xa                         ; 004f6179
    JNZ 0x004f616c                      ; 004f617c
        ;   XREF to: 004f616c (CONDITIONAL_JUMP)  ; LAB_004f616c
    MOV ESI,dword ptr [ESP + 0x160]     ; 004f617e
        ;   Label: LAB_004f617e
    PUSH ESI                            ; 004f6185
        ;   Label: LAB_004f6185
    CALL crt_stdio.c_fgetc_FUN_005a32b0 ; 004f6186
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005a32b0()
    ADD ESP,0x4                         ; 004f618b
    TEST EAX,EAX                        ; 004f618e
    JL 0x004f6197                       ; 004f6190
        ;   XREF to: 004f6197 (CONDITIONAL_JUMP)  ; LAB_004f6197
    CMP EAX,0xa                         ; 004f6192
    JNZ 0x004f6185                      ; 004f6195
        ;   XREF to: 004f6185 (CONDITIONAL_JUMP)  ; LAB_004f6185
    MOV ESI,dword ptr [0x005fed24]      ; 004f6197 | g_CGorePtr
        ;   Label: LAB_004f6197
    PUSH ESI                            ; 004f619d
    MOV dword ptr [EBX],0xffffffff      ; 004f619e
    CALL core_gore.cpp_CGore_reset_FUN_004ce560 ; 004f61a4
        ;   XREF to: 004ce560 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_reset_FUN_004ce560(CGore * this_ptr)
    MOV EDI,dword ptr [EBX + 0x100c]    ; 004f61a9
    ADD ESP,0x4                         ; 004f61af
    CMP EDI,0x7                         ; 004f61b2
    JGE 0x004f6308                      ; 004f61b5
        ;   XREF to: 004f6308 (CONDITIONAL_JUMP)  ; LAB_004f6308
    ADD ESP,0x148                       ; 004f61bb
    POP EBP                             ; 004f61c1
    POP EDI                             ; 004f61c2
    POP ESI                             ; 004f61c3
    POP EBX                             ; 004f61c4
    RET                                 ; 004f61c5
    PUSH EBX                            ; 004f61c6
        ;   Label: LAB_004f61c6
    CALL core_mission.cpp_FUN_004f76f0  ; 004f61c7
        ;   XREF to: 004f76f0 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_FUN_004f76f0()
    ADD ESP,0x4                         ; 004f61cc
    JMP 0x004f5ce8                      ; 004f61cf
        ;   XREF to: 004f5ce8 (UNCONDITIONAL_JUMP)  ; LAB_004f5ce8
    MOV EAX,0x5c84ef                    ; 004f61d4 | = "..\\core\\mission.cpp"
        ;   Label: LAB_004f61d4
    MOV EDX,0xf1                        ; 004f61d9
    PUSH 0x5c8503                       ; 004f61de | = "No name in mission"
    MOV [0x01d71de0],EAX                ; 004f61e3 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 004f61e8 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004f61ee
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004f61f3
    JMP 0x004f5d93                      ; 004f61f6
        ;   XREF to: 004f5d93 (UNCONDITIONAL_JUMP)  ; LAB_004f5d93
    MOV dword ptr [EBX + 0x1010],EBP    ; 004f61fb
        ;   Label: LAB_004f61fb
    JMP 0x004f5faf                      ; 004f6201
        ;   XREF to: 004f5faf (UNCONDITIONAL_JUMP)  ; LAB_004f5faf
    MOV ECX,0x19                        ; 004f6206
        ;   Label: LAB_004f6206
    LEA EDI,[ESP + 0xc8]                ; 004f620b
    LEA EAX,[ESP + 0x64]                ; 004f6212
    MOV ESI,0x6005a0                    ; 004f6216 | DAT_006005a0
    PUSH EAX                            ; 004f621b
    LEA EAX,[ESP + 0xcc]                ; 004f621c
    MOVSD.REP ES:EDI,ESI                ; 004f6223 | DAT_006005a0 | DAT_006005a4
    PUSH EAX                            ; 004f6225
    MOV EBP,dword ptr [ESP + 0x168]     ; 004f6226
    MOV ECX,0x19                        ; 004f622d
    PUSH 0x5c85b2                       ; 004f6232 | = "%s \"%[^\"]\"\n"
    LEA EDI,[ESP + 0x70]                ; 004f6237
    MOV ESI,0x600608                    ; 004f623b | DAT_00600608
    PUSH EBP                            ; 004f6240
    MOVSD.REP ES:EDI,ESI                ; 004f6241 | DAT_00600608 | DAT_0060060c
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 004f6243
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0x10                        ; 004f6248
    LEA EAX,[ESP + 0xc8]                ; 004f624b
    PUSH EAX                            ; 004f6252
    LEA ESI,[ESP + 0x68]                ; 004f6253
    CALL core_actor.cpp_createActorByName_FUN_0040c4f0 ; 004f6257
        ;   XREF to: 0040c4f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_createActorByName_FUN_0040c4f0()
    MOV EBP,EAX                         ; 004f625c
    ADD ESP,0x4                         ; 004f625e
    MOV EDI,EAX                         ; 004f6261
    MOV dword ptr [ESP + 0x140],EAX     ; 004f6263
    PUSH EDI                            ; 004f626a
    MOV AL,byte ptr [ESI]               ; 004f626b
        ;   Label: LAB_004f626b
    MOV byte ptr [EDI],AL               ; 004f626d
    CMP AL,0x0                          ; 004f626f
    JZ 0x004f6283                       ; 004f6271
        ;   XREF to: 004f6283 (CONDITIONAL_JUMP)  ; LAB_004f6283
    MOV AL,byte ptr [ESI + 0x1]         ; 004f6273
    ADD ESI,0x2                         ; 004f6276
    MOV byte ptr [EDI + 0x1],AL         ; 004f6279
    ADD EDI,0x2                         ; 004f627c
    CMP AL,0x0                          ; 004f627f
    JNZ 0x004f626b                      ; 004f6281
        ;   XREF to: 004f626b (CONDITIONAL_JUMP)  ; LAB_004f626b
    POP EDI                             ; 004f6283
        ;   Label: LAB_004f6283
    PUSH EBP                            ; 004f6284
    PUSH EBX                            ; 004f6285
    CALL core_mission.cpp_CDemonMission_addActorToList_FUN_004f6930 ; 004f6286
        ;   XREF to: 004f6930 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_addActorToList_FUN_004f6930(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004f628b
    MOV EAX,dword ptr [ESP + 0x144]     ; 004f628e
    CMP EAX,dword ptr [ESP + 0x130]     ; 004f6295
    JNZ 0x004f62a4                      ; 004f629c
        ;   XREF to: 004f62a4 (CONDITIONAL_JUMP)  ; LAB_004f62a4
    MOV dword ptr [EBX + 0x1458],EBP    ; 004f629e
    CMP dword ptr [EBX + 0x145c],0x1770 ; 004f62a4
        ;   Label: LAB_004f62a4
    JL 0x004f62d3                       ; 004f62ae
        ;   XREF to: 004f62d3 (CONDITIONAL_JUMP)  ; LAB_004f62d3
    MOV ESI,0x5c85be                    ; 004f62b0 | = "..\\core\\mission.cpp"
    MOV EDI,0x13c                       ; 004f62b5
    PUSH 0x5c85d2                       ; 004f62ba | = "Too many actors"
    MOV dword ptr [0x01d71de0],ESI      ; 004f62bf | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 004f62c5 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004f62cb
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004f62d0
    MOV EAX,dword ptr [EBX + 0x145c]    ; 004f62d3
        ;   Label: LAB_004f62d3
    MOV ESI,dword ptr [ESP + 0x140]     ; 004f62d9
    MOV dword ptr [EBX + EAX*0x4 + 0x1460],ESI ; 004f62e0
    MOV EAX,dword ptr [ESP + 0x144]     ; 004f62e7
    MOV EBP,dword ptr [EBX + 0x145c]    ; 004f62ee
    INC EAX                             ; 004f62f4
    INC EBP                             ; 004f62f5
    MOV dword ptr [ESP + 0x144],EAX     ; 004f62f6
    MOV dword ptr [EBX + 0x145c],EBP    ; 004f62fd
    JMP 0x004f5fe5                      ; 004f6303
        ;   XREF to: 004f5fe5 (UNCONDITIONAL_JUMP)  ; LAB_004f5fe5
    MOV EBP,dword ptr [ESP + 0x160]     ; 004f6308
        ;   Label: LAB_004f6308
    PUSH EBP                            ; 004f630f
    MOV EAX,[0x005fed24]                ; 004f6310 | g_CGorePtr
    PUSH EAX                            ; 004f6315
    CALL core_gore.cpp_CGore_load_FUN_004cf010 ; 004f6316
        ;   XREF to: 004cf010 (UNCONDITIONAL_CALL)  ; int core_gore.cpp_CGore_load_FUN_004cf010(CGore * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 004f631b
    ADD ESP,0x148                       ; 004f631e
    POP EBP                             ; 004f6324
    POP EDI                             ; 004f6325
    POP ESI                             ; 004f6326
    POP EBX                             ; 004f6327
    RET                                 ; 004f6328

