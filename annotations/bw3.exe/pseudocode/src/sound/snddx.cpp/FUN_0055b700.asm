; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 sound_snddx_cpp_FUN_0055b700(void)
;
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_005d452f
;   TerminatedCString s_Querry_DirectSound_capab_005d46cb
;   undefined4 DAT_02cf49c4
;   undefined4 DAT_02cf49d0
;
; Called Functions:
;   crt_memory.c_memset_FUN_005a28f0
;   crt_unknown.c_sprintf_FUN_005a28c0
;   sound_snddx.cpp_FUN_0055a670
;   sound_sndmain.cpp_FUN_0055a560
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055b700
        ;   Label: sound_snddx.cpp_FUN_0055b700
    SUB ESP,0x1f0                       ; 0055b701
    CMP dword ptr [0x02cf49c4],0x0      ; 0055b707 | DAT_02cf49c4
    JZ 0x0055b727                       ; 0055b70e
        ;   XREF to: 0055b727 (CONDITIONAL_JUMP)  ; LAB_0055b727
    MOV ECX,dword ptr [0x02cf49d0]      ; 0055b710 | DAT_02cf49d0
    TEST ECX,ECX                        ; 0055b716
    JZ 0x0055b72b                       ; 0055b718
        ;   XREF to: 0055b72b (CONDITIONAL_JUMP)  ; LAB_0055b72b
    MOV EAX,0x2                         ; 0055b71a
    ADD ESP,0x1f0                       ; 0055b71f
        ;   Label: LAB_0055b71f
    POP EBX                             ; 0055b725
    RET                                 ; 0055b726
    XOR EAX,EAX                         ; 0055b727
        ;   Label: LAB_0055b727
    JMP 0x0055b71f                      ; 0055b729
        ;   XREF to: 0055b71f (UNCONDITIONAL_JUMP)  ; LAB_0055b71f
    PUSH 0x60                           ; 0055b72b
        ;   Label: LAB_0055b72b
    PUSH ECX                            ; 0055b72d
    LEA EAX,[ESP + 0x198]               ; 0055b72e
    PUSH EAX                            ; 0055b735
    CALL crt_memory.c_memset_FUN_005a28f0 ; 0055b736
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0055b73b
    LEA ECX,[ESP + 0x190]               ; 0055b73e
    MOV EBX,0x60                        ; 0055b745
    PUSH ECX                            ; 0055b74a
    MOV EAX,[0x02cf49c4]                ; 0055b74b | DAT_02cf49c4
    MOV dword ptr [ESP + 0x194],EBX     ; 0055b750
    PUSH EAX                            ; 0055b757
    MOV EDX,dword ptr [EAX]             ; 0055b758
    CALL dword ptr [EDX + 0x10]         ; 0055b75a
    TEST EAX,EAX                        ; 0055b75d
    JNZ 0x0055b778                      ; 0055b75f
        ;   XREF to: 0055b778 (CONDITIONAL_JUMP)  ; LAB_0055b778
    CMP dword ptr [ESP + 0x1a8],0x0     ; 0055b761
    JBE 0x0055b71f                      ; 0055b769
        ;   XREF to: 0055b71f (CONDITIONAL_JUMP)  ; LAB_0055b71f
    MOV EAX,0x1                         ; 0055b76b
    ADD ESP,0x1f0                       ; 0055b770
    POP EBX                             ; 0055b776
    RET                                 ; 0055b777
    PUSH EAX                            ; 0055b778
        ;   Label: LAB_0055b778
    CALL sound_snddx.cpp_FUN_0055a670   ; 0055b779
        ;   XREF to: 0055a670 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_0055a670(uint error_code)
    ADD ESP,0x4                         ; 0055b77e
    PUSH EAX                            ; 0055b781
    PUSH 0x5d46cb                       ; 0055b782 | = "Querry DirectSound capabilities"
    PUSH 0x5d452f                       ; 0055b787 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xc]                 ; 0055b78c
    PUSH EAX                            ; 0055b790
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0055b791
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0055b796
    MOV EAX,ESP                         ; 0055b799
    PUSH EAX                            ; 0055b79b
    CALL sound_sndmain.cpp_FUN_0055a560 ; 0055b79c
        ;   XREF to: 0055a560 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_0055a560()
    ADD ESP,0x4                         ; 0055b7a1
    XOR EAX,EAX                         ; 0055b7a4
    ADD ESP,0x1f0                       ; 0055b7a6
    POP EBX                             ; 0055b7ac
    RET                                 ; 0055b7ad

