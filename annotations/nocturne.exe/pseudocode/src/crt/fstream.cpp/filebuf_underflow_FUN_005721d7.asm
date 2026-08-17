; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __watcallStack crt_fstream_cpp_filebuf_underflow_FUN_005721d7(filebuf *this_ptr)
;
; Parameters:
; filebuf *        Stack[0x4]:4   this_ptr
;
; Called Functions:
;   crt_unknown.c_ReadFileBytesMaybe_FUN_005733e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005721d7
        ;   Label: crt_fstream.cpp_filebuf_underflow_FUN_005721d7
    PUSH EBP                            ; 005721d8
    MOV EBP,ESP                         ; 005721d9
    MOV EBX,dword ptr [EBP + 0xc]       ; 005721db
    MOV EAX,dword ptr [EBX + 0x20]      ; 005721de
    SUB EAX,dword ptr [EBX + 0x18]      ; 005721e1
    TEST EAX,EAX                        ; 005721e4
    JG 0x0057224d                       ; 005721e6
        ;   XREF to: 0057224d (CONDITIONAL_JUMP)  ; LAB_0057224d
    MOV dword ptr [EBX + 0x18],0x0      ; 005721e8
        ;   Label: LAB_005721e8
    MOV dword ptr [EBX + 0x20],0x0      ; 005721ef
    MOV EAX,dword ptr [EBX + 0x4]       ; 005721f6
    MOV dword ptr [EBX + 0x1c],0x0      ; 005721f9
    TEST EAX,EAX                        ; 00572200
    JNZ 0x005722b1                      ; 00572202
        ;   XREF to: 005722b1 (CONDITIONAL_JUMP)  ; LAB_005722b1
    JZ 0x0057225f                       ; 00572208
        ;   XREF to: 0057225f (CONDITIONAL_JUMP)  ; LAB_0057225f
    MOV EAX,dword ptr [EBX + 0x4]       ; 0057220a
        ;   Label: LAB_0057220a
    TEST EAX,EAX                        ; 0057220d
    JZ 0x00572279                       ; 0057220f
        ;   XREF to: 00572279 (CONDITIONAL_JUMP)  ; LAB_00572279
    LEA EDX,[EAX + 0x4]                 ; 00572211
        ;   Label: LAB_00572211
    MOV dword ptr [EBX + 0xc],EAX       ; 00572214
    MOV dword ptr [EBX + 0x14],EDX      ; 00572217
    MOV dword ptr [EBX + 0x10],EDX      ; 0057221a
    MOV EAX,dword ptr [EBX + 0x8]       ; 0057221d
        ;   Label: LAB_0057221d
    MOV EDX,dword ptr [EBX + 0x10]      ; 00572220
    SUB EAX,EDX                         ; 00572223
    TEST EAX,EAX                        ; 00572225
    JG 0x005722c4                       ; 00572227
        ;   XREF to: 005722c4 (CONDITIONAL_JUMP)  ; LAB_005722c4
    XOR EAX,EAX                         ; 0057222d
    MOV EDX,dword ptr [EBX + 0x10]      ; 0057222f
        ;   Label: LAB_0057222f
    LEA ECX,[EDX + EAX*0x1]             ; 00572232
    MOV EAX,dword ptr [EBX + 0x14]      ; 00572235
    MOV dword ptr [EBX + 0x10],ECX      ; 00572238
    CMP EAX,ECX                         ; 0057223b
    JNC 0x005722a9                      ; 0057223d
        ;   XREF to: 005722a9 (CONDITIONAL_JUMP)  ; LAB_005722a9
    MOV AL,byte ptr [EAX]               ; 00572243
        ;   Label: LAB_00572243
    AND EAX,0xff                        ; 00572245
    POP EBP                             ; 0057224a
    POP EBX                             ; 0057224b
    RET                                 ; 0057224c
    PUSH EBX                            ; 0057224d
        ;   Label: LAB_0057224d
    MOV EAX,dword ptr [EBX + 0x28]      ; 0057224e
    CALL dword ptr [EAX + 0x20]         ; 00572251
    ADD ESP,0x4                         ; 00572254
    CMP EAX,-0x1                        ; 00572257
    JNZ 0x005721e8                      ; 0057225a
        ;   XREF to: 005721e8 (CONDITIONAL_JUMP)  ; LAB_005721e8
    POP EBP                             ; 0057225c
    POP EBX                             ; 0057225d
    RET                                 ; 0057225e
    MOV EAX,dword ptr [EBX + 0x24]      ; 0057225f
        ;   Label: LAB_0057225f
    AND EAX,0x1                         ; 00572262
    JNZ 0x0057220a                      ; 00572265
        ;   XREF to: 0057220a (CONDITIONAL_JUMP)  ; LAB_0057220a
    PUSH EBX                            ; 00572267
    MOV EAX,dword ptr [EBX + 0x28]      ; 00572268
    CALL dword ptr [EAX + 0x28]         ; 0057226b
    ADD ESP,0x4                         ; 0057226e
    CMP EAX,-0x1                        ; 00572271
    JNZ 0x0057220a                      ; 00572274
        ;   XREF to: 0057220a (CONDITIONAL_JUMP)  ; LAB_0057220a
    POP EBP                             ; 00572276
    POP EBX                             ; 00572277
    RET                                 ; 00572278
    LEA EAX,[EBX + 0x38]                ; 00572279
        ;   Label: LAB_00572279
    MOV dword ptr [EBX + 0x14],EAX      ; 0057227c
    PUSH 0x1                            ; 0057227f
    MOV dword ptr [EBX + 0x10],EAX      ; 00572281
    PUSH EAX                            ; 00572284
    MOV EAX,dword ptr [EBX + 0x2c]      ; 00572285
    LEA EDX,[EBX + 0x34]                ; 00572288
    PUSH EAX                            ; 0057228b
    MOV dword ptr [EBX + 0xc],EDX       ; 0057228c
    CALL crt_unknown.c_ReadFileBytesMaybe_FUN_005733e0 ; 0057228f
        ;   XREF to: 005733e0 (UNCONDITIONAL_CALL)  ; uint crt_unknown.c_ReadFileBytesMaybe_FUN_005733e0(uint param_1, char * param_2, DWORD param_3)
    ADD ESP,0xc                         ; 00572294
    TEST EAX,EAX                        ; 00572297
    JLE 0x005722a9                      ; 00572299
        ;   XREF to: 005722a9 (CONDITIONAL_JUMP)  ; LAB_005722a9
    MOV EDX,dword ptr [EBX + 0x10]      ; 0057229b
    LEA ECX,[EDX + EAX*0x1]             ; 0057229e
    MOV EAX,dword ptr [EBX + 0x14]      ; 005722a1
    MOV dword ptr [EBX + 0x10],ECX      ; 005722a4
    JMP 0x00572243                      ; 005722a7
        ;   XREF to: 00572243 (UNCONDITIONAL_JUMP)  ; LAB_00572243
    MOV EAX,0xffffffff                  ; 005722a9
        ;   Label: LAB_005722a9
    POP EBP                             ; 005722ae
    POP EBX                             ; 005722af
    RET                                 ; 005722b0
    MOV ECX,dword ptr [EBX + 0x14]      ; 005722b1
        ;   Label: LAB_005722b1
    MOV EDX,dword ptr [EBX + 0x10]      ; 005722b4
    CMP ECX,EDX                         ; 005722b7
    JC 0x0057221d                       ; 005722b9
        ;   XREF to: 0057221d (CONDITIONAL_JUMP)  ; LAB_0057221d
    JMP 0x00572211                      ; 005722bf
        ;   XREF to: 00572211 (UNCONDITIONAL_JUMP)  ; LAB_00572211
    PUSH EAX                            ; 005722c4
        ;   Label: LAB_005722c4
    PUSH EDX                            ; 005722c5
    MOV EAX,dword ptr [EBX + 0x2c]      ; 005722c6
    PUSH EAX                            ; 005722c9
    CALL crt_unknown.c_ReadFileBytesMaybe_FUN_005733e0 ; 005722ca
        ;   XREF to: 005733e0 (UNCONDITIONAL_CALL)  ; uint crt_unknown.c_ReadFileBytesMaybe_FUN_005733e0(uint param_1, char * param_2, DWORD param_3)
    ADD ESP,0xc                         ; 005722cf
    TEST EAX,EAX                        ; 005722d2
    JG 0x0057222f                       ; 005722d4
        ;   XREF to: 0057222f (CONDITIONAL_JUMP)  ; LAB_0057222f
    JMP 0x005722a9                      ; 005722da
        ;   XREF to: 005722a9 (UNCONDITIONAL_JUMP)  ; LAB_005722a9

