; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00480eb0(int param_1)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   FUN_0052ddf0 at 0052df60
;
; Called Functions:
;   FUN_00480d60
;   FUN_00526270
;   FUN_005262d0
;   FUN_00526340
;   FUN_005263c0
;   FUN_005265a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00480eb0
        ;   Label: FUN_00480eb0
    PUSH EBP                            ; 00480eb1
    SUB ESP,0x4                         ; 00480eb2
    MOV EBP,dword ptr [ESP + 0x10]      ; 00480eb5
    MOV EDX,dword ptr [EBP + 0x3ac8]    ; 00480eb9
    XOR EBX,EBX                         ; 00480ebf
    TEST EDX,EDX                        ; 00480ec1
    JLE 0x00480f2b                      ; 00480ec3
        ;   XREF to: 00480f2b (CONDITIONAL_JUMP)  ; LAB_00480f2b
    PUSH EDI                            ; 00480ec5
    PUSH ESI                            ; 00480ec6
    LEA EAX,[EBP + 0x3acc]              ; 00480ec7
    LEA EDI,[EBP + 0x3ae4]              ; 00480ecd
    MOV dword ptr [ESP + 0x8],EAX       ; 00480ed3
    IMUL ESI,EBX,0x120                  ; 00480ed7
        ;   Label: LAB_00480ed7
    ADD ESI,dword ptr [ESP + 0x8]       ; 00480edd
    CALL FUN_00526340                   ; 00480ee1
        ;   XREF to: 00526340 (UNCONDITIONAL_CALL)  ; undefined FUN_00526340()
    PUSH 0x1                            ; 00480ee6
    MOV EAX,dword ptr [ESI + 0x11c]     ; 00480ee8
    PUSH EAX                            ; 00480eee
    MOV EDX,dword ptr [ESI + 0x118]     ; 00480eef
    PUSH EDX                            ; 00480ef5
    CALL FUN_005262d0                   ; 00480ef6
        ;   XREF to: 005262d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005262d0()
    ADD ESP,0xc                         ; 00480efb
    PUSH 0x1                            ; 00480efe
    CALL FUN_00526270                   ; 00480f00
        ;   XREF to: 00526270 (UNCONDITIONAL_CALL)  ; undefined FUN_00526270()
    ADD ESP,0x4                         ; 00480f05
    PUSH EDI                            ; 00480f08
    CALL FUN_005265a0                   ; 00480f09
        ;   XREF to: 005265a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005265a0()
    ADD ESP,0x4                         ; 00480f0e
    INC EBX                             ; 00480f11
    MOV dword ptr [ESI],EAX             ; 00480f12
    CALL FUN_005263c0                   ; 00480f14
        ;   XREF to: 005263c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005263c0()
    MOV ECX,dword ptr [EBP + 0x3ac8]    ; 00480f19
    ADD EDI,0x120                       ; 00480f1f
    CMP EBX,ECX                         ; 00480f25
    JL 0x00480ed7                       ; 00480f27
        ;   XREF to: 00480ed7 (CONDITIONAL_JUMP)  ; LAB_00480ed7
    POP ESI                             ; 00480f29
    POP EDI                             ; 00480f2a
    PUSH EBP                            ; 00480f2b
        ;   Label: LAB_00480f2b
    CALL FUN_00480d60                   ; 00480f2c
        ;   XREF to: 00480d60 (UNCONDITIONAL_CALL)  ; undefined FUN_00480d60()
    ADD ESP,0x4                         ; 00480f31
    ADD ESP,0x4                         ; 00480f34
    POP EBP                             ; 00480f37
    POP EBX                             ; 00480f38
    RET                                 ; 00480f39

