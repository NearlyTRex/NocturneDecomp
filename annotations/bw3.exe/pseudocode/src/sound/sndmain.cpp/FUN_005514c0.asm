; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_FUN_005514c0(int requested_bytes)
;
; Parameters:
; int              Stack[0x4]:4   requested_bytes
;
; XREF[3]:
;   sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_005533b0 at 005534dc
;   sound_sndmain.cpp_CSfxSlot_kill_FUN_00555270 at 00555392
;   sound_sndmain.cpp_setMemoryBudget_FUN_005574c0 at 005574d4
;
; Referenced Globals:
;   undefined4 DAT_0060424c
;   undefined4 DAT_02cebc20
;   undefined4 g_SfxSamples[0].ref_count
;   undefined4 g_SfxSamples[1].sample_data
;
; Called Functions:
;   sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00553520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005514c0
        ;   Label: sound_sndmain.cpp_FUN_005514c0
    PUSH ESI                            ; 005514c1
    PUSH EDI                            ; 005514c2
    MOV EDI,dword ptr [ESP + 0x10]      ; 005514c3
    XOR EAX,EAX                         ; 005514c7
    XOR ESI,ESI                         ; 005514c9
    CMP dword ptr [EAX + 0x2cebd44],0x0 ; 005514cb
        ;   Label: LAB_005514cb
    JNZ 0x00551527                      ; 005514d2
        ;   XREF to: 00551527 (CONDITIONAL_JUMP)  ; LAB_00551527
    ADD EAX,0x1b0                       ; 005514d4
        ;   Label: LAB_005514d4
    CMP EAX,0x6c00                      ; 005514d9
    JNZ 0x005514cb                      ; 005514de
        ;   XREF to: 005514cb (CONDITIONAL_JUMP)  ; LAB_005514cb
    MOV EBX,dword ptr [0x0060424c]      ; 005514e0 | DAT_0060424c
        ;   Label: LAB_005514e0
    LEA EAX,[ESI + EDI*0x1]             ; 005514e6
    CMP EAX,EBX                         ; 005514e9
    JLE 0x00551581                      ; 005514eb
        ;   XREF to: 00551581 (CONDITIONAL_JUMP)  ; LAB_00551581
    MOV EDX,dword ptr [0x02cebc20]      ; 005514f1 | DAT_02cebc20
    XOR EBX,EBX                         ; 005514f7
    IMUL ECX,EDX,0x1b0                  ; 005514f9
    INC EDX                             ; 005514ff
        ;   Label: LAB_005514ff
    CMP EDX,0x40                        ; 00551500
    JL 0x00551507                       ; 00551503
        ;   XREF to: 00551507 (CONDITIONAL_JUMP)  ; LAB_00551507
    XOR EDX,EDX                         ; 00551505
    IMUL EAX,EDX,0x1b0                  ; 00551507
        ;   Label: LAB_00551507
    CMP dword ptr [EAX + 0x2cebd44],0x0 ; 0055150d | g_SfxSamples[1].sample_data
    JNZ 0x0055152f                      ; 00551514
        ;   XREF to: 0055152f (CONDITIONAL_JUMP)  ; LAB_0055152f
    INC EBX                             ; 00551516
        ;   Label: LAB_00551516
    CMP EBX,0x40                        ; 00551517
    JL 0x005514ff                       ; 0055151a
        ;   XREF to: 005514ff (CONDITIONAL_JUMP)  ; LAB_005514ff
    CMP EBX,0x40                        ; 0055151c
    JL 0x005514e0                       ; 0055151f
        ;   XREF to: 005514e0 (CONDITIONAL_JUMP)  ; LAB_005514e0
    XOR EAX,EAX                         ; 00551521
    POP EDI                             ; 00551523
    POP ESI                             ; 00551524
    POP EBX                             ; 00551525
    RET                                 ; 00551526
    ADD ESI,dword ptr [EAX + 0x2cebd8c] ; 00551527
        ;   Label: LAB_00551527
    JMP 0x005514d4                      ; 0055152d
        ;   XREF to: 005514d4 (UNCONDITIONAL_JUMP)  ; LAB_005514d4
    CMP dword ptr [EAX + 0x2cebd88],0x1 ; 0055152f
        ;   Label: LAB_0055152f
    JL 0x00551516                       ; 00551536
        ;   XREF to: 00551516 (CONDITIONAL_JUMP)  ; LAB_00551516
    CMP dword ptr [EAX + 0x2cebd78],0x0 ; 00551538 | g_SfxSamples[0].ref_count
    JNZ 0x00551516                      ; 0055153f
        ;   XREF to: 00551516 (CONDITIONAL_JUMP)  ; LAB_00551516
    CMP dword ptr [EAX + 0x2cebd74],0x0 ; 00551541
    JNZ 0x00551516                      ; 00551548
        ;   XREF to: 00551516 (CONDITIONAL_JUMP)  ; LAB_00551516
    CMP dword ptr [EAX + 0x2cebd80],0x0 ; 0055154a
    JNZ 0x00551516                      ; 00551551
        ;   XREF to: 00551516 (CONDITIONAL_JUMP)  ; LAB_00551516
    CMP dword ptr [ECX + 0x2cebdd0],0x0 ; 00551553
    JNZ 0x00551516                      ; 0055155a
        ;   XREF to: 00551516 (CONDITIONAL_JUMP)  ; LAB_00551516
    MOV EDX,dword ptr [EAX + 0x2cebd8c] ; 0055155c
    ADD EAX,0x2cebc24                   ; 00551562
    PUSH EAX                            ; 00551567
    SUB ESI,EDX                         ; 00551568
    CALL sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00553520 ; 0055156a
        ;   XREF to: 00553520 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00553520(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 0055156f
    CMP EBX,0x40                        ; 00551572
    JL 0x005514e0                       ; 00551575
        ;   XREF to: 005514e0 (CONDITIONAL_JUMP)  ; LAB_005514e0
    XOR EAX,EAX                         ; 0055157b
    POP EDI                             ; 0055157d
    POP ESI                             ; 0055157e
    POP EBX                             ; 0055157f
    RET                                 ; 00551580
    MOV EAX,0x1                         ; 00551581
        ;   Label: LAB_00551581
    POP EDI                             ; 00551586
    POP ESI                             ; 00551587
    POP EBX                             ; 00551588
    RET                                 ; 00551589

