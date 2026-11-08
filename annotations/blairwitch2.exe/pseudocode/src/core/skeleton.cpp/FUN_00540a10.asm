; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00540a10(int param_1,char *param_2)
;
;
; XREF[1]:
;   FUN_00548fc0 at 00549033
;
; Referenced Globals:
;   undefined4 DAT_005e696f
;   undefined4 DAT_005e6972
;   TerminatedCString s_core_skeleton_cpp_005e6977
;   TerminatedCString s_CSkeleton_load_Can_t_ope_005e698c
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_00460c70
;   FUN_004e4500
;   FUN_00540aa0
;   FUN_005b89c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00540a10
        ;   Label: FUN_00540a10
    PUSH ESI                            ; 00540a11
    PUSH EDI                            ; 00540a12
    MOV EDI,dword ptr [ESP + 0x10]      ; 00540a13
    MOV ESI,dword ptr [ESP + 0x14]      ; 00540a17
    PUSH 0x5e696f                       ; 00540a1b | DAT_005e696f
    PUSH ESI                            ; 00540a20
    PUSH 0x5e6972                       ; 00540a21 | DAT_005e6972
    CALL FUN_00460c70                   ; 00540a26
        ;   XREF to: 00460c70 (UNCONDITIONAL_CALL)  ; undefined FUN_00460c70()
    ADD ESP,0xc                         ; 00540a2b
    MOV EBX,EAX                         ; 00540a2e
    TEST EAX,EAX                        ; 00540a30
    JZ 0x00540a6b                       ; 00540a32
        ;   XREF to: 00540a6b (CONDITIONAL_JUMP)  ; LAB_00540a6b
    PUSH EBX                            ; 00540a34
        ;   Label: LAB_00540a34
    PUSH EDI                            ; 00540a35
    CALL FUN_00540aa0                   ; 00540a36
        ;   XREF to: 00540aa0 (UNCONDITIONAL_CALL)  ; undefined FUN_00540aa0()
    ADD ESP,0x8                         ; 00540a3b
    ADD EDI,0x1d1a8                     ; 00540a3e
    PUSH EDI                            ; 00540a44
    MOV AL,byte ptr [ESI]               ; 00540a45
        ;   Label: LAB_00540a45
    MOV byte ptr [EDI],AL               ; 00540a47
    CMP AL,0x0                          ; 00540a49
    JZ 0x00540a5d                       ; 00540a4b
        ;   XREF to: 00540a5d (CONDITIONAL_JUMP)  ; LAB_00540a5d
    MOV AL,byte ptr [ESI + 0x1]         ; 00540a4d
    ADD ESI,0x2                         ; 00540a50
    MOV byte ptr [EDI + 0x1],AL         ; 00540a53
    ADD EDI,0x2                         ; 00540a56
    CMP AL,0x0                          ; 00540a59
    JNZ 0x00540a45                      ; 00540a5b
        ;   XREF to: 00540a45 (CONDITIONAL_JUMP)  ; LAB_00540a45
    POP EDI                             ; 00540a5d
        ;   Label: LAB_00540a5d
    PUSH EBX                            ; 00540a5e
    CALL FUN_005b89c0                   ; 00540a5f
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b89c0()
    ADD ESP,0x4                         ; 00540a64
    POP EDI                             ; 00540a67
    POP ESI                             ; 00540a68
    POP EBX                             ; 00540a69
    RET                                 ; 00540a6a
    PUSH ESI                            ; 00540a6b
        ;   Label: LAB_00540a6b
    MOV EDX,0x5e6977                    ; 00540a6c | = "..\\core\\skeleton.cpp"
    MOV ECX,0x100                       ; 00540a71
    PUSH 0x5e698c                       ; 00540a76 | = "CSkeleton::load - Can't open %s"
    MOV dword ptr [0x01d046a0],EDX      ; 00540a7b | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 00540a81 | DAT_01d046a4
    CALL FUN_004e4500                   ; 00540a87
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x8                         ; 00540a8c
    JMP 0x00540a34                      ; 00540a8f
        ;   XREF to: 00540a34 (UNCONDITIONAL_JUMP)  ; LAB_00540a34

