; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00573b30(int param_1,undefined4 param_2)
;
;
; XREF[6]:
;   FUN_0050ba70 at 0050c49f
;   FUN_00574e00 at 00574e09
;   FUN_005760b0 at 00576383
;   FUN_0057cc00 at 0057cccd
;   FUN_0057ce10 at 0057d09f
;   FUN_0057d6a0 at 0057d6e9
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005f3f71
;   TerminatedCString s_setSfxChannelVol_invalid_005f3f86
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_02c74650
;   undefined4 DAT_02c74708
;   undefined4 DAT_02c74768
;   undefined4 DAT_02c7476c
;   undefined4 DAT_02c74820
;   undefined4 DAT_02c80650
;
; Called Functions:
;   FUN_005030e0
;   FUN_00573e70
;   FUN_00575560
;   FUN_00575d20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00573b30
        ;   Label: FUN_00573b30
    PUSH ESI                            ; 00573b31
    MOV EBX,dword ptr [ESP + 0xc]       ; 00573b32
    TEST EBX,EBX                        ; 00573b36
    JL 0x00573b3f                       ; 00573b38
        ;   XREF to: 00573b3f (CONDITIONAL_JUMP)  ; LAB_00573b3f
    CMP EBX,0x20                        ; 00573b3a
    JL 0x00573b63                       ; 00573b3d
        ;   XREF to: 00573b63 (CONDITIONAL_JUMP)  ; LAB_00573b63
    PUSH EBX                            ; 00573b3f
        ;   Label: LAB_00573b3f
    MOV EDX,0x5f3f71                    ; 00573b40 | = "..\\sound\\sndmain.cpp"
    MOV ECX,0x1105                      ; 00573b45
    PUSH 0x5f3f86                       ; 00573b4a | = "setSfxChannelVol - invalid channel in..."
    MOV dword ptr [0x01d1d400],EDX      ; 00573b4f | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 00573b55 | DAT_01d1d404
    CALL FUN_005030e0                   ; 00573b5b
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x8                         ; 00573b60
    MOV EDX,dword ptr [ESP + 0x10]      ; 00573b63
        ;   Label: LAB_00573b63
    MOV ESI,dword ptr [0x02c80650]      ; 00573b67 | DAT_02c80650
    MOV dword ptr [EBX*0x4 + 0x2c7fc90],EDX ; 00573b6d
    TEST ESI,ESI                        ; 00573b74
    JNZ 0x00573b7b                      ; 00573b76
        ;   XREF to: 00573b7b (CONDITIONAL_JUMP)  ; LAB_00573b7b
    POP ESI                             ; 00573b78
        ;   Label: LAB_00573b78
    POP EBX                             ; 00573b79
    RET                                 ; 00573b7a
    CALL FUN_00575560                   ; 00573b7b
        ;   XREF to: 00575560 (UNCONDITIONAL_CALL)  ; undefined FUN_00575560()
        ;   Label: LAB_00573b7b
    CMP EAX,0x1                         ; 00573b80
    JL 0x00573b78                       ; 00573b83
        ;   XREF to: 00573b78 (CONDITIONAL_JUMP)  ; LAB_00573b78
    CALL FUN_00575d20                   ; 00573b85
        ;   XREF to: 00575d20 (UNCONDITIONAL_CALL)  ; undefined FUN_00575d20()
    MOV EAX,0x2c745ec                   ; 00573b8a
    LEA EDX,[EAX + 0x4700]              ; 00573b8f
    XOR ECX,ECX                         ; 00573b95
    CMP ECX,dword ptr [EAX + 0x64]      ; 00573b97 | DAT_02c74650 | DAT_02c7476c
        ;   Label: LAB_00573b97
    JNZ 0x00573bad                      ; 00573b9a
        ;   XREF to: 00573bad (CONDITIONAL_JUMP)  ; LAB_00573bad
    ADD EAX,0x11c                       ; 00573b9c
        ;   Label: LAB_00573b9c
    CMP EAX,EDX                         ; 00573ba1
    JNZ 0x00573b97                      ; 00573ba3
        ;   XREF to: 00573b97 (CONDITIONAL_JUMP)  ; LAB_00573b97
    CALL FUN_00573e70                   ; 00573ba5
        ;   XREF to: 00573e70 (UNCONDITIONAL_CALL)  ; undefined FUN_00573e70()
    POP ESI                             ; 00573baa
    POP EBX                             ; 00573bab
    RET                                 ; 00573bac
    CMP ECX,dword ptr [EAX + 0x60]      ; 00573bad | DAT_02c74768
        ;   Label: LAB_00573bad
    JZ 0x00573b9c                       ; 00573bb0
        ;   XREF to: 00573b9c (CONDITIONAL_JUMP)  ; LAB_00573b9c
    CMP EBX,dword ptr [EAX]             ; 00573bb2 | DAT_02c74708
    JNZ 0x00573b9c                      ; 00573bb4
        ;   XREF to: 00573b9c (CONDITIONAL_JUMP)  ; LAB_00573b9c
    OR byte ptr [EAX + 0x118],0x8       ; 00573bb6 | DAT_02c74820
    JMP 0x00573b9c                      ; 00573bbd
        ;   XREF to: 00573b9c (UNCONDITIONAL_JUMP)  ; LAB_00573b9c

