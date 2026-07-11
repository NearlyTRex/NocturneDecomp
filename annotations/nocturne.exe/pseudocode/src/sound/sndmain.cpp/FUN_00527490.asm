; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00527490(int param_1)
;
;
; XREF[8]:
;   FUN_0047ac50 at 0047c4d9
;   FUN_004a6e90 at 004a6f7f
;   FUN_004d12e0 at 004d13db
;   FUN_005265a0 at 00526639
;   FUN_005289f0 at 00528bc2
;   FUN_00528c80 at 00528dda
;   FUN_0052ddf0 at 0052de82
;   FUN_0052dff0 at 0052e23d
;
; Referenced Globals:
;   string s_..\\sound\\sndmain.cpp_005936cd
;   string s_isSfxChannelEnabled_-_invalid_ch_005936e2
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00527490
        ;   Label: FUN_00527490
    MOV EBX,dword ptr [ESP + 0x8]       ; 00527491
    TEST EBX,EBX                        ; 00527495
    JL 0x005274a7                       ; 00527497
        ;   XREF to: 005274a7 (CONDITIONAL_JUMP)  ; LAB_005274a7
    CMP EBX,0x20                        ; 00527499
    JGE 0x005274a7                      ; 0052749c
        ;   XREF to: 005274a7 (CONDITIONAL_JUMP)  ; LAB_005274a7
    MOV EAX,dword ptr [EBX*0x4 + 0x2dc79d8] ; 0052749e
    POP EBX                             ; 005274a5
    RET                                 ; 005274a6
    PUSH EBX                            ; 005274a7
        ;   Label: LAB_005274a7
    MOV EDX,0x5936cd                    ; 005274a8 | = "..\\sound\\sndmain.cpp"
    MOV ECX,0xf61                       ; 005274ad
    PUSH 0x5936e2                       ; 005274b2 | = "isSfxChannelEnabled - invalid channel..."
    MOV dword ptr [0x01cc4800],EDX      ; 005274b7 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 005274bd | DAT_01cc4804
    CALL FUN_004c8440                   ; 005274c3
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x8                         ; 005274c8
    MOV EAX,dword ptr [EBX*0x4 + 0x2dc79d8] ; 005274cb
    POP EBX                             ; 005274d2
    RET                                 ; 005274d3

