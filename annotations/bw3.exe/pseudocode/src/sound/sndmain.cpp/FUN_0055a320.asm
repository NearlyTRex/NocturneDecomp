; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 sound_sndmain_cpp_FUN_0055a320(uint param_1,float param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005d3f8a
;   undefined4 DAT_005d3f8e
;   undefined4 DAT_005d3f92
;   undefined4 DAT_02ce7214
;   undefined4 DAT_02ce7218
;
; Called Functions:
;   crt_math.c_floor_FUN_005a3600
;   crt_math.c_round_FUN_005a3120
;   crt_memory.c_memset_FUN_005a28f0
;   sound_sndmain.cpp_FUN_0055a560
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055a320
        ;   Label: sound_sndmain.cpp_FUN_0055a320
    PUSH ESI                            ; 0055a321
    PUSH EDI                            ; 0055a322
    PUSH EBP                            ; 0055a323
    SUB ESP,0x54                        ; 0055a324
    MOV ESI,dword ptr [ESP + 0x68]      ; 0055a327
    MOV EDX,dword ptr [0x02ce7214]      ; 0055a32b | DAT_02ce7214
    TEST EDX,EDX                        ; 0055a331
    JZ 0x0055a442                       ; 0055a333
        ;   XREF to: 0055a442 (CONDITIONAL_JUMP)  ; LAB_0055a442
    FLD float ptr [ESP + 0x6c]          ; 0055a339
        ;   Label: LAB_0055a339
    FLD ST0                             ; 0055a33d
    FMUL float ptr [0x005d3f8a]         ; 0055a33f | DAT_005d3f8a
    CALL crt_math.c_round_FUN_005a3120  ; 0055a345
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x44]        ; 0055a34a
    MOV EAX,dword ptr [ESP + 0x44]      ; 0055a34e
    MOV dword ptr [ESP + 0x50],EAX      ; 0055a352
    FILD dword ptr [ESP + 0x50]         ; 0055a356
    FMUL float ptr [0x005d3f8e]         ; 0055a35a | DAT_005d3f8e
    FLD ST1                             ; 0055a360
    FSTP double ptr [ESP + 0x34]        ; 0055a362
    MOV EDX,dword ptr [ESP + 0x38]      ; 0055a366
    MOV ECX,dword ptr [ESP + 0x34]      ; 0055a36a
    PUSH EDX                            ; 0055a36e
    FSUBP                               ; 0055a36f
    PUSH ECX                            ; 0055a371
    CALL crt_math.c_round_FUN_005a3120  ; 0055a372
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x48]        ; 0055a377
    CALL crt_math.c_floor_FUN_005a3600  ; 0055a37b
        ;   XREF to: 005a3600 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005a3600(double input_value)
    MOV dword ptr [ESP + 0x34],EAX      ; 0055a380
    MOV dword ptr [ESP + 0x38],EDX      ; 0055a384
    FLD double ptr [ESP + 0x34]         ; 0055a388
    ADD ESP,0x8                         ; 0055a38c
    FSUBR double ptr [ESP + 0x34]       ; 0055a38f
    FMUL double ptr [0x005d3f92]        ; 0055a393 | DAT_005d3f92
    MOV EBX,ESI                         ; 0055a399
    XOR EDI,EDI                         ; 0055a39b
    PUSH 0xc                            ; 0055a39d
    INC ESI                             ; 0055a39f
    LEA EAX,[ESP + 0x24]                ; 0055a3a0
    PUSH EDI                            ; 0055a3a4
    MOV dword ptr [ESP + 0x50],ESI      ; 0055a3a5
    MOV dword ptr [ESP + 0x54],EDI      ; 0055a3a9
    PUSH EAX                            ; 0055a3ad
    CALL crt_math.c_round_FUN_005a3120  ; 0055a3ae
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x48]        ; 0055a3b3
    CALL crt_memory.c_memset_FUN_005a28f0 ; 0055a3b7
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0055a3bc
    XOR EAX,EAX                         ; 0055a3bf
    XOR EDX,EDX                         ; 0055a3c1
    MOV AX,word ptr [ESP + 0x3c]        ; 0055a3c3
    MOV DL,byte ptr [ESP + 0x40]        ; 0055a3c8
    SHL EAX,0x8                         ; 0055a3cc
    OR EDX,EAX                          ; 0055a3cf
    XOR EAX,EAX                         ; 0055a3d1
    MOV AX,word ptr [ESP + 0x44]        ; 0055a3d3
    SHL EDX,0x10                        ; 0055a3d8
    SHL EAX,0x8                         ; 0055a3db
    AND EBX,0xff                        ; 0055a3de
    OR EAX,EBX                          ; 0055a3e4
    OR EAX,EDX                          ; 0055a3e6
    MOV EBX,EDI                         ; 0055a3e8
    MOV dword ptr [ESP + 0x24],EAX      ; 0055a3ea
    XOR EDX,EDX                         ; 0055a3ee
    SHL EBX,0x8                         ; 0055a3f0
    MOV DL,byte ptr [ESP + 0x4c]        ; 0055a3f3
    XOR EAX,EAX                         ; 0055a3f7
    OR EBX,EDX                          ; 0055a3f9
    XOR EDX,EDX                         ; 0055a3fb
    SHL EAX,0x8                         ; 0055a3fd
    MOV DL,byte ptr [ESP + 0x48]        ; 0055a400
    SHL EBX,0x10                        ; 0055a404
    OR EAX,EDX                          ; 0055a407
    OR EAX,EBX                          ; 0055a409
    MOV dword ptr [ESP + 0x28],EAX      ; 0055a40b
    LEA EAX,[ESP + 0x20]                ; 0055a40f
    PUSH EAX                            ; 0055a413
    PUSH 0xc                            ; 0055a414
    PUSH 0x806                          ; 0055a416
    MOV EBP,dword ptr [0x02ce7218]      ; 0055a41b | DAT_02ce7218
    PUSH EBP                            ; 0055a421
    MOV dword ptr [ESP + 0x30],EDI      ; 0055a422
    CALL dword ptr CS:[0x5b3448]        ; 0055a426
    TEST EAX,EAX                        ; 0055a42d
    JNZ 0x0055a4e8                      ; 0055a42f
        ;   XREF to: 0055a4e8 (CONDITIONAL_JUMP)  ; LAB_0055a4e8
    MOV EAX,0x1                         ; 0055a435
        ;   Label: LAB_0055a435
    ADD ESP,0x54                        ; 0055a43a
    POP EBP                             ; 0055a43d
    POP EDI                             ; 0055a43e
    POP ESI                             ; 0055a43f
    POP EBX                             ; 0055a440
    RET                                 ; 0055a441
    PUSH 0x14                           ; 0055a442
        ;   Label: LAB_0055a442
    PUSH EDX                            ; 0055a444
    LEA EAX,[ESP + 0x8]                 ; 0055a445
    PUSH EAX                            ; 0055a449
    CALL crt_memory.c_memset_FUN_005a28f0 ; 0055a44a
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0055a44f
    MOV EAX,ESP                         ; 0055a452
    PUSH EAX                            ; 0055a454
    PUSH 0x2102                         ; 0055a455
    PUSH 0x803                          ; 0055a45a
    XOR EBX,EBX                         ; 0055a45f
    MOV ECX,0x5d3f32                    ; 0055a461
    PUSH EBX                            ; 0055a466
    MOV dword ptr [ESP + 0x18],ECX      ; 0055a467
    MOV dword ptr [ESP + 0x14],EBX      ; 0055a46b
    CALL dword ptr CS:[0x5b3448]        ; 0055a46f
    TEST EAX,EAX                        ; 0055a476
    JNZ 0x0055a4c9                      ; 0055a478
        ;   XREF to: 0055a4c9 (CONDITIONAL_JUMP)  ; LAB_0055a4c9
    PUSH 0xc                            ; 0055a47a
    PUSH EBX                            ; 0055a47c
    LEA EAX,[ESP + 0x1c]                ; 0055a47d
    PUSH EAX                            ; 0055a481
    CALL crt_memory.c_memset_FUN_005a28f0 ; 0055a482
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0055a487
    LEA EAX,[ESP + 0x14]                ; 0055a48a
    PUSH EAX                            ; 0055a48e
    PUSH 0x400                          ; 0055a48f
    PUSH 0x80d                          ; 0055a494
    MOV EBP,dword ptr [ESP + 0x10]      ; 0055a499
    MOV EDI,0xa                         ; 0055a49d
    PUSH EBP                            ; 0055a4a2
    MOV dword ptr [ESP + 0x28],EDI      ; 0055a4a3
    CALL dword ptr CS:[0x5b3448]        ; 0055a4a7
    TEST EAX,EAX                        ; 0055a4ae
    JZ 0x0055a4d0                       ; 0055a4b0
        ;   XREF to: 0055a4d0 (CONDITIONAL_JUMP)  ; LAB_0055a4d0
    PUSH 0x5d3f52                       ; 0055a4b2
    CALL sound_sndmain.cpp_FUN_0055a560 ; 0055a4b7
        ;   XREF to: 0055a560 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_0055a560()
        ;   Label: LAB_0055a4b7
    ADD ESP,0x4                         ; 0055a4bc
    XOR EAX,EAX                         ; 0055a4bf
    ADD ESP,0x54                        ; 0055a4c1
    POP EBP                             ; 0055a4c4
    POP EDI                             ; 0055a4c5
    POP ESI                             ; 0055a4c6
    POP EBX                             ; 0055a4c7
    RET                                 ; 0055a4c8
    PUSH 0x5d3f3a                       ; 0055a4c9
        ;   Label: LAB_0055a4c9
    JMP 0x0055a4b7                      ; 0055a4ce
        ;   XREF to: 0055a4b7 (UNCONDITIONAL_JUMP)  ; LAB_0055a4b7
    MOV EAX,dword ptr [ESP + 0x4]       ; 0055a4d0
        ;   Label: LAB_0055a4d0
    MOV [0x02ce7218],EAX                ; 0055a4d4 | DAT_02ce7218
    MOV dword ptr [0x02ce7214],0x1      ; 0055a4d9 | DAT_02ce7214
    JMP 0x0055a339                      ; 0055a4e3
        ;   XREF to: 0055a339 (UNCONDITIONAL_JUMP)  ; LAB_0055a339
    LEA EAX,[ESP + 0x20]                ; 0055a4e8
        ;   Label: LAB_0055a4e8
    PUSH EAX                            ; 0055a4ec
    PUSH 0x5                            ; 0055a4ed
    PUSH 0x806                          ; 0055a4ef
    MOV EAX,[0x02ce7218]                ; 0055a4f4 | DAT_02ce7218
    PUSH EAX                            ; 0055a4f9
    CALL dword ptr CS:[0x5b3448]        ; 0055a4fa
    TEST EAX,EAX                        ; 0055a501
    JZ 0x0055a435                       ; 0055a503
        ;   XREF to: 0055a435 (CONDITIONAL_JUMP)  ; LAB_0055a435
    PUSH 0x5d3f6f                       ; 0055a509
    CALL sound_sndmain.cpp_FUN_0055a560 ; 0055a50e
        ;   XREF to: 0055a560 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_0055a560()
    ADD ESP,0x4                         ; 0055a513
    XOR EAX,EAX                         ; 0055a516
    ADD ESP,0x54                        ; 0055a518
    POP EBP                             ; 0055a51b
    POP EDI                             ; 0055a51c
    POP ESI                             ; 0055a51d
    POP EBX                             ; 0055a51e
    RET                                 ; 0055a51f

