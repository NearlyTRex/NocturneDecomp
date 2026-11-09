; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005a4dac(int *param_1)
;
;
; XREF[1]:
;   engine_dosio.cpp_reopenFileStream_FUN_00465a80 at 00465a98
;
; Called Functions:
;   crt_unknown.c_FUN_005abc3c
;   crt_unknown.c_FUN_005abc85
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a4dac
        ;   Label: crt_unknown.c_FUN_005a4dac
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a4dad
    MOV EAX,dword ptr [EBX]             ; 005a4db1
    MOV EAX,dword ptr [EAX + 0x4]       ; 005a4db3
    ADD EAX,EBX                         ; 005a4db6
    MOV EDX,dword ptr [EAX + 0x4]       ; 005a4db8
    TEST EDX,EDX                        ; 005a4dbb
    JZ 0x005a4dce                       ; 005a4dbd
        ;   XREF to: 005a4dce (CONDITIONAL_JUMP)  ; LAB_005a4dce
    PUSH EDX                            ; 005a4dbf
    CALL crt_unknown.c_FUN_005abc3c     ; 005a4dc0
        ;   XREF to: 005abc3c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005abc3c()
    ADD ESP,0x4                         ; 005a4dc5
    TEST EAX,EAX                        ; 005a4dc8
    JZ 0x005a4ddb                       ; 005a4dca
        ;   XREF to: 005a4ddb (CONDITIONAL_JUMP)  ; LAB_005a4ddb
    POP EBX                             ; 005a4dcc
    RET                                 ; 005a4dcd
    PUSH 0x2                            ; 005a4dce
        ;   Label: LAB_005a4dce
    PUSH EAX                            ; 005a4dd0
    CALL crt_unknown.c_FUN_005abc85     ; 005a4dd1
        ;   XREF to: 005abc85 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005abc85()
        ;   Label: LAB_005a4dd1
    ADD ESP,0x8                         ; 005a4dd6
    POP EBX                             ; 005a4dd9
    RET                                 ; 005a4dda
    MOV EAX,dword ptr [EBX]             ; 005a4ddb
        ;   Label: LAB_005a4ddb
    MOV EDX,dword ptr [EAX + 0x4]       ; 005a4ddd
    PUSH 0x2                            ; 005a4de0
    ADD EBX,EDX                         ; 005a4de2
    PUSH EBX                            ; 005a4de4
    JMP 0x005a4dd1                      ; 005a4de5
        ;   XREF to: 005a4dd1 (UNCONDITIONAL_JUMP)  ; LAB_005a4dd1

