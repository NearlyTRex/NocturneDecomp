; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005a9768(uint param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005a9818 at 005a9822
;
; Referenced Globals:
;   void* PTR_VirtualAlloc_005b3674 = 001b42a4
;   undefined4 DAT_0060793c
;   undefined4 DAT_00607e10
;
; Called Functions:
;   crt_unknown.c_FUN_005a3780
;   crt_unknown.c_FUN_005a96f0
;   crt_unknown.c_FUN_005a982c
;   VirtualAlloc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a9768
        ;   Label: crt_unknown.c_FUN_005a9768
    PUSH ESI                            ; 005a9769
    PUSH EDI                            ; 005a976a
    CMP dword ptr [0x00607e10],0x0      ; 005a976b | DAT_00607e10
    JNZ 0x005a977a                      ; 005a9772
        ;   XREF to: 005a977a (CONDITIONAL_JUMP)  ; LAB_005a977a
    XOR EAX,EAX                         ; 005a9774
    POP EDI                             ; 005a9776
    POP ESI                             ; 005a9777
    POP EBX                             ; 005a9778
    RET                                 ; 005a9779
    CMP dword ptr [0x0060793c],-0x2     ; 005a977a | DAT_0060793c
        ;   Label: LAB_005a977a
    JNZ 0x005a9789                      ; 005a9781
        ;   XREF to: 005a9789 (CONDITIONAL_JUMP)  ; LAB_005a9789
    XOR EAX,EAX                         ; 005a9783
    POP EDI                             ; 005a9785
    POP ESI                             ; 005a9786
    POP EBX                             ; 005a9787
    RET                                 ; 005a9788
    LEA EAX,[ESP + 0x10]                ; 005a9789
        ;   Label: LAB_005a9789
    PUSH EAX                            ; 005a978d
    CALL crt_unknown.c_FUN_005a982c     ; 005a978e
        ;   XREF to: 005a982c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a982c()
    ADD ESP,0x4                         ; 005a9793
    TEST EAX,EAX                        ; 005a9796
    JZ 0x005a9813                       ; 005a9798
        ;   XREF to: 005a9813 (CONDITIONAL_JUMP)  ; LAB_005a9813
    PUSH 0x40                           ; 005a979e
    PUSH 0x1000                         ; 005a97a0
    MOV ECX,dword ptr [ESP + 0x18]      ; 005a97a5
    PUSH ECX                            ; 005a97a9
    PUSH 0x0                            ; 005a97aa
    CALL dword ptr CS:[0x5b3674]        ; 005a97ac | PTR_VirtualAlloc_005b3674
    MOV EBX,EAX                         ; 005a97b3
    TEST EAX,EAX                        ; 005a97b5
    JZ 0x005a9813                       ; 005a97b7
        ;   XREF to: 005a9813 (CONDITIONAL_JUMP)  ; LAB_005a9813
    MOV EAX,dword ptr [ESP + 0x10]      ; 005a97b9
    MOV ESI,dword ptr [ESP + 0x10]      ; 005a97bd
    SUB EAX,0x4                         ; 005a97c1
    CMP EAX,ESI                         ; 005a97c4
    JBE 0x005a97ce                      ; 005a97c6
        ;   XREF to: 005a97ce (CONDITIONAL_JUMP)  ; LAB_005a97ce
    XOR EAX,EAX                         ; 005a97c8
    POP EDI                             ; 005a97ca
    POP ESI                             ; 005a97cb
    POP EBX                             ; 005a97cc
    RET                                 ; 005a97cd
    MOV dword ptr [ESP + 0x10],EAX      ; 005a97ce
        ;   Label: LAB_005a97ce
    CMP EAX,0x38                        ; 005a97d2
    JNC 0x005a97dd                      ; 005a97d5
        ;   XREF to: 005a97dd (CONDITIONAL_JUMP)  ; LAB_005a97dd
    XOR EAX,EAX                         ; 005a97d7
    POP EDI                             ; 005a97d9
    POP ESI                             ; 005a97da
    POP EBX                             ; 005a97db
    RET                                 ; 005a97dc
    PUSH EBX                            ; 005a97dd
        ;   Label: LAB_005a97dd
    MOV dword ptr [EBX],EAX             ; 005a97de
    CALL crt_unknown.c_FUN_005a96f0     ; 005a97e0
        ;   XREF to: 005a96f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a96f0()
    MOV EDX,EAX                         ; 005a97e5
    ADD ESP,0x4                         ; 005a97e7
    MOV EAX,dword ptr [EAX]             ; 005a97ea
    MOV dword ptr [ESP + 0x10],EAX      ; 005a97ec
    OR AL,0x1                           ; 005a97f0
    MOV dword ptr [EDX],EAX             ; 005a97f2
    ADD EDX,0x4                         ; 005a97f4
    MOV EDI,dword ptr [EBX + 0x18]      ; 005a97f7
    MOV dword ptr [EBX + 0x14],0x0      ; 005a97fa
    INC EDI                             ; 005a9801
    PUSH EDX                            ; 005a9802
    MOV dword ptr [EBX + 0x18],EDI      ; 005a9803
    CALL crt_unknown.c_FUN_005a3780     ; 005a9806
        ;   XREF to: 005a3780 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3780()
    MOV EAX,0x1                         ; 005a980b
    ADD ESP,0x4                         ; 005a9810
    POP EDI                             ; 005a9813
        ;   Label: LAB_005a9813
    POP ESI                             ; 005a9814
    POP EBX                             ; 005a9815
    RET                                 ; 005a9816

