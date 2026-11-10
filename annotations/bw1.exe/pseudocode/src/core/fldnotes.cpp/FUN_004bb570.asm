; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fldnotes_cpp_FUN_004bb570(int param_1)
;
;
; XREF[4]:
;   core_fldnotes.cpp_FUN_004bb2f0 at 004bb3bd
;   core_fldnotes.cpp_FUN_004bb510 at 004bb51b
;   core_fldnotes.cpp_FUN_004bb630 at 004bb639
;   core_fldnotes.cpp_FUN_004bb6c0 at 004bb6c6
;
; Referenced Globals:
;   TerminatedCString s_core_fldnotes_cpp_005df9e9
;   TerminatedCString s_Out_of_memory_005df9fe
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_fldnotes.cpp_FUN_004ba850
;   core_fldnotes.cpp_FUN_004bb5f0
;   core_main.c_FUN_005030e0
;   crt_unknown.c_debugAllocTracked1_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bb570
        ;   Label: core_fldnotes.cpp_FUN_004bb570
    MOV EBX,dword ptr [ESP + 0x8]       ; 004bb571
    CMP byte ptr [EBX + 0x48],0x0       ; 004bb575
    JNZ 0x004bb57d                      ; 004bb579
        ;   XREF to: 004bb57d (CONDITIONAL_JUMP)  ; LAB_004bb57d
    POP EBX                             ; 004bb57b
    RET                                 ; 004bb57c
    PUSH ESI                            ; 004bb57d
        ;   Label: LAB_004bb57d
    PUSH 0x120                          ; 004bb57e
    CALL crt_unknown.c_debugAllocTracked1_FUN_005c0f32 ; 004bb583
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005c0f32()
    ADD ESP,0x4                         ; 004bb588
    TEST EAX,EAX                        ; 004bb58b
    JZ 0x004bb5a0                       ; 004bb58d
        ;   XREF to: 004bb5a0 (CONDITIONAL_JUMP)  ; LAB_004bb5a0
    MOV EDX,dword ptr [EBX + 0x2c]      ; 004bb58f
    PUSH EDX                            ; 004bb592
    LEA ESI,[EBX + 0x48]                ; 004bb593
    PUSH ESI                            ; 004bb596
    PUSH EAX                            ; 004bb597
    CALL core_fldnotes.cpp_FUN_004ba850 ; 004bb598
        ;   XREF to: 004ba850 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004ba850()
    ADD ESP,0xc                         ; 004bb59d
    MOV ESI,EAX                         ; 004bb5a0
        ;   Label: LAB_004bb5a0
    TEST EAX,EAX                        ; 004bb5a2
    JNZ 0x004bb5cb                      ; 004bb5a4
        ;   XREF to: 004bb5cb (CONDITIONAL_JUMP)  ; LAB_004bb5cb
    PUSH EDI                            ; 004bb5a6
    MOV ECX,0x5df9e9                    ; 004bb5a7 | = "..\\core\\fldnotes.cpp"
    MOV EDI,0x581                       ; 004bb5ac
    PUSH 0x5df9fe                       ; 004bb5b1 | = "Out of memory"
    MOV dword ptr [0x01d1d400],ECX      ; 004bb5b6 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 004bb5bc | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004bb5c2
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004bb5c7
    POP EDI                             ; 004bb5ca
    MOV EAX,dword ptr [EBX + 0x40]      ; 004bb5cb
        ;   Label: LAB_004bb5cb
    MOV dword ptr [ESI],EAX             ; 004bb5ce
    MOV EAX,dword ptr [EBX + 0x44]      ; 004bb5d0
    MOV dword ptr [ESI + 0x4],EAX       ; 004bb5d3
    PUSH ESI                            ; 004bb5d6
    MOV EAX,dword ptr [EBX + 0x34]      ; 004bb5d7
    PUSH EBX                            ; 004bb5da
    MOV dword ptr [ESI + 0x18],EAX      ; 004bb5db
    CALL core_fldnotes.cpp_FUN_004bb5f0 ; 004bb5de
        ;   XREF to: 004bb5f0 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004bb5f0()
    ADD ESP,0x8                         ; 004bb5e3
    MOV byte ptr [EBX + 0x48],0x0       ; 004bb5e6
    POP ESI                             ; 004bb5ea
    POP EBX                             ; 004bb5eb
    RET                                 ; 004bb5ec

