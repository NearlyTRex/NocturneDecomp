; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_FUN_00554510(void)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   sound_snddx.cpp_FUN_00555a80 at 00555aa5
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005e93e1
;   TerminatedCString s_SfxSlot_pollSfx_must_be_005e93f6
;   undefined4 DAT_005e941a
;   undefined4 DAT_005e941e
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_0263d038
;   undefined4 DAT_026484bc
;   undefined4 DAT_0264901c
;   undefined4 DAT_02649020
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   sound_sndmain.cpp_CSfxSlot_compute_FUN_0054e8c0
;   sound_sndmain.cpp_FUN_0054cb70
;   sound_sndmain.cpp_FUN_0054f8a0
;   sound_sndmain.cpp_FUN_00552b30
;   wincore_winrun.cpp_FUN_0058e9e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00554510
        ;   Label: sound_sndmain.cpp_FUN_00554510
    PUSH ESI                            ; 00554511
    PUSH EDI                            ; 00554512
    PUSH EBP                            ; 00554513
    SUB ESP,0x8                         ; 00554514
    CMP dword ptr [0x0264901c],0x0      ; 00554517 | DAT_0264901c
    JLE 0x00554596                      ; 0055451e
        ;   XREF to: 00554596 (CONDITIONAL_JUMP)  ; LAB_00554596
    CALL wincore_winrun.cpp_FUN_0058e9e0 ; 00554524
        ;   XREF to: 0058e9e0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_0058e9e0()
        ;   Label: LAB_00554524
    MOV EDI,dword ptr [0x02649020]      ; 00554529 | DAT_02649020
    MOV EBX,EAX                         ; 0055452f
    SUB EBX,EDI                         ; 00554531
    MOV ESI,EAX                         ; 00554533
    TEST EBX,EBX                        ; 00554535
    JL 0x00554541                       ; 00554537
        ;   XREF to: 00554541 (CONDITIONAL_JUMP)  ; LAB_00554541
    CMP EBX,0x1cccc                     ; 00554539
    JL 0x0055458e                       ; 0055453f
        ;   XREF to: 0055458e (CONDITIONAL_JUMP)  ; LAB_0055458e
    MOV EBP,dword ptr [0x026484bc]      ; 00554541 | DAT_026484bc
        ;   Label: LAB_00554541
    MOV dword ptr [0x02649020],ESI      ; 00554547 | DAT_02649020
    TEST EBP,EBP                        ; 0055454d
    JZ 0x005545be                       ; 0055454f
        ;   XREF to: 005545be (CONDITIONAL_JUMP)  ; LAB_005545be
    XOR EAX,EAX                         ; 00554551
        ;   Label: LAB_00554551
    MOV dword ptr [ESP],EAX             ; 00554553
    CALL sound_sndmain.cpp_FUN_00552b30 ; 00554556
        ;   XREF to: 00552b30 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00552b30(int enable)
    CMP EAX,0x1                         ; 0055455b
    JGE 0x005545c5                      ; 0055455e
        ;   XREF to: 005545c5 (CONDITIONAL_JUMP)  ; LAB_005545c5
    MOV EBX,0x263cf1c                   ; 00554560
        ;   Label: LAB_00554560
    LEA ESI,[EBX + 0x4700]              ; 00554565
    PUSH dword ptr [ESP]                ; 0055456b
        ;   Label: LAB_0055456b
    PUSH EBX                            ; 0055456e | DAT_0263d038
    CALL sound_sndmain.cpp_CSfxSlot_compute_FUN_0054e8c0 ; 0055456f
        ;   XREF to: 0054e8c0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSlot_compute_FUN_0054e8c0(CSfxSlot * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00554574
    TEST EAX,EAX                        ; 00554577
    JZ 0x00554584                       ; 00554579
        ;   XREF to: 00554584 (CONDITIONAL_JUMP)  ; LAB_00554584
    PUSH EBX                            ; 0055457b
    CALL sound_sndmain.cpp_FUN_0054f8a0 ; 0055457c
        ;   XREF to: 0054f8a0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_0054f8a0()
    ADD ESP,0x4                         ; 00554581
    ADD EBX,0x11c                       ; 00554584
        ;   Label: LAB_00554584
    CMP EBX,ESI                         ; 0055458a
    JNZ 0x0055456b                      ; 0055458c
        ;   XREF to: 0055456b (CONDITIONAL_JUMP)  ; LAB_0055456b
    ADD ESP,0x8                         ; 0055458e
        ;   Label: LAB_0055458e
    POP EBP                             ; 00554591
    POP EDI                             ; 00554592
    POP ESI                             ; 00554593
    POP EBX                             ; 00554594
    RET                                 ; 00554595
    MOV ECX,0x5e93e1                    ; 00554596 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_00554596
    MOV EBX,0x19ec                      ; 0055459b
    PUSH 0x5e93f6                       ; 005545a0 | = "SfxSlot::pollSfx - must be locked!"
    MOV dword ptr [0x01d046a0],ECX      ; 005545a5 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 005545ab | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 005545b1
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 005545b6
    JMP 0x00554524                      ; 005545b9
        ;   XREF to: 00554524 (UNCONDITIONAL_JUMP)  ; LAB_00554524
    CALL sound_sndmain.cpp_FUN_0054cb70 ; 005545be
        ;   XREF to: 0054cb70 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_0054cb70()
        ;   Label: LAB_005545be
    JMP 0x00554551                      ; 005545c3
        ;   XREF to: 00554551 (UNCONDITIONAL_JUMP)  ; LAB_00554551
    MOV dword ptr [ESP + 0x4],EBX       ; 005545c5
        ;   Label: LAB_005545c5
    FILD dword ptr [ESP + 0x4]          ; 005545c9
    FMUL float ptr [0x005e941a]         ; 005545cd | DAT_005e941a
    FLDZ                                ; 005545d3
    FXCH                                ; 005545d5
    FSTP float ptr [ESP]                ; 005545d7
    FCOMP float ptr [ESP]               ; 005545da
    FNSTSW AX                           ; 005545dd
    SAHF                                ; 005545df
    JBE 0x005545ec                      ; 005545e0
        ;   XREF to: 005545ec (CONDITIONAL_JUMP)  ; LAB_005545ec
    XOR ECX,ECX                         ; 005545e2
    MOV dword ptr [ESP],ECX             ; 005545e4
    JMP 0x00554560                      ; 005545e7
        ;   XREF to: 00554560 (UNCONDITIONAL_JUMP)  ; LAB_00554560
    FLD float ptr [ESP]                 ; 005545ec
        ;   Label: LAB_005545ec
    FCOMP float ptr [0x005e941e]        ; 005545ef | DAT_005e941e
    FNSTSW AX                           ; 005545f5
    SAHF                                ; 005545f7
    JBE 0x00554560                      ; 005545f8
        ;   XREF to: 00554560 (CONDITIONAL_JUMP)  ; LAB_00554560
    MOV dword ptr [ESP],0x3e800000      ; 005545fe
    JMP 0x00554560                      ; 00554605
        ;   XREF to: 00554560 (UNCONDITIONAL_JUMP)  ; LAB_00554560

