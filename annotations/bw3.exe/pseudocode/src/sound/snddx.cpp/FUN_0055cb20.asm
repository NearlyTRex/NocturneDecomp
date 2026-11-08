; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double FUN_0055cb20(undefined4 param_1,int param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_005d452f
;   TerminatedCString s_sound_snddx_cpp_005d4bbc
;   TerminatedCString s_DirectSoundDevice_getSfx_005d4bcf
;   TerminatedCString s_Get_playback_cursor_of_h_005d4c05
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   FUN_004e4330
;   FUN_005558e0
;   FUN_0055a560
;   FUN_0055a670
;   FUN_005a28c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055cb20
        ;   Label: FUN_0055cb20
    PUSH ESI                            ; 0055cb21
    PUSH EDI                            ; 0055cb22
    PUSH EBP                            ; 0055cb23
    MOV EBP,ESP                         ; 0055cb24
    SUB ESP,0x1a4                       ; 0055cb26
    AND ESP,0xfffffff8                  ; 0055cb2c
    MOV ESI,dword ptr [EBP + 0x18]      ; 0055cb2f
    MOV EBX,dword ptr [ESI + 0x60]      ; 0055cb32
    TEST EBX,EBX                        ; 0055cb35
    JLE 0x0055cb3e                      ; 0055cb37
        ;   XREF to: 0055cb3e (CONDITIONAL_JUMP)  ; LAB_0055cb3e
    CMP EBX,0x1f                        ; 0055cb39
    JL 0x0055cb82                       ; 0055cb3c
        ;   XREF to: 0055cb82 (CONDITIONAL_JUMP)  ; LAB_0055cb82
    MOV ECX,0x5d4bbc                    ; 0055cb3e | = "..\\sound\\snddx.cpp"
        ;   Label: LAB_0055cb3e
    MOV EDI,0x5f8                       ; 0055cb43
    PUSH 0x5d4bcf                       ; 0055cb48 | = "DirectSoundDevice::getSfxPlaybackPos ..."
    MOV dword ptr [0x01d71de0],ECX      ; 0055cb4d | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 0055cb53 | DAT_01d71de4
    CALL FUN_004e4330                   ; 0055cb59
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 0055cb5e
    MOV EAX,dword ptr [ESI + 0x68]      ; 0055cb61
        ;   Label: LAB_0055cb61
    TEST EAX,EAX                        ; 0055cb64
    JNZ 0x0055cb97                      ; 0055cb66
        ;   XREF to: 0055cb97 (CONDITIONAL_JUMP)  ; LAB_0055cb97
    MOV EDX,0xbff00000                  ; 0055cb68
    MOV dword ptr [ESP],EAX             ; 0055cb6d
    MOV dword ptr [ESP + 0x4],EDX       ; 0055cb70
    MOV EAX,dword ptr [ESP]             ; 0055cb74
    MOV EDX,dword ptr [ESP + 0x4]       ; 0055cb77
    MOV ESP,EBP                         ; 0055cb7b
    POP EBP                             ; 0055cb7d
    POP EDI                             ; 0055cb7e
    POP ESI                             ; 0055cb7f
    POP EBX                             ; 0055cb80
    RET                                 ; 0055cb81
    LEA EAX,[EBX*0x8 + 0x0]             ; 0055cb82
        ;   Label: LAB_0055cb82
    ADD EAX,EBX                         ; 0055cb89
    CMP dword ptr [EAX*0x4 + 0x2cf500c],0x0 ; 0055cb8b
    JZ 0x0055cb3e                       ; 0055cb93
        ;   XREF to: 0055cb3e (CONDITIONAL_JUMP)  ; LAB_0055cb3e
    JMP 0x0055cb61                      ; 0055cb95
        ;   XREF to: 0055cb61 (UNCONDITIONAL_JUMP)  ; LAB_0055cb61
    LEA EAX,[EBX*0x8 + 0x0]             ; 0055cb97
        ;   Label: LAB_0055cb97
    ADD EAX,EBX                         ; 0055cb9e
    LEA EBX,[ESP + 0x198]               ; 0055cba0
    PUSH EBX                            ; 0055cba7
    LEA EBX,[ESP + 0x1a0]               ; 0055cba8
    MOV EAX,dword ptr [EAX*0x4 + 0x2cf500c] ; 0055cbaf
    PUSH EBX                            ; 0055cbb6
    MOV EDX,dword ptr [EAX]             ; 0055cbb7
    PUSH EAX                            ; 0055cbb9
    CALL dword ptr [EDX + 0x10]         ; 0055cbba
    TEST EAX,EAX                        ; 0055cbbd
    JNZ 0x0055cbf4                      ; 0055cbbf
        ;   XREF to: 0055cbf4 (CONDITIONAL_JUMP)  ; LAB_0055cbf4
    MOV EBX,dword ptr [ESP + 0x19c]     ; 0055cbc1
    PUSH EBX                            ; 0055cbc8
    MOV EDI,dword ptr [ESI + 0x68]      ; 0055cbc9
    PUSH EDI                            ; 0055cbcc
    CALL FUN_005558e0                   ; 0055cbcd
        ;   XREF to: 005558e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005558e0()
    ADD ESP,0x8                         ; 0055cbd2
    MOV dword ptr [ESP + 0x1a0],EAX     ; 0055cbd5
    FILD dword ptr [ESP + 0x1a0]        ; 0055cbdc
    FSTP double ptr [ESP]               ; 0055cbe3
    MOV EAX,dword ptr [ESP]             ; 0055cbe6
    MOV EDX,dword ptr [ESP + 0x4]       ; 0055cbe9
    MOV ESP,EBP                         ; 0055cbed
    POP EBP                             ; 0055cbef
    POP EDI                             ; 0055cbf0
    POP ESI                             ; 0055cbf1
    POP EBX                             ; 0055cbf2
    RET                                 ; 0055cbf3
    PUSH EAX                            ; 0055cbf4
        ;   Label: LAB_0055cbf4
    CALL FUN_0055a670                   ; 0055cbf5
        ;   XREF to: 0055a670 (UNCONDITIONAL_CALL)  ; undefined FUN_0055a670()
    ADD ESP,0x4                         ; 0055cbfa
    PUSH EAX                            ; 0055cbfd
    PUSH 0x5d4c05                       ; 0055cbfe | = "Get playback cursor of hardware sfx s..."
    PUSH 0x5d452f                       ; 0055cc03 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x14]                ; 0055cc08
    PUSH EAX                            ; 0055cc0c
    CALL FUN_005a28c0                   ; 0055cc0d
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28c0()
    ADD ESP,0x10                        ; 0055cc12
    LEA EAX,[ESP + 0x8]                 ; 0055cc15
    PUSH EAX                            ; 0055cc19
    CALL FUN_0055a560                   ; 0055cc1a
        ;   XREF to: 0055a560 (UNCONDITIONAL_CALL)  ; undefined FUN_0055a560()
    ADD ESP,0x4                         ; 0055cc1f
    XOR EDX,EDX                         ; 0055cc22
    MOV ECX,0xbff00000                  ; 0055cc24
    MOV dword ptr [ESP],EDX             ; 0055cc29
    MOV dword ptr [ESP + 0x4],ECX       ; 0055cc2c
    MOV EAX,dword ptr [ESP]             ; 0055cc30
    MOV EDX,dword ptr [ESP + 0x4]       ; 0055cc33
    MOV ESP,EBP                         ; 0055cc37
    POP EBP                             ; 0055cc39
    POP EDI                             ; 0055cc3a
    POP ESI                             ; 0055cc3b
    POP EBX                             ; 0055cc3c
    RET                                 ; 0055cc3d

