; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004060e0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_0061b4a8
;   undefined4 DAT_0062902c
;   undefined4 DAT_00629030
;   undefined4 DAT_00713a98
;   undefined4 DAT_00713a9c
;   undefined4 DAT_01c4f02c
;   undefined4 DAT_01c51d00
;   undefined4 DAT_01c51d14
;   undefined4 DAT_01c51d18
;
; Called Functions:
;   FUN_00403920
;   FUN_00406bd0
;   FUN_0043cbf0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004060e0
        ;   Label: FUN_004060e0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004060e1
    ADD EAX,0x8                         ; 004060e5
    MOV EBP,dword ptr [ESP + 0x8]       ; 004060e8
    PUSH EAX                            ; 004060ec
    ADD EBP,0x18                        ; 004060ed
    CALL FUN_00403920                   ; 004060f0
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined FUN_00403920()
    ADD ESP,0x4                         ; 004060f5
    TEST EAX,EAX                        ; 004060f8
    JZ 0x00406255                       ; 004060fa
        ;   XREF to: 00406255 (CONDITIONAL_JUMP)  ; LAB_00406255
    CMP dword ptr [0x01c51d00],0x0      ; 00406100 | DAT_01c51d00
    JNZ 0x004061db                      ; 00406107
        ;   XREF to: 004061db (CONDITIONAL_JUMP)  ; LAB_004061db
    CMP dword ptr [0x0061b4a0],0x20     ; 0040610d | DAT_0061b4a0
    JNZ 0x004061cc                      ; 00406114
        ;   XREF to: 004061cc (CONDITIONAL_JUMP)  ; LAB_004061cc
    MOV dword ptr [0x01c4f02c],0x57fb03 ; 0040611a | DAT_01c4f02c
    PUSH EDI                            ; 00406124
        ;   Label: LAB_00406124
    PUSH ESI                            ; 00406125
    PUSH EBX                            ; 00406126
    MOV ECX,0xc3                        ; 00406127
    PUSH 0xffff                         ; 0040612c
    MOV EBX,0x1                         ; 00406131
    XOR EDI,EDI                         ; 00406136
    XOR ESI,ESI                         ; 00406138
    MOV dword ptr [0x01c51d14],ECX      ; 0040613a | DAT_01c51d14
    CALL FUN_00406bd0                   ; 00406140
        ;   XREF to: 00406bd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00406bd0()
    ADD ESP,0x4                         ; 00406145
    MOV dword ptr [0x01c51d18],EBX      ; 00406148 | DAT_01c51d18
    MOV ECX,EBP                         ; 0040614e
    XOR EBX,EBX                         ; 00406150
    MOV EAX,dword ptr [ESP + 0x14]      ; 00406152
        ;   Label: LAB_00406152
    MOV EAX,dword ptr [EAX + 0x4]       ; 00406156
    LEA EAX,[EAX + EAX*0x2]             ; 00406159
    CMP ESI,EAX                         ; 0040615c
    JGE 0x00406244                      ; 0040615e
        ;   XREF to: 00406244 (CONDITIONAL_JUMP)  ; LAB_00406244
    MOV EAX,dword ptr [ECX]             ; 00406164
    MOV dword ptr [EBX + 0x713a98],EAX  ; 00406166 | DAT_00713a98 | DAT_00713a9c
    MOV EBP,dword ptr [0x0061b4a8]      ; 0040616c | DAT_0061b4a8
    MOV EAX,dword ptr [ECX + 0x4]       ; 00406172
    MOV EDX,dword ptr [ECX + 0x8]       ; 00406175
    CMP EBP,0x40                        ; 00406178
    JG 0x00406209                       ; 0040617b
        ;   XREF to: 00406209 (CONDITIONAL_JUMP)  ; LAB_00406209
    CMP EAX,0x40000                     ; 00406181
    JGE 0x0040618d                      ; 00406186
        ;   XREF to: 0040618d (CONDITIONAL_JUMP)  ; LAB_0040618d
    MOV EAX,0x40000                     ; 00406188
    CMP EDX,0x40000                     ; 0040618d
        ;   Label: LAB_0040618d
    JGE 0x0040619a                      ; 00406193
        ;   XREF to: 0040619a (CONDITIONAL_JUMP)  ; LAB_0040619a
    MOV EDX,0x40000                     ; 00406195
    CMP EAX,0xfbffff                    ; 0040619a
        ;   Label: LAB_0040619a
    JLE 0x004061a6                      ; 0040619f
        ;   XREF to: 004061a6 (CONDITIONAL_JUMP)  ; LAB_004061a6
    MOV EAX,0xfbffff                    ; 004061a1
    CMP EDX,0xfbffff                    ; 004061a6
        ;   Label: LAB_004061a6
    JG 0x00406202                       ; 004061ac
        ;   XREF to: 00406202 (CONDITIONAL_JUMP)  ; LAB_00406202
    IMUL EBP,dword ptr [ECX],0x30       ; 004061ae
        ;   Label: LAB_004061ae
    MOV dword ptr [EBP + 0x62902c],EAX  ; 004061b1 | DAT_0062902c
    IMUL EAX,dword ptr [ECX],0x30       ; 004061b7
    ADD EBX,0x4                         ; 004061ba
    INC EDI                             ; 004061bd
    ADD ESI,0x3                         ; 004061be
    ADD ECX,0xc                         ; 004061c1
    MOV dword ptr [EAX + 0x629030],EDX  ; 004061c4 | DAT_00629030
    JMP 0x00406152                      ; 004061ca
        ;   XREF to: 00406152 (UNCONDITIONAL_JUMP)  ; LAB_00406152
    MOV dword ptr [0x01c4f02c],0x57fd39 ; 004061cc | DAT_01c4f02c
        ;   Label: LAB_004061cc
    JMP 0x00406124                      ; 004061d6
        ;   XREF to: 00406124 (UNCONDITIONAL_JUMP)  ; LAB_00406124
    CMP dword ptr [0x0061b4a0],0x20     ; 004061db | DAT_0061b4a0
        ;   Label: LAB_004061db
    JNZ 0x004061f3                      ; 004061e2
        ;   XREF to: 004061f3 (CONDITIONAL_JUMP)  ; LAB_004061f3
    MOV dword ptr [0x01c4f02c],0x57de01 ; 004061e4 | DAT_01c4f02c | LAB_0057de01
    JMP 0x00406124                      ; 004061ee
        ;   XREF to: 00406124 (UNCONDITIONAL_JUMP)  ; LAB_00406124
    MOV dword ptr [0x01c4f02c],0x57e5e3 ; 004061f3 | DAT_01c4f02c | LAB_0057e5e3
        ;   Label: LAB_004061f3
    JMP 0x00406124                      ; 004061fd
        ;   XREF to: 00406124 (UNCONDITIONAL_JUMP)  ; LAB_00406124
    MOV EDX,0xfbffff                    ; 00406202
        ;   Label: LAB_00406202
    JMP 0x004061ae                      ; 00406207
        ;   XREF to: 004061ae (UNCONDITIONAL_JUMP)  ; LAB_004061ae
    CMP EAX,0x10000                     ; 00406209
        ;   Label: LAB_00406209
    JGE 0x00406215                      ; 0040620e
        ;   XREF to: 00406215 (CONDITIONAL_JUMP)  ; LAB_00406215
    MOV EAX,0x10000                     ; 00406210
    CMP EDX,0x10000                     ; 00406215
        ;   Label: LAB_00406215
    JGE 0x00406222                      ; 0040621b
        ;   XREF to: 00406222 (CONDITIONAL_JUMP)  ; LAB_00406222
    MOV EDX,0x10000                     ; 0040621d
    CMP EAX,0xfeffff                    ; 00406222
        ;   Label: LAB_00406222
    JLE 0x0040622e                      ; 00406227
        ;   XREF to: 0040622e (CONDITIONAL_JUMP)  ; LAB_0040622e
    MOV EAX,0xfeffff                    ; 00406229
    CMP EDX,0xfeffff                    ; 0040622e
        ;   Label: LAB_0040622e
    JLE 0x004061ae                      ; 00406234
        ;   XREF to: 004061ae (CONDITIONAL_JUMP)  ; LAB_004061ae
    MOV EDX,0xfeffff                    ; 0040623a
    JMP 0x004061ae                      ; 0040623f
        ;   XREF to: 004061ae (UNCONDITIONAL_JUMP)  ; LAB_004061ae
    PUSH 0x713a98                       ; 00406244 | DAT_00713a98
        ;   Label: LAB_00406244
    PUSH EDI                            ; 00406249
    CALL FUN_0043cbf0                   ; 0040624a
        ;   XREF to: 0043cbf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0043cbf0()
    ADD ESP,0x8                         ; 0040624f
    POP EBX                             ; 00406252
    POP ESI                             ; 00406253
    POP EDI                             ; 00406254
    MOV EDX,dword ptr [ESP + 0x8]       ; 00406255
        ;   Label: LAB_00406255
    MOV EDX,dword ptr [EDX + 0x4]       ; 00406259
    LEA EAX,[EDX*0x4 + 0x0]             ; 0040625c
    SUB EAX,EDX                         ; 00406263
    MOV EDX,dword ptr [ESP + 0x8]       ; 00406265
    SHL EAX,0x2                         ; 00406269
    ADD EDX,0x18                        ; 0040626c
    ADD EAX,EDX                         ; 0040626f
    POP EBP                             ; 00406271
    RET                                 ; 00406272

