; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_getSoundMemoryStats_FUN_005aa6a0(int *out_referenced_count,int *out_total_bytes_referenced,int *out_unreferenced_count,int *out_total_bytes_unreferenced,int *out_free_slots,int *out_available_memory)
;
; Parameters:
; int *            Stack[0x4]:4   out_referenced_count
; int *            Stack[0x8]:4   out_total_bytes_referenced
; int *            Stack[0xc]:4   out_unreferenced_count
; int *            Stack[0x10]:4   out_total_bytes_unreferenced
; int *            Stack[0x14]:4   out_free_slots
; int *            Stack[0x18]:4   out_available_memory
; Local Variables:
; int              Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_game.cpp_CGame_processFrame_FUN_004da100 at 004da7a2
;
; Referenced Globals:
;   int g_MaximumSoundMemoryBudget = 0x400000
;   CSfxSample[64] g_SfxSamples
;   undefined4 g_SfxSamples[0].streaming_buffer_size
;   undefined4 g_SfxSamples[1].sample_info.name[0]
;   undefined4 g_SfxSamples[1].taken
;   undefined4 g_SfxSamples[1].ref_count
;   undefined4 g_SfxSamples[1].streaming_buffer_size
;
; Called Functions:
;   sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_005a8550
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005aa6a0
        ;   Label: sound_sndmain.cpp_getSoundMemoryStats_FUN_005aa6a0
    PUSH ESI                            ; 005aa6a1
    PUSH EDI                            ; 005aa6a2
    PUSH EBP                            ; 005aa6a3
    SUB ESP,0xc                         ; 005aa6a4
    MOV EBX,0x3f6282c                   ; 005aa6a7 | g_SfxSamples
    XOR EDX,EDX                         ; 005aa6ac
    XOR EBP,EBP                         ; 005aa6ae
    XOR ESI,ESI                         ; 005aa6b0
    MOV dword ptr [ESP],EDX             ; 005aa6b2
    MOV dword ptr [ESP + 0x8],EDX       ; 005aa6b5
    MOV dword ptr [ESP + 0x4],EDX       ; 005aa6b9
    IMUL EAX,ESI,0x180                  ; 005aa6bd
        ;   Label: LAB_005aa6bd
    CMP dword ptr [EAX + 0x3f6298c],0x1 ; 005aa6c3 | g_SfxSamples[0].streaming_buffer_size | g_SfxSamples[1].streaming_buffer_size
    JGE 0x005aa74f                      ; 005aa6ca
        ;   XREF to: 005aa74f (CONDITIONAL_JUMP)  ; LAB_005aa74f
    INC ESI                             ; 005aa6d0
        ;   Label: LAB_005aa6d0
    ADD EBX,0x180                       ; 005aa6d1 | g_SfxSamples[1].sample_info.name[0]
    CMP ESI,0x40                        ; 005aa6d7
    JL 0x005aa6bd                       ; 005aa6da
        ;   XREF to: 005aa6bd (CONDITIONAL_JUMP)  ; LAB_005aa6bd
    MOV ECX,dword ptr [ESP + 0x20]      ; 005aa6dc
    TEST ECX,ECX                        ; 005aa6e0
    JZ 0x005aa6ea                       ; 005aa6e2
        ;   XREF to: 005aa6ea (CONDITIONAL_JUMP)  ; LAB_005aa6ea
    MOV EAX,dword ptr [ESP + 0x4]       ; 005aa6e4
    MOV dword ptr [ECX],EAX             ; 005aa6e8
    MOV EBX,dword ptr [ESP + 0x24]      ; 005aa6ea
        ;   Label: LAB_005aa6ea
    TEST EBX,EBX                        ; 005aa6ee
    JZ 0x005aa6f4                       ; 005aa6f0
        ;   XREF to: 005aa6f4 (CONDITIONAL_JUMP)  ; LAB_005aa6f4
    MOV dword ptr [EBX],EBP             ; 005aa6f2
    MOV ESI,dword ptr [ESP + 0x28]      ; 005aa6f4
        ;   Label: LAB_005aa6f4
    TEST ESI,ESI                        ; 005aa6f8
    JZ 0x005aa701                       ; 005aa6fa
        ;   XREF to: 005aa701 (CONDITIONAL_JUMP)  ; LAB_005aa701
    MOV EAX,dword ptr [ESP]             ; 005aa6fc
    MOV dword ptr [ESI],EAX             ; 005aa6ff
    MOV EDI,dword ptr [ESP + 0x2c]      ; 005aa701
        ;   Label: LAB_005aa701
    TEST EDI,EDI                        ; 005aa705
    JZ 0x005aa70f                       ; 005aa707
        ;   XREF to: 005aa70f (CONDITIONAL_JUMP)  ; LAB_005aa70f
    MOV EAX,dword ptr [ESP + 0x8]       ; 005aa709
    MOV dword ptr [EDI],EAX             ; 005aa70d
    CMP dword ptr [ESP + 0x30],0x0      ; 005aa70f
        ;   Label: LAB_005aa70f
    JZ 0x005aa72c                       ; 005aa714
        ;   XREF to: 005aa72c (CONDITIONAL_JUMP)  ; LAB_005aa72c
    MOV EAX,dword ptr [ESP + 0x4]       ; 005aa716
    MOV EDX,dword ptr [ESP]             ; 005aa71a
    MOV EBX,0x40                        ; 005aa71d
    ADD EAX,EDX                         ; 005aa722
    SUB EBX,EAX                         ; 005aa724
    MOV EAX,dword ptr [ESP + 0x30]      ; 005aa726
    MOV dword ptr [EAX],EBX             ; 005aa72a
    MOV ECX,dword ptr [ESP + 0x34]      ; 005aa72c
        ;   Label: LAB_005aa72c
    TEST ECX,ECX                        ; 005aa730
    JZ 0x005aa747                       ; 005aa732
        ;   XREF to: 005aa747 (CONDITIONAL_JUMP)  ; LAB_005aa747
    MOV EBX,dword ptr [ESP + 0x8]       ; 005aa734
    MOV EAX,[0x00681b44]                ; 005aa738 | g_MaximumSoundMemoryBudget
    ADD EBP,EBX                         ; 005aa73d
    SUB EAX,EBP                         ; 005aa73f
    MOV dword ptr [ECX],EAX             ; 005aa741
    TEST EAX,EAX                        ; 005aa743
    JL 0x005aa79f                       ; 005aa745
        ;   XREF to: 005aa79f (CONDITIONAL_JUMP)  ; LAB_005aa79f
    ADD ESP,0xc                         ; 005aa747
        ;   Label: LAB_005aa747
    POP EBP                             ; 005aa74a
    POP EDI                             ; 005aa74b
    POP ESI                             ; 005aa74c
    POP EBX                             ; 005aa74d
    RET                                 ; 005aa74e
    CMP dword ptr [EAX + 0x3f62980],0x0 ; 005aa74f | g_SfxSamples[1].ref_count
        ;   Label: LAB_005aa74f
    JNZ 0x005aa761                      ; 005aa756
        ;   XREF to: 005aa761 (CONDITIONAL_JUMP)  ; LAB_005aa761
    CMP dword ptr [EAX + 0x3f6297c],0x0 ; 005aa758 | g_SfxSamples[1].taken
    JZ 0x005aa77c                       ; 005aa75f
        ;   XREF to: 005aa77c (CONDITIONAL_JUMP)  ; LAB_005aa77c
    PUSH EBX                            ; 005aa761 | g_SfxSamples[1].sample_info.name[0]
        ;   Label: LAB_005aa761
    CALL sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_005a8550 ; 005aa762
        ;   XREF to: 005a8550 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_005a8550(CSfxSample * this_ptr)
    IMUL EAX,dword ptr [EBX + 0x160]    ; 005aa767 | g_SfxSamples[0].streaming_buffer_size | g_SfxSamples[1].streaming_buffer_size
    INC dword ptr [ESP + 0x8]           ; 005aa76e
    ADD ESP,0x4                         ; 005aa772
    ADD EBP,EAX                         ; 005aa775
    JMP 0x005aa6d0                      ; 005aa777
        ;   XREF to: 005aa6d0 (UNCONDITIONAL_JUMP)  ; LAB_005aa6d0
    INC dword ptr [ESP]                 ; 005aa77c
        ;   Label: LAB_005aa77c
    MOV EDI,0x3f6282c                   ; 005aa77f | g_SfxSamples
    ADD EDI,EAX                         ; 005aa784
    PUSH EDI                            ; 005aa786 | g_SfxSamples[1].sample_info.name[0]
    CALL sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_005a8550 ; 005aa787
        ;   XREF to: 005a8550 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_005a8550(CSfxSample * this_ptr)
    IMUL EAX,dword ptr [EDI + 0x160]    ; 005aa78c | g_SfxSamples[0].streaming_buffer_size | g_SfxSamples[1].streaming_buffer_size
    ADD ESP,0x4                         ; 005aa793
    ADD dword ptr [ESP + 0x8],EAX       ; 005aa796
    JMP 0x005aa6d0                      ; 005aa79a
        ;   XREF to: 005aa6d0 (UNCONDITIONAL_JUMP)  ; LAB_005aa6d0
    MOV dword ptr [ECX],0x0             ; 005aa79f
        ;   Label: LAB_005aa79f
    ADD ESP,0xc                         ; 005aa7a5
    POP EBP                             ; 005aa7a8
    POP EDI                             ; 005aa7a9
    POP ESI                             ; 005aa7aa
    POP EBX                             ; 005aa7ab
    RET                                 ; 005aa7ac

