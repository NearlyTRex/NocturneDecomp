; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_stranger_cpp_CStranger_aimLeftPistol_FUN_0058f660(CStranger *this_ptr)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x6c]:1  local_6c
;
; XREF[1]:
;   core_stranger.cpp_CStranger_processFrame_FUN_00585b00 at 0058667f
;
; Referenced Globals:
;   TerminatedCString s_core_stranger_cpp_005f6f19
;   TerminatedCString s_CStranger_aimLeftPistol_005f6f2e
;   undefined4 DAT_005f6f59
;   undefined4 DAT_006060b0
;   undefined4 DAT_006060b4
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   CDemonSet g_CDemonSetInstance
;   undefined4 DAT_02c8360c
;
; Called Functions:
;   core_actor.cpp_FUN_00408ac0
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_FUN_00408bb0
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd60
;   core_main.c_FUN_005030e0
;   core_setcolid.cpp_CDemonSet_ignore_FUN_00559250
;   core_setcolid.cpp_CDemonSet_init_FUN_00559220
;   core_setcolid.cpp_CDemonSet_setRayTypeLaser_FUN_00559310
;   core_setcolid.cpp_FUN_00557300
;   core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520
;   crt_math.c_acos_FUN_005c1d04
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058f660
        ;   Label: core_stranger.cpp_CStranger_aimLeftPistol_FUN_0058f660
    PUSH ESI                            ; 0058f661
    PUSH EDI                            ; 0058f662
    PUSH EBP                            ; 0058f663
    MOV EBP,ESP                         ; 0058f664
    SUB ESP,0x164                       ; 0058f666
    AND ESP,0xfffffff8                  ; 0058f66c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0058f66f
    CMP dword ptr [EBX + 0x20004],0x0   ; 0058f672
    JZ 0x0058fb0f                       ; 0058f679
        ;   XREF to: 0058fb0f (CONDITIONAL_JUMP)  ; LAB_0058fb0f
    MOV EAX,dword ptr [EBX + 0x20004]   ; 0058f67f
        ;   Label: LAB_0058f67f
    PUSH EAX                            ; 0058f685
    MOV EDX,dword ptr [EAX + 0x154]     ; 0058f686
    LEA ESI,[ESP + 0x110]               ; 0058f68c
    CALL dword ptr [EDX + 0xe0]         ; 0058f693
    ADD ESP,0x4                         ; 0058f699
    LEA EAX,[EBX + 0x1ffe0]             ; 0058f69c
    LEA EDI,[ESP + 0x58]                ; 0058f6a2
    MOV dword ptr [ESP + 0x158],EAX     ; 0058f6a6
    MOV EAX,[0x02c8360c]                ; 0058f6ad | DAT_02c8360c
    LEA ESI,[ESP + 0x10c]               ; 0058f6b2
    MOV dword ptr [ESP + 0x14c],EAX     ; 0058f6b9
    MOV EAX,0x3f060a92                  ; 0058f6c0
    MOVSD ES:EDI,ESI                    ; 0058f6c5
    MOVSD ES:EDI,ESI                    ; 0058f6c6
    MOVSD ES:EDI,ESI                    ; 0058f6c7
    MOV dword ptr [ESP + 0x148],EAX     ; 0058f6c8
    LEA EAX,[ESP + 0x58]                ; 0058f6cf
    MOV EDI,0xbfa78d36                  ; 0058f6d3
    PUSH EAX                            ; 0058f6d8
    MOV EDX,dword ptr [EBX + 0x20004]   ; 0058f6d9
    LEA ESI,[ESP + 0xe0]                ; 0058f6df
    PUSH EDX                            ; 0058f6e6
    MOV dword ptr [ESP + 0x14c],EDI     ; 0058f6e7
    LEA EDI,[ESP + 0x90]                ; 0058f6ee
    CALL core_actor.cpp_FUN_00408b40    ; 0058f6f5
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0xe4]                ; 0058f6fa
    LEA EAX,[ESP + 0x54]                ; 0058f701
    ADD ESP,0x8                         ; 0058f705
    XOR ECX,ECX                         ; 0058f708
    MOVSD ES:EDI,ESI                    ; 0058f70a
    MOVSD ES:EDI,ESI                    ; 0058f70b
    MOVSD ES:EDI,ESI                    ; 0058f70c
    MOV dword ptr [ESP + 0x4c],ECX      ; 0058f70d
    MOV EDI,0x447a0000                  ; 0058f711
    MOV dword ptr [ESP + 0x50],ECX      ; 0058f716
    MOV dword ptr [ESP + 0x54],EDI      ; 0058f71a
    PUSH EAX                            ; 0058f71e
    MOV EAX,dword ptr [EBX + 0x20004]   ; 0058f71f
    PUSH EAX                            ; 0058f725
    LEA ESI,[ESP + 0x3c]                ; 0058f726
    LEA EDI,[ESP + 0x12c]               ; 0058f72a
    CALL core_actor.cpp_FUN_00408ac0    ; 0058f731
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408ac0()
    LEA ESI,[ESP + 0x3c]                ; 0058f736
    ADD ESP,0x8                         ; 0058f73a
    MOV EDX,dword ptr [0x00622c18]      ; 0058f73d | g_CDemonSetPtr
    FLD float ptr [ESP + 0x88]          ; 0058f743
    FLD float ptr [ESP + 0x8c]          ; 0058f74a
    FLD float ptr [ESP + 0x90]          ; 0058f751
    MOVSD ES:EDI,ESI                    ; 0058f758
    MOVSD ES:EDI,ESI                    ; 0058f759
    MOVSD ES:EDI,ESI                    ; 0058f75a
    PUSH 0x0                            ; 0058f75b
    LEA EDI,[ESP + 0x11c]               ; 0058f75d
    LEA ESI,[ESP + 0x134]               ; 0058f764
    PUSH 0x0                            ; 0058f76b
    FXCH ST2                            ; 0058f76d
    FADD float ptr [ESP + 0x12c]        ; 0058f76f
    FXCH                                ; 0058f776
    FADD float ptr [ESP + 0x130]        ; 0058f778
    FXCH ST2                            ; 0058f77f
    FADD float ptr [ESP + 0x134]        ; 0058f781
    PUSH 0xff                           ; 0058f788
    FXCH                                ; 0058f78d
    FSTP float ptr [ESP + 0x13c]        ; 0058f78f
    FXCH                                ; 0058f796
    FSTP float ptr [ESP + 0x140]        ; 0058f798
    PUSH 0x1                            ; 0058f79f
    FSTP float ptr [ESP + 0x148]        ; 0058f7a1
    PUSH EDX                            ; 0058f7a8 | g_CDemonSetInstance
    MOVSD ES:EDI,ESI                    ; 0058f7a9
    MOVSD ES:EDI,ESI                    ; 0058f7aa
    MOVSD ES:EDI,ESI                    ; 0058f7ab
    CALL core_setcolid.cpp_CDemonSet_setRayTypeLaser_FUN_00559310 ; 0058f7ac
        ;   XREF to: 00559310 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_setRayTypeLaser_FUN_00559310(CDemonSet * this_ptr, int laser_type, int color_r, int color_g, ...)
    ADD ESP,0x14                        ; 0058f7b1
    MOV ECX,dword ptr [EBX + 0x20004]   ; 0058f7b4
    PUSH ECX                            ; 0058f7ba
    MOV ESI,dword ptr [0x00622c18]      ; 0058f7bb | g_CDemonSetPtr
    PUSH ESI                            ; 0058f7c1 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 0058f7c2
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0058f7c7
    PUSH EBX                            ; 0058f7ca
    MOV EDI,dword ptr [0x00622c18]      ; 0058f7cb | g_CDemonSetPtr
    PUSH EDI                            ; 0058f7d1 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 0058f7d2
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0058f7d7
    LEA EAX,[ESP + 0x118]               ; 0058f7da
    PUSH EAX                            ; 0058f7e1
    LEA EAX,[ESP + 0x8c]                ; 0058f7e2
    PUSH EAX                            ; 0058f7e9
    MOV EAX,[0x00622c18]                ; 0058f7ea | g_CDemonSetPtr
    PUSH EAX                            ; 0058f7ef | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_00557300 ; 0058f7f0
        ;   XREF to: 00557300 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_00557300()
    MOV dword ptr [ESP + 0x16c],EAX     ; 0058f7f5
    FLD float ptr [ESP + 0x16c]         ; 0058f7fc
    ADD ESP,0xc                         ; 0058f803
    MOV EDX,dword ptr [0x00622c18]      ; 0058f806 | g_CDemonSetPtr
    PUSH EDX                            ; 0058f80c | g_CDemonSetInstance
    FSTP float ptr [ESP + 0x2c]         ; 0058f80d
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00559220 ; 0058f811
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00559220(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0058f816
    FLDZ                                ; 0058f819
    FLD float ptr [ESP + 0x28]          ; 0058f81b
    FSTP double ptr [ESP + 0x20]        ; 0058f81f
    FCOMP double ptr [ESP + 0x20]       ; 0058f823
    FNSTSW AX                           ; 0058f827
    SAHF                                ; 0058f829
    JBE 0x0058fb37                      ; 0058f82a
        ;   XREF to: 0058fb37 (CONDITIONAL_JUMP)  ; LAB_0058fb37
    MOV dword ptr [ESP + 0x28],0x3f800000 ; 0058f830
        ;   Label: LAB_0058f830
    FLD float ptr [ESP + 0x28]          ; 0058f838
        ;   Label: LAB_0058f838
    FLD float ptr [ESP + 0x124]         ; 0058f83c
    FMUL ST1                            ; 0058f843
    FLD float ptr [ESP + 0x128]         ; 0058f845
    FMUL ST2                            ; 0058f84c
    FLD float ptr [ESP + 0x12c]         ; 0058f84e
    FMULP ST3                           ; 0058f855
    FLD float ptr [ESP + 0x88]          ; 0058f857
    FLD float ptr [ESP + 0x8c]          ; 0058f85e
    LEA EDI,[ESP + 0x40]                ; 0058f865
    LEA ESI,[ESP + 0xd0]                ; 0058f869
    FXCH ST3                            ; 0058f870
    FSTP float ptr [ESP + 0xd0]         ; 0058f872
    FXCH                                ; 0058f879
    FSTP float ptr [ESP + 0xd4]         ; 0058f87b
    FXCH ST2                            ; 0058f882
    FSTP float ptr [ESP + 0xd8]         ; 0058f884
    MOVSD ES:EDI,ESI                    ; 0058f88b
    MOVSD ES:EDI,ESI                    ; 0058f88c
    MOVSD ES:EDI,ESI                    ; 0058f88d
    FLD float ptr [ESP + 0x90]          ; 0058f88e
    LEA EDI,[ESP + 0x94]                ; 0058f895
    LEA ESI,[ESP + 0x100]               ; 0058f89c
    FXCH ST2                            ; 0058f8a3
    FADD float ptr [ESP + 0x40]         ; 0058f8a5
    FXCH                                ; 0058f8a9
    FADD float ptr [ESP + 0x44]         ; 0058f8ab
    FXCH ST2                            ; 0058f8af
    FADD float ptr [ESP + 0x48]         ; 0058f8b1
    FXCH                                ; 0058f8b5
    FSTP float ptr [ESP + 0x100]        ; 0058f8b7
    FXCH                                ; 0058f8be
    FSTP float ptr [ESP + 0x104]        ; 0058f8c0
    FSTP float ptr [ESP + 0x108]        ; 0058f8c7
    MOVSD ES:EDI,ESI                    ; 0058f8ce
    MOVSD ES:EDI,ESI                    ; 0058f8cf
    MOVSD ES:EDI,ESI                    ; 0058f8d0
    LEA EAX,[ESP + 0x94]                ; 0058f8d1
    LEA ESI,[ESP + 0x118]               ; 0058f8d8
    CMP ESI,EAX                         ; 0058f8df
    JZ 0x0058f90d                       ; 0058f8e1
        ;   XREF to: 0058f90d (CONDITIONAL_JUMP)  ; LAB_0058f90d
    MOV EAX,dword ptr [ESP + 0x94]      ; 0058f8e3
    MOV dword ptr [ESP + 0x118],EAX     ; 0058f8ea
    MOV EAX,dword ptr [ESP + 0x98]      ; 0058f8f1
    MOV dword ptr [ESP + 0x11c],EAX     ; 0058f8f8
    MOV EAX,dword ptr [ESP + 0x9c]      ; 0058f8ff
    MOV dword ptr [ESP + 0x120],EAX     ; 0058f906
    MOV ESI,dword ptr [ESP + 0x14c]     ; 0058f90d
        ;   Label: LAB_0058f90d
    PUSH ESI                            ; 0058f914
    LEA EAX,[EBX + 0x158]               ; 0058f915
    PUSH EAX                            ; 0058f91b
    LEA ESI,[ESP + 0xa8]                ; 0058f91c
    LEA EDI,[ESP + 0x6c]                ; 0058f923
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040 ; 0058f927
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    ADD ESP,0x8                         ; 0058f92c
    LEA EAX,[ESP + 0x118]               ; 0058f92f
    LEA ESI,[ESP + 0xa0]                ; 0058f936
    PUSH EAX                            ; 0058f93d
    MOVSD ES:EDI,ESI                    ; 0058f93e
    MOVSD ES:EDI,ESI                    ; 0058f93f
    MOVSD ES:EDI,ESI                    ; 0058f940
    PUSH EBX                            ; 0058f941
    LEA ESI,[ESP + 0xc0]                ; 0058f942
    LEA EDI,[ESP + 0xcc]                ; 0058f949
    CALL core_actor.cpp_FUN_00408bb0    ; 0058f950
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[ESP + 0xc0]                ; 0058f955
    ADD ESP,0x8                         ; 0058f95c
    MOVSD ES:EDI,ESI                    ; 0058f95f
    MOVSD ES:EDI,ESI                    ; 0058f960
    MOVSD ES:EDI,ESI                    ; 0058f961
    LEA EAX,[ESP + 0xac]                ; 0058f962
    FLD float ptr [ESP + 0xc4]          ; 0058f969
    FLD float ptr [ESP + 0xc8]          ; 0058f970
    FLD float ptr [ESP + 0xcc]          ; 0058f977
    LEA EDI,[ESP + 0xac]                ; 0058f97e
    LEA ESI,[ESP + 0xf4]                ; 0058f985
    FXCH ST2                            ; 0058f98c
    FSUB float ptr [ESP + 0x64]         ; 0058f98e
    FXCH                                ; 0058f992
    FSUB float ptr [ESP + 0x68]         ; 0058f994
    FXCH ST2                            ; 0058f998
    FSUB float ptr [ESP + 0x6c]         ; 0058f99a
    FXCH                                ; 0058f99e
    FSTP float ptr [ESP + 0xf4]         ; 0058f9a0
    FXCH                                ; 0058f9a7
    FSTP float ptr [ESP + 0xf8]         ; 0058f9a9
    FSTP float ptr [ESP + 0xfc]         ; 0058f9b0
    MOVSD ES:EDI,ESI                    ; 0058f9b7
    MOVSD ES:EDI,ESI                    ; 0058f9b8
    MOVSD ES:EDI,ESI                    ; 0058f9b9
    PUSH EAX                            ; 0058f9ba
    LEA ESI,[ESP + 0x80]                ; 0058f9bb
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520 ; 0058f9c2
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520()
    ADD ESP,0x4                         ; 0058f9c7
    FLD float ptr [ESP + 0xb0]          ; 0058f9ca
    FMUL ST0                            ; 0058f9d1
    FLD float ptr [ESP + 0xac]          ; 0058f9d3
    FMUL ST0                            ; 0058f9da
    FADDP                               ; 0058f9dc
    FLD float ptr [ESP + 0xb4]          ; 0058f9de
    FMUL ST0                            ; 0058f9e5
    FADDP                               ; 0058f9e7
    FSQRT                               ; 0058f9e9
    LEA EDI,[ESP + 0xe8]                ; 0058f9eb
    LEA ESI,[ESP + 0x7c]                ; 0058f9f2
    MOVSD ES:EDI,ESI                    ; 0058f9f6
    MOVSD ES:EDI,ESI                    ; 0058f9f7
    MOVSD ES:EDI,ESI                    ; 0058f9f8
    FST float ptr [ESP + 0x30]          ; 0058f9f9
    MOV EAX,dword ptr [ESP + 0x30]      ; 0058f9fd
    FST double ptr [ESP + 0x10]         ; 0058fa01
    MOV dword ptr [ESP + 0x2c],EAX      ; 0058fa05
    FCOMP double ptr [0x005f6f59]       ; 0058fa09 | DAT_005f6f59
    FNSTSW AX                           ; 0058fa0f
    SAHF                                ; 0058fa11
    JBE 0x0058fa3e                      ; 0058fa12
        ;   XREF to: 0058fa3e (CONDITIONAL_JUMP)  ; LAB_0058fa3e
    FLD float ptr [ESP + 0x58]          ; 0058fa14
    FCHS                                ; 0058fa18
    FSTP float ptr [ESP + 0x150]        ; 0058fa1a
    JNC 0x0058fb4b                      ; 0058fa21
        ;   XREF to: 0058fb4b (CONDITIONAL_JUMP)  ; LAB_0058fb4b
    FLD float ptr [ESP + 0x2c]          ; 0058fa27
        ;   Label: LAB_0058fa27
    FST double ptr [ESP + 0x8]          ; 0058fa2b
    FCOMP double ptr [0x005f6f59]       ; 0058fa2f | DAT_005f6f59
    FNSTSW AX                           ; 0058fa35
    SAHF                                ; 0058fa37
    JNC 0x0058fbf4                      ; 0058fa38
        ;   XREF to: 0058fbf4 (CONDITIONAL_JUMP)  ; LAB_0058fbf4
    LEA EDI,[ESP + 0x70]                ; 0058fa3e
        ;   Label: LAB_0058fa3e
    LEA ESI,[ESP + 0xe8]                ; 0058fa42
    MOVSD ES:EDI,ESI                    ; 0058fa49
    MOVSD ES:EDI,ESI                    ; 0058fa4a
    MOVSD ES:EDI,ESI                    ; 0058fa4b
    MOV EAX,dword ptr [ESP + 0x74]      ; 0058fa4c
    MOV dword ptr [ESP + 0x15c],EAX     ; 0058fa50
    MOV EAX,dword ptr [ESP + 0x70]      ; 0058fa57
    FLD float ptr [ESP + 0x70]          ; 0058fa5b
    MOV dword ptr [ESP + 0x154],EAX     ; 0058fa5f
    FCOMP float ptr [0x006060b0]        ; 0058fa66 | DAT_006060b0
    FNSTSW AX                           ; 0058fa6c
    SAHF                                ; 0058fa6e
    JNC 0x0058fa7d                      ; 0058fa6f
        ;   XREF to: 0058fa7d (CONDITIONAL_JUMP)  ; LAB_0058fa7d
    MOV EAX,[0x006060b0]                ; 0058fa71 | DAT_006060b0
    MOV dword ptr [ESP + 0x154],EAX     ; 0058fa76
    FLD float ptr [ESP + 0x154]         ; 0058fa7d
        ;   Label: LAB_0058fa7d
    FCOMP float ptr [0x006060b4]        ; 0058fa84 | DAT_006060b4
    FNSTSW AX                           ; 0058fa8a
    SAHF                                ; 0058fa8c
    JBE 0x0058fa9b                      ; 0058fa8d
        ;   XREF to: 0058fa9b (CONDITIONAL_JUMP)  ; LAB_0058fa9b
    MOV EAX,[0x006060b4]                ; 0058fa8f | DAT_006060b4
    MOV dword ptr [ESP + 0x154],EAX     ; 0058fa94
    FLD float ptr [ESP + 0x15c]         ; 0058fa9b
        ;   Label: LAB_0058fa9b
    FCOMP float ptr [ESP + 0x144]       ; 0058faa2
    FNSTSW AX                           ; 0058faa9
    SAHF                                ; 0058faab
    JNC 0x0058fabc                      ; 0058faac
        ;   XREF to: 0058fabc (CONDITIONAL_JUMP)  ; LAB_0058fabc
    MOV EAX,dword ptr [ESP + 0x144]     ; 0058faae
    MOV dword ptr [ESP + 0x15c],EAX     ; 0058fab5
    FLD float ptr [ESP + 0x15c]         ; 0058fabc
        ;   Label: LAB_0058fabc
    FCOMP float ptr [ESP + 0x148]       ; 0058fac3
    FNSTSW AX                           ; 0058faca
    SAHF                                ; 0058facc
    JA 0x0058fc93                       ; 0058facd
        ;   XREF to: 0058fc93 (CONDITIONAL_JUMP)  ; LAB_0058fc93
    MOV EDX,dword ptr [ESP + 0x158]     ; 0058fad3
        ;   Label: LAB_0058fad3
    MOV EAX,dword ptr [ESP + 0x15c]     ; 0058fada
    MOV dword ptr [EDX + 0x14],0x3f800000 ; 0058fae1
    MOV dword ptr [EDX + 0xc],EAX       ; 0058fae8
    MOV EAX,dword ptr [ESP + 0x154]     ; 0058faeb
    MOV dword ptr [EDX + 0x8],EAX       ; 0058faf2
    MOV EAX,dword ptr [ESP + 0x15c]     ; 0058faf5
    MOV dword ptr [EDX + 0x4],EAX       ; 0058fafc
    MOV EAX,dword ptr [ESP + 0x154]     ; 0058faff
    MOV dword ptr [EDX],EAX             ; 0058fb06
    MOV ESP,EBP                         ; 0058fb08
    POP EBP                             ; 0058fb0a
    POP EDI                             ; 0058fb0b
    POP ESI                             ; 0058fb0c
    POP EBX                             ; 0058fb0d
    RET                                 ; 0058fb0e
    MOV ECX,0x5f6f19                    ; 0058fb0f | = "..\\core\\stranger.cpp"
        ;   Label: LAB_0058fb0f
    MOV ESI,0x1125                      ; 0058fb14
    PUSH 0x5f6f2e                       ; 0058fb19 | = "CStranger::aimLeftPistol - no weapon?"
    MOV dword ptr [0x01d1d400],ECX      ; 0058fb1e | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 0058fb24 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0058fb2a
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0058fb2f
    JMP 0x0058f67f                      ; 0058fb32
        ;   XREF to: 0058f67f (UNCONDITIONAL_JUMP)  ; LAB_0058f67f
    FLD1                                ; 0058fb37
        ;   Label: LAB_0058fb37
    FCOMP double ptr [ESP + 0x20]       ; 0058fb39
    FNSTSW AX                           ; 0058fb3d
    SAHF                                ; 0058fb3f
    JC 0x0058f830                       ; 0058fb40
        ;   XREF to: 0058f830 (CONDITIONAL_JUMP)  ; LAB_0058f830
    JMP 0x0058f838                      ; 0058fb46
        ;   XREF to: 0058f838 (UNCONDITIONAL_JUMP)  ; LAB_0058f838
    FLD float ptr [ESP + 0x30]          ; 0058fb4b
        ;   Label: LAB_0058fb4b
    FMUL ST0                            ; 0058fb4f
    FLD float ptr [ESP + 0x150]         ; 0058fb51
    FMUL ST0                            ; 0058fb58
    FSUBP                               ; 0058fb5a
    FSQRT                               ; 0058fb5c
    FDIV double ptr [ESP + 0x10]        ; 0058fb5e
    FLD1                                ; 0058fb62
    FXCH                                ; 0058fb64
    FSTP double ptr [ESP + 0x18]        ; 0058fb66
    FCOMP double ptr [ESP + 0x18]       ; 0058fb6a
    FNSTSW AX                           ; 0058fb6e
    SAHF                                ; 0058fb70
    JBE 0x0058fa27                      ; 0058fb71
        ;   XREF to: 0058fa27 (CONDITIONAL_JUMP)  ; LAB_0058fa27
    FLDZ                                ; 0058fb77
    FCOMP double ptr [ESP + 0x18]       ; 0058fb79
    FNSTSW AX                           ; 0058fb7d
    SAHF                                ; 0058fb7f
    JA 0x0058fa27                       ; 0058fb80
        ;   XREF to: 0058fa27 (CONDITIONAL_JUMP)  ; LAB_0058fa27
    FLD double ptr [ESP + 0x18]         ; 0058fb86
    CALL crt_math.c_acos_FUN_005c1d04   ; 0058fb8a
        ;   XREF to: 005c1d04 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_acos_FUN_005c1d04()
    FLDZ                                ; 0058fb8f
    FXCH                                ; 0058fb91
    FSTP float ptr [ESP + 0x140]        ; 0058fb93
    FCOMP float ptr [ESP + 0x150]       ; 0058fb9a
    FNSTSW AX                           ; 0058fba1
    SAHF                                ; 0058fba3
    JBE 0x0058fbe4                      ; 0058fba4
        ;   XREF to: 0058fbe4 (CONDITIONAL_JUMP)  ; LAB_0058fbe4
    FLD float ptr [ESP + 0xec]          ; 0058fba6
    FSUB float ptr [ESP + 0x140]        ; 0058fbad
    FSTP float ptr [ESP + 0xec]         ; 0058fbb4
        ;   Label: LAB_0058fbb4
    PUSH dword ptr [ESP + 0xec]         ; 0058fbbb
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 0058fbc2
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd60(float angle_radians)
    MOV dword ptr [ESP + 0x164],EAX     ; 0058fbc7
    FLD float ptr [ESP + 0x164]         ; 0058fbce
    ADD ESP,0x4                         ; 0058fbd5
    FSTP float ptr [ESP + 0xec]         ; 0058fbd8
    JMP 0x0058fa27                      ; 0058fbdf
        ;   XREF to: 0058fa27 (UNCONDITIONAL_JUMP)  ; LAB_0058fa27
    FLD float ptr [ESP + 0xec]          ; 0058fbe4
        ;   Label: LAB_0058fbe4
    FADD float ptr [ESP + 0x140]        ; 0058fbeb
    JMP 0x0058fbb4                      ; 0058fbf2
        ;   XREF to: 0058fbb4 (UNCONDITIONAL_JUMP)  ; LAB_0058fbb4
    FLD float ptr [ESP + 0x2c]          ; 0058fbf4
        ;   Label: LAB_0058fbf4
    FMUL ST0                            ; 0058fbf8
    FLD float ptr [ESP + 0x5c]          ; 0058fbfa
    FMUL ST0                            ; 0058fbfe
    FSUBP                               ; 0058fc00
    FSQRT                               ; 0058fc02
    FDIV double ptr [ESP + 0x8]         ; 0058fc04
    FLD1                                ; 0058fc08
    FXCH                                ; 0058fc0a
    FSTP double ptr [ESP]               ; 0058fc0c
    FCOMP double ptr [ESP]              ; 0058fc0f
    FNSTSW AX                           ; 0058fc12
    SAHF                                ; 0058fc14
    JBE 0x0058fa3e                      ; 0058fc15
        ;   XREF to: 0058fa3e (CONDITIONAL_JUMP)  ; LAB_0058fa3e
    FLDZ                                ; 0058fc1b
    FCOMP double ptr [ESP]              ; 0058fc1d
    FNSTSW AX                           ; 0058fc20
    SAHF                                ; 0058fc22
    JA 0x0058fa3e                       ; 0058fc23
        ;   XREF to: 0058fa3e (CONDITIONAL_JUMP)  ; LAB_0058fa3e
    FLD double ptr [ESP]                ; 0058fc29
    CALL crt_math.c_acos_FUN_005c1d04   ; 0058fc2c
        ;   XREF to: 005c1d04 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_acos_FUN_005c1d04()
    FLDZ                                ; 0058fc31
    FXCH                                ; 0058fc33
    FSTP float ptr [ESP + 0x13c]        ; 0058fc35
    FCOMP float ptr [ESP + 0x5c]        ; 0058fc3c
    FNSTSW AX                           ; 0058fc40
    SAHF                                ; 0058fc42
    JBE 0x0058fc83                      ; 0058fc43
        ;   XREF to: 0058fc83 (CONDITIONAL_JUMP)  ; LAB_0058fc83
    FLD float ptr [ESP + 0xe8]          ; 0058fc45
    FSUB float ptr [ESP + 0x13c]        ; 0058fc4c
    FSTP float ptr [ESP + 0xe8]         ; 0058fc53
        ;   Label: LAB_0058fc53
    PUSH dword ptr [ESP + 0xe8]         ; 0058fc5a
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 0058fc61
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd60(float angle_radians)
    MOV dword ptr [ESP + 0x164],EAX     ; 0058fc66
    FLD float ptr [ESP + 0x164]         ; 0058fc6d
    ADD ESP,0x4                         ; 0058fc74
    FSTP float ptr [ESP + 0xe8]         ; 0058fc77
    JMP 0x0058fa3e                      ; 0058fc7e
        ;   XREF to: 0058fa3e (UNCONDITIONAL_JUMP)  ; LAB_0058fa3e
    FLD float ptr [ESP + 0xe8]          ; 0058fc83
        ;   Label: LAB_0058fc83
    FADD float ptr [ESP + 0x13c]        ; 0058fc8a
    JMP 0x0058fc53                      ; 0058fc91
        ;   XREF to: 0058fc53 (UNCONDITIONAL_JUMP)  ; LAB_0058fc53
    MOV EAX,dword ptr [ESP + 0x148]     ; 0058fc93
        ;   Label: LAB_0058fc93
    MOV dword ptr [ESP + 0x15c],EAX     ; 0058fc9a
    JMP 0x0058fad3                      ; 0058fca1
        ;   XREF to: 0058fad3 (UNCONDITIONAL_JUMP)  ; LAB_0058fad3

