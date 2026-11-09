; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_0051202c(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_01d2257c
;   undefined4 DAT_01d22580
;   undefined4 DAT_01d24ffc
;
; Called Functions:
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    LEA EDX,[EDX]                       ; 0051202c
        ;   Label: engine_mini3d.cpp_FUN_0051202c
    PUSH EDI                            ; 00512030
    MOV EDX,dword ptr [0x01d22580]      ; 00512031 | DAT_01d22580
    DEC EDX                             ; 00512037
    MOV dword ptr [0x01d22580],EDX      ; 00512038 | DAT_01d22580
    TEST EDX,EDX                        ; 0051203e
    JL 0x0051206b                       ; 00512040
        ;   XREF to: 0051206b (CONDITIONAL_JUMP)  ; LAB_0051206b
    MOV EAX,[0x01d22580]                ; 00512042 | DAT_01d22580
        ;   Label: LAB_00512042
    SHL EAX,0x2                         ; 00512047
    MOV EDX,EAX                         ; 0051204a
    SHL EAX,0x4                         ; 0051204c
    SUB EAX,EDX                         ; 0051204f
    MOV EDX,0x1d22584                   ; 00512051
    MOV EDI,0x1                         ; 00512056
    ADD EDX,EAX                         ; 0051205b
    MOV dword ptr [0x01d24ffc],EDI      ; 0051205d | DAT_01d24ffc
    MOV dword ptr [0x01d2257c],EDX      ; 00512063 | DAT_01d2257c
    POP EDI                             ; 00512069
    RET                                 ; 0051206a
    PUSH ESI                            ; 0051206b
        ;   Label: LAB_0051206b
    PUSH EBX                            ; 0051206c
    MOV EBX,0x5e8c0f                    ; 0051206d
    MOV ESI,0x4cf                       ; 00512072
    PUSH 0x5e8c24                       ; 00512077
    MOV dword ptr [0x01d1d400],EBX      ; 0051207c | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 00512082 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00512088
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0051208d
    POP EBX                             ; 00512090
    POP ESI                             ; 00512091
    JMP 0x00512042                      ; 00512092
        ;   XREF to: 00512042 (UNCONDITIONAL_JUMP)  ; LAB_00512042

