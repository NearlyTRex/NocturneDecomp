; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; DWORD FUN_005c2c60(HMODULE param_1,LPWSTR param_2,DWORD param_3)
;
;
; XREF[1]:
;   FUN_005bce2c at 005bcf10
;
; Referenced Globals:
;   void* PTR_GetModuleFileNameA_005c85a8 = 001c8ef8
;   void* PTR_GetModuleFileNameW_005c85ac = 001c8f0e
;   void* PTR_GetVersion_005c85c4 = 001c8f80
;   void* PTR_MultiByteToWideChar_005c85f0 = 001c9048
;
; Called Functions:
;   FUN_005b8580
;   FUN_005b86a0
;   FUN_005c4cc0
;   GetModuleFileNameA
;   GetModuleFileNameW
;   GetVersion
;   MultiByteToWideChar
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c2c60
        ;   Label: FUN_005c2c60
    PUSH ESI                            ; 005c2c61
    PUSH EDI                            ; 005c2c62
    PUSH EBP                            ; 005c2c63
    MOV EDI,dword ptr [ESP + 0x14]      ; 005c2c64
    MOV ESI,dword ptr [ESP + 0x18]      ; 005c2c68
    MOV EBP,dword ptr [ESP + 0x1c]      ; 005c2c6c
    CALL dword ptr CS:[0x5c85c4]        ; 005c2c70 | PTR_GetVersion_005c85c4
    SHR EAX,0x10                        ; 005c2c77
    AND EAX,0xffff                      ; 005c2c7a
    CMP AX,0x8000                       ; 005c2c7f
    JNC 0x005c2c94                      ; 005c2c83
        ;   XREF to: 005c2c94 (CONDITIONAL_JUMP)  ; LAB_005c2c94
    PUSH EBP                            ; 005c2c85
    PUSH ESI                            ; 005c2c86
    PUSH EDI                            ; 005c2c87
    CALL dword ptr CS:[0x5c85ac]        ; 005c2c88 | PTR_GetModuleFileNameW_005c85ac
    POP EBP                             ; 005c2c8f
    POP EDI                             ; 005c2c90
    POP ESI                             ; 005c2c91
    POP EBX                             ; 005c2c92
    RET                                 ; 005c2c93
    PUSH 0x208                          ; 005c2c94
        ;   Label: LAB_005c2c94
    CALL FUN_005b8580                   ; 005c2c99
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8580()
    MOV EBX,EAX                         ; 005c2c9e
    ADD ESP,0x4                         ; 005c2ca0
    TEST EAX,EAX                        ; 005c2ca3
    JZ 0x005c2cff                       ; 005c2ca5
        ;   XREF to: 005c2cff (CONDITIONAL_JUMP)  ; LAB_005c2cff
    PUSH 0x208                          ; 005c2ca7
    PUSH EAX                            ; 005c2cac
    PUSH EDI                            ; 005c2cad
    CALL dword ptr CS:[0x5c85a8]        ; 005c2cae | PTR_GetModuleFileNameA_005c85a8
    TEST EAX,EAX                        ; 005c2cb5
    JNZ 0x005c2cc9                      ; 005c2cb7
        ;   XREF to: 005c2cc9 (CONDITIONAL_JUMP)  ; LAB_005c2cc9
    PUSH EBX                            ; 005c2cb9
    CALL FUN_005b86a0                   ; 005c2cba
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b86a0()
    ADD ESP,0x4                         ; 005c2cbf
    XOR EAX,EAX                         ; 005c2cc2
    POP EBP                             ; 005c2cc4
    POP EDI                             ; 005c2cc5
    POP ESI                             ; 005c2cc6
    POP EBX                             ; 005c2cc7
    RET                                 ; 005c2cc8
    PUSH EBP                            ; 005c2cc9
        ;   Label: LAB_005c2cc9
    PUSH ESI                            ; 005c2cca
    PUSH -0x1                           ; 005c2ccb
    PUSH EBX                            ; 005c2ccd
    PUSH 0x1                            ; 005c2cce
    PUSH 0x1                            ; 005c2cd0
    CALL dword ptr CS:[0x5c85f0]        ; 005c2cd2 | PTR_MultiByteToWideChar_005c85f0
    PUSH EBX                            ; 005c2cd9
    MOV EDI,EAX                         ; 005c2cda
    CALL FUN_005b86a0                   ; 005c2cdc
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b86a0()
    ADD ESP,0x4                         ; 005c2ce1
    TEST EDI,EDI                        ; 005c2ce4
    JNZ 0x005c2cef                      ; 005c2ce6
        ;   XREF to: 005c2cef (CONDITIONAL_JUMP)  ; LAB_005c2cef
    XOR EAX,EAX                         ; 005c2ce8
    POP EBP                             ; 005c2cea
    POP EDI                             ; 005c2ceb
    POP ESI                             ; 005c2cec
    POP EBX                             ; 005c2ced
    RET                                 ; 005c2cee
    PUSH ESI                            ; 005c2cef
        ;   Label: LAB_005c2cef
    MOV word ptr [ESI + EBP*0x2 + -0x2],0x0 ; 005c2cf0
    CALL FUN_005c4cc0                   ; 005c2cf7
        ;   XREF to: 005c4cc0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c4cc0()
    ADD ESP,0x4                         ; 005c2cfc
    POP EBP                             ; 005c2cff
        ;   Label: LAB_005c2cff
    POP EDI                             ; 005c2d00
    POP ESI                             ; 005c2d01
    POP EBX                             ; 005c2d02
    RET                                 ; 005c2d03

