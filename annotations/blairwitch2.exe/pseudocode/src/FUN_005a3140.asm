; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a3140(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_Bip01_Tongue_005f00b9
;   TerminatedCString s_Dummy07_005f00c6
;   TerminatedCString s_Bip01_Tongue_005f00ce
;   TerminatedCString s_Bip01_R_Finger0_005f00db
;
; Called Functions:
;   FUN_00540e80
;   FUN_00547890
;   FUN_0059e6a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a3140
        ;   Label: FUN_005a3140
    PUSH ESI                            ; 005a3141
    MOV ESI,dword ptr [ESP + 0xc]       ; 005a3142
    PUSH ESI                            ; 005a3146
    CALL FUN_0059e6a0                   ; 005a3147
        ;   XREF to: 0059e6a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059e6a0()
    ADD ESP,0x4                         ; 005a314c
    LEA EAX,[ESI + 0x2b4]               ; 005a314f
    PUSH EAX                            ; 005a3155
    CALL FUN_00547890                   ; 005a3156
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; undefined FUN_00547890()
    ADD ESP,0x4                         ; 005a315b
    PUSH 0x1                            ; 005a315e
    PUSH 0x5f00b9                       ; 005a3160 | = "Bip01 Tongue"
    PUSH EAX                            ; 005a3165
    MOV EBX,EAX                         ; 005a3166
    CALL FUN_00540e80                   ; 005a3168
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 005a316d
    PUSH 0x1                            ; 005a3170
    PUSH 0x5f00c6                       ; 005a3172 | = "Dummy07"
    PUSH EBX                            ; 005a3177
    MOV dword ptr [ESI + 0x11850],EAX   ; 005a3178
    CALL FUN_00540e80                   ; 005a317e
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 005a3183
    PUSH 0x1                            ; 005a3186
    PUSH 0x5f00ce                       ; 005a3188 | = "Bip01 Tongue"
    PUSH EBX                            ; 005a318d
    MOV dword ptr [ESI + 0x11854],EAX   ; 005a318e
    CALL FUN_00540e80                   ; 005a3194
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 005a3199
    PUSH 0x1                            ; 005a319c
    PUSH 0x5f00db                       ; 005a319e | = "Bip01 R Finger0"
    PUSH EBX                            ; 005a31a3
    MOV dword ptr [ESI + 0x11858],EAX   ; 005a31a4
    CALL FUN_00540e80                   ; 005a31aa
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 005a31af
    MOV dword ptr [ESI + 0x1185c],EAX   ; 005a31b2
    POP ESI                             ; 005a31b8
    POP EBX                             ; 005a31b9
    RET                                 ; 005a31ba

