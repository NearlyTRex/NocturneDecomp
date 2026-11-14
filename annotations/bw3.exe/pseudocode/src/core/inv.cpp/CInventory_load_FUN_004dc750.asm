; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_inv_cpp_CInventory_load_FUN_004dc750(CInventory *this_ptr,_FILE *file_handle)
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
;   core_hero.cpp_CHero_archive_FUN_004d27b0 at 004d29fa
;
; Referenced Globals:
;   undefined4 DAT_005c6497
;   undefined4 DAT_005c649b
;   undefined4 DAT_005c649f
;   undefined4 DAT_005c64a3
;   TerminatedCString s_s_005c64a7
;   TerminatedCString s_core_inv_cpp_005c64b4
;   TerminatedCString s_CInventory_load_Can_t_fi_005c64c4
;   undefined4 DAT_00600188
;   undefined4 DAT_0060018c
;   undefined4 DAT_006001f0
;   undefined4 DAT_006001f4
;   undefined4 DAT_00600530
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_01d81080
;   ... and 2 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_actor.cpp_CDemonActor_load_FUN_0040b110
;   core_actor.cpp_createActorByName_FUN_0040c4f0
;   core_inv.cpp_CInventory_clear_FUN_004da440
;   core_inv.cpp_CInventory_initialize_FUN_004da4e0
;   core_inv.cpp_FUN_004dd2d0
;   core_main.c_FUN_004e4330
;   core_mission.cpp_CDemonMission_getNextLoadedInventoryActor_FUN_004f6330
;   crt_stdio.c_fgets_FUN_005a3f00
;   crt_stdio.c_fscanf_FUN_005a3230
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dc750
        ;   Label: core_inv.cpp_CInventory_load_FUN_004dc750
    PUSH ESI                            ; 004dc751
    PUSH EDI                            ; 004dc752
    PUSH EBP                            ; 004dc753
    SUB ESP,0x1cc                       ; 004dc754
    MOV EDX,dword ptr [ESP + 0x1e0]     ; 004dc75a
    PUSH EDX                            ; 004dc761
    CALL core_inv.cpp_CInventory_clear_FUN_004da440 ; 004dc762
        ;   XREF to: 004da440 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_clear_FUN_004da440(CInventory * this_ptr)
    ADD ESP,0x4                         ; 004dc767
    MOV ECX,dword ptr [ESP + 0x1e0]     ; 004dc76a
    PUSH ECX                            ; 004dc771
    CALL core_inv.cpp_CInventory_initialize_FUN_004da4e0 ; 004dc772
        ;   XREF to: 004da4e0 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_initialize_FUN_004da4e0(CInventory * this_ptr)
    ADD ESP,0x4                         ; 004dc777
    MOV EBX,dword ptr [ESP + 0x1e4]     ; 004dc77a
    PUSH EBX                            ; 004dc781
    PUSH 0xff                           ; 004dc782
    LEA EAX,[ESP + 0x8]                 ; 004dc787
    PUSH EAX                            ; 004dc78b
    CALL crt_stdio.c_fgets_FUN_005a3f00 ; 004dc78c
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005a3f00(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004dc791
    PUSH EBX                            ; 004dc794
    PUSH 0xff                           ; 004dc795
    LEA EAX,[ESP + 0x8]                 ; 004dc79a
    PUSH EAX                            ; 004dc79e
    CALL crt_stdio.c_fgets_FUN_005a3f00 ; 004dc79f
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005a3f00(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004dc7a4
    MOV EAX,dword ptr [ESP + 0x1e0]     ; 004dc7a7
    ADD EAX,0x334                       ; 004dc7ae
    PUSH EAX                            ; 004dc7b3
    PUSH 0x5c6497                       ; 004dc7b4 | DAT_005c6497
    PUSH EBX                            ; 004dc7b9
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 004dc7ba
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005a3230(_FILE * file, char * format)
    ADD ESP,0xc                         ; 004dc7bf
    PUSH EBX                            ; 004dc7c2
    PUSH 0xff                           ; 004dc7c3
    LEA EAX,[ESP + 0x8]                 ; 004dc7c8
    PUSH EAX                            ; 004dc7cc
    CALL crt_stdio.c_fgets_FUN_005a3f00 ; 004dc7cd
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005a3f00(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004dc7d2
    MOV EAX,dword ptr [ESP + 0x1e0]     ; 004dc7d5
    ADD EAX,0x10                        ; 004dc7dc
    PUSH EAX                            ; 004dc7df
    PUSH 0x5c649b                       ; 004dc7e0 | DAT_005c649b
    PUSH EBX                            ; 004dc7e5
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 004dc7e6
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005a3230(_FILE * file, char * format)
    ADD ESP,0xc                         ; 004dc7eb
    PUSH EBX                            ; 004dc7ee
    PUSH 0xff                           ; 004dc7ef
    LEA EAX,[ESP + 0x8]                 ; 004dc7f4
    PUSH EAX                            ; 004dc7f8
    CALL crt_stdio.c_fgets_FUN_005a3f00 ; 004dc7f9
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005a3f00(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004dc7fe
    LEA EAX,[ESP + 0x1c8]               ; 004dc801
    PUSH EAX                            ; 004dc808
    PUSH 0x5c649f                       ; 004dc809 | DAT_005c649f
    PUSH EBX                            ; 004dc80e
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 004dc80f
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005a3230(_FILE * file, char * format)
    ADD ESP,0xc                         ; 004dc814
    MOV EAX,dword ptr [ESP + 0x1e0]     ; 004dc817
    CMP dword ptr [EAX + 0x334],0x1     ; 004dc81e
    JGE 0x004dc9bb                      ; 004dc825
        ;   XREF to: 004dc9bb (CONDITIONAL_JUMP)  ; LAB_004dc9bb
    MOV EAX,dword ptr [ESP + 0x1e4]     ; 004dc82b
        ;   Label: LAB_004dc82b
    PUSH EAX                            ; 004dc832
    PUSH 0xff                           ; 004dc833
    LEA EAX,[ESP + 0x8]                 ; 004dc838
    PUSH EAX                            ; 004dc83c
    CALL crt_stdio.c_fgets_FUN_005a3f00 ; 004dc83d
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005a3f00(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004dc842
    MOV EAX,dword ptr [ESP + 0x1e0]     ; 004dc845
    MOV EDX,dword ptr [EAX + 0x10]      ; 004dc84c
    XOR EBP,EBP                         ; 004dc84f
    TEST EDX,EDX                        ; 004dc851
    JLE 0x004dc8e4                      ; 004dc853
        ;   XREF to: 004dc8e4 (CONDITIONAL_JUMP)  ; LAB_004dc8e4
    MOV EBX,EAX                         ; 004dc859
    MOV ECX,0x19                        ; 004dc85b
        ;   Label: LAB_004dc85b
    LEA EDI,[ESP + 0x100]               ; 004dc860
    LEA EAX,[ESP + 0x164]               ; 004dc867
    MOV ESI,0x600188                    ; 004dc86e | DAT_00600188
    PUSH EAX                            ; 004dc873
    LEA EAX,[ESP + 0x104]               ; 004dc874
    MOVSD.REP ES:EDI,ESI                ; 004dc87b | DAT_00600188 | DAT_0060018c
    PUSH EAX                            ; 004dc87d
    MOV ECX,0x19                        ; 004dc87e
    LEA EDI,[ESP + 0x16c]               ; 004dc883
    PUSH 0x5c64a7                       ; 004dc88a | = " %s \"%[^\"]\"\n"
    MOV EAX,dword ptr [ESP + 0x1f0]     ; 004dc88f
    MOV ESI,0x6001f0                    ; 004dc896 | DAT_006001f0
    PUSH EAX                            ; 004dc89b
    MOVSD.REP ES:EDI,ESI                ; 004dc89c | DAT_006001f0 | DAT_006001f4
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 004dc89e
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005a3230(_FILE * file, char * format)
    MOV ESI,dword ptr [0x00600530]      ; 004dc8a3 | DAT_00600530
    MOV EDX,dword ptr [ESI + 0x1010]    ; 004dc8a9 | DAT_01d82090
    ADD ESP,0x10                        ; 004dc8af
    TEST EDX,EDX                        ; 004dc8b2
    JZ 0x004dc9f0                       ; 004dc8b4
        ;   XREF to: 004dc9f0 (CONDITIONAL_JUMP)  ; LAB_004dc9f0
    LEA EAX,[ESP + 0x164]               ; 004dc8ba
    PUSH EAX                            ; 004dc8c1
    PUSH ESI                            ; 004dc8c2 | DAT_01d81080
    CALL core_mission.cpp_CDemonMission_getNextLoadedInventoryActor_FUN_004f6330 ; 004dc8c3
        ;   XREF to: 004f6330 (UNCONDITIONAL_CALL)  ; CDemonActor * core_mission.cpp_CDemonMission_getNextLoadedInventoryActor_FUN_004f6330(CDemonMission * this_ptr, char * actor_name)
    ADD ESP,0x8                         ; 004dc8c8
    MOV dword ptr [EBX + 0x14],EAX      ; 004dc8cb
    MOV EAX,dword ptr [ESP + 0x1e0]     ; 004dc8ce
        ;   Label: LAB_004dc8ce
    INC EBP                             ; 004dc8d5
    MOV ECX,dword ptr [EAX + 0x10]      ; 004dc8d6
    ADD EBX,0x4                         ; 004dc8d9
    CMP EBP,ECX                         ; 004dc8dc
    JL 0x004dc85b                       ; 004dc8de
        ;   XREF to: 004dc85b (CONDITIONAL_JUMP)  ; LAB_004dc85b
    MOV EBX,dword ptr [ESP + 0x1e4]     ; 004dc8e4
        ;   Label: LAB_004dc8e4
    PUSH EBX                            ; 004dc8eb
    PUSH 0xff                           ; 004dc8ec
    LEA EAX,[ESP + 0x8]                 ; 004dc8f1
    PUSH EAX                            ; 004dc8f5
    CALL crt_stdio.c_fgets_FUN_005a3f00 ; 004dc8f6
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005a3f00(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004dc8fb
    MOV EAX,dword ptr [ESP + 0x1e0]     ; 004dc8fe
    MOV EDI,dword ptr [EAX + 0x10]      ; 004dc905
    XOR ESI,ESI                         ; 004dc908
    TEST EDI,EDI                        ; 004dc90a
    JLE 0x004dc940                      ; 004dc90c
        ;   XREF to: 004dc940 (CONDITIONAL_JUMP)  ; LAB_004dc940
    MOV EBX,EAX                         ; 004dc90e
    MOV ECX,dword ptr [ESP + 0x1e4]     ; 004dc910
        ;   Label: LAB_004dc910
    PUSH ECX                            ; 004dc917
    MOV EDI,dword ptr [EBX + 0x14]      ; 004dc918
    PUSH EDI                            ; 004dc91b
    CALL core_actor.cpp_CDemonActor_load_FUN_0040b110 ; 004dc91c
        ;   XREF to: 0040b110 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_load_FUN_0040b110(CDemonActor * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 004dc921
    MOV EAX,dword ptr [ESP + 0x1e0]     ; 004dc924
    INC ESI                             ; 004dc92b
    MOV EBP,dword ptr [EAX + 0x10]      ; 004dc92c
    ADD EBX,0x4                         ; 004dc92f
    CMP ESI,EBP                         ; 004dc932
    JL 0x004dc910                       ; 004dc934
        ;   XREF to: 004dc910 (CONDITIONAL_JUMP)  ; LAB_004dc910
    LEA EAX,[EAX]                       ; 004dc936
    LEA EDX,[EDX]                       ; 004dc93c
    MOV EAX,dword ptr [ESP + 0x1e0]     ; 004dc940
        ;   Label: LAB_004dc940
    CMP dword ptr [EAX + 0x334],0x2     ; 004dc947
    JL 0x004dc96a                       ; 004dc94e
        ;   XREF to: 004dc96a (CONDITIONAL_JUMP)  ; LAB_004dc96a
    MOV ECX,dword ptr [ESP + 0x1e4]     ; 004dc950
    PUSH ECX                            ; 004dc957
    PUSH 0xff                           ; 004dc958
    LEA EAX,[ESP + 0x8]                 ; 004dc95d
    PUSH EAX                            ; 004dc961
    CALL crt_stdio.c_fgets_FUN_005a3f00 ; 004dc962
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005a3f00(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004dc967
    MOV EAX,[0x00600530]                ; 004dc96a | DAT_00600530
        ;   Label: LAB_004dc96a
    MOV EDX,dword ptr [ESP + 0x1e0]     ; 004dc96f
    MOV EAX,dword ptr [EAX + 0x1010]    ; 004dc976 | DAT_01d82090
    MOV dword ptr [EDX + 0x338],0x0     ; 004dc97c
    MOV dword ptr [EDX + 0x458],EAX     ; 004dc986
    MOV EBX,dword ptr [ESP + 0x1c8]     ; 004dc98c
    TEST EBX,EBX                        ; 004dc993
    JGE 0x004dca2d                      ; 004dc995
        ;   XREF to: 004dca2d (CONDITIONAL_JUMP)  ; LAB_004dca2d
    PUSH 0x3e7                          ; 004dc99b
        ;   Label: LAB_004dc99b
    MOV ESI,dword ptr [ESP + 0x1e4]     ; 004dc9a0
    PUSH ESI                            ; 004dc9a7
    CALL core_inv.cpp_FUN_004dd2d0      ; 004dc9a8
        ;   XREF to: 004dd2d0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004dd2d0()
    ADD ESP,0x8                         ; 004dc9ad
    ADD ESP,0x1cc                       ; 004dc9b0
    POP EBP                             ; 004dc9b6
    POP EDI                             ; 004dc9b7
    POP ESI                             ; 004dc9b8
    POP EBX                             ; 004dc9b9
    RET                                 ; 004dc9ba
    MOV ESI,dword ptr [ESP + 0x1e4]     ; 004dc9bb
        ;   Label: LAB_004dc9bb
    PUSH ESI                            ; 004dc9c2
    PUSH 0xff                           ; 004dc9c3
    LEA EAX,[ESP + 0x8]                 ; 004dc9c8
    PUSH EAX                            ; 004dc9cc
    CALL crt_stdio.c_fgets_FUN_005a3f00 ; 004dc9cd
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005a3f00(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004dc9d2
    MOV EDI,dword ptr [ESP + 0x1e0]     ; 004dc9d5
    PUSH EDI                            ; 004dc9dc
    PUSH 0x5c64a3                       ; 004dc9dd | DAT_005c64a3
    PUSH ESI                            ; 004dc9e2
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 004dc9e3
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005a3230(_FILE * file, char * format)
    ADD ESP,0xc                         ; 004dc9e8
    JMP 0x004dc82b                      ; 004dc9eb
        ;   XREF to: 004dc82b (UNCONDITIONAL_JUMP)  ; LAB_004dc82b
    LEA EAX,[ESP + 0x100]               ; 004dc9f0
        ;   Label: LAB_004dc9f0
    PUSH EAX                            ; 004dc9f7
    LEA ESI,[ESP + 0x168]               ; 004dc9f8
    CALL core_actor.cpp_createActorByName_FUN_0040c4f0 ; 004dc9ff
        ;   XREF to: 0040c4f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_createActorByName_FUN_0040c4f0(char * class_name)
    ADD ESP,0x4                         ; 004dca04
    MOV EDI,EAX                         ; 004dca07
    MOV EDX,EAX                         ; 004dca09
    PUSH EDI                            ; 004dca0b
    MOV AL,byte ptr [ESI]               ; 004dca0c
        ;   Label: LAB_004dca0c
    MOV byte ptr [EDI],AL               ; 004dca0e
    CMP AL,0x0                          ; 004dca10
    JZ 0x004dca24                       ; 004dca12
        ;   XREF to: 004dca24 (CONDITIONAL_JUMP)  ; LAB_004dca24
    MOV AL,byte ptr [ESI + 0x1]         ; 004dca14
    ADD ESI,0x2                         ; 004dca17
    MOV byte ptr [EDI + 0x1],AL         ; 004dca1a
    ADD EDI,0x2                         ; 004dca1d
    CMP AL,0x0                          ; 004dca20
    JNZ 0x004dca0c                      ; 004dca22
        ;   XREF to: 004dca0c (CONDITIONAL_JUMP)  ; LAB_004dca0c
    POP EDI                             ; 004dca24
        ;   Label: LAB_004dca24
    MOV dword ptr [EBX + 0x14],EDX      ; 004dca25
    JMP 0x004dc8ce                      ; 004dca28
        ;   XREF to: 004dc8ce (UNCONDITIONAL_JUMP)  ; LAB_004dc8ce
    LEA EAX,[EBX*0x4 + 0x0]             ; 004dca2d
        ;   Label: LAB_004dca2d
    MOV ESI,dword ptr [0x02d0c150]      ; 004dca34 | g_CWeaponClassInfo.name_hash
    ADD EAX,EDX                         ; 004dca3a
    PUSH ESI                            ; 004dca3c
    MOV EBP,dword ptr [EAX + 0x14]      ; 004dca3d
    PUSH EBP                            ; 004dca40
    MOV EDI,EDX                         ; 004dca41
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004dca43
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EDX,EDI                         ; 004dca48
    MOV dword ptr [EDX + 0x338],EAX     ; 004dca4a
    MOV EDX,dword ptr [EDI + 0x338]     ; 004dca50
    ADD ESP,0x8                         ; 004dca56
    TEST EDX,EDX                        ; 004dca59
    JNZ 0x004dc99b                      ; 004dca5b
        ;   XREF to: 004dc99b (CONDITIONAL_JUMP)  ; LAB_004dc99b
    MOV ECX,0x5c64b4                    ; 004dca61 | = "..\\core\\inv.cpp"
    MOV EBX,0x739                       ; 004dca66
    PUSH 0x5c64c4                       ; 004dca6b | = "CInventory::load - Can't find your we..."
    MOV dword ptr [0x01d71de0],ECX      ; 004dca70 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 004dca76 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004dca7c
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004dca81
    JMP 0x004dc99b                      ; 004dca84
        ;   XREF to: 004dc99b (UNCONDITIONAL_JUMP)  ; LAB_004dc99b

