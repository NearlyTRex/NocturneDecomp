; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005a4390(undefined4 param_1,undefined1 *param_2,undefined4 param_3)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   crt_stdio.c_fopen_FUN_005a43ec at 005a43f9
;
; Called Functions:
;   crt_unknown.c_FUN_005a4140
;   crt_unknown.c_FUN_005a427c
;   crt_unknown.c_FUN_005a9890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a4390
        ;   Label: crt_unknown.c_FUN_005a4390
    PUSH ESI                            ; 005a4391
    PUSH EDI                            ; 005a4392
    SUB ESP,0x4                         ; 005a4393
    MOV EAX,ESP                         ; 005a4396
    PUSH EAX                            ; 005a4398
    MOV EDX,dword ptr [ESP + 0x1c]      ; 005a4399
    PUSH EDX                            ; 005a439d
    CALL crt_unknown.c_FUN_005a4140     ; 005a439e
        ;   XREF to: 005a4140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a4140()
    MOV EBX,EAX                         ; 005a43a3
    ADD ESP,0x8                         ; 005a43a5
    TEST EAX,EAX                        ; 005a43a8
    JZ 0x005a43e2                       ; 005a43aa
        ;   XREF to: 005a43e2 (CONDITIONAL_JUMP)  ; LAB_005a43e2
    PUSH 0x0                            ; 005a43ac
    CALL crt_unknown.c_FUN_005a9890     ; 005a43ae
        ;   XREF to: 005a9890 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a9890()
    ADD ESP,0x4                         ; 005a43b3
    MOV EDX,EAX                         ; 005a43b6
    TEST EAX,EAX                        ; 005a43b8
    JZ 0x005a43e0                       ; 005a43ba
        ;   XREF to: 005a43e0 (CONDITIONAL_JUMP)  ; LAB_005a43e0
    PUSH EAX                            ; 005a43bc
    MOV ECX,dword ptr [ESP + 0x20]      ; 005a43bd
    PUSH ECX                            ; 005a43c1
    MOV ESI,dword ptr [ESP + 0x8]       ; 005a43c2
    PUSH ESI                            ; 005a43c6
    MOV EDX,dword ptr [ESP + 0x24]      ; 005a43c7
    XOR EAX,EAX                         ; 005a43cb
    PUSH EBX                            ; 005a43cd
    MOV AL,byte ptr [EDX]               ; 005a43ce
    PUSH EAX                            ; 005a43d0
    MOV EDI,dword ptr [ESP + 0x28]      ; 005a43d1
    PUSH EDI                            ; 005a43d5
    CALL crt_unknown.c_FUN_005a427c     ; 005a43d6
        ;   XREF to: 005a427c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a427c()
    ADD ESP,0x18                        ; 005a43db
    MOV EDX,EAX                         ; 005a43de
    MOV EAX,EDX                         ; 005a43e0
        ;   Label: LAB_005a43e0
    ADD ESP,0x4                         ; 005a43e2
        ;   Label: LAB_005a43e2
    POP EDI                             ; 005a43e5
    POP ESI                             ; 005a43e6
    POP EBX                             ; 005a43e7
    RET                                 ; 005a43e8

