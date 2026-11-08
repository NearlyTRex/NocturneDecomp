; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004439b0(int param_1,int *param_2,undefined4 param_3)
;
;
; Called Functions:
;   FUN_00442600
;   FUN_00443830
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004439b0
        ;   Label: FUN_004439b0
    PUSH ESI                            ; 004439b1
    PUSH EDI                            ; 004439b2
    MOV EBX,dword ptr [ESP + 0x14]      ; 004439b3
    MOV ESI,dword ptr [ESP + 0x10]      ; 004439b7
    MOV EDI,dword ptr [ESP + 0x18]      ; 004439bb
    ADD ESI,0x4                         ; 004439bf
    PUSH EBX                            ; 004439c2
        ;   Label: LAB_004439c2
    MOV EAX,dword ptr [EBX]             ; 004439c3
    CALL dword ptr [EAX + 0x4]          ; 004439c5
    ADD ESP,0x4                         ; 004439c8
    TEST EAX,EAX                        ; 004439cb
    JGE 0x004439d8                      ; 004439cd
        ;   XREF to: 004439d8 (CONDITIONAL_JUMP)  ; LAB_004439d8
    MOV EAX,0x1                         ; 004439cf
    POP EDI                             ; 004439d4
    POP ESI                             ; 004439d5
    POP EBX                             ; 004439d6
    RET                                 ; 004439d7
    PUSH EAX                            ; 004439d8
        ;   Label: LAB_004439d8
    CALL FUN_00443830                   ; 004439d9
        ;   XREF to: 00443830 (UNCONDITIONAL_CALL)  ; undefined FUN_00443830()
    ADD ESP,0x4                         ; 004439de
    TEST EAX,EAX                        ; 004439e1
    JL 0x004439c2                       ; 004439e3
        ;   XREF to: 004439c2 (CONDITIONAL_JUMP)  ; LAB_004439c2
    PUSH EDI                            ; 004439e5
    PUSH EAX                            ; 004439e6
    PUSH 0x6                            ; 004439e7
    PUSH ESI                            ; 004439e9
    CALL FUN_00442600                   ; 004439ea
        ;   XREF to: 00442600 (UNCONDITIONAL_CALL)  ; undefined FUN_00442600()
    ADD ESP,0x10                        ; 004439ef
    JMP 0x004439c2                      ; 004439f2
        ;   XREF to: 004439c2 (UNCONDITIONAL_JUMP)  ; LAB_004439c2

