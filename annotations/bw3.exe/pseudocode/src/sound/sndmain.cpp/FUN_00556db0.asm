; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00556db0(int param_1,int param_2)
;
;
; XREF[5]:
;   FUN_004e94f0 at 004e9e11
;   FUN_00557f60 at 00557f74
;   FUN_00559220 at 00559496
;   FUN_0055fd30 at 0055fdd6
;   FUN_0055ff40 at 005601a1
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005d3917
;   TerminatedCString s_enableSfxChannel_invalid_005d392c
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_02ce7338
;
; Called Functions:
;   FUN_004e4330
;   FUN_00555270
;   FUN_00556fd0
;   FUN_00558e90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00556db0
        ;   Label: FUN_00556db0
    PUSH ESI                            ; 00556db1
    MOV ESI,dword ptr [ESP + 0xc]       ; 00556db2
    MOV EBX,dword ptr [ESP + 0x10]      ; 00556db6
    TEST ESI,ESI                        ; 00556dba
    JL 0x00556dc3                       ; 00556dbc
        ;   XREF to: 00556dc3 (CONDITIONAL_JUMP)  ; LAB_00556dc3
    CMP ESI,0x20                        ; 00556dbe
    JL 0x00556de7                       ; 00556dc1
        ;   XREF to: 00556de7 (CONDITIONAL_JUMP)  ; LAB_00556de7
    PUSH ESI                            ; 00556dc3
        ;   Label: LAB_00556dc3
    MOV EDX,0x5d3917                    ; 00556dc4 | = "..\\sound\\sndmain.cpp"
    MOV ECX,0x1136                      ; 00556dc9
    PUSH 0x5d392c                       ; 00556dce | = "enableSfxChannel - invalid channel in..."
    MOV dword ptr [0x01d71de0],EDX      ; 00556dd3 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 00556dd9 | DAT_01d71de4
    CALL FUN_004e4330                   ; 00556ddf
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x8                         ; 00556de4
    MOV dword ptr [ESI*0x4 + 0x2cf2940],EBX ; 00556de7
        ;   Label: LAB_00556de7
    TEST EBX,EBX                        ; 00556dee
    JNZ 0x00556e22                      ; 00556df0
        ;   XREF to: 00556e22 (CONDITIONAL_JUMP)  ; LAB_00556e22
    CALL FUN_00558e90                   ; 00556df2
        ;   XREF to: 00558e90 (UNCONDITIONAL_CALL)  ; undefined FUN_00558e90()
    CMP ESI,dword ptr [EBX + 0x2ce721c] ; 00556df7 | DAT_02ce7338
        ;   Label: LAB_00556df7
    JNZ 0x00556e0f                      ; 00556dfd
        ;   XREF to: 00556e0f (CONDITIONAL_JUMP)  ; LAB_00556e0f
    MOV EAX,0x2ce721c                   ; 00556dff
    ADD EAX,EBX                         ; 00556e04
    PUSH EAX                            ; 00556e06
    CALL FUN_00555270                   ; 00556e07
        ;   XREF to: 00555270 (UNCONDITIONAL_CALL)  ; undefined FUN_00555270()
    ADD ESP,0x4                         ; 00556e0c
    ADD EBX,0x11c                       ; 00556e0f
        ;   Label: LAB_00556e0f
    CMP EBX,0x4700                      ; 00556e15
    JNZ 0x00556df7                      ; 00556e1b
        ;   XREF to: 00556df7 (CONDITIONAL_JUMP)  ; LAB_00556df7
    CALL FUN_00556fd0                   ; 00556e1d
        ;   XREF to: 00556fd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00556fd0()
    POP ESI                             ; 00556e22
        ;   Label: LAB_00556e22
    POP EBX                             ; 00556e23
    RET                                 ; 00556e24

