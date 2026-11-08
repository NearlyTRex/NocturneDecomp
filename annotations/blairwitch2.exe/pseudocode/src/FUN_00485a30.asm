; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00485a30(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_0061b5a8
;   undefined4 DAT_01cb3954
;   undefined4 DAT_01cb3958
;   undefined4 DAT_01cb395c
;   undefined4 DAT_01cb3988
;   undefined4 DAT_01cb3a90
;   undefined4 DAT_01cb5604
;   undefined4 DAT_01cb560c
;   undefined4 DAT_01cb5620
;
; Called Functions:
;   FUN_00408d70
;   FUN_00449280
;   FUN_0044d570
;   FUN_00530630
;   FUN_00589c80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00485a30
        ;   Label: FUN_00485a30
    PUSH EBP                            ; 00485a31
    SUB ESP,0x30                        ; 00485a32
    MOV EBX,dword ptr [ESP + 0x3c]      ; 00485a35
    CMP dword ptr [EBX + 0x6d8],0x0     ; 00485a39
    JNZ 0x00485a5f                      ; 00485a40
        ;   XREF to: 00485a5f (CONDITIONAL_JUMP)  ; LAB_00485a5f
    PUSH dword ptr [ESP + 0x40]         ; 00485a42
        ;   Label: LAB_00485a42
    PUSH EBX                            ; 00485a46
    MOV dword ptr [EBX + 0x6d8],0x0     ; 00485a47
    CALL FUN_00589c80                   ; 00485a51
        ;   XREF to: 00589c80 (UNCONDITIONAL_CALL)  ; undefined FUN_00589c80()
    ADD ESP,0x8                         ; 00485a56
    ADD ESP,0x30                        ; 00485a59
    POP EBP                             ; 00485a5c
    POP EBX                             ; 00485a5d
    RET                                 ; 00485a5e
    PUSH EDI                            ; 00485a5f
        ;   Label: LAB_00485a5f
    PUSH ESI                            ; 00485a60
    MOV ECX,0x1                         ; 00485a61
    LEA ESI,[ESP + 0x20]                ; 00485a66
    PUSH EBX                            ; 00485a6a
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00485a6b
    LEA EDI,[ESP + 0xc]                 ; 00485a71
    MOV dword ptr [0x01cb5604],ECX      ; 00485a75 | DAT_01cb5604
    CALL dword ptr [EAX + 0xe8]         ; 00485a7b
    ADD ESP,0x4                         ; 00485a81
    LEA EAX,[ESP + 0x8]                 ; 00485a84
    LEA ESI,[ESP + 0x20]                ; 00485a88
    PUSH EAX                            ; 00485a8c
    MOVSD ES:EDI,ESI                    ; 00485a8d
    MOVSD ES:EDI,ESI                    ; 00485a8e
    MOVSD ES:EDI,ESI                    ; 00485a8f
    PUSH EBX                            ; 00485a90
    LEA ESI,[ESP + 0x34]                ; 00485a91
    LEA EDI,[ESP + 0x1c]                ; 00485a95
    CALL FUN_00408d70                   ; 00485a99
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00408d70()
    LEA ESI,[ESP + 0x34]                ; 00485a9e
    ADD ESP,0x8                         ; 00485aa2
    MOVSD ES:EDI,ESI                    ; 00485aa5
    MOVSD ES:EDI,ESI                    ; 00485aa6
    MOVSD ES:EDI,ESI                    ; 00485aa7
    XOR ESI,ESI                         ; 00485aa8
    LEA EAX,[ESP + 0x14]                ; 00485aaa
    MOV dword ptr [0x01cb560c],ESI      ; 00485aae | DAT_01cb560c
    CMP EAX,0x1cb3954                   ; 00485ab4
    JZ 0x00485ad6                       ; 00485ab9
        ;   XREF to: 00485ad6 (CONDITIONAL_JUMP)  ; LAB_00485ad6
    MOV EAX,dword ptr [ESP + 0x14]      ; 00485abb
    MOV [0x01cb3954],EAX                ; 00485abf | DAT_01cb3954
    MOV EAX,dword ptr [ESP + 0x18]      ; 00485ac4
    MOV [0x01cb3958],EAX                ; 00485ac8 | DAT_01cb3958
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00485acd
    MOV [0x01cb395c],EAX                ; 00485ad1 | DAT_01cb395c
    LEA EAX,[EBX + 0x30]                ; 00485ad6
        ;   Label: LAB_00485ad6
    PUSH EAX                            ; 00485ad9
    PUSH 0x1cb3960                      ; 00485ada
    CALL FUN_00449280                   ; 00485adf
        ;   XREF to: 00449280 (UNCONDITIONAL_CALL)  ; undefined FUN_00449280()
    ADD ESP,0x8                         ; 00485ae4
    MOV EDI,0x42e00000                  ; 00485ae7
    PUSH 0x3f800000                     ; 00485aec
    FLD float ptr [EBX + 0x6dc]         ; 00485af1
    PUSH 0x1cb3950                      ; 00485af7
    FSTP float ptr [0x01cb3a90]         ; 00485afc | DAT_01cb3a90
    MOV dword ptr [0x01cb3988],EDI      ; 00485b02 | DAT_01cb3988
    CALL FUN_0044d570                   ; 00485b08
        ;   XREF to: 0044d570 (UNCONDITIONAL_CALL)  ; undefined FUN_0044d570()
    ADD ESP,0x8                         ; 00485b0d
    PUSH 0x1cb3950                      ; 00485b10
    MOV EAX,[0x0061b5a8]                ; 00485b15 | DAT_0061b5a8
    XOR EBP,EBP                         ; 00485b1a
    PUSH EAX                            ; 00485b1c
    MOV dword ptr [0x01cb5620],EBP      ; 00485b1d | DAT_01cb5620
    CALL FUN_00530630                   ; 00485b23
        ;   XREF to: 00530630 (UNCONDITIONAL_CALL)  ; undefined FUN_00530630()
    ADD ESP,0x8                         ; 00485b28
    POP ESI                             ; 00485b2b
    POP EDI                             ; 00485b2c
    JMP 0x00485a42                      ; 00485b2d
        ;   XREF to: 00485a42 (UNCONDITIONAL_JUMP)  ; LAB_00485a42

