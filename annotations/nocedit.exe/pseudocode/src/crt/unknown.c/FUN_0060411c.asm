; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined crt_unknown.c_FUN_0060411c()
;
; Parameters:
; undefined2       Stack[0x0]:2   local_res0
; Local Variables:
; undefined2       Stack[-0x4]:2  local_4
;
; XREF[1]:
;   crt_unknown.c_FUN_0060403f at 006040d5
;
; Called Functions:
;   crt_unknown.c_FUN_0060403f
;   crt_unknown.c_FUN_00604267
;   crt_unknown.c_FUN_00604478
;
; *****************************************************************************

section .text

    POP EDX                             ; 0060411c
        ;   Label: crt_unknown.c_FUN_0060411c
    POP ECX                             ; 0060411d
    MOV AL,0x0                          ; 0060411e
    MOV byte ptr [EBX],AL               ; 00604120
    MOV EAX,dword ptr [EBP + -0x24]     ; 00604122
    MOV dword ptr [EBP + -0x1c],EBX     ; 00604125
    ADD EAX,0x8                         ; 00604128
    XOR EDI,EDI                         ; 0060412b
    MOV dword ptr [EBP + -0x24],EAX     ; 0060412d
    JMP 0x0060403f                      ; 00604130
        ;   XREF to: 0060403f (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [EBP + -0x20]     ; 00604135
        ;   Label: LAB_00604135
    MOV EDI,dword ptr [EBP + -0x24]     ; 00604138
    ADD EDX,0x7                         ; 0060413b
    LEA EAX,[EBP + 0xffffff6d]          ; 0060413e
    MOV dword ptr [EBP + -0x20],EDX     ; 00604144
        ;   Label: LAB_00604144
    CMP byte ptr [EAX],0x30             ; 00604147
    JNZ 0x00604154                      ; 0060414a
        ;   XREF to: 00604154 (CONDITIONAL_JUMP)  ; LAB_00604154
    MOV EDX,dword ptr [EBP + -0x20]     ; 0060414c
    DEC EDI                             ; 0060414f
    DEC EDX                             ; 00604150
    INC EAX                             ; 00604151
    JMP 0x00604144                      ; 00604152
        ;   XREF to: 00604144 (UNCONDITIONAL_JUMP)  ; LAB_00604144
    MOV BL,byte ptr [ESI + 0x8]         ; 00604154
        ;   Label: LAB_00604154
    MOV EDX,dword ptr [ESI]             ; 00604157
    TEST BL,0x2                         ; 00604159
    JZ 0x00604170                       ; 0060415c
        ;   XREF to: 00604170 (CONDITIONAL_JUMP)  ; LAB_00604170
    MOV ECX,dword ptr [EBP + -0x20]     ; 0060415e
    MOV EBX,dword ptr [ESI + 0x4]       ; 00604161
    ADD ECX,EBX                         ; 00604164
    MOV dword ptr [EBP + -0x20],ECX     ; 00604166
    LEA EBX,[ECX + 0x1]                 ; 00604169
    ADD EDX,EBX                         ; 0060416c
    JMP 0x0060418d                      ; 0060416e
        ;   XREF to: 0060418d (UNCONDITIONAL_JUMP)  ; LAB_0060418d
    TEST BL,0x1                         ; 00604170
        ;   Label: LAB_00604170
    JZ 0x0060418d                       ; 00604173
        ;   XREF to: 0060418d (CONDITIONAL_JUMP)  ; LAB_0060418d
    MOV EBX,dword ptr [ESI + 0x4]       ; 00604175
    TEST EBX,EBX                        ; 00604178
    JLE 0x0060417f                      ; 0060417a
        ;   XREF to: 0060417f (CONDITIONAL_JUMP)  ; LAB_0060417f
    INC EDX                             ; 0060417c
    JMP 0x00604181                      ; 0060417d
        ;   XREF to: 00604181 (UNCONDITIONAL_JUMP)  ; LAB_00604181
    ADD EDX,EBX                         ; 0060417f
        ;   Label: LAB_0060417f
    MOV EBX,dword ptr [EBP + -0x20]     ; 00604181
        ;   Label: LAB_00604181
    MOV ECX,dword ptr [ESI + 0x4]       ; 00604184
    INC EBX                             ; 00604187
    SUB EBX,ECX                         ; 00604188
    MOV dword ptr [EBP + -0x20],EBX     ; 0060418a
    TEST EDX,EDX                        ; 0060418d
        ;   Label: LAB_0060418d
    JL 0x006041f9                       ; 0060418f
        ;   XREF to: 006041f9 (CONDITIONAL_JUMP)  ; LAB_006041f9
    CMP EDX,EDI                         ; 00604195
    JLE 0x0060419b                      ; 00604197
        ;   XREF to: 0060419b (CONDITIONAL_JUMP)  ; LAB_0060419b
    MOV EDX,EDI                         ; 00604199
    MOV CL,byte ptr [ESI + 0x8]         ; 0060419b
        ;   Label: LAB_0060419b
    MOV EBX,0xf                         ; 0060419e
    TEST CL,0x20                        ; 006041a3
    JZ 0x006041ad                       ; 006041a6
        ;   XREF to: 006041ad (CONDITIONAL_JUMP)  ; LAB_006041ad
    MOV EBX,0x14                        ; 006041a8
    TEST byte ptr [ESI + 0x8],0x40      ; 006041ad
        ;   Label: LAB_006041ad
    JZ 0x006041b5                       ; 006041b1
        ;   XREF to: 006041b5 (CONDITIONAL_JUMP)  ; LAB_006041b5
    ADD EBX,EBX                         ; 006041b3
    CMP EDX,EBX                         ; 006041b5
        ;   Label: LAB_006041b5
    JLE 0x006041bc                      ; 006041b7
        ;   XREF to: 006041bc (CONDITIONAL_JUMP)  ; LAB_006041bc
    LEA EDX,[EBX + 0x1]                 ; 006041b9
    MOV byte ptr [EBP + -0x10],0x30     ; 006041bc
        ;   Label: LAB_006041bc
    CMP EDI,EDX                         ; 006041c0
    JLE 0x006041ce                      ; 006041c2
        ;   XREF to: 006041ce (CONDITIONAL_JUMP)  ; LAB_006041ce
    CMP byte ptr [EDX + EAX*0x1],0x35   ; 006041c4
    JC 0x006041ce                       ; 006041c8
        ;   XREF to: 006041ce (CONDITIONAL_JUMP)  ; LAB_006041ce
    MOV byte ptr [EBP + -0x10],0x39     ; 006041ca
    MOV CH,byte ptr [EBP + -0x10]       ; 006041ce
        ;   Label: LAB_006041ce
    MOV EBX,EDX                         ; 006041d1
    LEA EDI,[EDX + EAX*0x1]             ; 006041d3
    DEC EDI                             ; 006041d6
        ;   Label: LAB_006041d6
    MOV CL,byte ptr [EDI]               ; 006041d7
    DEC EBX                             ; 006041d9
    CMP CL,CH                           ; 006041da
    JNZ 0x006041e1                      ; 006041dc
        ;   XREF to: 006041e1 (CONDITIONAL_JUMP)  ; LAB_006041e1
    DEC EDX                             ; 006041de
    JMP 0x006041d6                      ; 006041df
        ;   XREF to: 006041d6 (UNCONDITIONAL_JUMP)  ; LAB_006041d6
    CMP CH,0x39                         ; 006041e1
        ;   Label: LAB_006041e1
    JNZ 0x006041ec                      ; 006041e4
        ;   XREF to: 006041ec (CONDITIONAL_JUMP)  ; LAB_006041ec
    MOV CH,CL                           ; 006041e6
    INC CH                              ; 006041e8
    MOV byte ptr [EDI],CH               ; 006041ea
    TEST EBX,EBX                        ; 006041ec
        ;   Label: LAB_006041ec
    JGE 0x006041f9                      ; 006041ee
        ;   XREF to: 006041f9 (CONDITIONAL_JUMP)  ; LAB_006041f9
    MOV EBX,dword ptr [EBP + -0x20]     ; 006041f0
    DEC EAX                             ; 006041f3
    INC EBX                             ; 006041f4
    INC EDX                             ; 006041f5
    MOV dword ptr [EBP + -0x20],EBX     ; 006041f6
    TEST EDX,EDX                        ; 006041f9
        ;   Label: LAB_006041f9
    JG 0x00604218                       ; 006041fb
        ;   XREF to: 00604218 (CONDITIONAL_JUMP)  ; LAB_00604218
    MOV EDX,0x1                         ; 006041fd
    XOR ECX,ECX                         ; 00604202
    MOV AL,0x30                         ; 00604204
    MOV dword ptr [EBP + -0x20],ECX     ; 00604206
    MOV byte ptr [EBP + 0xffffff6c],AL  ; 00604209
    LEA EAX,[EBP + 0xffffff6c]          ; 0060420f
    MOV dword ptr [ESI + 0x14],ECX      ; 00604215
    MOV BL,byte ptr [ESI + 0x8]         ; 00604218
        ;   Label: LAB_00604218
    TEST BL,0x2                         ; 0060421b
    JNZ 0x00604237                      ; 0060421e
        ;   XREF to: 00604237 (CONDITIONAL_JUMP)  ; LAB_00604237
    TEST BL,0x4                         ; 00604220
    JZ 0x00604249                       ; 00604223
        ;   XREF to: 00604249 (CONDITIONAL_JUMP)  ; LAB_00604249
    MOV EDI,dword ptr [EBP + -0x20]     ; 00604225
    CMP EDI,-0x4                        ; 00604228
    JL 0x00604231                       ; 0060422b
        ;   XREF to: 00604231 (CONDITIONAL_JUMP)  ; LAB_00604231
    CMP EDI,dword ptr [ESI]             ; 0060422d
    JL 0x00604237                       ; 0060422f
        ;   XREF to: 00604237 (CONDITIONAL_JUMP)  ; LAB_00604237
    TEST byte ptr [ESI + 0x8],0x8       ; 00604231
        ;   Label: LAB_00604231
    JZ 0x00604249                       ; 00604235
        ;   XREF to: 00604249 (CONDITIONAL_JUMP)  ; LAB_00604249
    MOV ECX,dword ptr [EBP + 0x10]      ; 00604237
        ;   Label: LAB_00604237
    PUSH ECX                            ; 0060423a
    MOV EDI,dword ptr [EBP + -0x20]     ; 0060423b
    PUSH EDI                            ; 0060423e
    PUSH EDX                            ; 0060423f
    PUSH EAX                            ; 00604240
    PUSH ESI                            ; 00604241
    CALL crt_unknown.c_FUN_00604267     ; 00604242
        ;   XREF to: 00604267 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00604267()
    JMP 0x00604259                      ; 00604247
        ;   XREF to: 00604259 (UNCONDITIONAL_JUMP)  ; LAB_00604259
    MOV EDI,dword ptr [EBP + 0x10]      ; 00604249
        ;   Label: LAB_00604249
    PUSH EDI                            ; 0060424c
    MOV EBX,dword ptr [EBP + -0x20]     ; 0060424d
    PUSH EBX                            ; 00604250
    PUSH EDX                            ; 00604251
    PUSH EAX                            ; 00604252
    PUSH ESI                            ; 00604253
    CALL crt_unknown.c_FUN_00604478     ; 00604254
        ;   XREF to: 00604478 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00604478()
    ADD ESP,0x14                        ; 00604259
        ;   Label: LAB_00604259
    XOR EAX,EAX                         ; 0060425c
        ;   Label: LAB_0060425c
    MOV AX,word ptr [EBP + -0x14]       ; 0060425e
    JMP 0x00603d56                      ; 00604262
        ;   XREF to: 00603d56 (UNCONDITIONAL_JUMP)  ; LAB_00603d56

