; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a2060(int *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_01511cd0
;   undefined4 DAT_01c35e60
;   undefined4 DAT_01caf238
;   undefined4 DAT_01caf23c
;
; Called Functions:
;   FUN_00402f30
;   FUN_0040d900
;   FUN_0040dab0
;   FUN_004a8df0
;   FUN_004ab560
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a2060
        ;   Label: FUN_004a2060
    PUSH ESI                            ; 004a2061
    PUSH EDI                            ; 004a2062
    PUSH EBP                            ; 004a2063
    MOV ESI,dword ptr [ESP + 0x14]      ; 004a2064
    PUSH -0x1                           ; 004a2068
    PUSH 0x0                            ; 004a206a
    MOV EDX,dword ptr [ESI + 0x4]       ; 004a206c
    PUSH EDX                            ; 004a206f
    MOV ECX,dword ptr [ESI]             ; 004a2070
    PUSH ECX                            ; 004a2072
    LEA EAX,[ESI + 0x1c]                ; 004a2073
    PUSH EAX                            ; 004a2076
    MOV EBX,dword ptr [ESI + 0x11c]     ; 004a2077
    PUSH EBX                            ; 004a207d
    CALL FUN_004a8df0                   ; 004a207e
        ;   XREF to: 004a8df0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a8df0()
    MOV EDI,dword ptr [ESI + 0x18]      ; 004a2083
    ADD ESP,0x18                        ; 004a2086
    TEST EDI,EDI                        ; 004a2089
    JNZ 0x004a2092                      ; 004a208b
        ;   XREF to: 004a2092 (CONDITIONAL_JUMP)  ; LAB_004a2092
    POP EBP                             ; 004a208d
    POP EDI                             ; 004a208e
    POP ESI                             ; 004a208f
    POP EBX                             ; 004a2090
    RET                                 ; 004a2091
    PUSH 0x78                           ; 004a2092
        ;   Label: LAB_004a2092
    MOV EBP,dword ptr [ESI + 0x11c]     ; 004a2094
    PUSH EBP                            ; 004a209a
    CALL FUN_004ab560                   ; 004a209b
        ;   XREF to: 004ab560 (UNCONDITIONAL_CALL)  ; undefined FUN_004ab560()
    MOV EDI,dword ptr [ESI + 0x4]       ; 004a20a0
    MOV EDX,dword ptr [0x01511cd0]      ; 004a20a3 | DAT_01511cd0
    ADD EDI,EAX                         ; 004a20a9
    MOV EAX,dword ptr [ESI + 0x11c]     ; 004a20ab
    ADD ESP,0x8                         ; 004a20b1
    CMP EAX,EDX                         ; 004a20b4
    JNZ 0x004a2116                      ; 004a20b6
        ;   XREF to: 004a2116 (CONDITIONAL_JUMP)  ; LAB_004a2116
    MOV EDX,dword ptr [0x01caf238]      ; 004a20b8 | DAT_01caf238
    MOV EBX,dword ptr [ESI + 0x8]       ; 004a20be
    MOV ESI,dword ptr [ESI]             ; 004a20c1
    CMP EBX,EDX                         ; 004a20c3
    JLE 0x004a20f0                      ; 004a20c5
        ;   XREF to: 004a20f0 (CONDITIONAL_JUMP)  ; LAB_004a20f0
    PUSH 0xffff                         ; 004a20c7
        ;   Label: LAB_004a20c7
    PUSH EDI                            ; 004a20cc
    PUSH ESI                            ; 004a20cd
    PUSH 0x1caf22c                      ; 004a20ce
    CALL FUN_0040d900                   ; 004a20d3
        ;   XREF to: 0040d900 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d900()
    MOV ECX,dword ptr [0x01caf238]      ; 004a20d8 | DAT_01caf238
    ADD ESP,0x10                        ; 004a20de
    SUB EBX,ECX                         ; 004a20e1
    ADD ESI,ECX                         ; 004a20e3
    CMP EBX,ECX                         ; 004a20e5
    JG 0x004a20c7                       ; 004a20e7
        ;   XREF to: 004a20c7 (CONDITIONAL_JUMP)  ; LAB_004a20c7
    LEA EAX,[EAX]                       ; 004a20e9
    NOP                                 ; 004a20ef
    MOV EAX,[0x01caf23c]                ; 004a20f0 | DAT_01caf23c
        ;   Label: LAB_004a20f0
    PUSH 0xffff                         ; 004a20f5
    DEC EAX                             ; 004a20fa
    PUSH EAX                            ; 004a20fb
    DEC EBX                             ; 004a20fc
    PUSH EBX                            ; 004a20fd
    PUSH 0x0                            ; 004a20fe
    PUSH 0x0                            ; 004a2100
    PUSH EDI                            ; 004a2102
    PUSH ESI                            ; 004a2103
    PUSH 0x1caf22c                      ; 004a2104
    CALL FUN_0040dab0                   ; 004a2109
        ;   XREF to: 0040dab0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040dab0()
    ADD ESP,0x20                        ; 004a210e
    POP EBP                             ; 004a2111
    POP EDI                             ; 004a2112
    POP ESI                             ; 004a2113
    POP EBX                             ; 004a2114
    RET                                 ; 004a2115
    MOV EBX,dword ptr [ESI]             ; 004a2116
        ;   Label: LAB_004a2116
    ADD EBX,dword ptr [ESI + 0x8]       ; 004a2118
    LEA EAX,[EBX + -0x1]                ; 004a211b
    PUSH EAX                            ; 004a211e
    PUSH EDI                            ; 004a211f
    MOV EAX,dword ptr [ESI]             ; 004a2120
    XOR ECX,ECX                         ; 004a2122
    PUSH EAX                            ; 004a2124
    MOV dword ptr [0x01c35e60],ECX      ; 004a2125 | DAT_01c35e60
    CALL FUN_00402f30                   ; 004a212b
        ;   XREF to: 00402f30 (UNCONDITIONAL_CALL)  ; undefined FUN_00402f30()
    ADD ESP,0xc                         ; 004a2130
    POP EBP                             ; 004a2133
    POP EDI                             ; 004a2134
    POP ESI                             ; 004a2135
    POP EBX                             ; 004a2136
    RET                                 ; 004a2137

