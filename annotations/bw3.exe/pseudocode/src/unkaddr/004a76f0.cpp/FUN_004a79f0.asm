; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int unkaddr_004a76f0_cpp_FUN_004a79f0(undefined4 param_1,int *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01d0d210
;
; Called Functions:
;   core_fldnotes.cpp_FUN_004a9c30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a79f0
        ;   Label: unkaddr_004a76f0.cpp_FUN_004a79f0
    PUSH ESI                            ; 004a79f1
    PUSH EDI                            ; 004a79f2
    MOV EDI,dword ptr [ESP + 0x10]      ; 004a79f3
    MOV EDX,dword ptr [0x01d0d210]      ; 004a79f7 | DAT_01d0d210
    XOR EBX,EBX                         ; 004a79fd
    TEST EDX,EDX                        ; 004a79ff
    JLE 0x004a7a39                      ; 004a7a01
        ;   XREF to: 004a7a39 (CONDITIONAL_JUMP)  ; LAB_004a7a39
    MOV ESI,0x1d0d214                   ; 004a7a03
    PUSH EDI                            ; 004a7a08
        ;   Label: LAB_004a7a08
    PUSH ESI                            ; 004a7a09
    CALL core_fldnotes.cpp_FUN_004a9c30 ; 004a7a0a
        ;   XREF to: 004a9c30 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004a9c30()
    ADD ESP,0x8                         ; 004a7a0f
    MOV EDX,EAX                         ; 004a7a12
    TEST EAX,EAX                        ; 004a7a14
    JZ 0x004a7a28                       ; 004a7a16
        ;   XREF to: 004a7a28 (CONDITIONAL_JUMP)  ; LAB_004a7a28
    MOV ESI,dword ptr [ESP + 0x14]      ; 004a7a18
    TEST ESI,ESI                        ; 004a7a1c
    JZ 0x004a7a22                       ; 004a7a1e
        ;   XREF to: 004a7a22 (CONDITIONAL_JUMP)  ; LAB_004a7a22
    MOV dword ptr [ESI],EBX             ; 004a7a20
    MOV EAX,EDX                         ; 004a7a22
        ;   Label: LAB_004a7a22
    POP EDI                             ; 004a7a24
    POP ESI                             ; 004a7a25
    POP EBX                             ; 004a7a26
    RET                                 ; 004a7a27
    MOV ECX,dword ptr [0x01d0d210]      ; 004a7a28 | DAT_01d0d210
        ;   Label: LAB_004a7a28
    INC EBX                             ; 004a7a2e
    ADD ESI,0x2e4                       ; 004a7a2f
    CMP EBX,ECX                         ; 004a7a35
    JL 0x004a7a08                       ; 004a7a37
        ;   XREF to: 004a7a08 (CONDITIONAL_JUMP)  ; LAB_004a7a08
    XOR EAX,EAX                         ; 004a7a39
        ;   Label: LAB_004a7a39
    POP EDI                             ; 004a7a3b
    POP ESI                             ; 004a7a3c
    POP EBX                             ; 004a7a3d
    RET                                 ; 004a7a3e

