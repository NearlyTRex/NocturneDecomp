; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00535080(undefined4 *param_1)
;
; Local Variables:
; undefined        Stack[-0x34]:1  local_34
; undefined        Stack[-0x28]:1  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_005351f0 at 005351f5
;
; Referenced Globals:
;   undefined4 DAT_006047b0
;   undefined4 DAT_00622748
;   undefined4 DAT_00622758
;   undefined4 DAT_0062275c
;   undefined4 DAT_01e6be40
;   undefined4 DAT_01fe5c1c
;
; Called Functions:
;   FUN_0048ef40
;   FUN_005334f0
;   FUN_005c0357
;   FUN_005c1093
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00535080
        ;   Label: FUN_00535080
    PUSH ESI                            ; 00535081
    PUSH EDI                            ; 00535082
    PUSH EBP                            ; 00535083
    SUB ESP,0x24                        ; 00535084
    MOV AH,byte ptr [0x01e6be40]        ; 00535087 | DAT_01e6be40
    TEST AH,0x1                         ; 0053508d
    JZ 0x0053516f                       ; 00535090
        ;   XREF to: 0053516f (CONDITIONAL_JUMP)  ; LAB_0053516f
    CMP dword ptr [0x00622758],0x0      ; 00535096 | DAT_00622758
        ;   Label: LAB_00535096
    JL 0x005351a0                       ; 0053509d
        ;   XREF to: 005351a0 (CONDITIONAL_JUMP)  ; LAB_005351a0
    LEA EAX,[EAX]                       ; 005350a3
    LEA EDX,[EDX]                       ; 005350a9
    NOP                                 ; 005350af
    MOV ECX,dword ptr [ESP + 0x38]      ; 005350b0
        ;   Label: LAB_005350b0
    PUSH ECX                            ; 005350b4
    LEA ESI,[ESP + 0x4]                 ; 005350b5
    LEA EDI,[ESP + 0x1c]                ; 005350b9
    PUSH 0x1fe5c1c                      ; 005350bd | DAT_01fe5c1c
    XOR EBP,EBP                         ; 005350c2
    XOR EBX,EBX                         ; 005350c4
    CALL FUN_0048ef40                   ; 005350c6
        ;   XREF to: 0048ef40 (UNCONDITIONAL_CALL)  ; undefined FUN_0048ef40()
    LEA ESI,[ESP + 0x8]                 ; 005350cb
    ADD ESP,0x8                         ; 005350cf
    XOR ECX,ECX                         ; 005350d2
    XOR EDX,EDX                         ; 005350d4
    MOVSD ES:EDI,ESI                    ; 005350d6
    MOVSD ES:EDI,ESI                    ; 005350d7
    MOVSD ES:EDI,ESI                    ; 005350d8
    MOV ESI,dword ptr [ESP + 0x18]      ; 005350d9
        ;   Label: LAB_005350d9
    CMP ESI,dword ptr [EDX + 0x1d94ca0] ; 005350dd
    JNZ 0x005351b8                      ; 005350e3
        ;   XREF to: 005351b8 (CONDITIONAL_JUMP)  ; LAB_005351b8
    MOV EDI,dword ptr [ESP + 0x1c]      ; 005350e9
    CMP EDI,dword ptr [EDX + 0x1d94ca4] ; 005350ed
    JNZ 0x005351b8                      ; 005350f3
        ;   XREF to: 005351b8 (CONDITIONAL_JUMP)  ; LAB_005351b8
    MOV ESI,dword ptr [ESP + 0x20]      ; 005350f9
    CMP ESI,dword ptr [EDX + 0x1d94ca8] ; 005350fd
    JNZ 0x005351b8                      ; 00535103
        ;   XREF to: 005351b8 (CONDITIONAL_JUMP)  ; LAB_005351b8
    MOV EBP,ECX                         ; 00535109
    LEA ECX,[EBP*0x4 + 0x0]             ; 0053510b
        ;   Label: LAB_0053510b
    XOR EAX,EAX                         ; 00535112
    MOV EBX,dword ptr [ECX + 0x622758]  ; 00535114 | DAT_00622758 | DAT_0062275c
        ;   Label: LAB_00535114
    MOV EDX,dword ptr [EAX + 0x622758]  ; 0053511a | DAT_00622758 | DAT_0062275c
    CMP EDX,EBX                         ; 00535120
    JGE 0x0053512d                      ; 00535122
        ;   XREF to: 0053512d (CONDITIONAL_JUMP)  ; LAB_0053512d
    LEA ESI,[EDX + 0x1]                 ; 00535124
    MOV dword ptr [EAX + 0x622758],ESI  ; 00535127 | DAT_0062275c | DAT_00622758
    ADD EAX,0x4                         ; 0053512d
        ;   Label: LAB_0053512d
    CMP EAX,0x30                        ; 00535130
    JNZ 0x00535114                      ; 00535133
        ;   XREF to: 00535114 (CONDITIONAL_JUMP)  ; LAB_00535114
    IMUL EBX,EBP,0x138dc                ; 00535135
    MOV ESI,dword ptr [ESP + 0x38]      ; 0053513b
    PUSH 0x1                            ; 0053513f
    LEA EAX,[ESP + 0x10]                ; 00535141
    XOR EDI,EDI                         ; 00535145
    PUSH EAX                            ; 00535147
    MOV dword ptr [EBP*0x4 + 0x622758],EDI ; 00535148 | DAT_00622758
    ADD EBX,0x1d813f0                   ; 0053514f
    LEA EDI,[ESP + 0x14]                ; 00535155
    PUSH EBX                            ; 00535159
    MOVSD ES:EDI,ESI                    ; 0053515a
    MOVSD ES:EDI,ESI                    ; 0053515b
    MOVSD ES:EDI,ESI                    ; 0053515c
    CALL FUN_005334f0                   ; 0053515d
        ;   XREF to: 005334f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005334f0()
    ADD ESP,0xc                         ; 00535162
    MOV EAX,EBX                         ; 00535165
    ADD ESP,0x24                        ; 00535167
    POP EBP                             ; 0053516a
    POP EDI                             ; 0053516b
    POP ESI                             ; 0053516c
    POP EBX                             ; 0053516d
    RET                                 ; 0053516e
    PUSH 0x6047b0                       ; 0053516f | DAT_006047b0
        ;   Label: LAB_0053516f
    MOV DL,AH                           ; 00535174
    PUSH 0xc                            ; 00535176
    OR DL,0x1                           ; 00535178
    PUSH 0x1d813f0                      ; 0053517b
    MOV byte ptr [0x01e6be40],DL        ; 00535180 | DAT_01e6be40
    CALL FUN_005c0357                   ; 00535186
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0357()
    ADD ESP,0xc                         ; 0053518b
    PUSH 0x622748                       ; 0053518e | DAT_00622748
    CALL FUN_005c1093                   ; 00535193
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1093()
    ADD ESP,0x4                         ; 00535198
    JMP 0x00535096                      ; 0053519b
        ;   XREF to: 00535096 (UNCONDITIONAL_JUMP)  ; LAB_00535096
    XOR EDX,EDX                         ; 005351a0
        ;   Label: LAB_005351a0
    XOR EAX,EAX                         ; 005351a2
    MOV dword ptr [EDX + 0x622758],EAX  ; 005351a4 | DAT_00622758 | DAT_0062275c
        ;   Label: LAB_005351a4
    INC EAX                             ; 005351aa
    ADD EDX,0x4                         ; 005351ab
    CMP EAX,0xc                         ; 005351ae
    JL 0x005351a4                       ; 005351b1
        ;   XREF to: 005351a4 (CONDITIONAL_JUMP)  ; LAB_005351a4
    JMP 0x005350b0                      ; 005351b3
        ;   XREF to: 005350b0 (UNCONDITIONAL_JUMP)  ; LAB_005350b0
    MOV EAX,dword ptr [EBX + 0x622758]  ; 005351b8 | DAT_00622758 | DAT_0062275c
        ;   Label: LAB_005351b8
    CMP EAX,dword ptr [EBP*0x4 + 0x622758] ; 005351be | DAT_00622758
    JLE 0x005351c9                      ; 005351c5
        ;   XREF to: 005351c9 (CONDITIONAL_JUMP)  ; LAB_005351c9
    MOV EBP,ECX                         ; 005351c7
    ADD EBX,0x4                         ; 005351c9
        ;   Label: LAB_005351c9
    INC ECX                             ; 005351cc
    ADD EDX,0x138dc                     ; 005351cd
    CMP ECX,0xc                         ; 005351d3
    JL 0x005350d9                       ; 005351d6
        ;   XREF to: 005350d9 (CONDITIONAL_JUMP)  ; LAB_005350d9
    JMP 0x0053510b                      ; 005351dc
        ;   XREF to: 0053510b (UNCONDITIONAL_JUMP)  ; LAB_0053510b

