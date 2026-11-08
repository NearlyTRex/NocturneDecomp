; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00573c50(int param_1,int param_2)
;
;
; XREF[5]:
;   FUN_0050ba70 at 0050c485
;   FUN_00574e00 at 00574e14
;   FUN_005760b0 at 00576326
;   FUN_0057cc00 at 0057cca6
;   FUN_0057ce10 at 0057d071
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005f402d
;   TerminatedCString s_enableSfxChannel_invalid_005f4042
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_02c74708
;
; Called Functions:
;   FUN_005030e0
;   FUN_00571d70
;   FUN_00573e70
;   FUN_00575d20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00573c50
        ;   Label: FUN_00573c50
    PUSH ESI                            ; 00573c51
    MOV ESI,dword ptr [ESP + 0xc]       ; 00573c52
    MOV EBX,dword ptr [ESP + 0x10]      ; 00573c56
    TEST ESI,ESI                        ; 00573c5a
    JL 0x00573c63                       ; 00573c5c
        ;   XREF to: 00573c63 (CONDITIONAL_JUMP)  ; LAB_00573c63
    CMP ESI,0x20                        ; 00573c5e
    JL 0x00573c87                       ; 00573c61
        ;   XREF to: 00573c87 (CONDITIONAL_JUMP)  ; LAB_00573c87
    PUSH ESI                            ; 00573c63
        ;   Label: LAB_00573c63
    MOV EDX,0x5f402d                    ; 00573c64 | = "..\\sound\\sndmain.cpp"
    MOV ECX,0x1125                      ; 00573c69
    PUSH 0x5f4042                       ; 00573c6e | = "enableSfxChannel - invalid channel in..."
    MOV dword ptr [0x01d1d400],EDX      ; 00573c73 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 00573c79 | DAT_01d1d404
    CALL FUN_005030e0                   ; 00573c7f
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x8                         ; 00573c84
    MOV dword ptr [ESI*0x4 + 0x2c7fd10],EBX ; 00573c87
        ;   Label: LAB_00573c87
    TEST EBX,EBX                        ; 00573c8e
    JNZ 0x00573cc2                      ; 00573c90
        ;   XREF to: 00573cc2 (CONDITIONAL_JUMP)  ; LAB_00573cc2
    CALL FUN_00575d20                   ; 00573c92
        ;   XREF to: 00575d20 (UNCONDITIONAL_CALL)  ; undefined FUN_00575d20()
    CMP ESI,dword ptr [EBX + 0x2c745ec] ; 00573c97 | DAT_02c74708
        ;   Label: LAB_00573c97
    JNZ 0x00573caf                      ; 00573c9d
        ;   XREF to: 00573caf (CONDITIONAL_JUMP)  ; LAB_00573caf
    MOV EAX,0x2c745ec                   ; 00573c9f
    ADD EAX,EBX                         ; 00573ca4
    PUSH EAX                            ; 00573ca6
    CALL FUN_00571d70                   ; 00573ca7
        ;   XREF to: 00571d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00571d70()
    ADD ESP,0x4                         ; 00573cac
    ADD EBX,0x11c                       ; 00573caf
        ;   Label: LAB_00573caf
    CMP EBX,0x4700                      ; 00573cb5
    JNZ 0x00573c97                      ; 00573cbb
        ;   XREF to: 00573c97 (CONDITIONAL_JUMP)  ; LAB_00573c97
    CALL FUN_00573e70                   ; 00573cbd
        ;   XREF to: 00573e70 (UNCONDITIONAL_CALL)  ; undefined FUN_00573e70()
    POP ESI                             ; 00573cc2
        ;   Label: LAB_00573cc2
    POP EBX                             ; 00573cc3
    RET                                 ; 00573cc4

