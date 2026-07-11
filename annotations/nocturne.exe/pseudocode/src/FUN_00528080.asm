; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00528080(void)
;
;
; XREF[8]:
;   FUN_004a6e90 at 004a6f6a
;   FUN_004d12e0 at 004d1ff6
;   FUN_00526cb0 at 00526cbb
;   FUN_00527e10 at 00527e24
;   FUN_00527e40 at 00527e6e
;   FUN_005285b0 at 005285b2
;   FUN_0052df90 at 0052dfd4
;   FUN_0052e9c0 at 0052e9c0
;
; Referenced Globals:
;   undefined4 DAT_02dc8318
;   undefined4 DAT_02dc831c
;
; Called Functions:
;   FUN_005230d0
;   FUN_005272b0
;
; *****************************************************************************

section .text

    CALL FUN_005272b0                   ; 00528080
        ;   XREF to: 005272b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005272b0()
        ;   Label: FUN_00528080
    MOV EDX,dword ptr [0x02dc8318]      ; 00528085 | DAT_02dc8318
    TEST EDX,EDX                        ; 0052808b
    JZ 0x0052809f                       ; 0052808d
        ;   XREF to: 0052809f (CONDITIONAL_JUMP)  ; LAB_0052809f
    MOV EAX,EDX                         ; 0052808f
    PUSH EAX                            ; 00528091
    MOV EDX,dword ptr [EDX]             ; 00528092
    CALL dword ptr [EDX + 0x8]          ; 00528094
    ADD ESP,0x4                         ; 00528097
    TEST EAX,EAX                        ; 0052809a
    JNZ 0x0052809f                      ; 0052809c
        ;   XREF to: 0052809f (CONDITIONAL_JUMP)  ; LAB_0052809f
    RET                                 ; 0052809e
    XOR ECX,ECX                         ; 0052809f
        ;   Label: LAB_0052809f
    MOV dword ptr [0x02dc831c],ECX      ; 005280a1 | DAT_02dc831c
    CALL FUN_005230d0                   ; 005280a7
        ;   XREF to: 005230d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005230d0()
    MOV EAX,0x1                         ; 005280ac
    RET                                 ; 005280b1

