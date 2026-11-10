; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_motion_cpp_CMotionController_advance_FUN_00524270(CMotionController *this_ptr,float *delta_time)
;
; Parameters:
; CMotionController * Stack[0x4]:4   this_ptr
; float *          Stack[0x8]:4   delta_time
; Local Variables:
; undefined4       Stack[-0xbc]:4  local_bc
; undefined8       Stack[-0xb8]:8  local_b8
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined        Stack[-0xa8]:1  local_a8
; undefined        Stack[-0x44]:1  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[49]:
;   core_armour.cpp_CArmour_process_FUN_0040eaa0 at 0040eb92
;   core_baron.cpp_CBaron_advanceMotion_FUN_00410110 at 00410126
;   core_batcreat.cpp_CBatCreature_process_FUN_004115b0 at 0041183f
;   core_batman.cpp_CBatman_process_FUN_00412ba0 at 00412e3c
;   core_beast.cpp_CBeast_process_FUN_00414770 at 004147c8
;   core_biggs.cpp_CBiggs_process_FUN_00414b30 at 00414d94
;   core_bird.cpp_CBird_process_FUN_00415340 at 004153ab
;   core_boneguy.cpp_CBoneGuy_process_FUN_0041bb40 at 0041bf03
;   core_bride.cpp_CBride_process_FUN_00423b70 at 00423d30
;   core_carved.cpp_CCarved_process_FUN_00428ae0 at 00428b8f
;   ... and 39 more
;
; Referenced Globals:
;   void* switchdataD_00524244 = 00524380
;   void* switchdataD_00524254 = 0052455f
;   TerminatedCString s_core_motion_cpp_005eadc1
;   TerminatedCString s_CMotionController_advanc_005eadd4
;   TerminatedCString s_core_motion_cpp_005eae1a
;   TerminatedCString s_Invalid_transition_comma_005eae2d
;   TerminatedCString s_signal_d_005eae79
;   undefined4 DAT_005eae83
;   undefined4 DAT_005eae8b
;   undefined4 DAT_005eae93
;   undefined4 DAT_005eae9b
;   undefined4 DAT_0061b4d0
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_event.cpp_CEventList_executeCommands_FUN_004a1b70
;   core_main.c_FUN_005030e0
;   core_motion.cpp_CMotionController_clearTweenState_FUN_00524b70
;   core_motion.cpp_CMotionController_findAndStartTransition_FUN_00524620
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770
;   core_motion.cpp_CMotionController_reverseTransition_FUN_00524710
;   core_motion.cpp_CMotionController_startTransition_FUN_00524880
;   core_motion.cpp_FUN_00524ba0
;   core_motion.cpp_FUN_00524d70
;   core_motion.cpp_FUN_00524f40
;   crt_unknown.c_sprintf_FUN_005bfb40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00524270
        ;   Label: core_motion.cpp_CMotionController_advance_FUN_00524270
    PUSH ESI                            ; 00524271
    PUSH EDI                            ; 00524272
    PUSH EBP                            ; 00524273
    MOV EBP,ESP                         ; 00524274
    SUB ESP,0xa8                        ; 00524276
    AND ESP,0xfffffff8                  ; 0052427c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0052427f
    MOV EDI,dword ptr [EBP + 0x18]      ; 00524282
    LEA EAX,[EBX + 0x1c]                ; 00524285
    MOV dword ptr [ESP + 0x8c],EAX      ; 00524288
    LEA EAX,[EBX + 0x18]                ; 0052428f
    MOV dword ptr [ESP + 0x94],EAX      ; 00524292
    LEA EAX,[EBX + 0x8]                 ; 00524299
    XOR EDX,EDX                         ; 0052429c
    MOV dword ptr [ESP + 0x98],EAX      ; 0052429e
    LEA EAX,[EBX + 0x4]                 ; 005242a5
    MOV dword ptr [ESP + 0xa0],EDX      ; 005242a8
    MOV dword ptr [ESP + 0x90],EAX      ; 005242af
    FLD float ptr [EDI]                 ; 005242b6
        ;   Label: LAB_005242b6
    FCOMP double ptr [0x005eae83]       ; 005242b8 | DAT_005eae83
    FNSTSW AX                           ; 005242be
    SAHF                                ; 005242c0
    JA 0x005242e8                       ; 005242c1
        ;   XREF to: 005242e8 (CONDITIONAL_JUMP)  ; LAB_005242e8
    MOV dword ptr [EDI],0x0             ; 005242c3
        ;   Label: LAB_005242c3
    XOR EAX,EAX                         ; 005242c9
    MOV ESP,EBP                         ; 005242cb
    POP EBP                             ; 005242cd
    POP EDI                             ; 005242ce
    POP ESI                             ; 005242cf
    POP EBX                             ; 005242d0
    RET                                 ; 005242d1
    MOV ESI,dword ptr [ESP + 0xa0]      ; 005242d2
        ;   Label: LAB_005242d2
    INC ESI                             ; 005242d9
    MOV dword ptr [ESP + 0xa0],ESI      ; 005242da
    CMP ESI,0x5                         ; 005242e1
    JL 0x005242b6                       ; 005242e4
        ;   XREF to: 005242b6 (CONDITIONAL_JUMP)  ; LAB_005242b6
    JMP 0x005242c3                      ; 005242e6
        ;   XREF to: 005242c3 (UNCONDITIONAL_JUMP)  ; LAB_005242c3
    PUSH EBX                            ; 005242e8
        ;   Label: LAB_005242e8
    CALL core_motion.cpp_CMotionController_findAndStartTransition_FUN_00524620 ; 005242e9
        ;   XREF to: 00524620 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_findAndStartTransition_FUN_00524620(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 005242ee
    TEST EAX,EAX                        ; 005242f1
    JNZ 0x005242d2                      ; 005242f3
        ;   XREF to: 005242d2 (CONDITIONAL_JUMP)  ; LAB_005242d2
    MOV EAX,dword ptr [EDI]             ; 005242f5
    FLDZ                                ; 005242f7
    MOV dword ptr [ESP + 0x8],EAX       ; 005242f9
    XOR ESI,ESI                         ; 005242fd
    FLD float ptr [EBX + 0x14]          ; 005242ff
    FSTP double ptr [ESP]               ; 00524302
    FCOMP double ptr [ESP]              ; 00524305
    FNSTSW AX                           ; 00524308
    SAHF                                ; 0052430a
    JA 0x005245d1                       ; 0052430b
        ;   XREF to: 005245d1 (CONDITIONAL_JUMP)  ; LAB_005245d1
    CMP dword ptr [EBX + 0x20],0x0      ; 00524311
    JZ 0x00524467                       ; 00524315
        ;   XREF to: 00524467 (CONDITIONAL_JUMP)  ; LAB_00524467
    FLD float ptr [EBX + 0x14]          ; 0052431b
    FDIV float ptr [EBX + 0x10]         ; 0052431e
        ;   Label: LAB_0052431e
    FSTP float ptr [ESP + 0xc]          ; 00524321
    FLD float ptr [ESP + 0xc]           ; 00524325
    FLDZ                                ; 00524329
    FCOMPP                              ; 0052432b
    FNSTSW AX                           ; 0052432d
    SAHF                                ; 0052432f
    JBE 0x00524338                      ; 00524330
        ;   XREF to: 00524338 (CONDITIONAL_JUMP)  ; LAB_00524338
    XOR ECX,ECX                         ; 00524332
    MOV dword ptr [ESP + 0xc],ECX       ; 00524334
    FLD float ptr [ESP + 0xc]           ; 00524338
        ;   Label: LAB_00524338
    FCOMP float ptr [ESP + 0x8]         ; 0052433c
    FNSTSW AX                           ; 00524340
    SAHF                                ; 00524342
    JNC 0x0052434d                      ; 00524343
        ;   XREF to: 0052434d (CONDITIONAL_JUMP)  ; LAB_0052434d
    MOV EAX,dword ptr [ESP + 0xc]       ; 00524345
    MOV dword ptr [ESP + 0x8],EAX       ; 00524349
    FLD float ptr [ESP + 0x8]           ; 0052434d
        ;   Label: LAB_0052434d
    XOR EAX,EAX                         ; 00524351
    FLDZ                                ; 00524353
    MOV dword ptr [ESP + 0x9c],EAX      ; 00524355
    MOV dword ptr [ESP + 0xa4],EAX      ; 0052435c
    FCOMPP                              ; 00524363
    FNSTSW AX                           ; 00524365
    SAHF                                ; 00524367
    JNC 0x00524380                      ; 00524368
        ;   XREF to: 00524380 (CONDITIONAL_JUMP)  ; caseD_3
    MOV EAX,dword ptr [EBX + 0xc]       ; 0052436a
    SUB EAX,0x3                         ; 0052436d
    CMP EAX,0x3                         ; 00524370
    JA 0x005244f0                       ; 00524373
        ;   XREF to: 005244f0 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x524244]  ; 00524379 | caseD_3 | caseD_4 | caseD_5
        ;   Label: switchD
    CMP dword ptr [ESP + 0x9c],0x0      ; 00524380
        ;   Label: caseD_3
    JZ 0x005243ac                       ; 00524388
        ;   XREF to: 005243ac (CONDITIONAL_JUMP)  ; LAB_005243ac
    PUSH dword ptr [EBX + 0x14]         ; 0052438a
        ;   Label: LAB_0052438a
    MOV ECX,dword ptr [ESP + 0x9c]      ; 0052438d
    PUSH dword ptr [ESP + 0xc]          ; 00524394
    PUSH ECX                            ; 00524398
    MOV ESI,dword ptr [ESP + 0x9c]      ; 00524399
    PUSH ESI                            ; 005243a0
    PUSH EBX                            ; 005243a1
    CALL core_motion.cpp_FUN_00524ba0   ; 005243a2
        ;   XREF to: 00524ba0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_FUN_00524ba0(CMotionController * this_ptr, int * inout_motion_index, float * inout_frame_number, float delta_time, ...)
    ADD ESP,0x14                        ; 005243a7
    MOV ESI,EAX                         ; 005243aa
    CMP dword ptr [ESP + 0xa4],0x0      ; 005243ac
        ;   Label: LAB_005243ac
    JZ 0x005243e6                       ; 005243b4
        ;   XREF to: 005243e6 (CONDITIONAL_JUMP)  ; LAB_005243e6
    SUB ESP,0x4                         ; 005243b6
    FLD float ptr [EBX + 0x14]          ; 005243b9
    FLD1                                ; 005243bc
    FSUBRP                              ; 005243be
    MOV EDX,dword ptr [ESP + 0x90]      ; 005243c0
    FSTP float ptr [ESP]                ; 005243c7
    PUSH dword ptr [ESP + 0xc]          ; 005243ca
    PUSH EDX                            ; 005243ce
    MOV ECX,dword ptr [ESP + 0xa0]      ; 005243cf
    PUSH ECX                            ; 005243d6
    PUSH EBX                            ; 005243d7
    CALL core_motion.cpp_FUN_00524ba0   ; 005243d8
        ;   XREF to: 00524ba0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_FUN_00524ba0(CMotionController * this_ptr, int * inout_motion_index, float * inout_frame_number, float delta_time, ...)
    ADD ESP,0x14                        ; 005243dd
    TEST ESI,ESI                        ; 005243e0
    JNZ 0x005243e6                      ; 005243e2
        ;   XREF to: 005243e6 (CONDITIONAL_JUMP)  ; LAB_005243e6
    MOV ESI,EAX                         ; 005243e4
    CMP dword ptr [EBX + 0x20],0x0      ; 005243e6
        ;   Label: LAB_005243e6
    JZ 0x0052451b                       ; 005243ea
        ;   XREF to: 0052451b (CONDITIONAL_JUMP)  ; LAB_0052451b
    FLD float ptr [ESP + 0x8]           ; 005243f0
    FMUL float ptr [EBX + 0x10]         ; 005243f4
    FSUBR float ptr [EBX + 0x14]        ; 005243f7
    FST float ptr [EBX + 0x14]          ; 005243fa
    FCOMP double ptr [0x005eae9b]       ; 005243fd | DAT_005eae9b
    FNSTSW AX                           ; 00524403
    SAHF                                ; 00524405
    JNC 0x00524411                      ; 00524406
        ;   XREF to: 00524411 (CONDITIONAL_JUMP)  ; LAB_00524411
    PUSH EBX                            ; 00524408
    CALL core_motion.cpp_CMotionController_clearTweenState_FUN_00524b70 ; 00524409
        ;   XREF to: 00524b70 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_clearTweenState_FUN_00524b70(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0052440e
    FLD float ptr [EDI]                 ; 00524411
        ;   Label: LAB_00524411
    FSUB float ptr [ESP + 0x8]          ; 00524413
    FSTP float ptr [EDI]                ; 00524417
    MOV ECX,dword ptr [EBX + 0x2c]      ; 00524419
    TEST ECX,ECX                        ; 0052441c
    JZ 0x0052442f                       ; 0052441e
        ;   XREF to: 0052442f (CONDITIONAL_JUMP)  ; LAB_0052442f
    MOV EAX,dword ptr [ECX + 0x8]       ; 00524420
    CMP EAX,dword ptr [EBX + 0x4]       ; 00524423
    JNZ 0x0052442f                      ; 00524426
        ;   XREF to: 0052442f (CONDITIONAL_JUMP)  ; LAB_0052442f
    MOV dword ptr [EBX + 0x2c],0x0      ; 00524428
    TEST ESI,ESI                        ; 0052442f
        ;   Label: LAB_0052442f
    JZ 0x005242d2                       ; 00524431
        ;   XREF to: 005242d2 (CONDITIONAL_JUMP)  ; LAB_005242d2
    PUSH ESI                            ; 00524437
    PUSH 0x5eae79                       ; 00524438 | = "signal%d"
    LEA EAX,[ESP + 0x18]                ; 0052443d
    PUSH EAX                            ; 00524441
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00524442
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 00524447
    LEA EAX,[ESP + 0x10]                ; 0052444a
    PUSH EAX                            ; 0052444e
    MOV ECX,dword ptr [0x0061b4d0]      ; 0052444f | DAT_0061b4d0
    PUSH ECX                            ; 00524455
    CALL core_event.cpp_CEventList_executeCommands_FUN_004a1b70 ; 00524456
        ;   XREF to: 004a1b70 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004a1b70(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 0052445b
    MOV EAX,ESI                         ; 0052445e
    MOV ESP,EBP                         ; 00524460
    POP EBP                             ; 00524462
    POP EDI                             ; 00524463
    POP ESI                             ; 00524464
    POP EBX                             ; 00524465
    RET                                 ; 00524466
    FLD double ptr [0x005eae8b]         ; 00524467 | DAT_005eae8b
        ;   Label: LAB_00524467
    FSUB double ptr [ESP]               ; 0052446d
    JMP 0x0052431e                      ; 00524470
        ;   XREF to: 0052431e (UNCONDITIONAL_JUMP)  ; LAB_0052431e
    LEA EAX,[ESP + 0x8]                 ; 00524475
        ;   Label: caseD_4
    PUSH EAX                            ; 00524479
    MOV ECX,dword ptr [EBX + 0x18]      ; 0052447a
    PUSH dword ptr [EBX + 0x1c]         ; 0052447d
    PUSH ECX                            ; 00524480
    PUSH EBX                            ; 00524481
    CALL core_motion.cpp_FUN_00524f40   ; 00524482
        ;   XREF to: 00524f40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524f40()
    MOV EAX,0x1                         ; 00524487
    ADD ESP,0x10                        ; 0052448c
    MOV dword ptr [ESP + 0xa4],EAX      ; 0052448f
    JMP 0x00524380                      ; 00524496
        ;   XREF to: 00524380 (UNCONDITIONAL_JUMP)  ; caseD_3
    LEA EAX,[ESP + 0x8]                 ; 0052449b
        ;   Label: caseD_5
    PUSH EAX                            ; 0052449f
    MOV EDX,dword ptr [EBX + 0x4]       ; 005244a0
    PUSH dword ptr [EBX + 0x8]          ; 005244a3
    PUSH EDX                            ; 005244a6
    PUSH EBX                            ; 005244a7
    CALL core_motion.cpp_FUN_00524f40   ; 005244a8
        ;   XREF to: 00524f40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524f40()
    ADD ESP,0x10                        ; 005244ad
    JMP 0x0052438a                      ; 005244b0
        ;   XREF to: 0052438a (UNCONDITIONAL_JUMP)  ; LAB_0052438a
    LEA EAX,[ESP + 0x8]                 ; 005244b5
        ;   Label: caseD_6
    PUSH EAX                            ; 005244b9
    MOV ECX,dword ptr [EBX + 0x4]       ; 005244ba
    PUSH dword ptr [EBX + 0x8]          ; 005244bd
    PUSH ECX                            ; 005244c0
    PUSH EBX                            ; 005244c1
    CALL core_motion.cpp_FUN_00524f40   ; 005244c2
        ;   XREF to: 00524f40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524f40()
    ADD ESP,0x10                        ; 005244c7
    LEA EAX,[ESP + 0x8]                 ; 005244ca
    PUSH EAX                            ; 005244ce
    MOV ESI,dword ptr [EBX + 0x18]      ; 005244cf
    PUSH dword ptr [EBX + 0x1c]         ; 005244d2
    PUSH ESI                            ; 005244d5
    PUSH EBX                            ; 005244d6
    CALL core_motion.cpp_FUN_00524f40   ; 005244d7
        ;   XREF to: 00524f40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524f40()
    MOV EAX,0x1                         ; 005244dc
    ADD ESP,0x10                        ; 005244e1
    MOV dword ptr [ESP + 0xa4],EAX      ; 005244e4
    JMP 0x0052438a                      ; 005244eb
        ;   XREF to: 0052438a (UNCONDITIONAL_JUMP)  ; LAB_0052438a
    MOV EDX,dword ptr [EBX + 0xc]       ; 005244f0
        ;   Label: default
    PUSH EDX                            ; 005244f3
    MOV ECX,0x5eadc1                    ; 005244f4 | = "..\\core\\motion.cpp"
    MOV EAX,0x1bd                       ; 005244f9
    PUSH 0x5eadd4                       ; 005244fe | = "CMotionController::advance: Tweening ..."
    MOV dword ptr [0x01d1d400],ECX      ; 00524503 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 00524509 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0052450e
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 00524513
    JMP 0x00524380                      ; 00524516
        ;   XREF to: 00524380 (UNCONDITIONAL_JUMP)  ; caseD_3
    FLD float ptr [ESP + 0x8]           ; 0052451b
        ;   Label: LAB_0052451b
    FMUL float ptr [EBX + 0x10]         ; 0052451f
    FADD float ptr [EBX + 0x14]         ; 00524522
    FST float ptr [EBX + 0x14]          ; 00524525
    FCOMP double ptr [0x005eae93]       ; 00524528 | DAT_005eae93
    FNSTSW AX                           ; 0052452e
    SAHF                                ; 00524530
    JBE 0x00524411                      ; 00524531
        ;   XREF to: 00524411 (CONDITIONAL_JUMP)  ; LAB_00524411
    PUSH EBX                            ; 00524537
    CALL core_motion.cpp_CMotionController_reverseTransition_FUN_00524710 ; 00524538
        ;   XREF to: 00524710 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_reverseTransition_FUN_00524710(CMotionController * this_ptr)
    MOV EDX,dword ptr [EBX + 0x24]      ; 0052453d
    ADD ESP,0x4                         ; 00524540
    TEST EDX,EDX                        ; 00524543
    JZ 0x00524411                       ; 00524545
        ;   XREF to: 00524411 (CONDITIONAL_JUMP)  ; LAB_00524411
    PUSH EBX                            ; 0052454b
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 0052454c
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00524551
    ADD ESP,0x4                         ; 00524554
    MOV dword ptr [EBX + 0x28],EAX      ; 00524557
    JMP 0x00524411                      ; 0052455a
        ;   XREF to: 00524411 (UNCONDITIONAL_JUMP)  ; LAB_00524411
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0052455f
        ;   Label: caseD_1
    MOV dword ptr [EBX + 0x4],EAX       ; 00524563
    MOV EAX,dword ptr [ESP + 0x80]      ; 00524566
    MOV dword ptr [EBX + 0x8],EAX       ; 0052456d
    CMP dword ptr [ESP + 0x88],0x0      ; 00524570
    JZ 0x00524411                       ; 00524578
        ;   XREF to: 00524411 (CONDITIONAL_JUMP)  ; LAB_00524411
    PUSH EBX                            ; 0052457e
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 0052457f
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00524584
    ADD ESP,0x4                         ; 00524587
    MOV dword ptr [EBX + 0x28],EAX      ; 0052458a
    JMP 0x00524411                      ; 0052458d
        ;   XREF to: 00524411 (UNCONDITIONAL_JUMP)  ; LAB_00524411
    LEA EAX,[ESP + 0x74]                ; 00524592
        ;   Label: caseD_3
    PUSH EAX                            ; 00524596
    PUSH EBX                            ; 00524597
    CALL core_motion.cpp_CMotionController_startTransition_FUN_00524880 ; 00524598
        ;   XREF to: 00524880 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_startTransition_FUN_00524880(CMotionController * this_ptr, SMotionTransition * transition)
    ADD ESP,0x8                         ; 0052459d
    JMP 0x00524411                      ; 005245a0
        ;   XREF to: 00524411 (UNCONDITIONAL_JUMP)  ; LAB_00524411
    MOV ECX,dword ptr [ESP + 0x78]      ; 005245a5
        ;   Label: default
    PUSH ECX                            ; 005245a9
    MOV EAX,0x5eae1a                    ; 005245aa | = "..\\core\\motion.cpp"
    MOV EDX,0x1f6                       ; 005245af
    PUSH 0x5eae2d                       ; 005245b4 | = "Invalid transition command returned b..."
    MOV [0x01d1d400],EAX                ; 005245b9 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 005245be | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 005245c4
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 005245c9
    JMP 0x00524411                      ; 005245cc
        ;   XREF to: 00524411 (UNCONDITIONAL_JUMP)  ; LAB_00524411
    LEA EAX,[ESP + 0x74]                ; 005245d1
        ;   Label: LAB_005245d1
    PUSH EAX                            ; 005245d5
    LEA EAX,[ESP + 0xc]                 ; 005245d6
    PUSH EAX                            ; 005245da
    MOV ECX,dword ptr [EBX + 0x4]       ; 005245db
    PUSH dword ptr [EBX + 0x8]          ; 005245de
    PUSH ECX                            ; 005245e1
    PUSH EBX                            ; 005245e2
    CALL core_motion.cpp_FUN_00524d70   ; 005245e3
        ;   XREF to: 00524d70 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_FUN_00524d70(CMotionController * this_ptr, int motion_index, float current_frame, float * inout_delta_time, ...)
    ADD ESP,0x14                        ; 005245e8
    MOV ESI,EAX                         ; 005245eb
    MOV EAX,dword ptr [ESP + 0x78]      ; 005245ed
    DEC EAX                             ; 005245f1
    CMP EAX,0x5                         ; 005245f2
    JA 0x005245a5                       ; 005245f5
        ;   XREF to: 005245a5 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x524254]  ; 005245f7 | caseD_2 | caseD_6 | switchdataD_00524254
        ;   Label: switchD

