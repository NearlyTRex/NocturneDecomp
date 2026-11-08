; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a6a00(int param_1,float param_2)
;
; Local Variables:
; undefined8       Stack[-0x88]:8  local_88
; undefined8       Stack[-0x80]:8  local_80
; undefined4       Stack[-0x78]:4  local_78
; undefined        Stack[-0x74]:1  local_74
;
; XREF[1]:
;   FUN_005a5550 at 005a55a2
;
; Referenced Globals:
;   TerminatedCString s_wing_wav_f_005f8df8
;   TerminatedCString s_wing_wav_1_5_1_2_005f8e06
;   undefined4 DAT_005f8e20
;
; Called Functions:
;   FUN_00524270
;   FUN_005bfb40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a6a00
        ;   Label: FUN_005a6a00
    PUSH ESI                            ; 005a6a01
    PUSH EBP                            ; 005a6a02
    MOV EBP,ESP                         ; 005a6a03
    SUB ESP,0x70                        ; 005a6a05
    AND ESP,0xfffffff8                  ; 005a6a08
    FLDZ                                ; 005a6a0b
    MOV EBX,dword ptr [EBP + 0x10]      ; 005a6a0d
    FCOMP float ptr [EBP + 0x14]        ; 005a6a10
    FNSTSW AX                           ; 005a6a13
    SAHF                                ; 005a6a15
    JNC 0x005a6ad4                      ; 005a6a16
        ;   XREF to: 005a6ad4 (CONDITIONAL_JUMP)  ; LAB_005a6ad4
    LEA ESI,[EBX + 0xc268]              ; 005a6a1c
    LEA EAX,[EBP + 0x14]                ; 005a6a22
        ;   Label: LAB_005a6a22
    PUSH EAX                            ; 005a6a25
    PUSH ESI                            ; 005a6a26
    CALL FUN_00524270                   ; 005a6a27
        ;   XREF to: 00524270 (UNCONDITIONAL_CALL)  ; undefined FUN_00524270()
    ADD ESP,0x8                         ; 005a6a2c
    CMP EAX,0x66                        ; 005a6a2f
    JNC 0x005a6ae1                      ; 005a6a32
        ;   XREF to: 005a6ae1 (CONDITIONAL_JUMP)  ; LAB_005a6ae1
    CMP EAX,0x65                        ; 005a6a38
    JNZ 0x005a6ac6                      ; 005a6a3b
        ;   XREF to: 005a6ac6 (CONDITIONAL_JUMP)  ; LAB_005a6ac6
    XOR EDX,EDX                         ; 005a6a41
    MOV ECX,dword ptr [EBX + 0xbe79c]   ; 005a6a43
    MOV dword ptr [ESP + 0x8],EDX       ; 005a6a49
    CMP ECX,0x1                         ; 005a6a4d
    JNZ 0x005a6a5c                      ; 005a6a50
        ;   XREF to: 005a6a5c (CONDITIONAL_JUMP)  ; LAB_005a6a5c
    MOV EAX,dword ptr [EBX + 0xbf3cc]   ; 005a6a52
    MOV dword ptr [ESP + 0x8],EAX       ; 005a6a58
    CMP dword ptr [EBX + 0xbe79c],0x2   ; 005a6a5c
        ;   Label: LAB_005a6a5c
    JNZ 0x005a6a6d                      ; 005a6a63
        ;   XREF to: 005a6a6d (CONDITIONAL_JUMP)  ; LAB_005a6a6d
    MOV dword ptr [ESP + 0x8],0x3f800000 ; 005a6a65
    CMP dword ptr [EBX + 0xbe79c],0x3   ; 005a6a6d
        ;   Label: LAB_005a6a6d
    JNZ 0x005a6a80                      ; 005a6a74
        ;   XREF to: 005a6a80 (CONDITIONAL_JUMP)  ; LAB_005a6a80
    MOV EAX,dword ptr [EBX + 0xbf3cc]   ; 005a6a76
    MOV dword ptr [ESP + 0x8],EAX       ; 005a6a7c
    FLD float ptr [ESP + 0x8]           ; 005a6a80
        ;   Label: LAB_005a6a80
    FLDZ                                ; 005a6a84
    FXCH                                ; 005a6a86
    FSTP double ptr [ESP]               ; 005a6a88
    FCOMP double ptr [ESP]              ; 005a6a8b
    FNSTSW AX                           ; 005a6a8e
    SAHF                                ; 005a6a90
    JNC 0x005a6ac6                      ; 005a6a91
        ;   XREF to: 005a6ac6 (CONDITIONAL_JUMP)  ; LAB_005a6ac6
    FLD double ptr [ESP]                ; 005a6a93
    FMUL double ptr [0x005f8e20]        ; 005a6a96 | DAT_005f8e20
    SUB ESP,0x8                         ; 005a6a9c
    FSTP double ptr [ESP]               ; 005a6a9f
    PUSH 0x5f8df8                       ; 005a6aa2 | = "wing?.wav @%f"
    LEA EAX,[ESP + 0x18]                ; 005a6aa7
    PUSH EAX                            ; 005a6aab
    CALL FUN_005bfb40                   ; 005a6aac
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x10                        ; 005a6ab1
    LEA EDX,[ESP + 0xc]                 ; 005a6ab4
    PUSH EDX                            ; 005a6ab8
    MOV EAX,dword ptr [EBX + 0x154]     ; 005a6ab9
        ;   Label: LAB_005a6ab9
    PUSH EBX                            ; 005a6abf
    CALL dword ptr [EAX + 0x2c]         ; 005a6ac0
    ADD ESP,0x8                         ; 005a6ac3
    FLDZ                                ; 005a6ac6
        ;   Label: LAB_005a6ac6
    FCOMP float ptr [EBP + 0x14]        ; 005a6ac8
    FNSTSW AX                           ; 005a6acb
    SAHF                                ; 005a6acd
    JC 0x005a6a22                       ; 005a6ace
        ;   XREF to: 005a6a22 (CONDITIONAL_JUMP)  ; LAB_005a6a22
    MOV ESP,EBP                         ; 005a6ad4
        ;   Label: LAB_005a6ad4
    POP EBP                             ; 005a6ad6
    POP ESI                             ; 005a6ad7
    POP EBX                             ; 005a6ad8
    RET                                 ; 005a6ad9
    PUSH 0x5f8e06                       ; 005a6ada | = "wing?.wav @1.5 *1.2"
        ;   Label: LAB_005a6ada
    JMP 0x005a6ab9                      ; 005a6adf
        ;   XREF to: 005a6ab9 (UNCONDITIONAL_JUMP)  ; LAB_005a6ab9
    JBE 0x005a6ada                      ; 005a6ae1
        ;   XREF to: 005a6ada (CONDITIONAL_JUMP)  ; LAB_005a6ada
        ;   Label: LAB_005a6ae1
    CMP EAX,0x67                        ; 005a6ae3
    JZ 0x005a6ada                       ; 005a6ae6
        ;   XREF to: 005a6ada (CONDITIONAL_JUMP)  ; LAB_005a6ada
    FLDZ                                ; 005a6ae8
    FCOMP float ptr [EBP + 0x14]        ; 005a6aea
    FNSTSW AX                           ; 005a6aed
    SAHF                                ; 005a6aef
    JC 0x005a6a22                       ; 005a6af0
        ;   XREF to: 005a6a22 (CONDITIONAL_JUMP)  ; LAB_005a6a22
    MOV ESP,EBP                         ; 005a6af6
    POP EBP                             ; 005a6af8
    POP ESI                             ; 005a6af9
    POP EBX                             ; 005a6afa
    RET                                 ; 005a6afb

