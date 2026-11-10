; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_path_cpp_FUN_0050c57e(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005fba18
;   undefined4 DAT_01ec183c
;   undefined4 DAT_01ec1840
;   undefined4 DAT_01ec1844
;   undefined4 DAT_01ec1848
;
; Called Functions:
;   crt_unknown.c_sprintf_FUN_005a28c0
;   engine_2d.c_drawText_FUN_00401fe0
;
; *****************************************************************************

section .text

    MOV EDX,EDX                         ; 0050c57e
        ;   Label: core_path.cpp_FUN_0050c57e
    PUSH EBX                            ; 0050c580
    PUSH ESI                            ; 0050c581
    PUSH EDI                            ; 0050c582
    PUSH EBP                            ; 0050c583
    SUB ESP,0x10c                       ; 0050c584
    XOR EBP,EBP                         ; 0050c58a
    MOV ECX,0x441                       ; 0050c58c
    MOV dword ptr [ESP + 0x104],EBP     ; 0050c591
    MOV dword ptr [ESP + 0x108],ECX     ; 0050c598
    MOV EAX,dword ptr [ESP + 0x108]     ; 0050c59f
        ;   Label: LAB_0050c59f
    MOV EDI,dword ptr [ESP + 0x104]     ; 0050c5a6
    XOR ESI,ESI                         ; 0050c5ad
    XOR EBX,EBX                         ; 0050c5af
    MOV dword ptr [ESP + 0x100],EAX     ; 0050c5b1
    XOR EAX,EAX                         ; 0050c5b8
        ;   Label: LAB_0050c5b8
    MOV AL,byte ptr [EDI + 0x1ed02b8]   ; 0050c5ba
    MOV EDX,dword ptr [EAX*0x4 + 0x6036ac] ; 0050c5c0
    PUSH EDX                            ; 0050c5c7
    PUSH 0x5cb8e8                       ; 0050c5c8
    LEA EAX,[ESP + 0x8]                 ; 0050c5cd
    PUSH EAX                            ; 0050c5d1
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0050c5d2
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    MOV ECX,dword ptr [0x01ec183c]      ; 0050c5d7 | DAT_01ec183c
    ADD ESP,0xc                         ; 0050c5dd
    CMP EBX,ECX                         ; 0050c5e0
    JNZ 0x0050c5f0                      ; 0050c5e2
        ;   XREF to: 0050c5f0 (CONDITIONAL_JUMP)  ; LAB_0050c5f0
    CMP EBP,dword ptr [0x01ec1840]      ; 0050c5e4 | DAT_01ec1840
    JNZ 0x0050c5f0                      ; 0050c5ea
        ;   XREF to: 0050c5f0 (CONDITIONAL_JUMP)  ; LAB_0050c5f0
    MOV byte ptr [ESP],0x73             ; 0050c5ec
    CMP EBX,dword ptr [0x01ec1844]      ; 0050c5f0 | DAT_01ec1844
        ;   Label: LAB_0050c5f0
    JNZ 0x0050c604                      ; 0050c5f6
        ;   XREF to: 0050c604 (CONDITIONAL_JUMP)  ; LAB_0050c604
    CMP EBP,dword ptr [0x01ec1848]      ; 0050c5f8 | DAT_01ec1848
    JNZ 0x0050c604                      ; 0050c5fe
        ;   XREF to: 0050c604 (CONDITIONAL_JUMP)  ; LAB_0050c604
    MOV byte ptr [ESP],0x64             ; 0050c600
    MOV EAX,dword ptr [ESP + 0x100]     ; 0050c604
        ;   Label: LAB_0050c604
    PUSH EAX                            ; 0050c60b
    MOV EAX,[0x005fba18]                ; 0050c60c | DAT_005fba18
    MOV EDX,EAX                         ; 0050c611
    SAR EDX,0x1f                        ; 0050c613
    SUB EAX,EDX                         ; 0050c616
    SAR EAX,0x1                         ; 0050c618
    ADD EAX,ESI                         ; 0050c61a
    PUSH EAX                            ; 0050c61c
    LEA EAX,[ESP + 0x8]                 ; 0050c61d
    INC EDI                             ; 0050c621
    PUSH EAX                            ; 0050c622
    INC EBX                             ; 0050c623
    ADD ESI,0xe                         ; 0050c624
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 0050c627
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0050c62c
    CMP EBX,0x64                        ; 0050c62f
    JL 0x0050c5b8                       ; 0050c632
        ;   XREF to: 0050c5b8 (CONDITIONAL_JUMP)  ; LAB_0050c5b8
    MOV ECX,dword ptr [ESP + 0x108]     ; 0050c634
    MOV EDX,dword ptr [ESP + 0x104]     ; 0050c63b
    INC EBP                             ; 0050c642
    SUB ECX,0xb                         ; 0050c643
    ADD EDX,0x64                        ; 0050c646
    MOV dword ptr [ESP + 0x108],ECX     ; 0050c649
    MOV dword ptr [ESP + 0x104],EDX     ; 0050c650
    CMP EBP,0x64                        ; 0050c657
    JL 0x0050c59f                       ; 0050c65a
        ;   XREF to: 0050c59f (CONDITIONAL_JUMP)  ; LAB_0050c59f
    ADD ESP,0x10c                       ; 0050c660
    POP EBP                             ; 0050c666
    POP EDI                             ; 0050c667
    POP ESI                             ; 0050c668
    POP EBX                             ; 0050c669
    LEA EAX,[EAX]                       ; 0050c66a
    RET                                 ; 0050c670

