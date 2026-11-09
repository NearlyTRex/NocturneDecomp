; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int unkaddr_004a76f0_cpp_FUN_004a8080(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_01d0d210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a8080
        ;   Label: unkaddr_004a76f0.cpp_FUN_004a8080
    PUSH ESI                            ; 004a8081
    MOV ESI,dword ptr [0x01d0d210]      ; 004a8082 | DAT_01d0d210
    MOV EBX,dword ptr [ESP + 0xc]       ; 004a8088
    XOR ECX,ECX                         ; 004a808c
    TEST ESI,ESI                        ; 004a808e
    JLE 0x004a80b5                      ; 004a8090
        ;   XREF to: 004a80b5 (CONDITIONAL_JUMP)  ; LAB_004a80b5
    MOV EAX,0x1d0d214                   ; 004a8092
    MOV EDX,dword ptr [EAX + 0x140]     ; 004a8097
        ;   Label: LAB_004a8097
    CMP EBX,EDX                         ; 004a809d
    JL 0x004a80ab                       ; 004a809f
        ;   XREF to: 004a80ab (CONDITIONAL_JUMP)  ; LAB_004a80ab
    ADD EDX,dword ptr [EAX + 0x144]     ; 004a80a1
    CMP EDX,EBX                         ; 004a80a7
    JG 0x004a80c3                       ; 004a80a9
        ;   XREF to: 004a80c3 (CONDITIONAL_JUMP)  ; LAB_004a80c3
    INC ECX                             ; 004a80ab
        ;   Label: LAB_004a80ab
    ADD EAX,0x2e4                       ; 004a80ac
    CMP ECX,ESI                         ; 004a80b1
    JL 0x004a8097                       ; 004a80b3
        ;   XREF to: 004a8097 (CONDITIONAL_JUMP)  ; LAB_004a8097
    MOV EAX,0xffffffff                  ; 004a80b5
        ;   Label: LAB_004a80b5
    MOV dword ptr [0x01d0d210],ESI      ; 004a80ba | DAT_01d0d210
    POP ESI                             ; 004a80c0
    POP EBX                             ; 004a80c1
    RET                                 ; 004a80c2
    MOV EAX,ECX                         ; 004a80c3
        ;   Label: LAB_004a80c3
    MOV dword ptr [0x01d0d210],ESI      ; 004a80c5 | DAT_01d0d210
    POP ESI                             ; 004a80cb
    POP EBX                             ; 004a80cc
    RET                                 ; 004a80cd

