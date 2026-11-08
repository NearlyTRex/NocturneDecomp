; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a7290(int param_1)
;
;
; XREF[1]:
;   FUN_005a5550 at 005a5cbf
;
; Referenced Globals:
;   TerminatedCString s_float_005f8f19
;   TerminatedCString s_voicuhuman_wav_005f8f1f
;
; Called Functions:
;   FUN_00524ae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a7290
        ;   Label: FUN_005a7290
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a7291
    PUSH 0x0                            ; 005a7295
    PUSH 0x5f8f19                       ; 005a7297 | = "float"
    LEA EAX,[EBX + 0x158]               ; 005a729c
    PUSH EAX                            ; 005a72a2
    MOV dword ptr [EBX + 0xbe79c],0x3   ; 005a72a3
    CALL FUN_00524ae0                   ; 005a72ad
        ;   XREF to: 00524ae0 (UNCONDITIONAL_CALL)  ; undefined FUN_00524ae0()
    ADD ESP,0xc                         ; 005a72b2
    PUSH 0x5f8f1f                       ; 005a72b5 | = "voicuhuman.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 005a72ba
    PUSH EBX                            ; 005a72c0
    MOV dword ptr [EBX + 0xbf3f8],0x0   ; 005a72c1
    CALL dword ptr [EAX + 0x2c]         ; 005a72cb
    ADD ESP,0x8                         ; 005a72ce
    POP EBX                             ; 005a72d1
    RET                                 ; 005a72d2

