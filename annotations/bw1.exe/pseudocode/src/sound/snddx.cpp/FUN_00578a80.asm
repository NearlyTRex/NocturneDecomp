; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00578a80(undefined4 param_1,int param_2,int param_3,int param_4)
;
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_005f4c35
;   TerminatedCString s_sound_snddx_cpp_005f4e42
;   TerminatedCString s_DirectSoundDevice_lockSa_005f4e55
;   TerminatedCString s_Lock_hw_sample_buffer_005f4e85
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_005030e0
;   FUN_005773f0
;   FUN_00577500
;   FUN_005bfb40
;   FUN_005bfb70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00578a80
        ;   Label: FUN_00578a80
    PUSH ESI                            ; 00578a81
    PUSH EDI                            ; 00578a82
    PUSH EBP                            ; 00578a83
    SUB ESP,0x198                       ; 00578a84
    MOV EAX,dword ptr [ESP + 0x1b0]     ; 00578a8a
    TEST EAX,EAX                        ; 00578a91
    JLE 0x00578a9a                      ; 00578a93
        ;   XREF to: 00578a9a (CONDITIONAL_JUMP)  ; LAB_00578a9a
    CMP EAX,0x41                        ; 00578a95
    JL 0x00578aa7                       ; 00578a98
        ;   XREF to: 00578aa7 (CONDITIONAL_JUMP)  ; LAB_00578aa7
    XOR EAX,EAX                         ; 00578a9a
        ;   Label: LAB_00578a9a
    ADD ESP,0x198                       ; 00578a9c
    POP EBP                             ; 00578aa2
    POP EDI                             ; 00578aa3
    POP ESI                             ; 00578aa4
    POP EBX                             ; 00578aa5
    RET                                 ; 00578aa6
    LEA EBX,[EAX*0x4 + 0x0]             ; 00578aa7
        ;   Label: LAB_00578aa7
    SUB EBX,EAX                         ; 00578aae
    SHL EBX,0x3                         ; 00578ab0
    CMP dword ptr [EBX + 0x2c81dc4],0x0 ; 00578ab3
    JZ 0x00578a9a                       ; 00578aba
        ;   XREF to: 00578a9a (CONDITIONAL_JUMP)  ; LAB_00578a9a
    CMP dword ptr [EBX + 0x2c81dcc],0x1 ; 00578abc
    JL 0x00578a9a                       ; 00578ac3
        ;   XREF to: 00578a9a (CONDITIONAL_JUMP)  ; LAB_00578a9a
    LEA EBX,[EAX*0x4 + 0x0]             ; 00578ac5
    SUB EBX,EAX                         ; 00578acc
    SHL EBX,0x3                         ; 00578ace
    ADD EBX,0x2c81dc4                   ; 00578ad1
    CMP dword ptr [EBX + 0x10],0x0      ; 00578ad7
    JZ 0x00578b00                       ; 00578adb
        ;   XREF to: 00578b00 (CONDITIONAL_JUMP)  ; LAB_00578b00
    MOV EDI,0x5f4e42                    ; 00578add | = "..\\sound\\snddx.cpp"
    MOV EBP,0x440                       ; 00578ae2
    PUSH 0x5f4e55                       ; 00578ae7 | = "DirectSoundDevice::lockSample - alrea..."
    MOV dword ptr [0x01d1d400],EDI      ; 00578aec | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBP      ; 00578af2 | DAT_01d1d404
    CALL FUN_005030e0                   ; 00578af8
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 00578afd
    MOV EDX,dword ptr [ESP + 0x1b4]     ; 00578b00
        ;   Label: LAB_00578b00
    MOV EAX,dword ptr [EBX + 0x8]       ; 00578b07
    IMUL EDX,EAX                        ; 00578b0a
    MOV EAX,EDX                         ; 00578b0d
    SAR EDX,0x1f                        ; 00578b0f
    SHL EDX,0x8                         ; 00578b12
    SBB EAX,EDX                         ; 00578b15
    SAR EAX,0x8                         ; 00578b17
    MOV EDI,dword ptr [ESP + 0x1b8]     ; 00578b1a
    ADD EDI,0x1f                        ; 00578b21
    MOV ESI,EAX                         ; 00578b24
    MOV EBP,EAX                         ; 00578b26
    AND SI,0xffe0                       ; 00578b28
    MOV EAX,dword ptr [EBX + 0xc]       ; 00578b2c
    AND DI,0xffe0                       ; 00578b2f
    SUB EAX,ESI                         ; 00578b33
    CMP EDI,EAX                         ; 00578b35
    JLE 0x00578b3b                      ; 00578b37
        ;   XREF to: 00578b3b (CONDITIONAL_JUMP)  ; LAB_00578b3b
    MOV EDI,EAX                         ; 00578b39
    PUSH 0x0                            ; 00578b3b
        ;   Label: LAB_00578b3b
    LEA ECX,[ESP + 0x198]               ; 00578b3d
    PUSH ECX                            ; 00578b44
    LEA ECX,[ESP + 0x198]               ; 00578b45
    PUSH ECX                            ; 00578b4c
    LEA ECX,[EBX + 0x14]                ; 00578b4d
    PUSH ECX                            ; 00578b50
    LEA ECX,[EBX + 0x10]                ; 00578b51
    PUSH ECX                            ; 00578b54
    PUSH EDI                            ; 00578b55
    MOV EAX,dword ptr [EBX]             ; 00578b56
    PUSH ESI                            ; 00578b58
    MOV EDX,dword ptr [EAX]             ; 00578b59
    PUSH EAX                            ; 00578b5b
    CALL dword ptr [EDX + 0x2c]         ; 00578b5c
    TEST EAX,EAX                        ; 00578b5f
    JNZ 0x00578b99                      ; 00578b61
        ;   XREF to: 00578b99 (CONDITIONAL_JUMP)  ; LAB_00578b99
    MOV EAX,dword ptr [EBX + 0xc]       ; 00578b63
    ADD EDI,ESI                         ; 00578b66
    SUB EAX,0x20                        ; 00578b68
    CMP EDI,EAX                         ; 00578b6b
    JL 0x00578b87                       ; 00578b6d
        ;   XREF to: 00578b87 (CONDITIONAL_JUMP)  ; LAB_00578b87
    MOV EAX,dword ptr [EBX + 0x10]      ; 00578b6f
    ADD EAX,dword ptr [EBX + 0xc]       ; 00578b72
    PUSH 0x20                           ; 00578b75
    SUB EAX,ESI                         ; 00578b77
    PUSH 0x0                            ; 00578b79
    SUB EAX,0x20                        ; 00578b7b
    PUSH EAX                            ; 00578b7e
    CALL FUN_005bfb70                   ; 00578b7f
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb70()
    ADD ESP,0xc                         ; 00578b84
    MOV EAX,dword ptr [EBX + 0x10]      ; 00578b87
        ;   Label: LAB_00578b87
    ADD EAX,EBP                         ; 00578b8a
    SUB EAX,ESI                         ; 00578b8c
    ADD ESP,0x198                       ; 00578b8e
    POP EBP                             ; 00578b94
    POP EDI                             ; 00578b95
    POP ESI                             ; 00578b96
    POP EBX                             ; 00578b97
    RET                                 ; 00578b98
    PUSH EAX                            ; 00578b99
        ;   Label: LAB_00578b99
    CALL FUN_00577500                   ; 00578b9a
        ;   XREF to: 00577500 (UNCONDITIONAL_CALL)  ; undefined FUN_00577500()
    ADD ESP,0x4                         ; 00578b9f
    PUSH EAX                            ; 00578ba2
    PUSH 0x5f4e85                       ; 00578ba3 | = "Lock hw sample buffer"
    PUSH 0x5f4c35                       ; 00578ba8 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xc]                 ; 00578bad
    PUSH EAX                            ; 00578bb1
    CALL FUN_005bfb40                   ; 00578bb2
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x10                        ; 00578bb7
    MOV EAX,ESP                         ; 00578bba
    PUSH EAX                            ; 00578bbc
    CALL FUN_005773f0                   ; 00578bbd
        ;   XREF to: 005773f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005773f0()
    ADD ESP,0x4                         ; 00578bc2
    XOR EAX,EAX                         ; 00578bc5
    ADD ESP,0x198                       ; 00578bc7
    POP EBP                             ; 00578bcd
    POP EDI                             ; 00578bce
    POP ESI                             ; 00578bcf
    POP EBX                             ; 00578bd0
    RET                                 ; 00578bd1

