; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_skeledit_cpp_FUN_0058ac30(void)
;
;
; XREF[2]:
;   core_skeledit.cpp_CBoneStructure_readBONheader_FUN_0058a4a0 at 0058a90c
;   core_skeledit.cpp_FUN_0058bd00 at 0058be16
;
; Called Functions:
;   crt_stack.c___STK_FUN_005ff9f3
;   crt_string.c__stricmp_FUN_005fe7f0
;
; *****************************************************************************

section .text

    PUSH 0x1c                           ; 0058ac30
        ;   Label: core_skeledit.cpp_FUN_0058ac30
    CALL crt_stack.c___STK_FUN_005ff9f3 ; 0058ac35
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)  ; void crt_stack.c___STK_FUN_005ff9f3()
    PUSH EBX                            ; 0058ac3a
    PUSH ESI                            ; 0058ac3b
    PUSH EDI                            ; 0058ac3c
    PUSH EBP                            ; 0058ac3d
    MOV EDI,dword ptr [ESP + 0x14]      ; 0058ac3e
    MOV EBP,dword ptr [ESP + 0x18]      ; 0058ac42
    MOV EDX,dword ptr [EDI]             ; 0058ac46
    XOR EBX,EBX                         ; 0058ac48
    TEST EDX,EDX                        ; 0058ac4a
    JLE 0x0058ac6c                      ; 0058ac4c
        ;   XREF to: 0058ac6c (CONDITIONAL_JUMP)  ; LAB_0058ac6c
    LEA ESI,[EDI + 0x4]                 ; 0058ac4e
    PUSH EBP                            ; 0058ac51
        ;   Label: LAB_0058ac51
    PUSH ESI                            ; 0058ac52
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 0058ac53
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0058ac58
    TEST EAX,EAX                        ; 0058ac5b
    JZ 0x0058ac76                       ; 0058ac5d
        ;   XREF to: 0058ac76 (CONDITIONAL_JUMP)  ; LAB_0058ac76
    INC EBX                             ; 0058ac5f
    MOV ECX,dword ptr [EDI]             ; 0058ac60
    ADD ESI,0x84                        ; 0058ac62
    CMP EBX,ECX                         ; 0058ac68
    JL 0x0058ac51                       ; 0058ac6a
        ;   XREF to: 0058ac51 (CONDITIONAL_JUMP)  ; LAB_0058ac51
    MOV EAX,0xffffffff                  ; 0058ac6c
        ;   Label: LAB_0058ac6c
    POP EBP                             ; 0058ac71
    POP EDI                             ; 0058ac72
    POP ESI                             ; 0058ac73
    POP EBX                             ; 0058ac74
    RET                                 ; 0058ac75
    MOV EAX,EBX                         ; 0058ac76
        ;   Label: LAB_0058ac76
    POP EBP                             ; 0058ac78
    POP EDI                             ; 0058ac79
    POP ESI                             ; 0058ac7a
    POP EBX                             ; 0058ac7b
    RET                                 ; 0058ac7c

