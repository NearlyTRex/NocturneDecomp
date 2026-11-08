; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00459980(int *param_1,char *param_2)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   FUN_004208d0 at 00420cd0
;   FUN_00459710 at 004597e1
;   FUN_00459d00 at 00459e3b
;
; Referenced Globals:
;   undefined4 DAT_005baabb
;   undefined4 DAT_005baabe
;   TerminatedCString s_core_dfilter_cpp_005baac2
;   TerminatedCString s_CDemonFilter_load_Bad_fi_005baad6
;   undefined4 DAT_005baafd
;   TerminatedCString s_core_dfilter_cpp_005bab01
;   TerminatedCString s_CDemonFilter_load_Non_sq_005bab15
;   TerminatedCString s_core_dfilter_cpp_005bab42
;   TerminatedCString s_CDemonFilter_load_Bad_fi_005bab56
;   TerminatedCString s_core_dfilter_cpp_005bab7e
;   TerminatedCString s_CDemonFilter_load_Bad_fi_005bab92
;   undefined4 DAT_005babba
;   undefined4 DAT_005babbd
;   TerminatedCString s_core_dfilter_cpp_005babc1
;   TerminatedCString s_CDemonFilter_load_Bad_fi_005babd5
;   ... and 2 more
;
; Called Functions:
;   FUN_00459910
;   FUN_004657f0
;   FUN_004659c0
;   FUN_004e4330
;   FUN_005a3120
;   FUN_005a3890
;   FUN_005a3a90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00459980
        ;   Label: FUN_00459980
    PUSH ESI                            ; 00459981
    PUSH EDI                            ; 00459982
    PUSH EBP                            ; 00459983
    SUB ESP,0x4                         ; 00459984
    MOV EBX,dword ptr [ESP + 0x18]      ; 00459987
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0045998b
    PUSH 0x5baabb                       ; 0045998f | DAT_005baabb
    PUSH EDI                            ; 00459994
    PUSH 0x5baabe                       ; 00459995 | DAT_005baabe
    CALL FUN_004659c0                   ; 0045999a
        ;   XREF to: 004659c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004659c0()
    ADD ESP,0xc                         ; 0045999f
    MOV ESI,EAX                         ; 004599a2
    TEST EAX,EAX                        ; 004599a4
    JZ 0x00459ae2                       ; 004599a6
        ;   XREF to: 00459ae2 (CONDITIONAL_JUMP)  ; LAB_00459ae2
    PUSH ESI                            ; 004599ac
        ;   Label: LAB_004599ac
    CALL FUN_005a3a90                   ; 004599ad
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3a90()
    ADD ESP,0x4                         ; 004599b2
    PUSH EDI                            ; 004599b5
    PUSH 0x5baafd                       ; 004599b6 | DAT_005baafd
    CALL FUN_004657f0                   ; 004599bb
        ;   XREF to: 004657f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004657f0()
    ADD ESP,0x8                         ; 004599c0
    MOV dword ptr [ESP],EAX             ; 004599c3
    MOV EDX,EAX                         ; 004599c6
    FILD dword ptr [ESP]                ; 004599c8
    FSQRT                               ; 004599cb
    CALL FUN_005a3120                   ; 004599cd
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    MOV EAX,EDX                         ; 004599d2
    FISTP dword ptr [EBX]               ; 004599d4
    SAR EDX,0x1f                        ; 004599d6
    MOV ECX,dword ptr [EBX]             ; 004599d9
    IDIV ECX                            ; 004599db
    MOV dword ptr [EBX + 0x4],EAX       ; 004599dd
    MOV EAX,dword ptr [EBX]             ; 004599e0
    MOV ESI,dword ptr [EBX + 0x4]       ; 004599e2
    CMP EAX,ESI                         ; 004599e5
    JZ 0x00459a0f                       ; 004599e7
        ;   XREF to: 00459a0f (CONDITIONAL_JUMP)  ; LAB_00459a0f
    PUSH ESI                            ; 004599e9
    MOV ECX,dword ptr [EBX]             ; 004599ea
    PUSH ECX                            ; 004599ec
    MOV EBP,0x5bab01                    ; 004599ed | = "..\\core\\dfilter.cpp"
    MOV EAX,0xb7                        ; 004599f2
    PUSH 0x5bab15                       ; 004599f7 | = "CDemonFilter::load - Non-square filte..."
    MOV dword ptr [0x01d71de0],EBP      ; 004599fc | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 00459a02 | DAT_01d71de4
    CALL FUN_004e4330                   ; 00459a07
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0xc                         ; 00459a0c
    MOV ESI,dword ptr [EBX]             ; 00459a0f
        ;   Label: LAB_00459a0f
    CMP ESI,0x40                        ; 00459a11
    JGE 0x00459b0b                      ; 00459a14
        ;   XREF to: 00459b0b (CONDITIONAL_JUMP)  ; LAB_00459b0b
    MOV ECX,dword ptr [EBX]             ; 00459a1a
        ;   Label: LAB_00459a1a
    PUSH ECX                            ; 00459a1c
    MOV EAX,0x5bab42                    ; 00459a1d | = "..\\core\\dfilter.cpp"
    MOV EDX,0xb9                        ; 00459a22
    PUSH 0x5bab56                       ; 00459a27 | = "CDemonFilter::load - Bad filter size %d"
    MOV [0x01d71de0],EAX                ; 00459a2c | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 00459a31 | DAT_01d71de4
    CALL FUN_004e4330                   ; 00459a37
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x8                         ; 00459a3c
    MOV ESI,dword ptr [EBX + 0x4]       ; 00459a3f
        ;   Label: LAB_00459a3f
    CMP ESI,0x40                        ; 00459a42
    JGE 0x00459b1c                      ; 00459a45
        ;   XREF to: 00459b1c (CONDITIONAL_JUMP)  ; LAB_00459b1c
    MOV ECX,dword ptr [EBX + 0x4]       ; 00459a4b
        ;   Label: LAB_00459a4b
    PUSH ECX                            ; 00459a4e
    MOV EAX,0x5bab7e                    ; 00459a4f | = "..\\core\\dfilter.cpp"
    MOV EDX,0xbc                        ; 00459a54
    PUSH 0x5bab92                       ; 00459a59 | = "CDemonFilter::load - Bad filter size %d"
    MOV [0x01d71de0],EAX                ; 00459a5e | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 00459a63 | DAT_01d71de4
    CALL FUN_004e4330                   ; 00459a69
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x8                         ; 00459a6e
    PUSH EBX                            ; 00459a71
        ;   Label: LAB_00459a71
    CALL FUN_00459910                   ; 00459a72
        ;   XREF to: 00459910 (UNCONDITIONAL_CALL)  ; undefined FUN_00459910()
    ADD ESP,0x4                         ; 00459a77
    PUSH 0x5babba                       ; 00459a7a | DAT_005babba
    PUSH EDI                            ; 00459a7f
    PUSH 0x5babbd                       ; 00459a80 | DAT_005babbd
    CALL FUN_004659c0                   ; 00459a85
        ;   XREF to: 004659c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004659c0()
    ADD ESP,0xc                         ; 00459a8a
    MOV ESI,EAX                         ; 00459a8d
    TEST EAX,EAX                        ; 00459a8f
    JZ 0x00459b2d                       ; 00459a91
        ;   XREF to: 00459b2d (CONDITIONAL_JUMP)  ; LAB_00459b2d
    PUSH ESI                            ; 00459a97
        ;   Label: LAB_00459a97
    MOV EDX,dword ptr [EBX + 0x4]       ; 00459a98
    PUSH EDX                            ; 00459a9b
    MOV ECX,dword ptr [EBX]             ; 00459a9c
    PUSH ECX                            ; 00459a9e
    MOV EBP,dword ptr [EBX + 0x48]      ; 00459a9f
    PUSH EBP                            ; 00459aa2
    CALL FUN_005a3890                   ; 00459aa3
        ;   XREF to: 005a3890 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3890()
    ADD ESP,0x10                        ; 00459aa8
    PUSH ESI                            ; 00459aab
    CALL FUN_005a3a90                   ; 00459aac
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3a90()
    ADD ESP,0x4                         ; 00459ab1
    XOR ECX,ECX                         ; 00459ab4
    MOV EAX,dword ptr [EBX + 0x4]       ; 00459ab6
        ;   Label: LAB_00459ab6
    MOV EDX,dword ptr [EBX]             ; 00459ab9
    IMUL EDX,EAX                        ; 00459abb
    CMP ECX,EDX                         ; 00459abe
    JGE 0x00459b54                      ; 00459ac0
        ;   XREF to: 00459b54 (CONDITIONAL_JUMP)  ; LAB_00459b54
    MOV ESI,dword ptr [EBX + 0x48]      ; 00459ac6
    XOR EDX,EDX                         ; 00459ac9
    MOV DL,byte ptr [ECX + ESI*0x1]     ; 00459acb
    MOV EAX,EDX                         ; 00459ace
    SAR EDX,0x1f                        ; 00459ad0
    SHL EDX,0x2                         ; 00459ad3
    SBB EAX,EDX                         ; 00459ad6
    SAR EAX,0x2                         ; 00459ad8
    INC ECX                             ; 00459adb
    MOV byte ptr [ECX + ESI*0x1 + -0x1],AL ; 00459adc
    JMP 0x00459ab6                      ; 00459ae0
        ;   XREF to: 00459ab6 (UNCONDITIONAL_JUMP)  ; LAB_00459ab6
    PUSH EDI                            ; 00459ae2
        ;   Label: LAB_00459ae2
    MOV EDX,0x5baac2                    ; 00459ae3 | = "..\\core\\dfilter.cpp"
    MOV ECX,0xab                        ; 00459ae8
    PUSH 0x5baad6                       ; 00459aed | = "CDemonFilter::load - Bad filename : %s"
    MOV dword ptr [0x01d71de0],EDX      ; 00459af2 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 00459af8 | DAT_01d71de4
    CALL FUN_004e4330                   ; 00459afe
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x8                         ; 00459b03
    JMP 0x004599ac                      ; 00459b06
        ;   XREF to: 004599ac (UNCONDITIONAL_JUMP)  ; LAB_004599ac
    CMP ESI,0x100                       ; 00459b0b
        ;   Label: LAB_00459b0b
    JG 0x00459a1a                       ; 00459b11
        ;   XREF to: 00459a1a (CONDITIONAL_JUMP)  ; LAB_00459a1a
    JMP 0x00459a3f                      ; 00459b17
        ;   XREF to: 00459a3f (UNCONDITIONAL_JUMP)  ; LAB_00459a3f
    CMP ESI,0x100                       ; 00459b1c
        ;   Label: LAB_00459b1c
    JG 0x00459a4b                       ; 00459b22
        ;   XREF to: 00459a4b (CONDITIONAL_JUMP)  ; LAB_00459a4b
    JMP 0x00459a71                      ; 00459b28
        ;   XREF to: 00459a71 (UNCONDITIONAL_JUMP)  ; LAB_00459a71
    MOV EBP,0x5babc1                    ; 00459b2d | = "..\\core\\dfilter.cpp"
        ;   Label: LAB_00459b2d
    MOV EAX,0xc6                        ; 00459b32
    PUSH 0x5babd5                       ; 00459b37 | = "CDemonFilter::load - Bad filename"
    MOV dword ptr [0x01d71de0],EBP      ; 00459b3c | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 00459b42 | DAT_01d71de4
    CALL FUN_004e4330                   ; 00459b47
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 00459b4c
    JMP 0x00459a97                      ; 00459b4f
        ;   XREF to: 00459a97 (UNCONDITIONAL_JUMP)  ; LAB_00459a97
    ADD EBX,0x8                         ; 00459b54
        ;   Label: LAB_00459b54
    MOV ESI,EDI                         ; 00459b57
    MOV EDI,EBX                         ; 00459b59
    PUSH EDI                            ; 00459b5b
    MOV AL,byte ptr [ESI]               ; 00459b5c
        ;   Label: LAB_00459b5c
    MOV byte ptr [EDI],AL               ; 00459b5e
    CMP AL,0x0                          ; 00459b60
    JZ 0x00459b74                       ; 00459b62
        ;   XREF to: 00459b74 (CONDITIONAL_JUMP)  ; LAB_00459b74
    MOV AL,byte ptr [ESI + 0x1]         ; 00459b64
    ADD ESI,0x2                         ; 00459b67
    MOV byte ptr [EDI + 0x1],AL         ; 00459b6a
    ADD EDI,0x2                         ; 00459b6d
    CMP AL,0x0                          ; 00459b70
    JNZ 0x00459b5c                      ; 00459b72
        ;   XREF to: 00459b5c (CONDITIONAL_JUMP)  ; LAB_00459b5c
    POP EDI                             ; 00459b74
        ;   Label: LAB_00459b74
    ADD ESP,0x4                         ; 00459b75
    POP EBP                             ; 00459b78
    POP EDI                             ; 00459b79
    POP ESI                             ; 00459b7a
    POP EBX                             ; 00459b7b
    RET                                 ; 00459b7c

