; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 unkafter_morph_cpp_FUN_005c40e0(char *param_1,uint *param_2,uint param_3)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c0bba at 005c0c1a
;
; Called Functions:
;   crt_unknown.c_FUN_005bef94
;   crt_unknown.c_FUN_005bfdd4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c40e0
        ;   Label: unkafter_morph.cpp_FUN_005c40e0
    PUSH ESI                            ; 005c40e1
    SUB ESP,0x48                        ; 005c40e2
    MOV ECX,dword ptr [ESP + 0x58]      ; 005c40e5
    MOV EAX,dword ptr [ECX]             ; 005c40e9
    MOV EDX,EAX                         ; 005c40eb
    AND EDX,0x3                         ; 005c40ed
    CMP EDX,0x3                         ; 005c40f0
    JNZ 0x005c40fc                      ; 005c40f3
        ;   XREF to: 005c40fc (CONDITIONAL_JUMP)  ; LAB_005c40fc
    MOV EBX,0x22                        ; 005c40f5
    JMP 0x005c4117                      ; 005c40fa
        ;   XREF to: 005c4117 (UNCONDITIONAL_JUMP)  ; LAB_005c4117
    TEST AL,0x1                         ; 005c40fc
        ;   Label: LAB_005c40fc
    JZ 0x005c4104                       ; 005c40fe
        ;   XREF to: 005c4104 (CONDITIONAL_JUMP)  ; LAB_005c4104
    XOR EBX,EBX                         ; 005c4100
    JMP 0x005c4117                      ; 005c4102
        ;   XREF to: 005c4117 (UNCONDITIONAL_JUMP)  ; LAB_005c4117
    TEST AL,0x2                         ; 005c4104
        ;   Label: LAB_005c4104
    JNZ 0x005c4112                      ; 005c4106
        ;   XREF to: 005c4112 (CONDITIONAL_JUMP)  ; LAB_005c4112
    MOV EAX,0xffffffff                  ; 005c4108
    JMP 0x005c41cc                      ; 005c410d
        ;   XREF to: 005c41cc (UNCONDITIONAL_JUMP)  ; LAB_005c41cc
    MOV EBX,0x21                        ; 005c4112
        ;   Label: LAB_005c4112
    TEST AL,0x8                         ; 005c4117
        ;   Label: LAB_005c4117
    JZ 0x005c411e                       ; 005c4119
        ;   XREF to: 005c411e (CONDITIONAL_JUMP)  ; LAB_005c411e
    OR BL,0x10                          ; 005c411b
    TEST AL,0x10                        ; 005c411e
        ;   Label: LAB_005c411e
    JZ 0x005c4125                       ; 005c4120
        ;   XREF to: 005c4125 (CONDITIONAL_JUMP)  ; LAB_005c4125
    OR BL,0x40                          ; 005c4122
    TEST AL,0x20                        ; 005c4125
        ;   Label: LAB_005c4125
    JZ 0x005c412c                       ; 005c4127
        ;   XREF to: 005c412c (CONDITIONAL_JUMP)  ; LAB_005c412c
    AND BL,0xdf                         ; 005c4129
    TEST AH,0x1                         ; 005c412c
        ;   Label: LAB_005c412c
    JZ 0x005c4136                       ; 005c412f
        ;   XREF to: 005c4136 (CONDITIONAL_JUMP)  ; LAB_005c4136
    OR BH,0x2                           ; 005c4131
    JMP 0x005c4140                      ; 005c4134
        ;   XREF to: 005c4140 (UNCONDITIONAL_JUMP)  ; LAB_005c4140
    MOV DL,byte ptr [ECX]               ; 005c4136
        ;   Label: LAB_005c4136
    OR DL,0x80                          ; 005c4138
    OR BH,0x1                           ; 005c413b
    MOV byte ptr [ECX],DL               ; 005c413e
    TEST AL,0x40                        ; 005c4140
        ;   Label: LAB_005c4140
    JZ 0x005c416c                       ; 005c4142
        ;   XREF to: 005c416c (CONDITIONAL_JUMP)  ; LAB_005c416c
    MOV EAX,EBX                         ; 005c4144
    OR AL,0x20                          ; 005c4146
    TEST EAX,EAX                        ; 005c4148
    JZ 0x005c416c                       ; 005c414a
        ;   XREF to: 005c416c (CONDITIONAL_JUMP)  ; LAB_005c416c
    MOV EAX,ESP                         ; 005c414c
    PUSH EAX                            ; 005c414e
    MOV EDX,dword ptr [ESP + 0x58]      ; 005c414f
    PUSH EDX                            ; 005c4153
    CALL crt_unknown.c_FUN_005bfdd4     ; 005c4154
        ;   XREF to: 005bfdd4 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_FUN_005bfdd4(char * filename, WatcomStat * file_info)
    ADD ESP,0x8                         ; 005c4159
    CMP EAX,-0x1                        ; 005c415c
    JZ 0x005c416c                       ; 005c415f
        ;   XREF to: 005c416c (CONDITIONAL_JUMP)  ; LAB_005c416c
    MOV EAX,0xffffffff                  ; 005c4161
    ADD ESP,0x48                        ; 005c4166
    POP ESI                             ; 005c4169
    POP EBX                             ; 005c416a
    RET                                 ; 005c416b
    MOV EAX,dword ptr [ESP + 0x5c]      ; 005c416c
        ;   Label: LAB_005c416c
    AND EAX,0x7000                      ; 005c4170
    XOR EDX,EDX                         ; 005c4175
    CMP EAX,0x2000                      ; 005c4177
    JC 0x005c4192                       ; 005c417c
        ;   XREF to: 005c4192 (CONDITIONAL_JUMP)  ; LAB_005c4192
    JBE 0x005c41a0                      ; 005c417e
        ;   XREF to: 005c41a0 (CONDITIONAL_JUMP)  ; LAB_005c41a0
    CMP EAX,0x3000                      ; 005c4180
    JC 0x005c41b3                       ; 005c4185
        ;   XREF to: 005c41b3 (CONDITIONAL_JUMP)  ; LAB_005c41b3
    JBE 0x005c41a7                      ; 005c4187
        ;   XREF to: 005c41a7 (CONDITIONAL_JUMP)  ; LAB_005c41a7
    CMP EAX,0x4000                      ; 005c4189
    JZ 0x005c41ae                       ; 005c418e
        ;   XREF to: 005c41ae (CONDITIONAL_JUMP)  ; LAB_005c41ae
    JMP 0x005c41b3                      ; 005c4190
        ;   XREF to: 005c41b3 (UNCONDITIONAL_JUMP)  ; LAB_005c41b3
    CMP EAX,0x1000                      ; 005c4192
        ;   Label: LAB_005c4192
    JNZ 0x005c41b3                      ; 005c4197
        ;   XREF to: 005c41b3 (CONDITIONAL_JUMP)  ; LAB_005c41b3
    MOV EDX,0x20                        ; 005c4199
    JMP 0x005c41b3                      ; 005c419e
        ;   XREF to: 005c41b3 (UNCONDITIONAL_JUMP)  ; LAB_005c41b3
    MOV EDX,0x30                        ; 005c41a0
        ;   Label: LAB_005c41a0
    JMP 0x005c41b3                      ; 005c41a5
        ;   XREF to: 005c41b3 (UNCONDITIONAL_JUMP)  ; LAB_005c41b3
    MOV EDX,0x40                        ; 005c41a7
        ;   Label: LAB_005c41a7
    JMP 0x005c41b3                      ; 005c41ac
        ;   XREF to: 005c41b3 (UNCONDITIONAL_JUMP)  ; LAB_005c41b3
    MOV EDX,0x10                        ; 005c41ae
        ;   Label: LAB_005c41ae
    AND byte ptr [ESP + 0x5d],0x8f      ; 005c41b3
        ;   Label: LAB_005c41b3
    MOV ECX,dword ptr [ESP + 0x5c]      ; 005c41b8
    PUSH ECX                            ; 005c41bc
    PUSH EDX                            ; 005c41bd
    PUSH EBX                            ; 005c41be
    MOV ESI,dword ptr [ESP + 0x60]      ; 005c41bf
    PUSH ESI                            ; 005c41c3
    CALL crt_unknown.c_FUN_005bef94     ; 005c41c4
        ;   XREF to: 005bef94 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bef94()
    ADD ESP,0x10                        ; 005c41c9
    ADD ESP,0x48                        ; 005c41cc
        ;   Label: LAB_005c41cc
    POP ESI                             ; 005c41cf
    POP EBX                             ; 005c41d0
    RET                                 ; 005c41d1

