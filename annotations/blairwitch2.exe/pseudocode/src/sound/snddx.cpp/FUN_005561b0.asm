; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_snddx_cpp_FUN_005561b0(undefined4 param_1,int param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_005e9a3b
;   TerminatedCString s_sound_snddx_cpp_005e9ca1
;   TerminatedCString s_DirectSoundDevice_unlock_005e9cb4
;   TerminatedCString s_Unlock_hw_sample_buffer_005e9cf6
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_unknown.c_sprintf_FUN_005b7790
;   sound_snddx.cpp_FUN_00554ad0
;   sound_sndmain.cpp_logSoundError_FUN_005549c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005561b0
        ;   Label: sound_snddx.cpp_FUN_005561b0
    PUSH EBP                            ; 005561b1
    SUB ESP,0x190                       ; 005561b2
    MOV EBX,dword ptr [ESP + 0x1a0]     ; 005561b8
    TEST EBX,EBX                        ; 005561bf
    JLE 0x005561cc                      ; 005561c1
        ;   XREF to: 005561cc (CONDITIONAL_JUMP)  ; LAB_005561cc
    CMP EBX,0x41                        ; 005561c3
    JL 0x0055625f                       ; 005561c6
        ;   XREF to: 0055625f (CONDITIONAL_JUMP)  ; LAB_0055625f
    PUSH EDI                            ; 005561cc
        ;   Label: LAB_005561cc
    PUSH ESI                            ; 005561cd
    PUSH EBX                            ; 005561ce
    MOV ESI,0x5e9ca1                    ; 005561cf | = "..\\sound\\snddx.cpp"
    MOV EDI,0x465                       ; 005561d4
    PUSH 0x5e9cb4                       ; 005561d9 | = "DirectSoundDevice::unlockSample - Can..."
    MOV dword ptr [0x01d046a0],ESI      ; 005561de | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 005561e4 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 005561ea
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 005561ef
    POP ESI                             ; 005561f2
    POP EDI                             ; 005561f3
    LEA EAX,[EBX*0x4 + 0x0]             ; 005561f4
        ;   Label: LAB_005561f4
    SUB EAX,EBX                         ; 005561fb
    MOV EBX,0x264a5f4                   ; 005561fd
    SHL EAX,0x3                         ; 00556202
    ADD EBX,EAX                         ; 00556205
    MOV EBP,dword ptr [EBX + 0x10]      ; 00556207
    TEST EBP,EBP                        ; 0055620a
    JZ 0x00556256                       ; 0055620c
        ;   XREF to: 00556256 (CONDITIONAL_JUMP)  ; LAB_00556256
    PUSH 0x0                            ; 0055620e
    PUSH 0x0                            ; 00556210
    MOV ECX,dword ptr [EBX + 0x14]      ; 00556212
    PUSH ECX                            ; 00556215
    MOV EAX,dword ptr [EBX]             ; 00556216
    PUSH EBP                            ; 00556218
    MOV EDX,dword ptr [EAX]             ; 00556219
    PUSH EAX                            ; 0055621b
    CALL dword ptr [EDX + 0x4c]         ; 0055621c
    TEST EAX,EAX                        ; 0055621f
    JZ 0x0055624f                       ; 00556221
        ;   XREF to: 0055624f (CONDITIONAL_JUMP)  ; LAB_0055624f
    PUSH EAX                            ; 00556223
    CALL sound_snddx.cpp_FUN_00554ad0   ; 00556224
        ;   XREF to: 00554ad0 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_00554ad0(uint error_code)
    ADD ESP,0x4                         ; 00556229
    PUSH EAX                            ; 0055622c
    PUSH 0x5e9cf6                       ; 0055622d | = "Unlock hw sample buffer"
    PUSH 0x5e9a3b                       ; 00556232 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xc]                 ; 00556237
    PUSH EAX                            ; 0055623b
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 0055623c
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 00556241
    MOV EAX,ESP                         ; 00556244
    PUSH EAX                            ; 00556246
    CALL sound_sndmain.cpp_logSoundError_FUN_005549c0 ; 00556247
        ;   XREF to: 005549c0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005549c0(char * format)
    ADD ESP,0x4                         ; 0055624c
    MOV dword ptr [EBX + 0x10],0x0      ; 0055624f
        ;   Label: LAB_0055624f
    ADD ESP,0x190                       ; 00556256
        ;   Label: LAB_00556256
    POP EBP                             ; 0055625c
    POP EBX                             ; 0055625d
    RET                                 ; 0055625e
    LEA EAX,[EBX*0x4 + 0x0]             ; 0055625f
        ;   Label: LAB_0055625f
    SUB EAX,EBX                         ; 00556266
    SHL EAX,0x3                         ; 00556268
    CMP dword ptr [EAX + 0x264a5f4],0x0 ; 0055626b
    JZ 0x005561cc                       ; 00556272
        ;   XREF to: 005561cc (CONDITIONAL_JUMP)  ; LAB_005561cc
    CMP dword ptr [EAX + 0x264a5fc],0x1 ; 00556278
    JL 0x005561cc                       ; 0055627f
        ;   XREF to: 005561cc (CONDITIONAL_JUMP)  ; LAB_005561cc
    JMP 0x005561f4                      ; 00556285
        ;   XREF to: 005561f4 (UNCONDITIONAL_JUMP)  ; LAB_005561f4

