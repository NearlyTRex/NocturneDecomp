; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004da790(int param_1,float param_2)
;
; Local Variables:
; undefined        Stack[-0x19c]:1  local_19c
; undefined4       Stack[-0x198]:4  local_198
; undefined4       Stack[-0x168]:4  local_168
; undefined4       Stack[-0x164]:4  local_164
; undefined        Stack[-0x160]:1  local_160
; undefined4       Stack[-0x15c]:4  local_15c
; undefined4       Stack[-0x12c]:4  local_12c
; undefined4       Stack[-0x128]:4  local_128
; undefined4       Stack[-0x124]:4  local_124
; undefined4       Stack[-0x120]:4  local_120
; undefined4       Stack[-0x11c]:4  local_11c
; undefined        Stack[-0x118]:1  local_118
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0x104]:4  local_104
; undefined        Stack[-0x100]:1  local_100
; undefined        Stack[-0xf4]:1  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined        Stack[-0xdc]:1  local_dc
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined        Stack[-0xc4]:1  local_c4
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined        Stack[-0x94]:1  local_94
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined        Stack[-0x70]:1  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined        Stack[-0x58]:1  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined        Stack[-0x4c]:1  local_4c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined        Stack[-0x10]:1  local_10
;
; Referenced Globals:
;   undefined1* switchdataD_004da760 = 004db058
;   TerminatedCString s_mob_scream_wav_0058a2f9
;   TerminatedCString s_s_confused_while_walking_0058a309
;   double DOUBLE_0058a339 = 3.14159265350000
;   double DOUBLE_0058a341 = 0.5
;   double DOUBLE_0058a349 = 0.523598775583333
;   double DOUBLE_0058a351 = 2
;   double DOUBLE_0058a359 = 32
;   float FLOAT_005a0918 = 3
;   float FLOAT_005a091c = 30
;   float FLOAT_005a0928 = 20
;   void* PTR_DAT_005ad350 = 0077ad0c
;   undefined4 DAT_005b7650
;   undefined4 DAT_005b96c4
;   undefined4 DAT_005be368
;   ... and 7 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_actor.cpp_normalizeAngleToPi_FUN_0040df00
;   core_actor.cpp_randomChance_FUN_0040dea0
;   core_charactr.cpp_CCharacter_isOnGround_FUN_00425960
;   core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050
;   core_charactr.cpp_CCharacter_pickupObjectNow_FUN_00428f40
;   core_charactr.cpp_CCharacter_preProcess_FUN_004259a0
;   core_charactr.cpp_CCharacter_processMotion_FUN_0042add0
;   core_charactr.cpp_CCharacter_updateCarriedObjects_FUN_00429220
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0
;   core_charactr.cpp_FUN_004259f0
;   core_charactr.cpp_FUN_00428c00
;   core_charactr.cpp_FUN_0042a150
;   ... and 23 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004da790
        ;   Label: FUN_004da790
    PUSH ESI                            ; 004da791
    PUSH EDI                            ; 004da792
    PUSH EBP                            ; 004da793
    MOV EBP,ESP                         ; 004da794
    SUB ESP,0x18c                       ; 004da796
    SUB EBP,0x7a                        ; 004da79c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 004da79f
    PUSH dword ptr [EBP + 0x92]         ; 004da7a5
    PUSH EBX                            ; 004da7ab
    CALL core_charactr.cpp_FUN_004259f0 ; 004da7ac
        ;   XREF to: 004259f0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_004259f0()
    ADD ESP,0x8                         ; 004da7b1
    TEST EAX,EAX                        ; 004da7b4
    JNZ 0x004da7e3                      ; 004da7b6
        ;   XREF to: 004da7e3 (CONDITIONAL_JUMP)  ; LAB_004da7e3
    CMP dword ptr [EBX + 0xbd48],0x0    ; 004da7b8
    JNZ 0x004da7c9                      ; 004da7bf
        ;   XREF to: 004da7c9 (CONDITIONAL_JUMP)  ; LAB_004da7c9
    LEA ESP,[EBP + 0x7a]                ; 004da7c1
        ;   Label: LAB_004da7c1
    POP EBP                             ; 004da7c4
    POP EDI                             ; 004da7c5
    POP ESI                             ; 004da7c6
    POP EBX                             ; 004da7c7
    RET                                 ; 004da7c8
    PUSH EBX                            ; 004da7c9
        ;   Label: LAB_004da7c9
    CALL core_mobster.cpp_CMobster_positionOnVehicle_FUN_004da5a0 ; 004da7ca
        ;   XREF to: 004da5a0 (UNCONDITIONAL_CALL)  ; undefined core_mobster.cpp_CMobster_positionOnVehicle_FUN_004da5a0()
    ADD ESP,0x4                         ; 004da7cf
    PUSH dword ptr [EBP + 0x92]         ; 004da7d2
    PUSH EBX                            ; 004da7d8
    CALL core_charactr.cpp_CCharacter_updateCarriedObjects_FUN_00429220 ; 004da7d9
        ;   XREF to: 00429220 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_updateCarriedObjects_FUN_00429220()
    ADD ESP,0x8                         ; 004da7de
    JMP 0x004da7c1                      ; 004da7e1
        ;   XREF to: 004da7c1 (UNCONDITIONAL_JUMP)  ; LAB_004da7c1
    MOV EAX,dword ptr [EBX + 0xbdf0]    ; 004da7e3
        ;   Label: LAB_004da7e3
    CMP dword ptr [EBX + EAX*0x4 + 0x2290],0x0 ; 004da7e9
    JZ 0x004da955                       ; 004da7f1
        ;   XREF to: 004da955 (CONDITIONAL_JUMP)  ; LAB_004da955
    CMP dword ptr [EBX + 0xb640],0x0    ; 004da7f7
        ;   Label: LAB_004da7f7
    JZ 0x004da80a                       ; 004da7fe
        ;   XREF to: 004da80a (CONDITIONAL_JUMP)  ; LAB_004da80a
    MOV dword ptr [EBX + 0xb644],0x0    ; 004da800
    CMP dword ptr [EBX + 0x2f08],0x0    ; 004da80a
        ;   Label: LAB_004da80a
    JLE 0x004da875                      ; 004da811
        ;   XREF to: 004da875 (CONDITIONAL_JUMP)  ; LAB_004da875
    PUSH 0x0                            ; 004da813
    PUSH 0x1                            ; 004da815
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004da817
    PUSH EBX                            ; 004da81d
    CALL dword ptr [EAX + 0x120]        ; 004da81e
    ADD ESP,0xc                         ; 004da824
    PUSH 0x0                            ; 004da827
    PUSH 0x0                            ; 004da829
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004da82b
    PUSH EBX                            ; 004da831
    CALL dword ptr [EAX + 0x120]        ; 004da832
    ADD ESP,0xc                         ; 004da838
    MOV EAX,dword ptr [EBX + 0xbdbc]    ; 004da83b
    PUSH EAX                            ; 004da841
    CALL sound_sndmain.cpp_killSfx_FUN_00527230 ; 004da842
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_killSfx_FUN_00527230()
    ADD ESP,0x4                         ; 004da847
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004da84a
    PUSH EBX                            ; 004da850
    CALL dword ptr [EAX + 0x104]        ; 004da851
    ADD ESP,0x4                         ; 004da857
    TEST EAX,EAX                        ; 004da85a
    JNZ 0x004da875                      ; 004da85c
        ;   XREF to: 004da875 (CONDITIONAL_JUMP)  ; LAB_004da875
    MOV EDX,dword ptr [EBX + 0xbdc4]    ; 004da85e
    PUSH EDX                            ; 004da864
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00526c50 ; 004da865
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_isSfxPlaying_FUN_00526c50()
    ADD ESP,0x4                         ; 004da86a
    TEST EAX,EAX                        ; 004da86d
    JZ 0x004da997                       ; 004da86f
        ;   XREF to: 004da997 (CONDITIONAL_JUMP)  ; LAB_004da997
    FLD float ptr [EBX + 0xbdf8]        ; 004da875
        ;   Label: LAB_004da875
    FSUB float ptr [EBP + 0x92]         ; 004da87b
    FST float ptr [EBX + 0xbdf8]        ; 004da881
    FLDZ                                ; 004da887
    FCOMPP                              ; 004da889
    FNSTSW AX                           ; 004da88b
    SAHF                                ; 004da88d
    JBE 0x004da89a                      ; 004da88e
        ;   XREF to: 004da89a (CONDITIONAL_JUMP)  ; LAB_004da89a
    MOV dword ptr [EBX + 0xbdf8],0x0    ; 004da890
    FLD float ptr [EBX + 0xbd3c]        ; 004da89a
        ;   Label: LAB_004da89a
    FSUB float ptr [EBP + 0x92]         ; 004da8a0
    FST float ptr [EBX + 0xbd3c]        ; 004da8a6
    FLDZ                                ; 004da8ac
    FCOMPP                              ; 004da8ae
    FNSTSW AX                           ; 004da8b0
    SAHF                                ; 004da8b2
    JBE 0x004da8bf                      ; 004da8b3
        ;   XREF to: 004da8bf (CONDITIONAL_JUMP)  ; LAB_004da8bf
    MOV dword ptr [EBX + 0xbd3c],0x0    ; 004da8b5
    MOV EAX,dword ptr [EBX + 0xbdd4]    ; 004da8bf
        ;   Label: LAB_004da8bf
    MOV ESI,dword ptr [EBX + EAX*0x4 + 0x2290] ; 004da8c5
    TEST ESI,ESI                        ; 004da8cc
    JZ 0x004da9cb                       ; 004da8ce
        ;   XREF to: 004da9cb (CONDITIONAL_JUMP)  ; LAB_004da9cb
    MOV EAX,dword ptr [EBX + 0xbdcc]    ; 004da8d4
        ;   Label: LAB_004da8d4
    MOV EDI,dword ptr [EBX + EAX*0x4 + 0x2290] ; 004da8da
    TEST EDI,EDI                        ; 004da8e1
    JZ 0x004da9e3                       ; 004da8e3
        ;   XREF to: 004da9e3 (CONDITIONAL_JUMP)  ; LAB_004da9e3
    CMP dword ptr [EBX + 0xbd50],0x0    ; 004da8e9
        ;   Label: LAB_004da8e9
    JZ 0x004da9fa                       ; 004da8f0
        ;   XREF to: 004da9fa (CONDITIONAL_JUMP)  ; LAB_004da9fa
    LEA EAX,[EBX + 0x23a4]              ; 004da8f6
        ;   Label: LAB_004da8f6
    MOV dword ptr [EAX + 0x8],0x0       ; 004da8fc
    FLD float ptr [EBP + 0x92]          ; 004da903
    MOV EDX,dword ptr [EAX + 0x8]       ; 004da909
    MOV dword ptr [EAX + 0x4],EDX       ; 004da90c
    MOV EDX,dword ptr [EAX + 0x4]       ; 004da90f
    MOV dword ptr [EAX],EDX             ; 004da912
    FMUL float ptr [EBX + 0xbc8c]       ; 004da914
    LEA ESI,[EBX + 0x150]               ; 004da91a
    FSTP float ptr [EBP + 0x52]         ; 004da920
    FLD float ptr [EBP + 0x52]          ; 004da923
        ;   Label: LAB_004da923
    FLDZ                                ; 004da926
    FCOMPP                              ; 004da928
    FNSTSW AX                           ; 004da92a
    SAHF                                ; 004da92c
    JNC 0x004daa5b                      ; 004da92d
        ;   XREF to: 004daa5b (CONDITIONAL_JUMP)  ; LAB_004daa5b
    LEA EAX,[EBP + 0x52]                ; 004da933
    PUSH EAX                            ; 004da936
    PUSH ESI                            ; 004da937
    CALL core_motion.cpp_CMotionController_advance_FUN_004e11c0 ; 004da938
        ;   XREF to: 004e11c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_advance_FUN_004e11c0()
    ADD ESP,0x8                         ; 004da93d
    CMP EAX,0x64                        ; 004da940
    JZ 0x004daa27                       ; 004da943
        ;   XREF to: 004daa27 (CONDITIONAL_JUMP)  ; LAB_004daa27
    PUSH EAX                            ; 004da949
    PUSH EBX                            ; 004da94a
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042add0 ; 004da94b
        ;   XREF to: 0042add0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_processMotion_FUN_0042add0()
    ADD ESP,0x8                         ; 004da950
    JMP 0x004da923                      ; 004da953
        ;   XREF to: 004da923 (UNCONDITIONAL_JUMP)  ; LAB_004da923
    LEA EAX,[EBP + 0xfffffeee]          ; 004da955
        ;   Label: LAB_004da955
    PUSH EAX                            ; 004da95b
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0 ; 004da95c
        ;   XREF to: 00423ed0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0()
    MOV ECX,0x4479f99a                  ; 004da961
    ADD ESP,0x4                         ; 004da966
    LEA EAX,[EBP + 0xfffffeee]          ; 004da969
    MOV dword ptr [EBP + 0xffffff22],EBX ; 004da96f
    PUSH EAX                            ; 004da975
    MOV dword ptr [EBP + 0xffffff26],EBX ; 004da976
    MOV dword ptr [EBP + 0xfffffef2],ECX ; 004da97c
    PUSH EBX                            ; 004da982
    MOV EDX,dword ptr [EBX + 0x14c]     ; 004da983
    CALL dword ptr [EDX + 0x100]        ; 004da989
    ADD ESP,0x8                         ; 004da98f
    JMP 0x004da7f7                      ; 004da992
        ;   XREF to: 004da7f7 (UNCONDITIONAL_JUMP)  ; LAB_004da7f7
    MOV ECX,dword ptr [EBX + 0xbdb8]    ; 004da997
        ;   Label: LAB_004da997
    PUSH ECX                            ; 004da99d
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00526c50 ; 004da99e
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_isSfxPlaying_FUN_00526c50()
    ADD ESP,0x4                         ; 004da9a3
    TEST EAX,EAX                        ; 004da9a6
    JNZ 0x004da875                      ; 004da9a8
        ;   XREF to: 004da875 (CONDITIONAL_JUMP)  ; LAB_004da875
    PUSH 0x58a2f9                       ; 004da9ae | = "mob-scream?.wav"
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004da9b3
    PUSH EBX                            ; 004da9b9
    CALL dword ptr [EAX + 0x24]         ; 004da9ba
    ADD ESP,0x8                         ; 004da9bd
    MOV dword ptr [EBX + 0xbdc4],EAX    ; 004da9c0
    JMP 0x004da875                      ; 004da9c6
        ;   XREF to: 004da875 (UNCONDITIONAL_JUMP)  ; LAB_004da875
    PUSH ESI                            ; 004da9cb
        ;   Label: LAB_004da9cb
    PUSH 0x1                            ; 004da9cc
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004da9ce
    PUSH EBX                            ; 004da9d4
    CALL dword ptr [EAX + 0x120]        ; 004da9d5
    ADD ESP,0xc                         ; 004da9db
    JMP 0x004da8d4                      ; 004da9de
        ;   XREF to: 004da8d4 (UNCONDITIONAL_JUMP)  ; LAB_004da8d4
    PUSH EDI                            ; 004da9e3
        ;   Label: LAB_004da9e3
    PUSH EDI                            ; 004da9e4
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004da9e5
    PUSH EBX                            ; 004da9eb
    CALL dword ptr [EAX + 0x120]        ; 004da9ec
    ADD ESP,0xc                         ; 004da9f2
    JMP 0x004da8e9                      ; 004da9f5
        ;   XREF to: 004da8e9 (UNCONDITIONAL_JUMP)  ; LAB_004da8e9
    LEA EAX,[EBX + 0xbd54]              ; 004da9fa
        ;   Label: LAB_004da9fa
    PUSH EAX                            ; 004daa00
    MOV EDX,dword ptr [0x005b7650]      ; 004daa01 | DAT_005b7650
    PUSH EDX                            ; 004daa07
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30 ; 004daa08
        ;   XREF to: 0047dc30 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30()
    ADD ESP,0x8                         ; 004daa0d
    TEST EAX,EAX                        ; 004daa10
    JZ 0x004da8f6                       ; 004daa12
        ;   XREF to: 004da8f6 (CONDITIONAL_JUMP)  ; LAB_004da8f6
    MOV dword ptr [EBX + 0xbd50],0x1    ; 004daa18
    JMP 0x004da8f6                      ; 004daa22
        ;   XREF to: 004da8f6 (UNCONDITIONAL_JUMP)  ; LAB_004da8f6
    MOV EDX,dword ptr [EBX + 0xbd30]    ; 004daa27
        ;   Label: LAB_004daa27
    TEST EDX,EDX                        ; 004daa2d
    JZ 0x004da923                       ; 004daa2f
        ;   XREF to: 004da923 (CONDITIONAL_JUMP)  ; LAB_004da923
    MOV EAX,EDX                         ; 004daa35
    PUSH 0x3e4ccccd                     ; 004daa37
    PUSH EAX                            ; 004daa3c
    MOV EDX,0x1                         ; 004daa3d
    PUSH EDX                            ; 004daa42
    PUSH EBX                            ; 004daa43
    MOV dword ptr [EBX + 0xbd30],0x0    ; 004daa44
    CALL core_charactr.cpp_CCharacter_pickupObjectNow_FUN_00428f40 ; 004daa4e
        ;   XREF to: 00428f40 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_pickupObjectNow_FUN_00428f40()
    ADD ESP,0x10                        ; 004daa53
    JMP 0x004da923                      ; 004daa56
        ;   XREF to: 004da923 (UNCONDITIONAL_JUMP)  ; LAB_004da923
    FLD float ptr [EBX + 0xbc8c]        ; 004daa5b
        ;   Label: LAB_004daa5b
    FLD float ptr [EBP + 0x92]          ; 004daa61
    FMUL double ptr [0x0058a339]        ; 004daa67 | DOUBLE_0058a339
    FMULP                               ; 004daa6d
    FLD float ptr [EBX + 0x23ac]        ; 004daa6f
    PUSH ESI                            ; 004daa75
    FSTP float ptr [EBX + 0x242c]       ; 004daa76
    FSTP float ptr [EBX + 0x2430]       ; 004daa7c
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 004daa82
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660()
    ADD ESP,0x4                         ; 004daa87
    PUSH dword ptr [EBP + 0x92]         ; 004daa8a
    PUSH EBX                            ; 004daa90
    MOV EDI,dword ptr [EAX + 0x24]      ; 004daa91
    CALL core_charactr.cpp_FUN_00428c00 ; 004daa94
        ;   XREF to: 00428c00 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00428c00()
    ADD ESP,0x8                         ; 004daa99
    TEST EAX,EAX                        ; 004daa9c
    JZ 0x004db6c6                       ; 004daa9e
        ;   XREF to: 004db6c6 (CONDITIONAL_JUMP)  ; LAB_004db6c6
    MOV EAX,dword ptr [EBX + 0x25a8]    ; 004daaa4
    CMP EAX,0x2                         ; 004daaaa
    JNC 0x004dacf1                      ; 004daaad
        ;   XREF to: 004dacf1 (CONDITIONAL_JUMP)  ; LAB_004dacf1
    CMP EAX,0x1                         ; 004daab3
    JNZ 0x004dacfc                      ; 004daab6
        ;   XREF to: 004dacfc (CONDITIONAL_JUMP)  ; LAB_004dacfc
    PUSH 0x1                            ; 004daabc
        ;   Label: LAB_004daabc
    PUSH 0x1                            ; 004daabe
    LEA EAX,[EBX + 0x150]               ; 004daac0
        ;   Label: LAB_004daac0
    PUSH EAX                            ; 004daac6
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004daac7
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 004daacc
        ;   Label: LAB_004daacc
    LEA EAX,[EBX + 0x23a4]              ; 004daacf
    MOV dword ptr [EAX + 0x8],0x0       ; 004daad5
    MOV EDX,dword ptr [EAX + 0x8]       ; 004daadc
    MOV dword ptr [EAX + 0x4],EDX       ; 004daadf
    MOV EDX,dword ptr [EAX + 0x4]       ; 004daae2
    MOV dword ptr [EAX],EDX             ; 004daae5
    FLD float ptr [EBX + 0xbca0]        ; 004daae7
        ;   Label: caseD_3
    FLDZ                                ; 004daaed
    FCOMPP                              ; 004daaef
    FNSTSW AX                           ; 004daaf1
    SAHF                                ; 004daaf3
    JNC 0x004dab08                      ; 004daaf4
        ;   XREF to: 004dab08 (CONDITIONAL_JUMP)  ; LAB_004dab08
    FLD float ptr [EBX + 0xbca0]        ; 004daaf6
    FSUB float ptr [EBP + 0x92]         ; 004daafc
    FSTP float ptr [EBX + 0xbca0]       ; 004dab02
    CMP dword ptr [EBX + 0xbd48],0x0    ; 004dab08
        ;   Label: LAB_004dab08
    JNZ 0x004db6d6                      ; 004dab0f
        ;   XREF to: 004db6d6 (CONDITIONAL_JUMP)  ; LAB_004db6d6
    PUSH EBX                            ; 004dab15
    CALL core_charactr.cpp_CCharacter_isOnGround_FUN_00425960 ; 004dab16
        ;   XREF to: 00425960 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_isOnGround_FUN_00425960()
    ADD ESP,0x4                         ; 004dab1b
    TEST EAX,EAX                        ; 004dab1e
    JZ 0x004dac21                       ; 004dab20
        ;   XREF to: 004dac21 (CONDITIONAL_JUMP)  ; LAB_004dac21
    MOV EDI,dword ptr [EBX + 0xbca4]    ; 004dab26
    TEST EDI,EDI                        ; 004dab2c
    JZ 0x004dab5a                       ; 004dab2e
        ;   XREF to: 004dab5a (CONDITIONAL_JUMP)  ; LAB_004dab5a
    PUSH EDI                            ; 004dab30
    MOV EDX,dword ptr [EDI + 0x14c]     ; 004dab31
    CALL dword ptr [EDX + 0xec]         ; 004dab37
    ADD ESP,0x4                         ; 004dab3d
    CMP EAX,EBX                         ; 004dab40
    JNZ 0x004dab5a                      ; 004dab42
        ;   XREF to: 004dab5a (CONDITIONAL_JUMP)  ; LAB_004dab5a
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 004dab44
    PUSH EAX                            ; 004dab4a
    MOV EDX,dword ptr [0x005be368]      ; 004dab4b | DAT_005be368
    PUSH EDX                            ; 004dab51 | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00511780 ; 004dab52
        ;   XREF to: 00511780 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_ignore_FUN_00511780()
    ADD ESP,0x8                         ; 004dab57
    FLD float ptr [EBP + 0x92]          ; 004dab5a
        ;   Label: LAB_004dab5a
    FLD ST0                             ; 004dab60
    FMUL double ptr [0x0058a359]        ; 004dab62 | DOUBLE_0058a359
    FLD float ptr [EBX + 0x2424]        ; 004dab68
    FXCH                                ; 004dab6e
    FSUBR ST0,ST1                       ; 004dab70
    LEA ESI,[EBX + 0x2420]              ; 004dab72
    FSTP ST1                            ; 004dab78
    FSTP float ptr [EBX + 0x2424]       ; 004dab7a
    FLD float ptr [ESI]                 ; 004dab80
    FMUL ST1                            ; 004dab82
    FSTP float ptr [EBP + -0x22]        ; 004dab84
    FLD float ptr [ESI + 0x4]           ; 004dab87
    FMUL ST1                            ; 004dab8a
    LEA EAX,[EBX + 0x2414]              ; 004dab8c
    FSTP float ptr [EBP + -0x1e]        ; 004dab92
    FMUL float ptr [ESI + 0x8]          ; 004dab95
    LEA EDX,[EBX + 0x23a4]              ; 004dab98
    FLD float ptr [EBP + -0x22]         ; 004dab9e
    FXCH                                ; 004daba1
    FSTP float ptr [EBP + -0x1a]        ; 004daba3
    FADD float ptr [EAX]                ; 004daba6
    FLD float ptr [EBP + -0x1e]         ; 004daba8
    FXCH                                ; 004dabab
    FSTP float ptr [EBP + 0xffffff66]   ; 004dabad
    FADD float ptr [EAX + 0x4]          ; 004dabb3
    FLD float ptr [EBP + -0x1a]         ; 004dabb6
    FXCH                                ; 004dabb9
    FSTP float ptr [EBP + 0xffffff6a]   ; 004dabbb
    FADD float ptr [EAX + 0x8]          ; 004dabc1
    FLD float ptr [EBP + 0xffffff66]    ; 004dabc4
    FXCH                                ; 004dabca
    FSTP float ptr [EBP + 0xffffff6e]   ; 004dabcc
    FADD float ptr [EDX]                ; 004dabd2
    FLD float ptr [EBP + 0xffffff6a]    ; 004dabd4
    FXCH                                ; 004dabda
    FSTP float ptr [EBP + 0xe]          ; 004dabdc
    FADD float ptr [EDX + 0x4]          ; 004dabdf
    FLD float ptr [EBP + 0xffffff6e]    ; 004dabe2
    FXCH                                ; 004dabe8
    FSTP float ptr [EBP + 0x12]         ; 004dabea
    FADD float ptr [EDX + 0x8]          ; 004dabed
    FSTP float ptr [EBP + 0x16]         ; 004dabf0
    MOV dword ptr [EAX + 0x8],0x0       ; 004dabf3
    MOV ECX,dword ptr [EAX + 0x8]       ; 004dabfa
    MOV dword ptr [EAX + 0x4],ECX       ; 004dabfd
    MOV ECX,dword ptr [EAX + 0x4]       ; 004dac00
    MOV dword ptr [EAX],ECX             ; 004dac03
    MOV dword ptr [EDX + 0x8],0x0       ; 004dac05
    LEA EAX,[EBP + 0xe]                 ; 004dac0c
    FLD float ptr [EDX + 0x8]           ; 004dac0f
    PUSH EAX                            ; 004dac12
    FST float ptr [EDX + 0x4]           ; 004dac13
    PUSH EBX                            ; 004dac16
    FSTP float ptr [EDX]                ; 004dac17
    CALL core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050 ; 004dac19
        ;   XREF to: 00425050 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050()
    ADD ESP,0x8                         ; 004dac1e
    MOV ECX,dword ptr [0x02ddf9a8]      ; 004dac21 | DAT_02ddf9a8
        ;   Label: LAB_004dac21
    PUSH ECX                            ; 004dac27
    MOV ESI,dword ptr [EBX + 0x24f0]    ; 004dac28
    PUSH ESI                            ; 004dac2e
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 004dac2f
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    ADD ESP,0x8                         ; 004dac34
    TEST EAX,EAX                        ; 004dac37
    JZ 0x004dac4e                       ; 004dac39
        ;   XREF to: 004dac4e (CONDITIONAL_JUMP)  ; LAB_004dac4e
    PUSH dword ptr [EBP + 0x92]         ; 004dac3b
    MOV EDX,dword ptr [EAX + 0x14c]     ; 004dac41
    PUSH EAX                            ; 004dac47
    CALL dword ptr [EDX + 0x4]          ; 004dac48
    ADD ESP,0x8                         ; 004dac4b
    MOV EDI,dword ptr [0x02ddf9a8]      ; 004dac4e | DAT_02ddf9a8
        ;   Label: LAB_004dac4e
    PUSH EDI                            ; 004dac54
    MOV EAX,dword ptr [EBX + 0x24ac]    ; 004dac55
    PUSH EAX                            ; 004dac5b
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 004dac5c
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    ADD ESP,0x8                         ; 004dac61
    TEST EAX,EAX                        ; 004dac64
    JZ 0x004dac7b                       ; 004dac66
        ;   XREF to: 004dac7b (CONDITIONAL_JUMP)  ; LAB_004dac7b
    PUSH dword ptr [EBP + 0x92]         ; 004dac68
    MOV EDX,dword ptr [EAX + 0x14c]     ; 004dac6e
    PUSH EAX                            ; 004dac74
    CALL dword ptr [EDX + 0x4]          ; 004dac75
    ADD ESP,0x8                         ; 004dac78
    PUSH EBX                            ; 004dac7b
        ;   Label: LAB_004dac7b
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_004259a0 ; 004dac7c
        ;   XREF to: 004259a0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_preProcess_FUN_004259a0()
    ADD ESP,0x4                         ; 004dac81
    LEA EAX,[EBX + 0x150]               ; 004dac84
    PUSH EAX                            ; 004dac8a
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0 ; 004dac8b
        ;   XREF to: 0051b8a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0()
    ADD ESP,0x4                         ; 004dac90
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004dac93
    PUSH EBX                            ; 004dac99
    CALL dword ptr [EAX + 0x104]        ; 004dac9a
    ADD ESP,0x4                         ; 004daca0
    TEST EAX,EAX                        ; 004daca3
    JNZ 0x004dacb6                      ; 004daca5
        ;   XREF to: 004dacb6 (CONDITIONAL_JUMP)  ; LAB_004dacb6
    PUSH dword ptr [EBP + 0x92]         ; 004daca7
    PUSH EBX                            ; 004dacad
    CALL core_mobster.cpp_CMobster_aimTommyGun_FUN_004db6f0 ; 004dacae
        ;   XREF to: 004db6f0 (UNCONDITIONAL_CALL)  ; undefined core_mobster.cpp_CMobster_aimTommyGun_FUN_004db6f0()
    ADD ESP,0x8                         ; 004dacb3
    PUSH dword ptr [EBP + 0x92]         ; 004dacb6
        ;   Label: LAB_004dacb6
    PUSH EBX                            ; 004dacbc
    CALL core_charactr.cpp_FUN_0042a150 ; 004dacbd
        ;   XREF to: 0042a150 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042a150()
    ADD ESP,0x8                         ; 004dacc2
    LEA ESP,[EBP + 0x7a]                ; 004dacc5
    POP EBP                             ; 004dacc8
    POP EDI                             ; 004dacc9
    POP ESI                             ; 004dacca
    POP EBX                             ; 004daccb
    RET                                 ; 004daccc
    PUSH 0x1                            ; 004daccd
        ;   Label: LAB_004daccd
    PUSH 0x0                            ; 004daccf
    PUSH ESI                            ; 004dacd1
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004dacd2
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 004dacd7
    PUSH EBX                            ; 004dacda
    PUSH 0x58a309                       ; 004dacdb | = "%s confused while walking to scriptDe..."
    MOV ECX,dword ptr [0x005ad350]      ; 004dace0 | PTR_DAT_005ad350
    PUSH ECX                            ; 004dace6 | DAT_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 004dace7
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_CConsole_printf_FUN_0043ac60()
    JMP 0x004daacc                      ; 004dacec
        ;   XREF to: 004daacc (UNCONDITIONAL_JUMP)  ; LAB_004daacc
    JBE 0x004daabc                      ; 004dacf1
        ;   XREF to: 004daabc (CONDITIONAL_JUMP)  ; LAB_004daabc
        ;   Label: LAB_004dacf1
    CMP EAX,0x3                         ; 004dacf7
    JZ 0x004daccd                       ; 004dacfa
        ;   XREF to: 004daccd (CONDITIONAL_JUMP)  ; LAB_004daccd
    PUSH 0x1                            ; 004dacfc
        ;   Label: LAB_004dacfc
    PUSH 0x0                            ; 004dacfe
    JMP 0x004daac0                      ; 004dad00
        ;   XREF to: 004daac0 (UNCONDITIONAL_JUMP)  ; LAB_004daac0
    LEA EAX,[EBP + 0xffffff2a]          ; 004dad05
        ;   Label: caseD_9
    PUSH EAX                            ; 004dad0b
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0 ; 004dad0c
        ;   XREF to: 00423ed0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0()
    ADD ESP,0x4                         ; 004dad11
    PUSH 0x41700000                     ; 004dad14
    PUSH 0x40e00000                     ; 004dad19
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 004dad1e
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [EBP + 0x76],EAX      ; 004dad23
    MOV dword ptr [EBP + 0xffffff5e],EBX ; 004dad26
    MOV dword ptr [EBP + 0xffffff62],EBX ; 004dad2c
    MOV EAX,dword ptr [EBP + 0x76]      ; 004dad32
    MOV dword ptr [EBP + 0xffffff2e],EAX ; 004dad35
    MOV EAX,dword ptr [EBX + 0xbdcc]    ; 004dad3b
    MOV ESI,dword ptr [EBX + EAX*0x4 + 0x2290] ; 004dad41
    ADD ESP,0x8                         ; 004dad48
    TEST ESI,ESI                        ; 004dad4b
    JZ 0x004dada4                       ; 004dad4d
        ;   XREF to: 004dada4 (CONDITIONAL_JUMP)  ; LAB_004dada4
    LEA EAX,[EBP + 0xffffff2a]          ; 004dad4f
    MOV EDX,dword ptr [0x01ccdbac]      ; 004dad55 | DAT_01ccdbac
    PUSH EAX                            ; 004dad5b
    LEA EAX,[EDX*0x4 + 0x0]             ; 004dad5c
    SUB EAX,EDX                         ; 004dad63
    MOV EDX,EAX                         ; 004dad65
    SHL EDX,0x4                         ; 004dad67
    LEA EAX,[EBX + 0xfd0]               ; 004dad6a
    ADD EAX,EDX                         ; 004dad70
    PUSH 0x3ecccccd                     ; 004dad72
    PUSH EAX                            ; 004dad77
    PUSH 0x2dd1184                      ; 004dad78 | DAT_02dd1184
    LEA EAX,[EBP + 0xffffff72]          ; 004dad7d
    PUSH EAX                            ; 004dad83
    CALL core_xform.cpp_transformVector3x4_FUN_0055a8b0 ; 004dad84
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_transformVector3x4_FUN_0055a8b0()
    ADD ESP,0xc                         ; 004dad89
    PUSH EAX                            ; 004dad8c
    LEA EAX,[EBP + -0x76]               ; 004dad8d
    PUSH EAX                            ; 004dad90
    PUSH EBX                            ; 004dad91
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 004dad92
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    ADD ESP,0xc                         ; 004dad97
    PUSH EAX                            ; 004dad9a
    PUSH EBX                            ; 004dad9b
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_004798e0 ; 004dad9c
        ;   XREF to: 004798e0 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_CEnemy_testAttackRadius_FUN_004798e0()
    ADD ESP,0x10                        ; 004dada1
    PUSH 0x41700000                     ; 004dada4
        ;   Label: LAB_004dada4
    PUSH 0x40e00000                     ; 004dada9
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 004dadae
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [EBP + 0x76],EAX      ; 004dadb3
    MOV EAX,dword ptr [EBP + 0x76]      ; 004dadb6
    MOV dword ptr [EBP + 0xffffff2e],EAX ; 004dadb9
    MOV EAX,dword ptr [EBX + 0xbdd4]    ; 004dadbf
    MOV EDI,dword ptr [EBX + EAX*0x4 + 0x2290] ; 004dadc5
    ADD ESP,0x8                         ; 004dadcc
    TEST EDI,EDI                        ; 004dadcf
    JZ 0x004daae7                       ; 004dadd1
        ;   XREF to: 004daae7 (CONDITIONAL_JUMP)  ; caseD_7
    LEA EAX,[EBP + 0xffffff2a]          ; 004dadd7
    MOV EDX,dword ptr [0x01ccdbb0]      ; 004daddd | DAT_01ccdbb0
    PUSH EAX                            ; 004dade3
    LEA EAX,[EDX*0x4 + 0x0]             ; 004dade4
    SUB EAX,EDX                         ; 004dadeb
    MOV EDX,EAX                         ; 004daded
    SHL EDX,0x4                         ; 004dadef
    LEA EAX,[EBX + 0xfd0]               ; 004dadf2
    ADD EAX,EDX                         ; 004dadf8
    PUSH 0x3ecccccd                     ; 004dadfa
    PUSH EAX                            ; 004dadff
    PUSH 0x2dd1184                      ; 004dae00 | DAT_02dd1184
    LEA EAX,[EBP + -0xa]                ; 004dae05
    PUSH EAX                            ; 004dae08
    CALL core_xform.cpp_transformVector3x4_FUN_0055a8b0 ; 004dae09
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_transformVector3x4_FUN_0055a8b0()
    ADD ESP,0xc                         ; 004dae0e
    PUSH EAX                            ; 004dae11
    LEA EAX,[EBP + -0x52]               ; 004dae12
    PUSH EAX                            ; 004dae15
    PUSH EBX                            ; 004dae16
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 004dae17
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    ADD ESP,0xc                         ; 004dae1c
    PUSH EAX                            ; 004dae1f
    PUSH EBX                            ; 004dae20
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_004798e0 ; 004dae21
        ;   XREF to: 004798e0 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_CEnemy_testAttackRadius_FUN_004798e0()
    ADD ESP,0x10                        ; 004dae26
    JMP 0x004daae7                      ; 004dae29
        ;   XREF to: 004daae7 (UNCONDITIONAL_JUMP)  ; caseD_7
    FLD float ptr [EBX + 0xbd3c]        ; 004dae2e
        ;   Label: caseD_a
    FLDZ                                ; 004dae34
    FCOMPP                              ; 004dae36
    FNSTSW AX                           ; 004dae38
    SAHF                                ; 004dae3a
    JC 0x004daae7                       ; 004dae3b
        ;   XREF to: 004daae7 (CONDITIONAL_JUMP)  ; caseD_7
    PUSH EBX                            ; 004dae41
    CALL core_mobster.cpp_CMobster_startFiringAttack_FUN_004dc110 ; 004dae42
        ;   XREF to: 004dc110 (UNCONDITIONAL_CALL)  ; undefined core_mobster.cpp_CMobster_startFiringAttack_FUN_004dc110()
    ADD ESP,0x4                         ; 004dae47
    JMP 0x004daae7                      ; 004dae4a
        ;   XREF to: 004daae7 (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH dword ptr [EBP + 0x92]         ; 004dae4f
        ;   Label: caseD_2
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004dae55
    PUSH EBX                            ; 004dae5b
    CALL dword ptr [EAX + 0x13c]        ; 004dae5c
    MOV ESI,dword ptr [EBX + 0xbca4]    ; 004dae62
    ADD ESP,0x8                         ; 004dae68
    TEST ESI,ESI                        ; 004dae6b
    JNZ 0x004daee7                      ; 004dae6d
        ;   XREF to: 004daee7 (CONDITIONAL_JUMP)  ; LAB_004daee7
    FLD float ptr [EBX + 0xbdf4]        ; 004dae6f
        ;   Label: LAB_004dae6f
    FCOMP double ptr [0x0058a341]       ; 004dae75 | DOUBLE_0058a341
    FNSTSW AX                           ; 004dae7b
    SAHF                                ; 004dae7d
    JNC 0x004dafd6                      ; 004dae7e
        ;   XREF to: 004dafd6 (CONDITIONAL_JUMP)  ; LAB_004dafd6
    CMP dword ptr [EBX + 0xbd50],0x0    ; 004dae84
        ;   Label: LAB_004dae84
    JZ 0x004dafee                       ; 004dae8b
        ;   XREF to: 004dafee (CONDITIONAL_JUMP)  ; LAB_004dafee
    PUSH 0x40a00000                     ; 004dae91
    PUSH 0x40800000                     ; 004dae96
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 004dae9b
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
        ;   Label: LAB_004dae9b
    MOV dword ptr [EBP + 0x76],EAX      ; 004daea0
    ADD ESP,0x8                         ; 004daea3
    MOV EAX,dword ptr [EBP + 0x76]      ; 004daea6
    MOV dword ptr [EBX + 0xbdf8],EAX    ; 004daea9
    PUSH 0x1                            ; 004daeaf
    PUSH 0x0                            ; 004daeb1
    LEA EAX,[EBX + 0x150]               ; 004daeb3
    PUSH EAX                            ; 004daeb9
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004daeba
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 004daebf
    PUSH 0x3e99999a                     ; 004daec2
    CALL core_actor.cpp_randomChance_FUN_0040dea0 ; 004daec7
        ;   XREF to: 0040dea0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_randomChance_FUN_0040dea0()
    ADD ESP,0x4                         ; 004daecc
    TEST EAX,EAX                        ; 004daecf
    JZ 0x004daae7                       ; 004daed1
        ;   XREF to: 004daae7 (CONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x3                            ; 004daed7
    PUSH EBX                            ; 004daed9
    CALL core_mobster.cpp_CMobster_playTaunt_FUN_004dc940 ; 004daeda
        ;   XREF to: 004dc940 (UNCONDITIONAL_CALL)  ; undefined core_mobster.cpp_CMobster_playTaunt_FUN_004dc940()
    ADD ESP,0x8                         ; 004daedf
    JMP 0x004daae7                      ; 004daee2
        ;   XREF to: 004daae7 (UNCONDITIONAL_JUMP)  ; caseD_7
    MOV EDI,dword ptr [0x02ddf9a8]      ; 004daee7 | DAT_02ddf9a8
        ;   Label: LAB_004daee7
    PUSH EDI                            ; 004daeed
    MOV EAX,dword ptr [EBX + 0x24f0]    ; 004daeee
    PUSH EAX                            ; 004daef4
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 004daef5
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    MOV ESI,EAX                         ; 004daefa
    ADD ESP,0x8                         ; 004daefc
    MOV EDI,EAX                         ; 004daeff
    TEST EAX,EAX                        ; 004daf01
    JZ 0x004daf54                       ; 004daf03
        ;   XREF to: 004daf54 (CONDITIONAL_JUMP)  ; LAB_004daf54
    MOV EDX,dword ptr [0x005be368]      ; 004daf05 | DAT_005be368
    PUSH EDX                            ; 004daf0b | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00511750 ; 004daf0c
        ;   XREF to: 00511750 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_init_FUN_00511750()
    MOV EAX,dword ptr [ESI + 0x560]     ; 004daf11
    ADD ESP,0x4                         ; 004daf17
    MOV dword ptr [EBP + 0x56],EAX      ; 004daf1a
    PUSH ESI                            ; 004daf1d
    MOV EAX,dword ptr [ESI + 0x14c]     ; 004daf1e
    MOV dword ptr [ESI + 0x560],0x64    ; 004daf24
    CALL dword ptr [EAX + 0xe0]         ; 004daf2e
    ADD ESP,0x4                         ; 004daf34
    TEST EAX,EAX                        ; 004daf37
    JZ 0x004daf4b                       ; 004daf39
        ;   XREF to: 004daf4b (CONDITIONAL_JUMP)  ; LAB_004daf4b
    PUSH ESI                            ; 004daf3b
    MOV EAX,dword ptr [ESI + 0x14c]     ; 004daf3c
    CALL dword ptr [EAX + 0xdc]         ; 004daf42
    ADD ESP,0x4                         ; 004daf48
    MOV EAX,dword ptr [EBP + 0x56]      ; 004daf4b
        ;   Label: LAB_004daf4b
    MOV dword ptr [EDI + 0x560],EAX     ; 004daf4e
    MOV ECX,dword ptr [0x02ddf9a8]      ; 004daf54 | DAT_02ddf9a8
        ;   Label: LAB_004daf54
    PUSH ECX                            ; 004daf5a
    MOV ESI,dword ptr [EBX + 0x24ac]    ; 004daf5b
    PUSH ESI                            ; 004daf61
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 004daf62
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    MOV ESI,EAX                         ; 004daf67
    ADD ESP,0x8                         ; 004daf69
    MOV dword ptr [EBP + 0x5e],EAX      ; 004daf6c
    TEST EAX,EAX                        ; 004daf6f
    JZ 0x004dae6f                       ; 004daf71
        ;   XREF to: 004dae6f (CONDITIONAL_JUMP)  ; LAB_004dae6f
    MOV EDI,dword ptr [0x005be368]      ; 004daf77 | DAT_005be368
    PUSH EDI                            ; 004daf7d | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00511750 ; 004daf7e
        ;   XREF to: 00511750 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_init_FUN_00511750()
    ADD ESP,0x4                         ; 004daf83
    MOV EAX,dword ptr [ESI + 0x14c]     ; 004daf86
    PUSH ESI                            ; 004daf8c
    MOV EDI,dword ptr [ESI + 0x560]     ; 004daf8d
    MOV dword ptr [ESI + 0x560],0x64    ; 004daf93
    CALL dword ptr [EAX + 0xe0]         ; 004daf9d
    ADD ESP,0x4                         ; 004dafa3
    TEST EAX,EAX                        ; 004dafa6
    JNZ 0x004dafb8                      ; 004dafa8
        ;   XREF to: 004dafb8 (CONDITIONAL_JUMP)  ; LAB_004dafb8
    MOV EAX,dword ptr [EBP + 0x5e]      ; 004dafaa
    MOV dword ptr [EAX + 0x560],EDI     ; 004dafad
    JMP 0x004dae6f                      ; 004dafb3
        ;   XREF to: 004dae6f (UNCONDITIONAL_JUMP)  ; LAB_004dae6f
    PUSH ESI                            ; 004dafb8
        ;   Label: LAB_004dafb8
    MOV EAX,dword ptr [ESI + 0x14c]     ; 004dafb9
    CALL dword ptr [EAX + 0xdc]         ; 004dafbf
    ADD ESP,0x4                         ; 004dafc5
    MOV EAX,dword ptr [EBP + 0x5e]      ; 004dafc8
    MOV dword ptr [EAX + 0x560],EDI     ; 004dafcb
    JMP 0x004dae6f                      ; 004dafd1
        ;   XREF to: 004dae6f (UNCONDITIONAL_JUMP)  ; LAB_004dae6f
    FLD float ptr [EBX + 0xbdf8]        ; 004dafd6
        ;   Label: LAB_004dafd6
    FLDZ                                ; 004dafdc
    FCOMPP                              ; 004dafde
    FNSTSW AX                           ; 004dafe0
    SAHF                                ; 004dafe2
    JNC 0x004dae84                      ; 004dafe3
        ;   XREF to: 004dae84 (CONDITIONAL_JUMP)  ; LAB_004dae84
    JMP 0x004daae7                      ; 004dafe9
        ;   XREF to: 004daae7 (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x40800000                     ; 004dafee
        ;   Label: LAB_004dafee
    PUSH 0x40000000                     ; 004daff3
    JMP 0x004dae9b                      ; 004daff8
        ;   XREF to: 004dae9b (UNCONDITIONAL_JUMP)  ; LAB_004dae9b
    MOV EAX,dword ptr [EBX + 0xbc90]    ; 004daffd
        ;   Label: caseD_5
    TEST EAX,EAX                        ; 004db003
    JNZ 0x004daae7                      ; 004db005
        ;   XREF to: 004daae7 (CONDITIONAL_JUMP)  ; caseD_7
    CMP dword ptr [EBX + 0xdc],0x0      ; 004db00b
    JNZ 0x004daae7                      ; 004db012
        ;   XREF to: 004daae7 (CONDITIONAL_JUMP)  ; caseD_7
    PUSH EAX                            ; 004db018
    LEA EAX,[EBP + 0x3e]                ; 004db019
    PUSH EAX                            ; 004db01c
    PUSH ESI                            ; 004db01d
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0 ; 004db01e
        ;   XREF to: 0051d2a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0()
    ADD ESP,0xc                         ; 004db023
    PUSH EAX                            ; 004db026
    LEA EAX,[EBP + -0x3a]               ; 004db027
    PUSH EAX                            ; 004db02a
    PUSH EBX                            ; 004db02b
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 004db02c
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    ADD ESP,0xc                         ; 004db031
    PUSH 0x0                            ; 004db034
    LEA EAX,[EBP + -0x3a]               ; 004db036
    PUSH EAX                            ; 004db039
    MOV ECX,dword ptr [0x005b96c4]      ; 004db03a | DAT_005b96c4
    PUSH ECX                            ; 004db040
    CALL FUN_004b0480                   ; 004db041
        ;   XREF to: 004b0480 (UNCONDITIONAL_CALL)  ; undefined FUN_004b0480()
    ADD ESP,0xc                         ; 004db046
    MOV dword ptr [EBX + 0xbc90],0x1    ; 004db049
    JMP 0x004daae7                      ; 004db053
        ;   XREF to: 004daae7 (UNCONDITIONAL_JUMP)  ; caseD_7
    CMP dword ptr [EBX + 0xbd50],0x0    ; 004db058
        ;   Label: caseD_0
    JZ 0x004db096                       ; 004db05f
        ;   XREF to: 004db096 (CONDITIONAL_JUMP)  ; LAB_004db096
    MOV EAX,[0x01cae0e8]                ; 004db061 | DAT_01cae0e8
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 004db066
    FLD float ptr [EBX + 0xbdf4]        ; 004db06d
    MOV dword ptr [EBX + 0xbca4],EAX    ; 004db073
    FCOMP double ptr [0x0058a341]       ; 004db079 | DOUBLE_0058a341
    FNSTSW AX                           ; 004db07f
    SAHF                                ; 004db081
    JBE 0x004daae7                      ; 004db082
        ;   XREF to: 004daae7 (CONDITIONAL_JUMP)  ; caseD_7
    PUSH EBX                            ; 004db088
        ;   Label: LAB_004db088
    CALL core_mobster.cpp_CMobster_startFiringAttack_FUN_004dc110 ; 004db089
        ;   XREF to: 004dc110 (UNCONDITIONAL_CALL)  ; undefined core_mobster.cpp_CMobster_startFiringAttack_FUN_004dc110()
    ADD ESP,0x4                         ; 004db08e
    JMP 0x004daae7                      ; 004db091
        ;   XREF to: 004daae7 (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH dword ptr [EBP + 0x92]         ; 004db096
        ;   Label: LAB_004db096
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004db09c
    PUSH EBX                            ; 004db0a2
    CALL dword ptr [EAX + 0x13c]        ; 004db0a3
    MOV EDX,dword ptr [EBX + 0xbca4]    ; 004db0a9
    ADD ESP,0x8                         ; 004db0af
    TEST EDX,EDX                        ; 004db0b2
    JZ 0x004db151                       ; 004db0b4
        ;   XREF to: 004db151 (CONDITIONAL_JUMP)  ; LAB_004db151
    MOV ECX,dword ptr [EBX + 0xbd44]    ; 004db0ba
    TEST ECX,ECX                        ; 004db0c0
    JZ 0x004db10c                       ; 004db0c2
        ;   XREF to: 004db10c (CONDITIONAL_JUMP)  ; LAB_004db10c
    CMP dword ptr [EBX + 0xbd40],0x0    ; 004db0c4
    JNZ 0x004db196                      ; 004db0cb
        ;   XREF to: 004db196 (CONDITIONAL_JUMP)  ; LAB_004db196
    LEA EDX,[EBX + 0x20]                ; 004db0d1
    FLD float ptr [EDX]                 ; 004db0d4
    FSUB float ptr [ECX + 0x20]         ; 004db0d6
    FSTP float ptr [EBP + -0x46]        ; 004db0d9
    FLD float ptr [EDX + 0x4]           ; 004db0dc
    FSUB float ptr [ECX + 0x24]         ; 004db0df
    FST float ptr [EBP + -0x42]         ; 004db0e2
    FMUL float ptr [EBP + -0x42]        ; 004db0e5
    FLD float ptr [EBP + -0x46]         ; 004db0e8
    FMUL ST0                            ; 004db0eb
    FLD float ptr [EDX + 0x8]           ; 004db0ed
    FSUB float ptr [ECX + 0x28]         ; 004db0f0
    FXCH                                ; 004db0f3
    FADDP ST2,ST0                       ; 004db0f5
    FST float ptr [EBP + -0x3e]         ; 004db0f7
    FMUL float ptr [EBP + -0x3e]        ; 004db0fa
    FADDP                               ; 004db0fd
    FSQRT                               ; 004db0ff
    FCOMP double ptr [0x0058a351]       ; 004db101 | DOUBLE_0058a351
    FNSTSW AX                           ; 004db107
    SAHF                                ; 004db109
    JA 0x004db17a                       ; 004db10a
        ;   XREF to: 004db17a (CONDITIONAL_JUMP)  ; LAB_004db17a
    CMP dword ptr [EBX + 0xbd48],0x0    ; 004db10c
        ;   Label: LAB_004db10c
    JZ 0x004db1a5                       ; 004db113
        ;   XREF to: 004db1a5 (CONDITIONAL_JUMP)  ; LAB_004db1a5
    FLD float ptr [EBX + 0xbdf4]        ; 004db119
    FCOMP double ptr [0x0058a341]       ; 004db11f | DOUBLE_0058a341
    FNSTSW AX                           ; 004db125
    SAHF                                ; 004db127
    JBE 0x004daae7                      ; 004db128
        ;   XREF to: 004daae7 (CONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x3e800000                     ; 004db12e
    CALL core_actor.cpp_randomChance_FUN_0040dea0 ; 004db133
        ;   XREF to: 0040dea0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_randomChance_FUN_0040dea0()
    ADD ESP,0x4                         ; 004db138
    TEST EAX,EAX                        ; 004db13b
    JZ 0x004db088                       ; 004db13d
        ;   XREF to: 004db088 (CONDITIONAL_JUMP)  ; LAB_004db088
    PUSH EBX                            ; 004db143
    CALL core_mobster.cpp_CMobster_dismountVehicle_FUN_004da670 ; 004db144
        ;   XREF to: 004da670 (UNCONDITIONAL_CALL)  ; undefined core_mobster.cpp_CMobster_dismountVehicle_FUN_004da670()
    ADD ESP,0x4                         ; 004db149
    JMP 0x004daae7                      ; 004db14c
        ;   XREF to: 004daae7 (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH dword ptr [EBP + 0x92]         ; 004db151
        ;   Label: LAB_004db151
    PUSH EBX                            ; 004db157
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_0047a030 ; 004db158
        ;   XREF to: 0047a030 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_CEnemy_updatePatrol_FUN_0047a030()
    ADD ESP,0x8                         ; 004db15d
    TEST EAX,EAX                        ; 004db160
    JZ 0x004daae7                       ; 004db162
        ;   XREF to: 004daae7 (CONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x1                            ; 004db168
    PUSH 0x1                            ; 004db16a
    PUSH ESI                            ; 004db16c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004db16d
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 004db172
    JMP 0x004daae7                      ; 004db175
        ;   XREF to: 004daae7 (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x1                            ; 004db17a
        ;   Label: LAB_004db17a
    PUSH 0x8                            ; 004db17c
    PUSH ESI                            ; 004db17e
    MOV dword ptr [EBX + 0xbd40],0x1    ; 004db17f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004db189
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 004db18e
    JMP 0x004daae7                      ; 004db191
        ;   XREF to: 004daae7 (UNCONDITIONAL_JUMP)  ; caseD_7
    MOV dword ptr [EBX + 0xbd40],0x0    ; 004db196
        ;   Label: LAB_004db196
    JMP 0x004db10c                      ; 004db1a0
        ;   XREF to: 004db10c (UNCONDITIONAL_JUMP)  ; LAB_004db10c
    MOV EDX,dword ptr [EBX + 0xbca4]    ; 004db1a5
        ;   Label: LAB_004db1a5
    LEA EAX,[EBX + 0x20]                ; 004db1ab
    FLD float ptr [EDX + 0x20]          ; 004db1ae
    FSUB float ptr [EAX]                ; 004db1b1
    FSTP float ptr [EBP + 0xffffff7e]   ; 004db1b3
    FLD float ptr [EDX + 0x24]          ; 004db1b9
    FSUB float ptr [EAX + 0x4]          ; 004db1bc
    FST float ptr [EBP + -0x7e]         ; 004db1bf
    FMUL float ptr [EBP + -0x7e]        ; 004db1c2
    FLD float ptr [EBP + 0xffffff7e]    ; 004db1c5
    FMUL ST0                            ; 004db1cb
    FLD float ptr [EDX + 0x28]          ; 004db1cd
    FSUB float ptr [EAX + 0x8]          ; 004db1d0
    FXCH                                ; 004db1d3
    FADDP ST2,ST0                       ; 004db1d5
    FST float ptr [EBP + -0x7a]         ; 004db1d7
    FMUL float ptr [EBP + -0x7a]        ; 004db1da
    FADDP                               ; 004db1dd
    FSQRT                               ; 004db1df
    FLD float ptr [0x005a0918]          ; 004db1e1 | FLOAT_005a0918
    FLD1                                ; 004db1e7
    FADDP                               ; 004db1e9
    FXCH                                ; 004db1eb
    FSTP float ptr [EBP + 0x72]         ; 004db1ed
    MOV EAX,dword ptr [EBP + 0x72]      ; 004db1f0
    FLD float ptr [EBP + 0x72]          ; 004db1f3
    MOV dword ptr [EBP + 0x6a],EAX      ; 004db1f6
    FCOMPP                              ; 004db1f9
    FNSTSW AX                           ; 004db1fb
    SAHF                                ; 004db1fd
    JNC 0x004db266                      ; 004db1fe
        ;   XREF to: 004db266 (CONDITIONAL_JUMP)  ; LAB_004db266
    LEA EAX,[EBP + 0xffffff7e]          ; 004db200
    PUSH EAX                            ; 004db206
    LEA EAX,[EBP + 0x1a]                ; 004db207
    PUSH EAX                            ; 004db20a
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 004db20b
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0()
    FLD float ptr [EBP + 0x1e]          ; 004db210
    ADD ESP,0x8                         ; 004db213
    FSUB float ptr [EBX + 0x34]         ; 004db216
    SUB ESP,0x4                         ; 004db219
    FSTP float ptr [ESP]                ; 004db21c
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 004db21f
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040df00()
    MOV dword ptr [EBP + 0x76],EAX      ; 004db224
    FLD float ptr [EBP + 0x76]          ; 004db227
    FABS                                ; 004db22a
    ADD ESP,0x4                         ; 004db22c
    FCOMP double ptr [0x0058a349]       ; 004db22f | DOUBLE_0058a349
    FNSTSW AX                           ; 004db235
    SAHF                                ; 004db237
    JNC 0x004db266                      ; 004db238
        ;   XREF to: 004db266 (CONDITIONAL_JUMP)  ; LAB_004db266
    FLD float ptr [EBX + 0xbca0]        ; 004db23a
    FLDZ                                ; 004db240
    FCOMPP                              ; 004db242
    FNSTSW AX                           ; 004db244
    SAHF                                ; 004db246
    JC 0x004db266                       ; 004db247
        ;   XREF to: 004db266 (CONDITIONAL_JUMP)  ; LAB_004db266
    PUSH 0x1                            ; 004db249
    PUSH 0x9                            ; 004db24b
    LEA EAX,[EBX + 0x150]               ; 004db24d
    PUSH EAX                            ; 004db253
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004db254
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 004db259
    MOV dword ptr [EBX + 0xbca0],0x40000000 ; 004db25c
    FLD float ptr [EBP + 0x6a]          ; 004db266
        ;   Label: LAB_004db266
    FCOMP float ptr [EBX + 0xbc9c]      ; 004db269
    FNSTSW AX                           ; 004db26f
    SAHF                                ; 004db271
    JNC 0x004db295                      ; 004db272
        ;   XREF to: 004db295 (CONDITIONAL_JUMP)  ; LAB_004db295
    FLD float ptr [EBP + 0x6a]          ; 004db274
    LEA EDX,[EBX + 0x150]               ; 004db277
    FCOMP float ptr [0x005a0928]        ; 004db27d | FLOAT_005a0928
    FNSTSW AX                           ; 004db283
    SAHF                                ; 004db285
    JNC 0x004db2ad                      ; 004db286
        ;   XREF to: 004db2ad (CONDITIONAL_JUMP)  ; LAB_004db2ad
    PUSH 0x1                            ; 004db288
    PUSH 0x1                            ; 004db28a
    PUSH EDX                            ; 004db28c
        ;   Label: LAB_004db28c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004db28d
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 004db292
    CMP dword ptr [EBX + 0xbd34],0x0    ; 004db295
        ;   Label: LAB_004db295
    JZ 0x004db2b3                       ; 004db29c
        ;   XREF to: 004db2b3 (CONDITIONAL_JUMP)  ; LAB_004db2b3
    MOV dword ptr [EBX + 0xbd34],0x1    ; 004db29e
        ;   Label: LAB_004db29e
    JMP 0x004daae7                      ; 004db2a8
        ;   XREF to: 004daae7 (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x1                            ; 004db2ad
        ;   Label: LAB_004db2ad
    PUSH 0x8                            ; 004db2af
    JMP 0x004db28c                      ; 004db2b1
        ;   XREF to: 004db28c (UNCONDITIONAL_JUMP)  ; LAB_004db28c
    PUSH 0x3f333333                     ; 004db2b3
        ;   Label: LAB_004db2b3
    CALL core_actor.cpp_randomChance_FUN_0040dea0 ; 004db2b8
        ;   XREF to: 0040dea0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_randomChance_FUN_0040dea0()
    ADD ESP,0x4                         ; 004db2bd
    TEST EAX,EAX                        ; 004db2c0
    JZ 0x004db29e                       ; 004db2c2
        ;   XREF to: 004db29e (CONDITIONAL_JUMP)  ; LAB_004db29e
    PUSH 0x1                            ; 004db2c4
    PUSH EBX                            ; 004db2c6
    CALL core_mobster.cpp_CMobster_playTaunt_FUN_004dc940 ; 004db2c7
        ;   XREF to: 004dc940 (UNCONDITIONAL_CALL)  ; undefined core_mobster.cpp_CMobster_playTaunt_FUN_004dc940()
    ADD ESP,0x8                         ; 004db2cc
    MOV dword ptr [EBX + 0xbd34],0x1    ; 004db2cf
    JMP 0x004daae7                      ; 004db2d9
        ;   XREF to: 004daae7 (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH dword ptr [EBP + 0x92]         ; 004db2de
        ;   Label: caseD_1
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004db2e4
    PUSH EBX                            ; 004db2ea
    CALL dword ptr [EAX + 0x13c]        ; 004db2eb
    ADD ESP,0x8                         ; 004db2f1
    MOV EDX,dword ptr [EBX + 0xbca4]    ; 004db2f4
    LEA ESI,[EBX + 0x150]               ; 004db2fa
    TEST EDX,EDX                        ; 004db300
    JZ 0x004db39b                       ; 004db302
        ;   XREF to: 004db39b (CONDITIONAL_JUMP)  ; LAB_004db39b
    CMP dword ptr [EBX + 0xbd40],0x0    ; 004db308
    JZ 0x004db3e3                       ; 004db30f
        ;   XREF to: 004db3e3 (CONDITIONAL_JUMP)  ; LAB_004db3e3
    PUSH 0x3e32b8c2                     ; 004db315
    LEA EAX,[EBX + 0x23a4]              ; 004db31a
    PUSH 0x3f000000                     ; 004db320
    MOV dword ptr [EAX + 0x8],0x0       ; 004db325
    XOR ECX,ECX                         ; 004db32c
    MOV EDX,dword ptr [EAX + 0x8]       ; 004db32e
    MOV dword ptr [EAX + 0x4],EDX       ; 004db331
    MOV EDX,dword ptr [EAX + 0x4]       ; 004db334
    MOV dword ptr [EAX],EDX             ; 004db337
    MOV EAX,[0x005a0918]                ; 004db339 | FLOAT_005a0918
    MOV dword ptr [EBP + 0x2],ECX       ; 004db33e
    MOV dword ptr [EBP + 0xa],EAX       ; 004db341
    LEA EAX,[EBP + 0x2]                 ; 004db344
    MOV dword ptr [EBP + 0x6],ECX       ; 004db347
    PUSH EAX                            ; 004db34a
    MOV EAX,dword ptr [EBX + 0xbd44]    ; 004db34b
    PUSH EAX                            ; 004db351
    MOV EDX,dword ptr [EAX + 0x14c]     ; 004db352
    CALL dword ptr [EDX + 0xbc]         ; 004db358
    ADD ESP,0x4                         ; 004db35e
    PUSH EAX                            ; 004db361
    MOV EAX,dword ptr [EBX + 0xbd44]    ; 004db362
    ADD EAX,0x20                        ; 004db368
    PUSH EAX                            ; 004db36b
    PUSH EBX                            ; 004db36c
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0 ; 004db36d
        ;   XREF to: 004247f0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0()
    ADD ESP,0x18                        ; 004db372
    TEST EAX,EAX                        ; 004db375
    JG 0x004db3d1                       ; 004db377
        ;   XREF to: 004db3d1 (CONDITIONAL_JUMP)  ; LAB_004db3d1
    JGE 0x004daae7                      ; 004db379
        ;   XREF to: 004daae7 (CONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x1                            ; 004db37f
    PUSH 0x0                            ; 004db381
    PUSH ESI                            ; 004db383
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004db384
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 004db389
    MOV dword ptr [EBX + 0xbd44],0x0    ; 004db38c
    JMP 0x004daae7                      ; 004db396
        ;   XREF to: 004daae7 (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH dword ptr [EBP + 0x92]         ; 004db39b
        ;   Label: LAB_004db39b
    PUSH EBX                            ; 004db3a1
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_0047a030 ; 004db3a2
        ;   XREF to: 0047a030 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_CEnemy_updatePatrol_FUN_0047a030()
    ADD ESP,0x8                         ; 004db3a7
    TEST EAX,EAX                        ; 004db3aa
    JZ 0x004db3c0                       ; 004db3ac
        ;   XREF to: 004db3c0 (CONDITIONAL_JUMP)  ; LAB_004db3c0
    PUSH 0x1                            ; 004db3ae
    PUSH 0x1                            ; 004db3b0
    PUSH ESI                            ; 004db3b2
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004db3b3
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 004db3b8
    JMP 0x004daae7                      ; 004db3bb
        ;   XREF to: 004daae7 (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x1                            ; 004db3c0
        ;   Label: LAB_004db3c0
    PUSH EAX                            ; 004db3c2
    PUSH ESI                            ; 004db3c3
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004db3c4
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 004db3c9
    JMP 0x004daae7                      ; 004db3cc
        ;   XREF to: 004daae7 (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x1                            ; 004db3d1
        ;   Label: LAB_004db3d1
    PUSH 0x0                            ; 004db3d3
    PUSH ESI                            ; 004db3d5
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004db3d6
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 004db3db
    JMP 0x004daae7                      ; 004db3de
        ;   XREF to: 004daae7 (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH dword ptr [EBP + 0x92]         ; 004db3e3
        ;   Label: LAB_004db3e3
    PUSH EBX                            ; 004db3e9
    CALL core_mobster.cpp_CMobster_processWeaponPickup_FUN_004dbce0 ; 004db3ea
        ;   XREF to: 004dbce0 (UNCONDITIONAL_CALL)  ; undefined core_mobster.cpp_CMobster_processWeaponPickup_FUN_004dbce0()
    ADD ESP,0x8                         ; 004db3ef
    TEST EAX,EAX                        ; 004db3f2
    JNZ 0x004daae7                      ; 004db3f4
        ;   XREF to: 004daae7 (CONDITIONAL_JUMP)  ; caseD_7
    FLD float ptr [0x005a0918]          ; 004db3fa | FLOAT_005a0918
    FLD1                                ; 004db400
    FADDP                               ; 004db402
    MOV ESI,dword ptr [EBX + 0x24f0]    ; 004db404
    FSTP float ptr [EBP + 0x66]         ; 004db40a
    TEST ESI,ESI                        ; 004db40d
    JZ 0x004db419                       ; 004db40f
        ;   XREF to: 004db419 (CONDITIONAL_JUMP)  ; LAB_004db419
    MOV EAX,[0x005a091c]                ; 004db411 | FLOAT_005a091c
    MOV dword ptr [EBP + 0x66],EAX      ; 004db416
    PUSH 0x3e32b8c2                     ; 004db419
        ;   Label: LAB_004db419
    LEA EAX,[EBX + 0x23a4]              ; 004db41e
    PUSH 0x3f000000                     ; 004db424
    MOV dword ptr [EAX + 0x8],0x0       ; 004db429
    XOR EDI,EDI                         ; 004db430
    MOV EDX,dword ptr [EAX + 0x8]       ; 004db432
    MOV dword ptr [EAX + 0x4],EDX       ; 004db435
    MOV EDX,dword ptr [EAX + 0x4]       ; 004db438
    MOV dword ptr [EAX],EDX             ; 004db43b
    MOV EAX,[0x005a0918]                ; 004db43d | FLOAT_005a0918
    MOV dword ptr [EBP + -0x16],EDI     ; 004db442
    MOV dword ptr [EBP + 0x62],EAX      ; 004db445
    MOV dword ptr [EBP + -0xe],EAX      ; 004db448
    LEA EAX,[EBP + -0x16]               ; 004db44b
    MOV dword ptr [EBP + -0x12],EDI     ; 004db44e
    PUSH EAX                            ; 004db451
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 004db452
    PUSH EAX                            ; 004db458
    MOV EDX,dword ptr [EAX + 0x14c]     ; 004db459
    CALL dword ptr [EDX + 0xbc]         ; 004db45f
    ADD ESP,0x4                         ; 004db465
    PUSH EAX                            ; 004db468
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 004db469
    ADD EAX,0x20                        ; 004db46f
    PUSH EAX                            ; 004db472
    PUSH EBX                            ; 004db473
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0 ; 004db474
        ;   XREF to: 004247f0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0()
    ADD ESP,0x18                        ; 004db479
    TEST EAX,EAX                        ; 004db47c
    JL 0x004daae7                       ; 004db47e
        ;   XREF to: 004daae7 (CONDITIONAL_JUMP)  ; caseD_7
    LEA EDX,[EBX + 0x20]                ; 004db484
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 004db487
    FLD float ptr [EDX]                 ; 004db48d
    FSUB float ptr [EAX + 0x20]         ; 004db48f
    FSTP float ptr [EBP + 0x26]         ; 004db492
    FLD float ptr [EDX + 0x4]           ; 004db495
    FSUB float ptr [EAX + 0x24]         ; 004db498
    FLD float ptr [EBP + 0x26]          ; 004db49b
    FXCH                                ; 004db49e
    FSTP float ptr [EBP + 0x2a]         ; 004db4a0
    FLD float ptr [EDX + 0x8]           ; 004db4a3
    FSUB float ptr [EAX + 0x28]         ; 004db4a6
    FXCH                                ; 004db4a9
    FMUL float ptr [EBP + 0x26]         ; 004db4ab
    FXCH                                ; 004db4ae
    FST float ptr [EBP + 0x2e]          ; 004db4b0
    FMUL float ptr [EBP + 0x2e]         ; 004db4b3
    FADDP                               ; 004db4b6
    FSQRT                               ; 004db4b8
    MOV dword ptr [EBP + 0x2a],EDI      ; 004db4ba
    FSTP float ptr [EBP + 0x6e]         ; 004db4bd
    MOV EAX,dword ptr [EBP + 0x6e]      ; 004db4c0
    FLD float ptr [EBP + 0x6e]          ; 004db4c3
    MOV dword ptr [EBP + 0x5a],EAX      ; 004db4c6
    FCOMP float ptr [EBP + 0x66]        ; 004db4c9
    FNSTSW AX                           ; 004db4cc
    SAHF                                ; 004db4ce
    JA 0x004db598                       ; 004db4cf
        ;   XREF to: 004db598 (CONDITIONAL_JUMP)  ; LAB_004db598
    FLD float ptr [EBX + 0xbca0]        ; 004db4d5
    FLDZ                                ; 004db4db
    FCOMPP                              ; 004db4dd
    FNSTSW AX                           ; 004db4df
    SAHF                                ; 004db4e1
    JC 0x004db598                       ; 004db4e2
        ;   XREF to: 004db598 (CONDITIONAL_JUMP)  ; LAB_004db598
    MOV EDI,dword ptr [EBX + 0x24f0]    ; 004db4e8
    LEA ESI,[EBX + 0x150]               ; 004db4ee
    TEST EDI,EDI                        ; 004db4f4
    JZ 0x004db659                       ; 004db4f6
        ;   XREF to: 004db659 (CONDITIONAL_JUMP)  ; LAB_004db659
    FLD float ptr [EBP + 0x62]          ; 004db4fc
    FLD1                                ; 004db4ff
    FADDP                               ; 004db501
    FLD float ptr [EBP + 0x6e]          ; 004db503
    FCOMPP                              ; 004db506
    FNSTSW AX                           ; 004db508
    SAHF                                ; 004db50a
    JNC 0x004db5c2                      ; 004db50b
        ;   XREF to: 004db5c2 (CONDITIONAL_JUMP)  ; LAB_004db5c2
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 004db511
    FLD float ptr [EAX + 0x20]          ; 004db517
    FSUB float ptr [EDX]                ; 004db51a
    FSTP float ptr [EBP + -0x5e]        ; 004db51c
    FLD float ptr [EAX + 0x24]          ; 004db51f
    FSUB float ptr [EDX + 0x4]          ; 004db522
    FSTP float ptr [EBP + -0x5a]        ; 004db525
    FLD float ptr [EAX + 0x28]          ; 004db528
    LEA EAX,[EBP + -0x5e]               ; 004db52b
    PUSH EAX                            ; 004db52e
    LEA EAX,[EBP + 0x32]                ; 004db52f
    FSUB float ptr [EDX + 0x8]          ; 004db532
    PUSH EAX                            ; 004db535
    FSTP float ptr [EBP + -0x56]        ; 004db536
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 004db539
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0()
    FLD float ptr [EBP + 0x36]          ; 004db53e
    ADD ESP,0x8                         ; 004db541
    FSUB float ptr [EBX + 0x34]         ; 004db544
    SUB ESP,0x4                         ; 004db547
    FSTP float ptr [ESP]                ; 004db54a
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 004db54d
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040df00()
    MOV dword ptr [EBP + 0x76],EAX      ; 004db552
    FLD float ptr [EBP + 0x76]          ; 004db555
    FABS                                ; 004db558
    ADD ESP,0x4                         ; 004db55a
    FCOMP double ptr [0x0058a349]       ; 004db55d | DOUBLE_0058a349
    FNSTSW AX                           ; 004db563
    SAHF                                ; 004db565
    JNC 0x004db58e                      ; 004db566
        ;   XREF to: 004db58e (CONDITIONAL_JUMP)  ; LAB_004db58e
    FLD float ptr [EBX + 0xbca0]        ; 004db568
    FLDZ                                ; 004db56e
    FCOMPP                              ; 004db570
    FNSTSW AX                           ; 004db572
    SAHF                                ; 004db574
    JC 0x004db58e                       ; 004db575
        ;   XREF to: 004db58e (CONDITIONAL_JUMP)  ; LAB_004db58e
    PUSH 0x1                            ; 004db577
    PUSH 0x9                            ; 004db579
    PUSH ESI                            ; 004db57b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004db57c
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 004db581
    MOV dword ptr [EBX + 0xbca0],0x40000000 ; 004db584
    MOV dword ptr [EBX + 0xbca0],0x3f800000 ; 004db58e
        ;   Label: LAB_004db58e
    FLD float ptr [EBP + 0x5a]          ; 004db598
        ;   Label: LAB_004db598
    FCOMP float ptr [EBX + 0xbc9c]      ; 004db59b
    FNSTSW AX                           ; 004db5a1
    SAHF                                ; 004db5a3
    JBE 0x004daae7                      ; 004db5a4
        ;   XREF to: 004daae7 (CONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x1                            ; 004db5aa
    PUSH 0x0                            ; 004db5ac
    LEA EAX,[EBX + 0x150]               ; 004db5ae
    PUSH EAX                            ; 004db5b4
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004db5b5
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 004db5ba
    JMP 0x004daae7                      ; 004db5bd
        ;   XREF to: 004daae7 (UNCONDITIONAL_JUMP)  ; caseD_7
    FLD float ptr [EBX + 0xbdf4]        ; 004db5c2
        ;   Label: LAB_004db5c2
    FCOMP double ptr [0x0058a341]       ; 004db5c8 | DOUBLE_0058a341
    FNSTSW AX                           ; 004db5ce
    SAHF                                ; 004db5d0
    JBE 0x004db58e                      ; 004db5d1
        ;   XREF to: 004db58e (CONDITIONAL_JUMP)  ; LAB_004db58e
    FLD float ptr [EBX + 0xbdf8]        ; 004db5d3
    FLDZ                                ; 004db5d9
    FCOMPP                              ; 004db5db
    FNSTSW AX                           ; 004db5dd
    SAHF                                ; 004db5df
    JC 0x004db58e                       ; 004db5e0
        ;   XREF to: 004db58e (CONDITIONAL_JUMP)  ; LAB_004db58e
    PUSH 0x3e99999a                     ; 004db5e2
    MOV dword ptr [EBX + 0xbd3c],0x0    ; 004db5e7
    CALL core_actor.cpp_randomChance_FUN_0040dea0 ; 004db5f1
        ;   XREF to: 0040dea0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_randomChance_FUN_0040dea0()
    ADD ESP,0x4                         ; 004db5f6
    TEST EAX,EAX                        ; 004db5f9
    JZ 0x004db608                       ; 004db5fb
        ;   XREF to: 004db608 (CONDITIONAL_JUMP)  ; LAB_004db608
    PUSH 0x2                            ; 004db5fd
    PUSH EBX                            ; 004db5ff
    CALL core_mobster.cpp_CMobster_playTaunt_FUN_004dc940 ; 004db600
        ;   XREF to: 004dc940 (UNCONDITIONAL_CALL)  ; undefined core_mobster.cpp_CMobster_playTaunt_FUN_004dc940()
    ADD ESP,0x8                         ; 004db605
    FLD float ptr [EBX + 0xbd3c]        ; 004db608
        ;   Label: LAB_004db608
    FLDZ                                ; 004db60e
    FCOMPP                              ; 004db610
    FNSTSW AX                           ; 004db612
    SAHF                                ; 004db614
    JNC 0x004db64b                      ; 004db615
        ;   XREF to: 004db64b (CONDITIONAL_JUMP)  ; LAB_004db64b
    MOV EDX,dword ptr [EBX + 0x24ac]    ; 004db617
    LEA EAX,[EBX + 0x150]               ; 004db61d
    TEST EDX,EDX                        ; 004db623
    JZ 0x004db639                       ; 004db625
        ;   XREF to: 004db639 (CONDITIONAL_JUMP)  ; LAB_004db639
    PUSH 0x1                            ; 004db627
    PUSH 0xb                            ; 004db629
    PUSH EAX                            ; 004db62b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004db62c
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 004db631
    JMP 0x004db58e                      ; 004db634
        ;   XREF to: 004db58e (UNCONDITIONAL_JUMP)  ; LAB_004db58e
    PUSH 0x1                            ; 004db639
        ;   Label: LAB_004db639
    PUSH 0xa                            ; 004db63b
    PUSH EAX                            ; 004db63d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004db63e
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 004db643
    JMP 0x004db58e                      ; 004db646
        ;   XREF to: 004db58e (UNCONDITIONAL_JUMP)  ; LAB_004db58e
    PUSH EBX                            ; 004db64b
        ;   Label: LAB_004db64b
    CALL core_mobster.cpp_CMobster_startFiringAttack_FUN_004dc110 ; 004db64c
        ;   XREF to: 004dc110 (UNCONDITIONAL_CALL)  ; undefined core_mobster.cpp_CMobster_startFiringAttack_FUN_004dc110()
    ADD ESP,0x4                         ; 004db651
    JMP 0x004db58e                      ; 004db654
        ;   XREF to: 004db58e (UNCONDITIONAL_JUMP)  ; LAB_004db58e
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 004db659
        ;   Label: LAB_004db659
    FLD float ptr [EAX + 0x20]          ; 004db65f
    FSUB float ptr [EDX]                ; 004db662
    FSTP float ptr [EBP + -0x2e]        ; 004db664
    FLD float ptr [EAX + 0x24]          ; 004db667
    FSUB float ptr [EDX + 0x4]          ; 004db66a
    FSTP float ptr [EBP + -0x2a]        ; 004db66d
    FLD float ptr [EAX + 0x28]          ; 004db670
    LEA EAX,[EBP + -0x2e]               ; 004db673
    PUSH EAX                            ; 004db676
    LEA EAX,[EBP + -0x6a]               ; 004db677
    FSUB float ptr [EDX + 0x8]          ; 004db67a
    PUSH EAX                            ; 004db67d
    FSTP float ptr [EBP + -0x26]        ; 004db67e
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 004db681
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0()
    FLD float ptr [EBP + -0x66]         ; 004db686
    ADD ESP,0x8                         ; 004db689
    FSUB float ptr [EBX + 0x34]         ; 004db68c
    SUB ESP,0x4                         ; 004db68f
    FSTP float ptr [ESP]                ; 004db692
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 004db695
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040df00()
    MOV dword ptr [EBP + 0x76],EAX      ; 004db69a
    FLD float ptr [EBP + 0x76]          ; 004db69d
    FABS                                ; 004db6a0
    ADD ESP,0x4                         ; 004db6a2
    FCOMP double ptr [0x0058a349]       ; 004db6a5 | DOUBLE_0058a349
    FNSTSW AX                           ; 004db6ab
    SAHF                                ; 004db6ad
    JNC 0x004db58e                      ; 004db6ae
        ;   XREF to: 004db58e (CONDITIONAL_JUMP)  ; LAB_004db58e
    PUSH 0x1                            ; 004db6b4
    PUSH 0x9                            ; 004db6b6
    PUSH ESI                            ; 004db6b8
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004db6b9
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 004db6be
    JMP 0x004db58e                      ; 004db6c1
        ;   XREF to: 004db58e (UNCONDITIONAL_JUMP)  ; LAB_004db58e
    CMP EDI,0xb                         ; 004db6c6
        ;   Label: LAB_004db6c6
    JA 0x004daae7                       ; 004db6c9
        ;   XREF to: 004daae7 (CONDITIONAL_JUMP)  ; caseD_7
    JMP dword ptr [EDI*0x4 + 0x4da760]  ; 004db6cf | caseD_0 | caseD_8 | caseD_6
        ;   Label: switchD
    PUSH EBX                            ; 004db6d6
        ;   Label: LAB_004db6d6
    CALL core_mobster.cpp_CMobster_positionOnVehicle_FUN_004da5a0 ; 004db6d7
        ;   XREF to: 004da5a0 (UNCONDITIONAL_CALL)  ; undefined core_mobster.cpp_CMobster_positionOnVehicle_FUN_004da5a0()
    ADD ESP,0x4                         ; 004db6dc
    JMP 0x004dac21                      ; 004db6df
        ;   XREF to: 004dac21 (UNCONDITIONAL_JUMP)  ; LAB_004dac21

