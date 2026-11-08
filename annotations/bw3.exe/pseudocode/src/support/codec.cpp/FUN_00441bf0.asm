; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00441bf0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5 )
;
;
; Referenced Globals:
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   FUN_00441b60
;   FUN_004e4330
;   FUN_005a3650
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00441bf0
        ;   Label: FUN_00441bf0
    PUSH EBP                            ; 00441bf1
    MOV EBX,dword ptr [ESP + 0xc]       ; 00441bf2
    PUSH EBX                            ; 00441bf6
    CALL FUN_00441b60                   ; 00441bf7
        ;   XREF to: 00441b60 (UNCONDITIONAL_CALL)  ; undefined FUN_00441b60()
    ADD ESP,0x4                         ; 00441bfc
    MOV EAX,dword ptr [ESP + 0x10]      ; 00441bff
    MOV dword ptr [EBX + 0x4],EAX       ; 00441c03
    MOV EAX,dword ptr [ESP + 0x14]      ; 00441c06
    MOV dword ptr [EBX + 0x8],EAX       ; 00441c0a
    MOV EAX,dword ptr [ESP + 0x18]      ; 00441c0d
    MOV dword ptr [EBX + 0xc],EAX       ; 00441c11
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00441c14
    PUSH EAX                            ; 00441c18
    MOV dword ptr [EBX + 0x14],EAX      ; 00441c19
    CALL FUN_005a3650                   ; 00441c1c
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3650()
    ADD ESP,0x4                         ; 00441c21
    MOV dword ptr [EBX + 0x10],EAX      ; 00441c24
    TEST EAX,EAX                        ; 00441c27
    JZ 0x00441c51                       ; 00441c29
        ;   XREF to: 00441c51 (CONDITIONAL_JUMP)  ; LAB_00441c51
    MOV dword ptr [EBX + 0x18],0x0      ; 00441c2b
        ;   Label: LAB_00441c2b
    MOV dword ptr [EBX + 0x1c],0x0      ; 00441c32
    MOV dword ptr [EBX + 0x20],0x0      ; 00441c39
    MOV EBX,dword ptr [EBX + 0x4]       ; 00441c40
    PUSH EBX                            ; 00441c43
    MOV EAX,dword ptr [EBX]             ; 00441c44
    CALL dword ptr [EAX + 0x4]          ; 00441c46
    ADD ESP,0x4                         ; 00441c49
    POP EBP                             ; 00441c4c
    POP EBX                             ; 00441c4d
    MOV EAX,EAX                         ; 00441c4e
    RET                                 ; 00441c50
    PUSH EDI                            ; 00441c51
        ;   Label: LAB_00441c51
    PUSH ESI                            ; 00441c52
    MOV EBP,dword ptr [EBX + 0x14]      ; 00441c53
    PUSH EBP                            ; 00441c56
    MOV ESI,0x5b9393                    ; 00441c57
    MOV EDI,0x881                       ; 00441c5c
    PUSH 0x5b93a8                       ; 00441c61
    MOV dword ptr [0x01d71de0],ESI      ; 00441c66 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 00441c6c | DAT_01d71de4
    CALL FUN_004e4330                   ; 00441c72
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x8                         ; 00441c77
    POP ESI                             ; 00441c7a
    POP EDI                             ; 00441c7b
    JMP 0x00441c2b                      ; 00441c7c
        ;   XREF to: 00441c2b (UNCONDITIONAL_JUMP)  ; LAB_00441c2b

