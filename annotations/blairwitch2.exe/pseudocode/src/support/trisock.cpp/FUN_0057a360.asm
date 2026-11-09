; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 support_trisock_cpp_FUN_0057a360(char *param_1,char *param_2,undefined2 *param_3,char *param_4,int param_5)
;
;
; XREF[1]:
;   support_trisock.cpp_FUN_0057ac2e at 0057ac79
;
; Called Functions:
;   crt_stdio.c_sscanf_FUN_005ba8cc
;   crt_string.c__strnicmp_FUN_005b8da0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057a360
        ;   Label: support_trisock.cpp_FUN_0057a360
    PUSH ESI                            ; 0057a361
    PUSH EDI                            ; 0057a362
    PUSH EBP                            ; 0057a363
    SUB ESP,0x8                         ; 0057a364
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0057a367
    MOV ESI,dword ptr [ESP + 0x20]      ; 0057a36b
    MOV EDI,dword ptr [ESP + 0x24]      ; 0057a36f
    MOV EBP,dword ptr [ESP + 0x28]      ; 0057a373
    PUSH 0x5                            ; 0057a377
    MOV byte ptr [ESI],0x0              ; 0057a379
    PUSH 0x5ed2ed                       ; 0057a37c
    MOV byte ptr [EBP],0x0              ; 0057a381
    PUSH EBX                            ; 0057a385
    MOV word ptr [EDI],0x50             ; 0057a386
    CALL crt_string.c__strnicmp_FUN_005b8da0 ; 0057a38b
        ;   XREF to: 005b8da0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005b8da0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0057a390
    TEST EAX,EAX                        ; 0057a393
    JNZ 0x0057a39a                      ; 0057a395
        ;   XREF to: 0057a39a (CONDITIONAL_JUMP)  ; LAB_0057a39a
    ADD EBX,0x5                         ; 0057a397
    PUSH 0x2                            ; 0057a39a
        ;   Label: LAB_0057a39a
    PUSH 0x5ed2f3                       ; 0057a39c
    PUSH EBX                            ; 0057a3a1
    CALL crt_string.c__strnicmp_FUN_005b8da0 ; 0057a3a2
        ;   XREF to: 005b8da0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005b8da0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0057a3a7
    TEST EAX,EAX                        ; 0057a3aa
    JNZ 0x0057a3b1                      ; 0057a3ac
        ;   XREF to: 0057a3b1 (CONDITIONAL_JUMP)  ; LAB_0057a3b1
    ADD EBX,0x2                         ; 0057a3ae
    MOV DL,byte ptr [EBX]               ; 0057a3b1
        ;   Label: LAB_0057a3b1
    XOR EAX,EAX                         ; 0057a3b3
    TEST DL,DL                          ; 0057a3b5
    JZ 0x0057a3c2                       ; 0057a3b7
        ;   XREF to: 0057a3c2 (CONDITIONAL_JUMP)  ; LAB_0057a3c2
    MOV EDX,ESI                         ; 0057a3b9
    MOV CH,byte ptr [EBX]               ; 0057a3bb
        ;   Label: LAB_0057a3bb
    CMP CH,0x3a                         ; 0057a3bd
    JNZ 0x0057a3ec                      ; 0057a3c0
        ;   XREF to: 0057a3ec (CONDITIONAL_JUMP)  ; LAB_0057a3ec
    MOV byte ptr [ESI + EAX*0x1],0x0    ; 0057a3c2
        ;   Label: LAB_0057a3c2
    CMP byte ptr [EBX],0x3a             ; 0057a3c6
    JZ 0x0057a405                       ; 0057a3c9
        ;   XREF to: 0057a405 (CONDITIONAL_JUMP)  ; LAB_0057a405
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0057a3cb
        ;   Label: LAB_0057a3cb
    MOV EDX,EBP                         ; 0057a3cf
    XOR EAX,EAX                         ; 0057a3d1
    DEC EDI                             ; 0057a3d3
    MOV CL,byte ptr [EBX]               ; 0057a3d4
        ;   Label: LAB_0057a3d4
    LEA ESI,[EAX + 0x1]                 ; 0057a3d6
    TEST CL,CL                          ; 0057a3d9
    JZ 0x0057a45c                       ; 0057a3db
        ;   XREF to: 0057a45c (CONDITIONAL_JUMP)  ; LAB_0057a45c
    CMP EAX,EDI                         ; 0057a3e1
    JL 0x0057a450                       ; 0057a3e3
        ;   XREF to: 0057a450 (CONDITIONAL_JUMP)  ; LAB_0057a450
    INC EBX                             ; 0057a3e9
    JMP 0x0057a3d4                      ; 0057a3ea
        ;   XREF to: 0057a3d4 (UNCONDITIONAL_JUMP)  ; LAB_0057a3d4
    CMP CH,0x2f                         ; 0057a3ec
        ;   Label: LAB_0057a3ec
    JZ 0x0057a3c2                       ; 0057a3ef
        ;   XREF to: 0057a3c2 (CONDITIONAL_JUMP)  ; LAB_0057a3c2
    CMP EAX,0x7f                        ; 0057a3f1
    JGE 0x0057a3fb                      ; 0057a3f4
        ;   XREF to: 0057a3fb (CONDITIONAL_JUMP)  ; LAB_0057a3fb
    INC EDX                             ; 0057a3f6
    INC EAX                             ; 0057a3f7
    MOV byte ptr [EDX + -0x1],CH        ; 0057a3f8
    MOV CL,byte ptr [EBX + 0x1]         ; 0057a3fb
        ;   Label: LAB_0057a3fb
    INC EBX                             ; 0057a3fe
    TEST CL,CL                          ; 0057a3ff
    JNZ 0x0057a3bb                      ; 0057a401
        ;   XREF to: 0057a3bb (CONDITIONAL_JUMP)  ; LAB_0057a3bb
    JMP 0x0057a3c2                      ; 0057a403
        ;   XREF to: 0057a3c2 (UNCONDITIONAL_JUMP)  ; LAB_0057a3c2
    MOV EAX,ESP                         ; 0057a405
        ;   Label: LAB_0057a405
    PUSH EAX                            ; 0057a407
    LEA EAX,[ESP + 0x8]                 ; 0057a408
    PUSH EAX                            ; 0057a40c
    PUSH 0x5ed2f6                       ; 0057a40d
    MOV EDX,0xffffffff                  ; 0057a412
    PUSH EBX                            ; 0057a417
    MOV dword ptr [ESP + 0x10],EDX      ; 0057a418
    CALL crt_stdio.c_sscanf_FUN_005ba8cc ; 0057a41c
        ;   XREF to: 005ba8cc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005ba8cc(char * str, char * format)
    ADD ESP,0x10                        ; 0057a421
    CMP dword ptr [ESP],0x2             ; 0057a424
    JL 0x0057a446                       ; 0057a428
        ;   XREF to: 0057a446 (CONDITIONAL_JUMP)  ; LAB_0057a446
    MOV ESI,dword ptr [ESP + 0x4]       ; 0057a42a
    TEST ESI,ESI                        ; 0057a42e
    JLE 0x0057a446                      ; 0057a430
        ;   XREF to: 0057a446 (CONDITIONAL_JUMP)  ; LAB_0057a446
    CMP ESI,0xffff                      ; 0057a432
    JG 0x0057a446                       ; 0057a438
        ;   XREF to: 0057a446 (CONDITIONAL_JUMP)  ; LAB_0057a446
    MOV EAX,dword ptr [ESP + 0x4]       ; 0057a43a
    MOV word ptr [EDI],AX               ; 0057a43e
    ADD EBX,dword ptr [ESP]             ; 0057a441
    JMP 0x0057a3cb                      ; 0057a444
        ;   XREF to: 0057a3cb (UNCONDITIONAL_JUMP)  ; LAB_0057a3cb
    XOR EAX,EAX                         ; 0057a446
        ;   Label: LAB_0057a446
    ADD ESP,0x8                         ; 0057a448
    POP EBP                             ; 0057a44b
    POP EDI                             ; 0057a44c
    POP ESI                             ; 0057a44d
    POP EBX                             ; 0057a44e
    RET                                 ; 0057a44f
    INC EDX                             ; 0057a450
        ;   Label: LAB_0057a450
    MOV EAX,ESI                         ; 0057a451
    MOV byte ptr [EDX + -0x1],CL        ; 0057a453
    INC EBX                             ; 0057a456
    JMP 0x0057a3d4                      ; 0057a457
        ;   XREF to: 0057a3d4 (UNCONDITIONAL_JUMP)  ; LAB_0057a3d4
    TEST EAX,EAX                        ; 0057a45c
        ;   Label: LAB_0057a45c
    JNZ 0x0057a465                      ; 0057a45e
        ;   XREF to: 0057a465 (CONDITIONAL_JUMP)  ; LAB_0057a465
    MOV EAX,ESI                         ; 0057a460
    MOV byte ptr [EDX],0x2f             ; 0057a462
    MOV byte ptr [EAX + EBP*0x1],0x0    ; 0057a465
        ;   Label: LAB_0057a465
    MOV EAX,0x1                         ; 0057a469
    ADD ESP,0x8                         ; 0057a46e
    POP EBP                             ; 0057a471
    POP EDI                             ; 0057a472
    POP ESI                             ; 0057a473
    POP EBX                             ; 0057a474
    RET                                 ; 0057a475

