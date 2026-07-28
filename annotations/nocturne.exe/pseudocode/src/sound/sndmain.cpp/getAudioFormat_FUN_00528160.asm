; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_getAudioFormat_FUN_00528160(int *bits_per_sample,int *channels,int *sample_rate)
;
; Parameters:
; int *            Stack[0x4]:4   bits_per_sample
; int *            Stack[0x8]:4   channels
; int *            Stack[0xc]:4   sample_rate
;
; XREF[2]:
;   sound_sndmain.cpp_FUN_005289f0 at 00528a8e
;   sound_sndmain.cpp_writeIni_FUN_00528c80 at 00528d1a
;
; Referenced Globals:
;   undefined4 DAT_005bea64
;   undefined4 DAT_005bea68
;   undefined4 DAT_005bea6c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00528160
        ;   Label: sound_sndmain.cpp_getAudioFormat_FUN_00528160
    MOV EBX,dword ptr [ESP + 0x8]       ; 00528161
    MOV ECX,dword ptr [ESP + 0xc]       ; 00528165
    MOV EDX,dword ptr [ESP + 0x10]      ; 00528169
    TEST EBX,EBX                        ; 0052816d
    JNZ 0x00528182                      ; 0052816f
        ;   XREF to: 00528182 (CONDITIONAL_JUMP)  ; LAB_00528182
    TEST ECX,ECX                        ; 00528171
        ;   Label: LAB_00528171
    JZ 0x0052817c                       ; 00528173
        ;   XREF to: 0052817c (CONDITIONAL_JUMP)  ; LAB_0052817c
    MOV EAX,[0x005bea68]                ; 00528175 | DAT_005bea68
    MOV dword ptr [ECX],EAX             ; 0052817a
    TEST EDX,EDX                        ; 0052817c
        ;   Label: LAB_0052817c
    JNZ 0x0052818b                      ; 0052817e
        ;   XREF to: 0052818b (CONDITIONAL_JUMP)  ; LAB_0052818b
    POP EBX                             ; 00528180
    RET                                 ; 00528181
    MOV EAX,[0x005bea64]                ; 00528182 | DAT_005bea64
        ;   Label: LAB_00528182
    MOV dword ptr [EBX],EAX             ; 00528187
    JMP 0x00528171                      ; 00528189
        ;   XREF to: 00528171 (UNCONDITIONAL_JUMP)  ; LAB_00528171
    MOV EAX,[0x005bea6c]                ; 0052818b | DAT_005bea6c
        ;   Label: LAB_0052818b
    MOV dword ptr [EDX],EAX             ; 00528190
    POP EBX                             ; 00528192
    RET                                 ; 00528193

