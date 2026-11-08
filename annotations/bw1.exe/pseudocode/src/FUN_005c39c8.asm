; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c39c8(undefined4 param_1,char *param_2,int param_3)
;
;
; XREF[1]:
;   FUN_005c3c08 at 005c4115
;
; Called Functions:
;   FUN_005c9e48
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c39c8
        ;   Label: FUN_005c39c8
    PUSH ESI                            ; 005c39c9
    PUSH EDI                            ; 005c39ca
    PUSH EBP                            ; 005c39cb
    MOV EBP,dword ptr [ESP + 0x18]      ; 005c39cc
    PUSH 0x10                           ; 005c39d0
    PUSH EBP                            ; 005c39d2
    MOV EDX,dword ptr [ESP + 0x1c]      ; 005c39d3
    PUSH EDX                            ; 005c39d7
    CALL FUN_005c9e48                   ; 005c39d8
        ;   XREF to: 005c9e48 (UNCONDITIONAL_CALL)  ; undefined FUN_005c9e48()
    ADD ESP,0xc                         ; 005c39dd
    MOV EDI,EBP                         ; 005c39e0
    PUSH ES                             ; 005c39e2
    MOV AX,DS                           ; 005c39e3
    MOV ES,AX                           ; 005c39e5
    SUB ECX,ECX                         ; 005c39e7
    DEC ECX                             ; 005c39e9
    XOR EAX,EAX                         ; 005c39ea
    SCASB.REPNE ES:EDI                  ; 005c39ec
    NOT ECX                             ; 005c39ee
    DEC ECX                             ; 005c39f0
    POP ES                              ; 005c39f1
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005c39f2
    DEC EAX                             ; 005c39f6
    TEST ECX,ECX                        ; 005c39f7
    JZ 0x005c3a10                       ; 005c39f9
        ;   XREF to: 005c3a10 (CONDITIONAL_JUMP)  ; LAB_005c3a10
    MOV ESI,EBP                         ; 005c39fb
    LEA EBX,[EAX + EBP*0x1]             ; 005c39fd
    LEA EDX,[ECX + EBP*0x1]             ; 005c3a00
    DEC EBX                             ; 005c3a03
        ;   Label: LAB_005c3a03
    MOV CL,byte ptr [EDX + -0x1]        ; 005c3a04
    DEC EDX                             ; 005c3a07
    DEC EAX                             ; 005c3a08
    MOV byte ptr [EBX + 0x1],CL         ; 005c3a09
    CMP EDX,ESI                         ; 005c3a0c
    JNZ 0x005c3a03                      ; 005c3a0e
        ;   XREF to: 005c3a03 (CONDITIONAL_JUMP)  ; LAB_005c3a03
    LEA EDX,[EAX + EBP*0x1]             ; 005c3a10
        ;   Label: LAB_005c3a10
    TEST EAX,EAX                        ; 005c3a13
        ;   Label: LAB_005c3a13
    JL 0x005c3a1e                       ; 005c3a15
        ;   XREF to: 005c3a1e (CONDITIONAL_JUMP)  ; LAB_005c3a1e
    DEC EAX                             ; 005c3a17
    MOV byte ptr [EDX],0x30             ; 005c3a18
    DEC EDX                             ; 005c3a1b
    JMP 0x005c3a13                      ; 005c3a1c
        ;   XREF to: 005c3a13 (UNCONDITIONAL_JUMP)  ; LAB_005c3a13
    ADD EBP,dword ptr [ESP + 0x1c]      ; 005c3a1e
        ;   Label: LAB_005c3a1e
    MOV byte ptr [EBP],0x0              ; 005c3a22
    POP EBP                             ; 005c3a26
    POP EDI                             ; 005c3a27
    POP ESI                             ; 005c3a28
    POP EBX                             ; 005c3a29
    RET                                 ; 005c3a2a

