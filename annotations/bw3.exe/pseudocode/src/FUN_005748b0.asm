; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_005748b0(int param_1,byte param_2)
;
;
; Called Functions:
;   FUN_005a5d70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005748b0
        ;   Label: FUN_005748b0
    MOV EAX,dword ptr [ESP + 0x8]       ; 005748b1
    MOV EDX,dword ptr [EAX + 0x4]       ; 005748b5
    TEST EDX,EDX                        ; 005748b8
    JNZ 0x005748c3                      ; 005748ba
        ;   XREF to: 005748c3 (CONDITIONAL_JUMP)  ; LAB_005748c3
    MOV EAX,0xfffffffe                  ; 005748bc
        ;   Label: LAB_005748bc
    POP EBX                             ; 005748c1
    RET                                 ; 005748c2
    XOR EBX,EBX                         ; 005748c3
        ;   Label: LAB_005748c3
    PUSH EDX                            ; 005748c5
    MOV BL,byte ptr [ESP + 0x10]        ; 005748c6
    PUSH EBX                            ; 005748ca
    CALL FUN_005a5d70                   ; 005748cb
        ;   XREF to: 005a5d70 (UNCONDITIONAL_CALL)  ; undefined FUN_005a5d70()
    ADD ESP,0x8                         ; 005748d0
    CMP EAX,EBX                         ; 005748d3
    JNZ 0x005748bc                      ; 005748d5
        ;   XREF to: 005748bc (CONDITIONAL_JUMP)  ; LAB_005748bc
    XOR EAX,EBX                         ; 005748d7
    POP EBX                             ; 005748d9
    RET                                 ; 005748da

