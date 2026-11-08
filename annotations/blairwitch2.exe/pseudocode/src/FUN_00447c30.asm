; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00447c30(int param_1)
;
;
; XREF[2]:
;   FUN_00447c10 at 00447c16
;   FUN_00447c50 at 00447c68
;
; Called Functions:
;   FUN_005b86a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00447c30
        ;   Label: FUN_00447c30
    MOV EBX,dword ptr [ESP + 0x8]       ; 00447c31
    MOV EDX,dword ptr [EBX + 0x4]       ; 00447c35
    TEST EDX,EDX                        ; 00447c38
    JNZ 0x00447c3e                      ; 00447c3a
        ;   XREF to: 00447c3e (CONDITIONAL_JUMP)  ; LAB_00447c3e
    POP EBX                             ; 00447c3c
    RET                                 ; 00447c3d
    PUSH EDX                            ; 00447c3e
        ;   Label: LAB_00447c3e
    CALL FUN_005b86a0                   ; 00447c3f
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b86a0()
    ADD ESP,0x4                         ; 00447c44
    MOV dword ptr [EBX + 0x4],0x0       ; 00447c47
    POP EBX                             ; 00447c4e
    RET                                 ; 00447c4f

