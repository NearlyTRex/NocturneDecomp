; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0(CCharacter *this_ptr,float delta_time)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined4       Stack[-0x4c]:4  local_4c
;
; XREF[47]:
;   core_armour.cpp_CArmour_process_FUN_0040eaa0 at 0040eab3
;   core_baron.cpp_CBaron_process_FUN_0040f4d0 at 0040f57a
;   core_batcreat.cpp_CBatCreature_process_FUN_004115b0 at 004115cc
;   core_batman.cpp_CBatman_process_FUN_00412ba0 at 00412bbc
;   core_beast.cpp_CBeast_process_FUN_00414770 at 00414782
;   core_biggs.cpp_CBiggs_process_FUN_00414b30 at 00414b43
;   core_bird.cpp_CBird_process_FUN_00415340 at 00415356
;   core_boneguy.cpp_CBoneGuy_process_FUN_0041bb40 at 0041bbba
;   core_bride.cpp_CBride_process_FUN_00423b70 at 00423b8c
;   core_bugs.cpp_CBugs_process_FUN_004253c0 at 004253cb
;   ... and 37 more
;
; Referenced Globals:
;   undefined4 DAT_005d592f
;   undefined4 DAT_005fd614
;   CGame* g_CGamePtr = 01ccf390
;   CScript* g_CScriptPtr = 01e81c80
;   CGame g_CGameInstance
;   CScript g_CScriptInstance
;
; Called Functions:
;   core_box.cpp_FUN_004207b0
;   core_charactr.cpp_CCharacter_processFire_FUN_0042f8e0
;   core_charactr.cpp_FUN_00432690
;   core_charactr.cpp_FUN_00432e00
;   core_game.cpp_CGame_setStatusDisplay_FUN_004d6340
;   core_hero.cpp_isAnyHeroWithinCylinder_FUN_004ea770
;   core_script.cpp_CScript_setSpeaker_FUN_0054aca0
;   sound_sndmain.cpp_killSfx_FUN_00573a80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042e1a0
        ;   Label: core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0
    PUSH ESI                            ; 0042e1a1
    PUSH EDI                            ; 0042e1a2
    PUSH EBP                            ; 0042e1a3
    SUB ESP,0x34                        ; 0042e1a4
    MOV EBP,dword ptr [ESP + 0x48]      ; 0042e1a7
    FLD float ptr [EBP + 0x2fe4]        ; 0042e1ab
    FSUB float ptr [ESP + 0x4c]         ; 0042e1b1
    FST float ptr [EBP + 0x2fe4]        ; 0042e1b5
    FLDZ                                ; 0042e1bb
    FCOMPP                              ; 0042e1bd
    FNSTSW AX                           ; 0042e1bf
    SAHF                                ; 0042e1c1
    JBE 0x0042e1ce                      ; 0042e1c2
        ;   XREF to: 0042e1ce (CONDITIONAL_JUMP)  ; LAB_0042e1ce
    MOV dword ptr [EBP + 0x2fe4],0x0    ; 0042e1c4
    PUSH dword ptr [ESP + 0x4c]         ; 0042e1ce
        ;   Label: LAB_0042e1ce
    PUSH EBP                            ; 0042e1d2
    CALL core_charactr.cpp_CCharacter_processFire_FUN_0042f8e0 ; 0042e1d3
        ;   XREF to: 0042f8e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_processFire_FUN_0042f8e0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0042e1d8
    PUSH dword ptr [ESP + 0x4c]         ; 0042e1db
    PUSH EBP                            ; 0042e1df
    CALL core_charactr.cpp_FUN_00432e00 ; 0042e1e0
        ;   XREF to: 00432e00 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00432e00()
    ADD ESP,0x8                         ; 0042e1e5
    FLD float ptr [EBP + 0xb9f0]        ; 0042e1e8
    FSUB float ptr [ESP + 0x4c]         ; 0042e1ee
    FST float ptr [EBP + 0xb9f0]        ; 0042e1f2
    FLDZ                                ; 0042e1f8
    FCOMPP                              ; 0042e1fa
    FNSTSW AX                           ; 0042e1fc
    SAHF                                ; 0042e1fe
    JBE 0x0042e20b                      ; 0042e1ff
        ;   XREF to: 0042e20b (CONDITIONAL_JUMP)  ; LAB_0042e20b
    MOV dword ptr [EBP + 0xb9f0],0x0    ; 0042e201
    FLD float ptr [EBP + 0x27b4]        ; 0042e20b
        ;   Label: LAB_0042e20b
    FLDZ                                ; 0042e211
    FCOMPP                              ; 0042e213
    FNSTSW AX                           ; 0042e215
    SAHF                                ; 0042e217
    JNC 0x0042e24d                      ; 0042e218
        ;   XREF to: 0042e24d (CONDITIONAL_JUMP)  ; LAB_0042e24d
    FLD float ptr [EBP + 0x27b4]        ; 0042e21a
    FSUB float ptr [ESP + 0x4c]         ; 0042e220
    FST float ptr [EBP + 0x27b4]        ; 0042e224
    FLDZ                                ; 0042e22a
    FCOMPP                              ; 0042e22c
    FNSTSW AX                           ; 0042e22e
    SAHF                                ; 0042e230
    JBE 0x0042e24d                      ; 0042e231
        ;   XREF to: 0042e24d (CONDITIONAL_JUMP)  ; LAB_0042e24d
    PUSH EBP                            ; 0042e233
    MOV EDX,dword ptr [0x00622ad0]      ; 0042e234 | g_CScriptPtr
    PUSH EDX                            ; 0042e23a | g_CScriptInstance
    MOV dword ptr [EBP + 0x27b4],0x0    ; 0042e23b
    CALL core_script.cpp_CScript_setSpeaker_FUN_0054aca0 ; 0042e245
        ;   XREF to: 0054aca0 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_setSpeaker_FUN_0054aca0(CScript * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0042e24a
    CMP dword ptr [EBP + 0x2540],0x2    ; 0042e24d
        ;   Label: LAB_0042e24d
    JNZ 0x0042e283                      ; 0042e254
        ;   XREF to: 0042e283 (CONDITIONAL_JUMP)  ; LAB_0042e283
    FLD float ptr [EBP + 0x2538]        ; 0042e256
    FDIV float ptr [EBP + 0x253c]       ; 0042e25c
    PUSH 0x40000000                     ; 0042e262
    SUB ESP,0x4                         ; 0042e267
    LEA EAX,[EBP + 0x2544]              ; 0042e26a
    FSTP float ptr [ESP]                ; 0042e270
    PUSH EAX                            ; 0042e273
    MOV EBX,dword ptr [0x0061d95c]      ; 0042e274 | g_CGamePtr
    PUSH EBX                            ; 0042e27a | g_CGameInstance
    CALL core_game.cpp_CGame_setStatusDisplay_FUN_004d6340 ; 0042e27b
        ;   XREF to: 004d6340 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_setStatusDisplay_FUN_004d6340(CGame * this_ptr, char * name, float value, float duration)
    ADD ESP,0x10                        ; 0042e280
    CMP dword ptr [EBP + 0x24fc],0x0    ; 0042e283
        ;   Label: LAB_0042e283
    JNZ 0x0042e361                      ; 0042e28a
        ;   XREF to: 0042e361 (CONDITIONAL_JUMP)  ; LAB_0042e361
    FLD float ptr [EBP + 0x2504]        ; 0042e290
    FCOMP float ptr [0x005fd614]        ; 0042e296 | DAT_005fd614
    FNSTSW AX                           ; 0042e29c
    SAHF                                ; 0042e29e
    JZ 0x0042e365                       ; 0042e29f
        ;   XREF to: 0042e365 (CONDITIONAL_JUMP)  ; LAB_0042e365
    FLD float ptr [EBP + 0xe4]          ; 0042e2a5
        ;   Label: LAB_0042e2a5
    MOV dword ptr [EBP + 0xe4],0x0      ; 0042e2ab
    FADD float ptr [EBP + 0x24]         ; 0042e2b5
    FLD float ptr [EBP + 0x2504]        ; 0042e2b8
    FXCH                                ; 0042e2be
    FSTP float ptr [EBP + 0x24]         ; 0042e2c0
    FCOMP float ptr [0x005fd614]        ; 0042e2c3 | DAT_005fd614
    FNSTSW AX                           ; 0042e2c9
    SAHF                                ; 0042e2cb
    JZ 0x0042e2d7                       ; 0042e2cc
        ;   XREF to: 0042e2d7 (CONDITIONAL_JUMP)  ; LAB_0042e2d7
    CMP dword ptr [EBP + 0xdc],0x0      ; 0042e2ce
    JZ 0x0042e2fa                       ; 0042e2d5
        ;   XREF to: 0042e2fa (CONDITIONAL_JUMP)  ; LAB_0042e2fa
    PUSH 0x0                            ; 0042e2d7
        ;   Label: LAB_0042e2d7
    MOV EAX,dword ptr [EBP + 0x154]     ; 0042e2d9
    PUSH dword ptr [EBP + 0x2fec]       ; 0042e2df
    PUSH EBP                            ; 0042e2e5
    CALL dword ptr [EAX + 0x40]         ; 0042e2e6
    MOV dword ptr [ESP + 0x3c],EAX      ; 0042e2e9
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0042e2ed
    MOV dword ptr [EBP + 0x2504],EAX    ; 0042e2f1
    ADD ESP,0xc                         ; 0042e2f7
    FLD float ptr [EBP + 0x2504]        ; 0042e2fa
        ;   Label: LAB_0042e2fa
    FADD double ptr [0x005d592f]        ; 0042e300 | DAT_005d592f
    FLD float ptr [EBP + 0x24]          ; 0042e306
    FCOMPP                              ; 0042e309
    FNSTSW AX                           ; 0042e30b
    SAHF                                ; 0042e30d
    JNC 0x0042e39a                      ; 0042e30e
        ;   XREF to: 0042e39a (CONDITIONAL_JUMP)  ; LAB_0042e39a
    MOV EAX,0x1                         ; 0042e314
    LEA EBX,[EBP + 0x250c]              ; 0042e319
        ;   Label: LAB_0042e319
    MOV dword ptr [EBP + 0x2500],EAX    ; 0042e31f
    MOV dword ptr [EBX + 0x8],0x0       ; 0042e325
    MOV EAX,dword ptr [EBX + 0x8]       ; 0042e32c
    MOV dword ptr [EBX + 0x4],EAX       ; 0042e32f
    MOV EAX,dword ptr [EBX + 0x4]       ; 0042e332
    MOV dword ptr [EBX],EAX             ; 0042e335
    MOV ECX,dword ptr [EBP + 0xdc]      ; 0042e337
    MOV dword ptr [EBP + 0x2508],0x0    ; 0042e33d
    TEST ECX,ECX                        ; 0042e347
    JNZ 0x0042e354                      ; 0042e349
        ;   XREF to: 0042e354 (CONDITIONAL_JUMP)  ; LAB_0042e354
    CMP dword ptr [EBP + 0x2704],0x0    ; 0042e34b
    JZ 0x0042e3a1                       ; 0042e352
        ;   XREF to: 0042e3a1 (CONDITIONAL_JUMP)  ; LAB_0042e3a1
    MOV EAX,0x1                         ; 0042e354
        ;   Label: LAB_0042e354
    ADD ESP,0x34                        ; 0042e359
        ;   Label: LAB_0042e359
    POP EBP                             ; 0042e35c
    POP EDI                             ; 0042e35d
    POP ESI                             ; 0042e35e
    POP EBX                             ; 0042e35f
    RET                                 ; 0042e360
    XOR EAX,EAX                         ; 0042e361
        ;   Label: LAB_0042e361
    JMP 0x0042e359                      ; 0042e363
        ;   XREF to: 0042e359 (UNCONDITIONAL_JUMP)  ; LAB_0042e359
    MOV ESI,EBP                         ; 0042e365
        ;   Label: LAB_0042e365
    XOR EBX,EBX                         ; 0042e367
    CMP dword ptr [ESI + 0x25b0],0x0    ; 0042e369
        ;   Label: LAB_0042e369
    JZ 0x0042e37c                       ; 0042e370
        ;   XREF to: 0042e37c (CONDITIONAL_JUMP)  ; LAB_0042e37c
    MOV EAX,dword ptr [ESI + 0x25ec]    ; 0042e372
    TEST EAX,EAX                        ; 0042e378
    JZ 0x0042e38b                       ; 0042e37a
        ;   XREF to: 0042e38b (CONDITIONAL_JUMP)  ; LAB_0042e38b
    INC EBX                             ; 0042e37c
        ;   Label: LAB_0042e37c
    ADD ESI,0x78                        ; 0042e37d
    CMP EBX,0x2                         ; 0042e380
    JGE 0x0042e2a5                      ; 0042e383
        ;   XREF to: 0042e2a5 (CONDITIONAL_JUMP)  ; LAB_0042e2a5
    JMP 0x0042e369                      ; 0042e389
        ;   XREF to: 0042e369 (UNCONDITIONAL_JUMP)  ; LAB_0042e369
    PUSH EAX                            ; 0042e38b
        ;   Label: LAB_0042e38b
    PUSH 0x0                            ; 0042e38c
    PUSH EBX                            ; 0042e38e
    PUSH EBP                            ; 0042e38f
    CALL core_charactr.cpp_FUN_00432690 ; 0042e390
        ;   XREF to: 00432690 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00432690()
    ADD ESP,0x10                        ; 0042e395
    JMP 0x0042e37c                      ; 0042e398
        ;   XREF to: 0042e37c (UNCONDITIONAL_JUMP)  ; LAB_0042e37c
    XOR EAX,EAX                         ; 0042e39a
        ;   Label: LAB_0042e39a
    JMP 0x0042e319                      ; 0042e39c
        ;   XREF to: 0042e319 (UNCONDITIONAL_JUMP)  ; LAB_0042e319
    PUSH dword ptr [EBP + 0x2ff4]       ; 0042e3a1
        ;   Label: LAB_0042e3a1
    LEA EAX,[EBP + 0x20]                ; 0042e3a7
    PUSH dword ptr [EBP + 0x2ff8]       ; 0042e3aa
    PUSH EAX                            ; 0042e3b0
    CALL core_hero.cpp_isAnyHeroWithinCylinder_FUN_004ea770 ; 0042e3b1
        ;   XREF to: 004ea770 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_isAnyHeroWithinCylinder_FUN_004ea770(CVector3f * point, float horizontal_radius, float vertical_tolerance)
    ADD ESP,0xc                         ; 0042e3b6
    TEST EAX,EAX                        ; 0042e3b9
    JNZ 0x0042e354                      ; 0042e3bb
        ;   XREF to: 0042e354 (CONDITIONAL_JUMP)  ; LAB_0042e354
    PUSH EAX                            ; 0042e3bd
    PUSH EBP                            ; 0042e3be
    MOV EAX,dword ptr [EBP + 0x154]     ; 0042e3bf
    LEA ESI,[ESP + 0x20]                ; 0042e3c5
    LEA EDI,[ESP + 0x8]                 ; 0042e3c9
    CALL dword ptr [EAX + 0x1c]         ; 0042e3cd
    MOV ECX,0x6                         ; 0042e3d0
    ADD ESP,0x4                         ; 0042e3d5
    LEA EAX,[ESP + 0x4]                 ; 0042e3d8
    LEA ESI,[ESP + 0x1c]                ; 0042e3dc
    PUSH EAX                            ; 0042e3e0
    MOVSD.REP ES:EDI,ESI                ; 0042e3e1
    CALL core_box.cpp_FUN_004207b0      ; 0042e3e3
        ;   XREF to: 004207b0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_004207b0()
    ADD ESP,0x8                         ; 0042e3e8
    TEST EAX,EAX                        ; 0042e3eb
    JZ 0x0042e354                       ; 0042e3ed
        ;   XREF to: 0042e354 (CONDITIONAL_JUMP)  ; LAB_0042e354
    MOV ESI,dword ptr [EBP + 0xb9e4]    ; 0042e3f3
    PUSH ESI                            ; 0042e3f9
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 0042e3fa
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    ADD ESP,0x4                         ; 0042e3ff
    XOR EAX,EAX                         ; 0042e402
    ADD ESP,0x34                        ; 0042e404
    POP EBP                             ; 0042e407
    POP EDI                             ; 0042e408
    POP ESI                             ; 0042e409
    POP EBX                             ; 0042e40a
    RET                                 ; 0042e40b

