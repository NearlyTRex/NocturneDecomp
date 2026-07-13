; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0052ab60(undefined4 param_1,int param_2,int param_3,int param_4,int param_5)
;
; Local Variables:
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x28]:4  local_28
; undefined2       Stack[-0x24]:2  local_24
; undefined2       Stack[-0x22]:2  local_22
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined2       Stack[-0x18]:2  local_18
; undefined2       Stack[-0x16]:2  local_16
;
; Referenced Globals:
;   string s_DirectSux:_Unable_to_%s._(%s)_005940b7
;   undefined4 s_Create_secondary_buffer_00594256+1
;   string s_DirectSoundDevice::allocateSampl_0059426f
;   undefined4 DAT_02dc9214
;   undefined4 DAT_02dc9248
;   undefined4 DAT_02dc924c
;   undefined4 DAT_02dc9250
;
; Called Functions:
;   FUN_00529980
;   FUN_00529a90
;   FUN_00563c90
;   FUN_00563cc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052ab60
        ;   Label: FUN_0052ab60
    PUSH ESI                            ; 0052ab61
    PUSH EDI                            ; 0052ab62
    PUSH EBP                            ; 0052ab63
    SUB ESP,0x1b8                       ; 0052ab64
    MOV EDI,dword ptr [ESP + 0x1d0]     ; 0052ab6a
    CMP dword ptr [0x02dc9214],0x0      ; 0052ab71 | DAT_02dc9214
    JZ 0x0052aba5                       ; 0052ab78
        ;   XREF to: 0052aba5 (CONDITIONAL_JUMP)  ; LAB_0052aba5
    MOV EAX,0x4                         ; 0052ab7a
    MOV ECX,dword ptr [0x02dc9248]      ; 0052ab7f | DAT_02dc9248
    MOV EBX,0x1                         ; 0052ab85
    TEST ECX,ECX                        ; 0052ab8a
    JZ 0x0052aba0                       ; 0052ab8c
        ;   XREF to: 0052aba0 (CONDITIONAL_JUMP)  ; LAB_0052aba0
    ADD EAX,0x4                         ; 0052ab8e
        ;   Label: LAB_0052ab8e
    INC EBX                             ; 0052ab91
    CMP EAX,0x64                        ; 0052ab92
    JGE 0x0052aba0                      ; 0052ab95
        ;   XREF to: 0052aba0 (CONDITIONAL_JUMP)  ; LAB_0052aba0
    CMP dword ptr [EAX + 0x2dc9244],0x0 ; 0052ab97 | DAT_02dc924c | DAT_02dc9250
    JNZ 0x0052ab8e                      ; 0052ab9e
        ;   XREF to: 0052ab8e (CONDITIONAL_JUMP)  ; LAB_0052ab8e
    CMP EBX,0x19                        ; 0052aba0
        ;   Label: LAB_0052aba0
    JL 0x0052abb2                       ; 0052aba3
        ;   XREF to: 0052abb2 (CONDITIONAL_JUMP)  ; LAB_0052abb2
    XOR EAX,EAX                         ; 0052aba5
        ;   Label: LAB_0052aba5
    ADD ESP,0x1b8                       ; 0052aba7
    POP EBP                             ; 0052abad
    POP EDI                             ; 0052abae
    POP ESI                             ; 0052abaf
    POP EBX                             ; 0052abb0
    RET                                 ; 0052abb1
    PUSH 0x12                           ; 0052abb2
        ;   Label: LAB_0052abb2
    PUSH 0x0                            ; 0052abb4
    LEA EAX,[ESP + 0x1ac]               ; 0052abb6
    PUSH EAX                            ; 0052abbd
    CALL FUN_00563cc0                   ; 0052abbe
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00563cc0()
    ADD ESP,0xc                         ; 0052abc3
    MOV EDX,0x1                         ; 0052abc6
    MOV EAX,dword ptr [ESP + 0x1d4]     ; 0052abcb
    MOV word ptr [ESP + 0x1a4],DX       ; 0052abd2
    MOV word ptr [ESP + 0x1a6],AX       ; 0052abda
    MOV EDX,EDI                         ; 0052abe2
    MOV EAX,dword ptr [ESP + 0x1d8]     ; 0052abe4
    SAR EDX,0x1f                        ; 0052abeb
    MOV dword ptr [ESP + 0x1a8],EAX     ; 0052abee
    MOV EAX,EDI                         ; 0052abf5
    SHL EDX,0x3                         ; 0052abf7
    SBB EAX,EDX                         ; 0052abfa
    SAR EAX,0x3                         ; 0052abfc
    XOR ECX,ECX                         ; 0052abff
    MOV CX,word ptr [ESP + 0x1d4]       ; 0052ac01
    IMUL ECX,EAX                        ; 0052ac09
    MOV ESI,EAX                         ; 0052ac0c
    XOR EAX,EAX                         ; 0052ac0e
    MOV word ptr [ESP + 0x1b0],CX       ; 0052ac10
    MOV AX,CX                           ; 0052ac18
    MOV ECX,dword ptr [ESP + 0x1d8]     ; 0052ac1b
    IMUL ECX,EAX                        ; 0052ac22
    PUSH 0x14                           ; 0052ac25
    PUSH 0x0                            ; 0052ac27
    LEA EAX,[ESP + 0x198]               ; 0052ac29
    PUSH EAX                            ; 0052ac30
    MOV word ptr [ESP + 0x1be],DI       ; 0052ac31
    MOV dword ptr [ESP + 0x1b8],ECX     ; 0052ac39
    CALL FUN_00563cc0                   ; 0052ac40
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00563cc0()
    LEA EAX,[ESP + 0x1b0]               ; 0052ac45
    ADD ESP,0xc                         ; 0052ac4c
    MOV dword ptr [ESP + 0x1a0],EAX     ; 0052ac4f
    IMUL ESI,dword ptr [ESP + 0x1dc]    ; 0052ac56
    MOV EAX,dword ptr [ESP + 0x1d4]     ; 0052ac5e
    IMUL EAX,ESI                        ; 0052ac65
    MOV EBP,0xb0                        ; 0052ac68
    MOV EDI,0x14                        ; 0052ac6d
    PUSH 0x0                            ; 0052ac72
    MOV dword ptr [ESP + 0x194],EDI     ; 0052ac74
    MOV EDI,0x2dc9244                   ; 0052ac7b
    LEA ESI,[EBX*0x4 + 0x0]             ; 0052ac80
    MOV dword ptr [ESP + 0x19c],EAX     ; 0052ac87
    ADD EDI,ESI                         ; 0052ac8e
    MOV EAX,[0x02dc9214]                ; 0052ac90 | DAT_02dc9214
    PUSH EDI                            ; 0052ac95 | DAT_02dc924c
    LEA EDI,[ESP + 0x198]               ; 0052ac96
    MOV dword ptr [ESP + 0x19c],EBP     ; 0052ac9d
    PUSH EDI                            ; 0052aca4
    MOV ECX,dword ptr [EAX]             ; 0052aca5
    PUSH EAX                            ; 0052aca7
    CALL dword ptr [ECX + 0xc]          ; 0052aca8
    TEST EAX,EAX                        ; 0052acab
    JNZ 0x0052acf3                      ; 0052acad
        ;   XREF to: 0052acf3 (CONDITIONAL_JUMP)  ; LAB_0052acf3
    CMP dword ptr [ESI + 0x2dc9244],0x0 ; 0052acaf | DAT_02dc924c
    JNZ 0x0052ad21                      ; 0052acb6
        ;   XREF to: 0052ad21 (CONDITIONAL_JUMP)  ; LAB_0052ad21
    SHL EBX,0x2                         ; 0052acb8
        ;   Label: LAB_0052acb8
    PUSH 0x59426f                       ; 0052acbb | = "DirectSoundDevice::allocateSample - a..."
    ADD EBX,0x2dc9244                   ; 0052acc0
    CALL FUN_00529980                   ; 0052acc6
        ;   XREF to: 00529980 (UNCONDITIONAL_CALL)  ; undefined FUN_00529980()
    MOV ECX,dword ptr [EBX]             ; 0052accb | DAT_02dc924c
    ADD ESP,0x4                         ; 0052accd
    TEST ECX,ECX                        ; 0052acd0
    JZ 0x0052aba5                       ; 0052acd2
        ;   XREF to: 0052aba5 (CONDITIONAL_JUMP)  ; LAB_0052aba5
    MOV EAX,ECX                         ; 0052acd8
    PUSH EAX                            ; 0052acda
    MOV ECX,dword ptr [ECX]             ; 0052acdb
    CALL dword ptr [ECX + 0x8]          ; 0052acdd
    MOV dword ptr [EBX],0x0             ; 0052ace0 | DAT_02dc924c
    XOR EAX,EAX                         ; 0052ace6
    ADD ESP,0x1b8                       ; 0052ace8
    POP EBP                             ; 0052acee
    POP EDI                             ; 0052acef
    POP ESI                             ; 0052acf0
    POP EBX                             ; 0052acf1
    RET                                 ; 0052acf2
    PUSH EAX                            ; 0052acf3
        ;   Label: LAB_0052acf3
    CALL FUN_00529a90                   ; 0052acf4
        ;   XREF to: 00529a90 (UNCONDITIONAL_CALL)  ; undefined FUN_00529a90()
    ADD ESP,0x4                         ; 0052acf9
    PUSH EAX                            ; 0052acfc
    PUSH 0x594257                       ; 0052acfd | s_Create_secondary_buffer_00594256+1
    PUSH 0x5940b7                       ; 0052ad02 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xc]                 ; 0052ad07
    PUSH EAX                            ; 0052ad0b
    CALL FUN_00563c90                   ; 0052ad0c
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined FUN_00563c90()
    ADD ESP,0x10                        ; 0052ad11
    MOV EAX,ESP                         ; 0052ad14
    PUSH EAX                            ; 0052ad16
    CALL FUN_00529980                   ; 0052ad17
        ;   XREF to: 00529980 (UNCONDITIONAL_CALL)  ; undefined FUN_00529980()
    ADD ESP,0x4                         ; 0052ad1c
    JMP 0x0052acb8                      ; 0052ad1f
        ;   XREF to: 0052acb8 (UNCONDITIONAL_JUMP)  ; LAB_0052acb8
    MOV EAX,EBX                         ; 0052ad21
        ;   Label: LAB_0052ad21
    ADD ESP,0x1b8                       ; 0052ad23
    POP EBP                             ; 0052ad29
    POP EDI                             ; 0052ad2a
    POP ESI                             ; 0052ad2b
    POP EBX                             ; 0052ad2c
    RET                                 ; 0052ad2d

