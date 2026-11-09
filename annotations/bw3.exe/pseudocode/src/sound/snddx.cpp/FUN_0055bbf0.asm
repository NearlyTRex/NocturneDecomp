; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int sound_snddx_cpp_FUN_0055bbf0(undefined4 param_1,int param_2,int param_3,int param_4)
;
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_005d452f
;   TerminatedCString s_sound_snddx_cpp_005d473c
;   TerminatedCString s_DirectSoundDevice_lockSa_005d474f
;   TerminatedCString s_Lock_hw_sample_buffer_005d477f
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_memory.c_memset_FUN_005a28f0
;   crt_unknown.c_FUN_005a28c0
;   sound_snddx.cpp_FUN_0055a670
;   sound_sndmain.cpp_FUN_0055a560
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055bbf0
        ;   Label: sound_snddx.cpp_FUN_0055bbf0
    PUSH ESI                            ; 0055bbf1
    PUSH EDI                            ; 0055bbf2
    PUSH EBP                            ; 0055bbf3
    SUB ESP,0x198                       ; 0055bbf4
    MOV EAX,dword ptr [ESP + 0x1b0]     ; 0055bbfa
    TEST EAX,EAX                        ; 0055bc01
    JLE 0x0055bc0a                      ; 0055bc03
        ;   XREF to: 0055bc0a (CONDITIONAL_JUMP)  ; LAB_0055bc0a
    CMP EAX,0x41                        ; 0055bc05
    JL 0x0055bc17                       ; 0055bc08
        ;   XREF to: 0055bc17 (CONDITIONAL_JUMP)  ; LAB_0055bc17
    XOR EAX,EAX                         ; 0055bc0a
        ;   Label: LAB_0055bc0a
    ADD ESP,0x198                       ; 0055bc0c
    POP EBP                             ; 0055bc12
    POP EDI                             ; 0055bc13
    POP ESI                             ; 0055bc14
    POP EBX                             ; 0055bc15
    RET                                 ; 0055bc16
    LEA EBX,[EAX*0x4 + 0x0]             ; 0055bc17
        ;   Label: LAB_0055bc17
    SUB EBX,EAX                         ; 0055bc1e
    SHL EBX,0x3                         ; 0055bc20
    CMP dword ptr [EBX + 0x2cf49f4],0x0 ; 0055bc23
    JZ 0x0055bc0a                       ; 0055bc2a
        ;   XREF to: 0055bc0a (CONDITIONAL_JUMP)  ; LAB_0055bc0a
    CMP dword ptr [EBX + 0x2cf49fc],0x1 ; 0055bc2c
    JL 0x0055bc0a                       ; 0055bc33
        ;   XREF to: 0055bc0a (CONDITIONAL_JUMP)  ; LAB_0055bc0a
    LEA EBX,[EAX*0x4 + 0x0]             ; 0055bc35
    SUB EBX,EAX                         ; 0055bc3c
    SHL EBX,0x3                         ; 0055bc3e
    ADD EBX,0x2cf49f4                   ; 0055bc41
    CMP dword ptr [EBX + 0x10],0x0      ; 0055bc47
    JZ 0x0055bc70                       ; 0055bc4b
        ;   XREF to: 0055bc70 (CONDITIONAL_JUMP)  ; LAB_0055bc70
    MOV EDI,0x5d473c                    ; 0055bc4d | = "..\\sound\\snddx.cpp"
    MOV EBP,0x437                       ; 0055bc52
    PUSH 0x5d474f                       ; 0055bc57 | = "DirectSoundDevice::lockSample - alrea..."
    MOV dword ptr [0x01d71de0],EDI      ; 0055bc5c | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBP      ; 0055bc62 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0055bc68
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0055bc6d
    MOV EDX,dword ptr [ESP + 0x1b4]     ; 0055bc70
        ;   Label: LAB_0055bc70
    MOV EAX,dword ptr [EBX + 0x8]       ; 0055bc77
    IMUL EDX,EAX                        ; 0055bc7a
    MOV EAX,EDX                         ; 0055bc7d
    SAR EDX,0x1f                        ; 0055bc7f
    SHL EDX,0x8                         ; 0055bc82
    SBB EAX,EDX                         ; 0055bc85
    SAR EAX,0x8                         ; 0055bc87
    MOV EDI,dword ptr [ESP + 0x1b8]     ; 0055bc8a
    ADD EDI,0x1f                        ; 0055bc91
    MOV ESI,EAX                         ; 0055bc94
    MOV EBP,EAX                         ; 0055bc96
    AND SI,0xffe0                       ; 0055bc98
    MOV EAX,dword ptr [EBX + 0xc]       ; 0055bc9c
    AND DI,0xffe0                       ; 0055bc9f
    SUB EAX,ESI                         ; 0055bca3
    CMP EDI,EAX                         ; 0055bca5
    JLE 0x0055bcab                      ; 0055bca7
        ;   XREF to: 0055bcab (CONDITIONAL_JUMP)  ; LAB_0055bcab
    MOV EDI,EAX                         ; 0055bca9
    PUSH 0x0                            ; 0055bcab
        ;   Label: LAB_0055bcab
    LEA ECX,[ESP + 0x198]               ; 0055bcad
    PUSH ECX                            ; 0055bcb4
    LEA ECX,[ESP + 0x198]               ; 0055bcb5
    PUSH ECX                            ; 0055bcbc
    LEA ECX,[EBX + 0x14]                ; 0055bcbd
    PUSH ECX                            ; 0055bcc0
    LEA ECX,[EBX + 0x10]                ; 0055bcc1
    PUSH ECX                            ; 0055bcc4
    PUSH EDI                            ; 0055bcc5
    MOV EAX,dword ptr [EBX]             ; 0055bcc6
    PUSH ESI                            ; 0055bcc8
    MOV EDX,dword ptr [EAX]             ; 0055bcc9
    PUSH EAX                            ; 0055bccb
    CALL dword ptr [EDX + 0x2c]         ; 0055bccc
    TEST EAX,EAX                        ; 0055bccf
    JNZ 0x0055bd09                      ; 0055bcd1
        ;   XREF to: 0055bd09 (CONDITIONAL_JUMP)  ; LAB_0055bd09
    MOV EAX,dword ptr [EBX + 0xc]       ; 0055bcd3
    ADD EDI,ESI                         ; 0055bcd6
    SUB EAX,0x20                        ; 0055bcd8
    CMP EDI,EAX                         ; 0055bcdb
    JL 0x0055bcf7                       ; 0055bcdd
        ;   XREF to: 0055bcf7 (CONDITIONAL_JUMP)  ; LAB_0055bcf7
    MOV EAX,dword ptr [EBX + 0x10]      ; 0055bcdf
    ADD EAX,dword ptr [EBX + 0xc]       ; 0055bce2
    PUSH 0x20                           ; 0055bce5
    SUB EAX,ESI                         ; 0055bce7
    PUSH 0x0                            ; 0055bce9
    SUB EAX,0x20                        ; 0055bceb
    PUSH EAX                            ; 0055bcee
    CALL crt_memory.c_memset_FUN_005a28f0 ; 0055bcef
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0055bcf4
    MOV EAX,dword ptr [EBX + 0x10]      ; 0055bcf7
        ;   Label: LAB_0055bcf7
    ADD EAX,EBP                         ; 0055bcfa
    SUB EAX,ESI                         ; 0055bcfc
    ADD ESP,0x198                       ; 0055bcfe
    POP EBP                             ; 0055bd04
    POP EDI                             ; 0055bd05
    POP ESI                             ; 0055bd06
    POP EBX                             ; 0055bd07
    RET                                 ; 0055bd08
    PUSH EAX                            ; 0055bd09
        ;   Label: LAB_0055bd09
    CALL sound_snddx.cpp_FUN_0055a670   ; 0055bd0a
        ;   XREF to: 0055a670 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_0055a670(uint error_code)
    ADD ESP,0x4                         ; 0055bd0f
    PUSH EAX                            ; 0055bd12
    PUSH 0x5d477f                       ; 0055bd13 | = "Lock hw sample buffer"
    PUSH 0x5d452f                       ; 0055bd18 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xc]                 ; 0055bd1d
    PUSH EAX                            ; 0055bd21
    CALL crt_unknown.c_FUN_005a28c0     ; 0055bd22
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x10                        ; 0055bd27
    MOV EAX,ESP                         ; 0055bd2a
    PUSH EAX                            ; 0055bd2c
    CALL sound_sndmain.cpp_FUN_0055a560 ; 0055bd2d
        ;   XREF to: 0055a560 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_0055a560()
    ADD ESP,0x4                         ; 0055bd32
    XOR EAX,EAX                         ; 0055bd35
    ADD ESP,0x198                       ; 0055bd37
    POP EBP                             ; 0055bd3d
    POP EDI                             ; 0055bd3e
    POP ESI                             ; 0055bd3f
    POP EBX                             ; 0055bd40
    RET                                 ; 0055bd41

