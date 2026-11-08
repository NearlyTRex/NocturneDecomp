; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00589fd0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005ee532
;   undefined4 DAT_005ee536
;   undefined4 DAT_005ee53a
;   undefined4 DAT_00616494
;   undefined4 DAT_0061b5a8
;   undefined4 DAT_01cb3954
;   undefined4 DAT_01cb3958
;   undefined4 DAT_01cb395c
;   undefined4 DAT_01cb3960
;   undefined4 DAT_01cb3988
;   undefined4 DAT_01cb3a90
;   undefined4 DAT_01cb5604
;   undefined4 DAT_01cb560c
;   undefined4 DAT_01cb5620
;   undefined4 DAT_01cb6900
;   ... and 6 more
;
; Called Functions:
;   FUN_00408d70
;   FUN_0040c8f0
;   FUN_00448810
;   FUN_00448860
;   FUN_00449280
;   FUN_00449530
;   FUN_0044d570
;   FUN_005306b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00589fd0
        ;   Label: FUN_00589fd0
    PUSH ESI                            ; 00589fd1
    PUSH EDI                            ; 00589fd2
    PUSH EBP                            ; 00589fd3
    SUB ESP,0x90                        ; 00589fd4
    MOV EBX,dword ptr [ESP + 0xa4]      ; 00589fda
    PUSH EBX                            ; 00589fe1
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00589fe2
    LEA ESI,[ESP + 0x44]                ; 00589fe8
    LEA EDI,[ESP + 0x2c]                ; 00589fec
    CALL dword ptr [EAX + 0xe8]         ; 00589ff0
    LEA ESI,[ESP + 0x44]                ; 00589ff6
    ADD ESP,0x4                         ; 00589ffa
    LEA EAX,[ESP + 0x28]                ; 00589ffd
    MOV EBP,0x3f800000                  ; 0058a001
    PUSH EAX                            ; 0058a006
    MOVSD ES:EDI,ESI                    ; 0058a007
    MOVSD ES:EDI,ESI                    ; 0058a008
    MOVSD ES:EDI,ESI                    ; 0058a009
    PUSH EBX                            ; 0058a00a
    LEA ESI,[ESP + 0x54]                ; 0058a00b
    LEA EDI,[ESP + 0x3c]                ; 0058a00f
    CALL FUN_00408d70                   ; 0058a013
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00408d70()
    LEA ESI,[ESP + 0x54]                ; 0058a018
    MOV EDX,0x1                         ; 0058a01c
    LEA EAX,[ESP + 0x60]                ; 0058a021
    ADD ESP,0x8                         ; 0058a025
    MOV dword ptr [0x01cb5604],EDX      ; 0058a028 | DAT_01cb5604
    MOVSD ES:EDI,ESI                    ; 0058a02e
    MOVSD ES:EDI,ESI                    ; 0058a02f
    MOVSD ES:EDI,ESI                    ; 0058a030
    MOV dword ptr [0x01cb560c],EDX      ; 0058a031 | DAT_01cb560c
    LEA EDI,[ESP + 0x58]                ; 0058a037
    LEA ESI,[EBX + 0x30]                ; 0058a03b
    PUSH EAX                            ; 0058a03e
    LEA EAX,[ESP + 0x4]                 ; 0058a03f
    MOVSD ES:EDI,ESI                    ; 0058a043
    MOVSD ES:EDI,ESI                    ; 0058a044
    MOVSD ES:EDI,ESI                    ; 0058a045
    PUSH EAX                            ; 0058a046
    FLD float ptr [ESP + 0x60]          ; 0058a047
    LEA EDI,[ESP + 0x78]                ; 0058a04b
    FADD float ptr [0x005ee532]         ; 0058a04f | DAT_005ee532
    XOR ESI,ESI                         ; 0058a055
    FSTP float ptr [ESP + 0x60]         ; 0058a057
    CALL FUN_00449280                   ; 0058a05b
        ;   XREF to: 00449280 (UNCONDITIONAL_CALL)  ; undefined FUN_00449280()
    ADD ESP,0x8                         ; 0058a060
    LEA EAX,[ESP + 0x7c]                ; 0058a063
    MOV dword ptr [ESP + 0x7c],ESI      ; 0058a067
    PUSH EAX                            ; 0058a06b
    LEA EAX,[ESP + 0x4]                 ; 0058a06c
    MOV dword ptr [ESP + 0x84],ESI      ; 0058a070
    PUSH EAX                            ; 0058a077
    LEA ESI,[ESP + 0x6c]                ; 0058a078
    MOV dword ptr [ESP + 0x8c],EBP      ; 0058a07c
    CALL FUN_00449530                   ; 0058a083
        ;   XREF to: 00449530 (UNCONDITIONAL_CALL)  ; undefined FUN_00449530()
    LEA ESI,[ESP + 0x6c]                ; 0058a088
    ADD ESP,0x8                         ; 0058a08c
    LEA EAX,[ESP + 0x34]                ; 0058a08f
    FLD float ptr [ESP + 0x34]          ; 0058a093
    FLD float ptr [ESP + 0x38]          ; 0058a097
    MOVSD ES:EDI,ESI                    ; 0058a09b
    MOVSD ES:EDI,ESI                    ; 0058a09c
    MOVSD ES:EDI,ESI                    ; 0058a09d
    FLD float ptr [ESP + 0x3c]          ; 0058a09e
    FXCH ST2                            ; 0058a0a2
    FADD float ptr [ESP + 0x70]         ; 0058a0a4
    FXCH                                ; 0058a0a8
    FADD float ptr [ESP + 0x74]         ; 0058a0aa
    FXCH ST2                            ; 0058a0ae
    FADD float ptr [ESP + 0x78]         ; 0058a0b0
    FXCH                                ; 0058a0b4
    FSTP float ptr [ESP + 0x34]         ; 0058a0b6
    FXCH                                ; 0058a0ba
    FSTP float ptr [ESP + 0x38]         ; 0058a0bc
    FSTP float ptr [ESP + 0x3c]         ; 0058a0c0
    CMP EAX,0x1cb3954                   ; 0058a0c4
    JZ 0x0058a0e6                       ; 0058a0c9
        ;   XREF to: 0058a0e6 (CONDITIONAL_JUMP)  ; LAB_0058a0e6
    MOV EAX,dword ptr [ESP + 0x34]      ; 0058a0cb
    MOV [0x01cb3954],EAX                ; 0058a0cf | DAT_01cb3954
    MOV EAX,dword ptr [ESP + 0x38]      ; 0058a0d4
    MOV [0x01cb3958],EAX                ; 0058a0d8 | DAT_01cb3958
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0058a0dd
    MOV [0x01cb395c],EAX                ; 0058a0e1 | DAT_01cb395c
    LEA EAX,[ESP + 0x58]                ; 0058a0e6
        ;   Label: LAB_0058a0e6
    PUSH EAX                            ; 0058a0ea
    PUSH 0x1cb3960                      ; 0058a0eb | DAT_01cb3960
    MOV ESI,0x3f800000                  ; 0058a0f0
    CALL FUN_00449280                   ; 0058a0f5
        ;   XREF to: 00449280 (UNCONDITIONAL_CALL)  ; undefined FUN_00449280()
    MOV EAX,0x42000000                  ; 0058a0fa
    ADD ESP,0x8                         ; 0058a0ff
    MOV EDI,dword ptr [0x01cedf50]      ; 0058a102 | DAT_01cedf50
    MOV ECX,0x1                         ; 0058a108
    PUSH EDI                            ; 0058a10d
    MOV [0x01cb3a90],EAX                ; 0058a10e | DAT_01cb3a90
    MOV [0x01cb3988],EAX                ; 0058a113 | DAT_01cb3988
    PUSH EBX                            ; 0058a118
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0058a119
    MOV dword ptr [0x01cb5620],ECX      ; 0058a11f | DAT_01cb5620
    MOV dword ptr [ESP + 0x94],ESI      ; 0058a125
    CALL dword ptr [EAX + 0x9c]         ; 0058a12c
    ADD ESP,0x4                         ; 0058a132
    PUSH EAX                            ; 0058a135
    CALL FUN_0040c8f0                   ; 0058a136
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c8f0()
    ADD ESP,0x8                         ; 0058a13b
    TEST EAX,EAX                        ; 0058a13e
    JZ 0x0058a175                       ; 0058a140
        ;   XREF to: 0058a175 (CONDITIONAL_JUMP)  ; LAB_0058a175
    MOV EAX,dword ptr [EAX + 0x2437c]   ; 0058a142
    MOV dword ptr [ESP + 0x88],EAX      ; 0058a148
    FLD float ptr [ESP + 0x88]          ; 0058a14f
    FCOMP float ptr [0x005ee536]        ; 0058a156 | DAT_005ee536
    FNSTSW AX                           ; 0058a15c
    SAHF                                ; 0058a15e
    JNC 0x0058a175                      ; 0058a15f
        ;   XREF to: 0058a175 (CONDITIONAL_JUMP)  ; LAB_0058a175
    FLD float ptr [ESP + 0x88]          ; 0058a161
    FMUL float ptr [0x005ee53a]         ; 0058a168 | DAT_005ee53a
    FSTP float ptr [ESP + 0x8c]         ; 0058a16e
    PUSH dword ptr [ESP + 0x8c]         ; 0058a175
        ;   Label: LAB_0058a175
    PUSH 0x1cb3950                      ; 0058a17c
    CALL FUN_0044d570                   ; 0058a181
        ;   XREF to: 0044d570 (UNCONDITIONAL_CALL)  ; undefined FUN_0044d570()
    MOV EAX,[0x00616494]                ; 0058a186 | DAT_00616494 | DAT_01cb6900
    MOV EBP,dword ptr [EAX + 0x264]     ; 0058a18b | DAT_01cb6b64
    ADD ESP,0x8                         ; 0058a191
    TEST EBP,EBP                        ; 0058a194
    JNZ 0x0058a1a3                      ; 0058a196
        ;   XREF to: 0058a1a3 (CONDITIONAL_JUMP)  ; LAB_0058a1a3
    ADD ESP,0x90                        ; 0058a198
    POP EBP                             ; 0058a19e
    POP EDI                             ; 0058a19f
    POP ESI                             ; 0058a1a0
    POP EBX                             ; 0058a1a1
    RET                                 ; 0058a1a2
    LEA EAX,[ESP + 0x34]                ; 0058a1a3
        ;   Label: LAB_0058a1a3
    PUSH EAX                            ; 0058a1a7
    PUSH 0x2661f3c                      ; 0058a1a8
    CALL FUN_00448810                   ; 0058a1ad
        ;   XREF to: 00448810 (UNCONDITIONAL_CALL)  ; undefined FUN_00448810()
    ADD ESP,0x8                         ; 0058a1b2
    MOV EAX,0x8000                      ; 0058a1b5
    PUSH 0x40a00000                     ; 0058a1ba
    MOV [0x02661f78],EAX                ; 0058a1bf | DAT_02661f78
    MOV AH,0x20                         ; 0058a1c4
    PUSH 0x2661f3c                      ; 0058a1c6
    MOV byte ptr [0x02661f58],AH        ; 0058a1cb | DAT_02661f58
    CALL FUN_00448860                   ; 0058a1d1
        ;   XREF to: 00448860 (UNCONDITIONAL_CALL)  ; undefined FUN_00448860()
    ADD ESP,0x8                         ; 0058a1d6
    PUSH 0x2661f3c                      ; 0058a1d9
    MOV ECX,dword ptr [0x0061b5a8]      ; 0058a1de | DAT_0061b5a8
    XOR EDX,EDX                         ; 0058a1e4
    PUSH ECX                            ; 0058a1e6 | DAT_01e661b8
    MOV dword ptr [0x02661f5c],EDX      ; 0058a1e7 | DAT_02661f5c
    CALL FUN_005306b0                   ; 0058a1ed
        ;   XREF to: 005306b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005306b0()
    ADD ESP,0x8                         ; 0058a1f2
    ADD ESP,0x90                        ; 0058a1f5
    POP EBP                             ; 0058a1fb
    POP EDI                             ; 0058a1fc
    POP ESI                             ; 0058a1fd
    POP EBX                             ; 0058a1fe
    RET                                 ; 0058a1ff

