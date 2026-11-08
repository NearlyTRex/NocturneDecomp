; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00534040(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[1]:
;   FUN_00541a60 at 00541b95
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;   undefined4 DAT_00616494
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_01cb6900
;   undefined4 DAT_01cb6b0c
;   undefined4 DAT_01cb6b10
;
; Called Functions:
;   FUN_0046b960
;   FUN_0046bff0
;   FUN_00533a80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00534040
        ;   Label: FUN_00534040
    PUSH EBP                            ; 00534041
    MOV EAX,[0x00616494]                ; 00534042 | DAT_00616494 | DAT_01cb6900
    CMP dword ptr [EAX + 0x20c],0x0     ; 00534047 | DAT_01cb6b0c
    JNZ 0x0053408a                      ; 0053404e
        ;   XREF to: 0053408a (CONDITIONAL_JUMP)  ; LAB_0053408a
    CMP dword ptr [EAX + 0x210],0x0     ; 00534050 | DAT_01cb6b10
    JZ 0x0053406c                       ; 00534057
        ;   XREF to: 0053406c (CONDITIONAL_JUMP)  ; LAB_0053406c
    MOV EBX,dword ptr [0x0060b280]      ; 00534059 | DAT_0060b280
    PUSH EBX                            ; 0053405f | DAT_01ba5c50
    CALL FUN_0046b960                   ; 00534060
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b960()
    ADD ESP,0x4                         ; 00534065
    TEST EAX,EAX                        ; 00534068
    JZ 0x0053408d                       ; 0053406a
        ;   XREF to: 0053408d (CONDITIONAL_JUMP)  ; LAB_0053408d
    MOV EAX,dword ptr [ESP + 0x18]      ; 0053406c
        ;   Label: LAB_0053406c
    PUSH EAX                            ; 00534070
    MOV EDX,dword ptr [ESP + 0x18]      ; 00534071
    PUSH EDX                            ; 00534075
    MOV ECX,dword ptr [ESP + 0x18]      ; 00534076
    PUSH ECX                            ; 0053407a
    MOV EBX,dword ptr [0x0060b280]      ; 0053407b | DAT_0060b280
    PUSH EBX                            ; 00534081 | DAT_01ba5c50
    CALL FUN_0046bff0                   ; 00534082
        ;   XREF to: 0046bff0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046bff0()
    ADD ESP,0x10                        ; 00534087
    POP EBP                             ; 0053408a
        ;   Label: LAB_0053408a
    POP EBX                             ; 0053408b
    RET                                 ; 0053408c
    PUSH EDI                            ; 0053408d
        ;   Label: LAB_0053408d
    PUSH ESI                            ; 0053408e
    PUSH 0xffff                         ; 0053408f
    MOV ESI,dword ptr [ESP + 0x20]      ; 00534094
    PUSH ESI                            ; 00534098
    MOV EDI,dword ptr [ESP + 0x20]      ; 00534099
    PUSH EDI                            ; 0053409d
    MOV EBP,dword ptr [ESP + 0x20]      ; 0053409e
    PUSH EBP                            ; 005340a2
    CALL FUN_00533a80                   ; 005340a3
        ;   XREF to: 00533a80 (UNCONDITIONAL_CALL)  ; undefined FUN_00533a80()
    ADD ESP,0x10                        ; 005340a8
    POP ESI                             ; 005340ab
    POP EDI                             ; 005340ac
    POP EBP                             ; 005340ad
    POP EBX                             ; 005340ae
    RET                                 ; 005340af

