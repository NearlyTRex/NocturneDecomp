; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_FUN_0042d750(CCharacter *this_ptr,CVector3f *velocity)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   velocity
; Local Variables:
; undefined4       Stack[-0x114]:4  local_114
; undefined4       Stack[-0x110]:4  local_110
; undefined4       Stack[-0x10c]:4  local_10c
; undefined8       Stack[-0x100]:8  local_100
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined        Stack[-0xd4]:1  local_d4
; undefined        Stack[-0xc8]:1  local_c8
; undefined        Stack[-0xbc]:1  local_bc
; undefined        Stack[-0xb0]:1  local_b0
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined        Stack[-0x80]:1  local_80
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[47]:
;   core_batcreat.cpp_CBatCreature_process_FUN_004115b0 at 00411803
;   core_batman.cpp_CBatman_process_FUN_00412ba0 at 00412df0
;   core_biggs.cpp_CBiggs_process_FUN_00414b30 at 00414d0c
;   core_bird.cpp_CBird_process_FUN_00415340 at 00415599
;   core_boneguy.cpp_CBoneGuy_process_FUN_0041bb40 at 0041c143
;   core_bride.cpp_CBride_process_FUN_00423b70 at 00424745
;   core_bugs.cpp_CBugs_attackSwarmTarget_FUN_004263d0 at 004267bd
;   core_bugs.cpp_CBugs_updateBugsBehavior_FUN_00426030 at 00426238
;   core_carved.cpp_CCarved_process_FUN_00428ae0 at 0042985d
;   core_colonel.cpp_CColonel_process_FUN_00444550 at 00444b38
;   ... and 37 more
;
; Referenced Globals:
;   undefined4 DAT_005d590f
;   undefined4 DAT_005d5917
;   undefined4 DAT_005d591f
;   undefined4 DAT_005d5927
;   TerminatedCString s_noCollision_00610cd0
;   undefined4 s_llision_00610cd0+4
;   undefined4 s_ion_00610cd0+8
;   CGame* g_CGamePtr = 01ccf390
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 DAT_006e6f69
;   undefined4 DAT_007c6380
;   undefined4 DAT_0152c2a8
;   undefined4 DAT_0152c2ac
;   undefined4 DAT_0152c2b0
;   undefined4 DAT_0152c2b4
;   ... and 11 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0
;   core_actor.cpp_FUN_00408ac0
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770
;   core_setcolid.cpp_CDemonSet_ignore_FUN_00559250
;   core_setcolid.cpp_CDemonSet_init_FUN_00559220
;   core_setcolid.cpp_FUN_00558450
;   crt_string.c__strnicmp_FUN_005c1210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042d750
        ;   Label: core_charactr.cpp_FUN_0042d750
    PUSH ESI                            ; 0042d751
    PUSH EDI                            ; 0042d752
    PUSH EBP                            ; 0042d753
    MOV EBP,ESP                         ; 0042d754
    SUB ESP,0xf4                        ; 0042d756
    AND ESP,0xfffffff8                  ; 0042d75c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0042d75f
    MOV EAX,dword ptr [EBP + 0x18]      ; 0042d762
    XOR EDX,EDX                         ; 0042d765
    MOV ECX,dword ptr [EAX + 0x8]       ; 0042d767
    MOV dword ptr [0x007c6380],EDX      ; 0042d76a | DAT_007c6380
    TEST ECX,0x7fffffff                 ; 0042d770
    JNZ 0x0042d7a8                      ; 0042d776
        ;   XREF to: 0042d7a8 (CONDITIONAL_JUMP)  ; LAB_0042d7a8
    TEST dword ptr [EAX],0x7fffffff     ; 0042d778
    JNZ 0x0042d7a8                      ; 0042d77e
        ;   XREF to: 0042d7a8 (CONDITIONAL_JUMP)  ; LAB_0042d7a8
    FLD float ptr [EAX + 0x4]           ; 0042d780
    FLDZ                                ; 0042d783
    FCOMPP                              ; 0042d785
    FNSTSW AX                           ; 0042d787
    SAHF                                ; 0042d789
    JC 0x0042d7a8                       ; 0042d78a
        ;   XREF to: 0042d7a8 (CONDITIONAL_JUMP)  ; LAB_0042d7a8
    MOV EDI,dword ptr [EBX + 0xdc]      ; 0042d78c
    TEST EDI,EDI                        ; 0042d792
    JNZ 0x0042d7a8                      ; 0042d794
        ;   XREF to: 0042d7a8 (CONDITIONAL_JUMP)  ; LAB_0042d7a8
    FLD float ptr [EBX + 0x24]          ; 0042d796
    FCOMP float ptr [EBX + 0x2504]      ; 0042d799
    FNSTSW AX                           ; 0042d79f
    SAHF                                ; 0042d7a1
    JZ 0x0042dc45                       ; 0042d7a2
        ;   XREF to: 0042dc45 (CONDITIONAL_JUMP)  ; LAB_0042dc45
    MOV EAX,dword ptr [EBP + 0x18]      ; 0042d7a8
        ;   Label: LAB_0042d7a8
    PUSH EAX                            ; 0042d7ab
    PUSH EBX                            ; 0042d7ac
    LEA ESI,[ESP + 0x60]                ; 0042d7ad
    LEA EDI,[ESP + 0xa8]                ; 0042d7b1
    CALL core_actor.cpp_FUN_00408ac0    ; 0042d7b8
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408ac0()
    LEA ESI,[ESP + 0x60]                ; 0042d7bd
    ADD ESP,0x8                         ; 0042d7c1
    MOVSD ES:EDI,ESI                    ; 0042d7c4
    MOVSD ES:EDI,ESI                    ; 0042d7c5
    MOVSD ES:EDI,ESI                    ; 0042d7c6
    CMP dword ptr [EBX + 0x27a8],0x0    ; 0042d7c7
    JNZ 0x0042dc79                      ; 0042d7ce
        ;   XREF to: 0042dc79 (CONDITIONAL_JUMP)  ; LAB_0042dc79
    LEA EDX,[EBX + 0x158]               ; 0042d7d4
    LEA EAX,[EBX + 0x24a8]              ; 0042d7da
    CMP byte ptr [EAX],0x0              ; 0042d7e0
    JNZ 0x0042dcde                      ; 0042d7e3
        ;   XREF to: 0042dcde (CONDITIONAL_JUMP)  ; LAB_0042dcde
    CMP dword ptr [EBX + 0xdc],0x0      ; 0042d7e9
        ;   Label: LAB_0042d7e9
    JNZ 0x0042dd68                      ; 0042d7f0
        ;   XREF to: 0042dd68 (CONDITIONAL_JUMP)  ; LAB_0042dd68
    LEA EAX,[EBX + 0x2e68]              ; 0042d7f6
        ;   Label: LAB_0042d7f6
    XOR ESI,ESI                         ; 0042d7fc
    LEA EDX,[EBX + 0x2f1c]              ; 0042d7fe
    MOV dword ptr [ESP + 0xe4],EAX      ; 0042d804
    LEA EAX,[EBX + 0x2e8c]              ; 0042d80b
    MOV dword ptr [ESP + 0xb4],EDX      ; 0042d811
    MOV dword ptr [ESP + 0xb0],EAX      ; 0042d818
    IMUL EAX,ESI,0x24                   ; 0042d81f
        ;   Label: LAB_0042d81f
    MOV ECX,dword ptr [ESP + 0xe4]      ; 0042d822
    MOV EDX,dword ptr [ESP + 0xb4]      ; 0042d829
    ADD EAX,ECX                         ; 0042d830
    MOV ECX,dword ptr [ESP + 0xb0]      ; 0042d832
    MOV dword ptr [EAX + 0x8],0x0       ; 0042d839
        ;   Label: LAB_0042d839
    ADD EDX,0xc                         ; 0042d840
    MOV EDI,dword ptr [EAX + 0x8]       ; 0042d843
    MOV dword ptr [EAX + 0x4],EDI       ; 0042d846
    MOV EDI,dword ptr [EAX + 0x4]       ; 0042d849
    MOV dword ptr [EAX],EDI             ; 0042d84c
    MOV dword ptr [EDX + -0x4],0x0      ; 0042d84e
    ADD EAX,0xc                         ; 0042d855
    MOV EDI,dword ptr [EDX + -0x4]      ; 0042d858
    MOV dword ptr [EDX + -0x8],EDI      ; 0042d85b
    MOV EDI,dword ptr [EDX + -0x8]      ; 0042d85e
    MOV dword ptr [EDX + -0xc],EDI      ; 0042d861
    CMP EAX,ECX                         ; 0042d864
    JNZ 0x0042d839                      ; 0042d866
        ;   XREF to: 0042d839 (CONDITIONAL_JUMP)  ; LAB_0042d839
    MOV EAX,dword ptr [ESP + 0xb4]      ; 0042d868
    MOV EDI,dword ptr [ESP + 0xb0]      ; 0042d86f
    INC ESI                             ; 0042d876
    ADD EAX,0x24                        ; 0042d877
    ADD EDI,0x24                        ; 0042d87a
    MOV dword ptr [ESP + 0xb4],EAX      ; 0042d87d
    MOV dword ptr [ESP + 0xb0],EDI      ; 0042d884
    CMP ESI,0x5                         ; 0042d88b
    JL 0x0042d81f                       ; 0042d88e
        ;   XREF to: 0042d81f (CONDITIONAL_JUMP)  ; LAB_0042d81f
    LEA EDI,[ESP + 0x40]                ; 0042d890
    PUSH EBX                            ; 0042d894
    MOV EDX,dword ptr [0x00622c18]      ; 0042d895 | g_CDemonSetPtr
    LEA ESI,[EBX + 0x20]                ; 0042d89b
    PUSH EDX                            ; 0042d89e | g_CDemonSetInstance
    MOVSD ES:EDI,ESI                    ; 0042d89f
    MOVSD ES:EDI,ESI                    ; 0042d8a0
    MOVSD ES:EDI,ESI                    ; 0042d8a1
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 0042d8a2
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0042d8a7
    MOV EAX,dword ptr [EBP + 0x18]      ; 0042d8aa
    MOV EAX,dword ptr [EAX + 0x4]       ; 0042d8ad
    MOV dword ptr [ESP + 0xc0],EAX      ; 0042d8b0
    LEA EAX,[EBX + 0x20]                ; 0042d8b7
    MOV dword ptr [ESP + 0xe0],EAX      ; 0042d8ba
    LEA EAX,[EBX + 0x2f1c]              ; 0042d8c1
    MOV dword ptr [ESP + 0xac],EAX      ; 0042d8c7
    LEA EAX,[EBX + 0x2e68]              ; 0042d8ce
    MOV dword ptr [ESP + 0xc4],EAX      ; 0042d8d4
    ADD EAX,0xc                         ; 0042d8db
    MOV dword ptr [ESP + 0xd8],EAX      ; 0042d8de
    MOV EAX,dword ptr [ESP + 0xc4]      ; 0042d8e5
    ADD EAX,0x18                        ; 0042d8ec
    MOV dword ptr [ESP + 0xd4],EAX      ; 0042d8ef
    MOV EAX,dword ptr [ESP + 0xac]      ; 0042d8f6
    ADD EAX,0xc                         ; 0042d8fd
    MOV dword ptr [ESP + 0xdc],EAX      ; 0042d900
    MOV EAX,dword ptr [ESP + 0xac]      ; 0042d907
    XOR ECX,ECX                         ; 0042d90e
    ADD EAX,0x18                        ; 0042d910
    MOV dword ptr [ESP + 0xec],ECX      ; 0042d913
    MOV dword ptr [ESP + 0xd0],EAX      ; 0042d91a
    FLD float ptr [EBX + 0x3000]        ; 0042d921
        ;   Label: LAB_0042d921
    FMUL float ptr [EBX + 0x27b8]       ; 0042d927
    FLD float ptr [EBX + 0x2ffc]        ; 0042d92d
    XOR ESI,ESI                         ; 0042d933
    FMUL float ptr [EBX + 0x27b8]       ; 0042d935
    MOV dword ptr [ESP + 0xa4],ESI      ; 0042d93b
    FXCH                                ; 0042d942
    FSTP float ptr [ESP + 0xcc]         ; 0042d944
    FCOMP float ptr [ESP + 0xcc]        ; 0042d94b
    FNSTSW AX                           ; 0042d952
    SAHF                                ; 0042d954
    JBE 0x0042d964                      ; 0042d955
        ;   XREF to: 0042d964 (CONDITIONAL_JUMP)  ; LAB_0042d964
    MOV EAX,dword ptr [EBX + 0x2490]    ; 0042d957
    MOV dword ptr [ESP + 0xcc],EAX      ; 0042d95d
    FLD float ptr [EBX + 0x2ffc]        ; 0042d964
        ;   Label: LAB_0042d964
    FMUL float ptr [EBX + 0x27b8]       ; 0042d96a
    FLD float ptr [ESP + 0xcc]          ; 0042d970
    FXCH                                ; 0042d977
    FSTP float ptr [ESP + 0x18]         ; 0042d979
    FCOMP float ptr [ESP + 0x18]        ; 0042d97d
    FNSTSW AX                           ; 0042d981
    SAHF                                ; 0042d983
    JNC 0x0042d99f                      ; 0042d984
        ;   XREF to: 0042d99f (CONDITIONAL_JUMP)  ; LAB_0042d99f
    FLD float ptr [ESP + 0x18]          ; 0042d986
    FLD float ptr [EBX + 0x27b8]        ; 0042d98a
    FMUL double ptr [0x005d590f]        ; 0042d990 | DAT_005d590f
    FADDP                               ; 0042d996
    FSTP float ptr [ESP + 0xcc]         ; 0042d998
    FLD float ptr [EBX + 0x24]          ; 0042d99f
        ;   Label: LAB_0042d99f
    FADD float ptr [ESP + 0xcc]         ; 0042d9a2
    SUB ESP,0x4                         ; 0042d9a9
    FSTP float ptr [ESP]                ; 0042d9ac
    FLD float ptr [EBX + 0x2ffc]        ; 0042d9af
    FMUL float ptr [EBX + 0x27b8]       ; 0042d9b5
    FADD float ptr [EBX + 0x24]         ; 0042d9bb
    SUB ESP,0x4                         ; 0042d9be
    FSTP float ptr [ESP]                ; 0042d9c1
    FLD float ptr [EBX + 0x2ff0]        ; 0042d9c4
    FMUL float ptr [EBX + 0x27b8]       ; 0042d9ca
    SUB ESP,0x4                         ; 0042d9d0
    FSTP float ptr [ESP]                ; 0042d9d3
    PUSH dword ptr [ESP + 0xb4]         ; 0042d9d6
    PUSH dword ptr [ESP + 0xb0]         ; 0042d9dd
    PUSH dword ptr [EBX + 0x28]         ; 0042d9e4
    MOV EDI,dword ptr [0x00622c18]      ; 0042d9e7 | g_CDemonSetPtr
    PUSH dword ptr [EBX + 0x20]         ; 0042d9ed
    PUSH EDI                            ; 0042d9f0 | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_00558450 ; 0042d9f1
        ;   XREF to: 00558450 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_00558450()
    MOV dword ptr [ESP + 0x110],EAX     ; 0042d9f6
    FLD float ptr [ESP + 0x110]         ; 0042d9fd
    ADD ESP,0x20                        ; 0042da04
    MOV EAX,[0x007c6380]                ; 0042da07 | DAT_007c6380
    FSTP float ptr [ESP + 0x10]         ; 0042da0c
    TEST EAX,EAX                        ; 0042da10
    JNZ 0x0042da24                      ; 0042da12
        ;   XREF to: 0042da24 (CONDITIONAL_JUMP)  ; LAB_0042da24
    MOV EAX,[0x00622c18]                ; 0042da14 | g_CDemonSetPtr
    MOV EAX,dword ptr [EAX + 0x14d144]  ; 0042da19 | g_CDemonSetInstance.collision_actor
    MOV [0x007c6380],EAX                ; 0042da1f | DAT_007c6380
    IMUL EAX,dword ptr [ESP + 0xec],0x24 ; 0042da24
        ;   Label: LAB_0042da24
    ADD EAX,dword ptr [ESP + 0xc4]      ; 0042da2c
    CMP EAX,0x152c2a8                   ; 0042da33
    JZ 0x0042da54                       ; 0042da38
        ;   XREF to: 0042da54 (CONDITIONAL_JUMP)  ; LAB_0042da54
    MOV EDX,dword ptr [0x0152c2a8]      ; 0042da3a | DAT_0152c2a8
    MOV dword ptr [EAX],EDX             ; 0042da40
    MOV EDX,dword ptr [0x0152c2ac]      ; 0042da42 | DAT_0152c2ac
    MOV dword ptr [EAX + 0x4],EDX       ; 0042da48
    MOV EDX,dword ptr [0x0152c2b0]      ; 0042da4b | DAT_0152c2b0
    MOV dword ptr [EAX + 0x8],EDX       ; 0042da51
    MOV ESI,dword ptr [ESP + 0xd8]      ; 0042da54
        ;   Label: LAB_0042da54
    CMP ESI,0x152c2b4                   ; 0042da5b
    JZ 0x0042da7a                       ; 0042da61
        ;   XREF to: 0042da7a (CONDITIONAL_JUMP)  ; LAB_0042da7a
    MOV EAX,[0x0152c2b4]                ; 0042da63 | DAT_0152c2b4
    MOV dword ptr [ESI],EAX             ; 0042da68
    MOV EAX,[0x0152c2b8]                ; 0042da6a | DAT_0152c2b8
    MOV dword ptr [ESI + 0x4],EAX       ; 0042da6f
    MOV EAX,[0x0152c2bc]                ; 0042da72 | DAT_0152c2bc
    MOV dword ptr [ESI + 0x8],EAX       ; 0042da77
    MOV EDI,dword ptr [ESP + 0xd4]      ; 0042da7a
        ;   Label: LAB_0042da7a
    CMP EDI,0x152c2c0                   ; 0042da81
    JZ 0x0042daa0                       ; 0042da87
        ;   XREF to: 0042daa0 (CONDITIONAL_JUMP)  ; LAB_0042daa0
    MOV EAX,[0x0152c2c0]                ; 0042da89 | DAT_0152c2c0
    MOV dword ptr [EDI],EAX             ; 0042da8e
    MOV EAX,[0x0152c2c4]                ; 0042da90 | DAT_0152c2c4
    MOV dword ptr [EDI + 0x4],EAX       ; 0042da95
    MOV EAX,[0x0152c2c8]                ; 0042da98 | DAT_0152c2c8
    MOV dword ptr [EDI + 0x8],EAX       ; 0042da9d
    FLD float ptr [ESP + 0x10]          ; 0042daa0
        ;   Label: LAB_0042daa0
    FLDZ                                ; 0042daa4
    FXCH                                ; 0042daa6
    FSTP double ptr [ESP + 0x8]         ; 0042daa8
    FCOMP double ptr [ESP + 0x8]        ; 0042daac
    FNSTSW AX                           ; 0042dab0
    SAHF                                ; 0042dab2
    JBE 0x0042ddff                      ; 0042dab3
        ;   XREF to: 0042ddff (CONDITIONAL_JUMP)  ; LAB_0042ddff
    FLD double ptr [ESP + 0x8]          ; 0042dab9
    MOV EAX,[0x00622c18]                ; 0042dabd | g_CDemonSetPtr
    FADD double ptr [0x005d5927]        ; 0042dac2 | DAT_005d5927
    FLD float ptr [EAX + 0x14d128]      ; 0042dac8 | g_CDemonSetInstance.collision_normal.x
    FXCH                                ; 0042dace
    FSTP float ptr [ESP + 0xb8]         ; 0042dad0
    FMUL float ptr [ESP + 0xb8]         ; 0042dad7
    FLD float ptr [EAX + 0x14d12c]      ; 0042dade | g_CDemonSetInstance.collision_normal.y
    FMUL float ptr [ESP + 0xb8]         ; 0042dae4
    FLD float ptr [EAX + 0x14d130]      ; 0042daeb | g_CDemonSetInstance.collision_normal.z
    FMUL float ptr [ESP + 0xb8]         ; 0042daf1
    LEA EDI,[ESP + 0x94]                ; 0042daf8
    LEA ESI,[ESP + 0x1c]                ; 0042daff
    MOV EAX,dword ptr [ESP + 0xe0]      ; 0042db03
    FXCH ST2                            ; 0042db0a
    FSTP float ptr [ESP + 0x1c]         ; 0042db0c
    FSTP float ptr [ESP + 0x20]         ; 0042db10
    FSTP float ptr [ESP + 0x24]         ; 0042db14
    MOVSD ES:EDI,ESI                    ; 0042db18
    MOVSD ES:EDI,ESI                    ; 0042db19
    MOVSD ES:EDI,ESI                    ; 0042db1a
    MOV EDX,0x1                         ; 0042db1b
    FLD float ptr [EAX]                 ; 0042db20
    FLD float ptr [EAX + 0x4]           ; 0042db22
    FLD float ptr [EAX + 0x8]           ; 0042db25
    FXCH ST2                            ; 0042db28
    FSUB float ptr [ESP + 0x94]         ; 0042db2a
    FXCH                                ; 0042db31
    FSUB float ptr [ESP + 0x98]         ; 0042db33
    FXCH ST2                            ; 0042db3a
    FSUB float ptr [ESP + 0x9c]         ; 0042db3c
    FXCH                                ; 0042db43
    FSTP float ptr [EAX]                ; 0042db45
    FXCH                                ; 0042db47
    FSTP float ptr [EAX + 0x4]          ; 0042db49
    FSTP float ptr [EAX + 0x8]          ; 0042db4c
    MOV ESI,dword ptr [ESP + 0xd8]      ; 0042db4f
        ;   Label: LAB_0042db4f
    MOV EDI,dword ptr [ESP + 0xd4]      ; 0042db56
    MOV EAX,dword ptr [ESP + 0xdc]      ; 0042db5d
    MOV ECX,dword ptr [ESP + 0xd0]      ; 0042db64
    ADD ESI,0x24                        ; 0042db6b
    ADD EDI,0x24                        ; 0042db6e
    ADD EAX,0x24                        ; 0042db71
    ADD ECX,0x24                        ; 0042db74
    MOV dword ptr [ESP + 0xd8],ESI      ; 0042db77
    MOV dword ptr [ESP + 0xd4],EDI      ; 0042db7e
    MOV ESI,dword ptr [ESP + 0xec]      ; 0042db85
    MOV dword ptr [ESP + 0xdc],EAX      ; 0042db8c
    INC ESI                             ; 0042db93
    MOV dword ptr [ESP + 0xd0],ECX      ; 0042db94
    MOV dword ptr [ESP + 0xec],ESI      ; 0042db9b
    CMP ESI,0x3                         ; 0042dba2
    JL 0x0042d921                       ; 0042dba5
        ;   XREF to: 0042d921 (CONDITIONAL_JUMP)  ; LAB_0042d921
    TEST EDX,EDX                        ; 0042dbab
        ;   Label: LAB_0042dbab
    JZ 0x0042dbd8                       ; 0042dbad
        ;   XREF to: 0042dbd8 (CONDITIONAL_JUMP)  ; LAB_0042dbd8
    PUSH 0x0                            ; 0042dbaf
    MOV EAX,dword ptr [EBX + 0x154]     ; 0042dbb1
    PUSH dword ptr [EBX + 0x2fec]       ; 0042dbb7
    PUSH EBX                            ; 0042dbbd
    CALL dword ptr [EAX + 0x40]         ; 0042dbbe
    MOV dword ptr [ESP + 0xfc],EAX      ; 0042dbc1
    MOV EAX,dword ptr [ESP + 0xfc]      ; 0042dbc8
    MOV dword ptr [EBX + 0x2504],EAX    ; 0042dbcf
    ADD ESP,0xc                         ; 0042dbd5
    FLD float ptr [EBX + 0x24]          ; 0042dbd8
        ;   Label: LAB_0042dbd8
    FADD float ptr [ESP + 0xc0]         ; 0042dbdb
    FST float ptr [EBX + 0x24]          ; 0042dbe2
    FCOMP float ptr [EBX + 0x2504]      ; 0042dbe5
    FNSTSW AX                           ; 0042dbeb
    SAHF                                ; 0042dbed
    JNC 0x0042e0e1                      ; 0042dbee
        ;   XREF to: 0042e0e1 (CONDITIONAL_JUMP)  ; LAB_0042e0e1
    MOV EAX,dword ptr [EBX + 0x2504]    ; 0042dbf4
    MOV dword ptr [EBX + 0x24],EAX      ; 0042dbfa
    LEA EAX,[EBX + 0x2518]              ; 0042dbfd
        ;   Label: LAB_0042dbfd
    MOV dword ptr [EAX + 0x8],0x0       ; 0042dc03
    MOV EDX,dword ptr [EAX + 0x8]       ; 0042dc0a
    MOV dword ptr [EAX + 0x4],EDX       ; 0042dc0d
    MOV EDX,dword ptr [EAX + 0x4]       ; 0042dc10
    MOV dword ptr [EAX],EDX             ; 0042dc13
    MOV EAX,[0x0061d95c]                ; 0042dc15 | g_CGamePtr
    FLD float ptr [EAX + 0x294]         ; 0042dc1a | g_CGameInstance.delta_time_float
    FLD float ptr [EBX + 0x24]          ; 0042dc20
    FSUB float ptr [ESP + 0x44]         ; 0042dc23
    FDIVRP                              ; 0042dc27
    MOV EDX,dword ptr [0x00622c18]      ; 0042dc29 | g_CDemonSetPtr
    PUSH EDX                            ; 0042dc2f | g_CDemonSetInstance
    FSTP float ptr [EBX + 0x251c]       ; 0042dc30
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00559220 ; 0042dc36
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00559220(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0042dc3b
    MOV ESP,EBP                         ; 0042dc3e
    POP EBP                             ; 0042dc40
    POP EDI                             ; 0042dc41
    POP ESI                             ; 0042dc42
    POP EBX                             ; 0042dc43
    RET                                 ; 0042dc44
    MOV ESI,dword ptr [0x00622c18]      ; 0042dc45 | g_CDemonSetPtr
        ;   Label: LAB_0042dc45
    PUSH ESI                            ; 0042dc4b | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00559220 ; 0042dc4c
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00559220(CDemonSet * this_ptr)
    MOV dword ptr [EBX + 0x2520],EDI    ; 0042dc51
    ADD ESP,0x4                         ; 0042dc57
    MOV EAX,dword ptr [EBX + 0x2520]    ; 0042dc5a
    MOV dword ptr [EBX + 0x251c],EAX    ; 0042dc60
    MOV EAX,dword ptr [EBX + 0x251c]    ; 0042dc66
    MOV dword ptr [EBX + 0x2518],EAX    ; 0042dc6c
    MOV ESP,EBP                         ; 0042dc72
    POP EBP                             ; 0042dc74
    POP EDI                             ; 0042dc75
    POP ESI                             ; 0042dc76
    POP EBX                             ; 0042dc77
    RET                                 ; 0042dc78
    LEA EAX,[EBX + 0x20]                ; 0042dc79
        ;   Label: LAB_0042dc79
    MOV dword ptr [EBX + 0xdc],0x0      ; 0042dc7c
    FLD float ptr [EAX]                 ; 0042dc86
    FLD float ptr [EAX + 0x4]           ; 0042dc88
    FLD float ptr [EAX + 0x8]           ; 0042dc8b
    FXCH ST2                            ; 0042dc8e
    FADD float ptr [ESP + 0xa0]         ; 0042dc90
    FXCH                                ; 0042dc97
    FADD float ptr [ESP + 0xa4]         ; 0042dc99
    FXCH ST2                            ; 0042dca0
    FADD float ptr [ESP + 0xa8]         ; 0042dca2
    FXCH                                ; 0042dca9
    FSTP float ptr [EAX]                ; 0042dcab
    FXCH                                ; 0042dcad
    FSTP float ptr [EAX + 0x4]          ; 0042dcaf
    FSTP float ptr [EAX + 0x8]          ; 0042dcb2
    MOV dword ptr [EBX + 0x2520],0x0    ; 0042dcb5
    MOV EAX,dword ptr [EBX + 0x2520]    ; 0042dcbf
    MOV dword ptr [EBX + 0x251c],EAX    ; 0042dcc5
    MOV EAX,dword ptr [EBX + 0x251c]    ; 0042dccb
    MOV dword ptr [EBX + 0x2518],EAX    ; 0042dcd1
    MOV ESP,EBP                         ; 0042dcd7
    POP EBP                             ; 0042dcd9
    POP EDI                             ; 0042dcda
    POP ESI                             ; 0042dcdb
    POP EBX                             ; 0042dcdc
    RET                                 ; 0042dcdd
    PUSH EDX                            ; 0042dcde
        ;   Label: LAB_0042dcde
    MOV ESI,0x610cd0                    ; 0042dcdf | = "noCollision"
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 0042dce4
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0042dce9
    MOV EDI,EAX                         ; 0042dcec
    MOV EDX,EAX                         ; 0042dcee
    SUB ECX,ECX                         ; 0042dcf0
    DEC ECX                             ; 0042dcf2
    XOR EAX,EAX                         ; 0042dcf3
    SCASB.REPNE ES:EDI                  ; 0042dcf5
    NOT ECX                             ; 0042dcf7
    DEC ECX                             ; 0042dcf9
    LEA EDI,[ESP + 0x88]                ; 0042dcfa
    SUB ECX,0xb                         ; 0042dd01
    MOVSD ES:EDI,ESI                    ; 0042dd04 | = "noCollision"
    MOVSD ES:EDI,ESI                    ; 0042dd05 | s_llision_00610cd0+4
    MOVSD ES:EDI,ESI                    ; 0042dd06 | s_ion_00610cd0+8 | DAT_006e6f69
    MOV dword ptr [ESP + 0xe8],ECX      ; 0042dd07
    MOV ESI,EDX                         ; 0042dd0e
    XOR EDI,EDI                         ; 0042dd10
    TEST ECX,ECX                        ; 0042dd12
    JL 0x0042d7e9                       ; 0042dd14
        ;   XREF to: 0042d7e9 (CONDITIONAL_JUMP)  ; LAB_0042d7e9
    PUSH 0xb                            ; 0042dd1a
        ;   Label: LAB_0042dd1a
    LEA EAX,[ESP + 0x8c]                ; 0042dd1c
    PUSH EAX                            ; 0042dd23
    PUSH ESI                            ; 0042dd24
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 0042dd25
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0042dd2a
    TEST EAX,EAX                        ; 0042dd2d
    JZ 0x0042dd43                       ; 0042dd2f
        ;   XREF to: 0042dd43 (CONDITIONAL_JUMP)  ; LAB_0042dd43
    MOV EAX,dword ptr [ESP + 0xe8]      ; 0042dd31
    INC EDI                             ; 0042dd38
    INC ESI                             ; 0042dd39
    CMP EDI,EAX                         ; 0042dd3a
    JLE 0x0042dd1a                      ; 0042dd3c
        ;   XREF to: 0042dd1a (CONDITIONAL_JUMP)  ; LAB_0042dd1a
    JMP 0x0042d7e9                      ; 0042dd3e
        ;   XREF to: 0042d7e9 (UNCONDITIONAL_JUMP)  ; LAB_0042d7e9
    MOV dword ptr [EBX + 0x2520],EAX    ; 0042dd43
        ;   Label: LAB_0042dd43
    MOV EAX,dword ptr [EBX + 0x2520]    ; 0042dd49
    MOV dword ptr [EBX + 0x251c],EAX    ; 0042dd4f
    MOV EAX,dword ptr [EBX + 0x251c]    ; 0042dd55
    MOV dword ptr [EBX + 0x2518],EAX    ; 0042dd5b
    MOV ESP,EBP                         ; 0042dd61
    POP EBP                             ; 0042dd63
    POP EDI                             ; 0042dd64
    POP ESI                             ; 0042dd65
    POP EBX                             ; 0042dd66
    RET                                 ; 0042dd67
    FLD float ptr [ESP + 0xa0]          ; 0042dd68
        ;   Label: LAB_0042dd68
    FLD float ptr [ESP + 0xa8]          ; 0042dd6f
    FLD float ptr [EBX + 0xe4]          ; 0042dd76
    LEA EAX,[EBX + 0xe0]                ; 0042dd7c
    FADD float ptr [EBX + 0x24]         ; 0042dd82
    FXCH ST2                            ; 0042dd85
    FADD float ptr [EBX + 0xe0]         ; 0042dd87
    FXCH                                ; 0042dd8d
    FADD float ptr [EBX + 0xe8]         ; 0042dd8f
    FXCH ST2                            ; 0042dd95
    FSTP float ptr [EBX + 0x24]         ; 0042dd97
    MOV dword ptr [EAX + 0x8],0x0       ; 0042dd9a
    LEA EDX,[EBX + 0x30]                ; 0042dda1
    MOV ECX,dword ptr [EAX + 0x8]       ; 0042dda4
    MOV dword ptr [EAX + 0x4],ECX       ; 0042dda7
    MOV ECX,dword ptr [EAX + 0x4]       ; 0042ddaa
    MOV dword ptr [EAX],ECX             ; 0042ddad
    LEA EAX,[EBX + 0xec]                ; 0042ddaf
    FLD float ptr [EAX]                 ; 0042ddb5
    FADD float ptr [EDX]                ; 0042ddb7
    FSTP float ptr [EDX]                ; 0042ddb9
    FLD float ptr [EAX + 0x4]           ; 0042ddbb
    FADD float ptr [EDX + 0x4]          ; 0042ddbe
    FXCH                                ; 0042ddc1
    FSTP float ptr [ESP + 0xa0]         ; 0042ddc3
    FSTP float ptr [EDX + 0x4]          ; 0042ddca
    FLD float ptr [EAX + 0x8]           ; 0042ddcd
    FADD float ptr [EDX + 0x8]          ; 0042ddd0
    FXCH                                ; 0042ddd3
    FSTP float ptr [ESP + 0xa8]         ; 0042ddd5
    FSTP float ptr [EDX + 0x8]          ; 0042dddc
    MOV dword ptr [EAX + 0x8],0x0       ; 0042dddf
    PUSH EBX                            ; 0042dde6
    MOV EDX,dword ptr [EAX + 0x8]       ; 0042dde7
    MOV dword ptr [EAX + 0x4],EDX       ; 0042ddea
    MOV EDX,dword ptr [EAX + 0x4]       ; 0042dded
    MOV dword ptr [EAX],EDX             ; 0042ddf0
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0 ; 0042ddf2
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0042ddf7
    JMP 0x0042d7f6                      ; 0042ddfa
        ;   XREF to: 0042d7f6 (UNCONDITIONAL_JUMP)  ; LAB_0042d7f6
    FLD1                                ; 0042ddff
        ;   Label: LAB_0042ddff
    FCOMP double ptr [ESP + 0x8]        ; 0042de01
    FNSTSW AX                           ; 0042de05
    SAHF                                ; 0042de07
    JNC 0x0042de12                      ; 0042de08
        ;   XREF to: 0042de12 (CONDITIONAL_JUMP)  ; LAB_0042de12
    MOV dword ptr [ESP + 0x10],0x3f800000 ; 0042de0a
    FLD float ptr [ESP + 0x10]          ; 0042de12
        ;   Label: LAB_0042de12
    FLD float ptr [ESP + 0xa0]          ; 0042de16
    FMUL ST1                            ; 0042de1d
    FLD float ptr [ESP + 0xa4]          ; 0042de1f
    FMUL ST2                            ; 0042de26
    FLD float ptr [ESP + 0xa8]          ; 0042de28
    FMULP ST3                           ; 0042de2f
    LEA EDI,[ESP + 0x70]                ; 0042de31
    LEA ESI,[ESP + 0x28]                ; 0042de35
    MOV EAX,dword ptr [ESP + 0xe0]      ; 0042de39
    FXCH                                ; 0042de40
    FSTP float ptr [ESP + 0x28]         ; 0042de42
    FSTP float ptr [ESP + 0x2c]         ; 0042de46
    FSTP float ptr [ESP + 0x30]         ; 0042de4a
    MOVSD ES:EDI,ESI                    ; 0042de4e
    MOVSD ES:EDI,ESI                    ; 0042de4f
    MOVSD ES:EDI,ESI                    ; 0042de50
    FLD float ptr [EAX]                 ; 0042de51
    FLD float ptr [EAX + 0x4]           ; 0042de53
    FLD float ptr [EAX + 0x8]           ; 0042de56
    LEA EDI,[ESP + 0x34]                ; 0042de59
    MOV ESI,dword ptr [0x00622c18]      ; 0042de5d | g_CDemonSetPtr
    FXCH ST2                            ; 0042de63
    FADD float ptr [ESP + 0x70]         ; 0042de65
    FXCH                                ; 0042de69
    FADD float ptr [ESP + 0x74]         ; 0042de6b
    FXCH ST2                            ; 0042de6f
    FADD float ptr [ESP + 0x78]         ; 0042de71
    FXCH                                ; 0042de75
    FSTP float ptr [EAX]                ; 0042de77
    FXCH                                ; 0042de79
    FSTP float ptr [EAX + 0x4]          ; 0042de7b
    FSTP float ptr [EAX + 0x8]          ; 0042de7e
    LEA EAX,[ESP + 0x4c]                ; 0042de81
    LEA ESI,[ESI + 0x14d128]            ; 0042de85
    PUSH EAX                            ; 0042de8b
    MOVSD ES:EDI,ESI                    ; 0042de8c | g_CDemonSetInstance.collision_normal.x
    MOVSD ES:EDI,ESI                    ; 0042de8d | g_CDemonSetInstance.collision_normal.y
    MOVSD ES:EDI,ESI                    ; 0042de8e | g_CDemonSetInstance.collision_normal.z
    PUSH dword ptr [EBX + 0x2fec]       ; 0042de8f
    MOV EDX,dword ptr [EBX + 0x154]     ; 0042de95
    PUSH EBX                            ; 0042de9b
    CALL dword ptr [EDX + 0x40]         ; 0042de9c
    MOV dword ptr [ESP + 0xfc],EAX      ; 0042de9f
    FLD float ptr [ESP + 0xfc]          ; 0042dea6
    ADD ESP,0xc                         ; 0042dead
    IMUL EAX,dword ptr [ESP + 0xec],0x24 ; 0042deb0
    MOV ESI,dword ptr [ESP + 0xac]      ; 0042deb8
    XOR EDX,EDX                         ; 0042debf
    ADD EAX,ESI                         ; 0042dec1
    FSTP float ptr [EBX + 0x2504]       ; 0042dec3
    CMP EAX,0x152c2a8                   ; 0042dec9
    JZ 0x0042deea                       ; 0042dece
        ;   XREF to: 0042deea (CONDITIONAL_JUMP)  ; LAB_0042deea
    MOV ECX,dword ptr [0x0152c2a8]      ; 0042ded0 | DAT_0152c2a8
    MOV dword ptr [EAX],ECX             ; 0042ded6
    MOV ECX,dword ptr [0x0152c2ac]      ; 0042ded8 | DAT_0152c2ac
    MOV dword ptr [EAX + 0x4],ECX       ; 0042dede
    MOV ECX,dword ptr [0x0152c2b0]      ; 0042dee1 | DAT_0152c2b0
    MOV dword ptr [EAX + 0x8],ECX       ; 0042dee7
    MOV EDI,dword ptr [ESP + 0xdc]      ; 0042deea
        ;   Label: LAB_0042deea
    CMP EDI,0x152c2b4                   ; 0042def1
    JZ 0x0042df10                       ; 0042def7
        ;   XREF to: 0042df10 (CONDITIONAL_JUMP)  ; LAB_0042df10
    MOV EAX,[0x0152c2b4]                ; 0042def9 | DAT_0152c2b4
    MOV dword ptr [EDI],EAX             ; 0042defe
    MOV EAX,[0x0152c2b8]                ; 0042df00 | DAT_0152c2b8
    MOV dword ptr [EDI + 0x4],EAX       ; 0042df05
    MOV EAX,[0x0152c2bc]                ; 0042df08 | DAT_0152c2bc
    MOV dword ptr [EDI + 0x8],EAX       ; 0042df0d
    MOV EAX,dword ptr [ESP + 0xd0]      ; 0042df10
        ;   Label: LAB_0042df10
    CMP EAX,0x152c2c0                   ; 0042df17
    JZ 0x0042df38                       ; 0042df1c
        ;   XREF to: 0042df38 (CONDITIONAL_JUMP)  ; LAB_0042df38
    MOV ECX,dword ptr [0x0152c2c0]      ; 0042df1e | DAT_0152c2c0
    MOV dword ptr [EAX],ECX             ; 0042df24
    MOV ECX,dword ptr [0x0152c2c4]      ; 0042df26 | DAT_0152c2c4
    MOV dword ptr [EAX + 0x4],ECX       ; 0042df2c
    MOV ECX,dword ptr [0x0152c2c8]      ; 0042df2f | DAT_0152c2c8
    MOV dword ptr [EAX + 0x8],ECX       ; 0042df35
    FLD float ptr [EBX + 0x24]          ; 0042df38
        ;   Label: LAB_0042df38
    FCOMP float ptr [EBX + 0x2504]      ; 0042df3b
    FNSTSW AX                           ; 0042df41
    SAHF                                ; 0042df43
    JNC 0x0042df56                      ; 0042df44
        ;   XREF to: 0042df56 (CONDITIONAL_JUMP)  ; LAB_0042df56
    MOV EAX,dword ptr [EBX + 0x2504]    ; 0042df46
    MOV dword ptr [EBX + 0x24],EAX      ; 0042df4c
    MOV EAX,dword ptr [EBX + 0x24]      ; 0042df4f
    MOV dword ptr [ESP + 0x44],EAX      ; 0042df52
    FLD float ptr [ESP + 0x10]          ; 0042df56
        ;   Label: LAB_0042df56
    FCOMP double ptr [0x005d591f]       ; 0042df5a | DAT_005d591f
    FNSTSW AX                           ; 0042df60
    SAHF                                ; 0042df62
    JA 0x0042dbab                       ; 0042df63
        ;   XREF to: 0042dbab (CONDITIONAL_JUMP)  ; LAB_0042dbab
    FLD float ptr [ESP + 0x34]          ; 0042df69
    FMUL ST0                            ; 0042df6d
    FLD float ptr [ESP + 0x3c]          ; 0042df6f
    FMUL ST0                            ; 0042df73
    FADDP                               ; 0042df75
    FSQRT                               ; 0042df77
    XOR ECX,ECX                         ; 0042df79
    FLDZ                                ; 0042df7b
    MOV dword ptr [ESP + 0x38],ECX      ; 0042df7d
    FXCH                                ; 0042df81
    FSTP float ptr [ESP + 0x14]         ; 0042df83
    FCOMP float ptr [ESP + 0x14]        ; 0042df87
    FNSTSW AX                           ; 0042df8b
    SAHF                                ; 0042df8d
    JNC 0x0042dfce                      ; 0042df8e
        ;   XREF to: 0042dfce (CONDITIONAL_JUMP)  ; LAB_0042dfce
    FLD float ptr [ESP + 0x14]          ; 0042df90
    FLD1                                ; 0042df94
    FDIVRP                              ; 0042df96
    FLD float ptr [ESP + 0x34]          ; 0042df98
    FXCH                                ; 0042df9c
    FSTP float ptr [ESP + 0xc8]         ; 0042df9e
    FMUL float ptr [ESP + 0xc8]         ; 0042dfa5
    FLDZ                                ; 0042dfac
    FMUL float ptr [ESP + 0xc8]         ; 0042dfae
    FLD float ptr [ESP + 0x3c]          ; 0042dfb5
    FMUL float ptr [ESP + 0xc8]         ; 0042dfb9
    FXCH ST2                            ; 0042dfc0
    FSTP float ptr [ESP + 0x34]         ; 0042dfc2
    FSTP float ptr [ESP + 0x38]         ; 0042dfc6
    FSTP float ptr [ESP + 0x3c]         ; 0042dfca
    FLD float ptr [ESP + 0x10]          ; 0042dfce
        ;   Label: LAB_0042dfce
    FSUBR double ptr [0x005d591f]       ; 0042dfd2 | DAT_005d591f
    FLD float ptr [ESP + 0xa0]          ; 0042dfd8
    FXCH                                ; 0042dfdf
    FSTP float ptr [ESP + 0xbc]         ; 0042dfe1
    FMUL float ptr [ESP + 0xbc]         ; 0042dfe8
    FLD float ptr [ESP + 0xa4]          ; 0042dfef
    FMUL float ptr [ESP + 0xbc]         ; 0042dff6
    FLD float ptr [ESP + 0x38]          ; 0042dffd
    FXCH                                ; 0042e001
    FSTP float ptr [ESP + 0xa4]         ; 0042e003
    FMUL float ptr [ESP + 0xa4]         ; 0042e00a
    FXCH                                ; 0042e011
    FSTP float ptr [ESP + 0xa0]         ; 0042e013
    FLD float ptr [ESP + 0x34]          ; 0042e01a
    FMUL float ptr [ESP + 0xa0]         ; 0042e01e
    FLD float ptr [ESP + 0xa8]          ; 0042e025
    FMUL float ptr [ESP + 0xbc]         ; 0042e02c
    FXCH                                ; 0042e033
    FADDP ST2,ST0                       ; 0042e035
    FSTP float ptr [ESP + 0xa8]         ; 0042e037
    FLD float ptr [ESP + 0x3c]          ; 0042e03e
    FMUL float ptr [ESP + 0xa8]         ; 0042e042
    FADDP                               ; 0042e049
    FLDZ                                ; 0042e04b
    FXCH                                ; 0042e04d
    FSTP double ptr [ESP]               ; 0042e04f
    FCOMP double ptr [ESP]              ; 0042e052
    FNSTSW AX                           ; 0042e055
    SAHF                                ; 0042e057
    JBE 0x0042dbab                      ; 0042e058
        ;   XREF to: 0042dbab (CONDITIONAL_JUMP)  ; LAB_0042dbab
    FLD double ptr [ESP]                ; 0042e05e
    FMUL double ptr [0x005d5917]        ; 0042e061 | DAT_005d5917
    FLD float ptr [ESP + 0x34]          ; 0042e067
    FMUL ST1                            ; 0042e06b
    FLD float ptr [ESP + 0x38]          ; 0042e06d
    FMUL ST2                            ; 0042e071
    FLD float ptr [ESP + 0x3c]          ; 0042e073
    FMULP ST3                           ; 0042e077
    FLD float ptr [ESP + 0xa0]          ; 0042e079
    FLD float ptr [ESP + 0xa4]          ; 0042e080
    LEA EDI,[ESP + 0x64]                ; 0042e087
    LEA ESI,[ESP + 0x7c]                ; 0042e08b
    FXCH ST3                            ; 0042e08f
    FSTP float ptr [ESP + 0x7c]         ; 0042e091
    FXCH                                ; 0042e095
    FSTP float ptr [ESP + 0x80]         ; 0042e097
    FXCH ST2                            ; 0042e09e
    FSTP float ptr [ESP + 0x84]         ; 0042e0a0
    MOVSD ES:EDI,ESI                    ; 0042e0a7
    MOVSD ES:EDI,ESI                    ; 0042e0a8
    MOVSD ES:EDI,ESI                    ; 0042e0a9
    FLD float ptr [ESP + 0xa8]          ; 0042e0aa
    FXCH ST2                            ; 0042e0b1
    FSUB float ptr [ESP + 0x64]         ; 0042e0b3
    FXCH                                ; 0042e0b7
    FSUB float ptr [ESP + 0x68]         ; 0042e0b9
    FXCH ST2                            ; 0042e0bd
    FSUB float ptr [ESP + 0x6c]         ; 0042e0bf
    FXCH                                ; 0042e0c3
    FSTP float ptr [ESP + 0xa0]         ; 0042e0c5
    FXCH                                ; 0042e0cc
    FSTP float ptr [ESP + 0xa4]         ; 0042e0ce
    FSTP float ptr [ESP + 0xa8]         ; 0042e0d5
    JMP 0x0042db4f                      ; 0042e0dc
        ;   XREF to: 0042db4f (UNCONDITIONAL_JUMP)  ; LAB_0042db4f
    CMP dword ptr [EBX + 0x2500],0x0    ; 0042e0e1
        ;   Label: LAB_0042e0e1
    JZ 0x0042dbfd                       ; 0042e0e8
        ;   XREF to: 0042dbfd (CONDITIONAL_JUMP)  ; LAB_0042dbfd
    FLD float ptr [EBX + 0x2504]        ; 0042e0ee
    FADD double ptr [0x005d590f]        ; 0042e0f4 | DAT_005d590f
    FLD float ptr [EBX + 0x24]          ; 0042e0fa
    FCOMPP                              ; 0042e0fd
    FNSTSW AX                           ; 0042e0ff
    SAHF                                ; 0042e101
    JNC 0x0042dbfd                      ; 0042e102
        ;   XREF to: 0042dbfd (CONDITIONAL_JUMP)  ; LAB_0042dbfd
    MOV EAX,dword ptr [EBX + 0x2504]    ; 0042e108
    MOV dword ptr [EBX + 0x24],EAX      ; 0042e10e
    MOV EAX,dword ptr [EBX + 0x24]      ; 0042e111
    MOV dword ptr [ESP + 0x44],EAX      ; 0042e114
    JMP 0x0042dbfd                      ; 0042e118
        ;   XREF to: 0042dbfd (UNCONDITIONAL_JUMP)  ; LAB_0042dbfd

