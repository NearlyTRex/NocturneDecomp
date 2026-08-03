; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_snddx_cpp_CDirectSoundDevice_startSfx_FUN_0052b9a0(CDirectSoundDevice *this_ptr,CSfxSlot *slot)
;
; Parameters:
; CDirectSoundDevice * Stack[0x4]:4   this_ptr
; CSfxSlot *       Stack[0x8]:4   slot
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_005940b7
;   TerminatedCString s_sound_snddx_cpp_0059472c
;   TerminatedCString s_DirectSoundDevice_startS_0059473f
;   TerminatedCString s_sound_snddx_cpp_00594770
;   TerminatedCString s_DirectSoundDevice_startS_00594783
;   TerminatedCString s_Play_hardware_sfx_second_005947ad
;   char* g_CHAR_PTR_01cc4800
;   int g_INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   crt_stdio.c_sprintf_FUN_00563c90
;   sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90
;   sound_sndmain.cpp_FUN_00529980
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052b9a0
        ;   Label: sound_snddx.cpp_CDirectSoundDevice_startSfx_FUN_0052b9a0
    PUSH ESI                            ; 0052b9a1
    PUSH EDI                            ; 0052b9a2
    PUSH EBP                            ; 0052b9a3
    SUB ESP,0x190                       ; 0052b9a4
    MOV EBX,dword ptr [ESP + 0x1a4]     ; 0052b9aa
    MOV EDI,dword ptr [ESP + 0x1a8]     ; 0052b9b1
    MOV ESI,dword ptr [EDI + 0x6c]      ; 0052b9b8
    TEST ESI,ESI                        ; 0052b9bb
    JLE 0x0052b9c8                      ; 0052b9bd
        ;   XREF to: 0052b9c8 (CONDITIONAL_JUMP)  ; LAB_0052b9c8
    CMP ESI,0x1f                        ; 0052b9bf
    JL 0x0052ba4d                       ; 0052b9c2
        ;   XREF to: 0052ba4d (CONDITIONAL_JUMP)  ; LAB_0052ba4d
    PUSH ESI                            ; 0052b9c8
        ;   Label: LAB_0052b9c8
    MOV EBP,0x59472c                    ; 0052b9c9 | = "..\\sound\\snddx.cpp"
    MOV EAX,0x3b9                       ; 0052b9ce
    PUSH 0x59473f                       ; 0052b9d3 | = "DirectSoundDevice::startSfx - invalid..."
    MOV dword ptr [0x01cc4800],EBP      ; 0052b9d8 | g_CHAR_PTR_01cc4800
    MOV [0x01cc4804],EAX                ; 0052b9de | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0052b9e3
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x8                         ; 0052b9e8
    PUSH -0x1                           ; 0052b9eb
        ;   Label: LAB_0052b9eb
    PUSH EDI                            ; 0052b9ed
    MOV EAX,dword ptr [EBX]             ; 0052b9ee
    PUSH EBX                            ; 0052b9f0
    CALL dword ptr [EAX + 0x40]         ; 0052b9f1
    ADD ESP,0xc                         ; 0052b9f4
    TEST EAX,EAX                        ; 0052b9f7
    JZ 0x0052ba42                       ; 0052b9f9
        ;   XREF to: 0052ba42 (CONDITIONAL_JUMP)  ; LAB_0052ba42
    MOV EDX,dword ptr [EDI + 0x74]      ; 0052b9fb
    XOR EBX,EBX                         ; 0052b9fe
    TEST EDX,EDX                        ; 0052ba00
    JZ 0x0052ba73                       ; 0052ba02
        ;   XREF to: 0052ba73 (CONDITIONAL_JUMP)  ; LAB_0052ba73
    MOV EAX,dword ptr [EDI + 0x74]      ; 0052ba04
        ;   Label: LAB_0052ba04
    CMP dword ptr [EAX + 0x124],0x0     ; 0052ba07
    JZ 0x0052ba13                       ; 0052ba0e
        ;   XREF to: 0052ba13 (CONDITIONAL_JUMP)  ; LAB_0052ba13
    OR BL,0x1                           ; 0052ba10
    MOV EAX,dword ptr [EDI + 0x74]      ; 0052ba13
        ;   Label: LAB_0052ba13
    MOV EDI,dword ptr [EAX + 0x138]     ; 0052ba16
    CMP EDI,dword ptr [EAX + 0x110]     ; 0052ba1c
    JZ 0x0052ba27                       ; 0052ba22
        ;   XREF to: 0052ba27 (CONDITIONAL_JUMP)  ; LAB_0052ba27
    OR BL,0x1                           ; 0052ba24
    PUSH EBX                            ; 0052ba27
        ;   Label: LAB_0052ba27
    PUSH 0x0                            ; 0052ba28
    MOV EAX,dword ptr [ESI*0x4 + 0x2dc92a8] ; 0052ba2a
    PUSH 0x0                            ; 0052ba31
    MOV ESI,dword ptr [EAX]             ; 0052ba33
    PUSH EAX                            ; 0052ba35
    CALL dword ptr [ESI + 0x30]         ; 0052ba36
    TEST EAX,EAX                        ; 0052ba39
    JNZ 0x0052ba9b                      ; 0052ba3b
        ;   XREF to: 0052ba9b (CONDITIONAL_JUMP)  ; LAB_0052ba9b
    MOV EAX,0x1                         ; 0052ba3d
    ADD ESP,0x190                       ; 0052ba42
        ;   Label: LAB_0052ba42
    POP EBP                             ; 0052ba48
    POP EDI                             ; 0052ba49
    POP ESI                             ; 0052ba4a
    POP EBX                             ; 0052ba4b
    RET                                 ; 0052ba4c
    LEA EAX,[ESI*0x4 + 0x0]             ; 0052ba4d
        ;   Label: LAB_0052ba4d
    CMP dword ptr [EAX + 0x2dc92a8],0x0 ; 0052ba54
    JZ 0x0052b9c8                       ; 0052ba5b
        ;   XREF to: 0052b9c8 (CONDITIONAL_JUMP)  ; LAB_0052b9c8
    CMP dword ptr [EAX + 0x2dc9324],0x0 ; 0052ba61
    JZ 0x0052b9c8                       ; 0052ba68
        ;   XREF to: 0052b9c8 (CONDITIONAL_JUMP)  ; LAB_0052b9c8
    JMP 0x0052b9eb                      ; 0052ba6e
        ;   XREF to: 0052b9eb (UNCONDITIONAL_JUMP)  ; LAB_0052b9eb
    MOV ECX,0x594770                    ; 0052ba73 | = "..\\sound\\snddx.cpp"
        ;   Label: LAB_0052ba73
    MOV EBP,0x3c3                       ; 0052ba78
    PUSH 0x594783                       ; 0052ba7d | = "DirectSoundDevice::startSfx - no samp..."
    MOV dword ptr [0x01cc4800],ECX      ; 0052ba82 | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],EBP      ; 0052ba88 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0052ba8e
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 0052ba93
    JMP 0x0052ba04                      ; 0052ba96
        ;   XREF to: 0052ba04 (UNCONDITIONAL_JUMP)  ; LAB_0052ba04
    PUSH EAX                            ; 0052ba9b
        ;   Label: LAB_0052ba9b
    CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90 ; 0052ba9c
        ;   XREF to: 00529a90 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90(uint error_code)
    ADD ESP,0x4                         ; 0052baa1
    PUSH EAX                            ; 0052baa4
    PUSH 0x5947ad                       ; 0052baa5 | = "Play hardware sfx secondary buffer"
    PUSH 0x5940b7                       ; 0052baaa | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xc]                 ; 0052baaf
    PUSH EAX                            ; 0052bab3
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0052bab4
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x10                        ; 0052bab9
    MOV EAX,ESP                         ; 0052babc
    PUSH EAX                            ; 0052babe
    CALL sound_sndmain.cpp_FUN_00529980 ; 0052babf
        ;   XREF to: 00529980 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00529980()
    ADD ESP,0x4                         ; 0052bac4
    XOR EAX,EAX                         ; 0052bac7
    ADD ESP,0x190                       ; 0052bac9
    POP EBP                             ; 0052bacf
    POP EDI                             ; 0052bad0
    POP ESI                             ; 0052bad1
    POP EBX                             ; 0052bad2
    RET                                 ; 0052bad3

