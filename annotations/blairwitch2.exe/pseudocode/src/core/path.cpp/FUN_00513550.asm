; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_path_cpp_FUN_00513550(void)
;
;
; Referenced Globals:
;   undefined4 DAT_006141b8
;   undefined4 DAT_01e501fc
;   undefined4 DAT_01e50200
;   undefined4 DAT_01e50204
;   undefined4 DAT_01e50208
;
; Called Functions:
;   crt_unknown.c_sprintf_FUN_005b7790
;   engine_2d.c_drawText_FUN_00401fe0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00513550
        ;   Label: core_path.cpp_FUN_00513550
    PUSH ESI                            ; 00513551
    PUSH EDI                            ; 00513552
    PUSH EBP                            ; 00513553
    SUB ESP,0x10c                       ; 00513554
    XOR EBP,EBP                         ; 0051355a
    MOV ECX,0x441                       ; 0051355c
    MOV dword ptr [ESP + 0x104],EBP     ; 00513561
    MOV dword ptr [ESP + 0x108],ECX     ; 00513568
    MOV EAX,dword ptr [ESP + 0x108]     ; 0051356f
        ;   Label: LAB_0051356f
    MOV EDI,dword ptr [ESP + 0x104]     ; 00513576
    XOR ESI,ESI                         ; 0051357d
    XOR EBX,EBX                         ; 0051357f
    MOV dword ptr [ESP + 0x100],EAX     ; 00513581
    XOR EAX,EAX                         ; 00513588
        ;   Label: LAB_00513588
    MOV AL,byte ptr [EDI + 0x1e5ec78]   ; 0051358a
    MOV EDX,dword ptr [EAX*0x4 + 0x61b370] ; 00513590
    PUSH EDX                            ; 00513597
    PUSH 0x5e1825                       ; 00513598
    LEA EAX,[ESP + 0x8]                 ; 0051359d
    PUSH EAX                            ; 005135a1
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 005135a2
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    MOV ECX,dword ptr [0x01e501fc]      ; 005135a7 | DAT_01e501fc
    ADD ESP,0xc                         ; 005135ad
    CMP EBX,ECX                         ; 005135b0
    JNZ 0x005135c0                      ; 005135b2
        ;   XREF to: 005135c0 (CONDITIONAL_JUMP)  ; LAB_005135c0
    CMP EBP,dword ptr [0x01e50200]      ; 005135b4 | DAT_01e50200
    JNZ 0x005135c0                      ; 005135ba
        ;   XREF to: 005135c0 (CONDITIONAL_JUMP)  ; LAB_005135c0
    MOV byte ptr [ESP],0x73             ; 005135bc
    CMP EBX,dword ptr [0x01e50204]      ; 005135c0 | DAT_01e50204
        ;   Label: LAB_005135c0
    JNZ 0x005135d4                      ; 005135c6
        ;   XREF to: 005135d4 (CONDITIONAL_JUMP)  ; LAB_005135d4
    CMP EBP,dword ptr [0x01e50208]      ; 005135c8 | DAT_01e50208
    JNZ 0x005135d4                      ; 005135ce
        ;   XREF to: 005135d4 (CONDITIONAL_JUMP)  ; LAB_005135d4
    MOV byte ptr [ESP],0x64             ; 005135d0
    MOV EAX,dword ptr [ESP + 0x100]     ; 005135d4
        ;   Label: LAB_005135d4
    PUSH EAX                            ; 005135db
    MOV EAX,[0x006141b8]                ; 005135dc | DAT_006141b8
    MOV EDX,EAX                         ; 005135e1
    SAR EDX,0x1f                        ; 005135e3
    SUB EAX,EDX                         ; 005135e6
    SAR EAX,0x1                         ; 005135e8
    ADD EAX,ESI                         ; 005135ea
    PUSH EAX                            ; 005135ec
    LEA EAX,[ESP + 0x8]                 ; 005135ed
    INC EDI                             ; 005135f1
    PUSH EAX                            ; 005135f2
    INC EBX                             ; 005135f3
    ADD ESI,0xe                         ; 005135f4
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 005135f7
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 005135fc
    CMP EBX,0x64                        ; 005135ff
    JL 0x00513588                       ; 00513602
        ;   XREF to: 00513588 (CONDITIONAL_JUMP)  ; LAB_00513588
    MOV ECX,dword ptr [ESP + 0x108]     ; 00513604
    MOV EDX,dword ptr [ESP + 0x104]     ; 0051360b
    INC EBP                             ; 00513612
    SUB ECX,0xb                         ; 00513613
    ADD EDX,0x64                        ; 00513616
    MOV dword ptr [ESP + 0x108],ECX     ; 00513619
    MOV dword ptr [ESP + 0x104],EDX     ; 00513620
    CMP EBP,0x64                        ; 00513627
    JL 0x0051356f                       ; 0051362a
        ;   XREF to: 0051356f (CONDITIONAL_JUMP)  ; LAB_0051356f
    ADD ESP,0x10c                       ; 00513630
    POP EBP                             ; 00513636
    POP EDI                             ; 00513637
    POP ESI                             ; 00513638
    POP EBX                             ; 00513639
    LEA EAX,[EAX]                       ; 0051363a
    RET                                 ; 00513640

