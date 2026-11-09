; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_convertMixBufToOutput_FUN_0054d220(float *param_1,undefined2 *param_2,uint param_3,int param_4,int param_5)
;
; Local Variables:
; undefined8       Stack[-0x44]:8  local_44
; undefined8       Stack[-0x3c]:8  local_3c
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   sound_sndmain.cpp_FUN_005541f0 at 00554461
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005e8005
;   TerminatedCString s_convertMixBufToOutput_in_005e801a
;   undefined4 DAT_005e8046
;   undefined4 DAT_005e804a
;   undefined4 DAT_005e804e
;   undefined4 DAT_005e8056
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054d220
        ;   Label: sound_sndmain.cpp_convertMixBufToOutput_FUN_0054d220
    PUSH ESI                            ; 0054d221
    PUSH EDI                            ; 0054d222
    PUSH EBP                            ; 0054d223
    MOV EBP,ESP                         ; 0054d224
    SUB ESP,0x34                        ; 0054d226
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0054d229
    MOV EDX,dword ptr [EBP + 0x18]      ; 0054d22c
    MOV dword ptr [EBP + -0x20],EDX     ; 0054d22f
    CMP EAX,0x8                         ; 0054d232
    JC 0x0054d36d                       ; 0054d235
        ;   XREF to: 0054d36d (CONDITIONAL_JUMP)  ; LAB_0054d36d
    JBE 0x0054d2a9                      ; 0054d23b
        ;   XREF to: 0054d2a9 (CONDITIONAL_JUMP)  ; LAB_0054d2a9
    CMP EAX,0x10                        ; 0054d23d
    JNZ 0x0054d36d                      ; 0054d240
        ;   XREF to: 0054d36d (CONDITIONAL_JUMP)  ; LAB_0054d36d
    XOR EDX,EDX                         ; 0054d246
    MOV ECX,dword ptr [EBP + 0x20]      ; 0054d248
    MOV dword ptr [EBP + -0x4],EDX      ; 0054d24b
    TEST ECX,ECX                        ; 0054d24e
    JLE 0x0054d2a2                      ; 0054d250
        ;   XREF to: 0054d2a2 (CONDITIONAL_JUMP)  ; LAB_0054d2a2
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054d252
        ;   Label: LAB_0054d252
    MOV EAX,dword ptr [EAX]             ; 0054d255
    MOV dword ptr [EBP + -0xc],EAX      ; 0054d257
    FLD float ptr [EBP + -0xc]          ; 0054d25a
    FST double ptr [EBP + -0x34]        ; 0054d25d
    FCOMP double ptr [0x005e804e]       ; 0054d260 | DAT_005e804e
    FNSTSW AX                           ; 0054d266
    SAHF                                ; 0054d268
    JBE 0x0054d333                      ; 0054d269
        ;   XREF to: 0054d333 (CONDITIONAL_JUMP)  ; LAB_0054d333
    FLD1                                ; 0054d26f
    FCOMP double ptr [EBP + -0x34]      ; 0054d271
    FNSTSW AX                           ; 0054d274
    SAHF                                ; 0054d276
    JA 0x0054d340                       ; 0054d277
        ;   XREF to: 0054d340 (CONDITIONAL_JUMP)  ; LAB_0054d340
    MOV EAX,dword ptr [EBP + -0x20]     ; 0054d27d
    MOV word ptr [EAX],0x7fff           ; 0054d280
    MOV EAX,dword ptr [EBP + 0x24]      ; 0054d285
        ;   Label: LAB_0054d285
    ADD dword ptr [EBP + -0x20],EAX     ; 0054d288
    MOV EBX,dword ptr [EBP + 0x14]      ; 0054d28b
    MOV ESI,dword ptr [EBP + -0x4]      ; 0054d28e
    MOV EDI,dword ptr [EBP + 0x20]      ; 0054d291
    ADD EBX,0x4                         ; 0054d294
    INC ESI                             ; 0054d297
    MOV dword ptr [EBP + 0x14],EBX      ; 0054d298
    MOV dword ptr [EBP + -0x4],ESI      ; 0054d29b
    CMP ESI,EDI                         ; 0054d29e
    JL 0x0054d252                       ; 0054d2a0
        ;   XREF to: 0054d252 (CONDITIONAL_JUMP)  ; LAB_0054d252
    MOV ESP,EBP                         ; 0054d2a2
        ;   Label: LAB_0054d2a2
    POP EBP                             ; 0054d2a4
    POP EDI                             ; 0054d2a5
    POP ESI                             ; 0054d2a6
    POP EBX                             ; 0054d2a7
    RET                                 ; 0054d2a8
    XOR EBX,EBX                         ; 0054d2a9
        ;   Label: LAB_0054d2a9
    MOV ESI,dword ptr [EBP + 0x20]      ; 0054d2ab
    MOV dword ptr [EBP + -0x8],EBX      ; 0054d2ae
    TEST ESI,ESI                        ; 0054d2b1
    JLE 0x0054d2a2                      ; 0054d2b3
        ;   XREF to: 0054d2a2 (CONDITIONAL_JUMP)  ; LAB_0054d2a2
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054d2b5
        ;   Label: LAB_0054d2b5
    MOV EAX,dword ptr [EAX]             ; 0054d2b8
    MOV dword ptr [EBP + -0x24],EAX     ; 0054d2ba
    FLD float ptr [EBP + -0x24]         ; 0054d2bd
    FST double ptr [EBP + -0x2c]        ; 0054d2c0
    FCOMP double ptr [0x005e804e]       ; 0054d2c3 | DAT_005e804e
    FNSTSW AX                           ; 0054d2c9
    SAHF                                ; 0054d2cb
    JBE 0x0054d2fd                      ; 0054d2cc
        ;   XREF to: 0054d2fd (CONDITIONAL_JUMP)  ; LAB_0054d2fd
    FLD1                                ; 0054d2ce
    FCOMP double ptr [EBP + -0x2c]      ; 0054d2d0
    FNSTSW AX                           ; 0054d2d3
    SAHF                                ; 0054d2d5
    JA 0x0054d305                       ; 0054d2d6
        ;   XREF to: 0054d305 (CONDITIONAL_JUMP)  ; LAB_0054d305
    MOV EAX,dword ptr [EBP + -0x20]     ; 0054d2d8
    MOV byte ptr [EAX],0xff             ; 0054d2db
    MOV EAX,dword ptr [EBP + 0x24]      ; 0054d2de
        ;   Label: LAB_0054d2de
    ADD dword ptr [EBP + -0x20],EAX     ; 0054d2e1
    MOV ECX,dword ptr [EBP + 0x14]      ; 0054d2e4
    MOV EBX,dword ptr [EBP + -0x8]      ; 0054d2e7
    MOV ESI,dword ptr [EBP + 0x20]      ; 0054d2ea
    ADD ECX,0x4                         ; 0054d2ed
    INC EBX                             ; 0054d2f0
    MOV dword ptr [EBP + 0x14],ECX      ; 0054d2f1
    MOV dword ptr [EBP + -0x8],EBX      ; 0054d2f4
    CMP EBX,ESI                         ; 0054d2f7
    JGE 0x0054d2a2                      ; 0054d2f9
        ;   XREF to: 0054d2a2 (CONDITIONAL_JUMP)  ; LAB_0054d2a2
    JMP 0x0054d2b5                      ; 0054d2fb
        ;   XREF to: 0054d2b5 (UNCONDITIONAL_JUMP)  ; LAB_0054d2b5
    MOV EAX,dword ptr [EBP + -0x20]     ; 0054d2fd
        ;   Label: LAB_0054d2fd
    MOV byte ptr [EAX],0x0              ; 0054d300
    JMP 0x0054d2de                      ; 0054d303
        ;   XREF to: 0054d2de (UNCONDITIONAL_JUMP)  ; LAB_0054d2de
    FLD float ptr [EBP + -0x24]         ; 0054d305
        ;   Label: LAB_0054d305
    FMUL float ptr [0x005e804a]         ; 0054d308 | DAT_005e804a
    FADD float ptr [0x005e8056]         ; 0054d30e | DAT_005e8056
    FSTP float ptr [EBP + -0x1c]        ; 0054d314
    FLD float ptr [EBP + 0xffffffe4]    ; 0054d317
    FISTP dword ptr [EBP + 0xffffffe8]  ; 0054d31d
    MOV ECX,dword ptr [EBP + 0xffffffe0] ; 0054d323
    MOV AL,byte ptr [EBP + 0xffffffe8]  ; 0054d329
    MOV byte ptr [ECX],AL               ; 0054d32f
    JMP 0x0054d2de                      ; 0054d331
        ;   XREF to: 0054d2de (UNCONDITIONAL_JUMP)  ; LAB_0054d2de
    MOV EAX,dword ptr [EBP + -0x20]     ; 0054d333
        ;   Label: LAB_0054d333
    MOV word ptr [EAX],0x8001           ; 0054d336
    JMP 0x0054d285                      ; 0054d33b
        ;   XREF to: 0054d285 (UNCONDITIONAL_JUMP)  ; LAB_0054d285
    FLD float ptr [EBP + -0xc]          ; 0054d340
        ;   Label: LAB_0054d340
    FMUL float ptr [0x005e8046]         ; 0054d343 | DAT_005e8046
    FSTP float ptr [EBP + -0x14]        ; 0054d349
    FLD float ptr [EBP + 0xffffffec]    ; 0054d34c
    FISTP dword ptr [EBP + 0xfffffff0]  ; 0054d352
    MOV ECX,dword ptr [EBP + 0xffffffe0] ; 0054d358
    MOV AX,word ptr [EBP + 0xfffffff0]  ; 0054d35e
    MOV word ptr [ECX],AX               ; 0054d365
    JMP 0x0054d285                      ; 0054d368
        ;   XREF to: 0054d285 (UNCONDITIONAL_JUMP)  ; LAB_0054d285
    PUSH EAX                            ; 0054d36d
        ;   Label: LAB_0054d36d
    MOV EDI,0x5e8005                    ; 0054d36e | = "..\\sound\\sndmain.cpp"
    MOV EDX,0x617                       ; 0054d373
    PUSH 0x5e801a                       ; 0054d378 | = "convertMixBufToOutput - invalid bits: %d"
    MOV dword ptr [0x01d046a0],EDI      ; 0054d37d | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 0054d383 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0054d389
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 0054d38e
    MOV ESP,EBP                         ; 0054d391
    POP EBP                             ; 0054d393
    POP EDI                             ; 0054d394
    POP ESI                             ; 0054d395
    POP EBX                             ; 0054d396
    RET                                 ; 0054d397

