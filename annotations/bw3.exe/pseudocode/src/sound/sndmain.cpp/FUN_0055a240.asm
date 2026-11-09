; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 sound_sndmain_cpp_FUN_0055a240(void)
;
;
; Referenced Globals:
;   undefined4 DAT_02ce7214
;   undefined4 DAT_02ce7218
;
; Called Functions:
;   crt_memory.c_memset_FUN_005a28f0
;   sound_sndmain.cpp_FUN_0055a560
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055a240
        ;   Label: sound_sndmain.cpp_FUN_0055a240
    PUSH ESI                            ; 0055a241
    PUSH EDI                            ; 0055a242
    PUSH EBP                            ; 0055a243
    SUB ESP,0x20                        ; 0055a244
    MOV EDX,dword ptr [0x02ce7214]      ; 0055a247 | DAT_02ce7214
    TEST EDX,EDX                        ; 0055a24d
    JZ 0x0055a25e                       ; 0055a24f
        ;   XREF to: 0055a25e (CONDITIONAL_JUMP)  ; LAB_0055a25e
    MOV EAX,0x1                         ; 0055a251
    ADD ESP,0x20                        ; 0055a256
    POP EBP                             ; 0055a259
    POP EDI                             ; 0055a25a
    POP ESI                             ; 0055a25b
    POP EBX                             ; 0055a25c
    RET                                 ; 0055a25d
    PUSH 0x14                           ; 0055a25e
        ;   Label: LAB_0055a25e
    PUSH EDX                            ; 0055a260
    LEA EAX,[ESP + 0x8]                 ; 0055a261
    PUSH EAX                            ; 0055a265
    CALL crt_memory.c_memset_FUN_005a28f0 ; 0055a266
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0055a26b
    MOV EAX,ESP                         ; 0055a26e
    PUSH EAX                            ; 0055a270
    PUSH 0x2102                         ; 0055a271
    PUSH 0x803                          ; 0055a276
    XOR EBX,EBX                         ; 0055a27b
    MOV ECX,0x5d3f32                    ; 0055a27d
    PUSH EBX                            ; 0055a282
    MOV dword ptr [ESP + 0x18],ECX      ; 0055a283
    MOV dword ptr [ESP + 0x14],EBX      ; 0055a287
    CALL dword ptr CS:[0x5b3448]        ; 0055a28b
    TEST EAX,EAX                        ; 0055a292
    JNZ 0x0055a2ec                      ; 0055a294
        ;   XREF to: 0055a2ec (CONDITIONAL_JUMP)  ; LAB_0055a2ec
    PUSH 0xc                            ; 0055a296
    PUSH EBX                            ; 0055a298
    LEA EAX,[ESP + 0x1c]                ; 0055a299
    PUSH EAX                            ; 0055a29d
    CALL crt_memory.c_memset_FUN_005a28f0 ; 0055a29e
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0055a2a3
    LEA EAX,[ESP + 0x14]                ; 0055a2a6
    PUSH EAX                            ; 0055a2aa
    PUSH 0x400                          ; 0055a2ab
    PUSH 0x80d                          ; 0055a2b0
    MOV EDI,dword ptr [ESP + 0x10]      ; 0055a2b5
    MOV ESI,0xa                         ; 0055a2b9
    PUSH EDI                            ; 0055a2be
    MOV dword ptr [ESP + 0x28],ESI      ; 0055a2bf
    CALL dword ptr CS:[0x5b3448]        ; 0055a2c3
    TEST EAX,EAX                        ; 0055a2ca
    JNZ 0x0055a303                      ; 0055a2cc
        ;   XREF to: 0055a303 (CONDITIONAL_JUMP)  ; LAB_0055a303
    MOV EAX,dword ptr [ESP + 0x4]       ; 0055a2ce
    MOV EBP,0x1                         ; 0055a2d2
    MOV [0x02ce7218],EAX                ; 0055a2d7 | DAT_02ce7218
    MOV dword ptr [0x02ce7214],EBP      ; 0055a2dc | DAT_02ce7214
    MOV EAX,EBP                         ; 0055a2e2
    ADD ESP,0x20                        ; 0055a2e4
    POP EBP                             ; 0055a2e7
    POP EDI                             ; 0055a2e8
    POP ESI                             ; 0055a2e9
    POP EBX                             ; 0055a2ea
    RET                                 ; 0055a2eb
    PUSH 0x5d3f3a                       ; 0055a2ec
        ;   Label: LAB_0055a2ec
    CALL sound_sndmain.cpp_FUN_0055a560 ; 0055a2f1
        ;   XREF to: 0055a560 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_0055a560()
    ADD ESP,0x4                         ; 0055a2f6
    XOR EAX,EAX                         ; 0055a2f9
    ADD ESP,0x20                        ; 0055a2fb
    POP EBP                             ; 0055a2fe
    POP EDI                             ; 0055a2ff
    POP ESI                             ; 0055a300
    POP EBX                             ; 0055a301
    RET                                 ; 0055a302
    PUSH 0x5d3f52                       ; 0055a303
        ;   Label: LAB_0055a303
    CALL sound_sndmain.cpp_FUN_0055a560 ; 0055a308
        ;   XREF to: 0055a560 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_0055a560()
    ADD ESP,0x4                         ; 0055a30d
    XOR EAX,EAX                         ; 0055a310
    ADD ESP,0x20                        ; 0055a312
    POP EBP                             ; 0055a315
    POP EDI                             ; 0055a316
    POP ESI                             ; 0055a317
    POP EBX                             ; 0055a318
    RET                                 ; 0055a319

