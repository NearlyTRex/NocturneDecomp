; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0(CCharacter *this_ptr,float delta_time)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[42]:
;   core_armour.cpp_CArmour_process_FUN_0040ef00 at 0040ef13
;   core_baron.cpp_CBaron_process_FUN_0040f950 at 0040f9fa
;   core_basicene.cpp_CBasicEnemy_process_FUN_0059f420 at 0059f42b
;   core_batcreat.cpp_CBatCreature_process_FUN_00411a10 at 00411a2c
;   core_batman.cpp_CBatman_process_FUN_00412f40 at 00412f5c
;   core_beast.cpp_CBeast_process_FUN_00414a80 at 00414a92
;   core_biggs.cpp_CBiggs_process_FUN_00414e50 at 00414e63
;   core_boneguy.cpp_CBoneGuy_process_FUN_004186c0 at 0041873a
;   core_bride.cpp_CBride_process_FUN_0041dbe0 at 0041dbfc
;   core_bugs.cpp_CBugs_process_FUN_0041f390 at 0041f39b
;   ... and 32 more
;
; Referenced Globals:
;   undefined4 DAT_005ccc9e
;   undefined4 DAT_005f4084
;   CGame* g_CGamePtr = 01cb6900
;   CScript* g_CScriptPtr = 01e65cd0
;   CGame g_CGameInstance
;   CScript g_CScriptInstance
;
; Called Functions:
;   core_charactr.cpp_CCharacter_advanceGesture_FUN_00429320
;   core_charactr.cpp_CCharacter_computePickup_FUN_00428bd0
;   core_charactr.cpp_CCharacter_processFire_FUN_00425fb0
;   core_game.cpp_CGame_setStatusDisplay_FUN_004bb8d0
;   core_hero.cpp_isAnyHeroWithinCylinder_FUN_004ce180
;   core_script.cpp_CScript_setSpeaker_FUN_00529990
;   sound_sndmain.cpp_killSfx_FUN_00551050
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004244b0
        ;   Label: core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0
    PUSH ESI                            ; 004244b1
    PUSH EDI                            ; 004244b2
    SUB ESP,0x4                         ; 004244b3
    MOV ESI,dword ptr [ESP + 0x14]      ; 004244b6
    FLD float ptr [ESI + 0x3050]        ; 004244ba
    FSUB float ptr [ESP + 0x18]         ; 004244c0
    FST float ptr [ESI + 0x3050]        ; 004244c4
    FLDZ                                ; 004244ca
    FCOMPP                              ; 004244cc
    FNSTSW AX                           ; 004244ce
    SAHF                                ; 004244d0
    JBE 0x004244dd                      ; 004244d1
        ;   XREF to: 004244dd (CONDITIONAL_JUMP)  ; LAB_004244dd
    MOV dword ptr [ESI + 0x3050],0x0    ; 004244d3
    PUSH dword ptr [ESP + 0x18]         ; 004244dd
        ;   Label: LAB_004244dd
    PUSH ESI                            ; 004244e1
    CALL core_charactr.cpp_CCharacter_processFire_FUN_00425fb0 ; 004244e2
        ;   XREF to: 00425fb0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_processFire_FUN_00425fb0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004244e7
    PUSH dword ptr [ESP + 0x18]         ; 004244ea
    PUSH ESI                            ; 004244ee
    CALL core_charactr.cpp_CCharacter_advanceGesture_FUN_00429320 ; 004244ef
        ;   XREF to: 00429320 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_advanceGesture_FUN_00429320(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004244f4
    FLD float ptr [ESI + 0x1022c]       ; 004244f7
    FSUB float ptr [ESP + 0x18]         ; 004244fd
    FST float ptr [ESI + 0x1022c]       ; 00424501
    FLDZ                                ; 00424507
    FCOMPP                              ; 00424509
    FNSTSW AX                           ; 0042450b
    SAHF                                ; 0042450d
    JBE 0x0042451a                      ; 0042450e
        ;   XREF to: 0042451a (CONDITIONAL_JUMP)  ; LAB_0042451a
    MOV dword ptr [ESI + 0x1022c],0x0   ; 00424510
    FLD float ptr [ESI + 0x2820]        ; 0042451a
        ;   Label: LAB_0042451a
    FLDZ                                ; 00424520
    FCOMPP                              ; 00424522
    FNSTSW AX                           ; 00424524
    SAHF                                ; 00424526
    JNC 0x0042455c                      ; 00424527
        ;   XREF to: 0042455c (CONDITIONAL_JUMP)  ; LAB_0042455c
    FLD float ptr [ESI + 0x2820]        ; 00424529
    FSUB float ptr [ESP + 0x18]         ; 0042452f
    FST float ptr [ESI + 0x2820]        ; 00424533
    FLDZ                                ; 00424539
    FCOMPP                              ; 0042453b
    FNSTSW AX                           ; 0042453d
    SAHF                                ; 0042453f
    JBE 0x0042455c                      ; 00424540
        ;   XREF to: 0042455c (CONDITIONAL_JUMP)  ; LAB_0042455c
    PUSH ESI                            ; 00424542
    MOV EDX,dword ptr [0x0061b460]      ; 00424543 | g_CScriptPtr
    PUSH EDX                            ; 00424549 | g_CScriptInstance
    MOV dword ptr [ESI + 0x2820],0x0    ; 0042454a
    CALL core_script.cpp_CScript_setSpeaker_FUN_00529990 ; 00424554
        ;   XREF to: 00529990 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_setSpeaker_FUN_00529990(CScript * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00424559
    CMP dword ptr [ESI + 0x25b0],0x2    ; 0042455c
        ;   Label: LAB_0042455c
    JNZ 0x00424592                      ; 00424563
        ;   XREF to: 00424592 (CONDITIONAL_JUMP)  ; LAB_00424592
    FLD float ptr [ESI + 0x25a8]        ; 00424565
    FDIV float ptr [ESI + 0x25ac]       ; 0042456b
    PUSH 0x40000000                     ; 00424571
    SUB ESP,0x4                         ; 00424576
    LEA EAX,[ESI + 0x25b4]              ; 00424579
    FSTP float ptr [ESP]                ; 0042457f
    PUSH EAX                            ; 00424582
    MOV EBX,dword ptr [0x00616494]      ; 00424583 | g_CGamePtr
    PUSH EBX                            ; 00424589 | g_CGameInstance
    CALL core_game.cpp_CGame_setStatusDisplay_FUN_004bb8d0 ; 0042458a
        ;   XREF to: 004bb8d0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_setStatusDisplay_FUN_004bb8d0(CGame * this_ptr, char * name, float value, float duration)
    ADD ESP,0x10                        ; 0042458f
    CMP dword ptr [ESI + 0x2568],0x0    ; 00424592
        ;   Label: LAB_00424592
    JNZ 0x0042466f                      ; 00424599
        ;   XREF to: 0042466f (CONDITIONAL_JUMP)  ; LAB_0042466f
    FLD float ptr [ESI + 0x2574]        ; 0042459f
    FCOMP float ptr [0x005f4084]        ; 004245a5 | DAT_005f4084
    FNSTSW AX                           ; 004245ab
    SAHF                                ; 004245ad
    JZ 0x00424673                       ; 004245ae
        ;   XREF to: 00424673 (CONDITIONAL_JUMP)  ; LAB_00424673
    FLD float ptr [ESI + 0xe4]          ; 004245b4
        ;   Label: LAB_004245b4
    MOV dword ptr [ESI + 0xe4],0x0      ; 004245ba
    FADD float ptr [ESI + 0x24]         ; 004245c4
    FLD float ptr [ESI + 0x2574]        ; 004245c7
    FXCH                                ; 004245cd
    FSTP float ptr [ESI + 0x24]         ; 004245cf
    FCOMP float ptr [0x005f4084]        ; 004245d2 | DAT_005f4084
    FNSTSW AX                           ; 004245d8
    SAHF                                ; 004245da
    JZ 0x004245e6                       ; 004245db
        ;   XREF to: 004245e6 (CONDITIONAL_JUMP)  ; LAB_004245e6
    CMP dword ptr [ESI + 0xdc],0x0      ; 004245dd
    JZ 0x00424609                       ; 004245e4
        ;   XREF to: 00424609 (CONDITIONAL_JUMP)  ; LAB_00424609
    PUSH 0x0                            ; 004245e6
        ;   Label: LAB_004245e6
    MOV EAX,dword ptr [ESI + 0x2b0]     ; 004245e8
    PUSH dword ptr [ESI + 0x3430]       ; 004245ee
    PUSH ESI                            ; 004245f4
    CALL dword ptr [EAX + 0x48]         ; 004245f5
    MOV dword ptr [ESP + 0xc],EAX       ; 004245f8
    MOV EAX,dword ptr [ESP + 0xc]       ; 004245fc
    MOV dword ptr [ESI + 0x2574],EAX    ; 00424600
    ADD ESP,0xc                         ; 00424606
    FLD float ptr [ESI + 0x2574]        ; 00424609
        ;   Label: LAB_00424609
    FADD double ptr [0x005ccc9e]        ; 0042460f | DAT_005ccc9e
    FLD float ptr [ESI + 0x24]          ; 00424615
    FCOMPP                              ; 00424618
    FNSTSW AX                           ; 0042461a
    SAHF                                ; 0042461c
    JNC 0x0042469f                      ; 0042461d
        ;   XREF to: 0042469f (CONDITIONAL_JUMP)  ; LAB_0042469f
    MOV EAX,0x1                         ; 00424623
    LEA EBX,[ESI + 0x257c]              ; 00424628
        ;   Label: LAB_00424628
    MOV dword ptr [ESI + 0x2570],EAX    ; 0042462e
    MOV dword ptr [EBX + 0x8],0x0       ; 00424634
    MOV EAX,dword ptr [EBX + 0x8]       ; 0042463b
    MOV dword ptr [EBX + 0x4],EAX       ; 0042463e
    MOV EAX,dword ptr [EBX + 0x4]       ; 00424641
    MOV dword ptr [EBX],EAX             ; 00424644
    MOV EDX,dword ptr [ESI + 0xdc]      ; 00424646
    MOV dword ptr [ESI + 0x2578],0x0    ; 0042464c
    TEST EDX,EDX                        ; 00424656
    JNZ 0x00424663                      ; 00424658
        ;   XREF to: 00424663 (CONDITIONAL_JUMP)  ; LAB_00424663
    CMP dword ptr [ESI + 0x2774],0x0    ; 0042465a
    JZ 0x004246a3                       ; 00424661
        ;   XREF to: 004246a3 (CONDITIONAL_JUMP)  ; LAB_004246a3
    MOV EAX,0x1                         ; 00424663
        ;   Label: LAB_00424663
    ADD ESP,0x4                         ; 00424668
        ;   Label: LAB_00424668
    POP EDI                             ; 0042466b
    POP ESI                             ; 0042466c
    POP EBX                             ; 0042466d
    RET                                 ; 0042466e
    XOR EAX,EAX                         ; 0042466f
        ;   Label: LAB_0042466f
    JMP 0x00424668                      ; 00424671
        ;   XREF to: 00424668 (UNCONDITIONAL_JUMP)  ; LAB_00424668
    MOV EDI,ESI                         ; 00424673
        ;   Label: LAB_00424673
    XOR EBX,EBX                         ; 00424675
    CMP dword ptr [EDI + 0x2620],0x0    ; 00424677
        ;   Label: LAB_00424677
    JNZ 0x0042468f                      ; 0042467e
        ;   XREF to: 0042468f (CONDITIONAL_JUMP)  ; LAB_0042468f
    INC EBX                             ; 00424680
        ;   Label: LAB_00424680
    ADD EDI,0x78                        ; 00424681
    CMP EBX,0x2                         ; 00424684
    JGE 0x004245b4                      ; 00424687
        ;   XREF to: 004245b4 (CONDITIONAL_JUMP)  ; LAB_004245b4
    JMP 0x00424677                      ; 0042468d
        ;   XREF to: 00424677 (UNCONDITIONAL_JUMP)  ; LAB_00424677
    PUSH 0x0                            ; 0042468f
        ;   Label: LAB_0042468f
    PUSH 0x0                            ; 00424691
    PUSH EBX                            ; 00424693
    PUSH ESI                            ; 00424694
    CALL core_charactr.cpp_CCharacter_computePickup_FUN_00428bd0 ; 00424695
        ;   XREF to: 00428bd0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_computePickup_FUN_00428bd0(CCharacter * this_ptr, int param_2, float param_3, int * param_4)
    ADD ESP,0x10                        ; 0042469a
    JMP 0x00424680                      ; 0042469d
        ;   XREF to: 00424680 (UNCONDITIONAL_JUMP)  ; LAB_00424680
    XOR EAX,EAX                         ; 0042469f
        ;   Label: LAB_0042469f
    JMP 0x00424628                      ; 004246a1
        ;   XREF to: 00424628 (UNCONDITIONAL_JUMP)  ; LAB_00424628
    PUSH dword ptr [ESI + 0x3438]       ; 004246a3
        ;   Label: LAB_004246a3
    LEA EAX,[ESI + 0x20]                ; 004246a9
    PUSH dword ptr [ESI + 0x343c]       ; 004246ac
    PUSH EAX                            ; 004246b2
    CALL core_hero.cpp_isAnyHeroWithinCylinder_FUN_004ce180 ; 004246b3
        ;   XREF to: 004ce180 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_isAnyHeroWithinCylinder_FUN_004ce180(CVector3f * point, float horizontal_radius, float vertical_tolerance)
    ADD ESP,0xc                         ; 004246b8
    TEST EAX,EAX                        ; 004246bb
    JNZ 0x00424663                      ; 004246bd
        ;   XREF to: 00424663 (CONDITIONAL_JUMP)  ; LAB_00424663
    MOV EBX,dword ptr [ESI + 0x10220]   ; 004246bf
    PUSH EBX                            ; 004246c5
    CALL sound_sndmain.cpp_killSfx_FUN_00551050 ; 004246c6
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00551050(uint sfx_handle)
    ADD ESP,0x4                         ; 004246cb
    XOR EAX,EAX                         ; 004246ce
    ADD ESP,0x4                         ; 004246d0
    POP EDI                             ; 004246d3
    POP ESI                             ; 004246d4
    POP EBX                             ; 004246d5
    RET                                 ; 004246d6

