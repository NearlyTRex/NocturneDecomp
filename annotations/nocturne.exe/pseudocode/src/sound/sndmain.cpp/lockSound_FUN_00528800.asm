; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_lockSound_FUN_00528800(void)
;
;
; XREF[16]:
;   FUN_00527570 at 00527574
;   FUN_005278e0 at 005278e6
;   FUN_00527950 at 00527957
;   FUN_005279b0 at 005279b1
;   FUN_005293f0 at 00529437
;   FUN_005464a0 at 005465dd
;   sound_sndmain.cpp_enableSfxChannel_FUN_00527410 at 00527452
;   sound_sndmain.cpp_enableSoundSystem_FUN_00527e40 at 00527e78
;   sound_sndmain.cpp_freeAllSamples_FUN_00527c30 at 00527c32
;   sound_sndmain.cpp_getSampleInfo_FUN_005279e0 at 005279f1
;   ... and 6 more
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_00593909
;   TerminatedCString s_lockSound_unable_to_crea_0059391e
;   TerminatedCString s_sound_sndmain_cpp_00593948
;   TerminatedCString s_lockSound_lock_imbalance_0059395d
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;   undefined4 DAT_02dc84b8
;   undefined4 DAT_02dc84bc
;
; Called Functions:
;   FUN_004c8440
;   wincore_winrun.cpp_createMutex_FUN_00559bc0
;   wincore_winrun.cpp_waitForMutex_FUN_00559bd0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00528800
        ;   Label: sound_sndmain.cpp_lockSound_FUN_00528800
    PUSH EDI                            ; 00528801
    CMP dword ptr [0x02dc84b8],0x0      ; 00528802 | DAT_02dc84b8
    JNZ 0x0052883e                      ; 00528809
        ;   XREF to: 0052883e (CONDITIONAL_JUMP)  ; LAB_0052883e
    CALL wincore_winrun.cpp_createMutex_FUN_00559bc0 ; 0052880b
        ;   XREF to: 00559bc0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_createMutex_FUN_00559bc0()
    MOV [0x02dc84b8],EAX                ; 00528810 | DAT_02dc84b8
    TEST EAX,EAX                        ; 00528815
    JNZ 0x0052883e                      ; 00528817
        ;   XREF to: 0052883e (CONDITIONAL_JUMP)  ; LAB_0052883e
    PUSH EBX                            ; 00528819
    MOV ECX,0x593909                    ; 0052881a | = "..\\sound\\sndmain.cpp"
    MOV EBX,0x12fc                      ; 0052881f
    PUSH 0x59391e                       ; 00528824 | = "lockSound - unable to create mutex ob..."
    MOV dword ptr [0x01cc4800],ECX      ; 00528829 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EBX      ; 0052882f | DAT_01cc4804
    CALL FUN_004c8440                   ; 00528835
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 0052883a
    POP EBX                             ; 0052883d
    MOV ESI,dword ptr [0x02dc84b8]      ; 0052883e | DAT_02dc84b8
        ;   Label: LAB_0052883e
    PUSH ESI                            ; 00528844
    CALL wincore_winrun.cpp_waitForMutex_FUN_00559bd0 ; 00528845
        ;   XREF to: 00559bd0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_waitForMutex_FUN_00559bd0()
    MOV EDI,dword ptr [0x02dc84bc]      ; 0052884a | DAT_02dc84bc
    INC EDI                             ; 00528850
    ADD ESP,0x4                         ; 00528851
    MOV dword ptr [0x02dc84bc],EDI      ; 00528854 | DAT_02dc84bc
    CMP EDI,0x63                        ; 0052885a
    JG 0x00528862                       ; 0052885d
        ;   XREF to: 00528862 (CONDITIONAL_JUMP)  ; LAB_00528862
    POP EDI                             ; 0052885f
    POP ESI                             ; 00528860
    RET                                 ; 00528861
    MOV EAX,0x593948                    ; 00528862 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_00528862
    MOV EDX,0x1306                      ; 00528867
    PUSH 0x59395d                       ; 0052886c | = "lockSound - lock imbalance?"
    MOV [0x01cc4800],EAX                ; 00528871 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 00528876 | DAT_01cc4804
    CALL FUN_004c8440                   ; 0052887c
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00528881
    POP EDI                             ; 00528884
    POP ESI                             ; 00528885
    RET                                 ; 00528886

