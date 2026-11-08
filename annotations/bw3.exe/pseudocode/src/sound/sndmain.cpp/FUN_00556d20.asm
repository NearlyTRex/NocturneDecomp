; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00556d20(int param_1)
;
;
; XREF[8]:
;   FUN_004e94f0 at 004e96d5
;   FUN_00554250 at 0055426c
;   FUN_00559220 at 005594b5
;   FUN_00559520 at 005596af
;   FUN_0055c0f0 at 0055c5e8
;   FUN_0055fd30 at 0055fddf
;   FUN_0055ff40 at 005601ab
;   FUN_005607d0 at 005607d5
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005d389d
;   TerminatedCString s_getSfxChannelVol_invalid_005d38b2
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00556d20
        ;   Label: FUN_00556d20
    MOV EBX,dword ptr [ESP + 0x8]       ; 00556d21
    TEST EBX,EBX                        ; 00556d25
    JL 0x00556d39                       ; 00556d27
        ;   XREF to: 00556d39 (CONDITIONAL_JUMP)  ; LAB_00556d39
    CMP EBX,0x20                        ; 00556d29
    JGE 0x00556d39                      ; 00556d2c
        ;   XREF to: 00556d39 (CONDITIONAL_JUMP)  ; LAB_00556d39
    MOV EBX,dword ptr [EBX*0x4 + 0x2cf28c0] ; 00556d2e
    MOV EAX,EBX                         ; 00556d35
    POP EBX                             ; 00556d37
    RET                                 ; 00556d38
    PUSH EBX                            ; 00556d39
        ;   Label: LAB_00556d39
    MOV EDX,0x5d389d                    ; 00556d3a | = "..\\sound\\sndmain.cpp"
    MOV ECX,0x112b                      ; 00556d3f
    PUSH 0x5d38b2                       ; 00556d44 | = "getSfxChannelVol - invalid channel in..."
    MOV dword ptr [0x01d71de0],EDX      ; 00556d49 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 00556d4f | DAT_01d71de4
    CALL FUN_004e4330                   ; 00556d55
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x8                         ; 00556d5a
    MOV EBX,dword ptr [EBX*0x4 + 0x2cf28c0] ; 00556d5d
    MOV EAX,EBX                         ; 00556d64
    POP EBX                             ; 00556d66
    RET                                 ; 00556d67

