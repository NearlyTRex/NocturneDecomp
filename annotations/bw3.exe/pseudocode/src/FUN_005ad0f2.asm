; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double FUN_005ad0f2(undefined4 param_1,undefined4 param_2)
;
; Local Variables:
; undefined1[12]   Stack[-0x34]:12  local_34
; undefined8       Stack[-0x28]:8  local_28
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_005a6098 at 005a60a4
;   FUN_005a71c9 at 005a71d5
;
; Referenced Globals:
;   undefined4 DAT_005e8838
;   undefined4 DAT_005e883c
;
; Called Functions:
;   FUN_005a92dc
;   FUN_005acf30
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005ad0f2
        ;   Label: FUN_005ad0f2
    MOV EBP,ESP                         ; 005ad0f3
    PUSH EBX                            ; 005ad0f5
    PUSH ESI                            ; 005ad0f6
    PUSH EDI                            ; 005ad0f7
    SUB ESP,0x24                        ; 005ad0f8
    MOV EDX,dword ptr [EBP + 0xc]       ; 005ad0fb
    PUSH EDX                            ; 005ad0fe
    LEA EAX,[EBP + -0x30]               ; 005ad0ff
    PUSH EAX                            ; 005ad102
    MOV EBX,dword ptr [EBP + 0x8]       ; 005ad103
    PUSH EBX                            ; 005ad106
    CALL FUN_005acf30                   ; 005ad107
        ;   XREF to: 005acf30 (UNCONDITIONAL_CALL)  ; undefined FUN_005acf30()
    MOV EBX,EAX                         ; 005ad10c
    ADD ESP,0xc                         ; 005ad10e
    TEST EAX,EAX                        ; 005ad111
    JNZ 0x005ad120                      ; 005ad113
        ;   XREF to: 005ad120 (CONDITIONAL_JUMP)  ; LAB_005ad120
    MOV dword ptr [EBP + -0x24],EAX     ; 005ad115
    MOV dword ptr [EBP + -0x20],EAX     ; 005ad118
        ;   Label: LAB_005ad118
    JMP 0x005ad1cd                      ; 005ad11b
        ;   XREF to: 005ad1cd (UNCONDITIONAL_JUMP)  ; LAB_005ad1cd
    MOV EAX,dword ptr [EBP + -0x28]     ; 005ad120
        ;   Label: LAB_005ad120
    AND AH,0x7f                         ; 005ad123
    AND EAX,0xffff                      ; 005ad126
    CMP EAX,0x43ff                      ; 005ad12b
    JL 0x005ad15c                       ; 005ad130
        ;   XREF to: 005ad15c (CONDITIONAL_JUMP)  ; LAB_005ad15c
    CALL FUN_005a92dc                   ; 005ad132
        ;   XREF to: 005a92dc (UNCONDITIONAL_CALL)  ; undefined FUN_005a92dc()
    TEST byte ptr [EBP + -0x27],0x80    ; 005ad137
    JZ 0x005ad14d                       ; 005ad13b
        ;   XREF to: 005ad14d (CONDITIONAL_JUMP)  ; LAB_005ad14d
    FLD double ptr [0x005e8838]         ; 005ad13d | DAT_005e8838
    FCHS                                ; 005ad143
    FSTP double ptr [EBP + -0x24]       ; 005ad145
    JMP 0x005ad1cd                      ; 005ad148
        ;   XREF to: 005ad1cd (UNCONDITIONAL_JUMP)  ; LAB_005ad1cd
    MOV EAX,[0x005e8838]                ; 005ad14d | DAT_005e8838
        ;   Label: LAB_005ad14d
    MOV dword ptr [EBP + -0x24],EAX     ; 005ad152
    MOV EAX,[0x005e883c]                ; 005ad155 | DAT_005e883c
    JMP 0x005ad118                      ; 005ad15a
        ;   XREF to: 005ad118 (UNCONDITIONAL_JUMP)  ; LAB_005ad118
    CMP EAX,0x3bcd                      ; 005ad15c
        ;   Label: LAB_005ad15c
    JGE 0x005ad1a5                      ; 005ad161
        ;   XREF to: 005ad1a5 (CONDITIONAL_JUMP)  ; LAB_005ad1a5
    CMP EAX,-0x34                       ; 005ad163
    JGE 0x005ad177                      ; 005ad166
        ;   XREF to: 005ad177 (CONDITIONAL_JUMP)  ; LAB_005ad177
    XOR EDI,EDI                         ; 005ad168
    CALL FUN_005a92dc                   ; 005ad16a
        ;   XREF to: 005a92dc (UNCONDITIONAL_CALL)  ; undefined FUN_005a92dc()
    MOV dword ptr [EBP + -0x24],EDI     ; 005ad16f
    MOV dword ptr [EBP + -0x20],EDI     ; 005ad172
    JMP 0x005ad1cd                      ; 005ad175
        ;   XREF to: 005ad1cd (UNCONDITIONAL_JUMP)  ; LAB_005ad1cd
    LEA EDX,[EBP + -0x24]               ; 005ad177
        ;   Label: LAB_005ad177
    LEA EAX,[EBP + -0x30]               ; 005ad17a
    FLD extended double ptr [EAX]       ; 005ad17d
    FSTP double ptr [EDX]               ; 005ad17f
    MOV EAX,dword ptr [EBP + -0x24]     ; 005ad181
    MOV dword ptr [EBP + -0x1c],EAX     ; 005ad184
    MOV EAX,dword ptr [EBP + -0x20]     ; 005ad187
    MOV ESI,dword ptr [EBP + -0x24]     ; 005ad18a
    MOV dword ptr [EBP + -0x18],EAX     ; 005ad18d
    TEST EAX,0x7fffffff                 ; 005ad190
    JNZ 0x005ad19b                      ; 005ad195
        ;   XREF to: 005ad19b (CONDITIONAL_JUMP)  ; LAB_005ad19b
    TEST ESI,ESI                        ; 005ad197
    JZ 0x005ad1c8                       ; 005ad199
        ;   XREF to: 005ad1c8 (CONDITIONAL_JUMP)  ; LAB_005ad1c8
    TEST word ptr [EBP + -0x16],0x7ff0  ; 005ad19b
        ;   Label: LAB_005ad19b
    JNZ 0x005ad1cd                      ; 005ad1a1
        ;   XREF to: 005ad1cd (CONDITIONAL_JUMP)  ; LAB_005ad1cd
    JMP 0x005ad1c8                      ; 005ad1a3
        ;   XREF to: 005ad1c8 (UNCONDITIONAL_JUMP)  ; LAB_005ad1c8
    LEA EDX,[EBP + -0x24]               ; 005ad1a5
        ;   Label: LAB_005ad1a5
    LEA EAX,[EBP + -0x30]               ; 005ad1a8
    FLD extended double ptr [EAX]       ; 005ad1ab
    FSTP double ptr [EDX]               ; 005ad1ad
    CMP EBX,0x3                         ; 005ad1af
    JZ 0x005ad1c8                       ; 005ad1b2
        ;   XREF to: 005ad1c8 (CONDITIONAL_JUMP)  ; LAB_005ad1c8
    MOV EAX,dword ptr [EBP + -0x24]     ; 005ad1b4
    MOV dword ptr [EBP + -0x14],EAX     ; 005ad1b7
    MOV EAX,dword ptr [EBP + -0x20]     ; 005ad1ba
    MOV dword ptr [EBP + -0x10],EAX     ; 005ad1bd
    TEST word ptr [EBP + -0xe],0x7ff0   ; 005ad1c0
    JNZ 0x005ad1cd                      ; 005ad1c6
        ;   XREF to: 005ad1cd (CONDITIONAL_JUMP)  ; LAB_005ad1cd
    CALL FUN_005a92dc                   ; 005ad1c8
        ;   XREF to: 005a92dc (UNCONDITIONAL_CALL)  ; undefined FUN_005a92dc()
        ;   Label: LAB_005ad1c8
    MOV EAX,dword ptr [EBP + -0x24]     ; 005ad1cd
        ;   Label: LAB_005ad1cd
    MOV EDX,dword ptr [EBP + -0x20]     ; 005ad1d0
    JMP 0x005ad0ea                      ; 005ad1d3
        ;   XREF to: 005ad0ea (UNCONDITIONAL_JUMP)  ; LAB_005ad0ea

