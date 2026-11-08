; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00503fb0(undefined4 *param_1,undefined4 *param_2)
;
;
; XREF[1]:
;   FUN_004bf2e0 at 004bf336
;
; Referenced Globals:
;   undefined4 DAT_005ca5a1
;   undefined4 DAT_005ca5a9
;   undefined4 DAT_005ca5b1
;   undefined4 DAT_005fb140
;   undefined4 DAT_005fe9dc
;   undefined4 DAT_00600284
;   undefined4 DAT_0060728c
;   undefined4 DAT_01da6478
;   undefined4 DAT_01da647c
;   undefined4 DAT_02cfd89c
;
; Called Functions:
;   FUN_0047cf40
;   FUN_0047cfa0
;   FUN_00504270
;   FUN_005043b0
;   FUN_00504c70
;   FUN_00505870
;   FUN_00505950
;   FUN_0056f730
;   FUN_0057a8a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00503fb0
        ;   Label: FUN_00503fb0
    PUSH ESI                            ; 00503fb1
    PUSH EDI                            ; 00503fb2
    PUSH EBP                            ; 00503fb3
    MOV EBP,ESP                         ; 00503fb4
    SUB ESP,0x4c                        ; 00503fb6
    AND ESP,0xfffffff8                  ; 00503fb9
    MOV EBX,dword ptr [EBP + 0x14]      ; 00503fbc
    PUSH 0x0                            ; 00503fbf
    PUSH EBX                            ; 00503fc1
    CALL FUN_005043b0                   ; 00503fc2
        ;   XREF to: 005043b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005043b0()
    MOV EAX,[0x005fe9dc]                ; 00503fc7 | DAT_005fe9dc
    MOV dword ptr [EBX + 0x1c],0x0      ; 00503fcc
    ADD ESP,0x8                         ; 00503fd3
    MOV EDX,dword ptr [EAX + 0xdc]      ; 00503fd6
    PUSH EDX                            ; 00503fdc
    MOV ECX,dword ptr [EAX + 0xd8]      ; 00503fdd
    PUSH ECX                            ; 00503fe3
    LEA ESI,[EBX + 0x8]                 ; 00503fe4
    PUSH ESI                            ; 00503fe7
    PUSH 0x1ddf                         ; 00503fe8
    MOV EDI,dword ptr [0x02cfd89c]      ; 00503fed | DAT_02cfd89c
    PUSH EDI                            ; 00503ff3
    LEA EAX,[ESP + 0x4c]                ; 00503ff4
    PUSH EAX                            ; 00503ff8
    CALL FUN_0056f730                   ; 00503ff9
        ;   XREF to: 0056f730 (UNCONDITIONAL_CALL)  ; undefined FUN_0056f730()
    ADD ESP,0xc                         ; 00503ffe
    PUSH EAX                            ; 00504001
    PUSH EBX                            ; 00504002
    CALL FUN_00505950                   ; 00504003
        ;   XREF to: 00505950 (UNCONDITIONAL_CALL)  ; undefined FUN_00505950()
    ADD ESP,0x14                        ; 00504008
    PUSH EBX                            ; 0050400b
    MOV dword ptr [EBX + 0x124],EAX     ; 0050400c
    CALL FUN_00504270                   ; 00504012
        ;   XREF to: 00504270 (UNCONDITIONAL_CALL)  ; undefined FUN_00504270()
    ADD ESP,0x4                         ; 00504017
    TEST EAX,EAX                        ; 0050401a
    JNZ 0x00504025                      ; 0050401c
        ;   XREF to: 00504025 (CONDITIONAL_JUMP)  ; LAB_00504025
    MOV ESP,EBP                         ; 0050401e
    POP EBP                             ; 00504020
    POP EDI                             ; 00504021
    POP ESI                             ; 00504022
    POP EBX                             ; 00504023
    RET                                 ; 00504024
    MOV EAX,dword ptr [EBP + 0x18]      ; 00504025
        ;   Label: LAB_00504025
    PUSH 0x1ddf                         ; 00504028
    MOV EDX,dword ptr [EAX]             ; 0050402d
    PUSH EDX                            ; 0050402f
    LEA EAX,[ESP + 0x38]                ; 00504030
    PUSH EAX                            ; 00504034
    CALL FUN_0056f730                   ; 00504035
        ;   XREF to: 0056f730 (UNCONDITIONAL_CALL)  ; undefined FUN_0056f730()
    ADD ESP,0xc                         ; 0050403a
    PUSH 0x0                            ; 0050403d
    PUSH 0x0                            ; 0050403f
    PUSH 0x5ca4f2                       ; 00504041
    LEA EAX,[ESP + 0x3c]                ; 00504046
    PUSH EAX                            ; 0050404a
    PUSH EBX                            ; 0050404b
    CALL FUN_00505950                   ; 0050404c
        ;   XREF to: 00505950 (UNCONDITIONAL_CALL)  ; undefined FUN_00505950()
    MOV dword ptr [EBX],0x2             ; 00504051
    ADD ESP,0x14                        ; 00504057
    MOV dword ptr [EBX + 0x4],0x1       ; 0050405a
    MOV EDI,dword ptr [0x01da6478]      ; 00504061 | DAT_01da6478
    MOV dword ptr [EBX + 0x120],EAX     ; 00504067
    PUSH 0x5ca4fc                       ; 0050406d
    MOV EAX,[0x005fb140]                ; 00504072 | DAT_005fb140
    XOR ECX,ECX                         ; 00504077
    PUSH EAX                            ; 00504079
    MOV dword ptr [0x01da647c],ECX      ; 0050407a | DAT_01da647c
    SUB EDI,0x50000                     ; 00504080
    CALL FUN_0047cfa0                   ; 00504086
        ;   XREF to: 0047cfa0 (UNCONDITIONAL_CALL)  ; undefined FUN_0047cfa0()
    MOV EAX,[0x0060728c]                ; 0050408b | DAT_0060728c
    ADD ESP,0x8                         ; 00504090
    MOV ECX,dword ptr [EBX + 0x120]     ; 00504093
    XOR EDX,EDX                         ; 00504099
    MOV dword ptr [ESP + 0x40],EAX      ; 0050409b
    MOV dword ptr [0x0060728c],EDX      ; 0050409f | DAT_0060728c
    TEST ECX,ECX                        ; 005040a5
    JL 0x005041c1                       ; 005040a7
        ;   XREF to: 005041c1 (CONDITIONAL_JUMP)  ; LAB_005041c1
    MOV dword ptr [ESP + 0x44],ESI      ; 005040ad
    MOV EAX,[0x01da6478]                ; 005040b1 | DAT_01da6478
        ;   Label: LAB_005040b1
    SUB EAX,EDI                         ; 005040b6
    MOV dword ptr [ESP + 0x48],EAX      ; 005040b8
    FILD dword ptr [ESP + 0x48]         ; 005040bc
    FMUL double ptr [0x005ca5a1]        ; 005040c0 | DAT_005ca5a1
    FST float ptr [ESP]                 ; 005040c6
    FLDZ                                ; 005040c9
    FCOMPP                              ; 005040cb
    FNSTSW AX                           ; 005040cd
    SAHF                                ; 005040cf
    JBE 0x005040d7                      ; 005040d0
        ;   XREF to: 005040d7 (CONDITIONAL_JUMP)  ; LAB_005040d7
    XOR EAX,EAX                         ; 005040d2
    MOV dword ptr [ESP],EAX             ; 005040d4
    FLD float ptr [ESP]                 ; 005040d7
        ;   Label: LAB_005040d7
    FCOMP double ptr [0x005ca5a9]       ; 005040da | DAT_005ca5a9
    FNSTSW AX                           ; 005040e0
    SAHF                                ; 005040e2
    JBE 0x005040ec                      ; 005040e3
        ;   XREF to: 005040ec (CONDITIONAL_JUMP)  ; LAB_005040ec
    MOV dword ptr [ESP],0x41f00000      ; 005040e5
    FLD float ptr [ESP]                 ; 005040ec
        ;   Label: LAB_005040ec
    FCOMP double ptr [0x005ca5b1]       ; 005040ef | DAT_005ca5b1
    FNSTSW AX                           ; 005040f5
    SAHF                                ; 005040f7
    JBE 0x00504172                      ; 005040f8
        ;   XREF to: 00504172 (CONDITIONAL_JUMP)  ; LAB_00504172
    MOV ECX,0x29                        ; 005040fa
    MOV AH,0x1                          ; 005040ff
    LEA EDI,[ESP + 0x9]                 ; 00504101
    LEA ESI,[ESP + 0x30]                ; 00504105
    MOV dword ptr [ESP + 0x4],ECX       ; 00504109
    MOV byte ptr [ESP + 0x8],AH         ; 0050410d
    MOVSD ES:EDI,ESI                    ; 00504111
    MOVSD ES:EDI,ESI                    ; 00504112
    MOV EAX,dword ptr [EBX + 0x124]     ; 00504113
    SHL EAX,0x7                         ; 00504119
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x34] ; 0050411c
    MOV dword ptr [ESP + 0x25],EAX      ; 00504120
    MOV EAX,dword ptr [EBX + 0x124]     ; 00504124
    SHL EAX,0x7                         ; 0050412a
    MOV ESI,dword ptr [ESP + 0x44]      ; 0050412d
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x38] ; 00504131
    LEA EDI,[ESP + 0x11]                ; 00504135
    MOV dword ptr [ESP + 0x29],EAX      ; 00504139
    PUSH EDI                            ; 0050413d
    MOV AL,byte ptr [ESI]               ; 0050413e
        ;   Label: LAB_0050413e
    MOV byte ptr [EDI],AL               ; 00504140
    CMP AL,0x0                          ; 00504142
    JZ 0x00504156                       ; 00504144
        ;   XREF to: 00504156 (CONDITIONAL_JUMP)  ; LAB_00504156
    MOV AL,byte ptr [ESI + 0x1]         ; 00504146
    ADD ESI,0x2                         ; 00504149
    MOV byte ptr [EDI + 0x1],AL         ; 0050414c
    ADD EDI,0x2                         ; 0050414f
    CMP AL,0x0                          ; 00504152
    JNZ 0x0050413e                      ; 00504154
        ;   XREF to: 0050413e (CONDITIONAL_JUMP)  ; LAB_0050413e
    POP EDI                             ; 00504156
        ;   Label: LAB_00504156
    LEA EAX,[ESP + 0x4]                 ; 00504157
    PUSH EAX                            ; 0050415b
    MOV ESI,dword ptr [EBX + 0x120]     ; 0050415c
    PUSH ESI                            ; 00504162
    PUSH EBX                            ; 00504163
    CALL FUN_00505870                   ; 00504164
        ;   XREF to: 00505870 (UNCONDITIONAL_CALL)  ; undefined FUN_00505870()
    MOV EDI,dword ptr [0x01da6478]      ; 00504169 | DAT_01da6478
    ADD ESP,0xc                         ; 0050416f
    CALL FUN_0057a8a0                   ; 00504172
        ;   XREF to: 0057a8a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0057a8a0()
        ;   Label: LAB_00504172
    PUSH EBX                            ; 00504177
    CALL FUN_00504c70                   ; 00504178
        ;   XREF to: 00504c70 (UNCONDITIONAL_CALL)  ; undefined FUN_00504c70()
    MOV EAX,[0x01da647c]                ; 0050417d | DAT_01da647c
    ADD ESP,0x4                         ; 00504182
    CMP EAX,0x1                         ; 00504185
    JZ 0x00504259                       ; 00504188
        ;   XREF to: 00504259 (CONDITIONAL_JUMP)  ; LAB_00504259
    CMP EAX,0x3                         ; 0050418e
    JNC 0x0050424d                      ; 00504191
        ;   XREF to: 0050424d (CONDITIONAL_JUMP)  ; LAB_0050424d
    CMP EAX,0x2                         ; 00504197
    JZ 0x005041d5                       ; 0050419a
        ;   XREF to: 005041d5 (CONDITIONAL_JUMP)  ; LAB_005041d5
    PUSH 0x1                            ; 0050419c
        ;   Label: LAB_0050419c
    MOV EAX,[0x00600284]                ; 0050419e | DAT_00600284
    PUSH EAX                            ; 005041a3
    MOV EDX,dword ptr [EAX]             ; 005041a4
    CALL dword ptr [EDX + 0x4]          ; 005041a6
    ADD ESP,0x8                         ; 005041a9
    TEST EAX,EAX                        ; 005041ac
    JNZ 0x00504239                      ; 005041ae
        ;   XREF to: 00504239 (CONDITIONAL_JUMP)  ; LAB_00504239
    CMP dword ptr [EBX + 0x120],0x0     ; 005041b4
    JGE 0x005040b1                      ; 005041bb
        ;   XREF to: 005040b1 (CONDITIONAL_JUMP)  ; LAB_005040b1
    PUSH 0x1                            ; 005041c1
        ;   Label: LAB_005041c1
    PUSH EBX                            ; 005041c3
    CALL FUN_005043b0                   ; 005041c4
        ;   XREF to: 005043b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005043b0()
    ADD ESP,0x8                         ; 005041c9
    XOR EAX,EAX                         ; 005041cc
    MOV ESP,EBP                         ; 005041ce
    POP EBP                             ; 005041d0
    POP EDI                             ; 005041d1
    POP ESI                             ; 005041d2
    POP EBX                             ; 005041d3
    RET                                 ; 005041d4
    PUSH 0x5ca528                       ; 005041d5
        ;   Label: LAB_005041d5
    MOV ESI,dword ptr [0x005fb140]      ; 005041da | DAT_005fb140
    PUSH ESI                            ; 005041e0
    CALL FUN_0047cf40                   ; 005041e1
        ;   XREF to: 0047cf40 (UNCONDITIONAL_CALL)  ; undefined FUN_0047cf40()
    ADD ESP,0x8                         ; 005041e6
    PUSH 0x0                            ; 005041e9
    PUSH EBX                            ; 005041eb
    CALL FUN_005043b0                   ; 005041ec
        ;   XREF to: 005043b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005043b0()
    ADD ESP,0x8                         ; 005041f1
    XOR EAX,EAX                         ; 005041f4
    MOV ESP,EBP                         ; 005041f6
    POP EBP                             ; 005041f8
    POP EDI                             ; 005041f9
    POP ESI                             ; 005041fa
    POP EBX                             ; 005041fb
    RET                                 ; 005041fc
    PUSH 0x5ca556                       ; 005041fd
        ;   Label: LAB_005041fd
    MOV ECX,dword ptr [0x005fb140]      ; 00504202 | DAT_005fb140
    PUSH ECX                            ; 00504208
    CALL FUN_0047cf40                   ; 00504209
        ;   XREF to: 0047cf40 (UNCONDITIONAL_CALL)  ; undefined FUN_0047cf40()
    ADD ESP,0x8                         ; 0050420e
    PUSH 0x0                            ; 00504211
    PUSH EBX                            ; 00504213
    CALL FUN_005043b0                   ; 00504214
        ;   XREF to: 005043b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005043b0()
    ADD ESP,0x8                         ; 00504219
    XOR EAX,EAX                         ; 0050421c
    MOV ESP,EBP                         ; 0050421e
    POP EBP                             ; 00504220
    POP EDI                             ; 00504221
    POP ESI                             ; 00504222
    POP EBX                             ; 00504223
    RET                                 ; 00504224
    PUSH 0x5ca578                       ; 00504225
        ;   Label: LAB_00504225
    MOV EDX,dword ptr [0x005fb140]      ; 0050422a | DAT_005fb140
    PUSH EDX                            ; 00504230
    CALL FUN_0047cf40                   ; 00504231
        ;   XREF to: 0047cf40 (UNCONDITIONAL_CALL)  ; undefined FUN_0047cf40()
    ADD ESP,0x8                         ; 00504236
    PUSH 0x0                            ; 00504239
        ;   Label: LAB_00504239
    PUSH EBX                            ; 0050423b
    CALL FUN_005043b0                   ; 0050423c
        ;   XREF to: 005043b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005043b0()
    ADD ESP,0x8                         ; 00504241
    XOR EAX,EAX                         ; 00504244
    MOV ESP,EBP                         ; 00504246
    POP EBP                             ; 00504248
    POP EDI                             ; 00504249
    POP ESI                             ; 0050424a
    POP EBX                             ; 0050424b
    RET                                 ; 0050424c
    JBE 0x005041fd                      ; 0050424d
        ;   XREF to: 005041fd (CONDITIONAL_JUMP)  ; LAB_005041fd
        ;   Label: LAB_0050424d
    CMP EAX,0x4                         ; 0050424f
    JZ 0x00504225                       ; 00504252
        ;   XREF to: 00504225 (CONDITIONAL_JUMP)  ; LAB_00504225
    JMP 0x0050419c                      ; 00504254
        ;   XREF to: 0050419c (UNCONDITIONAL_JUMP)  ; LAB_0050419c
    MOV EAX,dword ptr [ESP + 0x40]      ; 00504259
        ;   Label: LAB_00504259
    MOV [0x0060728c],EAX                ; 0050425d | DAT_0060728c
    MOV EAX,0x1                         ; 00504262
    MOV ESP,EBP                         ; 00504267
    POP EBP                             ; 00504269
    POP EDI                             ; 0050426a
    POP ESI                             ; 0050426b
    POP EBX                             ; 0050426c
    RET                                 ; 0050426d

