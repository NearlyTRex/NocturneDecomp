; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004771c0(int param_1,int *param_2,int *param_3)
;
;
; XREF[1]:
;   FUN_00533b80 at 00533c23
;
; Referenced Globals:
;   TerminatedCString s_core_dtrace_cpp_005bcada
;   TerminatedCString s_CDemonRenderer_getPVS_PV_005bcaed
;   TerminatedCString s_core_dtrace_cpp_005bcb18
;   TerminatedCString s_CDemonRaytrace_getPVS_no_005bcb2b
;   TerminatedCString s_core_dtrace_cpp_005bcb59
;   TerminatedCString s_CDemonRaytrace_getPVS_ou_005bcb6c
;   TerminatedCString s_core_dtrace_cpp_005bcb93
;   TerminatedCString s_CDemonRenderer_savePVS_c_005bcba6
;   undefined4 DAT_01c0b7b4
;   undefined4 DAT_01c0b7b8
;   undefined4 DAT_01c0b7c0
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   FUN_004e4330
;   FUN_005a3e50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004771c0
        ;   Label: FUN_004771c0
    PUSH ESI                            ; 004771c1
    PUSH EDI                            ; 004771c2
    PUSH EBP                            ; 004771c3
    MOV EBX,dword ptr [ESP + 0x18]      ; 004771c4
    CMP dword ptr [0x01c0b7b8],0x0      ; 004771c8 | DAT_01c0b7b8
    JNZ 0x004771f4                      ; 004771cf
        ;   XREF to: 004771f4 (CONDITIONAL_JUMP)  ; LAB_004771f4
    MOV ECX,0x5bcada                    ; 004771d1 | = "..\\core\\dtrace.cpp"
    MOV ESI,0x8ea                       ; 004771d6
    PUSH 0x5bcaed                       ; 004771db | = "CDemonRenderer::getPVS - PVS is not v..."
    MOV dword ptr [0x01d71de0],ECX      ; 004771e0 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 004771e6 | DAT_01d71de4
    CALL FUN_004e4330                   ; 004771ec
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 004771f1
    MOV EAX,[0x01c0b7b4]                ; 004771f4 | DAT_01c0b7b4
        ;   Label: LAB_004771f4
    MOV dword ptr [EBX],EAX             ; 004771f9
    SHL EAX,0x2                         ; 004771fb
    PUSH EAX                            ; 004771fe
    MOV EAX,dword ptr [ESP + 0x20]      ; 004771ff
    MOV EDI,dword ptr [EAX]             ; 00477203
    PUSH EDI                            ; 00477205
    CALL FUN_005a3e50                   ; 00477206
        ;   XREF to: 005a3e50 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3e50()
    ADD ESP,0x8                         ; 0047720b
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0047720e
    MOV dword ptr [EDX],EAX             ; 00477212
    CMP dword ptr [EBX],0x1             ; 00477214
    JGE 0x0047723b                      ; 00477217
        ;   XREF to: 0047723b (CONDITIONAL_JUMP)  ; LAB_0047723b
    MOV EAX,0x5bcb18                    ; 00477219 | = "..\\core\\dtrace.cpp"
    MOV EDX,0x8f6                       ; 0047721e
    PUSH 0x5bcb2b                       ; 00477223 | = "CDemonRaytrace::getPVS - no cubes ren..."
    MOV [0x01d71de0],EAX                ; 00477228 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 0047722d | DAT_01d71de4
    CALL FUN_004e4330                   ; 00477233
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 00477238
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0047723b
        ;   Label: LAB_0047723b
    CMP dword ptr [EAX],0x0             ; 0047723f
    JNZ 0x00477267                      ; 00477242
        ;   XREF to: 00477267 (CONDITIONAL_JUMP)  ; LAB_00477267
    MOV EBX,0x5bcb59                    ; 00477244 | = "..\\core\\dtrace.cpp"
    MOV ESI,0x8fa                       ; 00477249
    PUSH 0x5bcb6c                       ; 0047724e | = "CDemonRaytrace::getPVS - out of memory"
    MOV dword ptr [0x01d71de0],EBX      ; 00477253 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 00477259 | DAT_01d71de4
    CALL FUN_004e4330                   ; 0047725f
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 00477264
    MOV EDX,dword ptr [ESP + 0x14]      ; 00477267
        ;   Label: LAB_00477267
    MOV EAX,dword ptr [ESP + 0x14]      ; 0047726b
    MOV EDI,dword ptr [EDX + 0x44]      ; 0047726f
    MOV EAX,dword ptr [EAX + 0x40]      ; 00477272
    IMUL EAX,EDI                        ; 00477275
    MOV ESI,dword ptr [EDX + 0x48]      ; 00477278
    IMUL ESI,EAX                        ; 0047727b
    MOV EAX,[0x01c0b7b4]                ; 0047727e | DAT_01c0b7b4
    XOR EBP,EBP                         ; 00477283
    TEST EAX,EAX                        ; 00477285
    JLE 0x004772e0                      ; 00477287
        ;   XREF to: 004772e0 (CONDITIONAL_JUMP)  ; LAB_004772e0
    XOR EDI,EDI                         ; 00477289
    XOR EBX,EBX                         ; 0047728b
        ;   Label: LAB_0047728b
    TEST ESI,ESI                        ; 0047728d
    JLE 0x004772a2                      ; 0047728f
        ;   XREF to: 004772a2 (CONDITIONAL_JUMP)  ; LAB_004772a2
    MOV EAX,dword ptr [ESP + 0x14]      ; 00477291
    MOV EDX,EDI                         ; 00477295
    MOV EAX,dword ptr [EAX + 0x50]      ; 00477297
    CMP EAX,dword ptr [EDX + 0x1c0b7bc] ; 0047729a | DAT_01c0b7c0
        ;   Label: LAB_0047729a
    JNZ 0x004772e5                      ; 004772a0
        ;   XREF to: 004772e5 (CONDITIONAL_JUMP)  ; LAB_004772e5
    CMP EBX,ESI                         ; 004772a2
        ;   Label: LAB_004772a2
    JL 0x004772c8                       ; 004772a4
        ;   XREF to: 004772c8 (CONDITIONAL_JUMP)  ; LAB_004772c8
    MOV EAX,0x5bcb93                    ; 004772a6 | = "..\\core\\dtrace.cpp"
    MOV EDX,0x907                       ; 004772ab
    PUSH 0x5bcba6                       ; 004772b0 | = "CDemonRenderer::savePVS - can't find ..."
    MOV [0x01d71de0],EAX                ; 004772b5 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 004772ba | DAT_01d71de4
    CALL FUN_004e4330                   ; 004772c0
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 004772c5
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004772c8
        ;   Label: LAB_004772c8
    ADD EDI,0x4                         ; 004772cc
    MOV EAX,dword ptr [EAX]             ; 004772cf
    MOV EDX,dword ptr [0x01c0b7b4]      ; 004772d1 | DAT_01c0b7b4
    INC EBP                             ; 004772d7
    MOV dword ptr [EDI + EAX*0x1 + -0x4],EBX ; 004772d8
    CMP EBP,EDX                         ; 004772dc
    JL 0x0047728b                       ; 004772de
        ;   XREF to: 0047728b (CONDITIONAL_JUMP)  ; LAB_0047728b
    POP EBP                             ; 004772e0
        ;   Label: LAB_004772e0
    POP EDI                             ; 004772e1
    POP ESI                             ; 004772e2
    POP EBX                             ; 004772e3
    RET                                 ; 004772e4
    INC EBX                             ; 004772e5
        ;   Label: LAB_004772e5
    ADD EAX,0x34                        ; 004772e6
    CMP EBX,ESI                         ; 004772e9
    JL 0x0047729a                       ; 004772eb
        ;   XREF to: 0047729a (CONDITIONAL_JUMP)  ; LAB_0047729a
    JMP 0x004772a2                      ; 004772ed
        ;   XREF to: 004772a2 (UNCONDITIONAL_JUMP)  ; LAB_004772a2

