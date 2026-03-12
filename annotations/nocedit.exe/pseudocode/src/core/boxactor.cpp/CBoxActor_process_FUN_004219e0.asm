; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_boxactor_cpp_CBoxActor_process_FUN_004219e0(CBoxActor *this_ptr,float delta_time)
;
; Parameters:
; CBoxActor *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined8       Stack[-0xe8]:8  local_e8
; undefined1[56]   Stack[-0xcc]:56  auStack_cc
; CBoxActor *      Stack[-0x94]:4  pCStack_94
; float            Stack[-0x88]:4  local_88
; float            Stack[-0x84]:4  local_84
; float            Stack[-0x80]:4  local_80
; CVector3f        Stack[-0x6c]:12  local_6c
; undefined1[52]   Stack[-0x60]:52  auStack_60
; CDemonActor *    Stack[-0x2c]:4  local_2c
; double           Stack[-0x28]:8  local_28
; float            Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; float            Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_boxactor.cpp_CLightActor_process_FUN_00422a50 at 00422a67
;
; Referenced Globals:
;   float FLOAT_00616643 = 0.1047198
;   float FLOAT_00616647 = 0.5
;   double DOUBLE_0061664f = 3
;   float FLOAT_00616657 = 0.2000000
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CSound* g_CSoundPtr = 03f6af64
;   CDemonSet g_CDemonSetInstance
;   CSound g_CSoundInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
;   core_box.cpp_CBox_process_FUN_0041e2f0
;   core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;   core_setcolid.cpp_CDemonSet_notifyDamageListeners_FUN_005742b0
;   core_sound.cpp_CSound_isSoundPlaying_FUN_005b3b80
;   crt_math.c_floor_FUN_005feb90
;   crt_math.c_round_FUN_005fe6b0
;   sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004219e0
        ;   Label: core_boxactor.cpp_CBoxActor_process_FUN_004219e0
    PUSH ESI                            ; 004219e1
    PUSH EDI                            ; 004219e2
    PUSH EBP                            ; 004219e3
    MOV EBP,ESP                         ; 004219e4
    SUB ESP,0xd0                        ; 004219e6
    AND ESP,0xfffffff8                  ; 004219ec
    MOV EBX,dword ptr [EBP + 0x14]      ; 004219ef
    LEA EAX,[EBX + 0x158]               ; 004219f2
    PUSH EAX                            ; 004219f8
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 004219f9
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    FLD float ptr [EBX + 0x30c]         ; 004219fe
    ADD ESP,0x4                         ; 00421a04
    MOV ESI,dword ptr [EAX + 0x100]     ; 00421a07
    FADD float ptr [EBX + 0x310]        ; 00421a0d
    SUB ESP,0x8                         ; 00421a13
    FST float ptr [EBX + 0x310]         ; 00421a16
    FSTP double ptr [ESP]               ; 00421a1c
    CALL crt_math.c_floor_FUN_005feb90  ; 00421a1f
        ;   XREF to: 005feb90 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005feb90(double input_value)
    MOV dword ptr [ESP + 0xc0],EAX      ; 00421a24
    MOV dword ptr [ESP + 0xc4],EDX      ; 00421a2b
    FLD double ptr [ESP + 0xc0]         ; 00421a32
    ADD ESP,0x8                         ; 00421a39
    CALL crt_math.c_round_FUN_005fe6b0  ; 00421a3c
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0xc4]        ; 00421a41
    MOV EAX,dword ptr [ESP + 0xc4]      ; 00421a48
    MOV dword ptr [ESP + 0xc8],EAX      ; 00421a4f
    FILD dword ptr [ESP + 0xc8]         ; 00421a56
    FSUBR float ptr [EBX + 0x310]       ; 00421a5d
    MOV EDI,ESI                         ; 00421a63
    FSTP float ptr [ESP + 0xc0]         ; 00421a65
    TEST EAX,EAX                        ; 00421a6c
    JL 0x00421bdd                       ; 00421a6e
        ;   XREF to: 00421bdd (CONDITIONAL_JUMP)  ; LAB_00421bdd
    MOV EDX,EAX                         ; 00421a74
    SAR EDX,0x1f                        ; 00421a76
    IDIV ESI                            ; 00421a79
    MOV dword ptr [ESP + 0xc4],EDX      ; 00421a7b
    MOV EAX,dword ptr [ESP + 0xc4]      ; 00421a82
        ;   Label: LAB_00421a82
    MOV dword ptr [ESP + 0xc8],EAX      ; 00421a89
    MOV dword ptr [ESP + 0xcc],EDI      ; 00421a90
    FILD dword ptr [ESP + 0xc8]         ; 00421a97
    FADD float ptr [ESP + 0xc0]         ; 00421a9e
    FILD dword ptr [ESP + 0xcc]         ; 00421aa5
    FXCH                                ; 00421aac
    FSTP float ptr [EBX + 0x310]        ; 00421aae
    FCOMP float ptr [EBX + 0x310]       ; 00421ab4
    FNSTSW AX                           ; 00421aba
    SAHF                                ; 00421abc
    JA 0x00421ac9                       ; 00421abd
        ;   XREF to: 00421ac9 (CONDITIONAL_JUMP)  ; LAB_00421ac9
    MOV dword ptr [EBX + 0x310],0x0     ; 00421abf
    LEA EAX,[EBX + 0x300]               ; 00421ac9
        ;   Label: LAB_00421ac9
    FLD float ptr [EBP + 0x18]          ; 00421acf
    FLD float ptr [EAX]                 ; 00421ad2
    FMUL ST1                            ; 00421ad4
    FSTP float ptr [ESP + 0xac]         ; 00421ad6
    FLD float ptr [EAX + 0x4]           ; 00421add
    FMUL ST1                            ; 00421ae0
    FLD float ptr [0x00616643]          ; 00421ae2 | FLOAT_00616643
    FLD float ptr [ESP + 0xac]          ; 00421ae8
    FMUL ST1                            ; 00421aef
    FXCH ST2                            ; 00421af1
    FSTP float ptr [ESP + 0xb0]         ; 00421af3
    FLD float ptr [EAX + 0x8]           ; 00421afa
    FMULP ST3                           ; 00421afd
    FLD float ptr [ESP + 0xb0]          ; 00421aff
    FMUL ST1                            ; 00421b06
    FXCH ST3                            ; 00421b08
    FST float ptr [ESP + 0xb4]          ; 00421b0a
    FMULP                               ; 00421b11
    FXCH                                ; 00421b13
    FSTP float ptr [ESP + 0x58]         ; 00421b15
    LEA EAX,[EBX + 0x30]                ; 00421b19
    FXCH                                ; 00421b1c
    FSTP float ptr [ESP + 0x5c]         ; 00421b1e
    FSTP float ptr [ESP + 0x60]         ; 00421b22
    FLD float ptr [EAX]                 ; 00421b26
    FADD float ptr [ESP + 0x58]         ; 00421b28
    FLD float ptr [EAX + 0x4]           ; 00421b2c
    FXCH                                ; 00421b2f
    FSTP float ptr [EAX]                ; 00421b31
    FADD float ptr [ESP + 0x5c]         ; 00421b33
    FLD float ptr [EAX + 0x8]           ; 00421b37
    FXCH                                ; 00421b3a
    FSTP float ptr [EAX + 0x4]          ; 00421b3c
    FADD float ptr [ESP + 0x60]         ; 00421b3f
    FSTP float ptr [EAX + 0x8]          ; 00421b43
    PUSH dword ptr [EBX + 0x30]         ; 00421b46
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 00421b49
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [ESP + 0xd0],EAX      ; 00421b4e
    FLD float ptr [ESP + 0xd0]          ; 00421b55
    ADD ESP,0x4                         ; 00421b5c
    PUSH dword ptr [EBX + 0x38]         ; 00421b5f
    FSTP float ptr [EBX + 0x30]         ; 00421b62
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 00421b65
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [ESP + 0xd0],EAX      ; 00421b6a
    FLD float ptr [ESP + 0xd0]          ; 00421b71
    ADD ESP,0x4                         ; 00421b78
    PUSH dword ptr [EBX + 0x34]         ; 00421b7b
    FSTP float ptr [EBX + 0x38]         ; 00421b7e
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 00421b81
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [ESP + 0xd0],EAX      ; 00421b86
    FLD float ptr [ESP + 0xd0]          ; 00421b8d
    MOV AH,byte ptr [EBX + 0x2d4]       ; 00421b94
    FSTP float ptr [EBX + 0x34]         ; 00421b9a
    ADD ESP,0x4                         ; 00421b9d
    TEST AH,AH                          ; 00421ba0
    JZ 0x00421bbe                       ; 00421ba2
        ;   XREF to: 00421bbe (CONDITIONAL_JUMP)  ; LAB_00421bbe
    MOV ECX,dword ptr [EBX + 0x2fc]     ; 00421ba4
    PUSH ECX                            ; 00421baa
    MOV ESI,dword ptr [0x00681ef8]      ; 00421bab | g_CSoundPtr
    PUSH ESI                            ; 00421bb1 | g_CSoundInstance
    CALL core_sound.cpp_CSound_isSoundPlaying_FUN_005b3b80 ; 00421bb2
        ;   XREF to: 005b3b80 (UNCONDITIONAL_CALL)  ; int core_sound.cpp_CSound_isSoundPlaying_FUN_005b3b80(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 00421bb7
    TEST EAX,EAX                        ; 00421bba
    JZ 0x00421bf4                       ; 00421bbc
        ;   XREF to: 00421bf4 (CONDITIONAL_JUMP)  ; LAB_00421bf4
    CMP dword ptr [EBX + 0x318],0x0     ; 00421bbe
        ;   Label: LAB_00421bbe
    JNZ 0x00421bd6                      ; 00421bc5
        ;   XREF to: 00421bd6 (CONDITIONAL_JUMP)  ; LAB_00421bd6
    FLD float ptr [EBX + 0x390]         ; 00421bc7
    FLDZ                                ; 00421bcd
    FCOMPP                              ; 00421bcf
    FNSTSW AX                           ; 00421bd1
    SAHF                                ; 00421bd3
    JC 0x00421c4a                       ; 00421bd4
        ;   XREF to: 00421c4a (CONDITIONAL_JUMP)  ; LAB_00421c4a
    MOV ESP,EBP                         ; 00421bd6
        ;   Label: LAB_00421bd6
    POP EBP                             ; 00421bd8
    POP EDI                             ; 00421bd9
    POP ESI                             ; 00421bda
    POP EBX                             ; 00421bdb
    RET                                 ; 00421bdc
    NEG EAX                             ; 00421bdd
        ;   Label: LAB_00421bdd
    MOV EDX,EAX                         ; 00421bdf
    SAR EDX,0x1f                        ; 00421be1
    IDIV ESI                            ; 00421be4
    SUB ESI,EDX                         ; 00421be6
    MOV dword ptr [ESP + 0xc4],ESI      ; 00421be8
    JMP 0x00421a82                      ; 00421bef
        ;   XREF to: 00421a82 (UNCONDITIONAL_JUMP)  ; LAB_00421a82
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30 ; 00421bf4
        ;   XREF to: 005a8c30 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30()
        ;   Label: LAB_00421bf4
    PUSH 0x2                            ; 00421bf9
    PUSH 0x3f800000                     ; 00421bfb
    PUSH 0x0                            ; 00421c00
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 00421c02
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    LEA EDX,[EBX + 0x20]                ; 00421c4a
        ;   Label: LAB_00421c4a
    MOV EAX,dword ptr [EDX]             ; 00421c4d
    MOV dword ptr [ESP + 0x70],EAX      ; 00421c4f
    LEA EAX,[EDX + 0x4]                 ; 00421c53
    MOV EAX,dword ptr [EAX]             ; 00421c56
    MOV dword ptr [ESP + 0x74],EAX      ; 00421c58
    LEA EAX,[EDX + 0x8]                 ; 00421c5c
    MOV EAX,dword ptr [EAX]             ; 00421c5f
    MOV dword ptr [ESP + 0x78],EAX      ; 00421c61
    LEA EAX,[EBX + 0x394]               ; 00421c65
    PUSH dword ptr [EBP + 0x18]         ; 00421c6b
    PUSH EAX                            ; 00421c6e
    CALL core_box.cpp_CBox_process_FUN_0041e2f0 ; 00421c6f
        ;   XREF to: 0041e2f0 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBox_process_FUN_0041e2f0(CBox * this_ptr, float delta_time)
    LEA EDX,[EBX + 0x30]                ; 00421c74
    LEA EAX,[EBX + 0x3a0]               ; 00421c77
    ADD ESP,0x8                         ; 00421c7d
    CMP EDX,EAX                         ; 00421c80
    JZ 0x00421c94                       ; 00421c82
        ;   XREF to: 00421c94 (CONDITIONAL_JUMP)  ; LAB_00421c94
    MOV ECX,dword ptr [EAX]             ; 00421c84
    MOV dword ptr [EDX],ECX             ; 00421c86
    MOV ECX,dword ptr [EAX + 0x4]       ; 00421c88
    MOV dword ptr [EDX + 0x4],ECX       ; 00421c8b
    MOV ECX,dword ptr [EAX + 0x8]       ; 00421c8e
    MOV dword ptr [EDX + 0x8],ECX       ; 00421c91
    PUSH EBX                            ; 00421c94
        ;   Label: LAB_00421c94
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10 ; 00421c95
        ;   XREF to: 00408c10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00421c9a
    LEA EDX,[ESP + 0x40]                ; 00421c9d
    PUSH EDX                            ; 00421ca1
    MOV EAX,dword ptr [EBX + 0x154]     ; 00421ca2
    PUSH EBX                            ; 00421ca8
    CALL dword ptr [EAX + 0x14]         ; 00421ca9
    LEA EDX,[EAX + 0xc]                 ; 00421cac
    FLD float ptr [EAX]                 ; 00421caf
    FADD float ptr [EDX]                ; 00421cb1
    ADD ESP,0x8                         ; 00421cb3
    FST float ptr [ESP + 0x94]          ; 00421cb6
    FLD float ptr [EAX + 0x4]           ; 00421cbd
    FADD float ptr [EDX + 0x4]          ; 00421cc0
    FXCH                                ; 00421cc3
    FLD float ptr [0x00616647]          ; 00421cc5 | FLOAT_00616647
    FXCH                                ; 00421ccb
    FMUL ST1                            ; 00421ccd
    FXCH ST2                            ; 00421ccf
    FST float ptr [ESP + 0x98]          ; 00421cd1
    FLD float ptr [EAX + 0x8]           ; 00421cd8
    FADD float ptr [EDX + 0x8]          ; 00421cdb
    FXCH                                ; 00421cde
    FMUL ST2                            ; 00421ce0
    FXCH                                ; 00421ce2
    FST float ptr [ESP + 0x9c]          ; 00421ce4
    FMULP ST2                           ; 00421ceb
    LEA EAX,[ESP + 0x64]                ; 00421ced
    FXCH ST2                            ; 00421cf1
    FSTP float ptr [ESP + 0x7c]         ; 00421cf3
    FXCH                                ; 00421cf7
    FSTP float ptr [ESP + 0x80]         ; 00421cf9
    PUSH EAX                            ; 00421d00
    FLD float ptr [ESP + 0x80]          ; 00421d01
    FLD float ptr [ESP + 0x84]          ; 00421d08
    LEA EAX,[ESP + 0xa4]                ; 00421d0f
    FXCH                                ; 00421d16
    FCHS                                ; 00421d18
    FXCH                                ; 00421d1a
    FCHS                                ; 00421d1c
    FXCH                                ; 00421d1e
    FSTP float ptr [ESP + 0x68]         ; 00421d20
    FSTP float ptr [ESP + 0x6c]         ; 00421d24
    PUSH EAX                            ; 00421d28
    FST float ptr [ESP + 0x8c]          ; 00421d29
    PUSH EBX                            ; 00421d30
    FCHS                                ; 00421d31
    FSTP float ptr [ESP + 0x78]         ; 00421d33
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80 ; 00421d37
        ;   XREF to: 00408e80 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_00408e80(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    LEA EDX,[EBX + 0x394]               ; 00421d3c
    FLD float ptr [EDX]                 ; 00421d42
    FADD float ptr [EAX]                ; 00421d44
    ADD ESP,0xc                         ; 00421d46
    FSTP float ptr [ESP + 0x88]         ; 00421d49
    FLD float ptr [EDX + 0x4]           ; 00421d50
    FADD float ptr [EAX + 0x4]          ; 00421d53
    LEA ESI,[EBX + 0x20]                ; 00421d56
    FSTP float ptr [ESP + 0x8c]         ; 00421d59
    FLD float ptr [EDX + 0x8]           ; 00421d60
    FADD float ptr [EAX + 0x8]          ; 00421d63
    MOV EAX,dword ptr [ESP + 0x88]      ; 00421d66
    FSTP float ptr [ESP + 0x90]         ; 00421d6d
    MOV dword ptr [ESI],EAX             ; 00421d74
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00421d76
    MOV dword ptr [ESI + 0x4],EAX       ; 00421d7d
    MOV EAX,dword ptr [ESP + 0x90]      ; 00421d80
    MOV dword ptr [ESI + 0x8],EAX       ; 00421d87
    LEA EAX,[EBX + 0x3d4]               ; 00421d8a
    FLD float ptr [EAX + 0x4]           ; 00421d90
    FMUL ST0                            ; 00421d93
    FLD float ptr [EAX]                 ; 00421d95
    FMUL ST0                            ; 00421d97
    FADDP                               ; 00421d99
    FLD float ptr [EAX + 0x8]           ; 00421d9b
    FMUL ST0                            ; 00421d9e
    FADDP                               ; 00421da0
    FSQRT                               ; 00421da2
    FST float ptr [ESP]                 ; 00421da4
    FCOMP double ptr [0x0061664f]       ; 00421da7 | DOUBLE_0061664f
    FNSTSW AX                           ; 00421dad
    SAHF                                ; 00421daf
    JBE 0x00421bd6                      ; 00421db0
        ;   XREF to: 00421bd6 (CONDITIONAL_JUMP)  ; LAB_00421bd6
    LEA EAX,[ESP + 0x4]                 ; 00421db6
    PUSH EAX                            ; 00421dba
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0 ; 00421dbb
        ;   XREF to: 00427db0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 00421dc0
    LEA EAX,[ESP + 0x4]                 ; 00421dc3
    FLD float ptr [ESP]                 ; 00421dc7
    FMUL float ptr [EBX + 0x390]        ; 00421dca
    PUSH EAX                            ; 00421dd0
    FMUL float ptr [0x00616657]         ; 00421dd1 | FLOAT_00616657
    PUSH ESI                            ; 00421dd7
    LEA EAX,[ESP + 0x78]                ; 00421dd8
    MOV dword ptr [ESP + 0x40],EBX      ; 00421ddc
    PUSH EAX                            ; 00421de0
    MOV EAX,[0x006810c8]                ; 00421de1 | g_CDemonSetPtr | g_CDemonSetInstance
    MOV dword ptr [ESP + 0x48],EBX      ; 00421de6
    PUSH EAX                            ; 00421dea | g_CDemonSetInstance
    FSTP float ptr [ESP + 0x18]         ; 00421deb
    CALL core_setcolid.cpp_CDemonSet_notifyDamageListeners_FUN_005742b0 ; 00421def
        ;   XREF to: 005742b0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_notifyDamageListeners_FUN_005742b0(CDemonSet * this_ptr, SDamageInfo * damage_info, CVector3f * actor_position, void * unknown_param)
    ADD ESP,0x10                        ; 00421df4
    MOV ESP,EBP                         ; 00421df7
    POP EBP                             ; 00421df9
    POP EDI                             ; 00421dfa
    POP ESI                             ; 00421dfb
    POP EBX                             ; 00421dfc
    RET                                 ; 00421dfd

