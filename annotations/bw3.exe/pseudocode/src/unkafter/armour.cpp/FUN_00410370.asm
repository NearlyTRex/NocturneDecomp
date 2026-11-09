; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_armour_cpp_FUN_00410370(undefined4 param_1)
;
;
; XREF[62]:
;   core_asgaya.cpp_CAsgaya_dtor_FUN_005a1b50 at 005a1b85
;   core_baal.cpp_CBaal_dtor_FUN_00597d00 at 00597d15
;   core_boneguy.cpp_CBoneGuy_dtor_FUN_0041ab00 at 0041ab15
;   core_boneguy.cpp_CSkeletonDemon_dtor_FUN_0041a950 at 0041a965
;   core_boneguy.cpp_CSkeletonForest_dtor_FUN_0041aa70 at 0041aa85
;   core_boneguy.cpp_CSkeletonIndian_dtor_FUN_0041a9e0 at 0041a9f5
;   core_bugs.cpp_CBugs_dtor_FUN_00424330 at 00424345
;   core_carved.cpp_CCarved_dtor_FUN_004291f0 at 00429205
;   core_charactr.cpp_CCharacter_dtor_FUN_00410290 at 004102a5
;   core_construc.cpp_CConstructBone_dtor_FUN_004446f0 at 00444705
;   ... and 52 more
;
; Referenced Globals:
;   WatcomTypeInfo g_CFlameTypeInfo
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005a3de6
;
; *****************************************************************************

section .text

    PUSH 0x5dbca0                       ; 00410370 | g_CFlameTypeInfo
        ;   Label: unkafter_armour.cpp_FUN_00410370
    PUSH 0x32                           ; 00410375
    MOV EDX,dword ptr [ESP + 0xc]       ; 00410377
    PUSH EDX                            ; 0041037b
    CALL crt_memory.c___arrfini_FUN_005a3de6 ; 0041037c
        ;   XREF to: 005a3de6 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrfini_FUN_005a3de6()
    ADD ESP,0xc                         ; 00410381
    RET                                 ; 00410384

