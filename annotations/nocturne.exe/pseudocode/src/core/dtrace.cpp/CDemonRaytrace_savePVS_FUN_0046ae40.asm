; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtrace_cpp_CDemonRaytrace_savePVS_FUN_0046ae40(int param_1,int *param_2,int *param_3)
;
;
; XREF[1]:
;   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_00507c80 at 00507d49
;
; Referenced Globals:
;   TerminatedCString s_core_dtrace_cpp_0057e2af
;   TerminatedCString s_CDemonRenderer_getPVS_PV_0057e2c2
;   TerminatedCString s_core_dtrace_cpp_0057e2ed
;   TerminatedCString s_CDemonRaytrace_getPVS_no_0057e300
;   TerminatedCString s_core_dtrace_cpp_0057e32e
;   TerminatedCString s_CDemonRaytrace_getPVS_ou_0057e341
;   TerminatedCString s_core_dtrace_cpp_0057e368
;   TerminatedCString s_CDemonRenderer_savePVS_c_0057e37b
;   undefined4 DAT_01b7b744
;   undefined4 DAT_01b7b748
;   undefined4 DAT_01b7b750
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   crt_memory.c_realloc_FUN_00564a70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046ae40
        ;   Label: core_dtrace.cpp_CDemonRaytrace_savePVS_FUN_0046ae40
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
    MOV dword ptr [0x01cc4800],ECX      ; 0046ae60 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 0046ae66 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0046ae6c
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 0046ae71
    MOV EAX,[0x01b7b744]                ; 0046ae74 | DAT_01b7b744
        ;   Label: LAB_0046ae74
    MOV dword ptr [EBX],EAX             ; 0046ae79
    SHL EAX,0x2                         ; 0046ae7b
    PUSH EAX                            ; 0046ae7e
    MOV EAX,dword ptr [ESP + 0x20]      ; 0046ae7f
    MOV EDI,dword ptr [EAX]             ; 0046ae83
    PUSH EDI                            ; 0046ae85
    CALL crt_memory.c_realloc_FUN_00564a70 ; 0046ae86
        ;   XREF to: 00564a70 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_realloc_FUN_00564a70()
    ADD ESP,0x8                         ; 0046ae8b
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0046ae8e
    MOV dword ptr [EDX],EAX             ; 0046ae92
    CMP dword ptr [EBX],0x1             ; 0046ae94
    JGE 0x0046aebb                      ; 0046ae97
        ;   XREF to: 0046aebb (CONDITIONAL_JUMP)  ; LAB_0046aebb
    MOV EAX,0x57e2ed                    ; 0046ae99 | = "..\\core\\dtrace.cpp"
    MOV EDX,0x8f6                       ; 0046ae9e
    PUSH 0x57e300                       ; 0046aea3 | = "CDemonRaytrace::getPVS - no cubes ren..."
    MOV [0x01cc4800],EAX                ; 0046aea8 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 0046aead | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0046aeb3
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 0046aeb8
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046aebb
        ;   Label: LAB_0046aebb
    CMP dword ptr [EAX],0x0             ; 0046aebf
    JNZ 0x0046aee7                      ; 0046aec2
        ;   XREF to: 0046aee7 (CONDITIONAL_JUMP)  ; LAB_0046aee7
    MOV EBX,0x57e32e                    ; 0046aec4 | = "..\\core\\dtrace.cpp"
    MOV ESI,0x8fa                       ; 0046aec9
    PUSH 0x57e341                       ; 0046aece | = "CDemonRaytrace::getPVS - out of memory"
    MOV dword ptr [0x01cc4800],EBX      ; 0046aed3 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 0046aed9 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0046aedf
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
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
    MOV [0x01cc4800],EAX                ; 0046af35 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 0046af3a | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0046af40
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
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

