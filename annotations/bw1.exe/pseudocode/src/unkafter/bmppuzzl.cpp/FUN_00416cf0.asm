; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; longlong unkafter_bmppuzzl_cpp_FUN_00416cf0(int param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01c4353c
;   undefined4 DAT_01c43540
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00416cf0
        ;   Label: unkafter_bmppuzzl.cpp_FUN_00416cf0
    PUSH ESI                            ; 00416cf1
    PUSH EBP                            ; 00416cf2
    MOV EDX,dword ptr [ESP + 0x14]      ; 00416cf3
    LEA EAX,[EDX*0x4 + 0x0]             ; 00416cf7
    SUB EAX,EDX                         ; 00416cfe
    SHL EAX,0x2                         ; 00416d00
    SUB EAX,EDX                         ; 00416d03
    MOV EDX,dword ptr [ESP + 0x10]      ; 00416d05
    SHL EAX,0x2                         ; 00416d09
    ADD EAX,EDX                         ; 00416d0c
    MOV ESI,dword ptr [0x01c4353c]      ; 00416d0e | DAT_01c4353c
    MOV EDX,dword ptr [EAX + 0x78]      ; 00416d14
    MOV EBX,dword ptr [EAX + 0x80]      ; 00416d17
    MOV ECX,dword ptr [EAX + 0x7c]      ; 00416d1d
    MOV EAX,dword ptr [EAX + 0x84]      ; 00416d20
    ADD EBX,EDX                         ; 00416d26
    ADD EAX,ECX                         ; 00416d28
    CMP EDX,ESI                         ; 00416d2a
    JG 0x00416d51                       ; 00416d2c
        ;   XREF to: 00416d51 (CONDITIONAL_JUMP)  ; LAB_00416d51
    CMP EBX,ESI                         ; 00416d2e
    JL 0x00416d51                       ; 00416d30
        ;   XREF to: 00416d51 (CONDITIONAL_JUMP)  ; LAB_00416d51
    MOV EBP,dword ptr [0x01c43540]      ; 00416d32 | DAT_01c43540
    CMP ECX,EBP                         ; 00416d38
    JG 0x00416d51                       ; 00416d3a
        ;   XREF to: 00416d51 (CONDITIONAL_JUMP)  ; LAB_00416d51
    CMP EAX,EBP                         ; 00416d3c
    JL 0x00416d51                       ; 00416d3e
        ;   XREF to: 00416d51 (CONDITIONAL_JUMP)  ; LAB_00416d51
    MOV EAX,0x1                         ; 00416d40
    POP EBP                             ; 00416d45
    POP ESI                             ; 00416d46
    POP EBX                             ; 00416d47
    LEA EAX,[EAX]                       ; 00416d48
    MOV EDX,EDX                         ; 00416d4e
    XOR EAX,EAX                         ; 00416d51
        ;   Label: LAB_00416d51
    POP EBP                             ; 00416d53
    POP ESI                             ; 00416d54
    POP EBX                             ; 00416d55
    RET                                 ; 00416d56

