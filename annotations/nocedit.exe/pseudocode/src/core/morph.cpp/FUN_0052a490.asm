; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_morph.cpp_FUN_0052a490()
;
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0052a490
        ;   Label: core_morph.cpp_FUN_0052a490
    MOV EAX,dword ptr [ESP + 0x8]       ; 0052a491
    MOV EDX,dword ptr [ESP + 0xc]       ; 0052a495
    MOV ESI,dword ptr [ESP + 0x10]      ; 0052a499
    XOR ECX,ECX                         ; 0052a49d
    TEST EAX,EAX                        ; 0052a49f
    JLE 0x0052a4b4                      ; 0052a4a1
        ;   XREF to: 0052a4b4 (CONDITIONAL_JUMP)  ; LAB_0052a4b4
    PUSH EBX                            ; 0052a4a3
    MOV EBX,dword ptr [EDX + 0x4]       ; 0052a4a4
        ;   Label: LAB_0052a4a4
    DEC EAX                             ; 0052a4a7
    SUB EBX,0x2                         ; 0052a4a8
    ADD EDX,ESI                         ; 0052a4ab
    ADD ECX,EBX                         ; 0052a4ad
    TEST EAX,EAX                        ; 0052a4af
    JG 0x0052a4a4                       ; 0052a4b1
        ;   XREF to: 0052a4a4 (CONDITIONAL_JUMP)  ; LAB_0052a4a4
    POP EBX                             ; 0052a4b3
    MOV EAX,ECX                         ; 0052a4b4
        ;   Label: LAB_0052a4b4
    POP ESI                             ; 0052a4b6
    RET                                 ; 0052a4b7

