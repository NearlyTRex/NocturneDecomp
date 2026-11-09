; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void wincore_wddvmem_cpp_FUN_00579b1e(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005fba18
;   undefined4 DAT_005fba1c
;   undefined4 DAT_005fba20
;   undefined4 DAT_0060b010
;   undefined4 DAT_0072ffac
;
; *****************************************************************************

section .text

    MOV ECX,ECX                         ; 00579b1e
        ;   Label: wincore_wddvmem.cpp_FUN_00579b1e
    PUSH EBP                            ; 00579b20
    SUB ESP,0x4                         ; 00579b21
    MOV EDX,dword ptr [0x005fba1c]      ; 00579b24 | DAT_005fba1c
    XOR ECX,ECX                         ; 00579b2a
    TEST EDX,EDX                        ; 00579b2c
    JLE 0x00579b9d                      ; 00579b2e
        ;   XREF to: 00579b9d (CONDITIONAL_JUMP)  ; LAB_00579b9d
    PUSH EDI                            ; 00579b30
    PUSH ESI                            ; 00579b31
    PUSH EBX                            ; 00579b32
    MOV EAX,[0x005fba20]                ; 00579b33 | DAT_005fba20
    MOV EDX,EAX                         ; 00579b38
    SAR EDX,0x1f                        ; 00579b3a
    SHL EDX,0x3                         ; 00579b3d
    SBB EAX,EDX                         ; 00579b40
    SAR EAX,0x3                         ; 00579b42
    MOV EDI,EAX                         ; 00579b45
    MOV EAX,[0x005fba18]                ; 00579b47 | DAT_005fba18
    SHL EAX,0x2                         ; 00579b4c
    MOV EBP,dword ptr [0x005fba18]      ; 00579b4f | DAT_005fba18
    MOV dword ptr [ESP + 0xc],EAX       ; 00579b55
    XOR EAX,EAX                         ; 00579b59
    IMUL EDX,EBP,0x0                    ; 00579b5b
    MOV EBX,dword ptr [0x005fba18]      ; 00579b5e | DAT_005fba18
        ;   Label: LAB_00579b5e
    IMUL EBX,ECX                        ; 00579b64
    IMUL EBX,EDI                        ; 00579b67
    MOV ESI,dword ptr [0x0060b010]      ; 00579b6a | DAT_0060b010
    ADD EBX,ESI                         ; 00579b70
    MOV dword ptr [EAX + 0x1c5faec],EBX ; 00579b72
    MOV EBX,dword ptr [0x0072ffac]      ; 00579b78 | DAT_0072ffac
    ADD EAX,0x4                         ; 00579b7e
    ADD EBX,EDX                         ; 00579b81
    INC ECX                             ; 00579b83
    MOV dword ptr [EAX + 0x1c60da8],EBX ; 00579b84
    MOV EBX,dword ptr [ESP + 0xc]       ; 00579b8a
    MOV ESI,dword ptr [0x005fba1c]      ; 00579b8e | DAT_005fba1c
    ADD EDX,EBX                         ; 00579b94
    CMP ECX,ESI                         ; 00579b96
    JL 0x00579b5e                       ; 00579b98
        ;   XREF to: 00579b5e (CONDITIONAL_JUMP)  ; LAB_00579b5e
    POP EBX                             ; 00579b9a
    POP ESI                             ; 00579b9b
    POP EDI                             ; 00579b9c
    ADD ESP,0x4                         ; 00579b9d
        ;   Label: LAB_00579b9d
    POP EBP                             ; 00579ba0
    RET                                 ; 00579ba1

