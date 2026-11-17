; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_nextMixingBuffer_FUN_0056f6d0(void)
;
;
; Referenced Globals:
;   int g_INT_006232ec = 0x2
;   int g_INT_006232f0 = 0x5622
;   char* g_CHAR_PTR_01d1d400
;   int g_INT_01d1d404
;   int g_INT_02c80660
;   int g_INT_02c80664
;   int g_INT_02c80668
;   int g_INT_02c8066c
;   int g_INT_02c80708
;   int g_INT_02c807ec
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_005030e0
;   crt_memory.c_memset_FUN_005bfb70
;   crt_string.c_memmove_FUN_005c25d0
;   sound_sndmain.cpp_CSfxSlot_compute_FUN_00570f30
;   sound_sndmain.cpp_CSfxSlot_mix_FUN_00571420
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056f6d0
        ;   Label: sound_sndmain.cpp_nextMixingBuffer_FUN_0056f6d0
    PUSH ESI                            ; 0056f6d1
    PUSH EDI                            ; 0056f6d2
    PUSH EBP                            ; 0056f6d3
    SUB ESP,0x30                        ; 0056f6d4
    CMP dword ptr [0x02c807ec],0x0      ; 0056f6d7 | g_INT_02c807ec
    JLE 0x0056f859                      ; 0056f6de
        ;   XREF to: 0056f859 (CONDITIONAL_JUMP)  ; LAB_0056f859
    CMP dword ptr [0x02c80660],0x0      ; 0056f6e4 | g_INT_02c80660
        ;   Label: LAB_0056f6e4
    JLE 0x0056f710                      ; 0056f6eb
        ;   XREF to: 0056f710 (CONDITIONAL_JUMP)  ; LAB_0056f710
    MOV EDI,0x5f31b6                    ; 0056f6ed
    MOV EBP,0x597                       ; 0056f6f2
    PUSH 0x5f31cb                       ; 0056f6f7
    MOV dword ptr [0x01d1d400],EDI      ; 0056f6fc | g_CHAR_PTR_01d1d400
    MOV dword ptr [0x01d1d404],EBP      ; 0056f702 | g_INT_01d1d404
    CALL core_main.c_displayErrorAndQuit_FUN_005030e0 ; 0056f708
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_005030e0(char * format)
    ADD ESP,0x4                         ; 0056f70d
    MOV ESI,dword ptr [0x02c80668]      ; 0056f710 | g_INT_02c80668
        ;   Label: LAB_0056f710
    MOV EAX,[0x006232ec]                ; 0056f716 | g_INT_006232ec
    XOR EDI,EDI                         ; 0056f71b
    SHL ESI,0x2                         ; 0056f71d
    TEST EAX,EAX                        ; 0056f720
    JLE 0x0056f790                      ; 0056f722
        ;   XREF to: 0056f790 (CONDITIONAL_JUMP)  ; LAB_0056f790
    XOR EBX,EBX                         ; 0056f724
    MOV EAX,[0x02c8066c]                ; 0056f726 | g_INT_02c8066c
        ;   Label: LAB_0056f726
    DEC EAX                             ; 0056f72b
    IMUL EAX,ESI                        ; 0056f72c
    MOV EDX,dword ptr [0x02c80668]      ; 0056f72f | g_INT_02c80668
    SHL EDX,0x2                         ; 0056f735
    PUSH EAX                            ; 0056f738
    MOV EAX,dword ptr [EBX + 0x2c80698] ; 0056f739
    ADD EDX,EAX                         ; 0056f73f
    PUSH EDX                            ; 0056f741
    PUSH EAX                            ; 0056f742
    CALL crt_string.c_memmove_FUN_005c25d0 ; 0056f743
        ;   XREF to: 005c25d0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005c25d0(void * dest, void * src, SIZE_T n)
    MOV EAX,[0x02c8066c]                ; 0056f748 | g_INT_02c8066c
    MOV EDX,dword ptr [0x02c80668]      ; 0056f74d | g_INT_02c80668
    DEC EAX                             ; 0056f753
    IMUL EAX,EDX                        ; 0056f754
    ADD ESP,0xc                         ; 0056f757
    LEA EDX,[EAX*0x4 + 0x0]             ; 0056f75a
    PUSH ESI                            ; 0056f761
    MOV EAX,dword ptr [EBX + 0x2c80698] ; 0056f762
    PUSH 0x0                            ; 0056f768
    ADD EAX,EDX                         ; 0056f76a
    PUSH EAX                            ; 0056f76c
    ADD EBX,0x4                         ; 0056f76d
    INC EDI                             ; 0056f770
    CALL crt_memory.c_memset_FUN_005bfb70 ; 0056f771
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    MOV ECX,dword ptr [0x006232ec]      ; 0056f776 | g_INT_006232ec
    ADD ESP,0xc                         ; 0056f77c
    CMP EDI,ECX                         ; 0056f77f
    JL 0x0056f726                       ; 0056f781
        ;   XREF to: 0056f726 (CONDITIONAL_JUMP)  ; LAB_0056f726
    LEA EAX,[EAX]                       ; 0056f783
    LEA EDX,[EDX]                       ; 0056f789
    NOP                                 ; 0056f78f
    MOV EAX,[0x02c80668]                ; 0056f790 | g_INT_02c80668
        ;   Label: LAB_0056f790
    MOV dword ptr [ESP + 0x20],EAX      ; 0056f795
    MOV EAX,[0x006232ec]                ; 0056f799 | g_INT_006232ec
    MOV dword ptr [ESP + 0x24],EAX      ; 0056f79e
    MOV EAX,[0x006232f0]                ; 0056f7a2 | g_INT_006232f0
    MOV EBX,dword ptr [ESP + 0x24]      ; 0056f7a7
    MOV dword ptr [ESP + 0x28],EAX      ; 0056f7ab
    TEST EBX,EBX                        ; 0056f7af
    JLE 0x0056f7d0                      ; 0056f7b1
        ;   XREF to: 0056f7d0 (CONDITIONAL_JUMP)  ; LAB_0056f7d0
    SHL EBX,0x2                         ; 0056f7b3
    XOR EAX,EAX                         ; 0056f7b6
    ADD EAX,0x4                         ; 0056f7b8
        ;   Label: LAB_0056f7b8
    MOV EDX,dword ptr [EAX + 0x2c80694] ; 0056f7bb
    MOV dword ptr [ESP + EAX*0x1 + -0x4],EDX ; 0056f7c1
    CMP EAX,EBX                         ; 0056f7c5
    JL 0x0056f7b8                       ; 0056f7c7
        ;   XREF to: 0056f7b8 (CONDITIONAL_JUMP)  ; LAB_0056f7b8
    LEA EAX,[EAX]                       ; 0056f7c9
    NOP                                 ; 0056f7cf
    FILD dword ptr [0x02c80668]         ; 0056f7d0 | g_INT_02c80668
        ;   Label: LAB_0056f7d0
    FILD dword ptr [0x006232f0]         ; 0056f7d6 | g_INT_006232f0
    FDIVP                               ; 0056f7dc
    MOV EBX,0x2c745ec                   ; 0056f7de
    LEA ESI,[EBX + 0x4700]              ; 0056f7e3
    FSTP float ptr [ESP + 0x2c]         ; 0056f7e9
    PUSH dword ptr [ESP + 0x2c]         ; 0056f7ed
        ;   Label: LAB_0056f7ed
    PUSH EBX                            ; 0056f7f1
    CALL sound_sndmain.cpp_CSfxSlot_compute_FUN_00570f30 ; 0056f7f2
        ;   XREF to: 00570f30 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSlot_compute_FUN_00570f30(CSfxSlot * this_ptr, float delta_time)
    ADD EBX,0x11c                       ; 0056f7f7
    ADD ESP,0x8                         ; 0056f7fd
    CMP EBX,ESI                         ; 0056f800
    JNZ 0x0056f7ed                      ; 0056f802
        ;   XREF to: 0056f7ed (CONDITIONAL_JUMP)  ; LAB_0056f7ed
    MOV EBX,0x2c745ec                   ; 0056f804
    LEA EBP,[EBX + 0x4700]              ; 0056f809
    SUB ESP,0x2c                        ; 0056f80f
        ;   Label: LAB_0056f80f
    MOV EDI,ESP                         ; 0056f812
    MOV ECX,0xb                         ; 0056f814
    LEA ESI,[ESP + 0x2c]                ; 0056f819
    PUSH EBX                            ; 0056f81d
    MOVSD.REP ES:EDI,ESI                ; 0056f81e
    CALL sound_sndmain.cpp_CSfxSlot_mix_FUN_00571420 ; 0056f820
        ;   XREF to: 00571420 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSlot_mix_FUN_00571420(CSfxSlot * this_ptr, SMixBuffer mix_buffer)
    ADD EBX,0x11c                       ; 0056f825
    ADD ESP,0x30                        ; 0056f82b
    CMP EBX,EBP                         ; 0056f82e
    JNZ 0x0056f80f                      ; 0056f830
        ;   XREF to: 0056f80f (CONDITIONAL_JUMP)  ; LAB_0056f80f
    MOV EAX,[0x02c80668]                ; 0056f832 | g_INT_02c80668
    MOV EDI,dword ptr [0x02c80708]      ; 0056f837 | g_INT_02c80708
    XOR ESI,ESI                         ; 0056f83d
    MOV [0x02c80660],EAX                ; 0056f83f | g_INT_02c80660
    INC EDI                             ; 0056f844
    MOV dword ptr [0x02c80664],ESI      ; 0056f845 | g_INT_02c80664
    MOV dword ptr [0x02c80708],EDI      ; 0056f84b | g_INT_02c80708
    ADD ESP,0x30                        ; 0056f851
    POP EBP                             ; 0056f854
    POP EDI                             ; 0056f855
    POP ESI                             ; 0056f856
    POP EBX                             ; 0056f857
    RET                                 ; 0056f858
    MOV ECX,0x5f3181                    ; 0056f859
        ;   Label: LAB_0056f859
    MOV EBX,0x593                       ; 0056f85e
    PUSH 0x5f3196                       ; 0056f863
    MOV dword ptr [0x01d1d400],ECX      ; 0056f868 | g_CHAR_PTR_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 0056f86e | g_INT_01d1d404
    CALL core_main.c_displayErrorAndQuit_FUN_005030e0 ; 0056f874
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_005030e0(char * format)
    ADD ESP,0x4                         ; 0056f879
    JMP 0x0056f6e4                      ; 0056f87c
        ;   XREF to: 0056f6e4 (UNCONDITIONAL_JUMP)  ; LAB_0056f6e4

