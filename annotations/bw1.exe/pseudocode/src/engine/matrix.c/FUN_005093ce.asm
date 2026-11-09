; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_matrix_c_FUN_005093ce(int param_1,int param_2,int param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_01c51d2c
;   undefined4 DAT_01c51d30
;   undefined4 DAT_01c51d34
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_01d1dd74
;
; Called Functions:
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    MOV ECX,ECX                         ; 005093ce
        ;   Label: engine_matrix.c_FUN_005093ce
    PUSH EBX                            ; 005093d0
    PUSH ESI                            ; 005093d1
    PUSH EBP                            ; 005093d2
    MOV EAX,[0x01d1dd74]                ; 005093d3 | DAT_01d1dd74
    MOV EDX,dword ptr [0x01c51d2c]      ; 005093d8 | DAT_01c51d2c
    MOV ECX,dword ptr [0x01c51d30]      ; 005093de | DAT_01c51d30
    MOV dword ptr [EAX*0x4 + 0x1d1dee0],EDX ; 005093e4
    MOV EDX,dword ptr [0x01c51d30]      ; 005093eb | DAT_01c51d30
    MOV EBX,dword ptr [0x01c51d34]      ; 005093f1 | DAT_01c51d34
    MOV dword ptr [EAX*0x4 + 0x1d1df08],EDX ; 005093f7
    MOV EDX,dword ptr [0x01c51d34]      ; 005093fe | DAT_01c51d34
    MOV ESI,dword ptr [0x01d1dd74]      ; 00509404 | DAT_01d1dd74
    MOV dword ptr [EAX*0x4 + 0x1d1df30],EDX ; 0050940a
    MOV EAX,dword ptr [ESP + 0x10]      ; 00509411
    MOV EDX,dword ptr [0x01c51d2c]      ; 00509415 | DAT_01c51d2c
    INC ESI                             ; 0050941b
    SUB EDX,EAX                         ; 0050941c
    MOV EAX,dword ptr [ESP + 0x14]      ; 0050941e
    MOV dword ptr [0x01d1dd74],ESI      ; 00509422 | DAT_01d1dd74
    SUB ECX,EAX                         ; 00509428
    MOV EAX,dword ptr [ESP + 0x18]      ; 0050942a
    MOV dword ptr [0x01c51d2c],EDX      ; 0050942e | DAT_01c51d2c
    SUB EBX,EAX                         ; 00509434
    MOV dword ptr [0x01c51d30],ECX      ; 00509436 | DAT_01c51d30
    MOV dword ptr [0x01c51d34],EBX      ; 0050943c | DAT_01c51d34
    CMP ESI,0x9                         ; 00509442
    JG 0x0050944b                       ; 00509445
        ;   XREF to: 0050944b (CONDITIONAL_JUMP)  ; LAB_0050944b
    POP EBP                             ; 00509447
    POP ESI                             ; 00509448
    POP EBX                             ; 00509449
    RET                                 ; 0050944a
    MOV EBP,0x5e7814                    ; 0050944b
        ;   Label: LAB_0050944b
    MOV EAX,0x5cc                       ; 00509450
    PUSH 0x5e7827                       ; 00509455
    MOV dword ptr [0x01d1d400],EBP      ; 0050945a | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 00509460 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00509465
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0050946a
    POP EBP                             ; 0050946d
    POP ESI                             ; 0050946e
    POP EBX                             ; 0050946f
    RET                                 ; 00509470

