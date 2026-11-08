; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_0057dc70(int param_1,byte param_2)
;
;
; Called Functions:
;   FUN_005bab40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057dc70
        ;   Label: FUN_0057dc70
    MOV EAX,dword ptr [ESP + 0x8]       ; 0057dc71
    MOV EDX,dword ptr [EAX + 0x4]       ; 0057dc75
    TEST EDX,EDX                        ; 0057dc78
    JNZ 0x0057dc83                      ; 0057dc7a
        ;   XREF to: 0057dc83 (CONDITIONAL_JUMP)  ; LAB_0057dc83
    MOV EAX,0xfffffffe                  ; 0057dc7c
        ;   Label: LAB_0057dc7c
    POP EBX                             ; 0057dc81
    RET                                 ; 0057dc82
    XOR EBX,EBX                         ; 0057dc83
        ;   Label: LAB_0057dc83
    PUSH EDX                            ; 0057dc85
    MOV BL,byte ptr [ESP + 0x10]        ; 0057dc86
    PUSH EBX                            ; 0057dc8a
    CALL FUN_005bab40                   ; 0057dc8b
        ;   XREF to: 005bab40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bab40()
    ADD ESP,0x8                         ; 0057dc90
    CMP EAX,EBX                         ; 0057dc93
    JNZ 0x0057dc7c                      ; 0057dc95
        ;   XREF to: 0057dc7c (CONDITIONAL_JUMP)  ; LAB_0057dc7c
    XOR EAX,EBX                         ; 0057dc97
    POP EBX                             ; 0057dc99
    RET                                 ; 0057dc9a

