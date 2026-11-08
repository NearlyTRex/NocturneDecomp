; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00551190(int param_1)
;
;
; XREF[8]:
;   FUN_004ed260 at 004ed3e5
;   FUN_0054e6e0 at 0054e6fc
;   FUN_00553680 at 00553915
;   FUN_00553980 at 00553b0f
;   FUN_00556550 at 00556a48
;   FUN_0055a1d0 at 0055a280
;   FUN_0055a3c0 at 0055a62b
;   FUN_0055ac50 at 0055ac55
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005e8db9
;   TerminatedCString s_getSfxChannelVol_invalid_005e8dce
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00551190
        ;   Label: FUN_00551190
    MOV EBX,dword ptr [ESP + 0x8]       ; 00551191
    TEST EBX,EBX                        ; 00551195
    JL 0x005511a9                       ; 00551197
        ;   XREF to: 005511a9 (CONDITIONAL_JUMP)  ; LAB_005511a9
    CMP EBX,0x20                        ; 00551199
    JGE 0x005511a9                      ; 0055119c
        ;   XREF to: 005511a9 (CONDITIONAL_JUMP)  ; LAB_005511a9
    MOV EBX,dword ptr [EBX*0x4 + 0x26484c0] ; 0055119e
    MOV EAX,EBX                         ; 005511a5
    POP EBX                             ; 005511a7
    RET                                 ; 005511a8
    PUSH EBX                            ; 005511a9
        ;   Label: LAB_005511a9
    MOV EDX,0x5e8db9                    ; 005511aa | = "..\\sound\\sndmain.cpp"
    MOV ECX,0x1123                      ; 005511af
    PUSH 0x5e8dce                       ; 005511b4 | = "getSfxChannelVol - invalid channel in..."
    MOV dword ptr [0x01d046a0],EDX      ; 005511b9 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 005511bf | DAT_01d046a4
    CALL FUN_004e4500                   ; 005511c5
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x8                         ; 005511ca
    MOV EBX,dword ptr [EBX*0x4 + 0x26484c0] ; 005511cd
    MOV EAX,EBX                         ; 005511d4
    POP EBX                             ; 005511d6
    RET                                 ; 005511d7

