; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint core_vehicle_cpp_CVehicle_process_FUN_0054eae0(int param_1,float param_2)
;
; Local Variables:
; undefined        Stack[-0xa0]:1  local_a0
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined        Stack[-0x7c]:1  local_7c
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined        Stack[-0x4c]:1  local_4c
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_model_t_horn_wav_00597320
;   TerminatedCString s_core_vehicle_cpp_00597332
;   TerminatedCString s_CMobster_process_Out_of_00597346
;   TerminatedCString s_mobster3_dfm_00597369
;   TerminatedCString s_mobster4_dfm_00597376
;   TerminatedCString s_ext_modelt_fast_wav_00597383
;   TerminatedCString s_skid_wav_0059739a
;   float FLOAT_005973a8 = 2
;   float FLOAT_005973ac = 3.700000
;   float FLOAT_005973b0 = 1.570796
;   double DOUBLE_005973b8 = 200
;   double DOUBLE_005973c0 = 0.200000000000000
;   double DOUBLE_005973c8 = 30
;   undefined4 DAT_005baf90
;   undefined4 DAT_005be368
;   ... and 13 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;   core_actor.cpp_CDemonActor_inverseTransformVector_FUN_0040a220
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
;   core_actor.cpp_randomChance_FUN_0040dea0
;   core_charactr.cpp_CCharacter_pickupObjectNow_FUN_00428f40
;   core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0
;   core_course.cpp_CCourse_evaluate_FUN_0043b800
;   core_mission.cpp_CDemonMission_addActorToList_FUN_004d8c60
;   core_mission.cpp_CDemonMission_generateActorName_FUN_004d9720
;   core_mobster.cpp_CMobster_ctor_FUN_004da150
;   core_setcolid.cpp_SCollisionInfo_ctor_FUN_00511990
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0
;   core_tommygun.cpp_CTommyGun_ctor_FUN_00545b90
;   core_vehicle.cpp_CVehicle_playTrackedSound_FUN_0054f7a0
;   FUN_004c8440
;   ... and 3 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054eae0
        ;   Label: core_vehicle.cpp_CVehicle_process_FUN_0054eae0
    PUSH ESI                            ; 0054eae1
    PUSH EDI                            ; 0054eae2
    PUSH EBP                            ; 0054eae3
    MOV EBP,ESP                         ; 0054eae4
    SUB ESP,0xf8                        ; 0054eae6
    AND ESP,0xfffffff8                  ; 0054eaec
    MOV EBX,dword ptr [EBP + 0x14]      ; 0054eaef
    LEA EAX,[EBX + 0x1018]              ; 0054eaf2
    MOV EDX,dword ptr [EAX]             ; 0054eaf8
    FLD float ptr [EBX + 0x1024]        ; 0054eafa
    MOV dword ptr [ESP + 0xf4],EDX      ; 0054eb00
    LEA EDX,[ESP + 0x8c]                ; 0054eb07
    FILD dword ptr [ESP + 0xf4]         ; 0054eb0e
    PUSH EDX                            ; 0054eb15
    LEA EDX,[ESP + 0x9c]                ; 0054eb16
    FXCH                                ; 0054eb1d
    FDIV float ptr [EBX + 0x1028]       ; 0054eb1f
    FMULP                               ; 0054eb25
    PUSH EDX                            ; 0054eb27
    FSTP float ptr [ESP + 0xe8]         ; 0054eb28
    PUSH dword ptr [ESP + 0xe8]         ; 0054eb2f
    PUSH EAX                            ; 0054eb36
    CALL core_course.cpp_CCourse_evaluate_FUN_0043b800 ; 0054eb37
        ;   XREF to: 0043b800 (UNCONDITIONAL_CALL)  ; undefined core_course.cpp_CCourse_evaluate_FUN_0043b800()
    ADD ESP,0x10                        ; 0054eb3c
    FLD float ptr [EBX + 0x1024]        ; 0054eb3f
    FADD float ptr [EBP + 0x18]         ; 0054eb45
    FST float ptr [EBX + 0x1024]        ; 0054eb48
    FCOMP float ptr [EBX + 0x1028]      ; 0054eb4e
    FNSTSW AX                           ; 0054eb54
    SAHF                                ; 0054eb56
    JBE 0x0054eb6b                      ; 0054eb57
        ;   XREF to: 0054eb6b (CONDITIONAL_JUMP)  ; LAB_0054eb6b
    FLD float ptr [EBX + 0x1028]        ; 0054eb59
    FSUBR float ptr [EBX + 0x1024]      ; 0054eb5f
    FSTP float ptr [EBX + 0x1024]       ; 0054eb65
    LEA EAX,[EBX + 0x1018]              ; 0054eb6b
        ;   Label: LAB_0054eb6b
    MOV EDX,dword ptr [EAX]             ; 0054eb71
    FLD float ptr [EBX + 0x1024]        ; 0054eb73
    MOV dword ptr [ESP + 0xf4],EDX      ; 0054eb79
    LEA EDX,[EBX + 0x30]                ; 0054eb80
    FILD dword ptr [ESP + 0xf4]         ; 0054eb83
    PUSH EDX                            ; 0054eb8a
    LEA ESI,[EBX + 0x20]                ; 0054eb8b
    FXCH                                ; 0054eb8e
    FDIV float ptr [EBX + 0x1028]       ; 0054eb90
    FMULP                               ; 0054eb96
    PUSH ESI                            ; 0054eb98
    FSTP float ptr [ESP + 0xe8]         ; 0054eb99
    PUSH dword ptr [ESP + 0xe8]         ; 0054eba0
    PUSH EAX                            ; 0054eba7
    CALL core_course.cpp_CCourse_evaluate_FUN_0043b800 ; 0054eba8
        ;   XREF to: 0043b800 (UNCONDITIONAL_CALL)  ; undefined core_course.cpp_CCourse_evaluate_FUN_0043b800()
    FLD float ptr [ESI]                 ; 0054ebad
    ADD ESP,0x10                        ; 0054ebaf
    XOR EDX,EDX                         ; 0054ebb2
    FLD float ptr [EBP + 0x18]          ; 0054ebb4
    FXCH                                ; 0054ebb7
    FSUB float ptr [ESP + 0x98]         ; 0054ebb9
    FLDZ                                ; 0054ebc0
    FXCH                                ; 0054ebc2
    FSTP float ptr [ESP + 0x80]         ; 0054ebc4
    FLD float ptr [ESI + 0x4]           ; 0054ebcb
    FSUB float ptr [ESP + 0x9c]         ; 0054ebce
    MOV dword ptr [ESP + 0xe4],EDX      ; 0054ebd5
    FSTP float ptr [ESP + 0x84]         ; 0054ebdc
    FLD float ptr [ESI + 0x8]           ; 0054ebe3
    FSUB float ptr [ESP + 0xa0]         ; 0054ebe6
    LEA EDX,[EBX + 0x8bc]               ; 0054ebed
    FSTP float ptr [ESP + 0x88]         ; 0054ebf3
    FCOMPP                              ; 0054ebfa
    FNSTSW AX                           ; 0054ebfc
    SAHF                                ; 0054ebfe
    JNC 0x0054ede1                      ; 0054ebff
        ;   XREF to: 0054ede1 (CONDITIONAL_JUMP)  ; LAB_0054ede1
    FLD1                                ; 0054ec05
    FLD float ptr [ESP + 0x80]          ; 0054ec07
    FXCH                                ; 0054ec0e
    FDIV float ptr [EBP + 0x18]         ; 0054ec10
    FXCH                                ; 0054ec13
    FMUL ST1                            ; 0054ec15
    FLD float ptr [ESP + 0x84]          ; 0054ec17
    FMUL ST2                            ; 0054ec1e
    FLD float ptr [ESP + 0x88]          ; 0054ec20
    FMULP ST3                           ; 0054ec27
    LEA EAX,[ESP + 0xb0]                ; 0054ec29
    FXCH                                ; 0054ec30
    FSTP float ptr [ESP + 0xb0]         ; 0054ec32
    FSTP float ptr [ESP + 0xb4]         ; 0054ec39
    FSTP float ptr [ESP + 0xb8]         ; 0054ec40
    CMP EDX,EAX                         ; 0054ec47
    JZ 0x0054ec68                       ; 0054ec49
        ;   XREF to: 0054ec68 (CONDITIONAL_JUMP)  ; LAB_0054ec68
    MOV EAX,dword ptr [ESP + 0xb0]      ; 0054ec4b
    MOV dword ptr [EDX],EAX             ; 0054ec52
    MOV EAX,dword ptr [ESP + 0xb4]      ; 0054ec54
    MOV dword ptr [EDX + 0x4],EAX       ; 0054ec5b
    MOV EAX,dword ptr [ESP + 0xb8]      ; 0054ec5e
    MOV dword ptr [EDX + 0x8],EAX       ; 0054ec65
    LEA EAX,[EBX + 0x8bc]               ; 0054ec68
        ;   Label: LAB_0054ec68
    FLD float ptr [EAX + 0x4]           ; 0054ec6e
    FMUL ST0                            ; 0054ec71
    FLD float ptr [EAX]                 ; 0054ec73
    FMUL ST0                            ; 0054ec75
    FADDP                               ; 0054ec77
    FLD float ptr [EAX + 0x8]           ; 0054ec79
    FMUL ST0                            ; 0054ec7c
    FADDP                               ; 0054ec7e
    FSQRT                               ; 0054ec80
    FSTP float ptr [ESP + 0xe4]         ; 0054ec82
    LEA EAX,[EBX + 0x8bc]               ; 0054ec89
        ;   Label: LAB_0054ec89
    FLD float ptr [0x005973a8]          ; 0054ec8f | FLOAT_005973a8
    FLD float ptr [EAX]                 ; 0054ec95
    FMUL ST1                            ; 0054ec97
    FSTP float ptr [ESP + 0xd4]         ; 0054ec99
    FLD float ptr [EAX + 0x4]           ; 0054eca0
    FMUL ST1                            ; 0054eca3
    FSTP float ptr [ESP + 0xd8]         ; 0054eca5
    FMUL float ptr [EAX + 0x8]          ; 0054ecac
    LEA EDX,[EBX + 0x1058]              ; 0054ecaf
    LEA EAX,[ESP + 0xd4]                ; 0054ecb5
    FSTP float ptr [ESP + 0xdc]         ; 0054ecbc
    CMP EDX,EAX                         ; 0054ecc3
    JZ 0x0054ece4                       ; 0054ecc5
        ;   XREF to: 0054ece4 (CONDITIONAL_JUMP)  ; LAB_0054ece4
    MOV EAX,dword ptr [ESP + 0xd4]      ; 0054ecc7
    MOV dword ptr [EDX],EAX             ; 0054ecce
    MOV EAX,dword ptr [ESP + 0xd8]      ; 0054ecd0
    MOV dword ptr [EDX + 0x4],EAX       ; 0054ecd7
    MOV EAX,dword ptr [ESP + 0xdc]      ; 0054ecda
    MOV dword ptr [EDX + 0x8],EAX       ; 0054ece1
    LEA EAX,[EBX + 0x8bc]               ; 0054ece4
        ;   Label: LAB_0054ece4
    PUSH EAX                            ; 0054ecea
    LEA EAX,[ESP + 0xc0]                ; 0054eceb
    PUSH EAX                            ; 0054ecf2
    PUSH EBX                            ; 0054ecf3
    CALL core_actor.cpp_CDemonActor_inverseTransformVector_FUN_0040a220 ; 0054ecf4
        ;   XREF to: 0040a220 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_inverseTransformVector_FUN_0040a220()
    LEA EDX,[EBX + 0x8c8]               ; 0054ecf9
    ADD ESP,0xc                         ; 0054ecff
    CMP EDX,EAX                         ; 0054ed02
    JZ 0x0054ed16                       ; 0054ed04
        ;   XREF to: 0054ed16 (CONDITIONAL_JUMP)  ; LAB_0054ed16
    MOV ECX,dword ptr [EAX]             ; 0054ed06
    MOV dword ptr [EDX],ECX             ; 0054ed08
    MOV ECX,dword ptr [EAX + 0x4]       ; 0054ed0a
    MOV dword ptr [EDX + 0x4],ECX       ; 0054ed0d
    MOV ECX,dword ptr [EAX + 0x8]       ; 0054ed10
    MOV dword ptr [EDX + 0x8],ECX       ; 0054ed13
    MOV ECX,dword ptr [EBX + 0x930]     ; 0054ed16
        ;   Label: LAB_0054ed16
    XOR ESI,ESI                         ; 0054ed1c
    TEST ECX,ECX                        ; 0054ed1e
    JLE 0x0054ed51                      ; 0054ed20
        ;   XREF to: 0054ed51 (CONDITIONAL_JUMP)  ; LAB_0054ed51
    FLD float ptr [ESP + 0xe4]          ; 0054ed22
    MOV EAX,EBX                         ; 0054ed29
    FLD float ptr [EAX + 0x940]         ; 0054ed2b
        ;   Label: LAB_0054ed2b
    FMUL ST1                            ; 0054ed31
    FADD float ptr [EAX + 0xac4]        ; 0054ed33
    INC ESI                             ; 0054ed39
    FSTP float ptr [EAX + 0xac4]        ; 0054ed3a
    MOV EDI,dword ptr [EBX + 0x930]     ; 0054ed40
    ADD EAX,0x1b4                       ; 0054ed46
    CMP ESI,EDI                         ; 0054ed4b
    JL 0x0054ed2b                       ; 0054ed4d
        ;   XREF to: 0054ed2b (CONDITIONAL_JUMP)  ; LAB_0054ed2b
    FSTP ST0                            ; 0054ed4f
    FLD float ptr [EBX + 0x24]          ; 0054ed51
        ;   Label: LAB_0054ed51
    FLD float ptr [EBX + 0x34]          ; 0054ed54
    MOV dword ptr [EBX + 0x30],0x0      ; 0054ed57
    LEA EAX,[ESP + 0x68]                ; 0054ed5e
    MOV EDX,dword ptr [EBX + 0x14c]     ; 0054ed62
    XOR EDI,EDI                         ; 0054ed68
    PUSH EAX                            ; 0054ed6a
    FXCH                                ; 0054ed6b
    FADD float ptr [0x005973ac]         ; 0054ed6d | FLOAT_005973ac
    FXCH                                ; 0054ed73
    FADD float ptr [0x005973b0]         ; 0054ed75 | FLOAT_005973b0
    FXCH                                ; 0054ed7b
    FSTP float ptr [EBX + 0x24]         ; 0054ed7d
    PUSH EBX                            ; 0054ed80
    FSTP float ptr [EBX + 0x34]         ; 0054ed81
    CALL dword ptr [EDX + 0x14]         ; 0054ed84
    ADD ESP,0x8                         ; 0054ed87
    MOV dword ptr [ESP + 0xf0],EDI      ; 0054ed8a
    MOV ESI,dword ptr [0x005be368]      ; 0054ed91 | DAT_005be368
        ;   Label: LAB_0054ed91
    CMP EDI,dword ptr [ESI + 0x14ecb0]  ; 0054ed97 | DAT_01fa5f34
    JGE 0x0054ef4a                      ; 0054ed9d
        ;   XREF to: 0054ef4a (CONDITIONAL_JUMP)  ; LAB_0054ef4a
    MOV ECX,dword ptr [ESP + 0xf0]      ; 0054eda3
    MOV EAX,[0x01ccdc10]                ; 0054edaa | DAT_01ccdc10
    ADD ESI,ECX                         ; 0054edaf
    PUSH EAX                            ; 0054edb1
    MOV ESI,dword ptr [ESI + 0x14ecb4]  ; 0054edb2 | DAT_01fa5f38 | DAT_01fa5f3c
    PUSH ESI                            ; 0054edb8
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 0054edb9
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    ADD ESP,0x8                         ; 0054edbe
    TEST EAX,EAX                        ; 0054edc1
    JZ 0x0054ee09                       ; 0054edc3
        ;   XREF to: 0054ee09 (CONDITIONAL_JUMP)  ; LAB_0054ee09
    CMP EBX,dword ptr [EAX + 0xbd48]    ; 0054edc5
    JNZ 0x0054ee09                      ; 0054edcb
        ;   XREF to: 0054ee09 (CONDITIONAL_JUMP)  ; LAB_0054ee09
    MOV ECX,dword ptr [ESP + 0xf0]      ; 0054edcd
        ;   Label: LAB_0054edcd
    ADD ECX,0x4                         ; 0054edd4
    INC EDI                             ; 0054edd7
    MOV dword ptr [ESP + 0xf0],ECX      ; 0054edd8
    JMP 0x0054ed91                      ; 0054eddf
        ;   XREF to: 0054ed91 (UNCONDITIONAL_JUMP)  ; LAB_0054ed91
    CMP EDX,0x2dd1184                   ; 0054ede1
        ;   Label: LAB_0054ede1
    JZ 0x0054ec89                       ; 0054ede7
        ;   XREF to: 0054ec89 (CONDITIONAL_JUMP)  ; LAB_0054ec89
    MOV EAX,[0x02dd1184]                ; 0054eded | DAT_02dd1184
    MOV dword ptr [EDX],EAX             ; 0054edf2
    MOV EAX,[0x02dd1188]                ; 0054edf4 | DAT_02dd1188
    MOV dword ptr [EDX + 0x4],EAX       ; 0054edf9
    MOV EAX,[0x02dd118c]                ; 0054edfc | DAT_02dd118c
    MOV dword ptr [EDX + 0x8],EAX       ; 0054ee01
    JMP 0x0054ec89                      ; 0054ee04
        ;   XREF to: 0054ec89 (UNCONDITIONAL_JUMP)  ; LAB_0054ec89
    LEA EAX,[ESP + 0x40]                ; 0054ee09
        ;   Label: LAB_0054ee09
    PUSH EAX                            ; 0054ee0d
    CALL core_setcolid.cpp_SCollisionInfo_ctor_FUN_00511990 ; 0054ee0e
        ;   XREF to: 00511990 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_SCollisionInfo_ctor_FUN_00511990()
    ADD ESP,0x4                         ; 0054ee13
    LEA EDX,[ESP + 0x40]                ; 0054ee16
    PUSH EDX                            ; 0054ee1a
    MOV EAX,dword ptr [ESI + 0x14c]     ; 0054ee1b
    PUSH ESI                            ; 0054ee21
    CALL dword ptr [EAX + 0x34]         ; 0054ee22
    ADD ESP,0x8                         ; 0054ee25
    CMP EAX,0x2                         ; 0054ee28
    JNZ 0x0054edcd                      ; 0054ee2b
        ;   XREF to: 0054edcd (CONDITIONAL_JUMP)  ; LAB_0054edcd
    FLD float ptr [EBX + 0x24]          ; 0054ee2d
    FADD float ptr [ESP + 0x78]         ; 0054ee30
    FCOMP float ptr [ESI + 0x24]        ; 0054ee34
    FNSTSW AX                           ; 0054ee37
    SAHF                                ; 0054ee39
    JC 0x0054edcd                       ; 0054ee3a
        ;   XREF to: 0054edcd (CONDITIONAL_JUMP)  ; LAB_0054edcd
    FLD float ptr [ESI + 0x24]          ; 0054ee3c
    FADD float ptr [ESP + 0x58]         ; 0054ee3f
    FLD float ptr [EBX + 0x24]          ; 0054ee43
    FADD float ptr [ESP + 0x6c]         ; 0054ee46
    FCOMPP                              ; 0054ee4a
    FNSTSW AX                           ; 0054ee4c
    SAHF                                ; 0054ee4e
    JA 0x0054edcd                       ; 0054ee4f
        ;   XREF to: 0054edcd (CONDITIONAL_JUMP)  ; LAB_0054edcd
    LEA EAX,[ESI + 0x20]                ; 0054ee55
    PUSH EAX                            ; 0054ee58
    LEA EAX,[ESP + 0xa8]                ; 0054ee59
    PUSH EAX                            ; 0054ee60
    PUSH EBX                            ; 0054ee61
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290 ; 0054ee62
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290()
    ADD ESP,0xc                         ; 0054ee67
    FLD float ptr [ESP + 0xa4]          ; 0054ee6a
    FADD float ptr [ESP + 0x5c]         ; 0054ee71
    FCOMP float ptr [ESP + 0x68]        ; 0054ee75
    FNSTSW AX                           ; 0054ee79
    SAHF                                ; 0054ee7b
    JC 0x0054edcd                       ; 0054ee7c
        ;   XREF to: 0054edcd (CONDITIONAL_JUMP)  ; LAB_0054edcd
    FLD float ptr [ESP + 0xa4]          ; 0054ee82
    FSUB float ptr [ESP + 0x5c]         ; 0054ee89
    FCOMP float ptr [ESP + 0x74]        ; 0054ee8d
    FNSTSW AX                           ; 0054ee91
    SAHF                                ; 0054ee93
    JA 0x0054edcd                       ; 0054ee94
        ;   XREF to: 0054edcd (CONDITIONAL_JUMP)  ; LAB_0054edcd
    FLD float ptr [ESP + 0xac]          ; 0054ee9a
    FADD float ptr [ESP + 0x5c]         ; 0054eea1
    FCOMP float ptr [ESP + 0x70]        ; 0054eea5
    FNSTSW AX                           ; 0054eea9
    SAHF                                ; 0054eeab
    JC 0x0054edcd                       ; 0054eeac
        ;   XREF to: 0054edcd (CONDITIONAL_JUMP)  ; LAB_0054edcd
    FLD float ptr [ESP + 0xac]          ; 0054eeb2
    FSUB float ptr [ESP + 0x5c]         ; 0054eeb9
    FST float ptr [ESP]                 ; 0054eebd
    FCOMP float ptr [ESP + 0x7c]        ; 0054eec0
    FNSTSW AX                           ; 0054eec4
    SAHF                                ; 0054eec6
    JBE 0x0054ef11                      ; 0054eec7
        ;   XREF to: 0054ef11 (CONDITIONAL_JUMP)  ; LAB_0054ef11
    FLD float ptr [ESP]                 ; 0054eec9
    FLD float ptr [ESP + 0x7c]          ; 0054eecc
    FADD double ptr [0x005973c8]        ; 0054eed0 | DOUBLE_005973c8
    FCOMPP                              ; 0054eed6
    FNSTSW AX                           ; 0054eed8
    SAHF                                ; 0054eeda
    JBE 0x0054edcd                      ; 0054eedb
        ;   XREF to: 0054edcd (CONDITIONAL_JUMP)  ; LAB_0054edcd
    MOV EDX,dword ptr [EBX + 0x104c]    ; 0054eee1
    PUSH EDX                            ; 0054eee7
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00526c50 ; 0054eee8
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_isSfxPlaying_FUN_00526c50()
    ADD ESP,0x4                         ; 0054eeed
    TEST EAX,EAX                        ; 0054eef0
    JNZ 0x0054edcd                      ; 0054eef2
        ;   XREF to: 0054edcd (CONDITIONAL_JUMP)  ; LAB_0054edcd
    PUSH 0x597320                       ; 0054eef8 | = "model-t-horn?.wav"
    PUSH EBX                            ; 0054eefd
    CALL core_vehicle.cpp_CVehicle_playTrackedSound_FUN_0054f7a0 ; 0054eefe
        ;   XREF to: 0054f7a0 (UNCONDITIONAL_CALL)  ; undefined core_vehicle.cpp_CVehicle_playTrackedSound_FUN_0054f7a0()
    ADD ESP,0x8                         ; 0054ef03
    MOV dword ptr [EBX + 0x104c],EAX    ; 0054ef06
    JMP 0x0054edcd                      ; 0054ef0c
        ;   XREF to: 0054edcd (UNCONDITIONAL_JUMP)  ; LAB_0054edcd
    LEA EAX,[ESP + 0x4]                 ; 0054ef11
        ;   Label: LAB_0054ef11
    PUSH EAX                            ; 0054ef15
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0 ; 0054ef16
        ;   XREF to: 00423ed0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0()
    MOV ECX,0x4                         ; 0054ef1b
    ADD ESP,0x4                         ; 0054ef20
    LEA EDX,[ESP + 0x4]                 ; 0054ef23
    MOV EAX,0x4479c000                  ; 0054ef27
    PUSH EDX                            ; 0054ef2c
    MOV dword ptr [ESP + 0x38],ECX      ; 0054ef2d
    MOV dword ptr [ESP + 0xc],EAX       ; 0054ef31
    PUSH ESI                            ; 0054ef35
    MOV EAX,dword ptr [ESI + 0x14c]     ; 0054ef36
    CALL dword ptr [EAX + 0x100]        ; 0054ef3c
    ADD ESP,0x8                         ; 0054ef42
    JMP 0x0054edcd                      ; 0054ef45
        ;   XREF to: 0054edcd (UNCONDITIONAL_JUMP)  ; LAB_0054edcd
    MOV ECX,dword ptr [EBX + 0x1064]    ; 0054ef4a
        ;   Label: LAB_0054ef4a
    TEST ECX,ECX                        ; 0054ef50
    JZ 0x0054efb1                       ; 0054ef52
        ;   XREF to: 0054efb1 (CONDITIONAL_JUMP)  ; LAB_0054efb1
    MOV ECX,dword ptr [EBX + 0x1050]    ; 0054ef54
        ;   Label: LAB_0054ef54
    PUSH ECX                            ; 0054ef5a
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00526c50 ; 0054ef5b
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_isSfxPlaying_FUN_00526c50()
    ADD ESP,0x4                         ; 0054ef60
    TEST EAX,EAX                        ; 0054ef63
    JNZ 0x0054ef7b                      ; 0054ef65
        ;   XREF to: 0054ef7b (CONDITIONAL_JUMP)  ; LAB_0054ef7b
    PUSH 0x597383                       ; 0054ef67 | = "ext-modelt-fast_??.wav"
    PUSH EBX                            ; 0054ef6c
    CALL core_vehicle.cpp_CVehicle_playTrackedSound_FUN_0054f7a0 ; 0054ef6d
        ;   XREF to: 0054f7a0 (UNCONDITIONAL_CALL)  ; undefined core_vehicle.cpp_CVehicle_playTrackedSound_FUN_0054f7a0()
    ADD ESP,0x8                         ; 0054ef72
    MOV dword ptr [EBX + 0x1050],EAX    ; 0054ef75
    MOV ESI,dword ptr [EBX + 0x1050]    ; 0054ef7b
        ;   Label: LAB_0054ef7b
    PUSH 0x3f800000                     ; 0054ef81
    PUSH ESI                            ; 0054ef86
    CALL sound_sndmain.cpp_setSfxBaseFrequency_FUN_00527130 ; 0054ef87
        ;   XREF to: 00527130 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_setSfxBaseFrequency_FUN_00527130()
    FLD float ptr [EBX + 0x8c8]         ; 0054ef8c
    FABS                                ; 0054ef92
    ADD ESP,0x8                         ; 0054ef94
    FCOMP double ptr [0x005973c0]       ; 0054ef97 | DOUBLE_005973c0
    FNSTSW AX                           ; 0054ef9d
    SAHF                                ; 0054ef9f
    JA 0x0054f2e7                       ; 0054efa0
        ;   XREF to: 0054f2e7 (CONDITIONAL_JUMP)  ; LAB_0054f2e7
    MOV ESP,EBP                         ; 0054efa6
        ;   Label: LAB_0054efa6
    POP EBP                             ; 0054efa8
    POP EDI                             ; 0054efa9
    POP ESI                             ; 0054efaa
    POP EBX                             ; 0054efab
    LEA EAX,[EAX]                       ; 0054efac
    RET                                 ; 0054efb0
    MOV EAX,[0x01cae0e8]                ; 0054efb1 | DAT_01cae0e8
        ;   Label: LAB_0054efb1
    LEA EDX,[EBX + 0x20]                ; 0054efb6
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 0054efb9
    FLD float ptr [EDX]                 ; 0054efc0
    FSUB float ptr [EAX + 0x20]         ; 0054efc2
    FSTP float ptr [ESP + 0xc8]         ; 0054efc5
    FLD float ptr [EDX + 0x4]           ; 0054efcc
    FSUB float ptr [EAX + 0x24]         ; 0054efcf
    FST float ptr [ESP + 0xcc]          ; 0054efd2
    FMUL float ptr [ESP + 0xcc]         ; 0054efd9
    FLD float ptr [ESP + 0xc8]          ; 0054efe0
    FMUL ST0                            ; 0054efe7
    FLD float ptr [EDX + 0x8]           ; 0054efe9
    FSUB float ptr [EAX + 0x28]         ; 0054efec
    FXCH                                ; 0054efef
    FADDP ST2,ST0                       ; 0054eff1
    FST float ptr [ESP + 0xd0]          ; 0054eff3
    FMUL float ptr [ESP + 0xd0]         ; 0054effa
    FADDP                               ; 0054f001
    FSQRT                               ; 0054f003
    FCOMP double ptr [0x005973b8]       ; 0054f005 | DOUBLE_005973b8
    FNSTSW AX                           ; 0054f00b
    SAHF                                ; 0054f00d
    JBE 0x0054ef54                      ; 0054f00e
        ;   XREF to: 0054ef54 (CONDITIONAL_JUMP)  ; LAB_0054ef54
    CMP dword ptr [ESI + 0x14cd6c],0x672 ; 0054f014 | DAT_01fa3ff0
    JGE 0x0054ef54                      ; 0054f01e
        ;   XREF to: 0054ef54 (CONDITIONAL_JUMP)  ; LAB_0054ef54
    MOV dword ptr [ESP + 0xe8],ECX      ; 0054f024
    MOV dword ptr [ESP + 0xec],ECX      ; 0054f02b
    XOR EDI,EDI                         ; 0054f032
    XOR ESI,ESI                         ; 0054f034
    MOV EAX,[0x005be368]                ; 0054f036 | DAT_005be368
        ;   Label: LAB_0054f036
    CMP EDI,dword ptr [EAX + 0x150bf4]  ; 0054f03b | DAT_01fa7e78
    JL 0x0054f1f5                       ; 0054f041
        ;   XREF to: 0054f1f5 (CONDITIONAL_JUMP)  ; LAB_0054f1f5
    CMP dword ptr [ESP + 0xec],0x0      ; 0054f047
    JNZ 0x0054f250                      ; 0054f04f
        ;   XREF to: 0054f250 (CONDITIONAL_JUMP)  ; LAB_0054f250
    CMP dword ptr [ESP + 0xec],0x0      ; 0054f055
        ;   Label: LAB_0054f055
    JNZ 0x0054f280                      ; 0054f05d
        ;   XREF to: 0054f280 (CONDITIONAL_JUMP)  ; LAB_0054f280
    MOV ECX,dword ptr [EBX + 0x1068]    ; 0054f063
    TEST ECX,ECX                        ; 0054f069
    JNZ 0x0054f263                      ; 0054f06b
        ;   XREF to: 0054f263 (CONDITIONAL_JUMP)  ; LAB_0054f263
    PUSH 0xbdfc                         ; 0054f071
        ;   Label: LAB_0054f071
    CALL FUN_0056497c                   ; 0054f076
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined FUN_0056497c()
    ADD ESP,0x4                         ; 0054f07b
    TEST EAX,EAX                        ; 0054f07e
    JZ 0x0054f08b                       ; 0054f080
        ;   XREF to: 0054f08b (CONDITIONAL_JUMP)  ; LAB_0054f08b
    PUSH EAX                            ; 0054f082
    CALL core_mobster.cpp_CMobster_ctor_FUN_004da150 ; 0054f083
        ;   XREF to: 004da150 (UNCONDITIONAL_CALL)  ; undefined core_mobster.cpp_CMobster_ctor_FUN_004da150()
    ADD ESP,0x4                         ; 0054f088
    PUSH 0x57c                          ; 0054f08b
        ;   Label: LAB_0054f08b
    MOV ESI,EAX                         ; 0054f090
    CALL FUN_0056497c                   ; 0054f092
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined FUN_0056497c()
    ADD ESP,0x4                         ; 0054f097
    TEST EAX,EAX                        ; 0054f09a
    JZ 0x0054f0a7                       ; 0054f09c
        ;   XREF to: 0054f0a7 (CONDITIONAL_JUMP)  ; LAB_0054f0a7
    PUSH EAX                            ; 0054f09e
    CALL core_tommygun.cpp_CTommyGun_ctor_FUN_00545b90 ; 0054f09f
        ;   XREF to: 00545b90 (UNCONDITIONAL_CALL)  ; undefined core_tommygun.cpp_CTommyGun_ctor_FUN_00545b90()
    ADD ESP,0x4                         ; 0054f0a4
    MOV EDI,EAX                         ; 0054f0a7
        ;   Label: LAB_0054f0a7
    TEST ESI,ESI                        ; 0054f0a9
    JNZ 0x0054f2bb                      ; 0054f0ab
        ;   XREF to: 0054f2bb (CONDITIONAL_JUMP)  ; LAB_0054f2bb
    MOV EAX,0x597332                    ; 0054f0b1 | = "..\\core\\vehicle.cpp"
        ;   Label: LAB_0054f0b1
    MOV EDX,0x161                       ; 0054f0b6
    PUSH 0x597346                       ; 0054f0bb | = "CMobster::process - Out of memory!"
    MOV [0x01cc4800],EAX                ; 0054f0c0 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 0054f0c5 | DAT_01cc4804
    CALL FUN_004c8440                   ; 0054f0cb
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 0054f0d0
    PUSH 0x3f000000                     ; 0054f0d3
        ;   Label: LAB_0054f0d3
    CALL core_actor.cpp_randomChance_FUN_0040dea0 ; 0054f0d8
        ;   XREF to: 0040dea0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_randomChance_FUN_0040dea0()
    MOV EDX,EAX                         ; 0054f0dd
    ADD ESP,0x4                         ; 0054f0df
    LEA EAX,[ESI + 0x150]               ; 0054f0e2
    TEST EDX,EDX                        ; 0054f0e8
    JZ 0x0054f2c8                       ; 0054f0ea
        ;   XREF to: 0054f2c8 (CONDITIONAL_JUMP)  ; LAB_0054f2c8
    PUSH 0x597369                       ; 0054f0f0 | = "mobster3.dfm"
    PUSH EAX                            ; 0054f0f5
        ;   Label: LAB_0054f0f5
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0 ; 0054f0f6
        ;   XREF to: 0051e0c0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0()
    ADD ESP,0x8                         ; 0054f0fb
    MOV ECX,dword ptr [ESP + 0xec]      ; 0054f0fe
    MOV dword ptr [ESI + 0xbd48],EBX    ; 0054f105
    TEST ECX,ECX                        ; 0054f10b
    JNZ 0x0054f2d2                      ; 0054f10d
        ;   XREF to: 0054f2d2 (CONDITIONAL_JUMP)  ; LAB_0054f2d2
    MOV dword ptr [ESI + 0xbd4c],ECX    ; 0054f113
    MOV dword ptr [EBX + 0x1068],ESI    ; 0054f119
    PUSH ESI                            ; 0054f11f
        ;   Label: LAB_0054f11f
    MOV EAX,[0x005baf90]                ; 0054f120 | DAT_005baf90
    PUSH EAX                            ; 0054f125 | DAT_01cc9450
    CALL core_mission.cpp_CDemonMission_generateActorName_FUN_004d9720 ; 0054f126
        ;   XREF to: 004d9720 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_CDemonMission_generateActorName_FUN_004d9720()
    ADD ESP,0x8                         ; 0054f12b
    PUSH EDI                            ; 0054f12e
    MOV EDX,dword ptr [0x005baf90]      ; 0054f12f | DAT_005baf90
    PUSH EDX                            ; 0054f135 | DAT_01cc9450
    CALL core_mission.cpp_CDemonMission_generateActorName_FUN_004d9720 ; 0054f136
        ;   XREF to: 004d9720 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_CDemonMission_generateActorName_FUN_004d9720()
    LEA EAX,[EBX + 0x20]                ; 0054f13b
    LEA EDX,[ESI + 0x20]                ; 0054f13e
    MOV ECX,dword ptr [EAX]             ; 0054f141
    MOV dword ptr [EDX],ECX             ; 0054f143
    MOV ECX,dword ptr [EAX + 0x4]       ; 0054f145
    MOV dword ptr [EDX + 0x4],ECX       ; 0054f148
    MOV ECX,dword ptr [EAX + 0x8]       ; 0054f14b
    MOV dword ptr [EDX + 0x8],ECX       ; 0054f14e
    MOV EAX,dword ptr [EAX + 0xc]       ; 0054f151
    MOV dword ptr [EDX + 0xc],EAX       ; 0054f154
    LEA EAX,[ESI + 0x30]                ; 0054f157
    LEA EDX,[EBX + 0x30]                ; 0054f15a
    ADD ESP,0x8                         ; 0054f15d
    CMP EAX,EDX                         ; 0054f160
    JZ 0x0054f174                       ; 0054f162
        ;   XREF to: 0054f174 (CONDITIONAL_JUMP)  ; LAB_0054f174
    MOV ECX,dword ptr [EDX]             ; 0054f164
    MOV dword ptr [EAX],ECX             ; 0054f166
    MOV ECX,dword ptr [EDX + 0x4]       ; 0054f168
    MOV dword ptr [EAX + 0x4],ECX       ; 0054f16b
    MOV ECX,dword ptr [EDX + 0x8]       ; 0054f16e
    MOV dword ptr [EAX + 0x8],ECX       ; 0054f171
    LEA EAX,[EBX + 0x20]                ; 0054f174
        ;   Label: LAB_0054f174
    LEA EDX,[EDI + 0x20]                ; 0054f177
    MOV ECX,dword ptr [EAX]             ; 0054f17a
    MOV dword ptr [EDX],ECX             ; 0054f17c
    MOV ECX,dword ptr [EAX + 0x4]       ; 0054f17e
    MOV dword ptr [EDX + 0x4],ECX       ; 0054f181
    MOV ECX,dword ptr [EAX + 0x8]       ; 0054f184
    MOV dword ptr [EDX + 0x8],ECX       ; 0054f187
    MOV EAX,dword ptr [EAX + 0xc]       ; 0054f18a
    MOV dword ptr [EDX + 0xc],EAX       ; 0054f18d
    LEA EAX,[EDI + 0x30]                ; 0054f190
    LEA EDX,[EBX + 0x30]                ; 0054f193
    CMP EAX,EDX                         ; 0054f196
    JZ 0x0054f1aa                       ; 0054f198
        ;   XREF to: 0054f1aa (CONDITIONAL_JUMP)  ; LAB_0054f1aa
    MOV ECX,dword ptr [EDX]             ; 0054f19a
    MOV dword ptr [EAX],ECX             ; 0054f19c
    MOV ECX,dword ptr [EDX + 0x4]       ; 0054f19e
    MOV dword ptr [EAX + 0x4],ECX       ; 0054f1a1
    MOV ECX,dword ptr [EDX + 0x8]       ; 0054f1a4
    MOV dword ptr [EAX + 0x8],ECX       ; 0054f1a7
    PUSH ESI                            ; 0054f1aa
        ;   Label: LAB_0054f1aa
    MOV EAX,dword ptr [ESI + 0x14c]     ; 0054f1ab
    CALL dword ptr [EAX]                ; 0054f1b1
    ADD ESP,0x4                         ; 0054f1b3
    MOV EAX,dword ptr [EDI + 0x14c]     ; 0054f1b6
    PUSH EDI                            ; 0054f1bc
    CALL dword ptr [EAX]                ; 0054f1bd
    ADD ESP,0x4                         ; 0054f1bf
    PUSH 0x0                            ; 0054f1c2
    PUSH EDI                            ; 0054f1c4
    PUSH 0x1                            ; 0054f1c5
    PUSH ESI                            ; 0054f1c7
    CALL core_charactr.cpp_CCharacter_pickupObjectNow_FUN_00428f40 ; 0054f1c8
        ;   XREF to: 00428f40 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_pickupObjectNow_FUN_00428f40()
    ADD ESP,0x10                        ; 0054f1cd
    PUSH ESI                            ; 0054f1d0
    MOV ECX,dword ptr [0x005baf90]      ; 0054f1d1 | DAT_005baf90
    PUSH ECX                            ; 0054f1d7 | DAT_01cc9450
    CALL core_mission.cpp_CDemonMission_addActorToList_FUN_004d8c60 ; 0054f1d8
        ;   XREF to: 004d8c60 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_CDemonMission_addActorToList_FUN_004d8c60()
    ADD ESP,0x8                         ; 0054f1dd
    PUSH EDI                            ; 0054f1e0
    MOV ESI,dword ptr [0x005baf90]      ; 0054f1e1 | DAT_005baf90
    PUSH ESI                            ; 0054f1e7 | DAT_01cc9450
    CALL core_mission.cpp_CDemonMission_addActorToList_FUN_004d8c60 ; 0054f1e8
        ;   XREF to: 004d8c60 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_CDemonMission_addActorToList_FUN_004d8c60()
    ADD ESP,0x8                         ; 0054f1ed
    JMP 0x0054ef54                      ; 0054f1f0
        ;   XREF to: 0054ef54 (UNCONDITIONAL_JUMP)  ; LAB_0054ef54
    MOV EDX,dword ptr [0x01ccdc10]      ; 0054f1f5 | DAT_01ccdc10
        ;   Label: LAB_0054f1f5
    PUSH EDX                            ; 0054f1fb
    MOV ECX,dword ptr [ESI + EAX*0x1 + 0x150bf8] ; 0054f1fc
    PUSH ECX                            ; 0054f203
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 0054f204
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    ADD ESP,0x8                         ; 0054f209
    TEST EAX,EAX                        ; 0054f20c
    JZ 0x0054f247                       ; 0054f20e
        ;   XREF to: 0054f247 (CONDITIONAL_JUMP)  ; LAB_0054f247
    MOV EDX,dword ptr [EAX + 0xbd48]    ; 0054f210
    CMP EBX,EDX                         ; 0054f216
    JNZ 0x0054f247                      ; 0054f218
        ;   XREF to: 0054f247 (CONDITIONAL_JUMP)  ; LAB_0054f247
    CMP dword ptr [EAX + 0xbd4c],0x0    ; 0054f21a
    JNZ 0x0054f236                      ; 0054f221
        ;   XREF to: 0054f236 (CONDITIONAL_JUMP)  ; LAB_0054f236
    MOV dword ptr [EDX + 0x1068],EAX    ; 0054f223
    MOV dword ptr [ESP + 0xec],0x1      ; 0054f229
    JMP 0x0054f247                      ; 0054f234
        ;   XREF to: 0054f247 (UNCONDITIONAL_JUMP)  ; LAB_0054f247
    MOV dword ptr [EDX + 0x106c],EAX    ; 0054f236
        ;   Label: LAB_0054f236
    MOV dword ptr [ESP + 0xe8],0x1      ; 0054f23c
    INC EDI                             ; 0054f247
        ;   Label: LAB_0054f247
    ADD ESI,0x4                         ; 0054f248
    JMP 0x0054f036                      ; 0054f24b
        ;   XREF to: 0054f036 (UNCONDITIONAL_JUMP)  ; LAB_0054f036
    CMP dword ptr [ESP + 0xe8],0x0      ; 0054f250
        ;   Label: LAB_0054f250
    JZ 0x0054f055                       ; 0054f258
        ;   XREF to: 0054f055 (CONDITIONAL_JUMP)  ; LAB_0054f055
    JMP 0x0054ef54                      ; 0054f25e
        ;   XREF to: 0054ef54 (UNCONDITIONAL_JUMP)  ; LAB_0054ef54
    PUSH ECX                            ; 0054f263
        ;   Label: LAB_0054f263
    MOV EDX,dword ptr [ECX + 0x14c]     ; 0054f264
    CALL dword ptr [EDX + 0x104]        ; 0054f26a
    ADD ESP,0x4                         ; 0054f270
    TEST EAX,EAX                        ; 0054f273
    JZ 0x0054ef54                       ; 0054f275
        ;   XREF to: 0054ef54 (CONDITIONAL_JUMP)  ; LAB_0054ef54
    JMP 0x0054f071                      ; 0054f27b
        ;   XREF to: 0054f071 (UNCONDITIONAL_JUMP)  ; LAB_0054f071
    CMP dword ptr [ESP + 0xe8],0x0      ; 0054f280
        ;   Label: LAB_0054f280
    JNZ 0x0054f071                      ; 0054f288
        ;   XREF to: 0054f071 (CONDITIONAL_JUMP)  ; LAB_0054f071
    MOV EDX,dword ptr [EBX + 0x106c]    ; 0054f28e
    TEST EDX,EDX                        ; 0054f294
    JZ 0x0054f071                       ; 0054f296
        ;   XREF to: 0054f071 (CONDITIONAL_JUMP)  ; LAB_0054f071
    MOV EAX,EDX                         ; 0054f29c
    PUSH EAX                            ; 0054f29e
    MOV EDX,dword ptr [EDX + 0x14c]     ; 0054f29f
    CALL dword ptr [EDX + 0x104]        ; 0054f2a5
    ADD ESP,0x4                         ; 0054f2ab
    TEST EAX,EAX                        ; 0054f2ae
    JZ 0x0054ef54                       ; 0054f2b0
        ;   XREF to: 0054ef54 (CONDITIONAL_JUMP)  ; LAB_0054ef54
    JMP 0x0054f071                      ; 0054f2b6
        ;   XREF to: 0054f071 (UNCONDITIONAL_JUMP)  ; LAB_0054f071
    TEST EAX,EAX                        ; 0054f2bb
        ;   Label: LAB_0054f2bb
    JZ 0x0054f0b1                       ; 0054f2bd
        ;   XREF to: 0054f0b1 (CONDITIONAL_JUMP)  ; LAB_0054f0b1
    JMP 0x0054f0d3                      ; 0054f2c3
        ;   XREF to: 0054f0d3 (UNCONDITIONAL_JUMP)  ; LAB_0054f0d3
    PUSH 0x597376                       ; 0054f2c8 | = "mobster4.dfm"
        ;   Label: LAB_0054f2c8
    JMP 0x0054f0f5                      ; 0054f2cd
        ;   XREF to: 0054f0f5 (UNCONDITIONAL_JUMP)  ; LAB_0054f0f5
    MOV dword ptr [ESI + 0xbd4c],0x1    ; 0054f2d2
        ;   Label: LAB_0054f2d2
    MOV dword ptr [EBX + 0x106c],ESI    ; 0054f2dc
    JMP 0x0054f11f                      ; 0054f2e2
        ;   XREF to: 0054f11f (UNCONDITIONAL_JUMP)  ; LAB_0054f11f
    MOV EDI,dword ptr [EBX + 0x1054]    ; 0054f2e7
        ;   Label: LAB_0054f2e7
    PUSH EDI                            ; 0054f2ed
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00526c50 ; 0054f2ee
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_isSfxPlaying_FUN_00526c50()
    ADD ESP,0x4                         ; 0054f2f3
    TEST EAX,EAX                        ; 0054f2f6
    JNZ 0x0054efa6                      ; 0054f2f8
        ;   XREF to: 0054efa6 (CONDITIONAL_JUMP)  ; LAB_0054efa6
    PUSH 0x59739a                       ; 0054f2fe | = "skid_??.wav"
    PUSH EBX                            ; 0054f303
    CALL core_vehicle.cpp_CVehicle_playTrackedSound_FUN_0054f7a0 ; 0054f304
        ;   XREF to: 0054f7a0 (UNCONDITIONAL_CALL)  ; undefined core_vehicle.cpp_CVehicle_playTrackedSound_FUN_0054f7a0()
    ADD ESP,0x8                         ; 0054f309
    MOV dword ptr [EBX + 0x1054],EAX    ; 0054f30c
    MOV ESP,EBP                         ; 0054f312
    POP EBP                             ; 0054f314
    POP EDI                             ; 0054f315
    POP ESI                             ; 0054f316
    POP EBX                             ; 0054f317
    RET                                 ; 0054f318

