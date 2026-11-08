; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0055c100(int param_1)
;
;
; XREF[3]:
;   FUN_0054d370 at 0054d38f
;   FUN_0055c0e0 at 0055c0e6
;   FUN_0055c140 at 0055c146
;
; Called Functions:
;   FUN_005c09f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055c100
        ;   Label: FUN_0055c100
    MOV EBX,dword ptr [ESP + 0x8]       ; 0055c101
    MOV EDX,dword ptr [EBX + 0x198]     ; 0055c105
    TEST EDX,EDX                        ; 0055c10b
    JNZ 0x0055c11b                      ; 0055c10d
        ;   XREF to: 0055c11b (CONDITIONAL_JUMP)  ; LAB_0055c11b
    MOV dword ptr [EBX + 0x194],0x0     ; 0055c10f
    POP EBX                             ; 0055c119
    RET                                 ; 0055c11a
    PUSH EDX                            ; 0055c11b
        ;   Label: LAB_0055c11b
    CALL FUN_005c09f0                   ; 0055c11c
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c09f0()
    ADD ESP,0x4                         ; 0055c121
    MOV dword ptr [EBX + 0x198],0x0     ; 0055c124
    MOV dword ptr [EBX + 0x194],0x0     ; 0055c12e
    POP EBX                             ; 0055c138
    RET                                 ; 0055c139

