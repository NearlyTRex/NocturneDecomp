; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_box_cpp_CBox_setupCorners_FUN_0041a6e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,undefined4 param_5)
;
;
; XREF[7]:
;   core_bodypart.cpp_CBodyPart_setupPhysicsBox_FUN_00417d70 at 00417e9d
;   core_box.cpp_CBox_loadFromFile_FUN_0041c850 at 0041c94b
;   core_boxactor.cpp_CBoxActor_setupPhysicsBox_FUN_0041e4d0 at 0041e5ca
;   core_fire.cpp_CStake_spawn_FUN_00483320 at 0048352e
;   core_fire.cpp_CToss_create_FUN_004873b0 at 0048747b
;   core_simbox.cpp_CSimBox_setup_FUN_00516c60 at 00516d08
;   core_weapon.cpp_CWeapon_setupPhysicsBox_FUN_00554660 at 00554737
;
; Referenced Globals:
;   double DOUBLE_0057964d = 0.5
;
; Called Functions:
;   core_box.cpp_CBox_updateTransform_FUN_0041aaa0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0041a6e0
        ;   Label: core_box.cpp_CBox_setupCorners_FUN_0041a6e0
    MOV ECX,dword ptr [ESP + 0x10]      ; 0041a6e4
    LEA EDX,[EAX + 0xa4]                ; 0041a6e8
    CMP EDX,ECX                         ; 0041a6ee
    JZ 0x0041a704                       ; 0041a6f0
        ;   XREF to: 0041a704 (CONDITIONAL_JUMP)  ; LAB_0041a704
    PUSH EBX                            ; 0041a6f2
    MOV EBX,dword ptr [ECX]             ; 0041a6f3
    MOV dword ptr [EDX],EBX             ; 0041a6f5
    MOV EBX,dword ptr [ECX + 0x4]       ; 0041a6f7
    MOV dword ptr [EDX + 0x4],EBX       ; 0041a6fa
    MOV EBX,dword ptr [ECX + 0x8]       ; 0041a6fd
    MOV dword ptr [EDX + 0x8],EBX       ; 0041a700
    POP EBX                             ; 0041a703
    FLD float ptr [EAX + 0xa4]          ; 0041a704
        ;   Label: LAB_0041a704
    FMUL double ptr [0x0057964d]        ; 0041a70a | DOUBLE_0057964d
    FLD float ptr [EAX + 0xac]          ; 0041a710
    FMUL double ptr [0x0057964d]        ; 0041a716 | DOUBLE_0057964d
    FLD float ptr [EAX + 0xac]          ; 0041a71c
    FMUL double ptr [0x0057964d]        ; 0041a722 | DOUBLE_0057964d
    FLD float ptr [EAX + 0xa4]          ; 0041a728
    FMUL double ptr [0x0057964d]        ; 0041a72e | DOUBLE_0057964d
    FLD float ptr [EAX + 0xa4]          ; 0041a734
    FMUL double ptr [0x0057964d]        ; 0041a73a | DOUBLE_0057964d
    FLD float ptr [EAX + 0xa8]          ; 0041a740
    FMUL double ptr [0x0057964d]        ; 0041a746 | DOUBLE_0057964d
    FLD float ptr [EAX + 0xa8]          ; 0041a74c
    FCHS                                ; 0041a752
    MOV dword ptr [EAX + 0xb0],0x8      ; 0041a754
    FMUL double ptr [0x0057964d]        ; 0041a75e | DOUBLE_0057964d
    FXCH ST6                            ; 0041a764
    FSTP float ptr [EAX + 0xb4]         ; 0041a766
    FLD float ptr [EAX + 0xac]          ; 0041a76c
    FMUL double ptr [0x0057964d]        ; 0041a772 | DOUBLE_0057964d
    FXCH ST6                            ; 0041a778
    FSTP float ptr [EAX + 0xb8]         ; 0041a77a
    FLD float ptr [EAX + 0xa4]          ; 0041a780
    FCHS                                ; 0041a786
    FMUL double ptr [0x0057964d]        ; 0041a788 | DOUBLE_0057964d
    FXCH ST5                            ; 0041a78e
    FSTP float ptr [EAX + 0xbc]         ; 0041a790
    FLD float ptr [EAX + 0xa8]          ; 0041a796
    FCHS                                ; 0041a79c
    FMUL double ptr [0x0057964d]        ; 0041a79e | DOUBLE_0057964d
    FXCH ST5                            ; 0041a7a4
    FSTP float ptr [EAX + 0xe8]         ; 0041a7a6
    FLD float ptr [EAX + 0xa8]          ; 0041a7ac
    FMUL double ptr [0x0057964d]        ; 0041a7b2 | DOUBLE_0057964d
    FXCH ST5                            ; 0041a7b8
    FSTP float ptr [EAX + 0xec]         ; 0041a7ba
    FLD float ptr [EAX + 0xa4]          ; 0041a7c0
    FCHS                                ; 0041a7c6
    FMUL double ptr [0x0057964d]        ; 0041a7c8 | DOUBLE_0057964d
    FXCH ST4                            ; 0041a7ce
    FSTP float ptr [EAX + 0xf0]         ; 0041a7d0
    FLD float ptr [EAX + 0xa8]          ; 0041a7d6
    FCHS                                ; 0041a7dc
    FMUL double ptr [0x0057964d]        ; 0041a7de | DOUBLE_0057964d
    FXCH ST4                            ; 0041a7e4
    FSTP float ptr [EAX + 0x11c]        ; 0041a7e6
    FLD float ptr [EAX + 0xac]          ; 0041a7ec
    FCHS                                ; 0041a7f2
    FMUL double ptr [0x0057964d]        ; 0041a7f4 | DOUBLE_0057964d
    FXCH ST4                            ; 0041a7fa
    FSTP float ptr [EAX + 0x120]        ; 0041a7fc
    FLD float ptr [EAX + 0xa8]          ; 0041a802
    FCHS                                ; 0041a808
    FMUL double ptr [0x0057964d]        ; 0041a80a | DOUBLE_0057964d
    FXCH ST3                            ; 0041a810
    FSTP float ptr [EAX + 0x150]        ; 0041a812
    FLD float ptr [EAX + 0xac]          ; 0041a818
    FCHS                                ; 0041a81e
    FMUL double ptr [0x0057964d]        ; 0041a820 | DOUBLE_0057964d
    FXCH ST2                            ; 0041a826
    FSTP float ptr [EAX + 0x184]        ; 0041a828
    FLD float ptr [EAX + 0xac]          ; 0041a82e
    FMUL double ptr [0x0057964d]        ; 0041a834 | DOUBLE_0057964d
    FXCH                                ; 0041a83a
    FSTP float ptr [EAX + 0x188]        ; 0041a83c
    FLD float ptr [EAX + 0xa8]          ; 0041a842
    FMUL double ptr [0x0057964d]        ; 0041a848 | DOUBLE_0057964d
    FXCH ST6                            ; 0041a84e
    FSTP float ptr [EAX + 0x18c]        ; 0041a850
    FLD float ptr [EAX + 0xa4]          ; 0041a856
    FCHS                                ; 0041a85c
    FMUL double ptr [0x0057964d]        ; 0041a85e | DOUBLE_0057964d
    FXCH ST5                            ; 0041a864
    FSTP float ptr [EAX + 0x1bc]        ; 0041a866
    FLD float ptr [EAX + 0xa4]          ; 0041a86c
    FCHS                                ; 0041a872
    FMUL double ptr [0x0057964d]        ; 0041a874 | DOUBLE_0057964d
    FXCH                                ; 0041a87a
    FSTP float ptr [EAX + 0x1c0]        ; 0041a87c
    FLD float ptr [EAX + 0xac]          ; 0041a882
    FCHS                                ; 0041a888
    FMUL double ptr [0x0057964d]        ; 0041a88a | DOUBLE_0057964d
    FXCH ST6                            ; 0041a890
    FSTP float ptr [EAX + 0x1f0]        ; 0041a892
    FXCH ST3                            ; 0041a898
    FSTP float ptr [EAX + 0x124]        ; 0041a89a
    FXCH                                ; 0041a8a0
    FSTP float ptr [EAX + 0x154]        ; 0041a8a2
    FSTP float ptr [EAX + 0x158]        ; 0041a8a8
    FXCH                                ; 0041a8ae
    FSTP float ptr [EAX + 0x1b8]        ; 0041a8b0
    FSTP float ptr [EAX + 0x1ec]        ; 0041a8b6
    FSTP float ptr [EAX + 0x1f4]        ; 0041a8bc
    FLD double ptr [0x0057964d]         ; 0041a8c2 | DOUBLE_0057964d
    FLD float ptr [EAX + 0xa4]          ; 0041a8c8
    FMUL ST1                            ; 0041a8ce
    FLD float ptr [EAX + 0xa8]          ; 0041a8d0
    FMUL ST2                            ; 0041a8d6
    FLD float ptr [EAX + 0xac]          ; 0041a8d8
    FCHS                                ; 0041a8de
    FMULP ST3                           ; 0041a8e0
    PUSH dword ptr [ESP + 0x14]         ; 0041a8e2
    MOV EDX,dword ptr [ESP + 0x10]      ; 0041a8e6
    MOV ECX,dword ptr [ESP + 0xc]       ; 0041a8ea
    PUSH EDX                            ; 0041a8ee
    FXCH                                ; 0041a8ef
    FSTP float ptr [EAX + 0x220]        ; 0041a8f1
    PUSH ECX                            ; 0041a8f7
    FSTP float ptr [EAX + 0x224]        ; 0041a8f8
    PUSH EAX                            ; 0041a8fe
    FSTP float ptr [EAX + 0x228]        ; 0041a8ff
    CALL core_box.cpp_CBox_updateTransform_FUN_0041aaa0 ; 0041a905
        ;   XREF to: 0041aaa0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_CBox_updateTransform_FUN_0041aaa0()
    ADD ESP,0x10                        ; 0041a90a
    RET                                 ; 0041a90d

