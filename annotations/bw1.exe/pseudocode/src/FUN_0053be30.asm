; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0053be30(undefined4 *param_1)
;
;
; XREF[2]:
;   FUN_0053b210 at 0053b216
;   FUN_0053b250 at 0053b28e
;
; Called Functions:
;   FUN_005c09f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053be30
        ;   Label: FUN_0053be30
    PUSH ESI                            ; 0053be31
    MOV EBX,dword ptr [ESP + 0xc]       ; 0053be32
    MOV EDX,dword ptr [EBX + 0x414]     ; 0053be36
    MOV dword ptr [EBX + 0x410],0x0     ; 0053be3c
    TEST EDX,EDX                        ; 0053be46
    JNZ 0x0053be9e                      ; 0053be48
        ;   XREF to: 0053be9e (CONDITIONAL_JUMP)  ; LAB_0053be9e
    MOV dword ptr [EBX + 0x424],0x0     ; 0053be4a
        ;   Label: LAB_0053be4a
    MOV ESI,dword ptr [EBX + 0x418]     ; 0053be54
    MOV dword ptr [EBX + 0x41c],0x0     ; 0053be5a
    TEST ESI,ESI                        ; 0053be64
    JNZ 0x0053beb3                      ; 0053be66
        ;   XREF to: 0053beb3 (CONDITIONAL_JUMP)  ; LAB_0053beb3
    MOV dword ptr [EBX],0x0             ; 0053be68
        ;   Label: LAB_0053be68
    MOV byte ptr [EBX + 0x108],0x0      ; 0053be6e
    MOV byte ptr [EBX + 0x208],0x0      ; 0053be75
    MOV byte ptr [EBX + 0x308],0x0      ; 0053be7c
    MOV dword ptr [EBX + 0x408],0x3e8   ; 0053be83
    MOV dword ptr [EBX + 0x40c],0x3e8   ; 0053be8d
    MOV byte ptr [EBX + 0x4],0x0        ; 0053be97
    POP ESI                             ; 0053be9b
    POP EBX                             ; 0053be9c
    RET                                 ; 0053be9d
    PUSH EDX                            ; 0053be9e
        ;   Label: LAB_0053be9e
    CALL FUN_005c09f0                   ; 0053be9f
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c09f0()
    ADD ESP,0x4                         ; 0053bea4
    MOV dword ptr [EBX + 0x414],0x0     ; 0053bea7
    JMP 0x0053be4a                      ; 0053beb1
        ;   XREF to: 0053be4a (UNCONDITIONAL_JUMP)  ; LAB_0053be4a
    PUSH ESI                            ; 0053beb3
        ;   Label: LAB_0053beb3
    CALL FUN_005c09f0                   ; 0053beb4
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c09f0()
    ADD ESP,0x4                         ; 0053beb9
    MOV dword ptr [EBX + 0x418],0x0     ; 0053bebc
    JMP 0x0053be68                      ; 0053bec6
        ;   XREF to: 0053be68 (UNCONDITIONAL_JUMP)  ; LAB_0053be68

