; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_npc_cpp_CNPC_setup_FUN_00510510(CNPC *this_ptr)
;
; Parameters:
; CNPC *           Stack[0x4]:4   this_ptr
;
; XREF[5]:
;   core_hiram.cpp_CHiram_setup_FUN_004d1050 at 004d1055
;   core_hostage.cpp_CHostage_setup_FUN_004d1400 at 004d159c
;   core_passngr.cpp_CPassenger_setup_FUN_005115e0 at 005115e8
;   core_tbplayer.cpp_CBassPlayer_setup_FUN_00571b60 at 00571b67
;   core_tbplayer.cpp_CDrummer_setup_FUN_00571de0 at 00571de7
;
; Referenced Globals:
;   TerminatedCString s_priest_dfm_005e14c5
;   TerminatedCString s_Bip01_L_Hand_005e14d0
;   TerminatedCString s_Bip01_R_Hand_005e14dd
;   undefined4 DAT_01d653fc
;   undefined4 DAT_01d65400
;
; Called Functions:
;   core_charactr.cpp_CCharacter_setup_FUN_00422930
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80
;   crt_string.c__stricmp_FUN_005b8130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00510510
        ;   Label: core_npc.cpp_CNPC_setup_FUN_00510510
    PUSH ESI                            ; 00510511
    PUSH EBP                            ; 00510512
    MOV EBP,ESP                         ; 00510513
    MOV EBX,dword ptr [EBP + 0x10]      ; 00510515
    PUSH EBX                            ; 00510518
    CALL core_charactr.cpp_CCharacter_setup_FUN_00422930 ; 00510519
        ;   XREF to: 00422930 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_setup_FUN_00422930(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0051051e
    PUSH 0x5e14c5                       ; 00510521 | = "priest.dfm"
    LEA EAX,[EBX + 0x2514]              ; 00510526
    PUSH EAX                            ; 0051052c
    CALL crt_string.c__stricmp_FUN_005b8130 ; 0051052d
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 00510532
    TEST EAX,EAX                        ; 00510535
    JNZ 0x00510543                      ; 00510537
        ;   XREF to: 00510543 (CONDITIONAL_JUMP)  ; LAB_00510543
    MOV dword ptr [EBX + 0x280c],0x2    ; 00510539
    LEA EAX,[EBX + 0x2b4]               ; 00510543
        ;   Label: LAB_00510543
    PUSH EAX                            ; 00510549
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890 ; 0051054a
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0051054f
    PUSH 0x0                            ; 00510552
    PUSH 0x5e14d0                       ; 00510554 | = "Bip01 L Hand"
    PUSH EAX                            ; 00510559
    MOV ESI,EAX                         ; 0051055a
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 0051055c
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00510561
    PUSH 0x0                            ; 00510564
    PUSH 0x5e14dd                       ; 00510566 | = "Bip01 R Hand"
    PUSH ESI                            ; 0051056b
    MOV [0x01d653fc],EAX                ; 0051056c | DAT_01d653fc
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00510571
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    MOV ESI,dword ptr [0x01d653fc]      ; 00510576 | DAT_01d653fc
    ADD ESP,0xc                         ; 0051057c
    MOV dword ptr [EBX + 0x2690],EAX    ; 0051057f
    MOV [0x01d65400],EAX                ; 00510585 | DAT_01d65400
    MOV EDX,dword ptr [EBX + 0x2814]    ; 0051058a
    MOV dword ptr [EBX + 0x2618],ESI    ; 00510590
    TEST EDX,EDX                        ; 00510596
    JNZ 0x0051059e                      ; 00510598
        ;   XREF to: 0051059e (CONDITIONAL_JUMP)  ; LAB_0051059e
    POP EBP                             ; 0051059a
    POP ESI                             ; 0051059b
    POP EBX                             ; 0051059c
    RET                                 ; 0051059d
    MOV dword ptr [EBX + 0xfc],0x1      ; 0051059e
        ;   Label: LAB_0051059e
    POP EBP                             ; 005105a8
    POP ESI                             ; 005105a9
    POP EBX                             ; 005105aa
    RET                                 ; 005105ab

