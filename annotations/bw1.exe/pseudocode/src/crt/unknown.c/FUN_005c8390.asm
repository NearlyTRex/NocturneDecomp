; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005c8390(LPCSTR param_1,undefined4 *param_2)
;
;
; Called Functions:
;   crt_time.c__localtime_FUN_005c2738
;   crt_unknown.c_FUN_005c862c
;   unkafter_zombie.cpp_FUN_005cc330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c8390
        ;   Label: crt_unknown.c_FUN_005c8390
    PUSH ESI                            ; 005c8391
    PUSH EDI                            ; 005c8392
    SUB ESP,0x48                        ; 005c8393
    MOV EDI,dword ptr [ESP + 0x5c]      ; 005c8396
    PUSH 0x0                            ; 005c839a
    PUSH 0x0                            ; 005c839c
    PUSH 0x3                            ; 005c839e
    PUSH 0x0                            ; 005c83a0
    PUSH 0x0                            ; 005c83a2
    PUSH 0xc0000000                     ; 005c83a4
    MOV EDX,dword ptr [ESP + 0x70]      ; 005c83a9
    PUSH EDX                            ; 005c83ad
    CALL dword ptr CS:[0x5d0528]        ; 005c83ae
    MOV EBX,EAX                         ; 005c83b5
    MOV ESI,EAX                         ; 005c83b7
    CMP EAX,-0x1                        ; 005c83b9
    JNZ 0x005c83c8                      ; 005c83bc
        ;   XREF to: 005c83c8 (CONDITIONAL_JUMP)  ; LAB_005c83c8
    CALL crt_unknown.c_FUN_005c862c     ; 005c83be
        ;   XREF to: 005c862c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c862c()
    JMP 0x005c84ff                      ; 005c83c3
        ;   XREF to: 005c84ff (UNCONDITIONAL_JUMP)  ; LAB_005c84ff
    LEA EAX,[ESP + 0x20]                ; 005c83c8
        ;   Label: LAB_005c83c8
    PUSH EAX                            ; 005c83cc
    LEA EAX,[ESP + 0x44]                ; 005c83cd
    PUSH EAX                            ; 005c83d1
    LEA EAX,[ESP + 0x38]                ; 005c83d2
    PUSH EAX                            ; 005c83d6
    PUSH EBX                            ; 005c83d7
    CALL dword ptr CS:[0x5d05a4]        ; 005c83d8
    TEST EAX,EAX                        ; 005c83df
    JNZ 0x005c83f7                      ; 005c83e1
        ;   XREF to: 005c83f7 (CONDITIONAL_JUMP)  ; LAB_005c83f7
    PUSH EBX                            ; 005c83e3
    CALL dword ptr CS:[0x5d051c]        ; 005c83e4
    CALL crt_unknown.c_FUN_005c862c     ; 005c83eb
        ;   XREF to: 005c862c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c862c()
    ADD ESP,0x48                        ; 005c83f0
    POP EDI                             ; 005c83f3
    POP ESI                             ; 005c83f4
    POP EBX                             ; 005c83f5
    RET                                 ; 005c83f6
    TEST EDI,EDI                        ; 005c83f7
        ;   Label: LAB_005c83f7
    JNZ 0x005c8410                      ; 005c83f9
        ;   XREF to: 005c8410 (CONDITIONAL_JUMP)  ; LAB_005c8410
    PUSH EDI                            ; 005c83fb
    CALL unkafter_zombie.cpp_FUN_005cc330 ; 005c83fc
        ;   XREF to: 005cc330 (UNCONDITIONAL_CALL)  ; undefined unkafter_zombie.cpp_FUN_005cc330()
    ADD ESP,0x4                         ; 005c8401
    LEA EDI,[ESP + 0x38]                ; 005c8404
    MOV dword ptr [ESP + 0x3c],EAX      ; 005c8408
    MOV dword ptr [ESP + 0x38],EAX      ; 005c840c
    LEA EAX,[EDI + 0x4]                 ; 005c8410
        ;   Label: LAB_005c8410
    PUSH EAX                            ; 005c8413
    CALL crt_time.c__localtime_FUN_005c2738 ; 005c8414
        ;   XREF to: 005c2738 (UNCONDITIONAL_CALL)  ; undefined crt_time.c__localtime_FUN_005c2738()
    MOV EDX,EAX                         ; 005c8419
    MOV AX,word ptr [EAX + 0x14]        ; 005c841b
    ADD ESP,0x4                         ; 005c841f
    ADD EAX,0x76c                       ; 005c8422
    MOV word ptr [ESP + 0x10],AX        ; 005c8427
    MOV word ptr [ESP],AX               ; 005c842c
    MOV AX,word ptr [EDX + 0x10]        ; 005c8430
    INC EAX                             ; 005c8434
    MOV word ptr [ESP + 0x12],AX        ; 005c8435
    MOV word ptr [ESP + 0x2],AX         ; 005c843a
    MOV AX,word ptr [EDX + 0xc]         ; 005c843f
    MOV word ptr [ESP + 0x16],AX        ; 005c8443
    MOV word ptr [ESP + 0x6],AX         ; 005c8448
    MOV AX,word ptr [EDX + 0x8]         ; 005c844d
    MOV word ptr [ESP + 0x18],AX        ; 005c8451
    MOV word ptr [ESP + 0x8],AX         ; 005c8456
    MOV AX,word ptr [EDX + 0x4]         ; 005c845b
    MOV word ptr [ESP + 0x1a],AX        ; 005c845f
    MOV word ptr [ESP + 0xa],AX         ; 005c8464
    MOV AX,word ptr [EDX]               ; 005c8469
    MOV word ptr [ESP + 0x1c],AX        ; 005c846c
    MOV word ptr [ESP + 0xc],AX         ; 005c8471
    LEA EAX,[ESP + 0x28]                ; 005c8476
    PUSH EAX                            ; 005c847a
    LEA EAX,[ESP + 0x4]                 ; 005c847b
    XOR EDX,EDX                         ; 005c847f
    PUSH EAX                            ; 005c8481
    MOV word ptr [ESP + 0x26],DX        ; 005c8482
    MOV word ptr [ESP + 0x16],DX        ; 005c8487
    CALL dword ptr CS:[0x5d065c]        ; 005c848c
    LEA EAX,[ESP + 0x20]                ; 005c8493
    PUSH EAX                            ; 005c8497
    LEA EAX,[ESP + 0x2c]                ; 005c8498
    PUSH EAX                            ; 005c849c
    CALL dword ptr CS:[0x5d05fc]        ; 005c849d
    LEA EAX,[ESP + 0x28]                ; 005c84a4
    PUSH EAX                            ; 005c84a8
    LEA EAX,[ESP + 0x14]                ; 005c84a9
    PUSH EAX                            ; 005c84ad
    CALL dword ptr CS:[0x5d065c]        ; 005c84ae
    LEA EAX,[ESP + 0x40]                ; 005c84b5
    PUSH EAX                            ; 005c84b9
    LEA EAX,[ESP + 0x2c]                ; 005c84ba
    PUSH EAX                            ; 005c84be
    CALL dword ptr CS:[0x5d05fc]        ; 005c84bf
    LEA EAX,[ESP + 0x20]                ; 005c84c6
    PUSH EAX                            ; 005c84ca
    LEA EAX,[ESP + 0x44]                ; 005c84cb
    PUSH EAX                            ; 005c84cf
    LEA EAX,[ESP + 0x38]                ; 005c84d0
    PUSH EAX                            ; 005c84d4
    PUSH ESI                            ; 005c84d5
    CALL dword ptr CS:[0x5d0644]        ; 005c84d6
    TEST EAX,EAX                        ; 005c84dd
    JNZ 0x005c84f5                      ; 005c84df
        ;   XREF to: 005c84f5 (CONDITIONAL_JUMP)  ; LAB_005c84f5
    PUSH ESI                            ; 005c84e1
    CALL dword ptr CS:[0x5d051c]        ; 005c84e2
    CALL crt_unknown.c_FUN_005c862c     ; 005c84e9
        ;   XREF to: 005c862c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c862c()
    ADD ESP,0x48                        ; 005c84ee
    POP EDI                             ; 005c84f1
    POP ESI                             ; 005c84f2
    POP EBX                             ; 005c84f3
    RET                                 ; 005c84f4
    PUSH ESI                            ; 005c84f5
        ;   Label: LAB_005c84f5
    CALL dword ptr CS:[0x5d051c]        ; 005c84f6
    XOR EAX,EAX                         ; 005c84fd
    ADD ESP,0x48                        ; 005c84ff
        ;   Label: LAB_005c84ff
    POP EDI                             ; 005c8502
    POP ESI                             ; 005c8503
    POP EBX                             ; 005c8504
    RET                                 ; 005c8505

