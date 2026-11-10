; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_npc_cpp_CNPC_setup_FUN_00531720(CNPC *this_ptr)
;
; Parameters:
; CNPC *           Stack[0x4]:4   this_ptr
;
; XREF[5]:
;   core_hiram.cpp_CHiram_setup_FUN_004ed290 at 004ed295
;   core_hostage.cpp_CHostage_setup_FUN_004ed630 at 004ed7cc
;   core_passngr.cpp_CPassenger_setup_FUN_00532930 at 00532938
;   core_tbplayer.cpp_CBassPlayer_setup_FUN_005947b0 at 005947b7
;   core_tbplayer.cpp_CDrummer_setup_FUN_00594a30 at 00594a37
;
; Referenced Globals:
;   TerminatedCString s_priest_dfm_005ec720
;   TerminatedCString s_Bip01_L_Hand_005ec72b
;   TerminatedCString s_Bip01_R_Hand_005ec738
;   undefined4 DAT_01d81364
;   undefined4 DAT_01d81368
;
; Called Functions:
;   core_charactr.cpp_CCharacter_setup_FUN_0042c510
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
;   core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0
;   crt_string.c__stricmp_FUN_005c04e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00531720
        ;   Label: core_npc.cpp_CNPC_setup_FUN_00531720
    PUSH ESI                            ; 00531721
    PUSH EBP                            ; 00531722
    MOV EBP,ESP                         ; 00531723
    MOV EBX,dword ptr [EBP + 0x10]      ; 00531725
    PUSH EBX                            ; 00531728
    CALL core_charactr.cpp_CCharacter_setup_FUN_0042c510 ; 00531729
        ;   XREF to: 0042c510 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_setup_FUN_0042c510(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0053172e
    PUSH 0x5ec720                       ; 00531731 | = "priest.dfm"
    LEA EAX,[EBX + 0x24a8]              ; 00531736
    PUSH EAX                            ; 0053173c
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 0053173d
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 00531742
    TEST EAX,EAX                        ; 00531745
    JNZ 0x00531753                      ; 00531747
        ;   XREF to: 00531753 (CONDITIONAL_JUMP)  ; LAB_00531753
    MOV dword ptr [EBX + 0x27a0],0x2    ; 00531749
    LEA EAX,[EBX + 0x158]               ; 00531753
        ;   Label: LAB_00531753
    PUSH EAX                            ; 00531759
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30 ; 0053175a
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0053175f
    PUSH 0x0                            ; 00531762
    PUSH 0x5ec72b                       ; 00531764 | = "Bip01 L Hand"
    PUSH EAX                            ; 00531769
    MOV ESI,EAX                         ; 0053176a
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0053176c
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00531771
    PUSH 0x0                            ; 00531774
    PUSH 0x5ec738                       ; 00531776 | = "Bip01 R Hand"
    PUSH ESI                            ; 0053177b
    MOV [0x01d81364],EAX                ; 0053177c | DAT_01d81364
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00531781
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    MOV ESI,dword ptr [0x01d81364]      ; 00531786 | DAT_01d81364
    ADD ESP,0xc                         ; 0053178c
    MOV dword ptr [EBX + 0x2620],EAX    ; 0053178f
    MOV [0x01d81368],EAX                ; 00531795 | DAT_01d81368
    MOV EDX,dword ptr [EBX + 0x27a8]    ; 0053179a
    MOV dword ptr [EBX + 0x25a8],ESI    ; 005317a0
    TEST EDX,EDX                        ; 005317a6
    JNZ 0x005317ae                      ; 005317a8
        ;   XREF to: 005317ae (CONDITIONAL_JUMP)  ; LAB_005317ae
    POP EBP                             ; 005317aa
    POP ESI                             ; 005317ab
    POP EBX                             ; 005317ac
    RET                                 ; 005317ad
    MOV dword ptr [EBX + 0xfc],0x1      ; 005317ae
        ;   Label: LAB_005317ae
    POP EBP                             ; 005317b8
    POP ESI                             ; 005317b9
    POP EBX                             ; 005317ba
    RET                                 ; 005317bb

