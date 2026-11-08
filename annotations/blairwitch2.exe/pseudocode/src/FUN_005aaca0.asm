; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005aaca0(int param_1,float param_2)
;
;
; Referenced Globals:
;   undefined4 s_MeleeAttack_005f0be5+1
;   TerminatedCString s_Chasing_005f0bf2
;   undefined4 DAT_005f0bfe
;   undefined4 DAT_005f0c06
;   undefined4 DAT_00600a6c
;
; Called Functions:
;   FUN_00503620
;   FUN_0059d8e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005aaca0
        ;   Label: FUN_005aaca0
    SUB ESP,0x10                        ; 005aaca1
    MOV EBX,dword ptr [ESP + 0x18]      ; 005aaca4
    PUSH EBX                            ; 005aaca8
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 005aaca9
    CALL dword ptr [EAX + 0x17c]        ; 005aacaf
    ADD ESP,0x4                         ; 005aacb5
    TEST EAX,EAX                        ; 005aacb8
    JNZ 0x005aacc1                      ; 005aacba
        ;   XREF to: 005aacc1 (CONDITIONAL_JUMP)  ; LAB_005aacc1
    ADD ESP,0x10                        ; 005aacbc
        ;   Label: LAB_005aacbc
    POP EBX                             ; 005aacbf
    RET                                 ; 005aacc0
    PUSH 0x1                            ; 005aacc1
        ;   Label: LAB_005aacc1
    PUSH 0x0                            ; 005aacc3
    LEA EAX,[EBX + 0x2b4]               ; 005aacc5
    PUSH EAX                            ; 005aaccb
    CALL FUN_00503620                   ; 005aaccc
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 005aacd1
    FLD float ptr [ESP + 0x1c]          ; 005aacd4
    FMUL double ptr [0x005f0bfe]        ; 005aacd8 | DAT_005f0bfe
    FLD float ptr [EBX + 0x25a8]        ; 005aacde
    FXCH                                ; 005aace4
    FADD ST0,ST1                        ; 005aace6
    MOV EDX,dword ptr [EBX + 0x10a78]   ; 005aace8
    FSTP ST1                            ; 005aacee
    FSTP float ptr [EBX + 0x25a8]       ; 005aacf0
    TEST EDX,EDX                        ; 005aacf6
    JZ 0x005aad1b                       ; 005aacf8
        ;   XREF to: 005aad1b (CONDITIONAL_JUMP)  ; LAB_005aad1b
    LEA EAX,[EBX + 0x20]                ; 005aacfa
    FLD float ptr [EAX]                 ; 005aacfd
    FSUB float ptr [EDX + 0x20]         ; 005aacff
    FMUL ST0                            ; 005aad02
    FLD float ptr [EAX + 0x8]           ; 005aad04
    FSUB float ptr [EDX + 0x28]         ; 005aad07
    FMUL ST0                            ; 005aad0a
    FADDP                               ; 005aad0c
    FSQRT                               ; 005aad0e
    FCOMP float ptr [0x00600a6c]        ; 005aad10 | DAT_00600a6c
    FNSTSW AX                           ; 005aad16
    SAHF                                ; 005aad18
    JC 0x005aad51                       ; 005aad19
        ;   XREF to: 005aad51 (CONDITIONAL_JUMP)  ; LAB_005aad51
    FLD float ptr [EBX + 0x25a8]        ; 005aad1b
        ;   Label: LAB_005aad1b
    FCOMP double ptr [0x005f0c06]       ; 005aad21 | DAT_005f0c06
    FNSTSW AX                           ; 005aad27
    SAHF                                ; 005aad29
    JC 0x005aacbc                       ; 005aad2a
        ;   XREF to: 005aacbc (CONDITIONAL_JUMP)  ; LAB_005aacbc
    PUSH 0x5f0bf2                       ; 005aad2c | = "Chasing"
    ADD EBX,0x10af8                     ; 005aad31
    FLD float ptr [0x00600a6c]          ; 005aad37 | DAT_00600a6c
    PUSH EBX                            ; 005aad3d
    FSTP float ptr [EBX + 0x89c]        ; 005aad3e
    CALL FUN_0059d8e0                   ; 005aad44
        ;   XREF to: 0059d8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059d8e0()
    ADD ESP,0x8                         ; 005aad49
    ADD ESP,0x10                        ; 005aad4c
    POP EBX                             ; 005aad4f
    RET                                 ; 005aad50
    PUSH 0x5f0be6                       ; 005aad51 | s_MeleeAttack_005f0be5+1
        ;   Label: LAB_005aad51
    ADD EBX,0x10af8                     ; 005aad56
    PUSH EBX                            ; 005aad5c
    CALL FUN_0059d8e0                   ; 005aad5d
        ;   XREF to: 0059d8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059d8e0()
    ADD ESP,0x8                         ; 005aad62
    ADD ESP,0x10                        ; 005aad65
    POP EBX                             ; 005aad68
    RET                                 ; 005aad69

