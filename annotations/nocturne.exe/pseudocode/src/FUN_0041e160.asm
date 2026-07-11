; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * FUN_0041e160(float *param_1,float *param_2,float *param_3)
;
;
; XREF[4]:
;   FUN_0041e200 at 0041e213
;   FUN_0041f190 at 0041f1dc
;   FUN_00479ab0 at 00479b1b
;   FUN_004f6170 at 004f67c9
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041e160
        ;   Label: FUN_0041e160
    PUSH ESI                            ; 0041e161
    MOV ECX,dword ptr [ESP + 0xc]       ; 0041e162
    MOV EDX,dword ptr [ESP + 0x10]      ; 0041e166
    MOV ESI,dword ptr [ESP + 0x14]      ; 0041e16a
    MOV EAX,dword ptr [ESI]             ; 0041e16e
    LEA EBX,[ESI + 0x4]                 ; 0041e170
    MOV dword ptr [EDX],EAX             ; 0041e173
    LEA EAX,[EDX + 0x4]                 ; 0041e175
    MOV EBX,dword ptr [EBX]             ; 0041e178
    MOV dword ptr [EAX],EBX             ; 0041e17a
    LEA EBX,[EAX + 0x4]                 ; 0041e17c
    LEA EAX,[ESI + 0x8]                 ; 0041e17f
    MOV EAX,dword ptr [EAX]             ; 0041e182
    MOV dword ptr [EBX],EAX             ; 0041e184
    FLD float ptr [EDX]                 ; 0041e186
    FCOMP float ptr [ECX]               ; 0041e188
    FNSTSW AX                           ; 0041e18a
    SAHF                                ; 0041e18c
    JC 0x0041e1e1                       ; 0041e18d
        ;   XREF to: 0041e1e1 (CONDITIONAL_JUMP)  ; LAB_0041e1e1
    FLD float ptr [EDX]                 ; 0041e18f
        ;   Label: LAB_0041e18f
    FCOMP float ptr [ECX + 0xc]         ; 0041e191
    FNSTSW AX                           ; 0041e194
    SAHF                                ; 0041e196
    JBE 0x0041e19e                      ; 0041e197
        ;   XREF to: 0041e19e (CONDITIONAL_JUMP)  ; LAB_0041e19e
    MOV EAX,dword ptr [ECX + 0xc]       ; 0041e199
    MOV dword ptr [EDX],EAX             ; 0041e19c
    FLD float ptr [EDX + 0x4]           ; 0041e19e
        ;   Label: LAB_0041e19e
    FCOMP float ptr [ECX + 0x4]         ; 0041e1a1
    FNSTSW AX                           ; 0041e1a4
    SAHF                                ; 0041e1a6
    JNC 0x0041e1af                      ; 0041e1a7
        ;   XREF to: 0041e1af (CONDITIONAL_JUMP)  ; LAB_0041e1af
    MOV EAX,dword ptr [ECX + 0x4]       ; 0041e1a9
    MOV dword ptr [EDX + 0x4],EAX       ; 0041e1ac
    FLD float ptr [EDX + 0x4]           ; 0041e1af
        ;   Label: LAB_0041e1af
    FCOMP float ptr [ECX + 0x10]        ; 0041e1b2
    FNSTSW AX                           ; 0041e1b5
    SAHF                                ; 0041e1b7
    JBE 0x0041e1c0                      ; 0041e1b8
        ;   XREF to: 0041e1c0 (CONDITIONAL_JUMP)  ; LAB_0041e1c0
    MOV EAX,dword ptr [ECX + 0x10]      ; 0041e1ba
    MOV dword ptr [EDX + 0x4],EAX       ; 0041e1bd
    FLD float ptr [EDX + 0x8]           ; 0041e1c0
        ;   Label: LAB_0041e1c0
    FCOMP float ptr [ECX + 0x8]         ; 0041e1c3
    FNSTSW AX                           ; 0041e1c6
    SAHF                                ; 0041e1c8
    JNC 0x0041e1d1                      ; 0041e1c9
        ;   XREF to: 0041e1d1 (CONDITIONAL_JUMP)  ; LAB_0041e1d1
    MOV EAX,dword ptr [ECX + 0x8]       ; 0041e1cb
    MOV dword ptr [EDX + 0x8],EAX       ; 0041e1ce
    FLD float ptr [EDX + 0x8]           ; 0041e1d1
        ;   Label: LAB_0041e1d1
    FCOMP float ptr [ECX + 0x14]        ; 0041e1d4
    FNSTSW AX                           ; 0041e1d7
    SAHF                                ; 0041e1d9
    JA 0x0041e1e7                       ; 0041e1da
        ;   XREF to: 0041e1e7 (CONDITIONAL_JUMP)  ; LAB_0041e1e7
    MOV EAX,EDX                         ; 0041e1dc
    POP ESI                             ; 0041e1de
    POP EBX                             ; 0041e1df
    RET                                 ; 0041e1e0
    MOV EAX,dword ptr [ECX]             ; 0041e1e1
        ;   Label: LAB_0041e1e1
    MOV dword ptr [EDX],EAX             ; 0041e1e3
    JMP 0x0041e18f                      ; 0041e1e5
        ;   XREF to: 0041e18f (UNCONDITIONAL_JUMP)  ; LAB_0041e18f
    MOV EAX,dword ptr [ECX + 0x14]      ; 0041e1e7
        ;   Label: LAB_0041e1e7
    MOV dword ptr [EDX + 0x8],EAX       ; 0041e1ea
    MOV EAX,EDX                         ; 0041e1ed
    POP ESI                             ; 0041e1ef
    POP EBX                             ; 0041e1f0
    RET                                 ; 0041e1f1

