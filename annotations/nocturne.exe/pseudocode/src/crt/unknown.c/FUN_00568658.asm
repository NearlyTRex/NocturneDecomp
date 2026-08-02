; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_00568658(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_0056de90 at 0056de9a
;
; Referenced Globals:
;   undefined4 DAT_02de4e24
;
; Called Functions:
;   crt_unknown.c_FUN_005638d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00568658
        ;   Label: crt_unknown.c_FUN_00568658
    CMP dword ptr [0x02de4e24],0x0      ; 00568659 | DAT_02de4e24
    JZ 0x0056867c                       ; 00568660
        ;   XREF to: 0056867c (CONDITIONAL_JUMP)  ; LAB_0056867c
    MOV EAX,[0x02de4e24]                ; 00568662 | DAT_02de4e24
        ;   Label: LAB_00568662
    PUSH EAX                            ; 00568667
    MOV EBX,dword ptr [EAX]             ; 00568668
    CALL crt_unknown.c_FUN_005638d0     ; 0056866a
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005638d0()
    ADD ESP,0x4                         ; 0056866f
    MOV dword ptr [0x02de4e24],EBX      ; 00568672 | DAT_02de4e24
    TEST EBX,EBX                        ; 00568678
    JNZ 0x00568662                      ; 0056867a
        ;   XREF to: 00568662 (CONDITIONAL_JUMP)  ; LAB_00568662
    POP EBX                             ; 0056867c
        ;   Label: LAB_0056867c
    RET                                 ; 0056867d

