; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_snddx_cpp_CDirectSoundDevice_unlockSample_FUN_0052ae90(CDirectSoundDevice *this_ptr,int buffer_id)
;
; Parameters:
; CDirectSoundDevice * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   buffer_id
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_005940b7
;   TerminatedCString s_sound_snddx_cpp_005942fe
;   TerminatedCString s_DirectSoundDevice_unlock_00594311
;   TerminatedCString s_Unlock_hw_sample_buffer_00594353
;   char* g_CHAR_PTR_01cc4800
;   int g_INT_01cc4804
;   undefined4 DAT_02dc9244
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   crt_stdio.c_sprintf_FUN_00563c90
;   sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90
;   sound_sndmain.cpp_FUN_00529980
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052ae90
        ;   Label: sound_snddx.cpp_CDirectSoundDevice_unlockSample_FUN_0052ae90
    PUSH ESI                            ; 0052ae91
    PUSH EDI                            ; 0052ae92
    PUSH EBP                            ; 0052ae93
    SUB ESP,0x190                       ; 0052ae94
    MOV EBX,dword ptr [ESP + 0x1a8]     ; 0052ae9a
    MOV ESI,dword ptr [ESP + 0x1b4]     ; 0052aea1
    TEST EBX,EBX                        ; 0052aea8
    JLE 0x0052aeb1                      ; 0052aeaa
        ;   XREF to: 0052aeb1 (CONDITIONAL_JUMP)  ; LAB_0052aeb1
    CMP EBX,0x19                        ; 0052aeac
    JL 0x0052af0d                       ; 0052aeaf
        ;   XREF to: 0052af0d (CONDITIONAL_JUMP)  ; LAB_0052af0d
    PUSH EBX                            ; 0052aeb1
        ;   Label: LAB_0052aeb1
    MOV ECX,0x5942fe                    ; 0052aeb2 | = "..\\sound\\snddx.cpp"
    MOV EDI,0x2b6                       ; 0052aeb7
    PUSH 0x594311                       ; 0052aebc | = "DirectSoundDevice::unlockSample - Can..."
    MOV dword ptr [0x01cc4800],ECX      ; 0052aec1 | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 0052aec7 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0052aecd
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x8                         ; 0052aed2
    MOV EBP,dword ptr [ESI + 0x15c]     ; 0052aed5
        ;   Label: LAB_0052aed5
    PUSH EBP                            ; 0052aedb
    MOV EDX,dword ptr [ESI + 0x164]     ; 0052aedc
    PUSH EDX                            ; 0052aee2
    MOV ECX,dword ptr [ESI + 0x158]     ; 0052aee3
    PUSH ECX                            ; 0052aee9
    MOV EDI,dword ptr [ESI + 0x160]     ; 0052aeea
    MOV EAX,dword ptr [EBX*0x4 + 0x2dc9244] ; 0052aef0 | DAT_02dc9244
    PUSH EDI                            ; 0052aef7
    MOV EBX,dword ptr [EAX]             ; 0052aef8
    PUSH EAX                            ; 0052aefa
    CALL dword ptr [EBX + 0x4c]         ; 0052aefb
    TEST EAX,EAX                        ; 0052aefe
    JNZ 0x0052af19                      ; 0052af00
        ;   XREF to: 0052af19 (CONDITIONAL_JUMP)  ; LAB_0052af19
    ADD ESP,0x190                       ; 0052af02
    POP EBP                             ; 0052af08
    POP EDI                             ; 0052af09
    POP ESI                             ; 0052af0a
    POP EBX                             ; 0052af0b
    RET                                 ; 0052af0c
    CMP dword ptr [EBX*0x4 + 0x2dc9244],0x0 ; 0052af0d | DAT_02dc9244
        ;   Label: LAB_0052af0d
    JZ 0x0052aeb1                       ; 0052af15
        ;   XREF to: 0052aeb1 (CONDITIONAL_JUMP)  ; LAB_0052aeb1
    JMP 0x0052aed5                      ; 0052af17
        ;   XREF to: 0052aed5 (UNCONDITIONAL_JUMP)  ; LAB_0052aed5
    PUSH EAX                            ; 0052af19
        ;   Label: LAB_0052af19
    CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90 ; 0052af1a
        ;   XREF to: 00529a90 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90(uint error_code)
    ADD ESP,0x4                         ; 0052af1f
    PUSH EAX                            ; 0052af22
    PUSH 0x594353                       ; 0052af23 | = "Unlock hw sample buffer"
    PUSH 0x5940b7                       ; 0052af28 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xc]                 ; 0052af2d
    PUSH EAX                            ; 0052af31
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0052af32
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x10                        ; 0052af37
    MOV EAX,ESP                         ; 0052af3a
    PUSH EAX                            ; 0052af3c
    CALL sound_sndmain.cpp_FUN_00529980 ; 0052af3d
        ;   XREF to: 00529980 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00529980()
    ADD ESP,0x4                         ; 0052af42
    ADD ESP,0x190                       ; 0052af45
    POP EBP                             ; 0052af4b
    POP EDI                             ; 0052af4c
    POP ESI                             ; 0052af4d
    POP EBX                             ; 0052af4e
    RET                                 ; 0052af4f

