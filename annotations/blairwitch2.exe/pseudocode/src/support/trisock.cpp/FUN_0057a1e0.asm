; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 support_trisock_cpp_FUN_0057a1e0(CSocket *param_1)
;
;
; Called Functions:
;   crt_unknown.c_sprintf_FUN_005b7790
;   support_trisock.cpp_CSocket_sendSocketData_FUN_005792e0
;   support_trisock.cpp_FUN_00579e40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057a1e0
        ;   Label: support_trisock.cpp_FUN_0057a1e0
    PUSH ESI                            ; 0057a1e1
    PUSH EDI                            ; 0057a1e2
    PUSH EBP                            ; 0057a1e3
    SUB ESP,0x804                       ; 0057a1e4
    MOV EBX,dword ptr [ESP + 0x828]     ; 0057a1ea
    MOV EBP,dword ptr [ESP + 0x830]     ; 0057a1f1
    TEST EBP,EBP                        ; 0057a1f8
    JNZ 0x0057a201                      ; 0057a1fa
        ;   XREF to: 0057a201 (CONDITIONAL_JUMP)  ; LAB_0057a201
    MOV EBP,0x579880                    ; 0057a1fc
    MOV ESI,0x5ed256                    ; 0057a201
        ;   Label: LAB_0057a201
    MOV EDI,ESP                         ; 0057a206
    PUSH EDI                            ; 0057a208
    MOV AL,byte ptr [ESI]               ; 0057a209
        ;   Label: LAB_0057a209
    MOV byte ptr [EDI],AL               ; 0057a20b
    CMP AL,0x0                          ; 0057a20d
    JZ 0x0057a221                       ; 0057a20f
        ;   XREF to: 0057a221 (CONDITIONAL_JUMP)  ; LAB_0057a221
    MOV AL,byte ptr [ESI + 0x1]         ; 0057a211
    ADD ESI,0x2                         ; 0057a214
    MOV byte ptr [EDI + 0x1],AL         ; 0057a217
    ADD EDI,0x2                         ; 0057a21a
    CMP AL,0x0                          ; 0057a21d
    JNZ 0x0057a209                      ; 0057a21f
        ;   XREF to: 0057a209 (CONDITIONAL_JUMP)  ; LAB_0057a209
    POP EDI                             ; 0057a221
        ;   Label: LAB_0057a221
    MOV EAX,ESP                         ; 0057a222
    PUSH EAX                            ; 0057a224
    PUSH 0x0                            ; 0057a225
    CALL EBP                            ; 0057a227
    ADD ESP,0x8                         ; 0057a229
    TEST EAX,EAX                        ; 0057a22c
    JNZ 0x0057a23b                      ; 0057a22e
        ;   XREF to: 0057a23b (CONDITIONAL_JUMP)  ; LAB_0057a23b
    ADD ESP,0x804                       ; 0057a230
    POP EBP                             ; 0057a236
    POP EDI                             ; 0057a237
    POP ESI                             ; 0057a238
    POP EBX                             ; 0057a239
    RET                                 ; 0057a23a
    PUSH EBX                            ; 0057a23b
        ;   Label: LAB_0057a23b
    MOV EAX,dword ptr [EBX]             ; 0057a23c
    XOR ESI,ESI                         ; 0057a23e
    CALL dword ptr [EAX + 0x18]         ; 0057a240
    ADD ESP,0x4                         ; 0057a243
    MOV EDI,EAX                         ; 0057a246
    PUSH EBX                            ; 0057a248
        ;   Label: LAB_0057a248
    MOV EAX,dword ptr [EBX]             ; 0057a249
    CALL dword ptr [EAX + 0x4]          ; 0057a24b
    ADD ESP,0x4                         ; 0057a24e
    TEST EAX,EAX                        ; 0057a251
    JL 0x0057a258                       ; 0057a253
        ;   XREF to: 0057a258 (CONDITIONAL_JUMP)  ; LAB_0057a258
    INC ESI                             ; 0057a255
    JMP 0x0057a248                      ; 0057a256
        ;   XREF to: 0057a248 (UNCONDITIONAL_JUMP)  ; LAB_0057a248
    PUSH 0x0                            ; 0057a258
        ;   Label: LAB_0057a258
    PUSH EDI                            ; 0057a25a
    MOV EAX,dword ptr [EBX]             ; 0057a25b
    PUSH EBX                            ; 0057a25d
    CALL dword ptr [EAX + 0x14]         ; 0057a25e
    ADD ESP,0xc                         ; 0057a261
    XOR EAX,EAX                         ; 0057a264
    PUSH ESI                            ; 0057a266
    MOV AX,word ptr [ESP + 0x824]       ; 0057a267
    PUSH EAX                            ; 0057a26f
    MOV EDX,dword ptr [ESP + 0x824]     ; 0057a270
    PUSH EDX                            ; 0057a277
    MOV ECX,dword ptr [ESP + 0x830]     ; 0057a278
    PUSH ECX                            ; 0057a27f
    PUSH 0x5ed26a                       ; 0057a280
    LEA EAX,[ESP + 0x14]                ; 0057a285
    PUSH EAX                            ; 0057a289
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 0057a28a
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x18                        ; 0057a28f
    PUSH 0x0                            ; 0057a292
    LEA EDI,[ESP + 0x4]                 ; 0057a294
    SUB ECX,ECX                         ; 0057a298
    DEC ECX                             ; 0057a29a
    XOR EAX,EAX                         ; 0057a29b
    SCASB.REPNE ES:EDI                  ; 0057a29d
    NOT ECX                             ; 0057a29f
    DEC ECX                             ; 0057a2a1
    PUSH ECX                            ; 0057a2a2
    LEA EAX,[ESP + 0x8]                 ; 0057a2a3
    PUSH EAX                            ; 0057a2a7
    MOV EDI,dword ptr [ESP + 0x824]     ; 0057a2a8
    PUSH EDI                            ; 0057a2af
    CALL support_trisock.cpp_CSocket_sendSocketData_FUN_005792e0 ; 0057a2b0
        ;   XREF to: 005792e0 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_sendSocketData_FUN_005792e0(CSocket * this_ptr, char * buffer, int length, SNetworkAddr * dest_addr)
    ADD ESP,0x10                        ; 0057a2b5
    TEST EAX,EAX                        ; 0057a2b8
    JZ 0x0057a2f9                       ; 0057a2ba
        ;   XREF to: 0057a2f9 (CONDITIONAL_JUMP)  ; LAB_0057a2f9
    TEST ESI,ESI                        ; 0057a2bc
        ;   Label: LAB_0057a2bc
    JLE 0x0057a32d                      ; 0057a2be
        ;   XREF to: 0057a32d (CONDITIONAL_JUMP)  ; LAB_0057a32d
    PUSH EBX                            ; 0057a2c0
    MOV EAX,dword ptr [EBX]             ; 0057a2c1
    CALL dword ptr [EAX + 0x4]          ; 0057a2c3
    ADD ESP,0x4                         ; 0057a2c6
    MOV ECX,EAX                         ; 0057a2c9
    TEST EAX,EAX                        ; 0057a2cb
    JL 0x0057a314                       ; 0057a2cd
        ;   XREF to: 0057a314 (CONDITIONAL_JUMP)  ; LAB_0057a314
    PUSH 0x0                            ; 0057a2cf
    PUSH 0x1                            ; 0057a2d1
    MOV byte ptr [ESP + 0x808],AL       ; 0057a2d3
    LEA EAX,[ESP + 0x808]               ; 0057a2da
    PUSH EAX                            ; 0057a2e1
    MOV EDX,dword ptr [ESP + 0x824]     ; 0057a2e2
    PUSH EDX                            ; 0057a2e9
    CALL support_trisock.cpp_CSocket_sendSocketData_FUN_005792e0 ; 0057a2ea
        ;   XREF to: 005792e0 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_sendSocketData_FUN_005792e0(CSocket * this_ptr, char * buffer, int length, SNetworkAddr * dest_addr)
    ADD ESP,0x10                        ; 0057a2ef
    TEST EAX,EAX                        ; 0057a2f2
    JZ 0x0057a2f9                       ; 0057a2f4
        ;   XREF to: 0057a2f9 (CONDITIONAL_JUMP)  ; LAB_0057a2f9
    DEC ESI                             ; 0057a2f6
    JMP 0x0057a2bc                      ; 0057a2f7
        ;   XREF to: 0057a2bc (UNCONDITIONAL_JUMP)  ; LAB_0057a2bc
    PUSH 0x5ed2a0                       ; 0057a2f9
        ;   Label: LAB_0057a2f9
    PUSH 0x0                            ; 0057a2fe
    CALL EBP                            ; 0057a300
    ADD ESP,0x8                         ; 0057a302
    TEST EAX,EAX                        ; 0057a305
    JNZ 0x0057a2bc                      ; 0057a307
        ;   XREF to: 0057a2bc (CONDITIONAL_JUMP)  ; LAB_0057a2bc
    ADD ESP,0x804                       ; 0057a309
    POP EBP                             ; 0057a30f
    POP EDI                             ; 0057a310
    POP ESI                             ; 0057a311
    POP EBX                             ; 0057a312
    RET                                 ; 0057a313
    PUSH 0x5ed2c0                       ; 0057a314
        ;   Label: LAB_0057a314
    PUSH 0x1                            ; 0057a319
    CALL EBP                            ; 0057a31b
    ADD ESP,0x8                         ; 0057a31d
    XOR EAX,EAX                         ; 0057a320
    ADD ESP,0x804                       ; 0057a322
    POP EBP                             ; 0057a328
    POP EDI                             ; 0057a329
    POP ESI                             ; 0057a32a
    POP EBX                             ; 0057a32b
    RET                                 ; 0057a32c
    PUSH EBP                            ; 0057a32d
        ;   Label: LAB_0057a32d
    PUSH 0x5ed2d3                       ; 0057a32e
    MOV EBP,dword ptr [ESP + 0x834]     ; 0057a333
    PUSH EBP                            ; 0057a33a
    MOV EAX,dword ptr [ESP + 0x824]     ; 0057a33b
    PUSH EAX                            ; 0057a342
    CALL support_trisock.cpp_FUN_00579e40 ; 0057a343
        ;   XREF to: 00579e40 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_FUN_00579e40()
    ADD ESP,0x10                        ; 0057a348
    ADD ESP,0x804                       ; 0057a34b
    POP EBP                             ; 0057a351
    POP EDI                             ; 0057a352
    POP ESI                             ; 0057a353
    POP EBX                             ; 0057a354
    RET                                 ; 0057a355

