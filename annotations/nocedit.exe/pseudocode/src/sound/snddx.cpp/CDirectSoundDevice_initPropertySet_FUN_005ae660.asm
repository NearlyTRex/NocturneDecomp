; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_snddx_cpp_CDirectSoundDevice_initPropertySet_FUN_005ae660(CDirectSoundDevice *this_ptr)
;
; Parameters:
; CDirectSoundDevice * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x2c]:1  local_2c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_00651a6c
;   TerminatedCString s_Create_temp_secondary_bu_00651b5a
;   GUID g_IID_IKsPropertySet
;   GUID g_IID_IDirectSound3DBuffer
;   IDirectSound* g_DirectSound
;   IKsPropertySet* g_DirectSoundPropertySet
;
; Called Functions:
;   crt_memory.c_memset_FUN_005fde40
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70
;   sound_sndmain.cpp_logSoundError_FUN_005adba0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ae660
        ;   Label: sound_snddx.cpp_CDirectSoundDevice_initPropertySet_FUN_005ae660
    PUSH ESI                            ; 005ae661
    PUSH EDI                            ; 005ae662
    PUSH EBP                            ; 005ae663
    SUB ESP,0x1c0                       ; 005ae664
    MOV EDX,dword ptr [0x03f6a9c0]      ; 005ae66a | g_DirectSoundPropertySet
    TEST EDX,EDX                        ; 005ae670
    JZ 0x005ae684                       ; 005ae672
        ;   XREF to: 005ae684 (CONDITIONAL_JUMP)  ; LAB_005ae684
    MOV EAX,EDX                         ; 005ae674
    PUSH EAX                            ; 005ae676
    MOV EDX,dword ptr [EDX]             ; 005ae677
    CALL dword ptr [EDX + 0x8]          ; 005ae679
    XOR ECX,ECX                         ; 005ae67c
    MOV dword ptr [0x03f6a9c0],ECX      ; 005ae67e | g_DirectSoundPropertySet
    PUSH 0x12                           ; 005ae684
        ;   Label: LAB_005ae684
    LEA EAX,[ESP + 0x1a8]               ; 005ae686
    XOR EBX,EBX                         ; 005ae68d
    MOV EDI,0x5622                      ; 005ae68f
    PUSH EBX                            ; 005ae694
    MOV ESI,0x2                         ; 005ae695
    MOV EBP,0xac44                      ; 005ae69a
    PUSH EAX                            ; 005ae69f
    MOV dword ptr [ESP + 0x1c4],EBX     ; 005ae6a0
    MOV dword ptr [ESP + 0x1c8],EBX     ; 005ae6a7
    CALL crt_memory.c_memset_FUN_005fde40 ; 005ae6ae
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    MOV EDX,0x1                         ; 005ae6b3
    ADD ESP,0xc                         ; 005ae6b8
    MOV ECX,0x10                        ; 005ae6bb
    LEA EAX,[ESP + 0x190]               ; 005ae6c0
    PUSH 0x14                           ; 005ae6c7
    MOV word ptr [ESP + 0x1a8],DX       ; 005ae6c9
    MOV word ptr [ESP + 0x1aa],DX       ; 005ae6d1
    PUSH EBX                            ; 005ae6d9
    MOV dword ptr [ESP + 0x1b0],EDI     ; 005ae6da
    MOV word ptr [ESP + 0x1ba],CX       ; 005ae6e1
    PUSH EAX                            ; 005ae6e9
    MOV word ptr [ESP + 0x1bc],SI       ; 005ae6ea
    MOV dword ptr [ESP + 0x1b8],EBP     ; 005ae6f2
    CALL crt_memory.c_memset_FUN_005fde40 ; 005ae6f9
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    MOV EAX,0x14                        ; 005ae6fe
    MOV EDX,0x12                        ; 005ae703
    ADD ESP,0xc                         ; 005ae708
    MOV ECX,0x400                       ; 005ae70b
    MOV dword ptr [ESP + 0x190],EAX     ; 005ae710
    MOV dword ptr [ESP + 0x194],EDX     ; 005ae717
    PUSH EBX                            ; 005ae71e
    LEA EAX,[ESP + 0x1a8]               ; 005ae71f
    LEA EDX,[ESP + 0x1bc]               ; 005ae726
    MOV dword ptr [ESP + 0x1a4],EAX     ; 005ae72d
    PUSH EDX                            ; 005ae734
    LEA EDX,[ESP + 0x198]               ; 005ae735
    MOV EAX,[0x03f6a9b0]                ; 005ae73c | g_DirectSound
    MOV dword ptr [ESP + 0x1a0],ECX     ; 005ae741
    PUSH EDX                            ; 005ae748
    MOV ECX,dword ptr [EAX]             ; 005ae749
    PUSH EAX                            ; 005ae74b
    CALL dword ptr [ECX + 0xc]          ; 005ae74c
    TEST EAX,EAX                        ; 005ae74f
    JNZ 0x005ae794                      ; 005ae751
        ;   XREF to: 005ae794 (CONDITIONAL_JUMP)  ; LAB_005ae794
    LEA EDX,[ESP + 0x1bc]               ; 005ae753
    PUSH EDX                            ; 005ae75a
    MOV EAX,dword ptr [ESP + 0x1bc]     ; 005ae75b
    PUSH 0x686d68                       ; 005ae762 | g_IID_IDirectSound3DBuffer
    MOV EBX,dword ptr [ESP + 0x1c0]     ; 005ae767
    MOV EAX,dword ptr [EAX]             ; 005ae76e
    PUSH EBX                            ; 005ae770
    CALL dword ptr [EAX]                ; 005ae771
    MOV ESI,dword ptr [ESP + 0x1bc]     ; 005ae773
    TEST ESI,ESI                        ; 005ae77a
    JNZ 0x005ae7d2                      ; 005ae77c
        ;   XREF to: 005ae7d2 (CONDITIONAL_JUMP)  ; LAB_005ae7d2
    MOV EBP,dword ptr [ESP + 0x1b8]     ; 005ae77e
    TEST EBP,EBP                        ; 005ae785
    JNZ 0x005ae7c2                      ; 005ae787
        ;   XREF to: 005ae7c2 (CONDITIONAL_JUMP)  ; LAB_005ae7c2
    ADD ESP,0x1c0                       ; 005ae789
        ;   Label: LAB_005ae789
    POP EBP                             ; 005ae78f
    POP EDI                             ; 005ae790
    POP ESI                             ; 005ae791
    POP EBX                             ; 005ae792
    RET                                 ; 005ae793
    PUSH EAX                            ; 005ae794
        ;   Label: LAB_005ae794
    CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70 ; 005ae795
        ;   XREF to: 005ade70 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70(uint error_code)
    ADD ESP,0x4                         ; 005ae79a
    PUSH EAX                            ; 005ae79d
    PUSH 0x651b5a                       ; 005ae79e | = "Create temp secondary buffer for prop..."
    PUSH 0x651a6c                       ; 005ae7a3 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xc]                 ; 005ae7a8
    PUSH EAX                            ; 005ae7ac
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 005ae7ad
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 005ae7b2
    MOV EAX,ESP                         ; 005ae7b5
    PUSH EAX                            ; 005ae7b7
    CALL sound_sndmain.cpp_logSoundError_FUN_005adba0 ; 005ae7b8
        ;   XREF to: 005adba0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005adba0(char * format)
    ADD ESP,0x4                         ; 005ae7bd
    JMP 0x005ae789                      ; 005ae7c0
        ;   XREF to: 005ae789 (UNCONDITIONAL_JUMP)  ; LAB_005ae789
    PUSH EBP                            ; 005ae7c2
        ;   Label: LAB_005ae7c2
    MOV EAX,dword ptr [EBP]             ; 005ae7c3
    CALL dword ptr [EAX + 0x8]          ; 005ae7c6
    MOV dword ptr [ESP + 0x1b8],ESI     ; 005ae7c9
    JMP 0x005ae789                      ; 005ae7d0
        ;   XREF to: 005ae789 (UNCONDITIONAL_JUMP)  ; LAB_005ae789
    PUSH 0x3f6a9c0                      ; 005ae7d2 | g_DirectSoundPropertySet
        ;   Label: LAB_005ae7d2
    PUSH 0x681dd0                       ; 005ae7d7 | g_IID_IKsPropertySet
    MOV EAX,dword ptr [ESI]             ; 005ae7dc
    PUSH ESI                            ; 005ae7de
    CALL dword ptr [EAX]                ; 005ae7df
    MOV EBP,dword ptr [ESP + 0x1b8]     ; 005ae7e1
    TEST EBP,EBP                        ; 005ae7e8
    JZ 0x005ae7fc                       ; 005ae7ea
        ;   XREF to: 005ae7fc (CONDITIONAL_JUMP)  ; LAB_005ae7fc
    PUSH EBP                            ; 005ae7ec
    MOV EAX,dword ptr [EBP]             ; 005ae7ed
    CALL dword ptr [EAX + 0x8]          ; 005ae7f0
    XOR ECX,ECX                         ; 005ae7f3
    MOV dword ptr [ESP + 0x1b8],ECX     ; 005ae7f5
    MOV EBX,dword ptr [ESP + 0x1bc]     ; 005ae7fc
        ;   Label: LAB_005ae7fc
    TEST EBX,EBX                        ; 005ae803
    JZ 0x005ae789                       ; 005ae805
        ;   XREF to: 005ae789 (CONDITIONAL_JUMP)  ; LAB_005ae789
    PUSH EBX                            ; 005ae807
    MOV EAX,dword ptr [EBX]             ; 005ae808
    XOR EDI,EDI                         ; 005ae80a
    CALL dword ptr [EAX + 0x8]          ; 005ae80c
    MOV dword ptr [ESP + 0x1bc],EDI     ; 005ae80f
    ADD ESP,0x1c0                       ; 005ae816
    POP EBP                             ; 005ae81c
    POP EDI                             ; 005ae81d
    POP ESI                             ; 005ae81e
    POP EBX                             ; 005ae81f
    RET                                 ; 005ae820

