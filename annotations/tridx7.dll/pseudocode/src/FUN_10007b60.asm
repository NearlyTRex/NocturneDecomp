; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_10007b60(void)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   FUN_100056a0 at 1000577d
;
; Referenced Globals:
;   undefined4 DAT_10016c64
;   undefined4 DAT_10016d80
;
; Called Functions:
;   __amsg_exit
;   FUN_10005b30
;   FUN_10008830
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 10007b60
        ;   Label: FUN_10007b60
    XOR EDX,EDX                         ; 10007b63
    PUSH EBX                            ; 10007b65
    PUSH ESI                            ; 10007b66
    PUSH EDI                            ; 10007b67
    MOV ESI,dword ptr [0x10016c64]      ; 10007b68 | DAT_10016c64
    PUSH EBP                            ; 10007b6e
    MOV EAX,ESI                         ; 10007b6f
    CMP byte ptr [ESI],DL               ; 10007b71
    JZ 0x10007b8f                       ; 10007b73
        ;   XREF to: 10007b8f (CONDITIONAL_JUMP)  ; LAB_10007b8f
    CMP byte ptr [ESI],0x3d             ; 10007b75
        ;   Label: LAB_10007b75
    JZ 0x10007b7b                       ; 10007b78
        ;   XREF to: 10007b7b (CONDITIONAL_JUMP)  ; LAB_10007b7b
    INC EDX                             ; 10007b7a
    MOV EDI,ESI                         ; 10007b7b
        ;   Label: LAB_10007b7b
    MOV ECX,0xffffffff                  ; 10007b7d
    SUB EAX,EAX                         ; 10007b82
    SCASB.REPNE ES:EDI                  ; 10007b84
    NOT ECX                             ; 10007b86
    ADD ESI,ECX                         ; 10007b88
    CMP byte ptr [ESI],0x0              ; 10007b8a
    JNZ 0x10007b75                      ; 10007b8d
        ;   XREF to: 10007b75 (CONDITIONAL_JUMP)  ; LAB_10007b75
    LEA EAX,[EDX*0x4 + 0x4]             ; 10007b8f
        ;   Label: LAB_10007b8f
    PUSH EAX                            ; 10007b96
    CALL FUN_10008830                   ; 10007b97
        ;   XREF to: 10008830 (UNCONDITIONAL_CALL)  ; undefined FUN_10008830()
    MOV [0x10016d80],EAX                ; 10007b9c | DAT_10016d80
    ADD ESP,0x4                         ; 10007ba1
    MOV EBX,EAX                         ; 10007ba4
    TEST EBX,EBX                        ; 10007ba6
    JNZ 0x10007bb4                      ; 10007ba8
        ;   XREF to: 10007bb4 (CONDITIONAL_JUMP)  ; LAB_10007bb4
    PUSH 0x9                            ; 10007baa
    CALL __amsg_exit                    ; 10007bac
        ;   XREF to: 100058c0 (UNCONDITIONAL_CALL)  ; void __amsg_exit(int param_1)
    ADD ESP,0x4                         ; 10007bb1
    MOV EBP,dword ptr [0x10016c64]      ; 10007bb4 | DAT_10016c64
        ;   Label: LAB_10007bb4
    MOV EAX,EBP                         ; 10007bba
    CMP byte ptr [EBP],0x0              ; 10007bbc
    JZ 0x10007c20                       ; 10007bc0
        ;   XREF to: 10007c20 (CONDITIONAL_JUMP)  ; LAB_10007c20
    MOV EDI,EBP                         ; 10007bc2
        ;   Label: LAB_10007bc2
    MOV ECX,0xffffffff                  ; 10007bc4
    SUB EAX,EAX                         ; 10007bc9
    SCASB.REPNE ES:EDI                  ; 10007bcb
    NOT ECX                             ; 10007bcd
    MOV dword ptr [ESP + 0x10],ECX      ; 10007bcf
    CMP byte ptr [EBP],0x3d             ; 10007bd3
    JZ 0x10007c16                       ; 10007bd7
        ;   XREF to: 10007c16 (CONDITIONAL_JUMP)  ; LAB_10007c16
    PUSH ECX                            ; 10007bd9
    CALL FUN_10008830                   ; 10007bda
        ;   XREF to: 10008830 (UNCONDITIONAL_CALL)  ; undefined FUN_10008830()
    ADD ESP,0x4                         ; 10007bdf
    MOV dword ptr [EBX],EAX             ; 10007be2
    TEST EAX,EAX                        ; 10007be4
    JNZ 0x10007bf2                      ; 10007be6
        ;   XREF to: 10007bf2 (CONDITIONAL_JUMP)  ; LAB_10007bf2
    PUSH 0x9                            ; 10007be8
    CALL __amsg_exit                    ; 10007bea
        ;   XREF to: 100058c0 (UNCONDITIONAL_CALL)  ; void __amsg_exit(int param_1)
    ADD ESP,0x4                         ; 10007bef
    MOV EDI,EBP                         ; 10007bf2
        ;   Label: LAB_10007bf2
    MOV ECX,0xffffffff                  ; 10007bf4
    SUB EAX,EAX                         ; 10007bf9
    SCASB.REPNE ES:EDI                  ; 10007bfb
    NOT ECX                             ; 10007bfd
    SUB EDI,ECX                         ; 10007bff
    MOV EAX,ECX                         ; 10007c01
    SHR ECX,0x2                         ; 10007c03
    MOV ESI,EDI                         ; 10007c06
    MOV EDI,dword ptr [EBX]             ; 10007c08
    ADD EBX,0x4                         ; 10007c0a
    MOVSD.REP ES:EDI,ESI                ; 10007c0d
    MOV ECX,EAX                         ; 10007c0f
    AND ECX,0x3                         ; 10007c11
    MOVSB.REP ES:EDI,ESI                ; 10007c14
    ADD EBP,dword ptr [ESP + 0x10]      ; 10007c16
        ;   Label: LAB_10007c16
    CMP byte ptr [EBP],0x0              ; 10007c1a
    JNZ 0x10007bc2                      ; 10007c1e
        ;   XREF to: 10007bc2 (CONDITIONAL_JUMP)  ; LAB_10007bc2
    MOV EAX,[0x10016c64]                ; 10007c20 | DAT_10016c64
        ;   Label: LAB_10007c20
    PUSH EAX                            ; 10007c25
    CALL FUN_10005b30                   ; 10007c26
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; undefined FUN_10005b30()
    ADD ESP,0x4                         ; 10007c2b
    MOV dword ptr [EBX],0x0             ; 10007c2e
    POP EBP                             ; 10007c34
    POP EDI                             ; 10007c35
    POP ESI                             ; 10007c36
    POP EBX                             ; 10007c37
    ADD ESP,0x4                         ; 10007c38
    RET                                 ; 10007c3b

