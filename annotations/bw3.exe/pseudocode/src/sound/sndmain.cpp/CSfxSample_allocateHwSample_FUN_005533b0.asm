; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_005533b0(CSfxSample *this_ptr)
;
; Parameters:
; CSfxSample *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x1a0]:4  local_1a0
; undefined        Stack[-0x160]:1  local_160
;
; XREF[3]:
;   sound_sndmain.cpp_FUN_00551d20 at 00551f2c
;   sound_sndmain.cpp_FUN_00552350 at 00552558
;   sound_sndmain.cpp_FUN_0055725e at 0055734d
;
; Referenced Globals:
;   TerminatedCString s_allocateHwSample_failed_005d2a16
;   undefined4 s_Atried_to_use_Yamaha_WAV_005d2b91+1
;   undefined4 DAT_02cebc20
;   undefined4 g_SfxSamples[0].ref_count
;   undefined4 g_SfxSamples[1].taken
;   undefined4 g_SfxSamples[1].ref_count
;   undefined4 g_SfxSamples[1].buffer_id
;   undefined4 g_SfxSamples[1].field8_0x15c
;   undefined4 DAT_02cf3280
;
; Called Functions:
;   crt_memory.c_realloc_FUN_005a3e50
;   sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00553520
;   sound_sndmain.cpp_CSfxSample_freeSampleData_FUN_00553630
;   sound_sndmain.cpp_CSfxSample_releaseBufferId_FUN_005535e0
;   sound_sndmain.cpp_FUN_005514c0
;   sound_sndmain.cpp_FUN_005586d0
;   sound_sndmain.cpp_FUN_0055a560
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005533b0
        ;   Label: sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_005533b0
    PUSH ESI                            ; 005533b1
    PUSH EDI                            ; 005533b2
    PUSH EBP                            ; 005533b3
    SUB ESP,0x2a0                       ; 005533b4
    MOV EBP,dword ptr [ESP + 0x2b4]     ; 005533ba
    PUSH EBP                            ; 005533c1
    CALL sound_sndmain.cpp_CSfxSample_releaseBufferId_FUN_005535e0 ; 005533c2
        ;   XREF to: 005535e0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_releaseBufferId_FUN_005535e0(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 005533c7
    PUSH EBP                            ; 005533ca
    CALL sound_sndmain.cpp_CSfxSample_freeSampleData_FUN_00553630 ; 005533cb
        ;   XREF to: 00553630 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_freeSampleData_FUN_00553630(CSfxSample * this_ptr)
    MOV EDX,dword ptr [EBP + 0x100]     ; 005533d0
    ADD ESP,0x4                         ; 005533d6
    CMP EDX,0x2                         ; 005533d9
    JZ 0x00553493                       ; 005533dc
        ;   XREF to: 00553493 (CONDITIONAL_JUMP)  ; LAB_00553493
    CALL sound_sndmain.cpp_FUN_005586d0 ; 005533e2
        ;   XREF to: 005586d0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_005586d0(int enable)
    CMP EAX,0x1                         ; 005533e7
    JL 0x005534d5                       ; 005533ea
        ;   XREF to: 005534d5 (CONDITIONAL_JUMP)  ; LAB_005534d5
    MOV ECX,0x54                        ; 005533f0
    MOV EDI,ESP                         ; 005533f5
    MOV ESI,EBP                         ; 005533f7
    MOVSD.REP ES:EDI,ESI                ; 005533f9
    MOV ECX,0x54                        ; 005533fb
    LEA EDI,[ESP + 0x150]               ; 00553400
    MOV EAX,dword ptr [EBP + 0x164]     ; 00553407
    MOV ESI,ESP                         ; 0055340d
    MOV dword ptr [ESP + 0x110],EAX     ; 0055340f
    MOVSD.REP ES:EDI,ESI                ; 00553416
    CMP dword ptr [0x02cf3280],0x0      ; 00553418 | DAT_02cf3280
    JZ 0x00553478                       ; 0055341f
        ;   XREF to: 00553478 (CONDITIONAL_JUMP)  ; LAB_00553478
    XOR ESI,ESI                         ; 00553421
    LEA EDX,[ESP + 0x150]               ; 00553423
        ;   Label: LAB_00553423
    MOV EAX,[0x02cf3280]                ; 0055342a | DAT_02cf3280
    PUSH EDX                            ; 0055342f
    MOV ECX,dword ptr [EAX]             ; 00553430
    PUSH EAX                            ; 00553432
    CALL dword ptr [ECX + 0x30]         ; 00553433
    ADD ESP,0x8                         ; 00553436
    TEST EAX,EAX                        ; 00553439
    JNZ 0x0055347a                      ; 0055343b
        ;   XREF to: 0055347a (CONDITIONAL_JUMP)  ; LAB_0055347a
    MOV EAX,[0x02cebc20]                ; 0055343d | DAT_02cebc20
    MOV EBX,ESI                         ; 00553442
    IMUL ECX,EAX,0x1b0                  ; 00553444
    INC EAX                             ; 0055344a
        ;   Label: LAB_0055344a
    CMP EAX,0x40                        ; 0055344b
    JL 0x00553452                       ; 0055344e
        ;   XREF to: 00553452 (CONDITIONAL_JUMP)  ; LAB_00553452
    MOV EAX,ESI                         ; 00553450
    IMUL EDX,EAX,0x1b0                  ; 00553452
        ;   Label: LAB_00553452
    CMP ESI,dword ptr [EDX + 0x2cebd78] ; 00553458 | g_SfxSamples[0].ref_count | g_SfxSamples[1].ref_count
    JZ 0x005534a4                       ; 0055345e
        ;   XREF to: 005534a4 (CONDITIONAL_JUMP)  ; LAB_005534a4
    INC EBX                             ; 00553460
        ;   Label: LAB_00553460
    CMP EBX,0x40                        ; 00553461
    JL 0x0055344a                       ; 00553464
        ;   XREF to: 0055344a (CONDITIONAL_JUMP)  ; LAB_0055344a
    CMP EBX,0x40                        ; 00553466
        ;   Label: LAB_00553466
    JL 0x00553423                       ; 00553469
        ;   XREF to: 00553423 (CONDITIONAL_JUMP)  ; LAB_00553423
    PUSH 0x5d2a16                       ; 0055346b | = "allocateHwSample - failed\n"
    CALL sound_sndmain.cpp_FUN_0055a560 ; 00553470
        ;   XREF to: 0055a560 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_0055a560()
    ADD ESP,0x4                         ; 00553475
    XOR EAX,EAX                         ; 00553478
        ;   Label: LAB_00553478
    MOV dword ptr [EBP + 0x158],EAX     ; 0055347a
        ;   Label: LAB_0055347a
    TEST EAX,EAX                        ; 00553480
    JNZ 0x00553504                      ; 00553482
        ;   XREF to: 00553504 (CONDITIONAL_JUMP)  ; LAB_00553504
    ADD ESP,0x2a0                       ; 00553488
        ;   Label: LAB_00553488
    POP EBP                             ; 0055348e
    POP EDI                             ; 0055348f
    POP ESI                             ; 00553490
    POP EBX                             ; 00553491
    RET                                 ; 00553492
    PUSH 0x5d2b92                       ; 00553493 | s_Atried_to_use_Yamaha_WAV_005d2b91+1
        ;   Label: LAB_00553493
    CALL sound_sndmain.cpp_FUN_0055a560 ; 00553498
        ;   XREF to: 0055a560 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_0055a560()
    ADD ESP,0x4                         ; 0055349d
    XOR EAX,EAX                         ; 005534a0
    JMP 0x00553488                      ; 005534a2
        ;   XREF to: 00553488 (UNCONDITIONAL_JUMP)  ; LAB_00553488
    CMP ESI,dword ptr [EDX + 0x2cebd7c] ; 005534a4 | g_SfxSamples[1].buffer_id
        ;   Label: LAB_005534a4
    JZ 0x00553460                       ; 005534aa
        ;   XREF to: 00553460 (CONDITIONAL_JUMP)  ; LAB_00553460
    CMP ESI,dword ptr [EDX + 0x2cebd74] ; 005534ac | g_SfxSamples[1].taken
    JNZ 0x00553460                      ; 005534b2
        ;   XREF to: 00553460 (CONDITIONAL_JUMP)  ; LAB_00553460
    CMP ESI,dword ptr [EDX + 0x2cebd80] ; 005534b4 | g_SfxSamples[1].field8_0x15c
    JNZ 0x00553460                      ; 005534ba
        ;   XREF to: 00553460 (CONDITIONAL_JUMP)  ; LAB_00553460
    CMP ESI,dword ptr [ECX + 0x2cebdd0] ; 005534bc
    JNZ 0x00553460                      ; 005534c2
        ;   XREF to: 00553460 (CONDITIONAL_JUMP)  ; LAB_00553460
    ADD EDX,0x2cebc24                   ; 005534c4
    PUSH EDX                            ; 005534ca
    CALL sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00553520 ; 005534cb
        ;   XREF to: 00553520 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00553520(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 005534d0
    JMP 0x00553466                      ; 005534d3
        ;   XREF to: 00553466 (UNCONDITIONAL_JUMP)  ; LAB_00553466
    MOV ECX,dword ptr [EBP + 0x168]     ; 005534d5
        ;   Label: LAB_005534d5
    PUSH ECX                            ; 005534db
    CALL sound_sndmain.cpp_FUN_005514c0 ; 005534dc
        ;   XREF to: 005514c0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005514c0(int requested_bytes)
    ADD ESP,0x4                         ; 005534e1
    MOV EBX,dword ptr [EBP + 0x168]     ; 005534e4
    PUSH EBX                            ; 005534ea
    MOV ESI,dword ptr [EBP + 0x120]     ; 005534eb
    PUSH ESI                            ; 005534f1
    CALL crt_memory.c_realloc_FUN_005a3e50 ; 005534f2
        ;   XREF to: 005a3e50 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_005a3e50(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 005534f7
    TEST EAX,EAX                        ; 005534fa
    JZ 0x00553488                       ; 005534fc
        ;   XREF to: 00553488 (CONDITIONAL_JUMP)  ; LAB_00553488
    MOV dword ptr [EBP + 0x120],EAX     ; 005534fe
    MOV EAX,0x1                         ; 00553504
        ;   Label: LAB_00553504
    ADD ESP,0x2a0                       ; 00553509
    POP EBP                             ; 0055350f
    POP EDI                             ; 00553510
    POP ESI                             ; 00553511
    POP EBX                             ; 00553512
    RET                                 ; 00553513

