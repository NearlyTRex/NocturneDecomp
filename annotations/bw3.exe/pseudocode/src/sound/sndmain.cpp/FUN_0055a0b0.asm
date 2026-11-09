; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_FUN_0055a0b0(void)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   sound_snddx.cpp_FUN_0055b620 at 0055b645
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005d3ed5
;   TerminatedCString s_SfxSlot_pollSfx_must_be_005d3eea
;   undefined4 DAT_005d3f0e
;   undefined4 DAT_005d3f12
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_02ce7338
;   undefined4 DAT_02cf28bc
;   undefined4 DAT_02cf341c
;   undefined4 DAT_02cf3420
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   sound_sndmain.cpp_CSfxSlot_compute_FUN_00554430
;   sound_sndmain.cpp_FUN_005526d0
;   sound_sndmain.cpp_FUN_00555410
;   sound_sndmain.cpp_FUN_005586d0
;   wincore_winrun.cpp_FUN_005806a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055a0b0
        ;   Label: sound_sndmain.cpp_FUN_0055a0b0
    PUSH ESI                            ; 0055a0b1
    PUSH EDI                            ; 0055a0b2
    PUSH EBP                            ; 0055a0b3
    SUB ESP,0x8                         ; 0055a0b4
    CMP dword ptr [0x02cf341c],0x0      ; 0055a0b7 | DAT_02cf341c
    JLE 0x0055a136                      ; 0055a0be
        ;   XREF to: 0055a136 (CONDITIONAL_JUMP)  ; LAB_0055a136
    CALL wincore_winrun.cpp_FUN_005806a0 ; 0055a0c4
        ;   XREF to: 005806a0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_005806a0()
        ;   Label: LAB_0055a0c4
    MOV EDI,dword ptr [0x02cf3420]      ; 0055a0c9 | DAT_02cf3420
    MOV EBX,EAX                         ; 0055a0cf
    SUB EBX,EDI                         ; 0055a0d1
    MOV ESI,EAX                         ; 0055a0d3
    TEST EBX,EBX                        ; 0055a0d5
    JL 0x0055a0e1                       ; 0055a0d7
        ;   XREF to: 0055a0e1 (CONDITIONAL_JUMP)  ; LAB_0055a0e1
    CMP EBX,0x1cccc                     ; 0055a0d9
    JL 0x0055a12e                       ; 0055a0df
        ;   XREF to: 0055a12e (CONDITIONAL_JUMP)  ; LAB_0055a12e
    MOV EBP,dword ptr [0x02cf28bc]      ; 0055a0e1 | DAT_02cf28bc
        ;   Label: LAB_0055a0e1
    MOV dword ptr [0x02cf3420],ESI      ; 0055a0e7 | DAT_02cf3420
    TEST EBP,EBP                        ; 0055a0ed
    JZ 0x0055a15e                       ; 0055a0ef
        ;   XREF to: 0055a15e (CONDITIONAL_JUMP)  ; LAB_0055a15e
    XOR EAX,EAX                         ; 0055a0f1
        ;   Label: LAB_0055a0f1
    MOV dword ptr [ESP],EAX             ; 0055a0f3
    CALL sound_sndmain.cpp_FUN_005586d0 ; 0055a0f6
        ;   XREF to: 005586d0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_005586d0(int enable)
    CMP EAX,0x1                         ; 0055a0fb
    JGE 0x0055a165                      ; 0055a0fe
        ;   XREF to: 0055a165 (CONDITIONAL_JUMP)  ; LAB_0055a165
    MOV EBX,0x2ce721c                   ; 0055a100
        ;   Label: LAB_0055a100
    LEA ESI,[EBX + 0x4700]              ; 0055a105
    PUSH dword ptr [ESP]                ; 0055a10b
        ;   Label: LAB_0055a10b
    PUSH EBX                            ; 0055a10e | DAT_02ce7338
    CALL sound_sndmain.cpp_CSfxSlot_compute_FUN_00554430 ; 0055a10f
        ;   XREF to: 00554430 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSlot_compute_FUN_00554430(CSfxSlot * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0055a114
    TEST EAX,EAX                        ; 0055a117
    JZ 0x0055a124                       ; 0055a119
        ;   XREF to: 0055a124 (CONDITIONAL_JUMP)  ; LAB_0055a124
    PUSH EBX                            ; 0055a11b
    CALL sound_sndmain.cpp_FUN_00555410 ; 0055a11c
        ;   XREF to: 00555410 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00555410()
    ADD ESP,0x4                         ; 0055a121
    ADD EBX,0x11c                       ; 0055a124
        ;   Label: LAB_0055a124
    CMP EBX,ESI                         ; 0055a12a
    JNZ 0x0055a10b                      ; 0055a12c
        ;   XREF to: 0055a10b (CONDITIONAL_JUMP)  ; LAB_0055a10b
    ADD ESP,0x8                         ; 0055a12e
        ;   Label: LAB_0055a12e
    POP EBP                             ; 0055a131
    POP EDI                             ; 0055a132
    POP ESI                             ; 0055a133
    POP EBX                             ; 0055a134
    RET                                 ; 0055a135
    MOV ECX,0x5d3ed5                    ; 0055a136 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_0055a136
    MOV EBX,0x19f6                      ; 0055a13b
    PUSH 0x5d3eea                       ; 0055a140 | = "SfxSlot::pollSfx - must be locked!"
    MOV dword ptr [0x01d71de0],ECX      ; 0055a145 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 0055a14b | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0055a151
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0055a156
    JMP 0x0055a0c4                      ; 0055a159
        ;   XREF to: 0055a0c4 (UNCONDITIONAL_JUMP)  ; LAB_0055a0c4
    CALL sound_sndmain.cpp_FUN_005526d0 ; 0055a15e
        ;   XREF to: 005526d0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005526d0()
        ;   Label: LAB_0055a15e
    JMP 0x0055a0f1                      ; 0055a163
        ;   XREF to: 0055a0f1 (UNCONDITIONAL_JUMP)  ; LAB_0055a0f1
    MOV dword ptr [ESP + 0x4],EBX       ; 0055a165
        ;   Label: LAB_0055a165
    FILD dword ptr [ESP + 0x4]          ; 0055a169
    FMUL float ptr [0x005d3f0e]         ; 0055a16d | DAT_005d3f0e
    FLDZ                                ; 0055a173
    FXCH                                ; 0055a175
    FSTP float ptr [ESP]                ; 0055a177
    FCOMP float ptr [ESP]               ; 0055a17a
    FNSTSW AX                           ; 0055a17d
    SAHF                                ; 0055a17f
    JBE 0x0055a18c                      ; 0055a180
        ;   XREF to: 0055a18c (CONDITIONAL_JUMP)  ; LAB_0055a18c
    XOR ECX,ECX                         ; 0055a182
    MOV dword ptr [ESP],ECX             ; 0055a184
    JMP 0x0055a100                      ; 0055a187
        ;   XREF to: 0055a100 (UNCONDITIONAL_JUMP)  ; LAB_0055a100
    FLD float ptr [ESP]                 ; 0055a18c
        ;   Label: LAB_0055a18c
    FCOMP float ptr [0x005d3f12]        ; 0055a18f | DAT_005d3f12
    FNSTSW AX                           ; 0055a195
    SAHF                                ; 0055a197
    JBE 0x0055a100                      ; 0055a198
        ;   XREF to: 0055a100 (CONDITIONAL_JUMP)  ; LAB_0055a100
    MOV dword ptr [ESP],0x3e800000      ; 0055a19e
    JMP 0x0055a100                      ; 0055a1a5
        ;   XREF to: 0055a100 (UNCONDITIONAL_JUMP)  ; LAB_0055a100

