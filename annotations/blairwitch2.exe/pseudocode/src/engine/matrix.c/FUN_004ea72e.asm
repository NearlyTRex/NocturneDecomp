; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_matrix_c_FUN_004ea72e(int param_1,int param_2,int param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_01c38b6c
;   undefined4 DAT_01c38b70
;   undefined4 DAT_01c38b74
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_01d05014
;
; Called Functions:
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    MOV ECX,ECX                         ; 004ea72e
        ;   Label: engine_matrix.c_FUN_004ea72e
    PUSH EBX                            ; 004ea730
    PUSH ESI                            ; 004ea731
    PUSH EBP                            ; 004ea732
    MOV EAX,[0x01d05014]                ; 004ea733 | DAT_01d05014
    MOV EDX,dword ptr [0x01c38b6c]      ; 004ea738 | DAT_01c38b6c
    MOV ECX,dword ptr [0x01c38b70]      ; 004ea73e | DAT_01c38b70
    MOV dword ptr [EAX*0x4 + 0x1d05180],EDX ; 004ea744
    MOV EDX,dword ptr [0x01c38b70]      ; 004ea74b | DAT_01c38b70
    MOV EBX,dword ptr [0x01c38b74]      ; 004ea751 | DAT_01c38b74
    MOV dword ptr [EAX*0x4 + 0x1d051a8],EDX ; 004ea757
    MOV EDX,dword ptr [0x01c38b74]      ; 004ea75e | DAT_01c38b74
    MOV ESI,dword ptr [0x01d05014]      ; 004ea764 | DAT_01d05014
    MOV dword ptr [EAX*0x4 + 0x1d051d0],EDX ; 004ea76a
    MOV EAX,dword ptr [ESP + 0x10]      ; 004ea771
    MOV EDX,dword ptr [0x01c38b6c]      ; 004ea775 | DAT_01c38b6c
    INC ESI                             ; 004ea77b
    SUB EDX,EAX                         ; 004ea77c
    MOV EAX,dword ptr [ESP + 0x14]      ; 004ea77e
    MOV dword ptr [0x01d05014],ESI      ; 004ea782 | DAT_01d05014
    SUB ECX,EAX                         ; 004ea788
    MOV EAX,dword ptr [ESP + 0x18]      ; 004ea78a
    MOV dword ptr [0x01c38b6c],EDX      ; 004ea78e | DAT_01c38b6c
    SUB EBX,EAX                         ; 004ea794
    MOV dword ptr [0x01c38b70],ECX      ; 004ea796 | DAT_01c38b70
    MOV dword ptr [0x01c38b74],EBX      ; 004ea79c | DAT_01c38b74
    CMP ESI,0x9                         ; 004ea7a2
    JG 0x004ea7ab                       ; 004ea7a5
        ;   XREF to: 004ea7ab (CONDITIONAL_JUMP)  ; LAB_004ea7ab
    POP EBP                             ; 004ea7a7
    POP ESI                             ; 004ea7a8
    POP EBX                             ; 004ea7a9
    RET                                 ; 004ea7aa
    MOV EBP,0x5dc8c4                    ; 004ea7ab
        ;   Label: LAB_004ea7ab
    MOV EAX,0x5cc                       ; 004ea7b0
    PUSH 0x5dc8d7                       ; 004ea7b5
    MOV dword ptr [0x01d046a0],EBP      ; 004ea7ba | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 004ea7c0 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004ea7c5
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004ea7ca
    POP EBP                             ; 004ea7cd
    POP ESI                             ; 004ea7ce
    POP EBX                             ; 004ea7cf
    RET                                 ; 004ea7d0

