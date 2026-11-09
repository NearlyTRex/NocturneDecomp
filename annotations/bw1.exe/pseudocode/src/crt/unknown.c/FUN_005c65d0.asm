; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; DWORD crt_unknown_c_FUN_005c65d0(uint param_1,LPVOID param_2,DWORD param_3)
;
;
; XREF[2]:
;   crt_stdio.c_fread_FUN_005c0b10 at 005c0c29
;   crt_unknown.c_FUN_005c0630 at 005c06bf
;
; Referenced Globals:
;   void* PTR_ReadFile_005d0618 = 001d10fa
;   void* PTR_crt_unknown.c_FUN_005c50d4_00626600 = 005c50d4
;   void* PTR_crt_unknown.c_FUN_005c50d4_00626604 = 005c50d4
;   undefined4 DAT_00626774
;   undefined4 DAT_0062679c
;   undefined4 DAT_006267e0
;   undefined4 DAT_00626838
;
; Called Functions:
;   crt_errno.c_setErrno_FUN_005c6450
;   crt_unknown.c_FUN_005c50d4
;   crt_unknown.c_FUN_005c862c
;   ReadFile
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c65d0
        ;   Label: crt_unknown.c_FUN_005c65d0
    PUSH ESI                            ; 005c65d1
    PUSH EDI                            ; 005c65d2
    PUSH EBP                            ; 005c65d3
    SUB ESP,0x4                         ; 005c65d4
    MOV EBX,dword ptr [ESP + 0x18]      ; 005c65d7
    TEST EBX,EBX                        ; 005c65db
    JL 0x005c65e7                       ; 005c65dd
        ;   XREF to: 005c65e7 (CONDITIONAL_JUMP)  ; LAB_005c65e7
    CMP EBX,dword ptr [0x006267e0]      ; 005c65df | DAT_006267e0
    JBE 0x005c65fb                      ; 005c65e5
        ;   XREF to: 005c65fb (CONDITIONAL_JUMP)  ; LAB_005c65fb
    PUSH 0x4                            ; 005c65e7
        ;   Label: LAB_005c65e7
    CALL crt_errno.c_setErrno_FUN_005c6450 ; 005c65e9
        ;   XREF to: 005c6450 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005c6450(int error_code)
    MOV EAX,0xffffffff                  ; 005c65ee
    ADD ESP,0x4                         ; 005c65f3
    JMP 0x005c6691                      ; 005c65f6
        ;   XREF to: 005c6691 (UNCONDITIONAL_JUMP)  ; LAB_005c6691
    PUSH EBX                            ; 005c65fb
        ;   Label: LAB_005c65fb
    CALL dword ptr [0x00626600]         ; 005c65fc | PTR_crt_unknown.c_FUN_005c50d4_00626600
    MOV ECX,dword ptr [0x0062679c]      ; 005c6602 | DAT_0062679c
    ADD ESP,0x4                         ; 005c6608
    TEST ECX,ECX                        ; 005c660b
    JZ 0x005c6647                       ; 005c660d
        ;   XREF to: 005c6647 (CONDITIONAL_JUMP)  ; LAB_005c6647
    PUSH EBX                            ; 005c660f
    CALL dword ptr [0x00626774]         ; 005c6610 | DAT_00626774
    ADD ESP,0x4                         ; 005c6616
    TEST EAX,EAX                        ; 005c6619
    JZ 0x005c6647                       ; 005c661b
        ;   XREF to: 005c6647 (CONDITIONAL_JUMP)  ; LAB_005c6647
    MOV EDX,dword ptr [ESP + 0x20]      ; 005c661d
    PUSH EDX                            ; 005c6621
    MOV ECX,dword ptr [ESP + 0x20]      ; 005c6622
    PUSH ECX                            ; 005c6626
    PUSH EAX                            ; 005c6627
    CALL dword ptr [0x0062679c]         ; 005c6628 | DAT_0062679c
    ADD ESP,0xc                         ; 005c662e
    PUSH EBX                            ; 005c6631
    MOV ESI,EAX                         ; 005c6632
    CALL dword ptr [0x00626604]         ; 005c6634 | PTR_crt_unknown.c_FUN_005c50d4_00626604
    ADD ESP,0x4                         ; 005c663a
    MOV EAX,ESI                         ; 005c663d
    ADD ESP,0x4                         ; 005c663f
    POP EBP                             ; 005c6642
    POP EDI                             ; 005c6643
    POP ESI                             ; 005c6644
    POP EBX                             ; 005c6645
    RET                                 ; 005c6646
    PUSH 0x0                            ; 005c6647
        ;   Label: LAB_005c6647
    LEA EAX,[ESP + 0x4]                 ; 005c6649
    PUSH EAX                            ; 005c664d
    MOV EDI,dword ptr [ESP + 0x28]      ; 005c664e
    PUSH EDI                            ; 005c6652
    MOV EBP,dword ptr [ESP + 0x28]      ; 005c6653
    MOV ESI,dword ptr [0x00626838]      ; 005c6657 | DAT_00626838
    PUSH EBP                            ; 005c665d
    MOV ESI,dword ptr [ESI + EBX*0x4]   ; 005c665e
    PUSH ESI                            ; 005c6661
    CALL dword ptr CS:[0x5d0618]        ; 005c6662 | PTR_ReadFile_005d0618
    TEST EAX,EAX                        ; 005c6669
    JNZ 0x005c6684                      ; 005c666b
        ;   XREF to: 005c6684 (CONDITIONAL_JUMP)  ; LAB_005c6684
    PUSH EBX                            ; 005c666d
    CALL dword ptr [0x00626604]         ; 005c666e | PTR_crt_unknown.c_FUN_005c50d4_00626604
    ADD ESP,0x4                         ; 005c6674
    CALL crt_unknown.c_FUN_005c862c     ; 005c6677
        ;   XREF to: 005c862c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c862c()
    ADD ESP,0x4                         ; 005c667c
    POP EBP                             ; 005c667f
    POP EDI                             ; 005c6680
    POP ESI                             ; 005c6681
    POP EBX                             ; 005c6682
    RET                                 ; 005c6683
    PUSH EBX                            ; 005c6684
        ;   Label: LAB_005c6684
    CALL dword ptr [0x00626604]         ; 005c6685 | PTR_crt_unknown.c_FUN_005c50d4_00626604
    ADD ESP,0x4                         ; 005c668b
    MOV EAX,dword ptr [ESP]             ; 005c668e
    ADD ESP,0x4                         ; 005c6691
        ;   Label: LAB_005c6691
    POP EBP                             ; 005c6694
    POP EDI                             ; 005c6695
    POP ESI                             ; 005c6696
    POP EBX                             ; 005c6697
    RET                                 ; 005c6698

