; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_sndmain_cpp_FUN_00555410(CSfxSlot *param_1)
;
;
; XREF[1]:
;   sound_sndmain.cpp_FUN_0055a0b0 at 0055a11c
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005d3350
;   TerminatedCString s_SfxSlot_pollHwHandle_no_005d3365
;   TerminatedCString s_Killing_looped_sfx_s_whi_005d3388
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_02cf3280
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   sound_sndmain.cpp_CSfxSlot_kill_FUN_00555270
;   sound_sndmain.cpp_FUN_00555b80
;   sound_sndmain.cpp_FUN_0055a560
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00555410
        ;   Label: sound_sndmain.cpp_FUN_00555410
    PUSH EBP                            ; 00555411
    MOV EBX,dword ptr [ESP + 0xc]       ; 00555412
    CMP dword ptr [EBX + 0x60],0x0      ; 00555416
    JZ 0x00555491                       ; 0055541a
        ;   XREF to: 00555491 (CONDITIONAL_JUMP)  ; LAB_00555491
    CMP dword ptr [0x02cf3280],0x0      ; 00555420 | DAT_02cf3280
    JZ 0x00555488                       ; 00555427
        ;   XREF to: 00555488 (CONDITIONAL_JUMP)  ; LAB_00555488
    CMP dword ptr [EBX + 0x68],0x0      ; 00555429
    JNZ 0x00555454                      ; 0055542d
        ;   XREF to: 00555454 (CONDITIONAL_JUMP)  ; LAB_00555454
    PUSH EDI                            ; 0055542f
    MOV EDI,0x5d3350                    ; 00555430 | = "..\\sound\\sndmain.cpp"
    MOV EBP,0xcfb                       ; 00555435
    PUSH 0x5d3365                       ; 0055543a | = "SfxSlot::pollHwHandle - no sample?"
    MOV dword ptr [0x01d71de0],EDI      ; 0055543f | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBP      ; 00555445 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0055544b
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00555450
    POP EDI                             ; 00555453
    PUSH EBX                            ; 00555454
        ;   Label: LAB_00555454
    MOV EAX,[0x02cf3280]                ; 00555455 | DAT_02cf3280
    PUSH EAX                            ; 0055545a
    MOV EDX,dword ptr [EAX]             ; 0055545b
    CALL dword ptr [EDX + 0x54]         ; 0055545d
    ADD ESP,0x8                         ; 00555460
    TEST EAX,EAX                        ; 00555463
    JNZ 0x00555491                      ; 00555465
        ;   XREF to: 00555491 (CONDITIONAL_JUMP)  ; LAB_00555491
    MOV EAX,dword ptr [EBX + 0x68]      ; 00555467
    PUSH EAX                            ; 0055546a
    CALL sound_sndmain.cpp_FUN_00555b80 ; 0055546b
        ;   XREF to: 00555b80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00555b80(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 00555470
    TEST EAX,EAX                        ; 00555473
    JZ 0x00555488                       ; 00555475
        ;   XREF to: 00555488 (CONDITIONAL_JUMP)  ; LAB_00555488
    MOV EDX,dword ptr [EBX + 0x68]      ; 00555477
    PUSH EDX                            ; 0055547a
    PUSH 0x5d3388                       ; 0055547b | = "Killing looped sfx %s, which died??\n"
    CALL sound_sndmain.cpp_FUN_0055a560 ; 00555480
        ;   XREF to: 0055a560 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_0055a560()
    ADD ESP,0x8                         ; 00555485
    PUSH EBX                            ; 00555488
        ;   Label: LAB_00555488
    CALL sound_sndmain.cpp_CSfxSlot_kill_FUN_00555270 ; 00555489
        ;   XREF to: 00555270 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSlot_kill_FUN_00555270(CSfxSlot * this_ptr)
    ADD ESP,0x4                         ; 0055548e
    POP EBP                             ; 00555491
        ;   Label: LAB_00555491
    POP EBX                             ; 00555492
    RET                                 ; 00555493

