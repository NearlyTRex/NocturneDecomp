; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_snddx_cpp_FUN_0055bd50(undefined4 param_1,int param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_005d452f
;   TerminatedCString s_sound_snddx_cpp_005d4795
;   TerminatedCString s_DirectSoundDevice_unlock_005d47a8
;   TerminatedCString s_Unlock_hw_sample_buffer_005d47ea
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_unknown.c_sprintf_FUN_005a28c0
;   sound_snddx.cpp_FUN_0055a670
;   sound_sndmain.cpp_FUN_0055a560
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055bd50
        ;   Label: sound_snddx.cpp_FUN_0055bd50
    PUSH EBP                            ; 0055bd51
    SUB ESP,0x190                       ; 0055bd52
    MOV EBX,dword ptr [ESP + 0x1a0]     ; 0055bd58
    TEST EBX,EBX                        ; 0055bd5f
    JLE 0x0055bd6c                      ; 0055bd61
        ;   XREF to: 0055bd6c (CONDITIONAL_JUMP)  ; LAB_0055bd6c
    CMP EBX,0x41                        ; 0055bd63
    JL 0x0055bdff                       ; 0055bd66
        ;   XREF to: 0055bdff (CONDITIONAL_JUMP)  ; LAB_0055bdff
    PUSH EDI                            ; 0055bd6c
        ;   Label: LAB_0055bd6c
    PUSH ESI                            ; 0055bd6d
    PUSH EBX                            ; 0055bd6e
    MOV ESI,0x5d4795                    ; 0055bd6f | = "..\\sound\\snddx.cpp"
    MOV EDI,0x45c                       ; 0055bd74
    PUSH 0x5d47a8                       ; 0055bd79 | = "DirectSoundDevice::unlockSample - Can..."
    MOV dword ptr [0x01d71de0],ESI      ; 0055bd7e | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 0055bd84 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0055bd8a
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 0055bd8f
    POP ESI                             ; 0055bd92
    POP EDI                             ; 0055bd93
    LEA EAX,[EBX*0x4 + 0x0]             ; 0055bd94
        ;   Label: LAB_0055bd94
    SUB EAX,EBX                         ; 0055bd9b
    MOV EBX,0x2cf49f4                   ; 0055bd9d
    SHL EAX,0x3                         ; 0055bda2
    ADD EBX,EAX                         ; 0055bda5
    MOV EBP,dword ptr [EBX + 0x10]      ; 0055bda7
    TEST EBP,EBP                        ; 0055bdaa
    JZ 0x0055bdf6                       ; 0055bdac
        ;   XREF to: 0055bdf6 (CONDITIONAL_JUMP)  ; LAB_0055bdf6
    PUSH 0x0                            ; 0055bdae
    PUSH 0x0                            ; 0055bdb0
    MOV ECX,dword ptr [EBX + 0x14]      ; 0055bdb2
    PUSH ECX                            ; 0055bdb5
    MOV EAX,dword ptr [EBX]             ; 0055bdb6
    PUSH EBP                            ; 0055bdb8
    MOV EDX,dword ptr [EAX]             ; 0055bdb9
    PUSH EAX                            ; 0055bdbb
    CALL dword ptr [EDX + 0x4c]         ; 0055bdbc
    TEST EAX,EAX                        ; 0055bdbf
    JZ 0x0055bdef                       ; 0055bdc1
        ;   XREF to: 0055bdef (CONDITIONAL_JUMP)  ; LAB_0055bdef
    PUSH EAX                            ; 0055bdc3
    CALL sound_snddx.cpp_FUN_0055a670   ; 0055bdc4
        ;   XREF to: 0055a670 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_0055a670(uint error_code)
    ADD ESP,0x4                         ; 0055bdc9
    PUSH EAX                            ; 0055bdcc
    PUSH 0x5d47ea                       ; 0055bdcd | = "Unlock hw sample buffer"
    PUSH 0x5d452f                       ; 0055bdd2 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xc]                 ; 0055bdd7
    PUSH EAX                            ; 0055bddb
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0055bddc
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0055bde1
    MOV EAX,ESP                         ; 0055bde4
    PUSH EAX                            ; 0055bde6
    CALL sound_sndmain.cpp_FUN_0055a560 ; 0055bde7
        ;   XREF to: 0055a560 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_0055a560()
    ADD ESP,0x4                         ; 0055bdec
    MOV dword ptr [EBX + 0x10],0x0      ; 0055bdef
        ;   Label: LAB_0055bdef
    ADD ESP,0x190                       ; 0055bdf6
        ;   Label: LAB_0055bdf6
    POP EBP                             ; 0055bdfc
    POP EBX                             ; 0055bdfd
    RET                                 ; 0055bdfe
    LEA EAX,[EBX*0x4 + 0x0]             ; 0055bdff
        ;   Label: LAB_0055bdff
    SUB EAX,EBX                         ; 0055be06
    SHL EAX,0x3                         ; 0055be08
    CMP dword ptr [EAX + 0x2cf49f4],0x0 ; 0055be0b
    JZ 0x0055bd6c                       ; 0055be12
        ;   XREF to: 0055bd6c (CONDITIONAL_JUMP)  ; LAB_0055bd6c
    CMP dword ptr [EAX + 0x2cf49fc],0x1 ; 0055be18
    JL 0x0055bd6c                       ; 0055be1f
        ;   XREF to: 0055bd6c (CONDITIONAL_JUMP)  ; LAB_0055bd6c
    JMP 0x0055bd94                      ; 0055be25
        ;   XREF to: 0055bd94 (UNCONDITIONAL_JUMP)  ; LAB_0055bd94

