; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_setcolid_cpp_FUN_0053ed10(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)
;
; Local Variables:
; undefined        Stack[-0x44]:1  local_44
;
; XREF[2]:
;   core_bodypart.cpp_FUN_00415350 at 00415549
;   core_boxactor.cpp_FUN_0041f360 at 0041f7dd
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053ed10
        ;   Label: core_setcolid.cpp_FUN_0053ed10
    PUSH EBP                            ; 0053ed11
    SUB ESP,0x3c                        ; 0053ed12
    MOV EAX,dword ptr [ESP + 0x48]      ; 0053ed15
    MOV EDX,dword ptr [EAX + 0x14f0a8]  ; 0053ed19
    XOR EBX,EBX                         ; 0053ed1f
    TEST EDX,EDX                        ; 0053ed21
    JLE 0x0053ed73                      ; 0053ed23
        ;   XREF to: 0053ed73 (CONDITIONAL_JUMP)  ; LAB_0053ed73
    PUSH EDI                            ; 0053ed25
    PUSH ESI                            ; 0053ed26
    MOV EBP,EAX                         ; 0053ed27
    MOV ECX,0xf                         ; 0053ed29
        ;   Label: LAB_0053ed29
    LEA EDI,[ESP + 0x8]                 ; 0053ed2e
    MOV ESI,dword ptr [ESP + 0x5c]      ; 0053ed32
    MOV EAX,dword ptr [EBP + 0x14f0ac]  ; 0053ed36
    MOVSD.REP ES:EDI,ESI                ; 0053ed3c
    PUSH 0x0                            ; 0053ed3e
    LEA ECX,[ESP + 0xc]                 ; 0053ed40
    PUSH ECX                            ; 0053ed44
    MOV ECX,dword ptr [ESP + 0x60]      ; 0053ed45
    PUSH ECX                            ; 0053ed49
    MOV ESI,dword ptr [ESP + 0x60]      ; 0053ed4a
    PUSH ESI                            ; 0053ed4e
    MOV EDX,dword ptr [EAX + 0x154]     ; 0053ed4f
    PUSH EAX                            ; 0053ed55
    CALL dword ptr [EDX + 0x104]        ; 0053ed56
    ADD ESP,0x14                        ; 0053ed5c
    MOV EAX,dword ptr [ESP + 0x50]      ; 0053ed5f
    INC EBX                             ; 0053ed63
    MOV EDI,dword ptr [EAX + 0x14f0a8]  ; 0053ed64
    ADD EBP,0x4                         ; 0053ed6a
    CMP EBX,EDI                         ; 0053ed6d
    JL 0x0053ed29                       ; 0053ed6f
        ;   XREF to: 0053ed29 (CONDITIONAL_JUMP)  ; LAB_0053ed29
    POP ESI                             ; 0053ed71
    POP EDI                             ; 0053ed72
    ADD ESP,0x3c                        ; 0053ed73
        ;   Label: LAB_0053ed73
    POP EBP                             ; 0053ed76
    POP EBX                             ; 0053ed77
    RET                                 ; 0053ed78

