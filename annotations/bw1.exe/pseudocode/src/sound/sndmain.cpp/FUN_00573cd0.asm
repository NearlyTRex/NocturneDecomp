; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00573cd0(int param_1)
;
;
; XREF[8]:
;   FUN_004a1d00 at 004a4a59
;   FUN_004d8e50 at 004d8f3f
;   FUN_0050ba70 at 0050bb92
;   FUN_00572d20 at 00572dc2
;   FUN_005760b0 at 005762f5
;   FUN_005763b0 at 0057650e
;   FUN_0057cc00 at 0057cc92
;   FUN_0057ce10 at 0057d05d
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005f406f
;   TerminatedCString s_isSfxChannelEnabled_inva_005f4084
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00573cd0
        ;   Label: FUN_00573cd0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00573cd1
    TEST EBX,EBX                        ; 00573cd5
    JL 0x00573ce7                       ; 00573cd7
        ;   XREF to: 00573ce7 (CONDITIONAL_JUMP)  ; LAB_00573ce7
    CMP EBX,0x20                        ; 00573cd9
    JGE 0x00573ce7                      ; 00573cdc
        ;   XREF to: 00573ce7 (CONDITIONAL_JUMP)  ; LAB_00573ce7
    MOV EAX,dword ptr [EBX*0x4 + 0x2c7fd10] ; 00573cde
    POP EBX                             ; 00573ce5
    RET                                 ; 00573ce6
    PUSH EBX                            ; 00573ce7
        ;   Label: LAB_00573ce7
    MOV EDX,0x5f406f                    ; 00573ce8 | = "..\\sound\\sndmain.cpp"
    MOV ECX,0x1136                      ; 00573ced
    PUSH 0x5f4084                       ; 00573cf2 | = "isSfxChannelEnabled - invalid channel..."
    MOV dword ptr [0x01d1d400],EDX      ; 00573cf7 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 00573cfd | DAT_01d1d404
    CALL FUN_005030e0                   ; 00573d03
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x8                         ; 00573d08
    MOV EAX,dword ptr [EBX*0x4 + 0x2c7fd10] ; 00573d0b
    POP EBX                             ; 00573d12
    RET                                 ; 00573d13

