; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_charactr.cpp_CCharacter_FUN_00428f40(CCharacter * this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined8       Stack[-0xd0]:8  local_d0
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined1       Stack[-0x9c]:1  local_9c
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined1       Stack[-0x84]:1  local_84
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[36]:
;   core_batcreat.cpp_CBatCreature_process_FUN_00415470 at 0041564d
;   core_batman.cpp_CBatman_process_FUN_00416870 at 00416a6b
;   core_biggs.cpp_CBiggs_FUN_00418700 at 004188c7
;   core_boneguy.cpp_FUN_0041bf90 at 0041c50a
;   core_bride.cpp_FUN_00423a30 at 00424469
;   core_bugs.cpp_FUN_00425cc0 at 00425ead
;   core_bugs.cpp_FUN_00425fe0 at 00426356
;   core_colonel.cpp_FUN_0043fa00 at 0043ff0a
;   core_cow.cpp_FUN_00444310 at 0044451e
;   core_dog.cpp_CZombieDog_process_FUN_0047f140 at 0047f365
;   ... and 26 more
;
; Referenced Globals:
;   double DOUBLE_00617072 = 0.5
;   double DOUBLE_0061707a = 1.20000000000000
;   double DOUBLE_00617082 = 0.900000000000000
;   double DOUBLE_0061708a = -0.0100000000000000
;   TerminatedCString s_noCollision_0066e778
;   undefined4 s_ion_0066e780
;   CGame* g_CGamePtr = 02d81a9c
;   CDemonSet* g_CDemonSetPtr = 03114278
;   undefined4 DAT_006e6f69
;   undefined4 DAT_00823c50
;   CVector3f g_TempNormal0
;   undefined4 g_TempNormal0.y
;   undefined4 g_TempNormal0.z
;   CVector3f g_TempNormal1
;   undefined4 g_TempNormal1.y
;   ... and 11 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
;   core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
;   core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
;   core_setcolid.cpp_CDemonSet_testCapsuleCollision_FUN_00573470
;   crt_string.c_strnicmp_FUN_005ff070
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00428f40
        ;   Label: core_charactr.cpp_CCharacter_FUN_00428f40
    PUSH ESI                            ; 00428f41
    PUSH EDI                            ; 00428f42
    PUSH EBP                            ; 00428f43
    MOV EBP,ESP                         ; 00428f44
    SUB ESP,0xc0                        ; 00428f46
    AND ESP,0xfffffff8                  ; 00428f4c
    MOV EBX,dword ptr [EBP + 0x14]      ; 00428f4f
    MOV EDX,dword ptr [EBP + 0x18]      ; 00428f52
    PUSH EDX                            ; 00428f55
    LEA EAX,[ESP + 0x2c]                ; 00428f56
    PUSH EAX                            ; 00428f5a
    PUSH EBX                            ; 00428f5b
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80 ; 00428f5c | CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_00408e80(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
        ;   XREF to: 00408e80 (UNCONDITIONAL_CALL)
    MOV ECX,dword ptr [EBX + 0xdc]      ; 00428f61
    ADD ESP,0xc                         ; 00428f67
    TEST ECX,ECX                        ; 00428f6a
    JNZ 0x004293cb                      ; 00428f6c | LAB_004293cb
        ;   XREF to: 004293cb (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x18]      ; 00428f72
        ;   Label: LAB_00428f72
    XOR ESI,ESI                         ; 00428f75
    MOV EDI,dword ptr [EAX + 0x8]       ; 00428f77
    MOV dword ptr [0x00823c50],ESI      ; 00428f7a | undefined4 DAT_00823c50
    TEST EDI,0x7fffffff                 ; 00428f80
    JNZ 0x00428fb7                      ; 00428f86 | LAB_00428fb7
        ;   XREF to: 00428fb7 (CONDITIONAL_JUMP)
    TEST dword ptr [EAX],0x7fffffff     ; 00428f88
    JNZ 0x00428fb7                      ; 00428f8e | LAB_00428fb7
        ;   XREF to: 00428fb7 (CONDITIONAL_JUMP)
    FLD float ptr [EAX + 0x4]           ; 00428f90
    FLDZ                                ; 00428f93
    FCOMPP                              ; 00428f95
    FNSTSW AX                           ; 00428f97
    SAHF                                ; 00428f99
    JC 0x00428fb7                       ; 00428f9a | LAB_00428fb7
        ;   XREF to: 00428fb7 (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0xdc],0x0      ; 00428f9c
    JNZ 0x00428fb7                      ; 00428fa3 | LAB_00428fb7
        ;   XREF to: 00428fb7 (CONDITIONAL_JUMP)
    FLD float ptr [EBX + 0x24]          ; 00428fa5
    FCOMP float ptr [EBX + 0x2414]      ; 00428fa8
    FNSTSW AX                           ; 00428fae
    SAHF                                ; 00428fb0
    JZ 0x0042944e                       ; 00428fb1 | LAB_0042944e
        ;   XREF to: 0042944e (CONDITIONAL_JUMP)
    LEA EAX,[EBX + 0x158]               ; 00428fb7
        ;   Label: LAB_00428fb7
    LEA EDX,[EBX + 0x23b8]              ; 00428fbd
    CMP byte ptr [EDX],0x0              ; 00428fc3
    JNZ 0x00429482                      ; 00428fc6 | LAB_00429482
        ;   XREF to: 00429482 (CONDITIONAL_JUMP)
    LEA EAX,[EBX + 0x2c5c]              ; 00428fcc
        ;   Label: LAB_00428fcc
    XOR ESI,ESI                         ; 00428fd2
    MOV dword ptr [ESP + 0x80],EAX      ; 00428fd4
    LEA EDX,[EBX + 0x2d10]              ; 00428fdb
    MOV EDI,dword ptr [ESP + 0x80]      ; 00428fe1
    LEA EAX,[EBX + 0x2c80]              ; 00428fe8
    MOV dword ptr [ESP + 0x8c],EDX      ; 00428fee
    MOV dword ptr [ESP + 0x88],EAX      ; 00428ff5
    IMUL EAX,ESI,0x24                   ; 00428ffc
        ;   Label: LAB_00428ffc
    MOV EDX,dword ptr [ESP + 0x8c]      ; 00428fff
    MOV ECX,dword ptr [ESP + 0x88]      ; 00429006
    ADD EAX,EDI                         ; 0042900d
    MOV dword ptr [EAX + 0x8],0x0       ; 0042900f
        ;   Label: LAB_0042900f
    ADD EDX,0xc                         ; 00429016
    FLD float ptr [EAX + 0x8]           ; 00429019
    FST float ptr [EAX + 0x4]           ; 0042901c
    FSTP float ptr [EAX]                ; 0042901f
    MOV dword ptr [EDX + -0x4],0x0      ; 00429021
    ADD EAX,0xc                         ; 00429028
    FLD float ptr [EDX + -0x4]          ; 0042902b
    FST float ptr [EDX + -0x8]          ; 0042902e
    FSTP float ptr [EDX + -0xc]         ; 00429031
    CMP EAX,ECX                         ; 00429034
    JNZ 0x0042900f                      ; 00429036 | LAB_0042900f
        ;   XREF to: 0042900f (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESP + 0x8c]      ; 00429038
    MOV EAX,dword ptr [ESP + 0x88]      ; 0042903f
    INC ESI                             ; 00429046
    ADD EDX,0x24                        ; 00429047
    ADD EAX,0x24                        ; 0042904a
    MOV dword ptr [ESP + 0x8c],EDX      ; 0042904d
    MOV dword ptr [ESP + 0x88],EAX      ; 00429054
    CMP ESI,0x5                         ; 0042905b
    JL 0x00428ffc                       ; 0042905e | LAB_00428ffc
        ;   XREF to: 00428ffc (CONDITIONAL_JUMP)
    LEA ESI,[EBX + 0x20]                ; 00429060
    MOV EAX,dword ptr [ESI]             ; 00429063
    MOV dword ptr [ESP + 0x1c],EAX      ; 00429065
    LEA EAX,[ESI + 0x4]                 ; 00429069
    MOV EAX,dword ptr [EAX]             ; 0042906c
    MOV dword ptr [ESP + 0x20],EAX      ; 0042906e
    LEA EAX,[ESI + 0x8]                 ; 00429072
    PUSH EBX                            ; 00429075
    MOV ECX,dword ptr [0x006810c8]      ; 00429076 | CDemonSet g_CDemonSetInstance | CDemonSet * g_CDemonSetPtr
    MOV EAX,dword ptr [EAX]             ; 0042907c
    PUSH ECX                            ; 0042907e | CDemonSet g_CDemonSetInstance
    MOV dword ptr [ESP + 0x2c],EAX      ; 0042907f
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0 ; 00429083 | void core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet * this_ptr, CDemonActor * actor)
        ;   XREF to: 005741b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00429088
    XOR EDI,EDI                         ; 0042908b
    MOV EAX,dword ptr [EBP + 0x18]      ; 0042908d
    MOV dword ptr [ESP + 0x98],EDI      ; 00429090
    MOV EAX,dword ptr [EAX + 0x4]       ; 00429097
    MOV dword ptr [ESP + 0xa0],ESI      ; 0042909a
    MOV dword ptr [ESP + 0x7c],EAX      ; 004290a1
    LEA EAX,[EBX + 0x2d10]              ; 004290a5
    MOV dword ptr [ESP + 0xa8],ESI      ; 004290ab
    MOV dword ptr [ESP + 0x84],EAX      ; 004290b2
    LEA EAX,[EBX + 0x2c5c]              ; 004290b9
    MOV ESI,dword ptr [ESP + 0x84]      ; 004290bf
    MOV dword ptr [ESP + 0xb4],EAX      ; 004290c6
    ADD EAX,0xc                         ; 004290cd
    ADD ESI,0x18                        ; 004290d0
    MOV dword ptr [ESP + 0xac],EAX      ; 004290d3
    MOV EAX,dword ptr [ESP + 0x84]      ; 004290da
    MOV EDI,dword ptr [ESP + 0xb4]      ; 004290e1
    ADD EAX,0xc                         ; 004290e8
    ADD EDI,0x18                        ; 004290eb
    MOV dword ptr [ESP + 0xa4],EAX      ; 004290ee
    XOR EAX,EAX                         ; 004290f5
        ;   Label: LAB_004290f5
    MOV dword ptr [ESP + 0x2c],EAX      ; 004290f7
    FLD float ptr [EBX + 0x2df0]        ; 004290fb
    FMUL float ptr [EBX + 0x261c]       ; 00429101
    FLD float ptr [EBX + 0x2dec]        ; 00429107
    FMUL float ptr [EBX + 0x261c]       ; 0042910d
    FXCH                                ; 00429113
    FSTP float ptr [ESP + 0x9c]         ; 00429115
    FCOMP float ptr [ESP + 0x9c]        ; 0042911c
    FNSTSW AX                           ; 00429123
    SAHF                                ; 00429125
    JBE 0x00429135                      ; 00429126 | LAB_00429135
        ;   XREF to: 00429135 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0x23a0]    ; 00429128
    MOV dword ptr [ESP + 0x9c],EAX      ; 0042912e
    FLD float ptr [EBX + 0x2dec]        ; 00429135
        ;   Label: LAB_00429135
    FMUL float ptr [EBX + 0x261c]       ; 0042913b
    FLD float ptr [ESP + 0x9c]          ; 00429141
    FXCH                                ; 00429148
    FSTP float ptr [ESP + 0x18]         ; 0042914a
    FCOMP float ptr [ESP + 0x18]        ; 0042914e
    FNSTSW AX                           ; 00429152
    SAHF                                ; 00429154
    JNC 0x00429170                      ; 00429155 | LAB_00429170
        ;   XREF to: 00429170 (CONDITIONAL_JUMP)
    FLD float ptr [ESP + 0x18]          ; 00429157
    FLD float ptr [EBX + 0x261c]        ; 0042915b
    FMUL double ptr [0x00617072]        ; 00429161 | double DOUBLE_00617072
    FADDP                               ; 00429167
    FSTP float ptr [ESP + 0x9c]         ; 00429169
    FLD float ptr [EBX + 0x24]          ; 00429170
        ;   Label: LAB_00429170
    FADD float ptr [ESP + 0x9c]         ; 00429173
    SUB ESP,0x4                         ; 0042917a
    FSTP float ptr [ESP]                ; 0042917d
    FLD float ptr [EBX + 0x2dec]        ; 00429180
    FMUL float ptr [EBX + 0x261c]       ; 00429186
    FADD float ptr [EBX + 0x24]         ; 0042918c
    SUB ESP,0x4                         ; 0042918f
    FSTP float ptr [ESP]                ; 00429192
    FLD float ptr [EBX + 0x2de0]        ; 00429195
    FMUL float ptr [EBX + 0x261c]       ; 0042919b
    SUB ESP,0x4                         ; 004291a1
    FSTP float ptr [ESP]                ; 004291a4
    PUSH dword ptr [ESP + 0x3c]         ; 004291a7
    PUSH dword ptr [ESP + 0x38]         ; 004291ab
    PUSH dword ptr [EBX + 0x28]         ; 004291af
    MOV EDX,dword ptr [0x006810c8]      ; 004291b2 | CDemonSet g_CDemonSetInstance | CDemonSet * g_CDemonSetPtr
    PUSH dword ptr [EBX + 0x20]         ; 004291b8
    PUSH EDX                            ; 004291bb | CDemonSet g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_testCapsuleCollision_FUN_00573470 ; 004291bc | float core_setcolid.cpp_CDemonSet_testCapsuleCollision_FUN_00573470(CDemonSet * this_ptr, float start_x, float start_z, float dir_x, ...)
        ;   XREF to: 00573470 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0xdc],EAX      ; 004291c1
    FLD float ptr [ESP + 0xdc]          ; 004291c8
    ADD ESP,0x20                        ; 004291cf
    MOV ECX,dword ptr [0x00823c50]      ; 004291d2 | undefined4 DAT_00823c50
    FSTP float ptr [ESP + 0x10]         ; 004291d8
    TEST ECX,ECX                        ; 004291dc
    JNZ 0x004291f0                      ; 004291de | LAB_004291f0
        ;   XREF to: 004291f0 (CONDITIONAL_JUMP)
    MOV EAX,[0x006810c8]                ; 004291e0 | CDemonSet * g_CDemonSetPtr
    MOV EAX,dword ptr [EAX + 0x14d144]  ; 004291e5 | DAT_032613bc
    MOV [0x00823c50],EAX                ; 004291eb | undefined4 DAT_00823c50
    IMUL EAX,dword ptr [ESP + 0x98],0x24 ; 004291f0
        ;   Label: LAB_004291f0
    ADD EAX,dword ptr [ESP + 0xb4]      ; 004291f8
    CMP EAX,0x15c4800                   ; 004291ff | CVector3f g_TempNormal0
    JZ 0x00429220                       ; 00429204 | LAB_00429220
        ;   XREF to: 00429220 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [0x015c4800]      ; 00429206 | CVector3f g_TempNormal0
    MOV dword ptr [EAX],EDX             ; 0042920c
    MOV EDX,dword ptr [0x015c4804]      ; 0042920e | g_TempNormal0.y
    MOV dword ptr [EAX + 0x4],EDX       ; 00429214
    MOV EDX,dword ptr [0x015c4808]      ; 00429217 | g_TempNormal0.z
    MOV dword ptr [EAX + 0x8],EDX       ; 0042921d
    MOV EAX,dword ptr [ESP + 0xac]      ; 00429220
        ;   Label: LAB_00429220
    CMP EAX,0x15c480c                   ; 00429227 | CVector3f g_TempNormal1
    JZ 0x00429248                       ; 0042922c | LAB_00429248
        ;   XREF to: 00429248 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [0x015c480c]      ; 0042922e | CVector3f g_TempNormal1
    MOV dword ptr [EAX],EDX             ; 00429234
    MOV EDX,dword ptr [0x015c4810]      ; 00429236 | g_TempNormal1.y
    MOV dword ptr [EAX + 0x4],EDX       ; 0042923c
    MOV EDX,dword ptr [0x015c4814]      ; 0042923f | g_TempNormal1.z
    MOV dword ptr [EAX + 0x8],EDX       ; 00429245
    CMP EDI,0x15c4818                   ; 00429248 | CVector3f g_TempNormal2
        ;   Label: LAB_00429248
    JZ 0x00429267                       ; 0042924e | LAB_00429267
        ;   XREF to: 00429267 (CONDITIONAL_JUMP)
    MOV EAX,[0x015c4818]                ; 00429250 | CVector3f g_TempNormal2
    MOV dword ptr [EDI],EAX             ; 00429255
    MOV EAX,[0x015c481c]                ; 00429257 | g_TempNormal2.y
    MOV dword ptr [EDI + 0x4],EAX       ; 0042925c
    MOV EAX,[0x015c4820]                ; 0042925f | g_TempNormal2.z
    MOV dword ptr [EDI + 0x8],EAX       ; 00429264
    FLD float ptr [ESP + 0x10]          ; 00429267
        ;   Label: LAB_00429267
    FLDZ                                ; 0042926b
    FXCH                                ; 0042926d
    FSTP double ptr [ESP]               ; 0042926f
    FCOMP double ptr [ESP]              ; 00429272
    FNSTSW AX                           ; 00429275
    SAHF                                ; 00429277
    JBE 0x00429506                      ; 00429278 | LAB_00429506
        ;   XREF to: 00429506 (CONDITIONAL_JUMP)
    FLD double ptr [ESP]                ; 0042927e
    MOV EAX,[0x006810c8]                ; 00429281 | CDemonSet * g_CDemonSetPtr
    FADD double ptr [0x0061708a]        ; 00429286 | double DOUBLE_0061708a
    FLD float ptr [EAX + 0x14d128]      ; 0042928c | DAT_032613a0
    FXCH                                ; 00429292
    FSTP float ptr [ESP + 0x90]         ; 00429294
    FMUL float ptr [ESP + 0x90]         ; 0042929b
    FSTP float ptr [ESP + 0x40]         ; 004292a2
    FLD float ptr [EAX + 0x14d12c]      ; 004292a6 | DAT_032613a4
    FMUL float ptr [ESP + 0x90]         ; 004292ac
    FSTP float ptr [ESP + 0x44]         ; 004292b3
    FLD float ptr [EAX + 0x14d130]      ; 004292b7 | DAT_032613a8
    FMUL float ptr [ESP + 0x90]         ; 004292bd
    MOV EAX,dword ptr [ESP + 0xa0]      ; 004292c4
    FSTP float ptr [ESP + 0x48]         ; 004292cb
    FLD float ptr [EAX]                 ; 004292cf
    FSUB float ptr [ESP + 0x40]         ; 004292d1
    FLD float ptr [EAX + 0x4]           ; 004292d5
    FXCH                                ; 004292d8
    FSTP float ptr [EAX]                ; 004292da
    FSUB float ptr [ESP + 0x44]         ; 004292dc
    FLD float ptr [EAX + 0x8]           ; 004292e0
    FXCH                                ; 004292e3
    FSTP float ptr [EAX + 0x4]          ; 004292e5
    FSUB float ptr [ESP + 0x48]         ; 004292e8
    MOV EDX,0x1                         ; 004292ec
    FSTP float ptr [EAX + 0x8]          ; 004292f1
    MOV EAX,dword ptr [ESP + 0xac]      ; 004292f4
        ;   Label: LAB_004292f4
    MOV ECX,dword ptr [ESP + 0xa4]      ; 004292fb
    ADD EDI,0x24                        ; 00429302
    ADD EAX,0x24                        ; 00429305
    ADD ESI,0x24                        ; 00429308
    MOV dword ptr [ESP + 0xac],EAX      ; 0042930b
    MOV EAX,dword ptr [ESP + 0x98]      ; 00429312
    ADD ECX,0x24                        ; 00429319
    INC EAX                             ; 0042931c
    MOV dword ptr [ESP + 0xa4],ECX      ; 0042931d
    MOV dword ptr [ESP + 0x98],EAX      ; 00429324
    CMP EAX,0x3                         ; 0042932b
    JL 0x004290f5                       ; 0042932e | LAB_004290f5
        ;   XREF to: 004290f5 (CONDITIONAL_JUMP)
    TEST EDX,EDX                        ; 00429334
        ;   Label: LAB_00429334
    JZ 0x00429361                       ; 00429336 | LAB_00429361
        ;   XREF to: 00429361 (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 00429338
    MOV EAX,dword ptr [EBX + 0x154]     ; 0042933a
    PUSH dword ptr [EBX + 0x2ddc]       ; 00429340
    PUSH EBX                            ; 00429346
    CALL dword ptr [EAX + 0x38]         ; 00429347
    MOV dword ptr [ESP + 0xc8],EAX      ; 0042934a
    MOV EAX,dword ptr [ESP + 0xc8]      ; 00429351
    MOV dword ptr [EBX + 0x2414],EAX    ; 00429358
    ADD ESP,0xc                         ; 0042935e
    FLD float ptr [EBX + 0x24]          ; 00429361
        ;   Label: LAB_00429361
    FADD float ptr [ESP + 0x7c]         ; 00429364
    FST float ptr [EBX + 0x24]          ; 00429368
    FCOMP float ptr [EBX + 0x2414]      ; 0042936b
    FNSTSW AX                           ; 00429371
    SAHF                                ; 00429373
    JNC 0x0042979e                      ; 00429374 | LAB_0042979e
        ;   XREF to: 0042979e (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0x2414]    ; 0042937a
    MOV dword ptr [EBX + 0x24],EAX      ; 00429380
    LEA EAX,[EBX + 0x2428]              ; 00429383
        ;   Label: LAB_00429383
    MOV dword ptr [EAX + 0x8],0x0       ; 00429389
    MOV EDX,dword ptr [EAX + 0x8]       ; 00429390
    MOV dword ptr [EAX + 0x4],EDX       ; 00429393
    MOV EDX,dword ptr [EAX + 0x4]       ; 00429396
    MOV dword ptr [EAX],EDX             ; 00429399
    MOV EAX,[0x0067b654]                ; 0042939b | CGame g_CGameInstance | CGame * g_CGamePtr
    FLD float ptr [EAX + 0x264]         ; 004293a0 | g_CGameInstance.delta_time_float
    FLD float ptr [EBX + 0x24]          ; 004293a6
    FSUB float ptr [ESP + 0x20]         ; 004293a9
    FDIVRP                              ; 004293ad
    MOV EDI,dword ptr [0x006810c8]      ; 004293af | CDemonSet * g_CDemonSetPtr
    PUSH EDI                            ; 004293b5 | CDemonSet g_CDemonSetInstance
    FSTP float ptr [EBX + 0x242c]       ; 004293b6
    CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180 ; 004293bc | void core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180(CDemonSet * this_ptr)
        ;   XREF to: 00574180 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004293c1
    MOV ESP,EBP                         ; 004293c4
    POP EBP                             ; 004293c6
    POP EDI                             ; 004293c7
    POP ESI                             ; 004293c8
    POP EBX                             ; 004293c9
    RET                                 ; 004293ca
    FLD float ptr [EBX + 0xe4]          ; 004293cb
        ;   Label: LAB_004293cb
    FADD float ptr [EBX + 0x24]         ; 004293d1
    FSTP float ptr [EBX + 0x24]         ; 004293d4
    FLD float ptr [ESP + 0x28]          ; 004293d7
    FADD float ptr [EBX + 0xe0]         ; 004293db
    FLD float ptr [ESP + 0x30]          ; 004293e1
    FXCH                                ; 004293e5
    FSTP float ptr [ESP + 0x28]         ; 004293e7
    FADD float ptr [EBX + 0xe8]         ; 004293eb
    LEA EAX,[EBX + 0xe0]                ; 004293f1
    FSTP float ptr [ESP + 0x30]         ; 004293f7
    MOV dword ptr [EAX + 0x8],0x0       ; 004293fb
    LEA EDX,[EBX + 0x30]                ; 00429402
    MOV ECX,dword ptr [EAX + 0x8]       ; 00429405
    MOV dword ptr [EAX + 0x4],ECX       ; 00429408
    MOV ECX,dword ptr [EAX + 0x4]       ; 0042940b
    MOV dword ptr [EAX],ECX             ; 0042940e
    LEA EAX,[EBX + 0xec]                ; 00429410
    FLD float ptr [EAX]                 ; 00429416
    FADD float ptr [EDX]                ; 00429418
    FSTP float ptr [EDX]                ; 0042941a
    FLD float ptr [EAX + 0x4]           ; 0042941c
    FADD float ptr [EDX + 0x4]          ; 0042941f
    FSTP float ptr [EDX + 0x4]          ; 00429422
    FLD float ptr [EAX + 0x8]           ; 00429425
    FADD float ptr [EDX + 0x8]          ; 00429428
    FSTP float ptr [EDX + 0x8]          ; 0042942b
    MOV dword ptr [EAX + 0x8],0x0       ; 0042942e
    PUSH EBX                            ; 00429435
    MOV EDX,dword ptr [EAX + 0x8]       ; 00429436
    MOV dword ptr [EAX + 0x4],EDX       ; 00429439
    MOV EDX,dword ptr [EAX + 0x4]       ; 0042943c
    MOV dword ptr [EAX],EDX             ; 0042943f
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10 ; 00429441 | void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(CDemonActor * this_ptr)
        ;   XREF to: 00408c10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00429446
    JMP 0x00428f72                      ; 00429449 | LAB_00428f72
        ;   XREF to: 00428f72 (UNCONDITIONAL_JUMP)
    MOV EDX,dword ptr [0x006810c8]      ; 0042944e | CDemonSet g_CDemonSetInstance | CDemonSet * g_CDemonSetPtr
        ;   Label: LAB_0042944e
    PUSH EDX                            ; 00429454 | CDemonSet g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180 ; 00429455 | void core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180(CDemonSet * this_ptr)
        ;   XREF to: 00574180 (UNCONDITIONAL_CALL)
    MOV dword ptr [EBX + 0x2430],ESI    ; 0042945a
    ADD ESP,0x4                         ; 00429460
    MOV EAX,dword ptr [EBX + 0x2430]    ; 00429463
    MOV dword ptr [EBX + 0x242c],EAX    ; 00429469
    MOV EAX,dword ptr [EBX + 0x242c]    ; 0042946f
    MOV dword ptr [EBX + 0x2428],EAX    ; 00429475
    MOV ESP,EBP                         ; 0042947b
    POP EBP                             ; 0042947d
    POP EDI                             ; 0042947e
    POP ESI                             ; 0042947f
    POP EBX                             ; 00429480
    RET                                 ; 00429481
    PUSH EAX                            ; 00429482
        ;   Label: LAB_00429482
    MOV ESI,0x66e778                    ; 00429483 | = "noCollision" | s_noCollision_0066e778 = noCollision
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 00429488 | SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0042948d
    MOV EDI,EAX                         ; 00429490
    MOV EDX,EAX                         ; 00429492
    SUB ECX,ECX                         ; 00429494
    DEC ECX                             ; 00429496
    XOR EAX,EAX                         ; 00429497
    SCASB.REPNE ES:EDI                  ; 00429499
    NOT ECX                             ; 0042949b
    DEC ECX                             ; 0042949d
    LEA EDI,[ESP + 0x4c]                ; 0042949e
    SUB ECX,0xb                         ; 004294a2
    MOVSD ES:EDI,ESI                    ; 004294a5 | = "noCollision" | s_noCollision_0066e778 = noCollision
    MOVSD ES:EDI,ESI                    ; 004294a6 | s_llision_0066e77c
    MOVSD ES:EDI,ESI                    ; 004294a7 | s_ion_0066e780
    MOV dword ptr [ESP + 0xb0],ECX      ; 004294a8
    MOV ESI,EDX                         ; 004294af
    XOR EDI,EDI                         ; 004294b1
    TEST ECX,ECX                        ; 004294b3
    JL 0x00428fcc                       ; 004294b5 | LAB_00428fcc
        ;   XREF to: 00428fcc (CONDITIONAL_JUMP)
    PUSH 0xb                            ; 004294bb
        ;   Label: LAB_004294bb
    LEA EAX,[ESP + 0x50]                ; 004294bd
    PUSH EAX                            ; 004294c1
    PUSH ESI                            ; 004294c2
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 004294c3 | int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004294c8
    TEST EAX,EAX                        ; 004294cb
    JZ 0x004294e1                       ; 004294cd | LAB_004294e1
        ;   XREF to: 004294e1 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [ESP + 0xb0]      ; 004294cf
    INC EDI                             ; 004294d6
    INC ESI                             ; 004294d7
    CMP EDI,ECX                         ; 004294d8
    JLE 0x004294bb                      ; 004294da | LAB_004294bb
        ;   XREF to: 004294bb (CONDITIONAL_JUMP)
    JMP 0x00428fcc                      ; 004294dc | LAB_00428fcc
        ;   XREF to: 00428fcc (UNCONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x2430],EAX    ; 004294e1
        ;   Label: LAB_004294e1
    MOV EAX,dword ptr [EBX + 0x2430]    ; 004294e7
    MOV dword ptr [EBX + 0x242c],EAX    ; 004294ed
    MOV EAX,dword ptr [EBX + 0x242c]    ; 004294f3
    MOV dword ptr [EBX + 0x2428],EAX    ; 004294f9
    MOV ESP,EBP                         ; 004294ff
    POP EBP                             ; 00429501
    POP EDI                             ; 00429502
    POP ESI                             ; 00429503
    POP EBX                             ; 00429504
    RET                                 ; 00429505
    FLD1                                ; 00429506
        ;   Label: LAB_00429506
    FCOMP double ptr [ESP]              ; 00429508
    FNSTSW AX                           ; 0042950b
    SAHF                                ; 0042950d
    JNC 0x00429518                      ; 0042950e | LAB_00429518
        ;   XREF to: 00429518 (CONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0x10],0x3f800000 ; 00429510
    FLD float ptr [ESP + 0x10]          ; 00429518
        ;   Label: LAB_00429518
    FLD float ptr [ESP + 0x28]          ; 0042951c
    FMUL ST1                            ; 00429520
    FLD float ptr [ESP + 0x2c]          ; 00429522
    FMUL ST2                            ; 00429526
    FLD float ptr [ESP + 0x30]          ; 00429528
    FMULP ST3                           ; 0042952c
    MOV EAX,dword ptr [ESP + 0xa8]      ; 0042952e
    FXCH                                ; 00429535
    FSTP float ptr [ESP + 0x70]         ; 00429537
    FSTP float ptr [ESP + 0x74]         ; 0042953b
    FSTP float ptr [ESP + 0x78]         ; 0042953f
    FLD float ptr [EAX]                 ; 00429543
    FADD float ptr [ESP + 0x70]         ; 00429545
    FLD float ptr [EAX + 0x4]           ; 00429549
    FXCH                                ; 0042954c
    FSTP float ptr [EAX]                ; 0042954e
    FADD float ptr [ESP + 0x74]         ; 00429550
    FLD float ptr [EAX + 0x8]           ; 00429554
    FXCH                                ; 00429557
    FSTP float ptr [EAX + 0x4]          ; 00429559
    FADD float ptr [ESP + 0x78]         ; 0042955c
    MOV EDX,dword ptr [0x006810c8]      ; 00429560 | CDemonSet * g_CDemonSetPtr
    FSTP float ptr [EAX + 0x8]          ; 00429566
    MOV EAX,dword ptr [EDX + 0x14d128]  ; 00429569 | DAT_032613a0
    ADD EDX,0x14d128                    ; 0042956f
    MOV dword ptr [ESP + 0x58],EAX      ; 00429575
    LEA EAX,[EDX + 0x4]                 ; 00429579 | DAT_032613a4
    MOV EAX,dword ptr [EAX]             ; 0042957c | DAT_032613a4
    MOV dword ptr [ESP + 0x5c],EAX      ; 0042957e
    LEA EAX,[EDX + 0x8]                 ; 00429582 | DAT_032613a8
    MOV EAX,dword ptr [EAX]             ; 00429585 | DAT_032613a8
    MOV dword ptr [ESP + 0x60],EAX      ; 00429587
    LEA EAX,[ESP + 0x34]                ; 0042958b
    PUSH EAX                            ; 0042958f
    MOV EDX,dword ptr [EBX + 0x154]     ; 00429590
    PUSH dword ptr [EBX + 0x2ddc]       ; 00429596
    PUSH EBX                            ; 0042959c
    CALL dword ptr [EDX + 0x38]         ; 0042959d
    MOV dword ptr [ESP + 0xc8],EAX      ; 004295a0
    FLD float ptr [ESP + 0xc8]          ; 004295a7
    ADD ESP,0xc                         ; 004295ae
    IMUL EAX,dword ptr [ESP + 0x98],0x24 ; 004295b1
    MOV ECX,dword ptr [ESP + 0x84]      ; 004295b9
    XOR EDX,EDX                         ; 004295c0
    ADD EAX,ECX                         ; 004295c2
    FSTP float ptr [EBX + 0x2414]       ; 004295c4
    CMP EAX,0x15c4800                   ; 004295ca | CVector3f g_TempNormal0
    JZ 0x004295eb                       ; 004295cf | LAB_004295eb
        ;   XREF to: 004295eb (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [0x015c4800]      ; 004295d1 | CVector3f g_TempNormal0
    MOV dword ptr [EAX],ECX             ; 004295d7
    MOV ECX,dword ptr [0x015c4804]      ; 004295d9 | g_TempNormal0.y
    MOV dword ptr [EAX + 0x4],ECX       ; 004295df
    MOV ECX,dword ptr [0x015c4808]      ; 004295e2 | g_TempNormal0.z
    MOV dword ptr [EAX + 0x8],ECX       ; 004295e8
    MOV EAX,dword ptr [ESP + 0xa4]      ; 004295eb
        ;   Label: LAB_004295eb
    CMP EAX,0x15c480c                   ; 004295f2 | CVector3f g_TempNormal1
    JZ 0x00429613                       ; 004295f7 | LAB_00429613
        ;   XREF to: 00429613 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [0x015c480c]      ; 004295f9 | CVector3f g_TempNormal1
    MOV dword ptr [EAX],ECX             ; 004295ff
    MOV ECX,dword ptr [0x015c4810]      ; 00429601 | g_TempNormal1.y
    MOV dword ptr [EAX + 0x4],ECX       ; 00429607
    MOV ECX,dword ptr [0x015c4814]      ; 0042960a | g_TempNormal1.z
    MOV dword ptr [EAX + 0x8],ECX       ; 00429610
    CMP ESI,0x15c4818                   ; 00429613 | CVector3f g_TempNormal2
        ;   Label: LAB_00429613
    JZ 0x00429632                       ; 00429619 | LAB_00429632
        ;   XREF to: 00429632 (CONDITIONAL_JUMP)
    MOV EAX,[0x015c4818]                ; 0042961b | CVector3f g_TempNormal2
    MOV dword ptr [ESI],EAX             ; 00429620
    MOV EAX,[0x015c481c]                ; 00429622 | g_TempNormal2.y
    MOV dword ptr [ESI + 0x4],EAX       ; 00429627
    MOV EAX,[0x015c4820]                ; 0042962a | g_TempNormal2.z
    MOV dword ptr [ESI + 0x8],EAX       ; 0042962f
    FLD float ptr [EBX + 0x24]          ; 00429632
        ;   Label: LAB_00429632
    FCOMP float ptr [EBX + 0x2414]      ; 00429635
    FNSTSW AX                           ; 0042963b
    SAHF                                ; 0042963d
    JNC 0x00429650                      ; 0042963e | LAB_00429650
        ;   XREF to: 00429650 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0x2414]    ; 00429640
    MOV dword ptr [EBX + 0x24],EAX      ; 00429646
    MOV EAX,dword ptr [EBX + 0x24]      ; 00429649
    MOV dword ptr [ESP + 0x20],EAX      ; 0042964c
    FLD float ptr [ESP + 0x10]          ; 00429650
        ;   Label: LAB_00429650
    FCOMP double ptr [0x00617082]       ; 00429654 | double DOUBLE_00617082
    FNSTSW AX                           ; 0042965a
    SAHF                                ; 0042965c
    JA 0x00429334                       ; 0042965d | LAB_00429334
        ;   XREF to: 00429334 (CONDITIONAL_JUMP)
    FLD float ptr [ESP + 0x58]          ; 00429663
    FMUL ST0                            ; 00429667
    FLD float ptr [ESP + 0x60]          ; 00429669
    FMUL ST0                            ; 0042966d
    FADDP                               ; 0042966f
    FSQRT                               ; 00429671
    XOR ECX,ECX                         ; 00429673
    FLDZ                                ; 00429675
    MOV dword ptr [ESP + 0x5c],ECX      ; 00429677
    FXCH                                ; 0042967b
    FSTP float ptr [ESP + 0x14]         ; 0042967d
    FCOMP float ptr [ESP + 0x14]        ; 00429681
    FNSTSW AX                           ; 00429685
    SAHF                                ; 00429687
    JNC 0x004296c8                      ; 00429688 | LAB_004296c8
        ;   XREF to: 004296c8 (CONDITIONAL_JUMP)
    FLD float ptr [ESP + 0x14]          ; 0042968a
    FLD1                                ; 0042968e
    FDIVRP                              ; 00429690
    FLD float ptr [ESP + 0x58]          ; 00429692
    FXCH                                ; 00429696
    FSTP float ptr [ESP + 0xb8]         ; 00429698
    FMUL float ptr [ESP + 0xb8]         ; 0042969f
    FLDZ                                ; 004296a6
    FMUL float ptr [ESP + 0xb8]         ; 004296a8
    FLD float ptr [ESP + 0x60]          ; 004296af
    FMUL float ptr [ESP + 0xb8]         ; 004296b3
    FXCH ST2                            ; 004296ba
    FSTP float ptr [ESP + 0x58]         ; 004296bc
    FSTP float ptr [ESP + 0x5c]         ; 004296c0
    FSTP float ptr [ESP + 0x60]         ; 004296c4
    FLD float ptr [ESP + 0x10]          ; 004296c8
        ;   Label: LAB_004296c8
    FSUBR double ptr [0x00617082]       ; 004296cc | double DOUBLE_00617082
    FLD float ptr [ESP + 0x28]          ; 004296d2
    FXCH                                ; 004296d6
    FSTP float ptr [ESP + 0x94]         ; 004296d8
    FMUL float ptr [ESP + 0x94]         ; 004296df
    FLD float ptr [ESP + 0x2c]          ; 004296e6
    FMUL float ptr [ESP + 0x94]         ; 004296ea
    FLD float ptr [ESP + 0x5c]          ; 004296f1
    FXCH                                ; 004296f5
    FSTP float ptr [ESP + 0x2c]         ; 004296f7
    FMUL float ptr [ESP + 0x2c]         ; 004296fb
    FXCH                                ; 004296ff
    FSTP float ptr [ESP + 0x28]         ; 00429701
    FLD float ptr [ESP + 0x58]          ; 00429705
    FMUL float ptr [ESP + 0x28]         ; 00429709
    FLD float ptr [ESP + 0x30]          ; 0042970d
    FMUL float ptr [ESP + 0x94]         ; 00429711
    FXCH                                ; 00429718
    FADDP ST2,ST0                       ; 0042971a
    FSTP float ptr [ESP + 0x30]         ; 0042971c
    FLD float ptr [ESP + 0x60]          ; 00429720
    FMUL float ptr [ESP + 0x30]         ; 00429724
    FADDP                               ; 00429728
    FLDZ                                ; 0042972a
    FXCH                                ; 0042972c
    FSTP double ptr [ESP + 0x8]         ; 0042972e
    FCOMP double ptr [ESP + 0x8]        ; 00429732
    FNSTSW AX                           ; 00429736
    SAHF                                ; 00429738
    JBE 0x00429334                      ; 00429739 | LAB_00429334
        ;   XREF to: 00429334 (CONDITIONAL_JUMP)
    FLD double ptr [ESP + 0x8]          ; 0042973f
    FMUL double ptr [0x0061707a]        ; 00429743 | double DOUBLE_0061707a
    FLD float ptr [ESP + 0x58]          ; 00429749
    FMUL ST1                            ; 0042974d
    FLD float ptr [ESP + 0x5c]          ; 0042974f
    FMUL ST2                            ; 00429753
    FLD float ptr [ESP + 0x60]          ; 00429755
    FMULP ST3                           ; 00429759
    FLD float ptr [ESP + 0x28]          ; 0042975b
    FLD float ptr [ESP + 0x2c]          ; 0042975f
    FLD float ptr [ESP + 0x30]          ; 00429763
    FXCH ST4                            ; 00429767
    FSTP float ptr [ESP + 0x64]         ; 00429769
    FXCH ST2                            ; 0042976d
    FSTP float ptr [ESP + 0x68]         ; 0042976f
    FXCH ST3                            ; 00429773
    FSTP float ptr [ESP + 0x6c]         ; 00429775
    FXCH ST2                            ; 00429779
    FSUB float ptr [ESP + 0x64]         ; 0042977b
    FXCH ST2                            ; 0042977f
    FSUB float ptr [ESP + 0x68]         ; 00429781
    FXCH                                ; 00429785
    FSUB float ptr [ESP + 0x6c]         ; 00429787
    FXCH ST2                            ; 0042978b
    FSTP float ptr [ESP + 0x28]         ; 0042978d
    FSTP float ptr [ESP + 0x2c]         ; 00429791
    FSTP float ptr [ESP + 0x30]         ; 00429795
    JMP 0x004292f4                      ; 00429799 | LAB_004292f4
        ;   XREF to: 004292f4 (UNCONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0x2410],0x0    ; 0042979e
        ;   Label: LAB_0042979e
    JZ 0x00429383                       ; 004297a5 | LAB_00429383
        ;   XREF to: 00429383 (CONDITIONAL_JUMP)
    FLD float ptr [EBX + 0x2414]        ; 004297ab
    FADD double ptr [0x00617072]        ; 004297b1 | double DOUBLE_00617072
    FLD float ptr [EBX + 0x24]          ; 004297b7
    FCOMPP                              ; 004297ba
    FNSTSW AX                           ; 004297bc
    SAHF                                ; 004297be
    JNC 0x00429383                      ; 004297bf | LAB_00429383
        ;   XREF to: 00429383 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0x2414]    ; 004297c5
    MOV dword ptr [EBX + 0x24],EAX      ; 004297cb
    MOV EAX,dword ptr [EBX + 0x24]      ; 004297ce
    MOV dword ptr [ESP + 0x20],EAX      ; 004297d1
    JMP 0x00429383                      ; 004297d5 | LAB_00429383
        ;   XREF to: 00429383 (UNCONDITIONAL_JUMP)

