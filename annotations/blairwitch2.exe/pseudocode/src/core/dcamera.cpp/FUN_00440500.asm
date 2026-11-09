; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dcamera_cpp_FUN_00440500(int param_1)
;
;
; XREF[1]:
;   core_set.cpp_FUN_0052f2a0 at 0052f530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00440500
        ;   Label: core_dcamera.cpp_FUN_00440500
    PUSH ESI                            ; 00440501
    PUSH EDI                            ; 00440502
    PUSH EBP                            ; 00440503
    MOV EBP,dword ptr [ESP + 0x14]      ; 00440504
    MOV EDX,dword ptr [EBP + 0x154]     ; 00440508
    XOR EDI,EDI                         ; 0044050e
    TEST EDX,EDX                        ; 00440510
    JLE 0x0044054f                      ; 00440512
        ;   XREF to: 0044054f (CONDITIONAL_JUMP)  ; LAB_0044054f
    XOR ESI,ESI                         ; 00440514
    MOV ECX,0xae24d8                    ; 00440516
        ;   Label: LAB_00440516
    MOV EAX,0xaf5218                    ; 0044051b
    MOV EDX,dword ptr [EBP + 0x150]     ; 00440520
    ADD ECX,ESI                         ; 00440526
    ADD EAX,ESI                         ; 00440528
    TEST EDX,EDX                        ; 0044052a
    JLE 0x0044053e                      ; 0044052c
        ;   XREF to: 0044053e (CONDITIONAL_JUMP)  ; LAB_0044053e
    MOV BL,byte ptr [ECX]               ; 0044052e
        ;   Label: LAB_0044052e
    INC ECX                             ; 00440530
    MOV BH,byte ptr [EAX]               ; 00440531
    INC EAX                             ; 00440533
    ADD BH,BL                           ; 00440534
    DEC EDX                             ; 00440536
    MOV byte ptr [EAX + -0x1],BH        ; 00440537
    TEST EDX,EDX                        ; 0044053a
    JG 0x0044052e                       ; 0044053c
        ;   XREF to: 0044052e (CONDITIONAL_JUMP)  ; LAB_0044052e
    INC EDI                             ; 0044053e
        ;   Label: LAB_0044053e
    MOV ECX,dword ptr [EBP + 0x154]     ; 0044053f
    ADD ESI,0x140                       ; 00440545
    CMP EDI,ECX                         ; 0044054b
    JL 0x00440516                       ; 0044054d
        ;   XREF to: 00440516 (CONDITIONAL_JUMP)  ; LAB_00440516
    POP EBP                             ; 0044054f
        ;   Label: LAB_0044054f
    POP EDI                             ; 00440550
    POP ESI                             ; 00440551
    POP EBX                             ; 00440552
    RET                                 ; 00440553

