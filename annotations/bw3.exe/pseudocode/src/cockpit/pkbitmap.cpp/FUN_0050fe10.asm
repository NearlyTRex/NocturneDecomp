; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0050fe10(undefined4 param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   FUN_004e4330
;   FUN_0050fe90
;   FUN_005a28c0
;   FUN_005a3a90
;   FUN_005a43ec
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050fe10
        ;   Label: FUN_0050fe10
    PUSH EBP                            ; 0050fe11
    SUB ESP,0x64                        ; 0050fe12
    PUSH 0x5cbd0e                       ; 0050fe15
    MOV EDX,dword ptr [ESP + 0x78]      ; 0050fe1a
    PUSH EDX                            ; 0050fe1e
    CALL FUN_005a43ec                   ; 0050fe1f
        ;   XREF to: 005a43ec (UNCONDITIONAL_CALL)  ; undefined FUN_005a43ec()
    ADD ESP,0x8                         ; 0050fe24
    MOV EBX,EAX                         ; 0050fe27
    TEST EAX,EAX                        ; 0050fe29
    JZ 0x0050fe4a                       ; 0050fe2b
        ;   XREF to: 0050fe4a (CONDITIONAL_JUMP)  ; LAB_0050fe4a
    PUSH EBX                            ; 0050fe2d
        ;   Label: LAB_0050fe2d
    MOV EBP,dword ptr [ESP + 0x74]      ; 0050fe2e
    PUSH EBP                            ; 0050fe32
    CALL FUN_0050fe90                   ; 0050fe33
        ;   XREF to: 0050fe90 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe90()
    ADD ESP,0x8                         ; 0050fe38
    PUSH EBX                            ; 0050fe3b
    CALL FUN_005a3a90                   ; 0050fe3c
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3a90()
    ADD ESP,0x4                         ; 0050fe41
    ADD ESP,0x64                        ; 0050fe44
    POP EBP                             ; 0050fe47
    POP EBX                             ; 0050fe48
    RET                                 ; 0050fe49
    PUSH EDI                            ; 0050fe4a
        ;   Label: LAB_0050fe4a
    PUSH ESI                            ; 0050fe4b
    MOV ECX,dword ptr [ESP + 0x7c]      ; 0050fe4c
    PUSH ECX                            ; 0050fe50
    PUSH 0x5cbd11                       ; 0050fe51
    LEA EAX,[ESP + 0x10]                ; 0050fe56
    PUSH EAX                            ; 0050fe5a
    MOV ESI,0x5cbd2e                    ; 0050fe5b
    CALL FUN_005a28c0                   ; 0050fe60
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28c0()
    ADD ESP,0xc                         ; 0050fe65
    LEA EAX,[ESP + 0x8]                 ; 0050fe68
    MOV EDI,0x474                       ; 0050fe6c
    PUSH EAX                            ; 0050fe71
    MOV dword ptr [0x01d71de0],ESI      ; 0050fe72 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 0050fe78 | DAT_01d71de4
    CALL FUN_004e4330                   ; 0050fe7e
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 0050fe83
    POP ESI                             ; 0050fe86
    POP EDI                             ; 0050fe87
    JMP 0x0050fe2d                      ; 0050fe88
        ;   XREF to: 0050fe2d (UNCONDITIONAL_JUMP)  ; LAB_0050fe2d

