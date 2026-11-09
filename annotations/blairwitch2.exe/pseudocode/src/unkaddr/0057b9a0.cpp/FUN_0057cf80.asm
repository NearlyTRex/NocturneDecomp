; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint unkaddr_0057b9a0_cpp_FUN_0057cf80(int param_1)
;
;
; Called Functions:
;   support_trstream.cpp_FUN_0057d280
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057cf80
        ;   Label: unkaddr_0057b9a0.cpp_FUN_0057cf80
    PUSH ESI                            ; 0057cf81
    MOV EBX,dword ptr [ESP + 0xc]       ; 0057cf82
    CMP dword ptr [EBX + 0x4],0x0       ; 0057cf86
    JZ 0x0057cfbb                       ; 0057cf8a
        ;   XREF to: 0057cfbb (CONDITIONAL_JUMP)  ; LAB_0057cfbb
    MOV ECX,dword ptr [EBX + 0x8]       ; 0057cf8c
    CMP ECX,dword ptr [EBX + 0x10]      ; 0057cf8f
    JLE 0x0057cfc3                      ; 0057cf92
        ;   XREF to: 0057cfc3 (CONDITIONAL_JUMP)  ; LAB_0057cfc3
    MOV ESI,dword ptr [EBX + 0x10]      ; 0057cf94
    MOV EAX,dword ptr [EBX + 0x1c]      ; 0057cf97
    CMP EAX,ESI                         ; 0057cf9a
    JG 0x0057cfcb                       ; 0057cf9c
        ;   XREF to: 0057cfcb (CONDITIONAL_JUMP)  ; LAB_0057cfcb
    ADD EAX,dword ptr [EBX + 0x24]      ; 0057cf9e
    CMP EAX,ESI                         ; 0057cfa1
    JLE 0x0057cfcb                      ; 0057cfa3
        ;   XREF to: 0057cfcb (CONDITIONAL_JUMP)  ; LAB_0057cfcb
    MOV EDX,dword ptr [EBX + 0x1c]      ; 0057cfa5
        ;   Label: LAB_0057cfa5
    MOV EAX,dword ptr [EBX + 0x10]      ; 0057cfa8
    MOV EBX,dword ptr [EBX + 0x18]      ; 0057cfab
    SUB EAX,EDX                         ; 0057cfae
    MOV AL,byte ptr [EBX + EAX*0x1]     ; 0057cfb0
    AND EAX,0xff                        ; 0057cfb3
    POP ESI                             ; 0057cfb8
    POP EBX                             ; 0057cfb9
    RET                                 ; 0057cfba
    MOV EAX,0xfffffffe                  ; 0057cfbb
        ;   Label: LAB_0057cfbb
    POP ESI                             ; 0057cfc0
    POP EBX                             ; 0057cfc1
    RET                                 ; 0057cfc2
    MOV EAX,0xffffffff                  ; 0057cfc3
        ;   Label: LAB_0057cfc3
    POP ESI                             ; 0057cfc8
    POP EBX                             ; 0057cfc9
    RET                                 ; 0057cfca
    PUSH EBX                            ; 0057cfcb
        ;   Label: LAB_0057cfcb
    CALL support_trstream.cpp_FUN_0057d280 ; 0057cfcc
        ;   XREF to: 0057d280 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_0057d280()
    ADD ESP,0x4                         ; 0057cfd1
    TEST EAX,EAX                        ; 0057cfd4
    JNZ 0x0057cfa5                      ; 0057cfd6
        ;   XREF to: 0057cfa5 (CONDITIONAL_JUMP)  ; LAB_0057cfa5
    MOV EAX,0xffffffff                  ; 0057cfd8
    POP ESI                             ; 0057cfdd
    POP EBX                             ; 0057cfde
    RET                                 ; 0057cfdf

