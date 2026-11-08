; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c2019(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; Called Functions:
;   FUN_005c1fd7
;   FUN_005c8e45
;   FUN_005c8e7a
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c2019
        ;   Label: FUN_005c2019
    PUSH ESI                            ; 005c201a
    PUSH EDI                            ; 005c201b
    PUSH EBP                            ; 005c201c
    MOV EBX,dword ptr [ESP + 0x14]      ; 005c201d
    MOV EAX,dword ptr [EBX]             ; 005c2021
    MOV EAX,dword ptr [EAX + 0x4]       ; 005c2023
    ADD EAX,EBX                         ; 005c2026
    MOV EDX,dword ptr [EAX + 0x4]       ; 005c2028
    TEST EDX,EDX                        ; 005c202b
    JZ 0x005c2062                       ; 005c202d
        ;   XREF to: 005c2062 (CONDITIONAL_JUMP)  ; LAB_005c2062
    MOV ECX,dword ptr [ESP + 0x20]      ; 005c202f
    PUSH ECX                            ; 005c2033
    MOV ESI,dword ptr [ESP + 0x20]      ; 005c2034
    PUSH ESI                            ; 005c2038
    MOV EDI,dword ptr [ESP + 0x20]      ; 005c2039
    PUSH EDI                            ; 005c203d
    PUSH EDX                            ; 005c203e
    CALL FUN_005c8e7a                   ; 005c203f
        ;   XREF to: 005c8e7a (UNCONDITIONAL_CALL)  ; undefined FUN_005c8e7a()
    ADD ESP,0x10                        ; 005c2044
    TEST EAX,EAX                        ; 005c2047
    JNZ 0x005c2067                      ; 005c2049
        ;   XREF to: 005c2067 (CONDITIONAL_JUMP)  ; LAB_005c2067
    MOV EAX,dword ptr [EBX]             ; 005c204b
    MOV EDX,dword ptr [EAX + 0x4]       ; 005c204d
    PUSH 0x2                            ; 005c2050
    ADD EBX,EDX                         ; 005c2052
    PUSH EBX                            ; 005c2054
    CALL FUN_005c8e45                   ; 005c2055
        ;   XREF to: 005c8e45 (UNCONDITIONAL_CALL)  ; undefined FUN_005c8e45()
        ;   Label: LAB_005c2055
    ADD ESP,0x8                         ; 005c205a
        ;   Label: LAB_005c205a
    POP EBP                             ; 005c205d
    POP EDI                             ; 005c205e
    POP ESI                             ; 005c205f
    POP EBX                             ; 005c2060
    RET                                 ; 005c2061
    PUSH 0x2                            ; 005c2062
        ;   Label: LAB_005c2062
    PUSH EAX                            ; 005c2064
    JMP 0x005c2055                      ; 005c2065
        ;   XREF to: 005c2055 (UNCONDITIONAL_JUMP)  ; LAB_005c2055
    MOV EAX,dword ptr [EBX]             ; 005c2067
        ;   Label: LAB_005c2067
    MOV EBP,dword ptr [EAX + 0x4]       ; 005c2069
    PUSH 0x0                            ; 005c206c
    ADD EBX,EBP                         ; 005c206e
    PUSH EBX                            ; 005c2070
    CALL FUN_005c1fd7                   ; 005c2071
        ;   XREF to: 005c1fd7 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1fd7()
    JMP 0x005c205a                      ; 005c2076
        ;   XREF to: 005c205a (UNCONDITIONAL_JUMP)  ; LAB_005c205a

