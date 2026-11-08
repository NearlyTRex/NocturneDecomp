; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0043b570(int param_1,int param_2)
;
;
; XREF[3]:
;   FUN_0043b4c0 at 0043b4ec
;   FUN_004b5fd0 at 004b606d
;   FUN_0052e910 at 0052e91a
;
; Referenced Globals:
;   TerminatedCString s_core_dcamera_cpp_005ce256
;   TerminatedCString s_CDemonCamera_init_Unable_005ce26a
;   TerminatedCString s_core_dcamera_cpp_005ce29c
;   TerminatedCString s_CDemonCamera_init_Unable_005ce2b0
;   undefined4 DAT_01308800
;   undefined4 DAT_0146694c
;   undefined4 DAT_01466950
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_0043b730
;   FUN_004e4500
;   FUN_005b8580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043b570
        ;   Label: FUN_0043b570
    PUSH ESI                            ; 0043b571
    PUSH EBP                            ; 0043b572
    MOV EBX,dword ptr [ESP + 0x10]      ; 0043b573
    MOV ESI,dword ptr [ESP + 0x14]      ; 0043b577
    PUSH EBX                            ; 0043b57b
    CALL FUN_0043b730                   ; 0043b57c
        ;   XREF to: 0043b730 (UNCONDITIONAL_CALL)  ; undefined FUN_0043b730()
    LEA EDX,[ESI*0x4 + 0x0]             ; 0043b581
    MOV ECX,0x3                         ; 0043b588
    MOV EAX,EDX                         ; 0043b58d
    SAR EDX,0x1f                        ; 0043b58f
    IDIV ECX                            ; 0043b592
    ADD ESP,0x4                         ; 0043b594
    MOV dword ptr [0x01466950],ESI      ; 0043b597 | DAT_01466950
    MOV [0x0146694c],EAX                ; 0043b59d | DAT_0146694c
    CMP ESI,0x1e0                       ; 0043b5a2
    JLE 0x0043b5af                      ; 0043b5a8
        ;   XREF to: 0043b5af (CONDITIONAL_JUMP)  ; LAB_0043b5af
    MOV ESI,0x1e0                       ; 0043b5aa
    MOV dword ptr [EBX + 0x148],ESI     ; 0043b5af
        ;   Label: LAB_0043b5af
    LEA EDX,[ESI*0x4 + 0x0]             ; 0043b5b5
    MOV ECX,0x3                         ; 0043b5bc
    MOV EAX,EDX                         ; 0043b5c1
    SAR EDX,0x1f                        ; 0043b5c3
    IDIV ECX                            ; 0043b5c6
    MOV dword ptr [EBX + 0x14c],0x1     ; 0043b5c8
    MOV dword ptr [EBX + 0x144],EAX     ; 0043b5d2
    MOV EAX,dword ptr [EBX + 0x144]     ; 0043b5d8
    XOR EDX,EDX                         ; 0043b5de
    MOV dword ptr [EBX + 0x150],EAX     ; 0043b5e0
    MOV dword ptr [0x01308800],EDX      ; 0043b5e6 | DAT_01308800
    MOV EAX,dword ptr [EBX + 0x148]     ; 0043b5ec
    MOV ECX,dword ptr [EBX + 0x150]     ; 0043b5f2
    MOV dword ptr [EBX + 0x154],EAX     ; 0043b5f8
    CMP ECX,0x140                       ; 0043b5fe
    JLE 0x0043b65c                      ; 0043b604
        ;   XREF to: 0043b65c (CONDITIONAL_JUMP)  ; LAB_0043b65c
    PUSH EDI                            ; 0043b606
    MOV ECX,0x2                         ; 0043b607
    MOV EAX,dword ptr [EBX + 0x150]     ; 0043b60c
        ;   Label: LAB_0043b60c
    MOV EDX,EAX                         ; 0043b612
    SAR EDX,0x1f                        ; 0043b614
    IDIV ECX                            ; 0043b617
    MOV dword ptr [EBX + 0x150],EAX     ; 0043b619
    MOV EAX,dword ptr [EBX + 0x154]     ; 0043b61f
    MOV EDX,EAX                         ; 0043b625
    SAR EDX,0x1f                        ; 0043b627
    IDIV ECX                            ; 0043b62a
    MOV ESI,dword ptr [EBX + 0x14c]     ; 0043b62c
    MOV EDI,dword ptr [0x01308800]      ; 0043b632 | DAT_01308800
    ADD ESI,ESI                         ; 0043b638
    INC EDI                             ; 0043b63a
    MOV dword ptr [EBX + 0x14c],ESI     ; 0043b63b
    MOV dword ptr [0x01308800],EDI      ; 0043b641 | DAT_01308800
    MOV EBP,dword ptr [EBX + 0x150]     ; 0043b647
    MOV dword ptr [EBX + 0x154],EAX     ; 0043b64d
    CMP EBP,0x140                       ; 0043b653
    JG 0x0043b60c                       ; 0043b659
        ;   XREF to: 0043b60c (CONDITIONAL_JUMP)  ; LAB_0043b60c
    POP EDI                             ; 0043b65b
    MOV EDX,dword ptr [EBX + 0x144]     ; 0043b65c
        ;   Label: LAB_0043b65c
    IMUL EDX,dword ptr [EBX + 0x148]    ; 0043b662
    LEA EAX,[EDX*0x4 + 0x0]             ; 0043b669
    ADD EAX,0x1010                      ; 0043b670
    PUSH EAX                            ; 0043b675
    CALL FUN_005b8580                   ; 0043b676
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8580()
    ADD ESP,0x4                         ; 0043b67b
    MOV dword ptr [EBX + 0x160],EAX     ; 0043b67e
    TEST EAX,EAX                        ; 0043b684
    JNZ 0x0043b6ab                      ; 0043b686
        ;   XREF to: 0043b6ab (CONDITIONAL_JUMP)  ; LAB_0043b6ab
    MOV ECX,0x5ce256                    ; 0043b688 | = "..\\core\\dcamera.cpp"
    MOV ESI,0x246                       ; 0043b68d
    PUSH 0x5ce26a                       ; 0043b692 | = "CDemonCamera::init - Unable to alloc ..."
    MOV dword ptr [0x01d046a0],ECX      ; 0043b697 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 0043b69d | DAT_01d046a4
    CALL FUN_004e4500                   ; 0043b6a3
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 0043b6a8
    MOV EDX,dword ptr [EBX + 0x144]     ; 0043b6ab
        ;   Label: LAB_0043b6ab
    IMUL EDX,dword ptr [EBX + 0x148]    ; 0043b6b1
    LEA EAX,[EDX*0x4 + 0x0]             ; 0043b6b8
    ADD EAX,0x1010                      ; 0043b6bf
    PUSH EAX                            ; 0043b6c4
    CALL FUN_005b8580                   ; 0043b6c5
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8580()
    ADD ESP,0x4                         ; 0043b6ca
    MOV dword ptr [EBX + 0x164],EAX     ; 0043b6cd
    TEST EAX,EAX                        ; 0043b6d3
    JZ 0x0043b6fd                       ; 0043b6d5
        ;   XREF to: 0043b6fd (CONDITIONAL_JUMP)  ; LAB_0043b6fd
    MOV EAX,dword ptr [EBX + 0x160]     ; 0043b6d7
        ;   Label: LAB_0043b6d7
    ADD EAX,0x10                        ; 0043b6dd
    AND AL,0xf0                         ; 0043b6e0
    MOV dword ptr [EBX + 0x158],EAX     ; 0043b6e2
    MOV EAX,dword ptr [EBX + 0x164]     ; 0043b6e8
    ADD EAX,0x10                        ; 0043b6ee
    AND AL,0xf0                         ; 0043b6f1
    MOV dword ptr [EBX + 0x15c],EAX     ; 0043b6f3
    POP EBP                             ; 0043b6f9
    POP ESI                             ; 0043b6fa
    POP EBX                             ; 0043b6fb
    RET                                 ; 0043b6fc
    MOV EAX,0x5ce29c                    ; 0043b6fd | = "..\\core\\dcamera.cpp"
        ;   Label: LAB_0043b6fd
    MOV EDX,0x24b                       ; 0043b702
    PUSH 0x5ce2b0                       ; 0043b707 | = "CDemonCamera::init - Unable to alloc ..."
    MOV [0x01d046a0],EAX                ; 0043b70c | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 0043b711 | DAT_01d046a4
    CALL FUN_004e4500                   ; 0043b717
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 0043b71c
    JMP 0x0043b6d7                      ; 0043b71f
        ;   XREF to: 0043b6d7 (UNCONDITIONAL_JUMP)  ; LAB_0043b6d7

