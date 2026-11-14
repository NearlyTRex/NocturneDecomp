; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_cloth_cpp_FUN_0043fd10(void)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043fd10
        ;   Label: core_cloth.cpp_FUN_0043fd10
    PUSH ESI                            ; 0043fd11
    PUSH EDI                            ; 0043fd12
    MOV ESI,dword ptr [ESP + 0x10]      ; 0043fd13
    MOV EDX,dword ptr [ESP + 0x14]      ; 0043fd17
    MOV ECX,dword ptr [ESI]             ; 0043fd1b
    XOR EBX,EBX                         ; 0043fd1d
    TEST ECX,ECX                        ; 0043fd1f
    JLE 0x0043fd3e                      ; 0043fd21
        ;   XREF to: 0043fd3e (CONDITIONAL_JUMP)  ; LAB_0043fd3e
    MOV ECX,ESI                         ; 0043fd23
    MOV EAX,dword ptr [ECX + 0x194]     ; 0043fd25
        ;   Label: LAB_0043fd25
    ADD EAX,0x3ab24                     ; 0043fd2b
    CMP EAX,EDX                         ; 0043fd30
    JNZ 0x0043fd42                      ; 0043fd32
        ;   XREF to: 0043fd42 (CONDITIONAL_JUMP)  ; LAB_0043fd42
    INC EBX                             ; 0043fd34
    MOV EDI,dword ptr [ESI]             ; 0043fd35
    ADD ECX,0x4                         ; 0043fd37
    CMP EBX,EDI                         ; 0043fd3a
    JL 0x0043fd25                       ; 0043fd3c
        ;   XREF to: 0043fd25 (CONDITIONAL_JUMP)  ; LAB_0043fd25
    POP EDI                             ; 0043fd3e
        ;   Label: LAB_0043fd3e
    POP ESI                             ; 0043fd3f
    POP EBX                             ; 0043fd40
    RET                                 ; 0043fd41
    MOV EDI,dword ptr [EDX]             ; 0043fd42
        ;   Label: LAB_0043fd42
    MOV dword ptr [EAX],EDI             ; 0043fd44
    MOV EDI,dword ptr [EDX + 0x4]       ; 0043fd46
    MOV dword ptr [EAX + 0x4],EDI       ; 0043fd49
    MOV EDI,dword ptr [EDX + 0x8]       ; 0043fd4c
    MOV dword ptr [EAX + 0x8],EDI       ; 0043fd4f
    INC EBX                             ; 0043fd52
    MOV EDI,dword ptr [ESI]             ; 0043fd53
    ADD ECX,0x4                         ; 0043fd55
    CMP EBX,EDI                         ; 0043fd58
    JL 0x0043fd25                       ; 0043fd5a
        ;   XREF to: 0043fd25 (CONDITIONAL_JUMP)  ; LAB_0043fd25
    POP EDI                             ; 0043fd5c
    POP ESI                             ; 0043fd5d
    POP EBX                             ; 0043fd5e
    RET                                 ; 0043fd5f

