; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0056cd80(int param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_0040c790
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0056cd80
        ;   Label: FUN_0056cd80
    CMP dword ptr [EAX + 0x2d8],0x0     ; 0056cd84
    JZ 0x0056cd93                       ; 0056cd8b
        ;   XREF to: 0056cd93 (CONDITIONAL_JUMP)  ; LAB_0056cd93
    LEA EAX,[EAX]                       ; 0056cd8d
    XOR EAX,EAX                         ; 0056cd90
        ;   Label: LAB_0056cd90
    RET                                 ; 0056cd92
        ;   Label: LAB_0056cd92
    PUSH 0x5d6574                       ; 0056cd93
        ;   Label: LAB_0056cd93
    MOV ECX,dword ptr [ESP + 0xc]       ; 0056cd98
    PUSH ECX                            ; 0056cd9c
    CALL FUN_0040c790                   ; 0056cd9d
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c790()
    ADD ESP,0x8                         ; 0056cda2
    TEST EAX,EAX                        ; 0056cda5
    JZ 0x0056cd92                       ; 0056cda7
        ;   XREF to: 0056cd92 (CONDITIONAL_JUMP)  ; LAB_0056cd92
    MOV EAX,0x2                         ; 0056cda9
    RET                                 ; 0056cdae

