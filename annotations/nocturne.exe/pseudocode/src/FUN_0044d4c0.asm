; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0044d4c0(int param_1)
;
;
; XREF[2]:
;   FUN_0044d440 at 0044d446
;   FUN_0044d460 at 0044d466
;
; Called Functions:
;   FUN_005638d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044d4c0
        ;   Label: FUN_0044d4c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0044d4c1
    MOV EDX,dword ptr [EBX + 0x300]     ; 0044d4c5
    TEST EDX,EDX                        ; 0044d4cb
    JNZ 0x0044d4d1                      ; 0044d4cd
        ;   XREF to: 0044d4d1 (CONDITIONAL_JUMP)  ; LAB_0044d4d1
    POP EBX                             ; 0044d4cf
    RET                                 ; 0044d4d0
    PUSH EDX                            ; 0044d4d1
        ;   Label: LAB_0044d4d1
    CALL FUN_005638d0                   ; 0044d4d2
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005638d0()
    ADD ESP,0x4                         ; 0044d4d7
    MOV dword ptr [EBX + 0x300],0x0     ; 0044d4da
    POP EBX                             ; 0044d4e4
    RET                                 ; 0044d4e5

