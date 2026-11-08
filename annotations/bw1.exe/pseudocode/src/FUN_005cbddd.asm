; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 FUN_005cbddd(uint param_1,undefined4 *param_2,undefined4 *param_3)
;
; Local Variables:
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined8       Stack[-0x24]:8  local_24
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined        Stack[-0xc]:1  local_c
;
; XREF[2]:
;   FUN_005c7570 at 005c75e4
;   FUN_005cbdaa at 005cbdb9
;
; Referenced Globals:
;   undefined4 DAT_00608560
;   undefined4 DAT_00608564
;   undefined4 DAT_00626a74
;
; Called Functions:
;   FUN_005cdaad
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005cbddd
        ;   Label: FUN_005cbddd
    MOV EBP,ESP                         ; 005cbdde
    PUSH EBX                            ; 005cbde0
    PUSH ESI                            ; 005cbde1
    SUB ESP,0x30                        ; 005cbde2
    MOV EDX,dword ptr [EBP + 0x8]       ; 005cbde5
    MOV ESI,dword ptr [EBP + 0xc]       ; 005cbde8
    MOV ECX,dword ptr [EBP + 0x10]      ; 005cbdeb
    MOV EAX,dword ptr [ESI]             ; 005cbdee
    MOV dword ptr [EBP + -0x30],EAX     ; 005cbdf0
    MOV EAX,dword ptr [ESI + 0x4]       ; 005cbdf3
    MOV dword ptr [EBP + -0x2c],EAX     ; 005cbdf6
    MOV EAX,dword ptr [ECX]             ; 005cbdf9
    MOV dword ptr [EBP + -0x28],EAX     ; 005cbdfb
    MOV EAX,dword ptr [ECX + 0x4]       ; 005cbdfe
    MOV dword ptr [EBP + -0x24],EAX     ; 005cbe01
    TEST DL,0x40                        ; 005cbe04
    JZ 0x005cbe10                       ; 005cbe07
        ;   XREF to: 005cbe10 (CONDITIONAL_JUMP)  ; LAB_005cbe10
    MOV EBX,0x1                         ; 005cbe09
    JMP 0x005cbe4a                      ; 005cbe0e
        ;   XREF to: 005cbe4a (UNCONDITIONAL_JUMP)  ; LAB_005cbe4a
    TEST DL,0x80                        ; 005cbe10
        ;   Label: LAB_005cbe10
    JZ 0x005cbe1c                       ; 005cbe13
        ;   XREF to: 005cbe1c (CONDITIONAL_JUMP)  ; LAB_005cbe1c
    MOV EBX,0x2                         ; 005cbe15
    JMP 0x005cbe4a                      ; 005cbe1a
        ;   XREF to: 005cbe4a (UNCONDITIONAL_JUMP)  ; LAB_005cbe4a
    TEST DH,0x1                         ; 005cbe1c
        ;   Label: LAB_005cbe1c
    JZ 0x005cbe28                       ; 005cbe1f
        ;   XREF to: 005cbe28 (CONDITIONAL_JUMP)  ; LAB_005cbe28
    MOV EBX,0x3                         ; 005cbe21
    JMP 0x005cbe4a                      ; 005cbe26
        ;   XREF to: 005cbe4a (UNCONDITIONAL_JUMP)  ; LAB_005cbe4a
    TEST DH,0x8                         ; 005cbe28
        ;   Label: LAB_005cbe28
    JZ 0x005cbe34                       ; 005cbe2b
        ;   XREF to: 005cbe34 (CONDITIONAL_JUMP)  ; LAB_005cbe34
    MOV EBX,0x4                         ; 005cbe2d
    JMP 0x005cbe4a                      ; 005cbe32
        ;   XREF to: 005cbe4a (UNCONDITIONAL_JUMP)  ; LAB_005cbe4a
    TEST DH,0x2                         ; 005cbe34
        ;   Label: LAB_005cbe34
    JZ 0x005cbe40                       ; 005cbe37
        ;   XREF to: 005cbe40 (CONDITIONAL_JUMP)  ; LAB_005cbe40
    MOV EBX,0x6                         ; 005cbe39
    JMP 0x005cbe4a                      ; 005cbe3e
        ;   XREF to: 005cbe4a (UNCONDITIONAL_JUMP)  ; LAB_005cbe4a
    TEST DH,0x4                         ; 005cbe40
        ;   Label: LAB_005cbe40
    JZ 0x005cbe4a                       ; 005cbe43
        ;   XREF to: 005cbe4a (CONDITIONAL_JUMP)  ; LAB_005cbe4a
    MOV EBX,0x5                         ; 005cbe45
    MOV EAX,EDX                         ; 005cbe4a
        ;   Label: LAB_005cbe4a
    AND EAX,0x1f                        ; 005cbe4c
    MOV EAX,dword ptr [EAX*0x4 + 0x626a74] ; 005cbe4f | DAT_00626a74
    MOV dword ptr [EBP + -0x38],EBX     ; 005cbe56
    MOV dword ptr [EBP + -0x34],EAX     ; 005cbe59
    TEST DH,0x10                        ; 005cbe5c
    JZ 0x005cbe6e                       ; 005cbe5f
        ;   XREF to: 005cbe6e (CONDITIONAL_JUMP)  ; LAB_005cbe6e
    FLD double ptr [0x00608560]         ; 005cbe61 | DAT_00608560
    FCHS                                ; 005cbe67
    FSTP double ptr [EBP + -0x20]       ; 005cbe69
    JMP 0x005cbeb0                      ; 005cbe6c
        ;   XREF to: 005cbeb0 (UNCONDITIONAL_JUMP)  ; LAB_005cbeb0
    TEST DH,0x20                        ; 005cbe6e
        ;   Label: LAB_005cbe6e
    JZ 0x005cbe7d                       ; 005cbe71
        ;   XREF to: 005cbe7d (CONDITIONAL_JUMP)  ; LAB_005cbe7d
    XOR ECX,ECX                         ; 005cbe73
    MOV dword ptr [EBP + -0x20],ECX     ; 005cbe75
    MOV dword ptr [EBP + -0x1c],ECX     ; 005cbe78
    JMP 0x005cbeb0                      ; 005cbe7b
        ;   XREF to: 005cbeb0 (UNCONDITIONAL_JUMP)  ; LAB_005cbeb0
    TEST DH,0x40                        ; 005cbe7d
        ;   Label: LAB_005cbe7d
    JZ 0x005cbe91                       ; 005cbe80
        ;   XREF to: 005cbe91 (CONDITIONAL_JUMP)  ; LAB_005cbe91
    XOR EDX,EDX                         ; 005cbe82
    MOV EBX,0x3ff00000                  ; 005cbe84
    MOV dword ptr [EBP + -0x20],EDX     ; 005cbe89
    MOV dword ptr [EBP + -0x1c],EBX     ; 005cbe8c
    JMP 0x005cbeb0                      ; 005cbe8f
        ;   XREF to: 005cbeb0 (UNCONDITIONAL_JUMP)  ; LAB_005cbeb0
    TEST DH,0x80                        ; 005cbe91
        ;   Label: LAB_005cbe91
    JZ 0x005cbea5                       ; 005cbe94
        ;   XREF to: 005cbea5 (CONDITIONAL_JUMP)  ; LAB_005cbea5
    MOV EAX,[0x00608560]                ; 005cbe96 | DAT_00608560
    MOV dword ptr [EBP + -0x20],EAX     ; 005cbe9b
    MOV EAX,[0x00608564]                ; 005cbe9e | DAT_00608564
    JMP 0x005cbead                      ; 005cbea3
        ;   XREF to: 005cbead (UNCONDITIONAL_JUMP)  ; LAB_005cbead
    MOV EAX,dword ptr [ECX]             ; 005cbea5
        ;   Label: LAB_005cbea5
    MOV dword ptr [EBP + -0x20],EAX     ; 005cbea7
    MOV EAX,dword ptr [ECX + 0x4]       ; 005cbeaa
    MOV dword ptr [EBP + -0x1c],EAX     ; 005cbead
        ;   Label: LAB_005cbead
    LEA EAX,[EBP + -0x38]               ; 005cbeb0
        ;   Label: LAB_005cbeb0
    PUSH EAX                            ; 005cbeb3
    CALL FUN_005cdaad                   ; 005cbeb4
        ;   XREF to: 005cdaad (UNCONDITIONAL_CALL)  ; undefined FUN_005cdaad()
    MOV dword ptr [EBP + -0x18],EAX     ; 005cbeb9
    MOV dword ptr [EBP + -0x14],EDX     ; 005cbebc
    ADD ESP,0x4                         ; 005cbebf
    MOV EAX,dword ptr [EBP + -0x18]     ; 005cbec2
    MOV dword ptr [EBP + -0x10],EAX     ; 005cbec5
    MOV EAX,dword ptr [EBP + -0x14]     ; 005cbec8
    MOV dword ptr [EBP + -0xc],EAX      ; 005cbecb
    MOV EAX,dword ptr [EBP + -0x10]     ; 005cbece
    MOV EDX,dword ptr [EBP + -0xc]      ; 005cbed1
    LEA ESP,[EBP + -0x8]                ; 005cbed4
    POP ESI                             ; 005cbed7
    POP EBX                             ; 005cbed8
    POP EBP                             ; 005cbed9
    RET                                 ; 005cbeda

