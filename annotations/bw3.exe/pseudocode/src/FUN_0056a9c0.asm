; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056a9c0(void)
;
;
; XREF[1]:
;   thunk_FUN_0056a9c0 at 004037a0
;
; Referenced Globals:
;   undefined4 DAT_02cfd0d0
;
; Called Functions:
;   FUN_005695b0
;   FUN_005695c0
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056a9c0
        ;   Label: FUN_0056a9c0
    MOV EDX,dword ptr [0x02cfd0d0]      ; 0056a9c1 | DAT_02cfd0d0
    PUSH EDX                            ; 0056a9c7
    CALL FUN_005695b0                   ; 0056a9c8
        ;   XREF to: 005695b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005695b0()
    MOV ECX,dword ptr [0x02cfd0d0]      ; 0056a9cd | DAT_02cfd0d0
    ADD ESP,0x4                         ; 0056a9d3
    TEST ECX,ECX                        ; 0056a9d6
    JNZ 0x0056a9e4                      ; 0056a9d8
        ;   XREF to: 0056a9e4 (CONDITIONAL_JUMP)  ; LAB_0056a9e4
    XOR EBX,EBX                         ; 0056a9da
    MOV dword ptr [0x02cfd0d0],EBX      ; 0056a9dc | DAT_02cfd0d0
    POP EBX                             ; 0056a9e2
    RET                                 ; 0056a9e3
    PUSH ECX                            ; 0056a9e4
        ;   Label: LAB_0056a9e4
    MOV EBX,ECX                         ; 0056a9e5
    CALL FUN_005695c0                   ; 0056a9e7
        ;   XREF to: 005695c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005695c0()
    ADD ESP,0x4                         ; 0056a9ec
    PUSH EBX                            ; 0056a9ef
    CALL FUN_005a30c4                   ; 0056a9f0
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 0056a9f5
    XOR EBX,EBX                         ; 0056a9f8
    MOV dword ptr [0x02cfd0d0],EBX      ; 0056a9fa | DAT_02cfd0d0
    POP EBX                             ; 0056aa00
    RET                                 ; 0056aa01

