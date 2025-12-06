; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void sound_sndmain.cpp_getSoundMemoryStats_FUN_005aa6a0(int * out_referenced_count, int * out_total_bytes_referenced, int * out_unreferenced_count, int * out_total_bytes_unreferenced, int * out_free_slots, int * out_available_memory)
;
; Parameters:
; int *            Stack[0x4]:4   out_referenced_count
; int *            Stack[0x8]:4   out_total_bytes_referenced
; int *            Stack[0xc]:4   out_unreferenced_count
; int *            Stack[0x10]:4   out_total_bytes_unreferenced
; int *            Stack[0x14]:4   out_free_slots
; int *            Stack[0x18]:4   out_available_memory
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_game.cpp_CGame_processFrame_FUN_004da100 at 004da7a2
;
; Referenced Globals:
;   int g_MaximumSoundMemoryBudget = 0x400000
;   CSfxSample[64] g_SfxSamples
;   undefined4 DAT_03f6298c
;   undefined4 DAT_03f629ac
;   undefined4 DAT_03f62afc
;   undefined4 DAT_03f62b00
;   undefined4 DAT_03f62b0c
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
    MOV EBX,0x3f6282c                   ; 005aa6a7 | CSfxSample[64] g_SfxSamples
    XOR EDX,EDX                         ; 005aa6ac
    XOR EBP,EBP                         ; 005aa6ae
    XOR ESI,ESI                         ; 005aa6b0
    MOV dword ptr [ESP],EDX             ; 005aa6b2
    MOV dword ptr [ESP + 0x8],EDX       ; 005aa6b5
    MOV dword ptr [ESP + 0x4],EDX       ; 005aa6b9
    IMUL EAX,ESI,0x180                  ; 005aa6bd
        ;   Label: LAB_005aa6bd
    CMP dword ptr [EAX + 0x3f6298c],0x1 ; 005aa6c3 | DAT_03f62b0c
    JGE 0x005aa74f                      ; 005aa6ca | LAB_005aa74f
        ;   XREF to: 005aa74f (CONDITIONAL_JUMP)
    INC ESI                             ; 005aa6d0
        ;   Label: LAB_005aa6d0
    ADD EBX,0x180                       ; 005aa6d1 | DAT_03f629ac
    CMP ESI,0x40                        ; 005aa6d7
    JL 0x005aa6bd                       ; 005aa6da | LAB_005aa6bd
        ;   XREF to: 005aa6bd (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [ESP + 0x20]      ; 005aa6dc
    TEST ECX,ECX                        ; 005aa6e0
    JZ 0x005aa6ea                       ; 005aa6e2 | LAB_005aa6ea
        ;   XREF to: 005aa6ea (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x4]       ; 005aa6e4
    MOV dword ptr [ECX],EAX             ; 005aa6e8
    MOV EBX,dword ptr [ESP + 0x24]      ; 005aa6ea
        ;   Label: LAB_005aa6ea
    TEST EBX,EBX                        ; 005aa6ee
    JZ 0x005aa6f4                       ; 005aa6f0 | LAB_005aa6f4
        ;   XREF to: 005aa6f4 (CONDITIONAL_JUMP)
    MOV dword ptr [EBX],EBP             ; 005aa6f2
    MOV ESI,dword ptr [ESP + 0x28]      ; 005aa6f4
        ;   Label: LAB_005aa6f4
    TEST ESI,ESI                        ; 005aa6f8
    JZ 0x005aa701                       ; 005aa6fa | LAB_005aa701
        ;   XREF to: 005aa701 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP]             ; 005aa6fc
    MOV dword ptr [ESI],EAX             ; 005aa6ff
    MOV EDI,dword ptr [ESP + 0x2c]      ; 005aa701
        ;   Label: LAB_005aa701
    TEST EDI,EDI                        ; 005aa705
    JZ 0x005aa70f                       ; 005aa707 | LAB_005aa70f
        ;   XREF to: 005aa70f (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x8]       ; 005aa709
    MOV dword ptr [EDI],EAX             ; 005aa70d
    CMP dword ptr [ESP + 0x30],0x0      ; 005aa70f
        ;   Label: LAB_005aa70f
    JZ 0x005aa72c                       ; 005aa714 | LAB_005aa72c
        ;   XREF to: 005aa72c (CONDITIONAL_JUMP)
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
    JZ 0x005aa747                       ; 005aa732 | LAB_005aa747
        ;   XREF to: 005aa747 (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [ESP + 0x8]       ; 005aa734
    MOV EAX,[0x00681b44]                ; 005aa738 | int g_MaximumSoundMemoryBudget
    ADD EBP,EBX                         ; 005aa73d
    SUB EAX,EBP                         ; 005aa73f
    MOV dword ptr [ECX],EAX             ; 005aa741
    TEST EAX,EAX                        ; 005aa743
    JL 0x005aa79f                       ; 005aa745 | LAB_005aa79f
        ;   XREF to: 005aa79f (CONDITIONAL_JUMP)
    ADD ESP,0xc                         ; 005aa747
        ;   Label: LAB_005aa747
    POP EBP                             ; 005aa74a
    POP EDI                             ; 005aa74b
    POP ESI                             ; 005aa74c
    POP EBX                             ; 005aa74d
    RET                                 ; 005aa74e
    CMP dword ptr [EAX + 0x3f62980],0x0 ; 005aa74f | DAT_03f62b00
        ;   Label: LAB_005aa74f
    JNZ 0x005aa761                      ; 005aa756 | LAB_005aa761
        ;   XREF to: 005aa761 (CONDITIONAL_JUMP)
    CMP dword ptr [EAX + 0x3f6297c],0x0 ; 005aa758 | DAT_03f62afc
    JZ 0x005aa77c                       ; 005aa75f | LAB_005aa77c
        ;   XREF to: 005aa77c (CONDITIONAL_JUMP)
    PUSH EBX                            ; 005aa761 | DAT_03f629ac
        ;   Label: LAB_005aa761
    CALL sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_005a8550 ; 005aa762 | int sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_005a8550(CSfxSample * this_ptr)
        ;   XREF to: 005a8550 (UNCONDITIONAL_CALL)
    IMUL EAX,dword ptr [EBX + 0x160]    ; 005aa767 | DAT_03f6298c
    INC dword ptr [ESP + 0x8]           ; 005aa76e
    ADD ESP,0x4                         ; 005aa772
    ADD EBP,EAX                         ; 005aa775
    JMP 0x005aa6d0                      ; 005aa777 | LAB_005aa6d0
        ;   XREF to: 005aa6d0 (UNCONDITIONAL_JUMP)
    INC dword ptr [ESP]                 ; 005aa77c
        ;   Label: LAB_005aa77c
    MOV EDI,0x3f6282c                   ; 005aa77f | CSfxSample[64] g_SfxSamples
    ADD EDI,EAX                         ; 005aa784
    PUSH EDI                            ; 005aa786 | DAT_03f629ac
    CALL sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_005a8550 ; 005aa787 | int sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_005a8550(CSfxSample * this_ptr)
        ;   XREF to: 005a8550 (UNCONDITIONAL_CALL)
    IMUL EAX,dword ptr [EDI + 0x160]    ; 005aa78c | DAT_03f6298c
    ADD ESP,0x4                         ; 005aa793
    ADD dword ptr [ESP + 0x8],EAX       ; 005aa796
    JMP 0x005aa6d0                      ; 005aa79a | LAB_005aa6d0
        ;   XREF to: 005aa6d0 (UNCONDITIONAL_JUMP)
    MOV dword ptr [ECX],0x0             ; 005aa79f
        ;   Label: LAB_005aa79f
    ADD ESP,0xc                         ; 005aa7a5
    POP EBP                             ; 005aa7a8
    POP EDI                             ; 005aa7a9
    POP ESI                             ; 005aa7aa
    POP EBX                             ; 005aa7ab
    RET                                 ; 005aa7ac

