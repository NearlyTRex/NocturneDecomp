; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00575db0(void)
;
;
; XREF[1]:
;   FUN_00573e70 at 00575f9b
;
; Referenced Globals:
;   undefined4 DAT_02c7464c
;   undefined4 DAT_02c74708
;   undefined4 DAT_02c74754
;   undefined4 DAT_02c74768
;   undefined4 DAT_02c74820
;   undefined4 DAT_02c74823
;   undefined4 DAT_02c7fbf8
;   undefined4 DAT_02c7fc08
;   undefined4 DAT_02c7fc18
;   undefined4 DAT_02c7fc88
;   undefined4 DAT_02c80650
;   undefined4 DAT_02c80658
;   undefined4 DAT_02c807f4
;   undefined4 DAT_02c807f7
;
; Called Functions:
;   FUN_00570f30
;   FUN_00571d70
;   FUN_00575560
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00575db0
        ;   Label: FUN_00575db0
    CMP dword ptr [0x02c80650],0x0      ; 00575db1 | DAT_02c80650
    JNZ 0x00575dbc                      ; 00575db8
        ;   XREF to: 00575dbc (CONDITIONAL_JUMP)  ; LAB_00575dbc
    POP EBP                             ; 00575dba
        ;   Label: LAB_00575dba
    RET                                 ; 00575dbb
    CALL FUN_00575560                   ; 00575dbc
        ;   XREF to: 00575560 (UNCONDITIONAL_CALL)  ; undefined FUN_00575560()
        ;   Label: LAB_00575dbc
    CMP EAX,0x1                         ; 00575dc1
    JL 0x00575dba                       ; 00575dc4
        ;   XREF to: 00575dba (CONDITIONAL_JUMP)  ; LAB_00575dba
    PUSH EDI                            ; 00575dc6
    PUSH ESI                            ; 00575dc7
    PUSH EBX                            ; 00575dc8
    MOV ESI,0x2c745ec                   ; 00575dc9
    LEA EDI,[ESI + 0x4700]              ; 00575dce
    MOV ECX,dword ptr [ESI + 0x60]      ; 00575dd4 | DAT_02c7464c | DAT_02c74768
        ;   Label: LAB_00575dd4
    MOV EBX,ESI                         ; 00575dd7
    TEST ECX,ECX                        ; 00575dd9
    JNZ 0x00575ee1                      ; 00575ddb
        ;   XREF to: 00575ee1 (CONDITIONAL_JUMP)  ; LAB_00575ee1
    ADD ESI,0x11c                       ; 00575de1
        ;   Label: LAB_00575de1
    CMP ESI,EDI                         ; 00575de7
    JNZ 0x00575dd4                      ; 00575de9
        ;   XREF to: 00575dd4 (CONDITIONAL_JUMP)  ; LAB_00575dd4
    TEST byte ptr [0x02c807f4],0x2      ; 00575deb | DAT_02c807f4
    JZ 0x00575e38                       ; 00575df2
        ;   XREF to: 00575e38 (CONDITIONAL_JUMP)  ; LAB_00575e38
    MOV EAX,[0x02c7fc88]                ; 00575df4 | DAT_02c7fc88
    MOV ESI,dword ptr [EAX*0x8 + 0x2c7fc1c] ; 00575df9
    PUSH ESI                            ; 00575e00
    MOV EDI,dword ptr [EAX*0x8 + 0x2c7fc18] ; 00575e01 | DAT_02c7fc18
    PUSH EDI                            ; 00575e08
    MOV EBP,dword ptr [EAX*0x8 + 0x2c7fc0c] ; 00575e09
    PUSH EBP                            ; 00575e10
    MOV ECX,dword ptr [EAX*0x8 + 0x2c7fc08] ; 00575e11 | DAT_02c7fc08
    PUSH ECX                            ; 00575e18
    MOV ESI,dword ptr [EAX*0x8 + 0x2c7fbfc] ; 00575e19
    PUSH ESI                            ; 00575e20
    MOV EDI,dword ptr [EAX*0x8 + 0x2c7fbf8] ; 00575e21 | DAT_02c7fbf8
    MOV EDX,dword ptr [0x02c80650]      ; 00575e28 | DAT_02c80650
    PUSH EDI                            ; 00575e2e
    MOV EBX,dword ptr [EDX]             ; 00575e2f
    PUSH EDX                            ; 00575e31
    CALL dword ptr [EBX + 0x1c]         ; 00575e32
    ADD ESP,0x1c                        ; 00575e35
    TEST byte ptr [0x02c807f7],0x20     ; 00575e38 | DAT_02c807f7
        ;   Label: LAB_00575e38
    JZ 0x00575e94                       ; 00575e3f
        ;   XREF to: 00575e94 (CONDITIONAL_JUMP)  ; LAB_00575e94
    MOV EAX,[0x02c7fc88]                ; 00575e41 | DAT_02c7fc88
    PUSH dword ptr [EAX*0x4 + 0x2c7fc80] ; 00575e46
    PUSH dword ptr [EAX*0x4 + 0x2c7fc78] ; 00575e4d
    PUSH dword ptr [EAX*0x4 + 0x2c7fc70] ; 00575e54
    PUSH dword ptr [EAX*0x4 + 0x2c7fc68] ; 00575e5b
    PUSH dword ptr [EAX*0x4 + 0x2c7fc60] ; 00575e62
    PUSH dword ptr [EAX*0x4 + 0x2c7fc58] ; 00575e69
    PUSH dword ptr [EAX*0x4 + 0x2c7fc50] ; 00575e70
    MOV EDX,dword ptr [0x02c80650]      ; 00575e77 | DAT_02c80650
    PUSH dword ptr [EAX*0x4 + 0x2c7fc48] ; 00575e7d
    MOV EBX,dword ptr [EDX]             ; 00575e84
    PUSH dword ptr [EAX*0x4 + 0x2c7fc40] ; 00575e86
    PUSH EDX                            ; 00575e8d
    CALL dword ptr [EBX + 0x20]         ; 00575e8e
    ADD ESP,0x28                        ; 00575e91
    TEST byte ptr [0x02c807f4],0x4      ; 00575e94 | DAT_02c807f4
        ;   Label: LAB_00575e94
    JZ 0x00575ec6                       ; 00575e9b
        ;   XREF to: 00575ec6 (CONDITIONAL_JUMP)  ; LAB_00575ec6
    MOV EAX,[0x02c7fc88]                ; 00575e9d | DAT_02c7fc88
    PUSH dword ptr [EAX*0x4 + 0x2c7fc38] ; 00575ea2
    MOV EDX,dword ptr [0x02c80650]      ; 00575ea9 | DAT_02c80650
    PUSH dword ptr [EAX*0x4 + 0x2c7fc30] ; 00575eaf
    MOV EBX,dword ptr [EDX]             ; 00575eb6
    PUSH dword ptr [EAX*0x4 + 0x2c7fc28] ; 00575eb8
    PUSH EDX                            ; 00575ebf
    CALL dword ptr [EBX + 0x24]         ; 00575ec0
    ADD ESP,0x10                        ; 00575ec3
    MOV EAX,[0x02c80650]                ; 00575ec6 | DAT_02c80650
        ;   Label: LAB_00575ec6
    XOR EBP,EBP                         ; 00575ecb
    PUSH EAX                            ; 00575ecd
    MOV EDX,dword ptr [EAX]             ; 00575ece
    MOV dword ptr [0x02c807f4],EBP      ; 00575ed0 | DAT_02c807f4
    CALL dword ptr [EDX + 0x18]         ; 00575ed6
    ADD ESP,0x4                         ; 00575ed9
    POP EBX                             ; 00575edc
    POP ESI                             ; 00575edd
    POP EDI                             ; 00575ede
    POP EBP                             ; 00575edf
    RET                                 ; 00575ee0
    CMP dword ptr [0x02c80658],0x1      ; 00575ee1 | DAT_02c80658
        ;   Label: LAB_00575ee1
    JNZ 0x00575ef5                      ; 00575ee8
        ;   XREF to: 00575ef5 (CONDITIONAL_JUMP)  ; LAB_00575ef5
    MOV EAX,[0x02c807f4]                ; 00575eea | DAT_02c807f4
    OR dword ptr [ESI + 0x118],EAX      ; 00575eef | DAT_02c74820
    TEST byte ptr [EBX + 0x4c],0x1      ; 00575ef5 | DAT_02c74754
        ;   Label: LAB_00575ef5
    JZ 0x00575f05                       ; 00575ef9
        ;   XREF to: 00575f05 (CONDITIONAL_JUMP)  ; LAB_00575f05
    AND dword ptr [EBX + 0x118],0xdffffff9 ; 00575efb | DAT_02c74820
    CMP dword ptr [EBX + 0x118],0x0     ; 00575f05 | DAT_02c74820
        ;   Label: LAB_00575f05
    JZ 0x00575de1                       ; 00575f0c
        ;   XREF to: 00575de1 (CONDITIONAL_JUMP)  ; LAB_00575de1
    PUSH 0x0                            ; 00575f12
    PUSH EBX                            ; 00575f14 | DAT_02c74708
    CALL FUN_00570f30                   ; 00575f15
        ;   XREF to: 00570f30 (UNCONDITIONAL_CALL)  ; undefined FUN_00570f30()
    ADD ESP,0x8                         ; 00575f1a
    MOV ECX,dword ptr [EBX + 0x118]     ; 00575f1d | DAT_02c74820
    PUSH ECX                            ; 00575f23
    MOV EAX,[0x02c80650]                ; 00575f24 | DAT_02c80650
    PUSH EBX                            ; 00575f29 | DAT_02c74708
    MOV EDX,dword ptr [EAX]             ; 00575f2a
    PUSH EAX                            ; 00575f2c
    CALL dword ptr [EDX + 0x44]         ; 00575f2d
    ADD ESP,0xc                         ; 00575f30
    TEST EAX,EAX                        ; 00575f33
    JZ 0x00575f63                       ; 00575f35
        ;   XREF to: 00575f63 (CONDITIONAL_JUMP)  ; LAB_00575f63
    TEST byte ptr [EBX + 0x11b],0x40    ; 00575f37 | DAT_02c74823
    JZ 0x00575de1                       ; 00575f3e
        ;   XREF to: 00575de1 (CONDITIONAL_JUMP)  ; LAB_00575de1
    PUSH EBX                            ; 00575f44 | DAT_02c74708
    MOV EAX,[0x02c80650]                ; 00575f45 | DAT_02c80650
    PUSH EAX                            ; 00575f4a
    MOV EDX,dword ptr [EAX]             ; 00575f4b
    CALL dword ptr [EDX + 0x4c]         ; 00575f4d
    ADD ESP,0x8                         ; 00575f50
    TEST EAX,EAX                        ; 00575f53
    JZ 0x00575f63                       ; 00575f55
        ;   XREF to: 00575f63 (CONDITIONAL_JUMP)  ; LAB_00575f63
    AND byte ptr [EBX + 0x11b],0xbf     ; 00575f57 | DAT_02c74823
    JMP 0x00575de1                      ; 00575f5e
        ;   XREF to: 00575de1 (UNCONDITIONAL_JUMP)  ; LAB_00575de1
    PUSH EBX                            ; 00575f63 | DAT_02c74708
        ;   Label: LAB_00575f63
    CALL FUN_00571d70                   ; 00575f64
        ;   XREF to: 00571d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00571d70()
    ADD ESP,0x4                         ; 00575f69
    JMP 0x00575de1                      ; 00575f6c
        ;   XREF to: 00575de1 (UNCONDITIONAL_JUMP)  ; LAB_00575de1

