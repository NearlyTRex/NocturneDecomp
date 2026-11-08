; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005512a0(int param_1)
;
;
; XREF[8]:
;   FUN_00489670 at 0048c217
;   FUN_004be430 at 004be536
;   FUN_004ed260 at 004ed3a0
;   FUN_005506b0 at 00550746
;   FUN_00553680 at 005538c5
;   FUN_00553980 at 00553ade
;   FUN_0055a1d0 at 0055a263
;   FUN_0055a3c0 at 0055a60d
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005e8e75
;   TerminatedCString s_isSfxChannelEnabled_inva_005e8e8a
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005512a0
        ;   Label: FUN_005512a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005512a1
    TEST EBX,EBX                        ; 005512a5
    JL 0x005512b7                       ; 005512a7
        ;   XREF to: 005512b7 (CONDITIONAL_JUMP)  ; LAB_005512b7
    CMP EBX,0x20                        ; 005512a9
    JGE 0x005512b7                      ; 005512ac
        ;   XREF to: 005512b7 (CONDITIONAL_JUMP)  ; LAB_005512b7
    MOV EAX,dword ptr [EBX*0x4 + 0x2648540] ; 005512ae
    POP EBX                             ; 005512b5
    RET                                 ; 005512b6
    PUSH EBX                            ; 005512b7
        ;   Label: LAB_005512b7
    MOV EDX,0x5e8e75                    ; 005512b8 | = "..\\sound\\sndmain.cpp"
    MOV ECX,0x113f                      ; 005512bd
    PUSH 0x5e8e8a                       ; 005512c2 | = "isSfxChannelEnabled - invalid channel..."
    MOV dword ptr [0x01d046a0],EDX      ; 005512c7 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 005512cd | DAT_01d046a4
    CALL FUN_004e4500                   ; 005512d3
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x8                         ; 005512d8
    MOV EAX,dword ptr [EBX*0x4 + 0x2648540] ; 005512db
    POP EBX                             ; 005512e2
    RET                                 ; 005512e3

