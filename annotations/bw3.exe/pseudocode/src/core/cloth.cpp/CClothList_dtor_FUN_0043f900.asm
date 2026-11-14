; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CClothList * __cdecl core_cloth_cpp_CClothList_dtor_FUN_0043f900(CClothList *this_ptr,uint flags)
;
; Parameters:
; CClothList *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[62]:
;   core_asgaya.cpp_CAsgaya_dtor_FUN_005a1b50 at 005a1b95
;   core_baal.cpp_CBaal_dtor_FUN_00597d00 at 00597d25
;   core_bird.cpp_CBird_dtor_FUN_004101f0 at 00410225
;   core_boneguy.cpp_CBaalSkel_dtor_FUN_0041a8c0 at 0041a8e5
;   core_boneguy.cpp_CBoneGuy_dtor_FUN_0041ab00 at 0041ab25
;   core_boneguy.cpp_CSkeletonDemon_dtor_FUN_0041a950 at 0041a975
;   core_boneguy.cpp_CSkeletonForest_dtor_FUN_0041aa70 at 0041aa95
;   core_boneguy.cpp_CSkeletonIndian_dtor_FUN_0041a9e0 at 0041aa05
;   core_bugs.cpp_CBugs_dtor_FUN_00424330 at 00424355
;   core_carved.cpp_CCarved_dtor_FUN_004291f0 at 00429215
;   ... and 52 more
;
; Called Functions:
;   core_cloth.cpp_CClothList_reset_FUN_0043f9d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043f900
        ;   Label: core_cloth.cpp_CClothList_dtor_FUN_0043f900
    MOV EBX,dword ptr [ESP + 0x8]       ; 0043f901
    PUSH EBX                            ; 0043f905
    CALL core_cloth.cpp_CClothList_reset_FUN_0043f9d0 ; 0043f906
        ;   XREF to: 0043f9d0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CClothList_reset_FUN_0043f9d0(CClothList * this_ptr)
    ADD ESP,0x4                         ; 0043f90b
    MOV EAX,EBX                         ; 0043f90e
    POP EBX                             ; 0043f910
    RET                                 ; 0043f911

