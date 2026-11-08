; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0045da10(int param_1)
;
;
; XREF[2]:
;   FUN_0045d9a0 at 0045d9a6
;   FUN_0045d9c0 at 0045d9c6
;
; Called Functions:
;   FUN_005c09f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045da10
        ;   Label: FUN_0045da10
    MOV EBX,dword ptr [ESP + 0x8]       ; 0045da11
    MOV EDX,dword ptr [EBX + 0x48]      ; 0045da15
    TEST EDX,EDX                        ; 0045da18
    JNZ 0x0045da1e                      ; 0045da1a
        ;   XREF to: 0045da1e (CONDITIONAL_JUMP)  ; LAB_0045da1e
    POP EBX                             ; 0045da1c
    RET                                 ; 0045da1d
    PUSH EDX                            ; 0045da1e
        ;   Label: LAB_0045da1e
    CALL FUN_005c09f0                   ; 0045da1f
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c09f0()
    ADD ESP,0x4                         ; 0045da24
    MOV dword ptr [EBX + 0x48],0x0      ; 0045da27
    POP EBX                             ; 0045da2e
    RET                                 ; 0045da2f

