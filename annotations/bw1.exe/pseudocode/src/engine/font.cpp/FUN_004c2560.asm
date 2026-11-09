; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_font_cpp_FUN_004c2560(uint param_1,uint param_2,uint param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_01c4e9d4
;   undefined4 DAT_01c4e9d8
;   undefined4 DAT_01c4e9e0
;   undefined4 DAT_01c4e9e4
;   undefined4 DAT_01c4e9ec
;   undefined4 DAT_01c4e9f0
;   undefined4 DAT_01cc8cd2
;   undefined4 DAT_01cc8cd4
;   undefined4 DAT_01cc8cd8
;   undefined4 DAT_01cc8cdc
;   undefined4 DAT_01cc8ce0
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c2560
        ;   Label: engine_font.cpp_FUN_004c2560
    PUSH ESI                            ; 004c2561
    PUSH EDI                            ; 004c2562
    PUSH EBP                            ; 004c2563
    SUB ESP,0xc                         ; 004c2564
    MOV EDI,dword ptr [ESP + 0x20]      ; 004c2567
    MOV EBX,dword ptr [ESP + 0x24]      ; 004c256b
    MOV ESI,dword ptr [ESP + 0x28]      ; 004c256f
    MOV EDX,dword ptr [0x0061b4a0]      ; 004c2573 | DAT_0061b4a0
    CMP EDX,0x8                         ; 004c2579
    JZ 0x004c25be                       ; 004c257c
        ;   XREF to: 004c25be (CONDITIONAL_JUMP)  ; LAB_004c25be
    CMP EDX,0x10                        ; 004c257e
    JZ 0x004c25d8                       ; 004c2581
        ;   XREF to: 004c25d8 (CONDITIONAL_JUMP)  ; LAB_004c25d8
    CMP EDX,0x20                        ; 004c2583
    JNZ 0x004c265a                      ; 004c2586
        ;   XREF to: 004c265a (CONDITIONAL_JUMP)  ; LAB_004c265a
    CMP EDX,EDX                         ; 004c258c
    JNZ 0x004c2647                      ; 004c258e
        ;   XREF to: 004c2647 (CONDITIONAL_JUMP)  ; LAB_004c2647
    MOV CL,byte ptr [0x01c4e9d4]        ; 004c2594 | DAT_01c4e9d4
    MOV EAX,EDI                         ; 004c259a
    MOV EDX,EBX                         ; 004c259c
    SHL EAX,CL                          ; 004c259e
    MOV CL,byte ptr [0x01c4e9e0]        ; 004c25a0 | DAT_01c4e9e0
    SHL EDX,CL                          ; 004c25a6
    MOV CL,byte ptr [0x01c4e9ec]        ; 004c25a8 | DAT_01c4e9ec
    OR EAX,EDX                          ; 004c25ae
    MOV EDX,ESI                         ; 004c25b0
    SHL EDX,CL                          ; 004c25b2
    MOV ECX,EDX                         ; 004c25b4
    OR ECX,EAX                          ; 004c25b6
    MOV dword ptr [0x01cc8cd4],ECX      ; 004c25b8 | DAT_01cc8cd4
        ;   Label: LAB_004c25b8
    MOV dword ptr [0x01cc8cdc],EBX      ; 004c25be | DAT_01cc8cdc
        ;   Label: LAB_004c25be
    MOV dword ptr [0x01cc8ce0],ESI      ; 004c25c4 | DAT_01cc8ce0
    MOV dword ptr [0x01cc8cd8],EDI      ; 004c25ca | DAT_01cc8cd8
    ADD ESP,0xc                         ; 004c25d0
    POP EBP                             ; 004c25d3
    POP EDI                             ; 004c25d4
    POP ESI                             ; 004c25d5
    POP EBX                             ; 004c25d6
    RET                                 ; 004c25d7
    MOV EBP,dword ptr [0x01c4e9d8]      ; 004c25d8 | DAT_01c4e9d8
        ;   Label: LAB_004c25d8
    MOV EAX,EDI                         ; 004c25de
    XOR EDX,EDX                         ; 004c25e0
    DIV EBP                             ; 004c25e2
    MOV dword ptr [ESP],EDI             ; 004c25e4
    MOV ECX,dword ptr [0x01c4e9e4]      ; 004c25e7 | DAT_01c4e9e4
    MOV dword ptr [ESP],EAX             ; 004c25ed
    XOR EDX,EDX                         ; 004c25f0
    MOV EAX,EBX                         ; 004c25f2
    DIV ECX                             ; 004c25f4
    MOV dword ptr [ESP + 0x4],EBX       ; 004c25f6
    MOV EBP,dword ptr [0x01c4e9f0]      ; 004c25fa | DAT_01c4e9f0
    MOV dword ptr [ESP + 0x4],EAX       ; 004c2600
    XOR EDX,EDX                         ; 004c2604
    MOV EAX,ESI                         ; 004c2606
    DIV EBP                             ; 004c2608
    MOV dword ptr [ESP + 0x8],ESI       ; 004c260a
    MOV CL,byte ptr [0x01c4e9d4]        ; 004c260e | DAT_01c4e9d4
    MOV dword ptr [ESP + 0x8],EAX       ; 004c2614
    MOV EAX,dword ptr [ESP]             ; 004c2618
    MOV EDX,dword ptr [ESP + 0x4]       ; 004c261b
    SHL EAX,CL                          ; 004c261f
    MOV CL,byte ptr [0x01c4e9e0]        ; 004c2621 | DAT_01c4e9e0
    SHL EDX,CL                          ; 004c2627
    MOV CL,byte ptr [0x01c4e9ec]        ; 004c2629 | DAT_01c4e9ec
    OR EAX,EDX                          ; 004c262f
    MOV EDX,dword ptr [ESP + 0x8]       ; 004c2631
    SHL EDX,CL                          ; 004c2635
    MOV ECX,EDX                         ; 004c2637
    OR ECX,EAX                          ; 004c2639
    MOV word ptr [0x01cc8cd2],CX        ; 004c263b | DAT_01cc8cd2
    JMP 0x004c25be                      ; 004c2642
        ;   XREF to: 004c25be (UNCONDITIONAL_JUMP)  ; LAB_004c25be
    MOV EAX,EBX                         ; 004c2647
        ;   Label: LAB_004c2647
    MOV ECX,EDI                         ; 004c2649
    SHL EAX,0x8                         ; 004c264b
    SHL ECX,0x10                        ; 004c264e
    OR ECX,EAX                          ; 004c2651
    OR ECX,ESI                          ; 004c2653
    JMP 0x004c25b8                      ; 004c2655
        ;   XREF to: 004c25b8 (UNCONDITIONAL_JUMP)  ; LAB_004c25b8
    MOV EAX,0x5e0a5e                    ; 004c265a
        ;   Label: LAB_004c265a
    MOV EDX,0x4c0                       ; 004c265f
    PUSH 0x5e0a71                       ; 004c2664
    MOV [0x01d1d400],EAX                ; 004c2669 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 004c266e | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004c2674
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004c2679
    JMP 0x004c25be                      ; 004c267c
        ;   XREF to: 004c25be (UNCONDITIONAL_JUMP)  ; LAB_004c25be

