; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_bmppuzzl_cpp_CAudioRecPuzzle_isButtonHovered_FUN_004129f0(CAudioRecPuzzle *this_ptr,int button)
;
; Parameters:
; CAudioRecPuzzle * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   button
;
; Referenced Globals:
;   undefined4 DAT_01c5fadc
;   undefined4 DAT_01c5fae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004129f0
        ;   Label: core_bmppuzzl.cpp_CAudioRecPuzzle_isButtonHovered_FUN_004129f0
    PUSH ESI                            ; 004129f1
    PUSH EBP                            ; 004129f2
    MOV EDX,dword ptr [ESP + 0x14]      ; 004129f3
    LEA EAX,[EDX*0x4 + 0x0]             ; 004129f7
    SUB EAX,EDX                         ; 004129fe
    SHL EAX,0x2                         ; 00412a00
    SUB EAX,EDX                         ; 00412a03
    MOV EDX,dword ptr [ESP + 0x10]      ; 00412a05
    SHL EAX,0x2                         ; 00412a09
    ADD EAX,EDX                         ; 00412a0c
    MOV ESI,dword ptr [0x01c5fadc]      ; 00412a0e | DAT_01c5fadc
    MOV EDX,dword ptr [EAX + 0x6c]      ; 00412a14
    MOV EBX,dword ptr [EAX + 0x74]      ; 00412a17
    MOV ECX,dword ptr [EAX + 0x70]      ; 00412a1a
    MOV EAX,dword ptr [EAX + 0x78]      ; 00412a1d
    ADD EBX,EDX                         ; 00412a20
    ADD EAX,ECX                         ; 00412a22
    CMP EDX,ESI                         ; 00412a24
    JG 0x00412a51                       ; 00412a26
        ;   XREF to: 00412a51 (CONDITIONAL_JUMP)  ; LAB_00412a51
    CMP EBX,ESI                         ; 00412a28
    JL 0x00412a51                       ; 00412a2a
        ;   XREF to: 00412a51 (CONDITIONAL_JUMP)  ; LAB_00412a51
    MOV EBP,dword ptr [0x01c5fae0]      ; 00412a2c | DAT_01c5fae0
    CMP ECX,EBP                         ; 00412a32
    JG 0x00412a51                       ; 00412a34
        ;   XREF to: 00412a51 (CONDITIONAL_JUMP)  ; LAB_00412a51
    CMP EAX,EBP                         ; 00412a36
    JL 0x00412a51                       ; 00412a38
        ;   XREF to: 00412a51 (CONDITIONAL_JUMP)  ; LAB_00412a51
    MOV EAX,0x1                         ; 00412a3a
    POP EBP                             ; 00412a3f
    POP ESI                             ; 00412a40
    POP EBX                             ; 00412a41
    LEA EAX,[EAX]                       ; 00412a42
    LEA EDX,[EDX]                       ; 00412a48
    MOV EAX,EAX                         ; 00412a4e
    XOR EAX,EAX                         ; 00412a51
        ;   Label: LAB_00412a51
    POP EBP                             ; 00412a53
    POP ESI                             ; 00412a54
    POP EBX                             ; 00412a55
    RET                                 ; 00412a56

