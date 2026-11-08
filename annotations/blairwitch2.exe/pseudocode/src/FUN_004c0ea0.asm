; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c0ea0(int param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 s_gargoyle_shatter_wav_005d8e39+1
;   TerminatedCString s_gargoyle_hurt_wav_005d8e4f
;   undefined4 DAT_00614d30
;
; Called Functions:
;   FUN_00408d70
;   FUN_00427360
;   FUN_00488890
;   FUN_0049d090
;   FUN_004c0c00
;   FUN_005035c0
;   FUN_00503620
;   FUN_00550b70
;   FUN_00551050
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c0ea0
        ;   Label: FUN_004c0ea0
    PUSH ESI                            ; 004c0ea1
    PUSH EDI                            ; 004c0ea2
    PUSH EBP                            ; 004c0ea3
    SUB ESP,0x18                        ; 004c0ea4
    MOV EBP,dword ptr [ESP + 0x2c]      ; 004c0ea7
    MOV EAX,dword ptr [ESP + 0x30]      ; 004c0eab
    ADD EAX,0x1c                        ; 004c0eaf
    PUSH EAX                            ; 004c0eb2
    PUSH EBP                            ; 004c0eb3
    LEA ESI,[ESP + 0x14]                ; 004c0eb4
    LEA EDI,[ESP + 0x8]                 ; 004c0eb8
    CALL FUN_00408d70                   ; 004c0ebc
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00408d70()
    LEA ESI,[ESP + 0x14]                ; 004c0ec1
    ADD ESP,0x8                         ; 004c0ec5
    XOR EBX,EBX                         ; 004c0ec8
    MOVSD ES:EDI,ESI                    ; 004c0eca
    MOVSD ES:EDI,ESI                    ; 004c0ecb
    MOVSD ES:EDI,ESI                    ; 004c0ecc
    XOR ESI,ESI                         ; 004c0ecd
    PUSH 0xffff                         ; 004c0ecf
        ;   Label: LAB_004c0ecf
    PUSH ESI                            ; 004c0ed4
    PUSH 0x8000                         ; 004c0ed5
    PUSH 0x10000                        ; 004c0eda
    PUSH ESI                            ; 004c0edf
    LEA EAX,[ESP + 0x14]                ; 004c0ee0
    PUSH EAX                            ; 004c0ee4
    MOV EDX,dword ptr [0x00614d30]      ; 004c0ee5 | DAT_00614d30
    PUSH EDX                            ; 004c0eeb
    INC EBX                             ; 004c0eec
    CALL FUN_0049d090                   ; 004c0eed
        ;   XREF to: 0049d090 (UNCONDITIONAL_CALL)  ; undefined FUN_0049d090()
    ADD ESP,0x1c                        ; 004c0ef2
    CMP EBX,0x3                         ; 004c0ef5
    JL 0x004c0ecf                       ; 004c0ef8
        ;   XREF to: 004c0ecf (CONDITIONAL_JUMP)  ; LAB_004c0ecf
    LEA EBX,[EBP + 0x2b4]               ; 004c0efa
    PUSH EBX                            ; 004c0f00
    CALL FUN_005035c0                   ; 004c0f01
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004c0f06
    ADD ESP,0x4                         ; 004c0f09
    CMP EAX,0x5                         ; 004c0f0c
    JZ 0x004c0fb4                       ; 004c0f0f
        ;   XREF to: 004c0fb4 (CONDITIONAL_JUMP)  ; LAB_004c0fb4
    MOV ECX,dword ptr [ESP + 0x30]      ; 004c0f15
    PUSH ECX                            ; 004c0f19
    PUSH EBP                            ; 004c0f1a
    CALL FUN_004c0c00                   ; 004c0f1b
        ;   XREF to: 004c0c00 (UNCONDITIONAL_CALL)  ; undefined FUN_004c0c00()
    ADD ESP,0x8                         ; 004c0f20
    MOV EAX,dword ptr [ESP + 0x30]      ; 004c0f23
    FLD float ptr [EAX + 0x4]           ; 004c0f27
    FSUBR float ptr [EBP + 0x25a8]      ; 004c0f2a
    FST float ptr [EBP + 0x25a8]        ; 004c0f30
    FLDZ                                ; 004c0f36
    FCOMPP                              ; 004c0f38
    FNSTSW AX                           ; 004c0f3a
    SAHF                                ; 004c0f3c
    JC 0x004c0fd1                       ; 004c0f3d
        ;   XREF to: 004c0fd1 (CONDITIONAL_JUMP)  ; LAB_004c0fd1
    MOV ESI,dword ptr [EBP + 0x10b38]   ; 004c0f43
    PUSH ESI                            ; 004c0f49
    CALL FUN_00551050                   ; 004c0f4a
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; undefined FUN_00551050()
    ADD ESP,0x4                         ; 004c0f4f
    PUSH EBX                            ; 004c0f52
    MOV dword ptr [EBP + 0x25a8],0x0    ; 004c0f53
    CALL FUN_005035c0                   ; 004c0f5d
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004c0f62
    ADD ESP,0x4                         ; 004c0f65
    CMP EAX,0x8                         ; 004c0f68
    JZ 0x004c0f9e                       ; 004c0f6b
        ;   XREF to: 004c0f9e (CONDITIONAL_JUMP)  ; LAB_004c0f9e
    PUSH 0x1                            ; 004c0f6d
    PUSH 0x8                            ; 004c0f6f
    PUSH EBX                            ; 004c0f71
    CALL FUN_00503620                   ; 004c0f72
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 004c0f77
    PUSH 0x5d8e3a                       ; 004c0f7a | s_gargoyle_shatter_wav_005d8e39+1
    MOV EAX,dword ptr [EBP + 0x2b0]     ; 004c0f7f
    PUSH EBP                            ; 004c0f85
    CALL dword ptr [EAX + 0x34]         ; 004c0f86
    ADD ESP,0x8                         ; 004c0f89
    PUSH 0x1                            ; 004c0f8c
    PUSH 0xbf800000                     ; 004c0f8e
    PUSH 0x0                            ; 004c0f93
    PUSH EBP                            ; 004c0f95
    CALL FUN_00427360                   ; 004c0f96
        ;   XREF to: 00427360 (UNCONDITIONAL_CALL)  ; undefined FUN_00427360()
    ADD ESP,0x10                        ; 004c0f9b
    MOV EDI,dword ptr [ESP + 0x30]      ; 004c0f9e
        ;   Label: LAB_004c0f9e
    PUSH EDI                            ; 004c0fa2
    PUSH EBP                            ; 004c0fa3
    CALL FUN_00488890                   ; 004c0fa4
        ;   XREF to: 00488890 (UNCONDITIONAL_CALL)  ; undefined FUN_00488890()
    ADD ESP,0x8                         ; 004c0fa9
    ADD ESP,0x18                        ; 004c0fac
    POP EBP                             ; 004c0faf
    POP EDI                             ; 004c0fb0
    POP ESI                             ; 004c0fb1
    POP EBX                             ; 004c0fb2
    RET                                 ; 004c0fb3
    MOV EAX,dword ptr [ESP + 0x30]      ; 004c0fb4
        ;   Label: LAB_004c0fb4
    PUSH EAX                            ; 004c0fb8
    PUSH EBP                            ; 004c0fb9
    MOV dword ptr [EAX + 0x4],0x0       ; 004c0fba
    CALL FUN_00488890                   ; 004c0fc1
        ;   XREF to: 00488890 (UNCONDITIONAL_CALL)  ; undefined FUN_00488890()
    ADD ESP,0x8                         ; 004c0fc6
    ADD ESP,0x18                        ; 004c0fc9
    POP EBP                             ; 004c0fcc
    POP EDI                             ; 004c0fcd
    POP ESI                             ; 004c0fce
    POP EBX                             ; 004c0fcf
    RET                                 ; 004c0fd0
    MOV EBX,dword ptr [EBP + 0x10b38]   ; 004c0fd1
        ;   Label: LAB_004c0fd1
    PUSH EBX                            ; 004c0fd7
    CALL FUN_00550b70                   ; 004c0fd8
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; undefined FUN_00550b70()
    ADD ESP,0x4                         ; 004c0fdd
    TEST EAX,EAX                        ; 004c0fe0
    JNZ 0x004c0f9e                      ; 004c0fe2
        ;   XREF to: 004c0f9e (CONDITIONAL_JUMP)  ; LAB_004c0f9e
    PUSH 0x5d8e4f                       ; 004c0fe4 | = "gargoyle-hurt?.wav"
    MOV EAX,dword ptr [EBP + 0x2b0]     ; 004c0fe9
    PUSH EBP                            ; 004c0fef
    CALL dword ptr [EAX + 0x34]         ; 004c0ff0
    ADD ESP,0x8                         ; 004c0ff3
    MOV dword ptr [EBP + 0x10b38],EAX   ; 004c0ff6
    JMP 0x004c0f9e                      ; 004c0ffc
        ;   XREF to: 004c0f9e (UNCONDITIONAL_JUMP)  ; LAB_004c0f9e

