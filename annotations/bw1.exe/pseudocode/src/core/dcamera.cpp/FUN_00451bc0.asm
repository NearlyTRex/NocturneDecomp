; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dcamera_cpp_FUN_00451bc0(int param_1)
;
;
; XREF[1]:
;   core_set.cpp_FUN_00550580 at 00550810
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00451bc0
        ;   Label: core_dcamera.cpp_FUN_00451bc0
    PUSH ESI                            ; 00451bc1
    PUSH EDI                            ; 00451bc2
    PUSH EBP                            ; 00451bc3
    MOV EBP,dword ptr [ESP + 0x14]      ; 00451bc4
    MOV EDX,dword ptr [EBP + 0x154]     ; 00451bc8
    XOR EDI,EDI                         ; 00451bce
    TEST EDX,EDX                        ; 00451bd0
    JLE 0x00451c0f                      ; 00451bd2
        ;   XREF to: 00451c0f (CONDITIONAL_JUMP)  ; LAB_00451c0f
    XOR ESI,ESI                         ; 00451bd4
    MOV ECX,0xafd9d8                    ; 00451bd6
        ;   Label: LAB_00451bd6
    MOV EAX,0xb10718                    ; 00451bdb
    MOV EDX,dword ptr [EBP + 0x150]     ; 00451be0
    ADD ECX,ESI                         ; 00451be6
    ADD EAX,ESI                         ; 00451be8
    TEST EDX,EDX                        ; 00451bea
    JLE 0x00451bfe                      ; 00451bec
        ;   XREF to: 00451bfe (CONDITIONAL_JUMP)  ; LAB_00451bfe
    MOV BL,byte ptr [ECX]               ; 00451bee
        ;   Label: LAB_00451bee
    INC ECX                             ; 00451bf0
    MOV BH,byte ptr [EAX]               ; 00451bf1
    INC EAX                             ; 00451bf3
    ADD BH,BL                           ; 00451bf4
    DEC EDX                             ; 00451bf6
    MOV byte ptr [EAX + -0x1],BH        ; 00451bf7
    TEST EDX,EDX                        ; 00451bfa
    JG 0x00451bee                       ; 00451bfc
        ;   XREF to: 00451bee (CONDITIONAL_JUMP)  ; LAB_00451bee
    INC EDI                             ; 00451bfe
        ;   Label: LAB_00451bfe
    MOV ECX,dword ptr [EBP + 0x154]     ; 00451bff
    ADD ESI,0x140                       ; 00451c05
    CMP EDI,ECX                         ; 00451c0b
    JL 0x00451bd6                       ; 00451c0d
        ;   XREF to: 00451bd6 (CONDITIONAL_JUMP)  ; LAB_00451bd6
    POP EBP                             ; 00451c0f
        ;   Label: LAB_00451c0f
    POP EDI                             ; 00451c10
    POP ESI                             ; 00451c11
    POP EBX                             ; 00451c12
    RET                                 ; 00451c13

