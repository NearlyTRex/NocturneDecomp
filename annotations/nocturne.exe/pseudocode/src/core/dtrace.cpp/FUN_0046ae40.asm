; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046ae40(int param_1,int *param_2,int *param_3)
;
;
; XREF[1]:
;   FUN_00507c80 at 00507d49
;
; Referenced Globals:
;   string s_..\\core\\dtrace.cpp_0057e2af
;   string s_CDemonRenderer::getPVS_-_PVS_is_n_0057e2c2
;   string s_..\\core\\dtrace.cpp_0057e2ed
;   string s_CDemonRaytrace::getPVS_-_no_cube_0057e300
;   string s_..\\core\\dtrace.cpp_0057e32e
;   string s_CDemonRaytrace::getPVS_-_out_of_m_0057e341
;   string s_..\\core\\dtrace.cpp_0057e368
;   string s_CDemonRenderer::savePVS_-_can't_f_0057e37b
;   undefined4 DAT_01b7b744
;   undefined4 DAT_01b7b748
;   undefined4 DAT_01b7b750
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   FUN_004c8440
;   FUN_00564a70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046ae40
        ;   Label: FUN_0046ae40
    PUSH ESI                            ; 0046ae41
    PUSH EDI                            ; 0046ae42
    PUSH EBP                            ; 0046ae43
    MOV EBX,dword ptr [ESP + 0x18]      ; 0046ae44
    CMP dword ptr [0x01b7b748],0x0      ; 0046ae48 | DAT_01b7b748
    JNZ 0x0046ae74                      ; 0046ae4f
        ;   XREF to: 0046ae74 (CONDITIONAL_JUMP)  ; LAB_0046ae74
    MOV ECX,0x57e2af                    ; 0046ae51 | = "..\\core\\dtrace.cpp"
    MOV ESI,0x8ea                       ; 0046ae56
    PUSH 0x57e2c2                       ; 0046ae5b | = "CDemonRenderer::getPVS - PVS is not v..."
    MOV dword ptr [0x01cc4800],ECX      ; 0046ae60 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 0046ae66 | DAT_01cc4804
    CALL FUN_004c8440                   ; 0046ae6c
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 0046ae71
    MOV EAX,[0x01b7b744]                ; 0046ae74 | DAT_01b7b744
        ;   Label: LAB_0046ae74
    MOV dword ptr [EBX],EAX             ; 0046ae79
    SHL EAX,0x2                         ; 0046ae7b
    PUSH EAX                            ; 0046ae7e
    MOV EAX,dword ptr [ESP + 0x20]      ; 0046ae7f
    MOV EDI,dword ptr [EAX]             ; 0046ae83
    PUSH EDI                            ; 0046ae85
    CALL FUN_00564a70                   ; 0046ae86
        ;   XREF to: 00564a70 (UNCONDITIONAL_CALL)  ; undefined FUN_00564a70()
    ADD ESP,0x8                         ; 0046ae8b
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0046ae8e
    MOV dword ptr [EDX],EAX             ; 0046ae92
    CMP dword ptr [EBX],0x1             ; 0046ae94
    JGE 0x0046aebb                      ; 0046ae97
        ;   XREF to: 0046aebb (CONDITIONAL_JUMP)  ; LAB_0046aebb
    MOV EAX,0x57e2ed                    ; 0046ae99 | = "..\\core\\dtrace.cpp"
    MOV EDX,0x8f6                       ; 0046ae9e
    PUSH 0x57e300                       ; 0046aea3 | = "CDemonRaytrace::getPVS - no cubes ren..."
    MOV [0x01cc4800],EAX                ; 0046aea8 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 0046aead | DAT_01cc4804
    CALL FUN_004c8440                   ; 0046aeb3
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 0046aeb8
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046aebb
        ;   Label: LAB_0046aebb
    CMP dword ptr [EAX],0x0             ; 0046aebf
    JNZ 0x0046aee7                      ; 0046aec2
        ;   XREF to: 0046aee7 (CONDITIONAL_JUMP)  ; LAB_0046aee7
    MOV EBX,0x57e32e                    ; 0046aec4 | = "..\\core\\dtrace.cpp"
    MOV ESI,0x8fa                       ; 0046aec9
    PUSH 0x57e341                       ; 0046aece | = "CDemonRaytrace::getPVS - out of memory"
    MOV dword ptr [0x01cc4800],EBX      ; 0046aed3 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 0046aed9 | DAT_01cc4804
    CALL FUN_004c8440                   ; 0046aedf
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 0046aee4
    MOV EDX,dword ptr [ESP + 0x14]      ; 0046aee7
        ;   Label: LAB_0046aee7
    MOV EAX,dword ptr [ESP + 0x14]      ; 0046aeeb
    MOV EDI,dword ptr [EDX + 0x44]      ; 0046aeef
    MOV EAX,dword ptr [EAX + 0x40]      ; 0046aef2
    IMUL EAX,EDI                        ; 0046aef5
    MOV ESI,dword ptr [EDX + 0x48]      ; 0046aef8
    IMUL ESI,EAX                        ; 0046aefb
    MOV EAX,[0x01b7b744]                ; 0046aefe | DAT_01b7b744
    XOR EBP,EBP                         ; 0046af03
    TEST EAX,EAX                        ; 0046af05
    JLE 0x0046af60                      ; 0046af07
        ;   XREF to: 0046af60 (CONDITIONAL_JUMP)  ; LAB_0046af60
    XOR EDI,EDI                         ; 0046af09
    XOR EBX,EBX                         ; 0046af0b
        ;   Label: LAB_0046af0b
    TEST ESI,ESI                        ; 0046af0d
    JLE 0x0046af22                      ; 0046af0f
        ;   XREF to: 0046af22 (CONDITIONAL_JUMP)  ; LAB_0046af22
    MOV EAX,dword ptr [ESP + 0x14]      ; 0046af11
    MOV EDX,EDI                         ; 0046af15
    MOV EAX,dword ptr [EAX + 0x50]      ; 0046af17
    CMP EAX,dword ptr [EDX + 0x1b7b74c] ; 0046af1a | DAT_01b7b750
        ;   Label: LAB_0046af1a
    JNZ 0x0046af65                      ; 0046af20
        ;   XREF to: 0046af65 (CONDITIONAL_JUMP)  ; LAB_0046af65
    CMP EBX,ESI                         ; 0046af22
        ;   Label: LAB_0046af22
    JL 0x0046af48                       ; 0046af24
        ;   XREF to: 0046af48 (CONDITIONAL_JUMP)  ; LAB_0046af48
    MOV EAX,0x57e368                    ; 0046af26 | = "..\\core\\dtrace.cpp"
    MOV EDX,0x907                       ; 0046af2b
    PUSH 0x57e37b                       ; 0046af30 | = "CDemonRenderer::savePVS - can't find ..."
    MOV [0x01cc4800],EAX                ; 0046af35 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 0046af3a | DAT_01cc4804
    CALL FUN_004c8440                   ; 0046af40
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 0046af45
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046af48
        ;   Label: LAB_0046af48
    ADD EDI,0x4                         ; 0046af4c
    MOV EAX,dword ptr [EAX]             ; 0046af4f
    MOV EDX,dword ptr [0x01b7b744]      ; 0046af51 | DAT_01b7b744
    INC EBP                             ; 0046af57
    MOV dword ptr [EDI + EAX*0x1 + -0x4],EBX ; 0046af58
    CMP EBP,EDX                         ; 0046af5c
    JL 0x0046af0b                       ; 0046af5e
        ;   XREF to: 0046af0b (CONDITIONAL_JUMP)  ; LAB_0046af0b
    POP EBP                             ; 0046af60
        ;   Label: LAB_0046af60
    POP EDI                             ; 0046af61
    POP ESI                             ; 0046af62
    POP EBX                             ; 0046af63
    RET                                 ; 0046af64
    INC EBX                             ; 0046af65
        ;   Label: LAB_0046af65
    ADD EAX,0x34                        ; 0046af66
    CMP EBX,ESI                         ; 0046af69
    JL 0x0046af1a                       ; 0046af6b
        ;   XREF to: 0046af1a (CONDITIONAL_JUMP)  ; LAB_0046af1a
    JMP 0x0046af22                      ; 0046af6d
        ;   XREF to: 0046af22 (UNCONDITIONAL_JUMP)  ; LAB_0046af22

