; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_beginBackgroundScene_FUN_00440b20(int param_1)
;
;
; XREF[2]:
;   core_set.cpp_CDemonSet_setCameraView_FUN_005088f0 at 00508b14
;   core_set.cpp_FUN_00509a80 at 00509e96
;
; Referenced Globals:
;   TerminatedCString s_core_dcamera_cpp_0057b741
;   TerminatedCString s_CDemonCamera_beginBackgr_0057b755
;   undefined4 DAT_005b7620
;   undefined4 DAT_005b7624
;   undefined4 DAT_0140efa8
;   undefined4 DAT_0140efac
;   undefined4 DAT_0140efb0
;   undefined4 DAT_0140efb4
;   undefined4 DAT_0140efb8
;   undefined4 DAT_01410274
;   undefined4 DAT_01410278
;   undefined4 DAT_0141027c
;   undefined4 DAT_01bd2fa0
;   undefined4 DAT_01bd2fa4
;   undefined4 DAT_01c00624
;   ... and 5 more
;
; Called Functions:
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00440b20
        ;   Label: core_dcamera.cpp_CDemonCamera_beginBackgroundScene_FUN_00440b20
    PUSH ESI                            ; 00440b21
    PUSH EDI                            ; 00440b22
    PUSH EBP                            ; 00440b23
    MOV EBX,dword ptr [ESP + 0x14]      ; 00440b24
    CMP dword ptr [EBX + 0x11e4],0x0    ; 00440b28
    JZ 0x00440b55                       ; 00440b2f
        ;   XREF to: 00440b55 (CONDITIONAL_JUMP)  ; LAB_00440b55
    MOV EDI,dword ptr [0x0140efa8]      ; 00440b31 | DAT_0140efa8
        ;   Label: LAB_00440b31
    INC EDI                             ; 00440b37
    MOV dword ptr [0x0140efa8],EDI      ; 00440b38 | DAT_0140efa8
    CMP EDI,0x1                         ; 00440b3e
    JZ 0x00440b7a                       ; 00440b41
        ;   XREF to: 00440b7a (CONDITIONAL_JUMP)  ; LAB_00440b7a
    LEA EAX,[EAX]                       ; 00440b43
    LEA EDX,[EDX]                       ; 00440b49
    NOP                                 ; 00440b4f
    POP EBP                             ; 00440b50
        ;   Label: LAB_00440b50
    POP EDI                             ; 00440b51
    POP ESI                             ; 00440b52
    POP EBX                             ; 00440b53
    RET                                 ; 00440b54
    MOV ECX,0x57b741                    ; 00440b55 | = "..\\core\\dcamera.cpp"
        ;   Label: LAB_00440b55
    MOV ESI,0x43b                       ; 00440b5a
    PUSH 0x57b755                       ; 00440b5f | = "CDemonCamera::beginBackgroundScene - ..."
    MOV dword ptr [0x01cc4800],ECX      ; 00440b64 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 00440b6a | DAT_01cc4804
    CALL FUN_004c8440                   ; 00440b70
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00440b75
    JMP 0x00440b31                      ; 00440b78
        ;   XREF to: 00440b31 (UNCONDITIONAL_JUMP)  ; LAB_00440b31
    MOV ESI,0x1bd2fa0                   ; 00440b7a
        ;   Label: LAB_00440b7a
    MOV EDI,0x140efb4                   ; 00440b7f
    MOV EDX,0x8                         ; 00440b84
    MOV EAX,[0x005b7624]                ; 00440b89 | DAT_005b7624
    MOV ECX,dword ptr [0x005b7620]      ; 00440b8e | DAT_005b7620
    MOV [0x0140efac],EAX                ; 00440b94 | DAT_0140efac
    MOV EAX,[0x01c02594]                ; 00440b99 | DAT_01c02594
    SHL ECX,0x2                         ; 00440b9e
    MOV [0x0140efb0],EAX                ; 00440ba1 | DAT_0140efb0
    PUSH EDI                            ; 00440ba6
    MOV EAX,ECX                         ; 00440ba7
    SHR ECX,0x2                         ; 00440ba9
    MOVSD.REP ES:EDI,ESI                ; 00440bac | DAT_01bd2fa0 | DAT_0140efb4 | DAT_01bd2fa4
    MOV CL,AL                           ; 00440bae
    AND CL,0x3                          ; 00440bb0
    MOVSB.REP ES:EDI,ESI                ; 00440bb3 | DAT_01bd2fa4 | DAT_0140efb8
    POP EDI                             ; 00440bb5
    MOV ESI,0x20                        ; 00440bb6
    MOV EAX,[0x01c00624]                ; 00440bbb | DAT_01c00624
    MOV EBP,dword ptr [EBX + 0x140]     ; 00440bc0
    XOR ECX,ECX                         ; 00440bc6
    MOV [0x01410274],EAX                ; 00440bc8 | DAT_01410274
    MOV dword ptr [0x005b7624],ESI      ; 00440bcd | DAT_005b7624
    MOV EAX,[0x01c00630]                ; 00440bd3 | DAT_01c00630
    MOV dword ptr [0x01c02594],ECX      ; 00440bd8 | DAT_01c02594
    MOV [0x01410278],EAX                ; 00440bde | DAT_01410278
    MOV EAX,[0x01c0063c]                ; 00440be3 | DAT_01c0063c
    MOV dword ptr [0x01c00630],EDX      ; 00440be8 | DAT_01c00630
    MOV [0x0141027c],EAX                ; 00440bee | DAT_0141027c
    MOV EAX,0x10                        ; 00440bf3
    MOV dword ptr [0x01c0063c],ECX      ; 00440bf8 | DAT_01c0063c
    MOV [0x01c00624],EAX                ; 00440bfe | DAT_01c00624
    XOR EAX,EAX                         ; 00440c03
    TEST EBP,EBP                        ; 00440c05
    JLE 0x00440b50                      ; 00440c07
        ;   XREF to: 00440b50 (CONDITIONAL_JUMP)  ; LAB_00440b50
    MOV EDX,dword ptr [EBX + 0x13c]     ; 00440c0d
        ;   Label: LAB_00440c0d
    IMUL EDX,EAX                        ; 00440c13
    MOV ECX,dword ptr [EBX + 0x158]     ; 00440c16
    SHL EDX,0x2                         ; 00440c1c
    ADD ECX,EDX                         ; 00440c1f
    MOV EDX,dword ptr [EBX + 0x144]     ; 00440c21
    SHL EDX,0x2                         ; 00440c27
    SUB ECX,EDX                         ; 00440c2a
    MOV EDX,ECX                         ; 00440c2c
    MOV ECX,dword ptr [EBX + 0x148]     ; 00440c2e
    ADD ECX,EAX                         ; 00440c34
    MOV dword ptr [ECX*0x4 + 0x1bd2fa0],EDX ; 00440c36 | DAT_01bd2fa0
    INC EAX                             ; 00440c3d
    CMP EAX,dword ptr [EBX + 0x140]     ; 00440c3e
    JL 0x00440c0d                       ; 00440c44
        ;   XREF to: 00440c0d (CONDITIONAL_JUMP)  ; LAB_00440c0d
    POP EBP                             ; 00440c46
    POP EDI                             ; 00440c47
    POP ESI                             ; 00440c48
    POP EBX                             ; 00440c49
    RET                                 ; 00440c4a

