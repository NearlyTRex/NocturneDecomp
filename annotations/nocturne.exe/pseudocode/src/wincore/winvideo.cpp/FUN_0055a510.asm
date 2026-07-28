; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 wincore_winvideo_cpp_FUN_0055a510(undefined4 param_1,undefined4 param_2)
;
; Local Variables:
; undefined        Stack[-0x1f8]:1  local_1f8
; undefined        Stack[-0xf4]:1  local_f4
; undefined1       Stack[-0xf3]:1  local_f3
; undefined1       Stack[-0xf2]:1  local_f2
; undefined1       Stack[-0xf1]:1  local_f1
; undefined1       Stack[-0xf0]:1  local_f0
; undefined1       Stack[-0xef]:1  local_ef
; undefined1       Stack[-0xee]:1  local_ee
; undefined        Stack[-0x74]:1  local_74
; undefined        Stack[-0x24]:1  local_24
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined        Stack[-0x14]:1  local_14
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   core_main.c_FUN_004c85f0 at 004c8bb2
;
; Referenced Globals:
;   void* PTR_mciGetErrorStringA_005753dc = 00175800
;   void* PTR_mciSendStringA_005753e0 = 00175816
;   void* PTR_GetClientRect_0057542c = 0017595c
;   void* PTR_MessageBoxA_0057544c = 001759e0
;   void* PTR_MoveWindow_00575450 = 001759ee
;   void* PTR_SetRectEmpty_00575478 = 00175a92
;   void* PTR_GetCurrentProcess_005754f8 = 00175cbe
;   void* PTR_SetThreadPriority_005755b0 = 00176034
;   void* PTR_Sleep_005755b8 = 00176066
;   TerminatedCString s_where_mov_source_0059817e
;   TerminatedCString s_open_s_alias_mov_style_c_00598199
;   TerminatedCString s_status_mov_window_handle_005981c3
;   TerminatedCString s_Unable_to_open_AVI_005981dc
;   TerminatedCString s_play_mov_fullscreen_noti_005981f1
;   TerminatedCString s_play_mov_window_notify_0059820c
;   ... and 8 more
;
; Called Functions:
;   crt_stdio.c_fclose_FUN_00563380
;   crt_stdio.c_fopen_FUN_0056568c
;   crt_stdio.c_sprintf_FUN_00563c90
;   crt_stdlib.c_atoi_FUN_00566f30
;   engine_2d.c_clearInputAndWait_FUN_00403f50
;   engine_special.cpp_clearScreen_FUN_0052ee70
;   GetClientRect
;   GetCurrentProcess
;   mciGetErrorStringA
;   mciSendStringA
;   MessageBoxA
;   MoveWindow
;   SetRectEmpty
;   SetThreadPriority
;   Sleep
;   ... and 4 more
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0055a510
        ;   Label: wincore_winvideo.cpp_FUN_0055a510
    SUB ESP,0x1f4                       ; 0055a511
    MOV EDX,dword ptr [ESP + 0x200]     ; 0055a517
    PUSH EDX                            ; 0055a51e
    MOV ECX,dword ptr [ESP + 0x200]     ; 0055a51f
    PUSH ECX                            ; 0055a526
    PUSH 0x59822d                       ; 0055a527 | = "%s\\%s"
    LEA EAX,[ESP + 0x190]               ; 0055a52c
    PUSH EAX                            ; 0055a533
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0055a534
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x10                        ; 0055a539
    PUSH 0x598233                       ; 0055a53c | = "rb"
    LEA EAX,[ESP + 0x188]               ; 0055a541
    PUSH EAX                            ; 0055a548
    CALL crt_stdio.c_fopen_FUN_0056568c ; 0055a549
        ;   XREF to: 0056568c (UNCONDITIONAL_CALL)  ; _FILE * crt_stdio.c_fopen_FUN_0056568c(char * filename, char * mode)
    ADD ESP,0x8                         ; 0055a54e
    TEST EAX,EAX                        ; 0055a551
    JNZ 0x0055a55d                      ; 0055a553
        ;   XREF to: 0055a55d (CONDITIONAL_JUMP)  ; LAB_0055a55d
    ADD ESP,0x1f4                       ; 0055a555
    POP EBP                             ; 0055a55b
    RET                                 ; 0055a55c
    PUSH EDI                            ; 0055a55d
        ;   Label: LAB_0055a55d
    PUSH ESI                            ; 0055a55e
    PUSH EBX                            ; 0055a55f
    PUSH EAX                            ; 0055a560
    CALL crt_stdio.c_fclose_FUN_00563380 ; 0055a561
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fclose_FUN_00563380(_FILE * file_handle)
    ADD ESP,0x4                         ; 0055a566
    LEA ESI,[ESP + 0x190]               ; 0055a569
    CALL engine_special.cpp_clearScreen_FUN_0052ee70 ; 0055a570
        ;   XREF to: 0052ee70 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_0052ee70()
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_00553910 ; 0055a575
        ;   XREF to: 00553910 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_00553910()
    MOV EDI,dword ptr [0x02de3124]      ; 0055a57a | DAT_02de3124
    MOV EBX,dword ptr [0x02de2098]      ; 0055a580 | DAT_02de2098
    TEST EDI,EDI                        ; 0055a586
    JZ 0x0055a593                       ; 0055a588
        ;   XREF to: 0055a593 (CONDITIONAL_JUMP)  ; LAB_0055a593
    PUSH EBX                            ; 0055a58a
    CALL wincore_winvideo.cpp_closeMovie_FUN_0055a1c0 ; 0055a58b
        ;   XREF to: 0055a1c0 (UNCONDITIONAL_CALL)  ; void wincore_winvideo.cpp_closeMovie_FUN_0055a1c0(HWND window_handle)
    ADD ESP,0x4                         ; 0055a590
    PUSH EBX                            ; 0055a593
        ;   Label: LAB_0055a593
    PUSH ESI                            ; 0055a594
    PUSH 0x598199                       ; 0055a595 | = "open \"%s\" alias mov style child par..."
    LEA EAX,[ESP + 0x18]                ; 0055a59a
    PUSH EAX                            ; 0055a59e
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0055a59f
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x10                        ; 0055a5a4
    PUSH 0x0                            ; 0055a5a7
    PUSH 0x0                            ; 0055a5a9
    PUSH 0x0                            ; 0055a5ab
    LEA EAX,[ESP + 0x18]                ; 0055a5ad
    PUSH EAX                            ; 0055a5b1
    CALL dword ptr CS:[0x5753e0]        ; 0055a5b2 | PTR_mciSendStringA_005753e0
    TEST EAX,EAX                        ; 0055a5b9
    JNZ 0x0055a83e                      ; 0055a5bb
        ;   XREF to: 0055a83e (CONDITIONAL_JUMP)  ; LAB_0055a83e
    PUSH 0x0                            ; 0055a5c1
    MOV EAX,0x1                         ; 0055a5c3
    PUSH 0x104                          ; 0055a5c8
    MOV [0x02de3124],EAX                ; 0055a5cd | DAT_02de3124
    LEA EAX,[ESP + 0x14]                ; 0055a5d2
    PUSH EAX                            ; 0055a5d6
    PUSH 0x5981c3                       ; 0055a5d7 | = "status mov window handle"
    CALL dword ptr CS:[0x5753e0]        ; 0055a5dc | PTR_mciSendStringA_005753e0
    TEST EAX,EAX                        ; 0055a5e3
    JNZ 0x0055a678                      ; 0055a5e5
        ;   XREF to: 0055a678 (CONDITIONAL_JUMP)  ; LAB_0055a678
    LEA EAX,[ESP + 0xc]                 ; 0055a5eb
    PUSH EAX                            ; 0055a5ef
    CALL crt_stdlib.c_atoi_FUN_00566f30 ; 0055a5f0
        ;   XREF to: 00566f30 (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_atoi_FUN_00566f30(char * string_ptr)
    ADD ESP,0x4                         ; 0055a5f5
    MOV [0x02de311c],EAX                ; 0055a5f8 | DAT_02de311c
    CMP dword ptr [0x02de312c],0x0      ; 0055a5fd | DAT_02de312c
        ;   Label: LAB_0055a5fd
    JNZ 0x0055a7a7                      ; 0055a604
        ;   XREF to: 0055a7a7 (CONDITIONAL_JUMP)  ; LAB_0055a7a7
    CMP dword ptr [0x02de3124],0x0      ; 0055a60a | DAT_02de3124
    JZ 0x0055a7a7                       ; 0055a611
        ;   XREF to: 0055a7a7 (CONDITIONAL_JUMP)  ; LAB_0055a7a7
    LEA EAX,[ESP + 0x1f0]               ; 0055a617
    PUSH EAX                            ; 0055a61e
    PUSH EBX                            ; 0055a61f
    CALL dword ptr CS:[0x57542c]        ; 0055a620 | PTR_GetClientRect_0057542c
    PUSH 0x0                            ; 0055a627
    PUSH 0x80                           ; 0055a629
    LEA EAX,[ESP + 0x118]               ; 0055a62e
    PUSH EAX                            ; 0055a635
    PUSH 0x59817e                       ; 0055a636 | = "where mov source"
    CALL dword ptr CS:[0x5753e0]        ; 0055a63b | PTR_mciSendStringA_005753e0
    LEA EAX,[ESP + 0x1e0]               ; 0055a642
    PUSH EAX                            ; 0055a649
    CALL dword ptr CS:[0x575478]        ; 0055a64a | PTR_SetRectEmpty_00575478
    MOV DL,byte ptr [ESP + 0x110]       ; 0055a651
    LEA EAX,[ESP + 0x110]               ; 0055a658
    CMP DL,0x20                         ; 0055a65f
    JNZ 0x0055a670                      ; 0055a662
        ;   XREF to: 0055a670 (CONDITIONAL_JUMP)  ; LAB_0055a670
    MOV DH,byte ptr [EAX + 0x1]         ; 0055a664
        ;   Label: LAB_0055a664
    INC EAX                             ; 0055a667
    CMP DH,0x20                         ; 0055a668
    JZ 0x0055a664                       ; 0055a66b
        ;   XREF to: 0055a664 (CONDITIONAL_JUMP)  ; LAB_0055a664
    LEA EAX,[EAX]                       ; 0055a66d
    CMP byte ptr [EAX],0x20             ; 0055a670
        ;   Label: LAB_0055a670
    JZ 0x0055a6a0                       ; 0055a673
        ;   XREF to: 0055a6a0 (CONDITIONAL_JUMP)  ; LAB_0055a6a0
    INC EAX                             ; 0055a675
    JMP 0x0055a670                      ; 0055a676
        ;   XREF to: 0055a670 (UNCONDITIONAL_JUMP)  ; LAB_0055a670
    PUSH 0x104                          ; 0055a678
        ;   Label: LAB_0055a678
    LEA EDX,[ESP + 0x10]                ; 0055a67d
    PUSH EDX                            ; 0055a681
    PUSH EAX                            ; 0055a682
    CALL dword ptr CS:[0x5753dc]        ; 0055a683 | PTR_mciGetErrorStringA_005753dc
    PUSH 0x30                           ; 0055a68a
    PUSH 0x0                            ; 0055a68c
    LEA EAX,[ESP + 0x14]                ; 0055a68e
    PUSH EAX                            ; 0055a692
    PUSH EBX                            ; 0055a693
    CALL dword ptr CS:[0x57544c]        ; 0055a694 | PTR_MessageBoxA_0057544c
    JMP 0x0055a5fd                      ; 0055a69b
        ;   XREF to: 0055a5fd (UNCONDITIONAL_JUMP)  ; LAB_0055a5fd
    CMP byte ptr [EAX],0x20             ; 0055a6a0
        ;   Label: LAB_0055a6a0
    JNZ 0x0055a6a8                      ; 0055a6a3
        ;   XREF to: 0055a6a8 (CONDITIONAL_JUMP)  ; LAB_0055a6a8
    INC EAX                             ; 0055a6a5
    JMP 0x0055a6a0                      ; 0055a6a6
        ;   XREF to: 0055a6a0 (UNCONDITIONAL_JUMP)  ; LAB_0055a6a0
    CMP byte ptr [EAX],0x20             ; 0055a6a8
        ;   Label: LAB_0055a6a8
    JZ 0x0055a6b0                       ; 0055a6ab
        ;   XREF to: 0055a6b0 (CONDITIONAL_JUMP)  ; LAB_0055a6b0
    INC EAX                             ; 0055a6ad
    JMP 0x0055a6a8                      ; 0055a6ae
        ;   XREF to: 0055a6a8 (UNCONDITIONAL_JUMP)  ; LAB_0055a6a8
    CMP byte ptr [EAX],0x20             ; 0055a6b0
        ;   Label: LAB_0055a6b0
    JNZ 0x0055a6d1                      ; 0055a6b3
        ;   XREF to: 0055a6d1 (CONDITIONAL_JUMP)  ; LAB_0055a6d1
    INC EAX                             ; 0055a6b5
    JMP 0x0055a6b0                      ; 0055a6b6
        ;   XREF to: 0055a6b0 (UNCONDITIONAL_JUMP)  ; LAB_0055a6b0
    IMUL ECX,dword ptr [ESP + 0x1e8],0xa ; 0055a6b8
        ;   Label: LAB_0055a6b8
    XOR EDX,EDX                         ; 0055a6c0
    MOV DL,byte ptr [EAX]               ; 0055a6c2
    SUB EDX,0x30                        ; 0055a6c4
    ADD ECX,EDX                         ; 0055a6c7
    INC EAX                             ; 0055a6c9
    MOV dword ptr [ESP + 0x1e8],ECX     ; 0055a6ca
    MOV DL,byte ptr [EAX]               ; 0055a6d1
        ;   Label: LAB_0055a6d1
    CMP DL,0x30                         ; 0055a6d3
    JNC 0x0055a6e0                      ; 0055a6d6
        ;   XREF to: 0055a6e0 (CONDITIONAL_JUMP)  ; LAB_0055a6e0
    CMP byte ptr [EAX],0x20             ; 0055a6d8
        ;   Label: LAB_0055a6d8
    JNZ 0x0055a700                      ; 0055a6db
        ;   XREF to: 0055a700 (CONDITIONAL_JUMP)  ; LAB_0055a700
    INC EAX                             ; 0055a6dd
    JMP 0x0055a6d8                      ; 0055a6de
        ;   XREF to: 0055a6d8 (UNCONDITIONAL_JUMP)  ; LAB_0055a6d8
    CMP DL,0x39                         ; 0055a6e0
        ;   Label: LAB_0055a6e0
    JBE 0x0055a6b8                      ; 0055a6e3
        ;   XREF to: 0055a6b8 (CONDITIONAL_JUMP)  ; LAB_0055a6b8
    JMP 0x0055a6d8                      ; 0055a6e5
        ;   XREF to: 0055a6d8 (UNCONDITIONAL_JUMP)  ; LAB_0055a6d8
    IMUL ECX,dword ptr [ESP + 0x1ec],0xa ; 0055a6e7
        ;   Label: LAB_0055a6e7
    XOR EDX,EDX                         ; 0055a6ef
    MOV DL,BH                           ; 0055a6f1
    SUB EDX,0x30                        ; 0055a6f3
    ADD ECX,EDX                         ; 0055a6f6
    INC EAX                             ; 0055a6f8
    MOV dword ptr [ESP + 0x1ec],ECX     ; 0055a6f9
    MOV BH,byte ptr [EAX]               ; 0055a700
        ;   Label: LAB_0055a700
    CMP BH,0x30                         ; 0055a702
    JC 0x0055a70c                       ; 0055a705
        ;   XREF to: 0055a70c (CONDITIONAL_JUMP)  ; LAB_0055a70c
    CMP BH,0x39                         ; 0055a707
    JBE 0x0055a6e7                      ; 0055a70a
        ;   XREF to: 0055a6e7 (CONDITIONAL_JUMP)  ; LAB_0055a6e7
    CMP dword ptr [ESP + 0x1f8],0x190   ; 0055a70c
        ;   Label: LAB_0055a70c
    JLE 0x0055a828                      ; 0055a717
        ;   XREF to: 0055a828 (CONDITIONAL_JUMP)  ; LAB_0055a828
    MOV EAX,dword ptr [ESP + 0x1e8]     ; 0055a71d
        ;   Label: LAB_0055a71d
    MOV EBP,dword ptr [ESP + 0x1ec]     ; 0055a724
    ADD EAX,EAX                         ; 0055a72b
    ADD EBP,EBP                         ; 0055a72d
    MOV dword ptr [ESP + 0x1e8],EAX     ; 0055a72f
    MOV dword ptr [ESP + 0x1ec],EBP     ; 0055a736
    MOV EAX,dword ptr [ESP + 0x1f8]     ; 0055a73d
        ;   Label: LAB_0055a73d
    MOV EDX,EAX                         ; 0055a744
    SAR EDX,0x1f                        ; 0055a746
    SUB EAX,EDX                         ; 0055a749
    SAR EAX,0x1                         ; 0055a74b
    MOV EBX,EAX                         ; 0055a74d
    MOV EAX,dword ptr [ESP + 0x1e8]     ; 0055a74f
    MOV EDX,EAX                         ; 0055a756
    SAR EDX,0x1f                        ; 0055a758
    SUB EAX,EDX                         ; 0055a75b
    SAR EAX,0x1                         ; 0055a75d
    SUB EBX,EAX                         ; 0055a75f
    MOV EAX,dword ptr [ESP + 0x1fc]     ; 0055a761
    MOV EDX,EAX                         ; 0055a768
    SAR EDX,0x1f                        ; 0055a76a
    SUB EAX,EDX                         ; 0055a76d
    SAR EAX,0x1                         ; 0055a76f
    MOV ECX,EAX                         ; 0055a771
    MOV EAX,dword ptr [ESP + 0x1ec]     ; 0055a773
    MOV EDX,EAX                         ; 0055a77a
    SAR EDX,0x1f                        ; 0055a77c
    SUB EAX,EDX                         ; 0055a77f
    SAR EAX,0x1                         ; 0055a781
    PUSH 0x1                            ; 0055a783
    MOV EDX,dword ptr [ESP + 0x1f0]     ; 0055a785
    PUSH EDX                            ; 0055a78c
    MOV ESI,dword ptr [ESP + 0x1f0]     ; 0055a78d
    PUSH ESI                            ; 0055a794
    SUB ECX,EAX                         ; 0055a795
    PUSH ECX                            ; 0055a797
    PUSH EBX                            ; 0055a798
    MOV EDI,dword ptr [0x02de311c]      ; 0055a799 | DAT_02de311c
    PUSH EDI                            ; 0055a79f
    CALL dword ptr CS:[0x575450]        ; 0055a7a0 | PTR_MoveWindow_00575450
    MOV ECX,dword ptr [0x02de3120]      ; 0055a7a7 | DAT_02de3120
        ;   Label: LAB_0055a7a7
    MOV EAX,[0x02de2098]                ; 0055a7ad | DAT_02de2098
    TEST ECX,ECX                        ; 0055a7b2
    SETZ DL                             ; 0055a7b4
    AND EDX,0xff                        ; 0055a7b7
    MOV dword ptr [0x02de3120],EDX      ; 0055a7bd | DAT_02de3120
    TEST EDX,EDX                        ; 0055a7c3
    JZ 0x0055a85c                       ; 0055a7c5
        ;   XREF to: 0055a85c (CONDITIONAL_JUMP)  ; LAB_0055a85c
    MOV ESI,dword ptr [0x02de312c]      ; 0055a7cb | DAT_02de312c
    TEST ESI,ESI                        ; 0055a7d1
    JZ 0x0055a86c                       ; 0055a7d3
        ;   XREF to: 0055a86c (CONDITIONAL_JUMP)  ; LAB_0055a86c
    PUSH EAX                            ; 0055a7d9
    PUSH 0x0                            ; 0055a7da
    PUSH 0x0                            ; 0055a7dc
    PUSH 0x5981f1                       ; 0055a7de | = "play mov fullscreen notify"
    CALL dword ptr CS:[0x5753e0]        ; 0055a7e3 | PTR_mciSendStringA_005753e0
        ;   Label: LAB_0055a7e3
    CALL dword ptr CS:[0x5754f8]        ; 0055a7ea | PTR_GetCurrentProcess_005754f8
    PUSH -0xf                           ; 0055a7f1
    PUSH EAX                            ; 0055a7f3
    MOV EBX,EAX                         ; 0055a7f4
    CALL dword ptr CS:[0x5755b0]        ; 0055a7f6 | PTR_SetThreadPriority_005755b0
    XOR ESI,ESI                         ; 0055a7fd
    CALL wincore_winrun.cpp_processWindowMessages_FUN_005591c0 ; 0055a7ff
        ;   XREF to: 005591c0 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_processWindowMessages_FUN_005591c0()
        ;   Label: LAB_0055a7ff
    CMP ESI,dword ptr [0x02de3120]      ; 0055a804 | DAT_02de3120
    JZ 0x0055a879                       ; 0055a80a
        ;   XREF to: 0055a879 (CONDITIONAL_JUMP)  ; LAB_0055a879
    CALL wincore_winrun.cpp_wasKeyPressed_FUN_00558b70 ; 0055a80c
        ;   XREF to: 00558b70 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_wasKeyPressed_FUN_00558b70()
    TEST EAX,EAX                        ; 0055a811
    JNZ 0x0055a879                      ; 0055a813
        ;   XREF to: 0055a879 (CONDITIONAL_JUMP)  ; LAB_0055a879
    CMP ESI,dword ptr [0x02de3124]      ; 0055a815 | DAT_02de3124
    JZ 0x0055a879                       ; 0055a81b
        ;   XREF to: 0055a879 (CONDITIONAL_JUMP)  ; LAB_0055a879
    PUSH 0x14                           ; 0055a81d
    CALL dword ptr CS:[0x5755b8]        ; 0055a81f | PTR_Sleep_005755b8
    JMP 0x0055a7ff                      ; 0055a826
        ;   XREF to: 0055a7ff (UNCONDITIONAL_JUMP)  ; LAB_0055a7ff
    CMP dword ptr [ESP + 0x1fc],0x12c   ; 0055a828
        ;   Label: LAB_0055a828
    JG 0x0055a71d                       ; 0055a833
        ;   XREF to: 0055a71d (CONDITIONAL_JUMP)  ; LAB_0055a71d
    JMP 0x0055a73d                      ; 0055a839
        ;   XREF to: 0055a73d (UNCONDITIONAL_JUMP)  ; LAB_0055a73d
    PUSH 0x30                           ; 0055a83e
        ;   Label: LAB_0055a83e
    PUSH 0x0                            ; 0055a840
    PUSH 0x5981dc                       ; 0055a842 | = "Unable to open .AVI!"
    PUSH EBX                            ; 0055a847
    XOR EBP,EBP                         ; 0055a848
    CALL dword ptr CS:[0x57544c]        ; 0055a84a | PTR_MessageBoxA_0057544c
    MOV dword ptr [0x02de3124],EBP      ; 0055a851 | DAT_02de3124
    JMP 0x0055a7a7                      ; 0055a857
        ;   XREF to: 0055a7a7 (UNCONDITIONAL_JUMP)  ; LAB_0055a7a7
    PUSH 0x0                            ; 0055a85c
        ;   Label: LAB_0055a85c
    PUSH 0x0                            ; 0055a85e
    PUSH 0x0                            ; 0055a860
    PUSH 0x598223                       ; 0055a862 | = "pause mov"
    JMP 0x0055a7e3                      ; 0055a867
        ;   XREF to: 0055a7e3 (UNCONDITIONAL_JUMP)  ; LAB_0055a7e3
    PUSH EAX                            ; 0055a86c
        ;   Label: LAB_0055a86c
    PUSH ESI                            ; 0055a86d
    PUSH ESI                            ; 0055a86e
    PUSH 0x59820c                       ; 0055a86f | = "play mov window notify"
    JMP 0x0055a7e3                      ; 0055a874
        ;   XREF to: 0055a7e3 (UNCONDITIONAL_JUMP)  ; LAB_0055a7e3
    PUSH 0x1                            ; 0055a879
        ;   Label: LAB_0055a879
    PUSH EBX                            ; 0055a87b
    CALL dword ptr CS:[0x5755b0]        ; 0055a87c | PTR_SetThreadPriority_005755b0
    MOV EAX,[0x02de2098]                ; 0055a883 | DAT_02de2098
    PUSH EAX                            ; 0055a888
    CALL wincore_winvideo.cpp_closeMovie_FUN_0055a1c0 ; 0055a889
        ;   XREF to: 0055a1c0 (UNCONDITIONAL_CALL)  ; void wincore_winvideo.cpp_closeMovie_FUN_0055a1c0(HWND window_handle)
    ADD ESP,0x4                         ; 0055a88e
    CALL engine_special.cpp_clearScreen_FUN_0052ee70 ; 0055a891
        ;   XREF to: 0052ee70 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_0052ee70()
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_00553910 ; 0055a896
        ;   XREF to: 00553910 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_00553910()
    CALL engine_2d.c_clearInputAndWait_FUN_00403f50 ; 0055a89b
        ;   XREF to: 00403f50 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403f50()
    MOV EAX,0x1                         ; 0055a8a0
    POP EBX                             ; 0055a8a5
    POP ESI                             ; 0055a8a6
    POP EDI                             ; 0055a8a7
    ADD ESP,0x1f4                       ; 0055a8a8
    POP EBP                             ; 0055a8ae
    RET                                 ; 0055a8af

