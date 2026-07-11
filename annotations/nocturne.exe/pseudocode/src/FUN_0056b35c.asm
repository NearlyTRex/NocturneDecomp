; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_0056b35c(int *param_1)
;
;
; XREF[2]:
;   FUN_00564ce5 at 00564d6c
;   FUN_00565a13 at 00565aaa
;
; Called Functions:
;   FUN_00568890
;   FUN_0056b3c2
;   FUN_0056fdf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056b35c
        ;   Label: FUN_0056b35c
    MOV EBX,dword ptr [ESP + 0x8]       ; 0056b35d
    MOV EAX,dword ptr [EBX]             ; 0056b361
    MOV EAX,dword ptr [EAX + 0x4]       ; 0056b363
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x8] ; 0056b366
    TEST EAX,EAX                        ; 0056b36a
    JNZ 0x0056b38f                      ; 0056b36c
        ;   XREF to: 0056b38f (CONDITIONAL_JUMP)  ; LAB_0056b38f
    MOV EAX,dword ptr [EBX]             ; 0056b36e
        ;   Label: LAB_0056b36e
    MOV EAX,dword ptr [EAX + 0x4]       ; 0056b370
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0xc] ; 0056b373
    TEST AH,0x40                        ; 0056b377
    JNZ 0x0056b39a                      ; 0056b37a
        ;   XREF to: 0056b39a (CONDITIONAL_JUMP)  ; LAB_0056b39a
    MOV EAX,dword ptr [EBX]             ; 0056b37c
        ;   Label: LAB_0056b37c
    ADD EBX,dword ptr [EAX + 0x4]       ; 0056b37e
    CMP dword ptr [EBX + 0x10],0x0      ; 0056b381
    SETZ AL                             ; 0056b385
    AND EAX,0xff                        ; 0056b388
    POP EBX                             ; 0056b38d
    RET                                 ; 0056b38e
    PUSH EAX                            ; 0056b38f
        ;   Label: LAB_0056b38f
    CALL FUN_0056b3c2                   ; 0056b390
        ;   XREF to: 0056b3c2 (UNCONDITIONAL_CALL)  ; undefined FUN_0056b3c2()
    ADD ESP,0x4                         ; 0056b395
    JMP 0x0056b36e                      ; 0056b398
        ;   XREF to: 0056b36e (UNCONDITIONAL_JUMP)  ; LAB_0056b36e
    PUSH 0x1                            ; 0056b39a
        ;   Label: LAB_0056b39a
    CALL FUN_0056fdf0                   ; 0056b39c
        ;   XREF to: 0056fdf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0056fdf0()
    ADD ESP,0x4                         ; 0056b3a1
    PUSH EAX                            ; 0056b3a4
    CALL FUN_00568890                   ; 0056b3a5
        ;   XREF to: 00568890 (UNCONDITIONAL_CALL)  ; undefined FUN_00568890()
    ADD ESP,0x4                         ; 0056b3aa
    PUSH 0x2                            ; 0056b3ad
    CALL FUN_0056fdf0                   ; 0056b3af
        ;   XREF to: 0056fdf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0056fdf0()
    ADD ESP,0x4                         ; 0056b3b4
    PUSH EAX                            ; 0056b3b7
    CALL FUN_00568890                   ; 0056b3b8
        ;   XREF to: 00568890 (UNCONDITIONAL_CALL)  ; undefined FUN_00568890()
    ADD ESP,0x4                         ; 0056b3bd
    JMP 0x0056b37c                      ; 0056b3c0
        ;   XREF to: 0056b37c (UNCONDITIONAL_JUMP)  ; LAB_0056b37c

