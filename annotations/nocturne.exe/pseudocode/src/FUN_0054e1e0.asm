; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0054e1e0(int param_1)
;
;
; XREF[1]:
;   FUN_0054c690 at 0054cd9f
;
; Referenced Globals:
;   string s_float_00597256
;   string s_voicuhuman.wav_0059725c
;
; Called Functions:
;   FUN_004e1960
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054e1e0
        ;   Label: FUN_0054e1e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0054e1e1
    PUSH 0x0                            ; 0054e1e5
    PUSH 0x597256                       ; 0054e1e7 | = "float"
    LEA EAX,[EBX + 0x150]               ; 0054e1ec
    PUSH EAX                            ; 0054e1f2
    MOV dword ptr [EBX + 0xbe168],0x3   ; 0054e1f3
    CALL FUN_004e1960                   ; 0054e1fd
        ;   XREF to: 004e1960 (UNCONDITIONAL_CALL)  ; undefined FUN_004e1960()
    ADD ESP,0xc                         ; 0054e202
    PUSH 0x59725c                       ; 0054e205 | = "voicuhuman.wav"
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0054e20a
    PUSH EBX                            ; 0054e210
    MOV dword ptr [EBX + 0xbedc4],0x0   ; 0054e211
    CALL dword ptr [EAX + 0x24]         ; 0054e21b
    ADD ESP,0x8                         ; 0054e21e
    POP EBX                             ; 0054e221
    RET                                 ; 0054e222

