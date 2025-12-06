; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_smiley.cpp_FUN_005a32a0()
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_smiley.cpp_FUN_005a3580 at 005a35c2
;
; Referenced Globals:
;   void* switchdataD_005a3284 = 005a3330
;   TerminatedCString s_limb_wav_0064f351
;   double DOUBLE_0064f362 = 7
;   double DOUBLE_0064f36a = 0.5
;   double DOUBLE_0064f372 = 2.5
;   CGame* g_CGamePtr = 02d81a9c
;   CGame g_CGameInstance
;   undefined4 g_CGameInstance.field57_0x1e0
;
; Called Functions:
;   core_actor.cpp_randomChance_FUN_0040cd10
;   core_bodypart.cpp_CreateBodyPart_FUN_00418e10
;   core_bodypart.cpp_FUN_0041a050
;   core_charactr.cpp_CCharacter_FUN_0042bcc0
;   core_charactr.cpp_CCharacter_FUN_0042bd30
;   core_charactr.cpp_CCharacter_FUN_0042f300
;   crt_stdlib.c_rand_FUN_005feb5c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a32a0
        ;   Label: core_smiley.cpp_FUN_005a32a0
    PUSH ESI                            ; 005a32a1
    PUSH EDI                            ; 005a32a2
    PUSH EBP                            ; 005a32a3
    SUB ESP,0xc                         ; 005a32a4
    MOV EBX,dword ptr [ESP + 0x20]      ; 005a32a7
    MOV ESI,dword ptr [ESP + 0x24]      ; 005a32ab
    MOV EDX,dword ptr [ESI + 0x30]      ; 005a32af
    CMP EDX,0xb                         ; 005a32b2
    JLE 0x005a34b5                      ; 005a32b5 | LAB_005a34b5
        ;   XREF to: 005a34b5 (CONDITIONAL_JUMP)
    CMP EDX,0x6b                        ; 005a32bb
    JNZ 0x005a34bd                      ; 005a32be | LAB_005a34bd
        ;   XREF to: 005a34bd (CONDITIONAL_JUMP)
    FLD float ptr [EBX + 0xbef8]        ; 005a32c4
    FLDZ                                ; 005a32ca
    FCOMPP                              ; 005a32cc
    FNSTSW AX                           ; 005a32ce
    SAHF                                ; 005a32d0
    JC 0x005a34bd                       ; 005a32d1 | LAB_005a34bd
        ;   XREF to: 005a34bd (CONDITIONAL_JUMP)
    FLD1                                ; 005a32d7
    MOV EDI,dword ptr [EBX + 0xbef4]    ; 005a32d9
    FADD float ptr [EBX + 0xbef8]       ; 005a32df
    INC EDI                             ; 005a32e5
    FSTP float ptr [EBX + 0xbef8]       ; 005a32e6
    MOV dword ptr [EBX + 0xbef4],EDI    ; 005a32ec
    CMP EDI,0x3                         ; 005a32f2
    JL 0x005a34bd                       ; 005a32f5 | LAB_005a34bd
        ;   XREF to: 005a34bd (CONDITIONAL_JUMP)
    MOV dword ptr [ESI + 0x2c],0x3f800000 ; 005a32fb
    FLD float ptr [ESI + 0x2c]          ; 005a3302
    FLDZ                                ; 005a3305
    FCOMPP                              ; 005a3307
    FNSTSW AX                           ; 005a3309
    SAHF                                ; 005a330b
    JNC 0x005a3338                      ; 005a330c | default
        ;   XREF to: 005a3338 (CONDITIONAL_JUMP)
    CMP dword ptr [ESI],-0x1            ; 005a330e
    JNZ 0x005a3338                      ; 005a3311 | default
        ;   XREF to: 005a3338 (CONDITIONAL_JUMP)
    CALL crt_stdlib.c_rand_FUN_005feb5c ; 005a3313 | int crt_stdlib.c_rand_FUN_005feb5c()
        ;   XREF to: 005feb5c (UNCONDITIONAL_CALL)
    MOV EDX,EAX                         ; 005a3318
    MOV EDI,0x6                         ; 005a331a
    SAR EDX,0x1f                        ; 005a331f
    IDIV EDI                            ; 005a3322
    CMP EDX,0x5                         ; 005a3324
    JA 0x005a3338                       ; 005a3327 | default
        ;   XREF to: 005a3338 (CONDITIONAL_JUMP)
    JMP dword ptr [EDX*0x4 + 0x5a3284]  ; 005a3329 | void * switchdataD_005a3284
        ;   Label: switchD
    MOV EAX,dword ptr [EBX + 0xbec4]    ; 005a3330
        ;   Label: caseD_0
    MOV dword ptr [ESI],EAX             ; 005a3336
        ;   Label: LAB_005a3336
    MOV EDX,dword ptr [EBX + 0xbec4]    ; 005a3338
        ;   Label: default
    MOV EAX,dword ptr [ESI]             ; 005a333e
    CMP EAX,EDX                         ; 005a3340
    JNZ 0x005a3503                      ; 005a3342 | LAB_005a3503
        ;   XREF to: 005a3503 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESI + 0x2c]      ; 005a3348
        ;   Label: LAB_005a3348
    MOV dword ptr [ESP + 0x8],EAX       ; 005a334b
    MOV EAX,[0x0067b654]                ; 005a334f | CGame g_CGameInstance | CGame * g_CGamePtr
    CMP dword ptr [EAX + 0x1e0],0x0     ; 005a3354 | g_CGameInstance.field57_0x1e0
    JZ 0x005a3365                       ; 005a335b | LAB_005a3365
        ;   XREF to: 005a3365 (CONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0x8],0x3f800000 ; 005a335d
    PUSH dword ptr [ESP + 0x8]          ; 005a3365
        ;   Label: LAB_005a3365
    CALL core_actor.cpp_randomChance_FUN_0040cd10 ; 005a3369 | int core_actor.cpp_randomChance_FUN_0040cd10(float probability_threshold)
        ;   XREF to: 0040cd10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005a336e
    TEST EAX,EAX                        ; 005a3371
    JZ 0x005a348b                       ; 005a3373 | LAB_005a348b
        ;   XREF to: 005a348b (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 005a3379
    PUSH 0x0                            ; 005a337b
    PUSH 0x0                            ; 005a337d
    PUSH EBX                            ; 005a337f
    LEA EAX,[ESI + 0xc]                 ; 005a3380
    PUSH EAX                            ; 005a3383
    LEA EAX,[EBX + 0x30]                ; 005a3384
    PUSH EAX                            ; 005a3387
    LEA EAX,[EBX + 0x20]                ; 005a3388
    PUSH EAX                            ; 005a338b
    CALL core_bodypart.cpp_CreateBodyPart_FUN_00418e10 ; 005a338c | undefined core_bodypart.cpp_CreateBodyPart_FUN_00418e10()
        ;   XREF to: 00418e10 (UNCONDITIONAL_CALL)
    ADD ESP,0x1c                        ; 005a3391
    MOV EDI,EAX                         ; 005a3394
    PUSH 0x0                            ; 005a3396
    MOV EBP,EAX                         ; 005a3398
    MOV EAX,dword ptr [ESI]             ; 005a339a
    PUSH EAX                            ; 005a339c
    PUSH EDI                            ; 005a339d
    PUSH EBX                            ; 005a339e
    CALL core_charactr.cpp_CCharacter_FUN_0042bd30 ; 005a339f | void core_charactr.cpp_CCharacter_FUN_0042bd30(CCharacter * this_ptr)
        ;   XREF to: 0042bd30 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [ESI]             ; 005a33a4
    MOV EDX,dword ptr [EBX + 0xbec4]    ; 005a33a6
    ADD ESP,0x10                        ; 005a33ac
    CMP EAX,EDX                         ; 005a33af
    JNZ 0x005a33c6                      ; 005a33b1 | LAB_005a33c6
        ;   XREF to: 005a33c6 (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 005a33b3
    MOV ECX,dword ptr [EBX + 0xbec8]    ; 005a33b5
    PUSH ECX                            ; 005a33bb
    PUSH EDI                            ; 005a33bc
    PUSH EBX                            ; 005a33bd
    CALL core_charactr.cpp_CCharacter_FUN_0042bd30 ; 005a33be | void core_charactr.cpp_CCharacter_FUN_0042bd30(CCharacter * this_ptr)
        ;   XREF to: 0042bd30 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 005a33c3
    MOV EDI,dword ptr [EBX + 0xbecc]    ; 005a33c6
        ;   Label: LAB_005a33c6
    CMP EDI,dword ptr [ESI]             ; 005a33cc
    JNZ 0x005a33e3                      ; 005a33ce | LAB_005a33e3
        ;   XREF to: 005a33e3 (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 005a33d0
    MOV EAX,dword ptr [EBX + 0xbed0]    ; 005a33d2
    PUSH EAX                            ; 005a33d8
    PUSH EBP                            ; 005a33d9
    PUSH EBX                            ; 005a33da
    CALL core_charactr.cpp_CCharacter_FUN_0042bd30 ; 005a33db | void core_charactr.cpp_CCharacter_FUN_0042bd30(CCharacter * this_ptr)
        ;   XREF to: 0042bd30 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 005a33e0
    MOV EDX,dword ptr [EBX + 0xbee8]    ; 005a33e3
        ;   Label: LAB_005a33e3
    CMP EDX,dword ptr [ESI]             ; 005a33e9
    JNZ 0x005a344f                      ; 005a33eb | LAB_005a344f
        ;   XREF to: 005a344f (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 005a33ed
    LEA EDI,[ESI + 0xc]                 ; 005a33ef
    PUSH EDI                            ; 005a33f2
    MOV ECX,dword ptr [EBX + 0xbecc]    ; 005a33f3
    PUSH ECX                            ; 005a33f9
    PUSH EBX                            ; 005a33fa
    CALL core_charactr.cpp_CCharacter_FUN_0042bcc0 ; 005a33fb | void core_charactr.cpp_CCharacter_FUN_0042bcc0(CCharacter * this_ptr)
        ;   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 005a3400
    PUSH 0x0                            ; 005a3403
    PUSH EDI                            ; 005a3405
    MOV EAX,dword ptr [EBX + 0xbed0]    ; 005a3406
    PUSH EAX                            ; 005a340c
    PUSH EBX                            ; 005a340d
    CALL core_charactr.cpp_CCharacter_FUN_0042bcc0 ; 005a340e | void core_charactr.cpp_CCharacter_FUN_0042bcc0(CCharacter * this_ptr)
        ;   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 005a3413
    PUSH 0x0                            ; 005a3416
    PUSH EDI                            ; 005a3418
    MOV EDX,dword ptr [EBX + 0xbec4]    ; 005a3419
    PUSH EDX                            ; 005a341f
    PUSH EBX                            ; 005a3420
    CALL core_charactr.cpp_CCharacter_FUN_0042bcc0 ; 005a3421 | void core_charactr.cpp_CCharacter_FUN_0042bcc0(CCharacter * this_ptr)
        ;   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 005a3426
    PUSH 0x0                            ; 005a3429
    PUSH EDI                            ; 005a342b
    MOV ECX,dword ptr [EBX + 0xbec8]    ; 005a342c
    PUSH ECX                            ; 005a3432
    PUSH EBX                            ; 005a3433
    CALL core_charactr.cpp_CCharacter_FUN_0042bcc0 ; 005a3434 | void core_charactr.cpp_CCharacter_FUN_0042bcc0(CCharacter * this_ptr)
        ;   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 005a3439
    PUSH 0x0                            ; 005a343c
    PUSH EDI                            ; 005a343e
    MOV EDI,dword ptr [EBX + 0xbeec]    ; 005a343f
    PUSH EDI                            ; 005a3445
    PUSH EBX                            ; 005a3446
    CALL core_charactr.cpp_CCharacter_FUN_0042bcc0 ; 005a3447 | void core_charactr.cpp_CCharacter_FUN_0042bcc0(CCharacter * this_ptr)
        ;   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 005a344c
    PUSH 0x64f351                       ; 005a344f | = "limb?.wav" | s_limb_wav_0064f351 = limb?.wav
        ;   Label: LAB_005a344f
    PUSH EBX                            ; 005a3454
    CALL core_charactr.cpp_CCharacter_FUN_0042f300 ; 005a3455 | void core_charactr.cpp_CCharacter_FUN_0042f300(CCharacter * this_ptr)
        ;   XREF to: 0042f300 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005a345a
    PUSH EBP                            ; 005a345d
    CALL core_bodypart.cpp_FUN_0041a050 ; 005a345e | undefined core_bodypart.cpp_FUN_0041a050()
        ;   XREF to: 0041a050 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EBX + 0xbeec]    ; 005a3463
    MOV EBP,dword ptr [EBX + EAX*0x4 + 0x2298] ; 005a3469
    ADD ESP,0x4                         ; 005a3470
    TEST EBP,EBP                        ; 005a3473
    JZ 0x005a3544                       ; 005a3475 | LAB_005a3544
        ;   XREF to: 005a3544 (CONDITIONAL_JUMP)
    FLD float ptr [ESI + 0x8]           ; 005a347b
        ;   Label: LAB_005a347b
    FLD ST0                             ; 005a347e
    FMUL double ptr [0x0064f362]        ; 005a3480 | double DOUBLE_0064f362
    FSTP ST1                            ; 005a3486
    FSTP float ptr [ESI + 0x8]          ; 005a3488
    MOV EDX,dword ptr [EBX + 0xbeec]    ; 005a348b
        ;   Label: LAB_005a348b
    MOV EAX,dword ptr [ESI]             ; 005a3491
    CMP EAX,EDX                         ; 005a3493
    JZ 0x005a3550                       ; 005a3495 | LAB_005a3550
        ;   XREF to: 005a3550 (CONDITIONAL_JUMP)
    CMP EAX,dword ptr [EBX + 0xbee4]    ; 005a349b
    JZ 0x005a34af                       ; 005a34a1 | LAB_005a34af
        ;   XREF to: 005a34af (CONDITIONAL_JUMP)
    CMP EAX,dword ptr [EBX + 0xbee8]    ; 005a34a3
    JNZ 0x005a3568                      ; 005a34a9 | LAB_005a3568
        ;   XREF to: 005a3568 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESI + 0x4]       ; 005a34af
        ;   Label: LAB_005a34af
    MOV dword ptr [ESI + 0x4],EAX       ; 005a34b2
    ADD ESP,0xc                         ; 005a34b5
        ;   Label: LAB_005a34b5
    POP EBP                             ; 005a34b8
    POP EDI                             ; 005a34b9
    POP ESI                             ; 005a34ba
    POP EBX                             ; 005a34bb
    RET                                 ; 005a34bc
    MOV dword ptr [ESI + 0x4],0x0       ; 005a34bd
        ;   Label: LAB_005a34bd
    ADD ESP,0xc                         ; 005a34c4
    POP EBP                             ; 005a34c7
    POP EDI                             ; 005a34c8
    POP ESI                             ; 005a34c9
    POP EBX                             ; 005a34ca
    RET                                 ; 005a34cb
    MOV EAX,dword ptr [EBX + 0xbec8]    ; 005a34cc
        ;   Label: caseD_1
    JMP 0x005a3336                      ; 005a34d2 | LAB_005a3336
        ;   XREF to: 005a3336 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0xbecc]    ; 005a34d7
        ;   Label: caseD_2
    JMP 0x005a3336                      ; 005a34dd | LAB_005a3336
        ;   XREF to: 005a3336 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0xbed0]    ; 005a34e2
        ;   Label: caseD_3
    JMP 0x005a3336                      ; 005a34e8 | LAB_005a3336
        ;   XREF to: 005a3336 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0xbeec]    ; 005a34ed
        ;   Label: caseD_4
    JMP 0x005a3336                      ; 005a34f3 | LAB_005a3336
        ;   XREF to: 005a3336 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0xbee8]    ; 005a34f8
        ;   Label: caseD_5
    JMP 0x005a3336                      ; 005a34fe | LAB_005a3336
        ;   XREF to: 005a3336 (UNCONDITIONAL_JUMP)
    CMP EAX,dword ptr [EBX + 0xbec8]    ; 005a3503
        ;   Label: LAB_005a3503
    JZ 0x005a3348                       ; 005a3509 | LAB_005a3348
        ;   XREF to: 005a3348 (CONDITIONAL_JUMP)
    CMP EAX,dword ptr [EBX + 0xbecc]    ; 005a350f
    JZ 0x005a3348                       ; 005a3515 | LAB_005a3348
        ;   XREF to: 005a3348 (CONDITIONAL_JUMP)
    CMP EAX,dword ptr [EBX + 0xbed0]    ; 005a351b
    JZ 0x005a3348                       ; 005a3521 | LAB_005a3348
        ;   XREF to: 005a3348 (CONDITIONAL_JUMP)
    CMP EAX,dword ptr [EBX + 0xbee8]    ; 005a3527
    JZ 0x005a3348                       ; 005a352d | LAB_005a3348
        ;   XREF to: 005a3348 (CONDITIONAL_JUMP)
    CMP EAX,dword ptr [EBX + 0xbeec]    ; 005a3533
    JZ 0x005a3348                       ; 005a3539 | LAB_005a3348
        ;   XREF to: 005a3348 (CONDITIONAL_JUMP)
    JMP 0x005a348b                      ; 005a353f | LAB_005a348b
        ;   XREF to: 005a348b (UNCONDITIONAL_JUMP)
    MOV dword ptr [ESI + 0x4],0x461c3c00 ; 005a3544
        ;   Label: LAB_005a3544
    JMP 0x005a347b                      ; 005a354b | LAB_005a347b
        ;   XREF to: 005a347b (UNCONDITIONAL_JUMP)
    FLD float ptr [ESI + 0x4]           ; 005a3550
        ;   Label: LAB_005a3550
    FLD ST0                             ; 005a3553
    FMUL double ptr [0x0064f372]        ; 005a3555 | double DOUBLE_0064f372
    FSTP ST1                            ; 005a355b
    FSTP float ptr [ESI + 0x4]          ; 005a355d
    ADD ESP,0xc                         ; 005a3560
    POP EBP                             ; 005a3563
    POP EDI                             ; 005a3564
    POP ESI                             ; 005a3565
    POP EBX                             ; 005a3566
    RET                                 ; 005a3567
    FLD float ptr [ESI + 0x4]           ; 005a3568
        ;   Label: LAB_005a3568
    FLD ST0                             ; 005a356b
    FMUL double ptr [0x0064f36a]        ; 005a356d | double DOUBLE_0064f36a
    FSTP ST1                            ; 005a3573
    FSTP float ptr [ESI + 0x4]          ; 005a3575
    ADD ESP,0xc                         ; 005a3578
    POP EBP                             ; 005a357b
    POP EDI                             ; 005a357c
    POP ESI                             ; 005a357d
    POP EBX                             ; 005a357e
    RET                                 ; 005a357f

