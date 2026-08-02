; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_0056f9c4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; Called Functions:
;   crt_unknown.c_FUN_0056f986
;   crt_unknown.c_FUN_00571bd0
;   crt_unknown.c_FUN_00571bdc
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0056f9c4
        ;   Label: crt_unknown.c_FUN_0056f9c4
    MOV EBP,ESP                         ; 0056f9c5
    PUSH EBX                            ; 0056f9c7
    PUSH ESI                            ; 0056f9c8
    PUSH EDI                            ; 0056f9c9
    CALL crt_unknown.c_FUN_00571bd0     ; 0056f9ca
        ;   XREF to: 00571bd0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00571bd0()
    PUSH EAX                            ; 0056f9cf
    PUSH 0x47                           ; 0056f9d0
    MOV EDX,dword ptr [EBP + 0x18]      ; 0056f9d2
    PUSH EDX                            ; 0056f9d5
    MOV EBX,dword ptr [EBP + 0x14]      ; 0056f9d6
    PUSH EBX                            ; 0056f9d9
    MOV ECX,dword ptr [EBP + 0x10]      ; 0056f9da
    PUSH ECX                            ; 0056f9dd
    MOV ESI,dword ptr [EBP + 0xc]       ; 0056f9de
    PUSH ESI                            ; 0056f9e1
    MOV EDI,dword ptr [EBP + 0x8]       ; 0056f9e2
    PUSH EDI                            ; 0056f9e5
    CALL crt_unknown.c_FUN_00571bdc     ; 0056f9e6
        ;   XREF to: 00571bdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00571bdc()
    ADD ESP,0x1c                        ; 0056f9eb
    MOV EDX,dword ptr [EBP + 0x10]      ; 0056f9ee
    PUSH EDX                            ; 0056f9f1
        ;   Label: LAB_0056f9f1
    PUSH EAX                            ; 0056f9f2
    CALL crt_unknown.c_FUN_0056f986     ; 0056f9f3
        ;   XREF to: 0056f986 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056f986()
    ADD ESP,0x8                         ; 0056f9f8
    POP EDI                             ; 0056f9fb
    POP ESI                             ; 0056f9fc
    POP EBX                             ; 0056f9fd
    POP EBP                             ; 0056f9fe
    RET                                 ; 0056f9ff

