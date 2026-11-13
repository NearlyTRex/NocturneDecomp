; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dracbrid_cpp_FUN_0047d920(CDraculaBride *this_ptr,char *sound_name,float volume)
;
; Parameters:
; CDraculaBride *  Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   sound_name
; float            Stack[0xc]:4   volume
; Local Variables:
; undefined        Stack[-0x1ac]:1  local_1ac
; undefined        Stack[-0xe4]:1  local_e4
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined        Stack[-0xac]:1  local_ac
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined        Stack[-0x94]:1  local_94
; undefined        Stack[-0x88]:1  local_88
; undefined        Stack[-0x7c]:1  local_7c
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined        Stack[-0x58]:1  local_58
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined        Stack[-0x34]:1  local_34
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[2]:
;   core_dracbrid.cpp_CDraculaBride_processDamage_FUN_0047d480 at 0047d644
;   core_dracbrid.cpp_CDraculaBride_process_FUN_0047b510 at 0047ba9d
;
; Referenced Globals:
;   undefined4 DAT_006236b8
;   undefined4 DAT_01bc0d34
;   undefined4 DAT_01bc0d54
;   undefined4 DAT_01bc0d58
;   undefined4 DAT_01bc0d5c
;   undefined4 DAT_01bc0d60
;   undefined4 DAT_01bc0d64
;   undefined4 DAT_01bc0d68
;   undefined4 DAT_01bc0d6c
;   undefined4 DAT_01bc0d70
;   undefined4 DAT_01bc0d74
;   undefined4 DAT_01bc0d78
;   undefined4 DAT_01bc0d7c
;   undefined4 DAT_01bc0d80
;   undefined4 DAT_01bc0d84
;   ... and 12 more
;
; Called Functions:
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;   core_skeleton.cpp_FUN_00569130
;   core_sound.cpp_CSound_findRandomSoundFile_FUN_0057be00
;   core_spline.cpp_FUN_00583d60
;   core_spline.cpp_FUN_00583f90
;   core_spline.cpp_FUN_005841d0
;   sound_sndmain.cpp_isSfxPlaying_FUN_005735a0
;   sound_sndmain.cpp_isSoundBusy_FUN_00575550
;   sound_sndmain.cpp_popSfxOptions_FUN_00572b40
;   sound_sndmain.cpp_pushSfxOptions_FUN_00572ac0
;   sound_sndmain.cpp_setNextSfxTrackedFloatPosition_FUN_005727e0
;   sound_sndmain.cpp_setNextSfxTrackedVelocity1_FUN_00572880
;   sound_sndmain.cpp_setNextSfxVolume_FUN_005728e0
;   sound_sndmain.cpp_startSfx_FUN_00572d20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047d920
        ;   Label: core_dracbrid.cpp_FUN_0047d920
    PUSH ESI                            ; 0047d921
    PUSH EBP                            ; 0047d922
    SUB ESP,0x1a0                       ; 0047d923
    PUSH 0x40e00000                     ; 0047d929
    PUSH 0x3f800000                     ; 0047d92e
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 0047d933
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x1a4],EAX     ; 0047d938
    FLD float ptr [ESP + 0x1a4]         ; 0047d93f
    ADD ESP,0x8                         ; 0047d946
    MOV EAX,dword ptr [ESP + 0x1b0]     ; 0047d949
    FSTP float ptr [EAX + 0xc2fc]       ; 0047d950
    CALL sound_sndmain.cpp_isSoundBusy_FUN_00575550 ; 0047d956
        ;   XREF to: 00575550 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSoundBusy_FUN_00575550()
    TEST EAX,EAX                        ; 0047d95b
    JZ 0x0047d980                       ; 0047d95d
        ;   XREF to: 0047d980 (CONDITIONAL_JUMP)  ; LAB_0047d980
    MOV EBX,0x1bc0d54                   ; 0047d95f
    XOR ESI,ESI                         ; 0047d964
    MOV EDX,dword ptr [EBX]             ; 0047d966 | DAT_01bc0d54 | DAT_01bc0da8
        ;   Label: LAB_0047d966
    PUSH EDX                            ; 0047d968
    MOV EBP,EBX                         ; 0047d969
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005735a0 ; 0047d96b
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 0047d970
    TEST EAX,EAX                        ; 0047d973
    JZ 0x0047d98a                       ; 0047d975
        ;   XREF to: 0047d98a (CONDITIONAL_JUMP)  ; LAB_0047d98a
    INC ESI                             ; 0047d977
    ADD EBX,0x54                        ; 0047d978
    CMP ESI,0x6                         ; 0047d97b
    JL 0x0047d966                       ; 0047d97e
        ;   XREF to: 0047d966 (CONDITIONAL_JUMP)  ; LAB_0047d966
    ADD ESP,0x1a0                       ; 0047d980
        ;   Label: LAB_0047d980
    POP EBP                             ; 0047d986
    POP ESI                             ; 0047d987
    POP EBX                             ; 0047d988
    RET                                 ; 0047d989
    PUSH EDI                            ; 0047d98a
        ;   Label: LAB_0047d98a
    MOV ECX,dword ptr [0x01bc0d34]      ; 0047d98b | DAT_01bc0d34
    MOV dword ptr [EBX + 0x1c],EAX      ; 0047d991 | DAT_01bc0d70
    MOV EAX,dword ptr [ESP + 0x1b4]     ; 0047d994
    PUSH ECX                            ; 0047d99b
    ADD EAX,0x158                       ; 0047d99c
    PUSH EAX                            ; 0047d9a1
    LEA ESI,[ESP + 0x124]               ; 0047d9a2
    LEA EDI,[ESP + 0x13c]               ; 0047d9a9
    CALL core_skeleton.cpp_FUN_00569130 ; 0047d9b0
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569130()
    LEA ESI,[ESP + 0x124]               ; 0047d9b5
    ADD ESP,0x8                         ; 0047d9bc
    LEA EAX,[ESP + 0x134]               ; 0047d9bf
    MOVSD ES:EDI,ESI                    ; 0047d9c6
    MOVSD ES:EDI,ESI                    ; 0047d9c7
    MOVSD ES:EDI,ESI                    ; 0047d9c8
    PUSH EAX                            ; 0047d9c9
    MOV ESI,dword ptr [ESP + 0x1b8]     ; 0047d9ca
    ADD EBX,0x2c                        ; 0047d9d1
    PUSH ESI                            ; 0047d9d4
    LEA ESI,[ESP + 0x130]               ; 0047d9d5
    LEA EDI,[ESP + 0x16c]               ; 0047d9dc
    CALL core_actor.cpp_FUN_00408b40    ; 0047d9e3
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x130]               ; 0047d9e8
    ADD ESP,0x8                         ; 0047d9ef
    LEA EAX,[ESP + 0x164]               ; 0047d9f2
    MOVSD ES:EDI,ESI                    ; 0047d9f9
    MOVSD ES:EDI,ESI                    ; 0047d9fa
    MOVSD ES:EDI,ESI                    ; 0047d9fb
    CMP EBX,EAX                         ; 0047d9fc
    JZ 0x0047da1d                       ; 0047d9fe
        ;   XREF to: 0047da1d (CONDITIONAL_JUMP)  ; LAB_0047da1d
    MOV EAX,dword ptr [ESP + 0x164]     ; 0047da00
    MOV dword ptr [EBX],EAX             ; 0047da07 | DAT_01bc0d80
    MOV EAX,dword ptr [ESP + 0x168]     ; 0047da09
    MOV dword ptr [EBX + 0x4],EAX       ; 0047da10 | DAT_01bc0d84
    MOV EAX,dword ptr [ESP + 0x16c]     ; 0047da13
    MOV dword ptr [EBX + 0x8],EAX       ; 0047da1a | DAT_01bc0d88
    PUSH 0x40a00000                     ; 0047da1d
        ;   Label: LAB_0047da1d
    LEA EDI,[ESP + 0xfc]                ; 0047da22
    LEA ESI,[EBP + 0x2c]                ; 0047da29
    PUSH 0xc0a00000                     ; 0047da2c
    MOVSD ES:EDI,ESI                    ; 0047da31 | DAT_01bc0d80
    MOVSD ES:EDI,ESI                    ; 0047da32 | DAT_01bc0d84
    MOVSD ES:EDI,ESI                    ; 0047da33 | DAT_01bc0d88
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 0047da34
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x1a8],EAX     ; 0047da39
    FLD float ptr [ESP + 0x1a8]         ; 0047da40
    ADD ESP,0x8                         ; 0047da47
    PUSH 0x40000000                     ; 0047da4a
    FADD float ptr [ESP + 0xfc]         ; 0047da4f
    PUSH 0xc0000000                     ; 0047da56
    FSTP float ptr [ESP + 0x100]        ; 0047da5b
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 0047da62
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x1a8],EAX     ; 0047da67
    FLD float ptr [ESP + 0x1a8]         ; 0047da6e
    ADD ESP,0x8                         ; 0047da75
    LEA EBX,[EBP + 0x20]                ; 0047da78
    PUSH 0x40a00000                     ; 0047da7b
    FADD float ptr [ESP + 0x100]        ; 0047da80
    PUSH 0xc0a00000                     ; 0047da87
    FSTP float ptr [ESP + 0x104]        ; 0047da8c
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 0047da93
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x1a8],EAX     ; 0047da98
    LEA EDI,[ESP + 0x118]               ; 0047da9f
    FLD float ptr [ESP + 0x1a8]         ; 0047daa6
    ADD ESP,0x8                         ; 0047daad
    LEA ESI,[ESP + 0xf8]                ; 0047dab0
    FADD float ptr [ESP + 0x100]        ; 0047dab7
    LEA EAX,[ESP + 0x110]               ; 0047dabe
    FSTP float ptr [ESP + 0x100]        ; 0047dac5
    MOVSD ES:EDI,ESI                    ; 0047dacc
    MOVSD ES:EDI,ESI                    ; 0047dacd
    MOVSD ES:EDI,ESI                    ; 0047dace
    CMP EBX,EAX                         ; 0047dacf
    JZ 0x0047daf0                       ; 0047dad1
        ;   XREF to: 0047daf0 (CONDITIONAL_JUMP)  ; LAB_0047daf0
    MOV EAX,dword ptr [ESP + 0x110]     ; 0047dad3
    MOV dword ptr [EBX],EAX             ; 0047dada | DAT_01bc0d74
    MOV EAX,dword ptr [ESP + 0x114]     ; 0047dadc
    MOV dword ptr [EBX + 0x4],EAX       ; 0047dae3 | DAT_01bc0d78
    MOV EAX,dword ptr [ESP + 0x118]     ; 0047dae6
    MOV dword ptr [EBX + 0x8],EAX       ; 0047daed | DAT_01bc0d7c
    PUSH 0x40a00000                     ; 0047daf0
        ;   Label: LAB_0047daf0
    LEA EDI,[ESP + 0x174]               ; 0047daf5
    LEA ESI,[EBP + 0x2c]                ; 0047dafc
    PUSH 0xc0a00000                     ; 0047daff
    MOVSD ES:EDI,ESI                    ; 0047db04 | DAT_01bc0d80
    MOVSD ES:EDI,ESI                    ; 0047db05 | DAT_01bc0d84
    MOVSD ES:EDI,ESI                    ; 0047db06 | DAT_01bc0d88
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 0047db07
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x1a8],EAX     ; 0047db0c
    FLD float ptr [ESP + 0x1a8]         ; 0047db13
    ADD ESP,0x8                         ; 0047db1a
    PUSH 0x40000000                     ; 0047db1d
    FADD float ptr [ESP + 0x174]        ; 0047db22
    PUSH 0xc0000000                     ; 0047db29
    FSTP float ptr [ESP + 0x178]        ; 0047db2e
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 0047db35
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x1a8],EAX     ; 0047db3a
    FLD float ptr [ESP + 0x1a8]         ; 0047db41
    ADD ESP,0x8                         ; 0047db48
    LEA EBX,[EBP + 0x38]                ; 0047db4b
    PUSH 0x40a00000                     ; 0047db4e
    FADD float ptr [ESP + 0x178]        ; 0047db53
    PUSH 0xc0a00000                     ; 0047db5a
    FSTP float ptr [ESP + 0x17c]        ; 0047db5f
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 0047db66
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x1a8],EAX     ; 0047db6b
    LEA EDI,[ESP + 0x148]               ; 0047db72
    FLD float ptr [ESP + 0x1a8]         ; 0047db79
    ADD ESP,0x8                         ; 0047db80
    LEA ESI,[ESP + 0x170]               ; 0047db83
    FADD float ptr [ESP + 0x178]        ; 0047db8a
    LEA EAX,[ESP + 0x140]               ; 0047db91
    FSTP float ptr [ESP + 0x178]        ; 0047db98
    MOVSD ES:EDI,ESI                    ; 0047db9f
    MOVSD ES:EDI,ESI                    ; 0047dba0
    MOVSD ES:EDI,ESI                    ; 0047dba1
    CMP EBX,EAX                         ; 0047dba2
    JZ 0x0047dbc3                       ; 0047dba4
        ;   XREF to: 0047dbc3 (CONDITIONAL_JUMP)  ; LAB_0047dbc3
    MOV EAX,dword ptr [ESP + 0x140]     ; 0047dba6
    MOV dword ptr [EBX],EAX             ; 0047dbad | DAT_01bc0d8c
    MOV EAX,dword ptr [ESP + 0x144]     ; 0047dbaf
    MOV dword ptr [EBX + 0x4],EAX       ; 0047dbb6 | DAT_01bc0d90
    MOV EAX,dword ptr [ESP + 0x148]     ; 0047dbb9
    MOV dword ptr [EBX + 0x8],EAX       ; 0047dbc0 | DAT_01bc0d94
    PUSH 0x40a00000                     ; 0047dbc3
        ;   Label: LAB_0047dbc3
    LEA EDI,[ESP + 0x180]               ; 0047dbc8
    MOV ESI,0x1fe37f0                   ; 0047dbcf
    PUSH 0xc0a00000                     ; 0047dbd4
    MOVSD ES:EDI,ESI                    ; 0047dbd9 | g_CDemonCameraInstance.base.position
    MOVSD ES:EDI,ESI                    ; 0047dbda | g_CDemonCameraInstance.base.position+4
    MOVSD ES:EDI,ESI                    ; 0047dbdb | g_CDemonCameraInstance.base.position+8
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 0047dbdc
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    LEA EDI,[ESP + 0xf4]                ; 0047dbe1
    MOV dword ptr [ESP + 0x1a8],EAX     ; 0047dbe8
    LEA ESI,[ESP + 0x184]               ; 0047dbef
    FLD float ptr [ESP + 0x1a8]         ; 0047dbf6
    MOVSD ES:EDI,ESI                    ; 0047dbfd
    MOVSD ES:EDI,ESI                    ; 0047dbfe
    MOVSD ES:EDI,ESI                    ; 0047dbff
    ADD ESP,0x8                         ; 0047dc00
    PUSH 0x40000000                     ; 0047dc03
    FADD float ptr [ESP + 0xf0]         ; 0047dc08
    PUSH 0xc0000000                     ; 0047dc0f
    FSTP float ptr [ESP + 0xf4]         ; 0047dc14
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 0047dc1b
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x1a8],EAX     ; 0047dc20
    FLD float ptr [ESP + 0x1a8]         ; 0047dc27
    ADD ESP,0x8                         ; 0047dc2e
    LEA EBX,[EBP + 0x44]                ; 0047dc31
    PUSH 0x40a00000                     ; 0047dc34
    FADD float ptr [ESP + 0xf4]         ; 0047dc39
    PUSH 0xc0a00000                     ; 0047dc40
    FSTP float ptr [ESP + 0xf8]         ; 0047dc45
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 0047dc4c
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x1a8],EAX     ; 0047dc51
    LEA EDI,[ESP + 0x190]               ; 0047dc58
    FLD float ptr [ESP + 0x1a8]         ; 0047dc5f
    ADD ESP,0x8                         ; 0047dc66
    LEA ESI,[ESP + 0xec]                ; 0047dc69
    FADD float ptr [ESP + 0xf4]         ; 0047dc70
    LEA EAX,[ESP + 0x188]               ; 0047dc77
    FSTP float ptr [ESP + 0xf4]         ; 0047dc7e
    MOVSD ES:EDI,ESI                    ; 0047dc85
    MOVSD ES:EDI,ESI                    ; 0047dc86
    MOVSD ES:EDI,ESI                    ; 0047dc87
    CMP EBX,EAX                         ; 0047dc88
    JZ 0x0047dca9                       ; 0047dc8a
        ;   XREF to: 0047dca9 (CONDITIONAL_JUMP)  ; LAB_0047dca9
    MOV EAX,dword ptr [ESP + 0x188]     ; 0047dc8c
    MOV dword ptr [EBX],EAX             ; 0047dc93 | DAT_01bc0d98
    MOV EAX,dword ptr [ESP + 0x18c]     ; 0047dc95
    MOV dword ptr [EBX + 0x4],EAX       ; 0047dc9c | DAT_01bc0d9c
    MOV EAX,dword ptr [ESP + 0x190]     ; 0047dc9f
    MOV dword ptr [EBX + 0x8],EAX       ; 0047dca6 | DAT_01bc0da0
    PUSH 0x0                            ; 0047dca9
        ;   Label: LAB_0047dca9
    LEA EAX,[ESP + 0xd0]                ; 0047dcab
    PUSH dword ptr [EBP + 0x1c]         ; 0047dcb2 | DAT_01bc0d70
    PUSH EAX                            ; 0047dcb5
    CALL core_spline.cpp_FUN_00583d60   ; 0047dcb6
        ;   XREF to: 00583d60 (UNCONDITIONAL_CALL)  ; void core_spline.cpp_FUN_00583d60(float * out_basis, float t, float tension)
    LEA EDX,[EBP + 0x20]                ; 0047dcbb
    LEA ESI,[EBP + 0x2c]                ; 0047dcbe
    LEA EBX,[EBP + 0x38]                ; 0047dcc1
    ADD ESP,0xc                         ; 0047dcc4
    LEA EAX,[EBP + 0x44]                ; 0047dcc7
    PUSH EAX                            ; 0047dcca | DAT_01bc0d98
    PUSH EBX                            ; 0047dccb | DAT_01bc0d8c
    PUSH ESI                            ; 0047dccc | DAT_01bc0d80
    PUSH EDX                            ; 0047dccd | DAT_01bc0d74
    LEA EAX,[ESP + 0xdc]                ; 0047dcce
    LEA EDI,[ESP + 0x1a4]               ; 0047dcd5
    PUSH EAX                            ; 0047dcdc
    LEA ESI,[ESP + 0x16c]               ; 0047dcdd
    LEA EBX,[EBP + 0x4]                 ; 0047dce4
    CALL core_spline.cpp_FUN_00583f90   ; 0047dce7
        ;   XREF to: 00583f90 (UNCONDITIONAL_CALL)  ; undefined core_spline.cpp_FUN_00583f90()
    LEA ESI,[ESP + 0x16c]               ; 0047dcec
    ADD ESP,0x14                        ; 0047dcf3
    LEA EAX,[ESP + 0x194]               ; 0047dcf6
    MOVSD ES:EDI,ESI                    ; 0047dcfd
    MOVSD ES:EDI,ESI                    ; 0047dcfe
    MOVSD ES:EDI,ESI                    ; 0047dcff
    CMP EBX,EAX                         ; 0047dd00
    JZ 0x0047dd21                       ; 0047dd02
        ;   XREF to: 0047dd21 (CONDITIONAL_JUMP)  ; LAB_0047dd21
    MOV EAX,dword ptr [ESP + 0x194]     ; 0047dd04
    MOV dword ptr [EBX],EAX             ; 0047dd0b | DAT_01bc0d58
    MOV EAX,dword ptr [ESP + 0x198]     ; 0047dd0d
    MOV dword ptr [EBX + 0x4],EAX       ; 0047dd14 | DAT_01bc0d5c
    MOV EAX,dword ptr [ESP + 0x19c]     ; 0047dd17
    MOV dword ptr [EBX + 0x8],EAX       ; 0047dd1e | DAT_01bc0d60
    LEA EAX,[EBP + 0x44]                ; 0047dd21
        ;   Label: LAB_0047dd21
    PUSH EAX                            ; 0047dd24 | DAT_01bc0d98
    LEA EAX,[EBP + 0x38]                ; 0047dd25
    PUSH EAX                            ; 0047dd28 | DAT_01bc0d8c
    LEA EAX,[EBP + 0x2c]                ; 0047dd29
    PUSH EAX                            ; 0047dd2c | DAT_01bc0d80
    LEA EAX,[EBP + 0x20]                ; 0047dd2d
    PUSH EAX                            ; 0047dd30 | DAT_01bc0d74
    LEA EAX,[ESP + 0xdc]                ; 0047dd31
    LEA ESI,[ESP + 0x114]               ; 0047dd38
    PUSH EAX                            ; 0047dd3f
    LEA EDI,[ESP + 0x160]               ; 0047dd40
    LEA EBX,[EBP + 0x10]                ; 0047dd47
    CALL core_spline.cpp_FUN_005841d0   ; 0047dd4a
        ;   XREF to: 005841d0 (UNCONDITIONAL_CALL)  ; undefined core_spline.cpp_FUN_005841d0()
    LEA ESI,[ESP + 0x118]               ; 0047dd4f
    ADD ESP,0x14                        ; 0047dd56
    LEA EAX,[ESP + 0x14c]               ; 0047dd59
    MOVSD ES:EDI,ESI                    ; 0047dd60
    MOVSD ES:EDI,ESI                    ; 0047dd61
    MOVSD ES:EDI,ESI                    ; 0047dd62
    CMP EBX,EAX                         ; 0047dd63
    JZ 0x0047dd84                       ; 0047dd65
        ;   XREF to: 0047dd84 (CONDITIONAL_JUMP)  ; LAB_0047dd84
    MOV EAX,dword ptr [ESP + 0x14c]     ; 0047dd67
    MOV dword ptr [EBX],EAX             ; 0047dd6e | DAT_01bc0d64
    MOV EAX,dword ptr [ESP + 0x150]     ; 0047dd70
    MOV dword ptr [EBX + 0x4],EAX       ; 0047dd77 | DAT_01bc0d68
    MOV EAX,dword ptr [ESP + 0x154]     ; 0047dd7a
    MOV dword ptr [EBX + 0x8],EAX       ; 0047dd81 | DAT_01bc0d6c
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00572ac0 ; 0047dd84
        ;   XREF to: 00572ac0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_00572ac0()
        ;   Label: LAB_0047dd84
    LEA EAX,[EBP + 0x4]                 ; 0047dd89
    PUSH EAX                            ; 0047dd8c | DAT_01bc0d58
    CALL sound_sndmain.cpp_setNextSfxTrackedFloatPosition_FUN_005727e0 ; 0047dd8d
        ;   XREF to: 005727e0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxTrackedFloatPosition_FUN_005727e0(CVector3f * position_source_ptr)
    ADD ESP,0x4                         ; 0047dd92
    LEA EAX,[EBP + 0x10]                ; 0047dd95
    PUSH EAX                            ; 0047dd98 | DAT_01bc0d64
    CALL sound_sndmain.cpp_setNextSfxTrackedVelocity1_FUN_00572880 ; 0047dd99
        ;   XREF to: 00572880 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxTrackedVelocity1_FUN_00572880(CVector3f * velocity_source_ptr)
    ADD ESP,0x4                         ; 0047dd9e
    PUSH dword ptr [ESP + 0x1bc]        ; 0047dda1
    CALL sound_sndmain.cpp_setNextSfxVolume_FUN_005728e0 ; 0047dda8
        ;   XREF to: 005728e0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxVolume_FUN_005728e0(float volume)
    ADD ESP,0x4                         ; 0047ddad
    MOV EDI,dword ptr [ESP + 0x1b8]     ; 0047ddb0
    PUSH EDI                            ; 0047ddb7
    LEA EAX,[ESP + 0x8]                 ; 0047ddb8
    PUSH EAX                            ; 0047ddbc
    MOV EAX,[0x006236b8]                ; 0047ddbd | DAT_006236b8
    PUSH EAX                            ; 0047ddc2
    CALL core_sound.cpp_CSound_findRandomSoundFile_FUN_0057be00 ; 0047ddc3
        ;   XREF to: 0057be00 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_findRandomSoundFile_FUN_0057be00(CSound * this_ptr, char * out_result, char * wildcard_pattern)
    ADD ESP,0xc                         ; 0047ddc8
    LEA EAX,[ESP + 0x4]                 ; 0047ddcb
    PUSH EAX                            ; 0047ddcf
    CALL sound_sndmain.cpp_startSfx_FUN_00572d20 ; 0047ddd0
        ;   XREF to: 00572d20 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_startSfx_FUN_00572d20(char * filename)
    ADD ESP,0x4                         ; 0047ddd5
    MOV dword ptr [EBP],EAX             ; 0047ddd8 | DAT_01bc0d54
    CALL sound_sndmain.cpp_popSfxOptions_FUN_00572b40 ; 0047dddb
        ;   XREF to: 00572b40 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_00572b40()
    MOV EAX,dword ptr [ESP + 0x1b4]     ; 0047dde0
    MOV dword ptr [EBP + 0x50],EAX      ; 0047dde7 | DAT_01bc0da4
    POP EDI                             ; 0047ddea
    ADD ESP,0x1a0                       ; 0047ddeb
    POP EBP                             ; 0047ddf1
    POP ESI                             ; 0047ddf2
    POP EBX                             ; 0047ddf3
    RET                                 ; 0047ddf4

