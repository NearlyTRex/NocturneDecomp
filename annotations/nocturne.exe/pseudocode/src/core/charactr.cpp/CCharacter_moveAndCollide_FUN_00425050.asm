; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050(int param_1,uint *param_2)
;
; Local Variables:
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined8       Stack[-0xd8]:8  local_d8
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined        Stack[-0x88]:1  local_88
; undefined        Stack[-0x7c]:1  local_7c
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
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
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[36]:
;   FUN_00418a00 at 00418f7a
;   FUN_0041fe40 at 00420879
;   FUN_00439f50 at 0043a45a
;   FUN_00495a20 at 004968f2
;   FUN_004a9270 at 004a94ef
;   FUN_004b32d0 at 004b3864
;   FUN_004b6d80 at 004b7f81
;   FUN_004b9fe0 at 004ba72b
;   FUN_004c4970 at 004c4ba8
;   FUN_004d4f30 at 004d56ea
;   ... and 26 more
;
; Referenced Globals:
;   double DOUBLE_00579f42 = 0.5
;   double DOUBLE_00579f4a = 1.20000000000000
;   double DOUBLE_00579f52 = 0.900000000000000
;   double DOUBLE_00579f5a = -0.0100000000000000
;   string s_noCollision_005ad1f0
;   undefined4 s_llision_005ad1f0+4
;   undefined4 s_ion_005ad1f0+8
;   undefined4 DAT_005b9284
;   undefined4 DAT_005b9354
;   undefined4 DAT_005be368
;   undefined4 DAT_006e6f69
;   undefined4 DAT_00765a9c
;   undefined4 DAT_014b89e8
;   undefined4 DAT_014b89ec
;   undefined4 DAT_014b89f0
;   ... and 13 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_inverseTransformVector_FUN_0040a220
;   core_actor.cpp_CDemonActor_transformVector_FUN_0040a200
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660
;   core_setcolid.cpp_CDemonSet_ignore_FUN_00511780
;   core_setcolid.cpp_CDemonSet_init_FUN_00511750
;   crt_string.c__strnicmp_FUN_00564bc0
;   FUN_004940d0
;   FUN_00510a40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00425050
        ;   Label: core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050
    PUSH ESI                            ; 00425051
    PUSH EDI                            ; 00425052
    PUSH EBP                            ; 00425053
    MOV EBP,ESP                         ; 00425054
    SUB ESP,0xd0                        ; 00425056
    AND ESP,0xfffffff8                  ; 0042505c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0042505f
    MOV EDX,dword ptr [EBP + 0x18]      ; 00425062
    PUSH EDX                            ; 00425065
    LEA EAX,[ESP + 0x50]                ; 00425066
    PUSH EAX                            ; 0042506a
    PUSH EBX                            ; 0042506b
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_0040a200 ; 0042506c
        ;   XREF to: 0040a200 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_transformVector_FUN_0040a200()
    MOV ECX,dword ptr [EBX + 0xdc]      ; 00425071
    ADD ESP,0xc                         ; 00425077
    TEST ECX,ECX                        ; 0042507a
    JNZ 0x004254f0                      ; 0042507c
        ;   XREF to: 004254f0 (CONDITIONAL_JUMP)  ; LAB_004254f0
    MOV EAX,dword ptr [EBP + 0x18]      ; 00425082
        ;   Label: LAB_00425082
    XOR ESI,ESI                         ; 00425085
    MOV EDI,dword ptr [EAX + 0x8]       ; 00425087
    MOV dword ptr [0x00765a9c],ESI      ; 0042508a | DAT_00765a9c
    TEST EDI,0x7fffffff                 ; 00425090
    JNZ 0x004250c7                      ; 00425096
        ;   XREF to: 004250c7 (CONDITIONAL_JUMP)  ; LAB_004250c7
    TEST dword ptr [EAX],0x7fffffff     ; 00425098
    JNZ 0x004250c7                      ; 0042509e
        ;   XREF to: 004250c7 (CONDITIONAL_JUMP)  ; LAB_004250c7
    FLD float ptr [EAX + 0x4]           ; 004250a0
    FLDZ                                ; 004250a3
    FCOMPP                              ; 004250a5
    FNSTSW AX                           ; 004250a7
    SAHF                                ; 004250a9
    JC 0x004250c7                       ; 004250aa
        ;   XREF to: 004250c7 (CONDITIONAL_JUMP)  ; LAB_004250c7
    CMP dword ptr [EBX + 0xdc],0x0      ; 004250ac
    JNZ 0x004250c7                      ; 004250b3
        ;   XREF to: 004250c7 (CONDITIONAL_JUMP)  ; LAB_004250c7
    FLD float ptr [EBX + 0x24]          ; 004250b5
    FCOMP float ptr [EBX + 0x240c]      ; 004250b8
    FNSTSW AX                           ; 004250be
    SAHF                                ; 004250c0
    JZ 0x00425573                       ; 004250c1
        ;   XREF to: 00425573 (CONDITIONAL_JUMP)  ; LAB_00425573
    LEA EDX,[EBX + 0x150]               ; 004250c7
        ;   Label: LAB_004250c7
    LEA EAX,[EBX + 0x23b0]              ; 004250cd
    CMP byte ptr [EAX],0x0              ; 004250d3
    JNZ 0x004255a7                      ; 004250d6
        ;   XREF to: 004255a7 (CONDITIONAL_JUMP)  ; LAB_004255a7
    LEA EAX,[EBX + 0x2c54]              ; 004250dc
        ;   Label: LAB_004250dc
    XOR ESI,ESI                         ; 004250e2
    MOV dword ptr [ESP + 0xc4],EAX      ; 004250e4
    LEA EDX,[EBX + 0x2d08]              ; 004250eb
    MOV EDI,dword ptr [ESP + 0xc4]      ; 004250f1
    LEA EAX,[EBX + 0x2c78]              ; 004250f8
    MOV dword ptr [ESP + 0x94],EDX      ; 004250fe
    MOV dword ptr [ESP + 0x90],EAX      ; 00425105
    IMUL EAX,ESI,0x24                   ; 0042510c
        ;   Label: LAB_0042510c
    MOV EDX,dword ptr [ESP + 0x94]      ; 0042510f
    MOV ECX,dword ptr [ESP + 0x90]      ; 00425116
    ADD EAX,EDI                         ; 0042511d
    MOV dword ptr [EAX + 0x8],0x0       ; 0042511f
        ;   Label: LAB_0042511f
    ADD EDX,0xc                         ; 00425126
    FLD float ptr [EAX + 0x8]           ; 00425129
    FST float ptr [EAX + 0x4]           ; 0042512c
    FSTP float ptr [EAX]                ; 0042512f
    MOV dword ptr [EDX + -0x4],0x0      ; 00425131
    ADD EAX,0xc                         ; 00425138
    FLD float ptr [EDX + -0x4]          ; 0042513b
    FST float ptr [EDX + -0x8]          ; 0042513e
    FSTP float ptr [EDX + -0xc]         ; 00425141
    CMP EAX,ECX                         ; 00425144
    JNZ 0x0042511f                      ; 00425146
        ;   XREF to: 0042511f (CONDITIONAL_JUMP)  ; LAB_0042511f
    MOV EDX,dword ptr [ESP + 0x94]      ; 00425148
    MOV EAX,dword ptr [ESP + 0x90]      ; 0042514f
    INC ESI                             ; 00425156
    ADD EDX,0x24                        ; 00425157
    ADD EAX,0x24                        ; 0042515a
    MOV dword ptr [ESP + 0x94],EDX      ; 0042515d
    MOV dword ptr [ESP + 0x90],EAX      ; 00425164
    CMP ESI,0x5                         ; 0042516b
    JL 0x0042510c                       ; 0042516e
        ;   XREF to: 0042510c (CONDITIONAL_JUMP)  ; LAB_0042510c
    LEA ESI,[EBX + 0x20]                ; 00425170
    MOV EAX,dword ptr [ESI]             ; 00425173
    MOV dword ptr [ESP + 0x34],EAX      ; 00425175
    LEA EAX,[ESI + 0x4]                 ; 00425179
    MOV EAX,dword ptr [EAX]             ; 0042517c
    MOV dword ptr [ESP + 0x38],EAX      ; 0042517e
    LEA EAX,[ESI + 0x8]                 ; 00425182
    PUSH EBX                            ; 00425185
    MOV ECX,dword ptr [0x005be368]      ; 00425186 | DAT_005be368
    MOV EAX,dword ptr [EAX]             ; 0042518c
    PUSH ECX                            ; 0042518e | DAT_01e57284
    MOV dword ptr [ESP + 0x44],EAX      ; 0042518f
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00511780 ; 00425193
        ;   XREF to: 00511780 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_ignore_FUN_00511780()
    ADD ESP,0x8                         ; 00425198
    XOR EDI,EDI                         ; 0042519b
    MOV EAX,dword ptr [EBP + 0x18]      ; 0042519d
    MOV dword ptr [ESP + 0xa4],EDI      ; 004251a0
    MOV EAX,dword ptr [EAX + 0x4]       ; 004251a7
    MOV dword ptr [ESP + 0xb0],ESI      ; 004251aa
    MOV dword ptr [ESP + 0xc0],EAX      ; 004251b1
    LEA EAX,[EBX + 0x2d08]              ; 004251b8
    MOV dword ptr [ESP + 0xac],ESI      ; 004251be
    MOV dword ptr [ESP + 0xbc],EAX      ; 004251c5
    LEA EAX,[EBX + 0x2c54]              ; 004251cc
    MOV ESI,dword ptr [ESP + 0xbc]      ; 004251d2
    MOV dword ptr [ESP + 0x88],EAX      ; 004251d9
    ADD EAX,0xc                         ; 004251e0
    ADD ESI,0xc                         ; 004251e3
    MOV dword ptr [ESP + 0xb8],EAX      ; 004251e6
    MOV EAX,dword ptr [ESP + 0xbc]      ; 004251ed
    MOV EDI,dword ptr [ESP + 0x88]      ; 004251f4
    ADD EAX,0x18                        ; 004251fb
    ADD EDI,0x18                        ; 004251fe
    MOV dword ptr [ESP + 0xb4],EAX      ; 00425201
    XOR EAX,EAX                         ; 00425208
        ;   Label: LAB_00425208
    MOV dword ptr [ESP + 0x50],EAX      ; 0042520a
    FLD float ptr [EBX + 0x2de8]        ; 0042520e
    FMUL float ptr [EBX + 0x2614]       ; 00425214
    FLD float ptr [EBX + 0x2de4]        ; 0042521a
    FMUL float ptr [EBX + 0x2614]       ; 00425220
    FXCH                                ; 00425226
    FSTP float ptr [ESP + 0xa8]         ; 00425228
    FCOMP float ptr [ESP + 0xa8]        ; 0042522f
    FNSTSW AX                           ; 00425236
    SAHF                                ; 00425238
    JBE 0x00425248                      ; 00425239
        ;   XREF to: 00425248 (CONDITIONAL_JUMP)  ; LAB_00425248
    MOV EAX,dword ptr [EBX + 0x2398]    ; 0042523b
    MOV dword ptr [ESP + 0xa8],EAX      ; 00425241
    FLD float ptr [EBX + 0x2de4]        ; 00425248
        ;   Label: LAB_00425248
    FMUL float ptr [EBX + 0x2614]       ; 0042524e
    FLD float ptr [ESP + 0xa8]          ; 00425254
    FXCH                                ; 0042525b
    FSTP float ptr [ESP + 0x10]         ; 0042525d
    FCOMP float ptr [ESP + 0x10]        ; 00425261
    FNSTSW AX                           ; 00425265
    SAHF                                ; 00425267
    JNC 0x00425283                      ; 00425268
        ;   XREF to: 00425283 (CONDITIONAL_JUMP)  ; LAB_00425283
    FLD float ptr [ESP + 0x10]          ; 0042526a
    FLD float ptr [EBX + 0x2614]        ; 0042526e
    FMUL double ptr [0x00579f42]        ; 00425274 | DOUBLE_00579f42
    FADDP                               ; 0042527a
    FSTP float ptr [ESP + 0xa8]         ; 0042527c
    FLD float ptr [EBX + 0x24]          ; 00425283
        ;   Label: LAB_00425283
    FADD float ptr [ESP + 0xa8]         ; 00425286
    SUB ESP,0x4                         ; 0042528d
    FSTP float ptr [ESP]                ; 00425290
    FLD float ptr [EBX + 0x2de4]        ; 00425293
    FMUL float ptr [EBX + 0x2614]       ; 00425299
    FADD float ptr [EBX + 0x24]         ; 0042529f
    SUB ESP,0x4                         ; 004252a2
    FSTP float ptr [ESP]                ; 004252a5
    FLD float ptr [EBX + 0x2dd8]        ; 004252a8
    FMUL float ptr [EBX + 0x2614]       ; 004252ae
    SUB ESP,0x4                         ; 004252b4
    FSTP float ptr [ESP]                ; 004252b7
    PUSH dword ptr [ESP + 0x60]         ; 004252ba
    PUSH dword ptr [ESP + 0x5c]         ; 004252be
    PUSH dword ptr [EBX + 0x28]         ; 004252c2
    MOV EDX,dword ptr [0x005be368]      ; 004252c5 | DAT_005be368
    PUSH dword ptr [EBX + 0x20]         ; 004252cb
    PUSH EDX                            ; 004252ce | DAT_01e57284
    CALL FUN_00510a40                   ; 004252cf
        ;   XREF to: 00510a40 (UNCONDITIONAL_CALL)  ; undefined FUN_00510a40()
    MOV dword ptr [ESP + 0xec],EAX      ; 004252d4
    FLD float ptr [ESP + 0xec]          ; 004252db
    ADD ESP,0x20                        ; 004252e2
    MOV ECX,dword ptr [0x00765a9c]      ; 004252e5 | DAT_00765a9c
    FSTP float ptr [ESP + 0x18]         ; 004252eb
    TEST ECX,ECX                        ; 004252ef
    JNZ 0x00425303                      ; 004252f1
        ;   XREF to: 00425303 (CONDITIONAL_JUMP)  ; LAB_00425303
    MOV EAX,[0x005be368]                ; 004252f3 | DAT_005be368
    MOV EAX,dword ptr [EAX + 0x14cd5c]  ; 004252f8 | DAT_01fa3fe0
    MOV [0x00765a9c],EAX                ; 004252fe | DAT_00765a9c
    IMUL EAX,dword ptr [ESP + 0xa4],0x24 ; 00425303
        ;   Label: LAB_00425303
    ADD EAX,dword ptr [ESP + 0x88]      ; 0042530b
    CMP EAX,0x14b89e8                   ; 00425312
    JZ 0x00425333                       ; 00425317
        ;   XREF to: 00425333 (CONDITIONAL_JUMP)  ; LAB_00425333
    MOV EDX,dword ptr [0x014b89e8]      ; 00425319 | DAT_014b89e8
    MOV dword ptr [EAX],EDX             ; 0042531f
    MOV EDX,dword ptr [0x014b89ec]      ; 00425321 | DAT_014b89ec
    MOV dword ptr [EAX + 0x4],EDX       ; 00425327
    MOV EDX,dword ptr [0x014b89f0]      ; 0042532a | DAT_014b89f0
    MOV dword ptr [EAX + 0x8],EDX       ; 00425330
    MOV EAX,dword ptr [ESP + 0xb8]      ; 00425333
        ;   Label: LAB_00425333
    CMP EAX,0x14b89f4                   ; 0042533a
    JZ 0x0042535b                       ; 0042533f
        ;   XREF to: 0042535b (CONDITIONAL_JUMP)  ; LAB_0042535b
    MOV EDX,dword ptr [0x014b89f4]      ; 00425341 | DAT_014b89f4
    MOV dword ptr [EAX],EDX             ; 00425347
    MOV EDX,dword ptr [0x014b89f8]      ; 00425349 | DAT_014b89f8
    MOV dword ptr [EAX + 0x4],EDX       ; 0042534f
    MOV EDX,dword ptr [0x014b89fc]      ; 00425352 | DAT_014b89fc
    MOV dword ptr [EAX + 0x8],EDX       ; 00425358
    CMP EDI,0x14b8a00                   ; 0042535b
        ;   Label: LAB_0042535b
    JZ 0x0042537a                       ; 00425361
        ;   XREF to: 0042537a (CONDITIONAL_JUMP)  ; LAB_0042537a
    MOV EAX,[0x014b8a00]                ; 00425363 | DAT_014b8a00
    MOV dword ptr [EDI],EAX             ; 00425368
    MOV EAX,[0x014b8a04]                ; 0042536a | DAT_014b8a04
    MOV dword ptr [EDI + 0x4],EAX       ; 0042536f
    MOV EAX,[0x014b8a08]                ; 00425372 | DAT_014b8a08
    MOV dword ptr [EDI + 0x8],EAX       ; 00425377
    FLD float ptr [ESP + 0x18]          ; 0042537a
        ;   Label: LAB_0042537a
    FLDZ                                ; 0042537e
    FXCH                                ; 00425380
    FSTP double ptr [ESP + 0x8]         ; 00425382
    FCOMP double ptr [ESP + 0x8]        ; 00425386
    FNSTSW AX                           ; 0042538a
    SAHF                                ; 0042538c
    JBE 0x0042562b                      ; 0042538d
        ;   XREF to: 0042562b (CONDITIONAL_JUMP)  ; LAB_0042562b
    FLD double ptr [ESP + 0x8]          ; 00425393
    MOV EAX,[0x005be368]                ; 00425397 | DAT_005be368
    FADD double ptr [0x00579f5a]        ; 0042539c | DOUBLE_00579f5a
    FLD float ptr [EAX + 0x14cd40]      ; 004253a2 | DAT_01fa3fc4
    FXCH                                ; 004253a8
    FSTP float ptr [ESP + 0x98]         ; 004253aa
    FMUL float ptr [ESP + 0x98]         ; 004253b1
    FSTP float ptr [ESP + 0x40]         ; 004253b8
    FLD float ptr [EAX + 0x14cd44]      ; 004253bc | DAT_01fa3fc8
    FMUL float ptr [ESP + 0x98]         ; 004253c2
    FSTP float ptr [ESP + 0x44]         ; 004253c9
    FLD float ptr [EAX + 0x14cd48]      ; 004253cd | DAT_01fa3fcc
    FMUL float ptr [ESP + 0x98]         ; 004253d3
    MOV EDX,0x1                         ; 004253da
    MOV EAX,dword ptr [ESP + 0xb0]      ; 004253df
    FSTP float ptr [ESP + 0x48]         ; 004253e6
    FLD float ptr [EAX]                 ; 004253ea
    FSUB float ptr [ESP + 0x40]         ; 004253ec
    FLD float ptr [EAX + 0x4]           ; 004253f0
    FXCH                                ; 004253f3
    FSTP float ptr [EAX]                ; 004253f5
    FSUB float ptr [ESP + 0x44]         ; 004253f7
    FLD float ptr [EAX + 0x8]           ; 004253fb
    FXCH                                ; 004253fe
    FSTP float ptr [EAX + 0x4]          ; 00425400
    FSUB float ptr [ESP + 0x48]         ; 00425403
    MOV dword ptr [ESP + 0x8c],EDX      ; 00425407
    FSTP float ptr [EAX + 0x8]          ; 0042540e
    MOV EAX,dword ptr [ESP + 0xb4]      ; 00425411
        ;   Label: LAB_00425411
    MOV EDX,dword ptr [ESP + 0xa4]      ; 00425418
    MOV ECX,dword ptr [ESP + 0xb8]      ; 0042541f
    ADD EDI,0x24                        ; 00425426
    ADD ESI,0x24                        ; 00425429
    ADD EAX,0x24                        ; 0042542c
    INC EDX                             ; 0042542f
    ADD ECX,0x24                        ; 00425430
    MOV dword ptr [ESP + 0xb4],EAX      ; 00425433
    MOV dword ptr [ESP + 0xa4],EDX      ; 0042543a
    MOV dword ptr [ESP + 0xb8],ECX      ; 00425441
    CMP EDX,0x3                         ; 00425448
    JL 0x00425208                       ; 0042544b
        ;   XREF to: 00425208 (CONDITIONAL_JUMP)  ; LAB_00425208
    CMP dword ptr [ESP + 0x8c],0x0      ; 00425451
        ;   Label: LAB_00425451
    JZ 0x00425484                       ; 00425459
        ;   XREF to: 00425484 (CONDITIONAL_JUMP)  ; LAB_00425484
    PUSH 0x0                            ; 0042545b
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0042545d
    PUSH dword ptr [EBX + 0x2dd4]       ; 00425463
    PUSH EBX                            ; 00425469
    CALL dword ptr [EAX + 0x38]         ; 0042546a
    MOV dword ptr [ESP + 0xd8],EAX      ; 0042546d
    MOV EAX,dword ptr [ESP + 0xd8]      ; 00425474
    MOV dword ptr [EBX + 0x240c],EAX    ; 0042547b
    ADD ESP,0xc                         ; 00425481
    FLD float ptr [EBX + 0x24]          ; 00425484
        ;   Label: LAB_00425484
    FADD float ptr [ESP + 0xc0]         ; 00425487
    FST float ptr [EBX + 0x24]          ; 0042548e
    FCOMP float ptr [EBX + 0x240c]      ; 00425491
    FNSTSW AX                           ; 00425497
    SAHF                                ; 00425499
    JNC 0x0042591f                      ; 0042549a
        ;   XREF to: 0042591f (CONDITIONAL_JUMP)  ; LAB_0042591f
    MOV EAX,dword ptr [EBX + 0x240c]    ; 004254a0
    MOV dword ptr [EBX + 0x24],EAX      ; 004254a6
    LEA EAX,[EBX + 0x2420]              ; 004254a9
        ;   Label: LAB_004254a9
    MOV dword ptr [EAX + 0x8],0x0       ; 004254af
    MOV EDX,dword ptr [EAX + 0x8]       ; 004254b6
    MOV dword ptr [EAX + 0x4],EDX       ; 004254b9
    MOV EDX,dword ptr [EAX + 0x4]       ; 004254bc
    MOV dword ptr [EAX],EDX             ; 004254bf
    MOV EAX,[0x005b9354]                ; 004254c1 | DAT_005b9354
    FLD float ptr [EAX + 0x264]         ; 004254c6 | DAT_01c77850
    FLD float ptr [EBX + 0x24]          ; 004254cc
    FSUB float ptr [ESP + 0x38]         ; 004254cf
    FDIVRP                              ; 004254d3
    MOV EAX,[0x005be368]                ; 004254d5 | DAT_005be368
    PUSH EAX                            ; 004254da | DAT_01e57284
    FSTP float ptr [EBX + 0x2424]       ; 004254db
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00511750 ; 004254e1
        ;   XREF to: 00511750 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_init_FUN_00511750()
    ADD ESP,0x4                         ; 004254e6
    MOV ESP,EBP                         ; 004254e9
    POP EBP                             ; 004254eb
    POP EDI                             ; 004254ec
    POP ESI                             ; 004254ed
    POP EBX                             ; 004254ee
    RET                                 ; 004254ef
    FLD float ptr [EBX + 0xe4]          ; 004254f0
        ;   Label: LAB_004254f0
    FADD float ptr [EBX + 0x24]         ; 004254f6
    FSTP float ptr [EBX + 0x24]         ; 004254f9
    FLD float ptr [ESP + 0x4c]          ; 004254fc
    FADD float ptr [EBX + 0xe0]         ; 00425500
    FLD float ptr [ESP + 0x54]          ; 00425506
    FXCH                                ; 0042550a
    FSTP float ptr [ESP + 0x4c]         ; 0042550c
    FADD float ptr [EBX + 0xe8]         ; 00425510
    LEA EAX,[EBX + 0xe0]                ; 00425516
    FSTP float ptr [ESP + 0x54]         ; 0042551c
    MOV dword ptr [EAX + 0x8],0x0       ; 00425520
    LEA EDX,[EBX + 0x30]                ; 00425527
    MOV ECX,dword ptr [EAX + 0x8]       ; 0042552a
    MOV dword ptr [EAX + 0x4],ECX       ; 0042552d
    MOV ECX,dword ptr [EAX + 0x4]       ; 00425530
    MOV dword ptr [EAX],ECX             ; 00425533
    LEA EAX,[EBX + 0xec]                ; 00425535
    FLD float ptr [EAX]                 ; 0042553b
    FADD float ptr [EDX]                ; 0042553d
    FSTP float ptr [EDX]                ; 0042553f
    FLD float ptr [EAX + 0x4]           ; 00425541
    FADD float ptr [EDX + 0x4]          ; 00425544
    FSTP float ptr [EDX + 0x4]          ; 00425547
    FLD float ptr [EAX + 0x8]           ; 0042554a
    FADD float ptr [EDX + 0x8]          ; 0042554d
    FSTP float ptr [EDX + 0x8]          ; 00425550
    MOV dword ptr [EAX + 0x8],0x0       ; 00425553
    PUSH EBX                            ; 0042555a
    MOV EDX,dword ptr [EAX + 0x8]       ; 0042555b
    MOV dword ptr [EAX + 0x4],EDX       ; 0042555e
    MOV EDX,dword ptr [EAX + 0x4]       ; 00425561
    MOV dword ptr [EAX],EDX             ; 00425564
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000 ; 00425566
        ;   XREF to: 0040a000 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000()
    ADD ESP,0x4                         ; 0042556b
    JMP 0x00425082                      ; 0042556e
        ;   XREF to: 00425082 (UNCONDITIONAL_JUMP)  ; LAB_00425082
    MOV EDX,dword ptr [0x005be368]      ; 00425573 | DAT_005be368
        ;   Label: LAB_00425573
    PUSH EDX                            ; 00425579 | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00511750 ; 0042557a
        ;   XREF to: 00511750 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_init_FUN_00511750()
    MOV dword ptr [EBX + 0x2428],ESI    ; 0042557f
    ADD ESP,0x4                         ; 00425585
    MOV EAX,dword ptr [EBX + 0x2428]    ; 00425588
    MOV dword ptr [EBX + 0x2424],EAX    ; 0042558e
    MOV EAX,dword ptr [EBX + 0x2424]    ; 00425594
    MOV dword ptr [EBX + 0x2420],EAX    ; 0042559a
    MOV ESP,EBP                         ; 004255a0
    POP EBP                             ; 004255a2
    POP EDI                             ; 004255a3
    POP ESI                             ; 004255a4
    POP EBX                             ; 004255a5
    RET                                 ; 004255a6
    PUSH EDX                            ; 004255a7
        ;   Label: LAB_004255a7
    MOV ESI,0x5ad1f0                    ; 004255a8 | = "noCollision"
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 004255ad
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660()
    ADD ESP,0x4                         ; 004255b2
    MOV EDI,EAX                         ; 004255b5
    MOV EDX,EAX                         ; 004255b7
    SUB ECX,ECX                         ; 004255b9
    DEC ECX                             ; 004255bb
    XOR EAX,EAX                         ; 004255bc
    SCASB.REPNE ES:EDI                  ; 004255be
    NOT ECX                             ; 004255c0
    DEC ECX                             ; 004255c2
    LEA EDI,[ESP + 0x64]                ; 004255c3
    SUB ECX,0xb                         ; 004255c7
    MOVSD ES:EDI,ESI                    ; 004255ca | = "noCollision"
    MOVSD ES:EDI,ESI                    ; 004255cb | s_llision_005ad1f0+4
    MOVSD ES:EDI,ESI                    ; 004255cc | s_ion_005ad1f0+8 | DAT_006e6f69
    MOV dword ptr [ESP + 0xc8],ECX      ; 004255cd
    MOV ESI,EDX                         ; 004255d4
    XOR EDI,EDI                         ; 004255d6
    TEST ECX,ECX                        ; 004255d8
    JL 0x004250dc                       ; 004255da
        ;   XREF to: 004250dc (CONDITIONAL_JUMP)  ; LAB_004250dc
    PUSH 0xb                            ; 004255e0
        ;   Label: LAB_004255e0
    LEA EAX,[ESP + 0x68]                ; 004255e2
    PUSH EAX                            ; 004255e6
    PUSH ESI                            ; 004255e7
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 004255e8
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__strnicmp_FUN_00564bc0()
    ADD ESP,0xc                         ; 004255ed
    TEST EAX,EAX                        ; 004255f0
    JZ 0x00425606                       ; 004255f2
        ;   XREF to: 00425606 (CONDITIONAL_JUMP)  ; LAB_00425606
    MOV ECX,dword ptr [ESP + 0xc8]      ; 004255f4
    INC EDI                             ; 004255fb
    INC ESI                             ; 004255fc
    CMP EDI,ECX                         ; 004255fd
    JLE 0x004255e0                      ; 004255ff
        ;   XREF to: 004255e0 (CONDITIONAL_JUMP)  ; LAB_004255e0
    JMP 0x004250dc                      ; 00425601
        ;   XREF to: 004250dc (UNCONDITIONAL_JUMP)  ; LAB_004250dc
    MOV dword ptr [EBX + 0x2428],EAX    ; 00425606
        ;   Label: LAB_00425606
    MOV EAX,dword ptr [EBX + 0x2428]    ; 0042560c
    MOV dword ptr [EBX + 0x2424],EAX    ; 00425612
    MOV EAX,dword ptr [EBX + 0x2424]    ; 00425618
    MOV dword ptr [EBX + 0x2420],EAX    ; 0042561e
    MOV ESP,EBP                         ; 00425624
    POP EBP                             ; 00425626
    POP EDI                             ; 00425627
    POP ESI                             ; 00425628
    POP EBX                             ; 00425629
    RET                                 ; 0042562a
    FLD1                                ; 0042562b
        ;   Label: LAB_0042562b
    FCOMP double ptr [ESP + 0x8]        ; 0042562d
    FNSTSW AX                           ; 00425631
    SAHF                                ; 00425633
    JNC 0x0042563e                      ; 00425634
        ;   XREF to: 0042563e (CONDITIONAL_JUMP)  ; LAB_0042563e
    MOV dword ptr [ESP + 0x18],0x3f800000 ; 00425636
    FLD float ptr [ESP + 0x18]          ; 0042563e
        ;   Label: LAB_0042563e
    FLD float ptr [ESP + 0x4c]          ; 00425642
    FMUL ST1                            ; 00425646
    FLD float ptr [ESP + 0x50]          ; 00425648
    FMUL ST2                            ; 0042564c
    FLD float ptr [ESP + 0x54]          ; 0042564e
    FMULP ST3                           ; 00425652
    MOV EAX,dword ptr [ESP + 0xac]      ; 00425654
    FXCH                                ; 0042565b
    FSTP float ptr [ESP + 0x70]         ; 0042565d
    FSTP float ptr [ESP + 0x74]         ; 00425661
    FSTP float ptr [ESP + 0x78]         ; 00425665
    FLD float ptr [EAX]                 ; 00425669
    FADD float ptr [ESP + 0x70]         ; 0042566b
    FLD float ptr [EAX + 0x4]           ; 0042566f
    FXCH                                ; 00425672
    FSTP float ptr [EAX]                ; 00425674
    FADD float ptr [ESP + 0x74]         ; 00425676
    FLD float ptr [EAX + 0x8]           ; 0042567a
    FXCH                                ; 0042567d
    FSTP float ptr [EAX + 0x4]          ; 0042567f
    FADD float ptr [ESP + 0x78]         ; 00425682
    MOV EDX,dword ptr [0x005be368]      ; 00425686 | DAT_005be368
    FSTP float ptr [EAX + 0x8]          ; 0042568c
    MOV EAX,dword ptr [EDX + 0x14cd40]  ; 0042568f | DAT_01fa3fc4
    ADD EDX,0x14cd40                    ; 00425695
    MOV dword ptr [ESP + 0x28],EAX      ; 0042569b
    LEA EAX,[EDX + 0x4]                 ; 0042569f
    MOV EAX,dword ptr [EAX]             ; 004256a2 | DAT_01fa3fc8
    MOV dword ptr [ESP + 0x2c],EAX      ; 004256a4
    LEA EAX,[EDX + 0x8]                 ; 004256a8
    MOV EAX,dword ptr [EAX]             ; 004256ab | DAT_01fa3fcc
    MOV dword ptr [ESP + 0x30],EAX      ; 004256ad
    LEA EAX,[ESP + 0x58]                ; 004256b1
    PUSH EAX                            ; 004256b5
    MOV EDX,dword ptr [EBX + 0x14c]     ; 004256b6
    PUSH dword ptr [EBX + 0x2dd4]       ; 004256bc
    PUSH EBX                            ; 004256c2
    CALL dword ptr [EDX + 0x38]         ; 004256c3
    MOV dword ptr [ESP + 0xd8],EAX      ; 004256c6
    FLD float ptr [ESP + 0xd8]          ; 004256cd
    ADD ESP,0xc                         ; 004256d4
    IMUL EAX,dword ptr [ESP + 0xa4],0x24 ; 004256d7
    XOR ECX,ECX                         ; 004256df
    MOV dword ptr [ESP + 0x8c],ECX      ; 004256e1
    ADD EAX,dword ptr [ESP + 0xbc]      ; 004256e8
    FSTP float ptr [EBX + 0x240c]       ; 004256ef
    CMP EAX,0x14b89e8                   ; 004256f5
    JZ 0x00425716                       ; 004256fa
        ;   XREF to: 00425716 (CONDITIONAL_JUMP)  ; LAB_00425716
    MOV EDX,dword ptr [0x014b89e8]      ; 004256fc | DAT_014b89e8
    MOV dword ptr [EAX],EDX             ; 00425702
    MOV EDX,dword ptr [0x014b89ec]      ; 00425704 | DAT_014b89ec
    MOV dword ptr [EAX + 0x4],EDX       ; 0042570a
    MOV EDX,dword ptr [0x014b89f0]      ; 0042570d | DAT_014b89f0
    MOV dword ptr [EAX + 0x8],EDX       ; 00425713
    CMP ESI,0x14b89f4                   ; 00425716
        ;   Label: LAB_00425716
    JZ 0x00425735                       ; 0042571c
        ;   XREF to: 00425735 (CONDITIONAL_JUMP)  ; LAB_00425735
    MOV EAX,[0x014b89f4]                ; 0042571e | DAT_014b89f4
    MOV dword ptr [ESI],EAX             ; 00425723
    MOV EAX,[0x014b89f8]                ; 00425725 | DAT_014b89f8
    MOV dword ptr [ESI + 0x4],EAX       ; 0042572a
    MOV EAX,[0x014b89fc]                ; 0042572d | DAT_014b89fc
    MOV dword ptr [ESI + 0x8],EAX       ; 00425732
    MOV EAX,dword ptr [ESP + 0xb4]      ; 00425735
        ;   Label: LAB_00425735
    CMP EAX,0x14b8a00                   ; 0042573c
    JZ 0x0042575d                       ; 00425741
        ;   XREF to: 0042575d (CONDITIONAL_JUMP)  ; LAB_0042575d
    MOV EDX,dword ptr [0x014b8a00]      ; 00425743 | DAT_014b8a00
    MOV dword ptr [EAX],EDX             ; 00425749
    MOV EDX,dword ptr [0x014b8a04]      ; 0042574b | DAT_014b8a04
    MOV dword ptr [EAX + 0x4],EDX       ; 00425751
    MOV EDX,dword ptr [0x014b8a08]      ; 00425754 | DAT_014b8a08
    MOV dword ptr [EAX + 0x8],EDX       ; 0042575a
    MOV EAX,[0x01cae0e8]                ; 0042575d | DAT_01cae0e8
        ;   Label: LAB_0042575d
    MOV EDX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 00425762
    CMP EBX,EDX                         ; 00425769
    JNZ 0x004257aa                      ; 0042576b
        ;   XREF to: 004257aa (CONDITIONAL_JUMP)  ; LAB_004257aa
    FLD float ptr [ESP + 0x18]          ; 0042576d
    FLD1                                ; 00425771
    FCOMPP                              ; 00425773
    FNSTSW AX                           ; 00425775
    SAHF                                ; 00425777
    JBE 0x004257aa                      ; 00425778
        ;   XREF to: 004257aa (CONDITIONAL_JUMP)  ; LAB_004257aa
    MOV EAX,[0x005be368]                ; 0042577a | DAT_005be368
    ADD EAX,0x14cd40                    ; 0042577f
    PUSH EAX                            ; 00425784 | DAT_01fa3fc4
    LEA EAX,[ESP + 0x20]                ; 00425785
    PUSH EAX                            ; 00425789
    PUSH EDX                            ; 0042578a
    CALL core_actor.cpp_CDemonActor_inverseTransformVector_FUN_0040a220 ; 0042578b
        ;   XREF to: 0040a220 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_inverseTransformVector_FUN_0040a220()
    ADD ESP,0xc                         ; 00425790
    PUSH dword ptr [ESP + 0x24]         ; 00425793
    MOV ECX,dword ptr [0x005b9284]      ; 00425797 | DAT_005b9284
    PUSH dword ptr [ESP + 0x20]         ; 0042579d
    PUSH ECX                            ; 004257a1
    CALL FUN_004940d0                   ; 004257a2
        ;   XREF to: 004940d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004940d0()
    ADD ESP,0xc                         ; 004257a7
    FLD float ptr [EBX + 0x24]          ; 004257aa
        ;   Label: LAB_004257aa
    FCOMP float ptr [EBX + 0x240c]      ; 004257ad
    FNSTSW AX                           ; 004257b3
    SAHF                                ; 004257b5
    JNC 0x004257c8                      ; 004257b6
        ;   XREF to: 004257c8 (CONDITIONAL_JUMP)  ; LAB_004257c8
    MOV EAX,dword ptr [EBX + 0x240c]    ; 004257b8
    MOV dword ptr [EBX + 0x24],EAX      ; 004257be
    MOV EAX,dword ptr [EBX + 0x24]      ; 004257c1
    MOV dword ptr [ESP + 0x38],EAX      ; 004257c4
    FLD float ptr [ESP + 0x18]          ; 004257c8
        ;   Label: LAB_004257c8
    FCOMP double ptr [0x00579f52]       ; 004257cc | DOUBLE_00579f52
    FNSTSW AX                           ; 004257d2
    SAHF                                ; 004257d4
    JA 0x00425451                       ; 004257d5
        ;   XREF to: 00425451 (CONDITIONAL_JUMP)  ; LAB_00425451
    FLD float ptr [ESP + 0x28]          ; 004257db
    FMUL ST0                            ; 004257df
    FLD float ptr [ESP + 0x30]          ; 004257e1
    FMUL ST0                            ; 004257e5
    XOR EAX,EAX                         ; 004257e7
    FADDP                               ; 004257e9
    MOV dword ptr [ESP + 0x2c],EAX      ; 004257eb
    FSQRT                               ; 004257ef
    FLDZ                                ; 004257f1
    FXCH                                ; 004257f3
    FSTP float ptr [ESP + 0x14]         ; 004257f5
    FCOMP float ptr [ESP + 0x14]        ; 004257f9
    FNSTSW AX                           ; 004257fd
    SAHF                                ; 004257ff
    JNC 0x00425840                      ; 00425800
        ;   XREF to: 00425840 (CONDITIONAL_JUMP)  ; LAB_00425840
    FLD float ptr [ESP + 0x14]          ; 00425802
    FLD1                                ; 00425806
    FDIVRP                              ; 00425808
    FLD float ptr [ESP + 0x28]          ; 0042580a
    FXCH                                ; 0042580e
    FSTP float ptr [ESP + 0xa0]         ; 00425810
    FMUL float ptr [ESP + 0xa0]         ; 00425817
    FLDZ                                ; 0042581e
    FMUL float ptr [ESP + 0xa0]         ; 00425820
    FLD float ptr [ESP + 0x30]          ; 00425827
    FMUL float ptr [ESP + 0xa0]         ; 0042582b
    FXCH ST2                            ; 00425832
    FSTP float ptr [ESP + 0x28]         ; 00425834
    FSTP float ptr [ESP + 0x2c]         ; 00425838
    FSTP float ptr [ESP + 0x30]         ; 0042583c
    FLD float ptr [ESP + 0x18]          ; 00425840
        ;   Label: LAB_00425840
    FSUBR double ptr [0x00579f52]       ; 00425844 | DOUBLE_00579f52
    FLD float ptr [ESP + 0x4c]          ; 0042584a
    FXCH                                ; 0042584e
    FSTP float ptr [ESP + 0x9c]         ; 00425850
    FMUL float ptr [ESP + 0x9c]         ; 00425857
    FLD float ptr [ESP + 0x50]          ; 0042585e
    FMUL float ptr [ESP + 0x9c]         ; 00425862
    FLD float ptr [ESP + 0x2c]          ; 00425869
    FXCH                                ; 0042586d
    FSTP float ptr [ESP + 0x50]         ; 0042586f
    FMUL float ptr [ESP + 0x50]         ; 00425873
    FXCH                                ; 00425877
    FSTP float ptr [ESP + 0x4c]         ; 00425879
    FLD float ptr [ESP + 0x28]          ; 0042587d
    FMUL float ptr [ESP + 0x4c]         ; 00425881
    FLD float ptr [ESP + 0x54]          ; 00425885
    FMUL float ptr [ESP + 0x9c]         ; 00425889
    FXCH                                ; 00425890
    FADDP ST2,ST0                       ; 00425892
    FSTP float ptr [ESP + 0x54]         ; 00425894
    FLD float ptr [ESP + 0x30]          ; 00425898
    FMUL float ptr [ESP + 0x54]         ; 0042589c
    FADDP                               ; 004258a0
    FLDZ                                ; 004258a2
    FXCH                                ; 004258a4
    FSTP double ptr [ESP]               ; 004258a6
    FCOMP double ptr [ESP]              ; 004258a9
    FNSTSW AX                           ; 004258ac
    SAHF                                ; 004258ae
    JBE 0x00425451                      ; 004258af
        ;   XREF to: 00425451 (CONDITIONAL_JUMP)  ; LAB_00425451
    FLD double ptr [ESP]                ; 004258b5
    FMUL double ptr [0x00579f4a]        ; 004258b8 | DOUBLE_00579f4a
    FLD float ptr [ESP + 0x28]          ; 004258be
    FMUL ST1                            ; 004258c2
    FLD float ptr [ESP + 0x2c]          ; 004258c4
    FMUL ST2                            ; 004258c8
    FLD float ptr [ESP + 0x30]          ; 004258ca
    FMULP ST3                           ; 004258ce
    FLD float ptr [ESP + 0x4c]          ; 004258d0
    FLD float ptr [ESP + 0x50]          ; 004258d4
    FLD float ptr [ESP + 0x54]          ; 004258d8
    FXCH ST4                            ; 004258dc
    FSTP float ptr [ESP + 0x7c]         ; 004258de
    FXCH ST2                            ; 004258e2
    FSTP float ptr [ESP + 0x80]         ; 004258e4
    FXCH ST3                            ; 004258eb
    FSTP float ptr [ESP + 0x84]         ; 004258ed
    FXCH ST2                            ; 004258f4
    FSUB float ptr [ESP + 0x7c]         ; 004258f6
    FXCH ST2                            ; 004258fa
    FSUB float ptr [ESP + 0x80]         ; 004258fc
    FXCH                                ; 00425903
    FSUB float ptr [ESP + 0x84]         ; 00425905
    FXCH ST2                            ; 0042590c
    FSTP float ptr [ESP + 0x4c]         ; 0042590e
    FSTP float ptr [ESP + 0x50]         ; 00425912
    FSTP float ptr [ESP + 0x54]         ; 00425916
    JMP 0x00425411                      ; 0042591a
        ;   XREF to: 00425411 (UNCONDITIONAL_JUMP)  ; LAB_00425411
    CMP dword ptr [EBX + 0x2408],0x0    ; 0042591f
        ;   Label: LAB_0042591f
    JZ 0x004254a9                       ; 00425926
        ;   XREF to: 004254a9 (CONDITIONAL_JUMP)  ; LAB_004254a9
    FLD float ptr [EBX + 0x240c]        ; 0042592c
    FADD double ptr [0x00579f42]        ; 00425932 | DOUBLE_00579f42
    FLD float ptr [EBX + 0x24]          ; 00425938
    FCOMPP                              ; 0042593b
    FNSTSW AX                           ; 0042593d
    SAHF                                ; 0042593f
    JNC 0x004254a9                      ; 00425940
        ;   XREF to: 004254a9 (CONDITIONAL_JUMP)  ; LAB_004254a9
    MOV EAX,dword ptr [EBX + 0x240c]    ; 00425946
    MOV dword ptr [EBX + 0x24],EAX      ; 0042594c
    MOV EAX,dword ptr [EBX + 0x24]      ; 0042594f
    MOV dword ptr [ESP + 0x38],EAX      ; 00425952
    JMP 0x004254a9                      ; 00425956
        ;   XREF to: 004254a9 (UNCONDITIONAL_JUMP)  ; LAB_004254a9

