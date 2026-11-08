; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00404120(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005fba20
;   undefined4 DAT_005fba38
;   undefined4 DAT_0060b02c
;   undefined4 DAT_0060b030
;   undefined4 DAT_007303f8
;   undefined4 DAT_00730418
;   undefined4 DAT_0073041c
;   undefined4 DAT_01c6b5cc
;   undefined4 DAT_01c6cee8
;   undefined4 DAT_01c6e2a0
;   undefined4 DAT_01c6e2b4
;   undefined4 DAT_01c6e2b8
;
; Called Functions:
;   FUN_00403920
;   FUN_004039d0
;   FUN_0043a840
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00404120
        ;   Label: FUN_00404120
    PUSH EDI                            ; 00404121
    PUSH EBP                            ; 00404122
    MOV EAX,dword ptr [ESP + 0x10]      ; 00404123
    ADD EAX,0x8                         ; 00404127
    MOV EBP,dword ptr [ESP + 0x10]      ; 0040412a
    PUSH EAX                            ; 0040412e
    ADD EBP,0x18                        ; 0040412f
    CALL FUN_00403920                   ; 00404132
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined FUN_00403920()
    ADD ESP,0x4                         ; 00404137
    TEST EAX,EAX                        ; 0040413a
    JZ 0x004042ff                       ; 0040413c
        ;   XREF to: 004042ff (CONDITIONAL_JUMP)  ; LAB_004042ff
    CMP dword ptr [0x007303f8],0x0      ; 00404142 | DAT_007303f8
    JNZ 0x0040425f                      ; 00404149
        ;   XREF to: 0040425f (CONDITIONAL_JUMP)  ; LAB_0040425f
    CMP dword ptr [0x01c6e2a0],0x0      ; 0040414f | DAT_01c6e2a0
    JNZ 0x00404238                      ; 00404156
        ;   XREF to: 00404238 (CONDITIONAL_JUMP)  ; LAB_00404238
    CMP dword ptr [0x005fba20],0x20     ; 0040415c | DAT_005fba20
    JNZ 0x00404229                      ; 00404163
        ;   XREF to: 00404229 (CONDITIONAL_JUMP)  ; LAB_00404229
    MOV dword ptr [0x01c6b5cc],0x562c33 ; 00404169 | DAT_01c6b5cc
        ;   Label: LAB_00404169
    MOV ESI,dword ptr [ESP + 0x10]      ; 00404173
        ;   Label: LAB_00404173
    PUSH ESI                            ; 00404177
    MOV EDI,0x13                        ; 00404178
    CALL FUN_004039d0                   ; 0040417d
        ;   XREF to: 004039d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004039d0()
    MOV EAX,[0x005fba38]                ; 00404182 | DAT_005fba38
    ADD ESP,0x4                         ; 00404187
    MOV dword ptr [0x01c6e2b4],EDI      ; 0040418a | DAT_01c6e2b4
    CMP EAX,0xff                        ; 00404190
    JL 0x0040429c                       ; 00404195
        ;   XREF to: 0040429c (CONDITIONAL_JUMP)  ; LAB_0040429c
    PUSH EBX                            ; 0040419b
        ;   Label: LAB_0040419b
    XOR ECX,ECX                         ; 0040419c
    XOR EDI,EDI                         ; 0040419e
    XOR EBX,EBX                         ; 004041a0
    XOR ESI,ESI                         ; 004041a2
    MOV dword ptr [0x01c6e2b8],ECX      ; 004041a4 | DAT_01c6e2b8
    MOV ECX,EBP                         ; 004041aa
    MOV EAX,dword ptr [ESP + 0x14]      ; 004041ac
        ;   Label: LAB_004041ac
    MOV EAX,dword ptr [EAX + 0x4]       ; 004041b0
    LEA EAX,[EAX + EAX*0x2]             ; 004041b3
    CMP EBX,EAX                         ; 004041b6
    JGE 0x004042f0                      ; 004041b8
        ;   XREF to: 004042f0 (CONDITIONAL_JUMP)  ; LAB_004042f0
    MOV EAX,dword ptr [ECX]             ; 004041be
    MOV dword ptr [ESI + 0x730418],EAX  ; 004041c0 | DAT_00730418 | DAT_0073041c
    MOV EBP,dword ptr [0x01c6cee8]      ; 004041c6 | DAT_01c6cee8
    MOV EAX,dword ptr [ECX + 0x4]       ; 004041cc
    MOV EDX,dword ptr [ECX + 0x8]       ; 004041cf
    TEST EBP,EBP                        ; 004041d2
    JZ 0x004042b5                       ; 004041d4
        ;   XREF to: 004042b5 (CONDITIONAL_JUMP)  ; LAB_004042b5
    CMP EAX,0x20000                     ; 004041da
    JGE 0x004041e6                      ; 004041df
        ;   XREF to: 004041e6 (CONDITIONAL_JUMP)  ; LAB_004041e6
    MOV EAX,0x20000                     ; 004041e1
    CMP EDX,0x20000                     ; 004041e6
        ;   Label: LAB_004041e6
    JGE 0x004041f3                      ; 004041ec
        ;   XREF to: 004041f3 (CONDITIONAL_JUMP)  ; LAB_004041f3
    MOV EDX,0x20000                     ; 004041ee
    CMP EAX,0xfdffff                    ; 004041f3
        ;   Label: LAB_004041f3
    JLE 0x004041ff                      ; 004041f8
        ;   XREF to: 004041ff (CONDITIONAL_JUMP)  ; LAB_004041ff
    MOV EAX,0xfdffff                    ; 004041fa
    CMP EDX,0xfdffff                    ; 004041ff
        ;   Label: LAB_004041ff
    JG 0x004042ab                       ; 00404205
        ;   XREF to: 004042ab (CONDITIONAL_JUMP)  ; LAB_004042ab
    IMUL EBP,dword ptr [ECX],0x30       ; 0040420b
        ;   Label: LAB_0040420b
    MOV dword ptr [EBP + 0x60b02c],EAX  ; 0040420e | DAT_0060b02c
    IMUL EAX,dword ptr [ECX],0x30       ; 00404214
    ADD ESI,0x4                         ; 00404217
    INC EDI                             ; 0040421a
    ADD EBX,0x3                         ; 0040421b
    ADD ECX,0xc                         ; 0040421e
    MOV dword ptr [EAX + 0x60b030],EDX  ; 00404221 | DAT_0060b030
    JMP 0x004041ac                      ; 00404227
        ;   XREF to: 004041ac (UNCONDITIONAL_JUMP)  ; LAB_004041ac
    MOV dword ptr [0x01c6b5cc],0x562e69 ; 00404229 | DAT_01c6b5cc
        ;   Label: LAB_00404229
    JMP 0x00404173                      ; 00404233
        ;   XREF to: 00404173 (UNCONDITIONAL_JUMP)  ; LAB_00404173
    CMP dword ptr [0x005fba20],0x20     ; 00404238 | DAT_005fba20
        ;   Label: LAB_00404238
    JNZ 0x00404250                      ; 0040423f
        ;   XREF to: 00404250 (CONDITIONAL_JUMP)  ; LAB_00404250
    MOV dword ptr [0x01c6b5cc],0x560f31 ; 00404241 | DAT_01c6b5cc | LAB_00560f31
    JMP 0x00404173                      ; 0040424b
        ;   XREF to: 00404173 (UNCONDITIONAL_JUMP)  ; LAB_00404173
    MOV dword ptr [0x01c6b5cc],0x561713 ; 00404250 | DAT_01c6b5cc | LAB_00561713
        ;   Label: LAB_00404250
    JMP 0x00404173                      ; 0040425a
        ;   XREF to: 00404173 (UNCONDITIONAL_JUMP)  ; LAB_00404173
    CMP dword ptr [0x01c6e2a0],0x0      ; 0040425f | DAT_01c6e2a0
        ;   Label: LAB_0040425f
    JNZ 0x00404284                      ; 00404266
        ;   XREF to: 00404284 (CONDITIONAL_JUMP)  ; LAB_00404284
    CMP dword ptr [0x005fba20],0x20     ; 00404268 | DAT_005fba20
    JZ 0x00404169                       ; 0040426f
        ;   XREF to: 00404169 (CONDITIONAL_JUMP)  ; LAB_00404169
    MOV dword ptr [0x01c6b5cc],0x562e69 ; 00404275 | DAT_01c6b5cc
    JMP 0x00404173                      ; 0040427f
        ;   XREF to: 00404173 (UNCONDITIONAL_JUMP)  ; LAB_00404173
    CMP dword ptr [0x005fba20],0x20     ; 00404284 | DAT_005fba20
        ;   Label: LAB_00404284
    JNZ 0x00404250                      ; 0040428b
        ;   XREF to: 00404250 (CONDITIONAL_JUMP)  ; LAB_00404250
    MOV dword ptr [0x01c6b5cc],0x560f31 ; 0040428d | DAT_01c6b5cc | LAB_00560f31
    JMP 0x00404173                      ; 00404297
        ;   XREF to: 00404173 (UNCONDITIONAL_JUMP)  ; LAB_00404173
    MOV dword ptr [0x01c6e2b4],0x33     ; 0040429c | DAT_01c6e2b4
        ;   Label: LAB_0040429c
    JMP 0x0040419b                      ; 004042a6
        ;   XREF to: 0040419b (UNCONDITIONAL_JUMP)  ; LAB_0040419b
    MOV EDX,0xfdffff                    ; 004042ab
        ;   Label: LAB_004042ab
    JMP 0x0040420b                      ; 004042b0
        ;   XREF to: 0040420b (UNCONDITIONAL_JUMP)  ; LAB_0040420b
    CMP EAX,0x10000                     ; 004042b5
        ;   Label: LAB_004042b5
    JGE 0x004042c1                      ; 004042ba
        ;   XREF to: 004042c1 (CONDITIONAL_JUMP)  ; LAB_004042c1
    MOV EAX,0x10000                     ; 004042bc
    CMP EDX,0x10000                     ; 004042c1
        ;   Label: LAB_004042c1
    JGE 0x004042ce                      ; 004042c7
        ;   XREF to: 004042ce (CONDITIONAL_JUMP)  ; LAB_004042ce
    MOV EDX,0x10000                     ; 004042c9
    CMP EAX,0xfeffff                    ; 004042ce
        ;   Label: LAB_004042ce
    JLE 0x004042da                      ; 004042d3
        ;   XREF to: 004042da (CONDITIONAL_JUMP)  ; LAB_004042da
    MOV EAX,0xfeffff                    ; 004042d5
    CMP EDX,0xfeffff                    ; 004042da
        ;   Label: LAB_004042da
    JLE 0x0040420b                      ; 004042e0
        ;   XREF to: 0040420b (CONDITIONAL_JUMP)  ; LAB_0040420b
    MOV EDX,0xfeffff                    ; 004042e6
    JMP 0x0040420b                      ; 004042eb
        ;   XREF to: 0040420b (UNCONDITIONAL_JUMP)  ; LAB_0040420b
    PUSH 0x730418                       ; 004042f0 | DAT_00730418
        ;   Label: LAB_004042f0
    PUSH EDI                            ; 004042f5
    CALL FUN_0043a840                   ; 004042f6
        ;   XREF to: 0043a840 (UNCONDITIONAL_CALL)  ; undefined FUN_0043a840()
    ADD ESP,0x8                         ; 004042fb
    POP EBX                             ; 004042fe
    MOV EDX,dword ptr [ESP + 0x10]      ; 004042ff
        ;   Label: LAB_004042ff
    MOV EDX,dword ptr [EDX + 0x4]       ; 00404303
    LEA EAX,[EDX*0x4 + 0x0]             ; 00404306
    SUB EAX,EDX                         ; 0040430d
    MOV EDX,dword ptr [ESP + 0x10]      ; 0040430f
    SHL EAX,0x2                         ; 00404313
    ADD EDX,0x18                        ; 00404316
    ADD EAX,EDX                         ; 00404319
    POP EBP                             ; 0040431b
    POP EDI                             ; 0040431c
    POP ESI                             ; 0040431d
    RET                                 ; 0040431e

