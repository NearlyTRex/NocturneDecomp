; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004fcb40(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004fcd30 at 004fd0c9
;
; Referenced Globals:
;   TerminatedCString s_engine_keyframe_c_005e6a13
;   TerminatedCString s_Bad_key_frame_005e6a28
;   TerminatedCString s_engine_keyframe_c_005e6a36
;   TerminatedCString s_Key_frame_vertex_mismatc_005e6a4b
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_005030e0
;   FUN_0051f6d0
;   FUN_0051fee0
;   FUN_00520150
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fcb40
        ;   Label: FUN_004fcb40
    PUSH ESI                            ; 004fcb41
    PUSH EDI                            ; 004fcb42
    PUSH EBP                            ; 004fcb43
    SUB ESP,0x8                         ; 004fcb44
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004fcb47
    CMP dword ptr [EAX + 0x14],0x0      ; 004fcb4b
    JZ 0x004fcc8e                       ; 004fcb4f
        ;   XREF to: 004fcc8e (CONDITIONAL_JUMP)  ; LAB_004fcc8e
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004fcb55
        ;   Label: LAB_004fcb55
    MOV ECX,dword ptr [EAX + 0x14]      ; 004fcb59
    PUSH ECX                            ; 004fcb5c
    CALL FUN_0051fee0                   ; 004fcb5d
        ;   XREF to: 0051fee0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051fee0()
    ADD ESP,0x4                         ; 004fcb62
    MOV EBP,EAX                         ; 004fcb65
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004fcb67
    MOV EAX,dword ptr [EAX + 0x14]      ; 004fcb6b
    ADD EAX,EBP                         ; 004fcb6e
    PUSH EAX                            ; 004fcb70
    CALL FUN_0051fee0                   ; 004fcb71
        ;   XREF to: 0051fee0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051fee0()
    ADD ESP,0x4                         ; 004fcb76
    ADD EBP,EAX                         ; 004fcb79
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004fcb7b
    MOV EBX,dword ptr [EAX + 0x8]       ; 004fcb7f
    XOR ESI,ESI                         ; 004fcb82
    TEST EBX,EBX                        ; 004fcb84
    JLE 0x004fcbb8                      ; 004fcb86
        ;   XREF to: 004fcbb8 (CONDITIONAL_JUMP)  ; LAB_004fcbb8
    LEA EDI,[EAX + 0x18]                ; 004fcb88
    MOV EBX,EAX                         ; 004fcb8b
    CMP dword ptr [EBX + 0x118],0x0     ; 004fcb8d
        ;   Label: LAB_004fcb8d
    JNZ 0x004fcba6                      ; 004fcb94
        ;   XREF to: 004fcba6 (CONDITIONAL_JUMP)  ; LAB_004fcba6
    PUSH EBP                            ; 004fcb96
    PUSH EDI                            ; 004fcb97
    CALL FUN_00520150                   ; 004fcb98
        ;   XREF to: 00520150 (UNCONDITIONAL_CALL)  ; undefined FUN_00520150()
    ADD ESP,0x8                         ; 004fcb9d
    MOV dword ptr [EBX + 0x118],EAX     ; 004fcba0
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004fcba6
        ;   Label: LAB_004fcba6
    ADD EBX,0x4                         ; 004fcbaa
    INC ESI                             ; 004fcbad
    MOV EDX,dword ptr [EAX + 0x8]       ; 004fcbae
    ADD EDI,0x10                        ; 004fcbb1
    CMP ESI,EDX                         ; 004fcbb4
    JL 0x004fcb8d                       ; 004fcbb6
        ;   XREF to: 004fcb8d (CONDITIONAL_JUMP)  ; LAB_004fcb8d
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004fcbb8
        ;   Label: LAB_004fcbb8
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004fcbbc
    XOR EBX,EBX                         ; 004fcbc0
    MOV EBP,dword ptr [EBP + 0x14]      ; 004fcbc2
    MOV ECX,dword ptr [EAX + 0x8]       ; 004fcbc5
    ADD EBP,0x8                         ; 004fcbc8
    TEST ECX,ECX                        ; 004fcbcb
    JLE 0x004fcc3f                      ; 004fcbcd
        ;   XREF to: 004fcc3f (CONDITIONAL_JUMP)  ; LAB_004fcc3f
    MOV ESI,EAX                         ; 004fcbcf
    MOV EDI,dword ptr [ESI + 0x118]     ; 004fcbd1
        ;   Label: LAB_004fcbd1
    MOV EAX,dword ptr [EDI + 0x8]       ; 004fcbd7
    ADD EDI,0x8                         ; 004fcbda
    CMP EAX,0x2                         ; 004fcbdd
    JZ 0x004fcc05                       ; 004fcbe0
        ;   XREF to: 004fcc05 (CONDITIONAL_JUMP)  ; LAB_004fcc05
    MOV EDX,0x5e6a13                    ; 004fcbe2 | = "..\\engine\\keyframe.c"
    MOV ECX,0xfd                        ; 004fcbe7
    PUSH 0x5e6a28                       ; 004fcbec | = "Bad key frame"
    MOV dword ptr [0x01d1d400],EDX      ; 004fcbf1 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 004fcbf7 | DAT_01d1d404
    CALL FUN_005030e0                   ; 004fcbfd
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 004fcc02
    MOV EDX,dword ptr [EDI + 0x8]       ; 004fcc05
        ;   Label: LAB_004fcc05
    CMP EDX,dword ptr [EBP + 0x8]       ; 004fcc08
    JZ 0x004fcc30                       ; 004fcc0b
        ;   XREF to: 004fcc30 (CONDITIONAL_JUMP)  ; LAB_004fcc30
    MOV ECX,0x5e6a36                    ; 004fcc0d | = "..\\engine\\keyframe.c"
    MOV EDI,0xfe                        ; 004fcc12
    PUSH 0x5e6a4b                       ; 004fcc17 | = "Key frame vertex mismatch"
    MOV dword ptr [0x01d1d400],ECX      ; 004fcc1c | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 004fcc22 | DAT_01d1d404
    CALL FUN_005030e0                   ; 004fcc28
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 004fcc2d
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004fcc30
        ;   Label: LAB_004fcc30
    INC EBX                             ; 004fcc34
    MOV EDX,dword ptr [EAX + 0x8]       ; 004fcc35
    ADD ESI,0x4                         ; 004fcc38
    CMP EBX,EDX                         ; 004fcc3b
    JL 0x004fcbd1                       ; 004fcc3d
        ;   XREF to: 004fcbd1 (CONDITIONAL_JUMP)  ; LAB_004fcbd1
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004fcc3f
        ;   Label: LAB_004fcc3f
    MOV EAX,dword ptr [EAX + 0x14]      ; 004fcc43
    MOV dword ptr [ESP],EAX             ; 004fcc46
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004fcc49
    XOR ECX,ECX                         ; 004fcc4d
    MOV EBX,dword ptr [EAX + 0x8]       ; 004fcc4f
    MOV dword ptr [ESP + 0x4],ECX       ; 004fcc52
    TEST EBX,EBX                        ; 004fcc56
    JLE 0x004fcc86                      ; 004fcc58
        ;   XREF to: 004fcc86 (CONDITIONAL_JUMP)  ; LAB_004fcc86
    MOV EBP,EAX                         ; 004fcc5a
    MOV EAX,dword ptr [ESP]             ; 004fcc5c
        ;   Label: LAB_004fcc5c
    MOV EBX,dword ptr [EBP + 0x118]     ; 004fcc5f
    MOV EAX,dword ptr [EAX + 0x4]       ; 004fcc65
    MOV ESI,dword ptr [EBX + 0x4]       ; 004fcc68
    CMP EAX,ESI                         ; 004fcc6b
    JNZ 0x004fcca6                      ; 004fcc6d
        ;   XREF to: 004fcca6 (CONDITIONAL_JUMP)  ; LAB_004fcca6
    MOV EAX,dword ptr [ESP + 0x4]       ; 004fcc6f
        ;   Label: LAB_004fcc6f
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004fcc73
    ADD EBP,0x4                         ; 004fcc77
    INC EAX                             ; 004fcc7a
    MOV ECX,dword ptr [EDX + 0x8]       ; 004fcc7b
    MOV dword ptr [ESP + 0x4],EAX       ; 004fcc7e
    CMP EAX,ECX                         ; 004fcc82
    JL 0x004fcc5c                       ; 004fcc84
        ;   XREF to: 004fcc5c (CONDITIONAL_JUMP)  ; LAB_004fcc5c
    ADD ESP,0x8                         ; 004fcc86
        ;   Label: LAB_004fcc86
    POP EBP                             ; 004fcc89
    POP EDI                             ; 004fcc8a
    POP ESI                             ; 004fcc8b
    POP EBX                             ; 004fcc8c
    RET                                 ; 004fcc8d
    ADD EAX,0x18                        ; 004fcc8e
        ;   Label: LAB_004fcc8e
    PUSH EAX                            ; 004fcc91
    CALL FUN_0051f6d0                   ; 004fcc92
        ;   XREF to: 0051f6d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051f6d0()
    ADD ESP,0x4                         ; 004fcc97
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004fcc9a
    MOV dword ptr [EDX + 0x14],EAX      ; 004fcc9e
    JMP 0x004fcb55                      ; 004fcca1
        ;   XREF to: 004fcb55 (UNCONDITIONAL_JUMP)  ; LAB_004fcb55
    MOV EAX,dword ptr [ESP]             ; 004fcca6
        ;   Label: LAB_004fcca6
    MOV EBX,ESI                         ; 004fcca9
    MOV EAX,dword ptr [EAX + 0x4]       ; 004fccab
    CDQ                                 ; 004fccae
    MOV ECX,EDX                         ; 004fccaf
    XOR EAX,EDX                         ; 004fccb1
    XOR EDX,EDX                         ; 004fccb3
    DIV EBX                             ; 004fccb5
    CMP EAX,0x7fff                      ; 004fccb7
    JC 0x004fccc3                       ; 004fccbc
        ;   XREF to: 004fccc3 (CONDITIONAL_JUMP)  ; LAB_004fccc3
    MOV EAX,0x7fff                      ; 004fccbe
    PUSH EAX                            ; 004fccc3
        ;   Label: LAB_004fccc3
    XOR EAX,EAX                         ; 004fccc4
    DIV EBX                             ; 004fccc6
    POP EDX                             ; 004fccc8
    SHRD EAX,EDX,0x10                   ; 004fccc9
    XOR EAX,ECX                         ; 004fcccd
    XOR ESI,ESI                         ; 004fcccf
    MOV EDI,dword ptr [EBP + 0x118]     ; 004fccd1
    MOV EBX,EAX                         ; 004fccd7
    MOV ECX,dword ptr [EBP + 0x118]     ; 004fccd9
    MOV EAX,dword ptr [EDI + 0x10]      ; 004fccdf
    ADD EDI,0x8                         ; 004fcce2
    ADD ECX,0x14                        ; 004fcce5
    TEST EAX,EAX                        ; 004fcce8
    JLE 0x004fcc6f                      ; 004fccea
        ;   XREF to: 004fcc6f (CONDITIONAL_JUMP)  ; LAB_004fcc6f
    MOV EAX,EBX                         ; 004fccec
        ;   Label: LAB_004fccec
    MOV EDX,dword ptr [ECX]             ; 004fccee
    IMUL EDX                            ; 004fccf0
    SHRD EAX,EDX,0x10                   ; 004fccf2
    MOV EDX,dword ptr [ECX + 0x4]       ; 004fccf6
    MOV dword ptr [ECX],EAX             ; 004fccf9
    MOV EAX,EBX                         ; 004fccfb
    IMUL EDX                            ; 004fccfd
    SHRD EAX,EDX,0x10                   ; 004fccff
    MOV EDX,dword ptr [ECX + 0x8]       ; 004fcd03
    MOV dword ptr [ECX + 0x4],EAX       ; 004fcd06
    MOV EAX,EBX                         ; 004fcd09
    IMUL EDX                            ; 004fcd0b
    SHRD EAX,EDX,0x10                   ; 004fcd0d
    MOV dword ptr [ECX + 0x8],EAX       ; 004fcd11
    INC ESI                             ; 004fcd14
    MOV EDX,dword ptr [EDI + 0x8]       ; 004fcd15
    ADD ECX,0xc                         ; 004fcd18
    CMP ESI,EDX                         ; 004fcd1b
    JGE 0x004fcc6f                      ; 004fcd1d
        ;   XREF to: 004fcc6f (CONDITIONAL_JUMP)  ; LAB_004fcc6f
    JMP 0x004fccec                      ; 004fcd23
        ;   XREF to: 004fccec (UNCONDITIONAL_JUMP)  ; LAB_004fccec

