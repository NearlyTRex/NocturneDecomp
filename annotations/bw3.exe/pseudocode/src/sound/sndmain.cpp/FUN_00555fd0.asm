; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00555fd0(void)
;
;
; XREF[18]:
;   FUN_004179b0 at 0041807e
;   FUN_00419b40 at 0041a1d0
;   FUN_0041f360 at 0041f877
;   FUN_0042e8c0 at 0042ecf6
;   FUN_0048c2e0 at 0048f23d
;   FUN_004953d0 at 00495401
;   FUN_00499eb0 at 00499f2a
;   FUN_004a5b10 at 004a5e95
;   FUN_004c4a60 at 004c4b02
;   FUN_004e94f0 at 004e9e33
;   ... and 8 more
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005d3706
;   TerminatedCString s_pushSfxOptions_stack_ful_005d371b
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_02ceb91c
;
; Called Functions:
;   FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00555fd0
        ;   Label: FUN_00555fd0
    PUSH EDI                            ; 00555fd1
    MOV EDX,dword ptr [0x02ceb91c]      ; 00555fd2 | DAT_02ceb91c
    INC EDX                             ; 00555fd8
    MOV dword ptr [0x02ceb91c],EDX      ; 00555fd9 | DAT_02ceb91c
    CMP EDX,0x8                         ; 00555fdf
    JGE 0x0055601b                      ; 00555fe2
        ;   XREF to: 0055601b (CONDITIONAL_JUMP)  ; LAB_0055601b
    MOV ECX,dword ptr [0x02ceb91c]      ; 00555fe4 | DAT_02ceb91c
        ;   Label: LAB_00555fe4
    LEA EDX,[ECX + -0x1]                ; 00555fea
    LEA ESI,[EDX*0x4 + 0x0]             ; 00555fed
    LEA EAX,[ECX*0x4 + 0x0]             ; 00555ff4
    SUB ESI,EDX                         ; 00555ffb
    SUB EAX,ECX                         ; 00555ffd
    MOV ECX,0x18                        ; 00555fff
    SHL EAX,0x5                         ; 00556004
    SHL ESI,0x5                         ; 00556007
    LEA EDI,[EAX + 0x2ceb920]           ; 0055600a
    LEA ESI,[ESI + 0x2ceb920]           ; 00556010
    MOVSD.REP ES:EDI,ESI                ; 00556016
    POP EDI                             ; 00556018
    POP ESI                             ; 00556019
    RET                                 ; 0055601a
    PUSH EBX                            ; 0055601b
        ;   Label: LAB_0055601b
    MOV EBX,0x5d3706                    ; 0055601c | = "..\\sound\\sndmain.cpp"
    MOV ESI,0xe9b                       ; 00556021
    PUSH 0x5d371b                       ; 00556026 | = "pushSfxOptions - stack full"
    MOV dword ptr [0x01d71de0],EBX      ; 0055602b | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 00556031 | DAT_01d71de4
    CALL FUN_004e4330                   ; 00556037
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 0055603c
    POP EBX                             ; 0055603f
    JMP 0x00555fe4                      ; 00556040
        ;   XREF to: 00555fe4 (UNCONDITIONAL_JUMP)  ; LAB_00555fe4

