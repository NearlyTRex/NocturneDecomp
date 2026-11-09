; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_CSfxSlot_kill_FUN_0054f700(CSfxSlot *this_ptr)
;
; Parameters:
; CSfxSlot *       Stack[0x4]:4   this_ptr
;
; XREF[11]:
;   sound_sndmain.cpp_CSfxSlot_compute_FUN_0054e8c0 at 0054eba3
;   sound_sndmain.cpp_FUN_0054d3a0 at 0054d42b
;   sound_sndmain.cpp_FUN_0054ddf0 at 0054e0a8
;   sound_sndmain.cpp_FUN_0054edb0 at 0054eef5
;   sound_sndmain.cpp_FUN_0054f8a0 at 0054f919
;   sound_sndmain.cpp_FUN_005506b0 at 0055092b
;   sound_sndmain.cpp_FUN_005510d0 at 005510e3
;   sound_sndmain.cpp_FUN_00551220 at 00551277
;   sound_sndmain.cpp_FUN_005518e0 at 00551923
;   sound_sndmain.cpp_FUN_00553380 at 00553534
;   ... and 1 more
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005e8762
;   TerminatedCString s_SfxSlot_kill_must_be_loc_005e8777
;   TerminatedCString s_NULLsamplePtr_005e8797
;   TerminatedCString s_Killing_sfx_s_005e87a7
;   TerminatedCString s_sound_sndmain_cpp_005e87b7
;   TerminatedCString s_SfxSlot_kill_ref_count_o_005e87cc
;   TerminatedCString s_sound_sndmain_cpp_005e87f6
;   TerminatedCString s_refCount_for_streaming_S_005e880b
;   TerminatedCString s_sound_sndmain_cpp_005e882d
;   TerminatedCString s_streaming_sample_sfx_ind_005e8842
;   CConsole* g_CConsolePtr = 007c158c
;   CConsole g_CConsoleInstance
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_02648e80
;   ... and 1 more
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   engine_console.cpp_FUN_00436710
;   sound_sndmain.cpp_CSfxSample_freeMemory_FUN_0054d9b0
;   sound_sndmain.cpp_FUN_0054b960
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054f700
        ;   Label: sound_sndmain.cpp_CSfxSlot_kill_FUN_0054f700
    PUSH ESI                            ; 0054f701
    PUSH EBP                            ; 0054f702
    MOV EBX,dword ptr [ESP + 0x10]      ; 0054f703
    CMP dword ptr [0x0264901c],0x0      ; 0054f707 | DAT_0264901c
    JLE 0x0054f842                      ; 0054f70e
        ;   XREF to: 0054f842 (CONDITIONAL_JUMP)  ; LAB_0054f842
    CMP dword ptr [EBX + 0x108],0x0     ; 0054f714
        ;   Label: LAB_0054f714
    JZ 0x0054f73f                       ; 0054f71b
        ;   XREF to: 0054f73f (CONDITIONAL_JUMP)  ; LAB_0054f73f
    MOV EBP,dword ptr [EBX + 0x68]      ; 0054f71d
    MOV EDX,0x5e8797                    ; 0054f720 | = "[NULLsamplePtr]"
    TEST EBP,EBP                        ; 0054f725
    JZ 0x0054f72b                       ; 0054f727
        ;   XREF to: 0054f72b (CONDITIONAL_JUMP)  ; LAB_0054f72b
    MOV EDX,EBP                         ; 0054f729
    PUSH EDX                            ; 0054f72b | = "[NULLsamplePtr]"
        ;   Label: LAB_0054f72b
    PUSH 0x5e87a7                       ; 0054f72c | = "Killing sfx %s\n"
    MOV EAX,[0x00609ed0]                ; 0054f731 | g_CConsolePtr
    PUSH EAX                            ; 0054f736 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 0054f737
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    ADD ESP,0xc                         ; 0054f73c
    CMP dword ptr [EBX + 0x60],0x0      ; 0054f73f
        ;   Label: LAB_0054f73f
    JZ 0x0054f760                       ; 0054f743
        ;   XREF to: 0054f760 (CONDITIONAL_JUMP)  ; LAB_0054f760
    MOV ECX,dword ptr [0x02648e80]      ; 0054f745 | DAT_02648e80
    TEST ECX,ECX                        ; 0054f74b
    JZ 0x0054f759                       ; 0054f74d
        ;   XREF to: 0054f759 (CONDITIONAL_JUMP)  ; LAB_0054f759
    PUSH EBX                            ; 0054f74f
    MOV EAX,dword ptr [ECX]             ; 0054f750
    PUSH ECX                            ; 0054f752
    CALL dword ptr [EAX + 0x50]         ; 0054f753
    ADD ESP,0x8                         ; 0054f756
    MOV dword ptr [EBX + 0x60],0x0      ; 0054f759
        ;   Label: LAB_0054f759
    MOV dword ptr [EBX + 0x108],0x0     ; 0054f760
        ;   Label: LAB_0054f760
    MOV ESI,dword ptr [EBX + 0x68]      ; 0054f76a
    MOV dword ptr [EBX + 0x64],0x0      ; 0054f76d
    TEST ESI,ESI                        ; 0054f774
    JZ 0x0054f834                       ; 0054f776
        ;   XREF to: 0054f834 (CONDITIONAL_JUMP)  ; LAB_0054f834
    CMP dword ptr [ESI + 0x154],0x1     ; 0054f77c
    JL 0x0054f86a                       ; 0054f783
        ;   XREF to: 0054f86a (CONDITIONAL_JUMP)  ; LAB_0054f86a
    MOV EDX,dword ptr [EBX + 0x68]      ; 0054f789
        ;   Label: LAB_0054f789
    DEC dword ptr [EDX + 0x154]         ; 0054f78c
    MOV ESI,dword ptr [EBX + 0x68]      ; 0054f792
    MOV dword ptr [EBX + 0x68],0x0      ; 0054f795
    CMP dword ptr [ESI + 0x160],0x0     ; 0054f79c
    JL 0x0054f820                       ; 0054f7a3
        ;   XREF to: 0054f820 (CONDITIONAL_JUMP)  ; LAB_0054f820
    CMP dword ptr [ESI + 0x154],0x0     ; 0054f7a9
    JZ 0x0054f7d5                       ; 0054f7b0
        ;   XREF to: 0054f7d5 (CONDITIONAL_JUMP)  ; LAB_0054f7d5
    PUSH ESI                            ; 0054f7b2
    MOV EAX,0x5e87f6                    ; 0054f7b3 | = "..\\sound\\sndmain.cpp"
    MOV EDX,0xcd1                       ; 0054f7b8
    PUSH 0x5e880b                       ; 0054f7bd | = "refCount for streaming Sfx %s > 1"
    MOV [0x01d046a0],EAX                ; 0054f7c2 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 0054f7c7 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0054f7cd
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 0054f7d2
    MOV EDX,EBX                         ; 0054f7d5
        ;   Label: LAB_0054f7d5
    SUB EDX,0x263cf1c                   ; 0054f7d7
    MOV ECX,0x11c                       ; 0054f7dd
    MOV EAX,EDX                         ; 0054f7e2
    SAR EDX,0x1f                        ; 0054f7e4
    IDIV ECX                            ; 0054f7e7
    CMP EAX,dword ptr [ESI + 0x160]     ; 0054f7e9
    JZ 0x0054f817                       ; 0054f7ef
        ;   XREF to: 0054f817 (CONDITIONAL_JUMP)  ; LAB_0054f817
    PUSH EDI                            ; 0054f7f1
    PUSH ESI                            ; 0054f7f2
    MOV EDI,0x5e882d                    ; 0054f7f3 | = "..\\sound\\sndmain.cpp"
    MOV EBP,0xcd2                       ; 0054f7f8
    PUSH 0x5e8842                       ; 0054f7fd | = "streaming sample sfx index mismatch o..."
    MOV dword ptr [0x01d046a0],EDI      ; 0054f802 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBP      ; 0054f808 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0054f80e
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 0054f813
    POP EDI                             ; 0054f816
    PUSH ESI                            ; 0054f817
        ;   Label: LAB_0054f817
    CALL sound_sndmain.cpp_CSfxSample_freeMemory_FUN_0054d9b0 ; 0054f818
        ;   XREF to: 0054d9b0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_freeMemory_FUN_0054d9b0(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 0054f81d
    PUSH 0x0                            ; 0054f820
        ;   Label: LAB_0054f820
    CALL sound_sndmain.cpp_FUN_0054b960 ; 0054f822
        ;   XREF to: 0054b960 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_0054b960(int requested_bytes)
    ADD ESP,0x4                         ; 0054f827
    MOV dword ptr [ESI + 0x160],0xffffffff ; 0054f82a
    MOV dword ptr [EBX + 0x118],0x0     ; 0054f834
        ;   Label: LAB_0054f834
    POP EBP                             ; 0054f83e
    POP ESI                             ; 0054f83f
    POP EBX                             ; 0054f840
    RET                                 ; 0054f841
    MOV ECX,0x5e8762                    ; 0054f842 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_0054f842
    MOV ESI,0xca3                       ; 0054f847
    PUSH 0x5e8777                       ; 0054f84c | = "SfxSlot::kill - must be locked!"
    MOV dword ptr [0x01d046a0],ECX      ; 0054f851 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 0054f857 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0054f85d
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0054f862
    JMP 0x0054f714                      ; 0054f865
        ;   XREF to: 0054f714 (UNCONDITIONAL_JUMP)  ; LAB_0054f714
    MOV EBP,0x5e87b7                    ; 0054f86a | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_0054f86a
    MOV EAX,0xcc2                       ; 0054f86f
    PUSH 0x5e87cc                       ; 0054f874 | = "SfxSlot::kill - ref count out of bala..."
    MOV dword ptr [0x01d046a0],EBP      ; 0054f879 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 0054f87f | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0054f884
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0054f889
    JMP 0x0054f789                      ; 0054f88c
        ;   XREF to: 0054f789 (UNCONDITIONAL_JUMP)  ; LAB_0054f789

