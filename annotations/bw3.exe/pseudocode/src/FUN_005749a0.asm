; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005749a0(int param_1)
;
;
; XREF[4]:
;   FUN_00402940 at 00402a65
;   FUN_004bda10 at 004bddfd
;   FUN_004bdfb0 at 004be33f
;   FUN_00574850 at 00574863
;
; Called Functions:
;   FUN_005a3a90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005749a0
        ;   Label: FUN_005749a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005749a1
    MOV EDX,dword ptr [EBX + 0x4]       ; 005749a5
    TEST EDX,EDX                        ; 005749a8
    JNZ 0x005749b3                      ; 005749aa
        ;   XREF to: 005749b3 (CONDITIONAL_JUMP)  ; LAB_005749b3
    MOV EAX,0x1                         ; 005749ac
    POP EBX                             ; 005749b1
    RET                                 ; 005749b2
    PUSH EDX                            ; 005749b3
        ;   Label: LAB_005749b3
    CALL FUN_005a3a90                   ; 005749b4
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3a90()
    ADD ESP,0x4                         ; 005749b9
    MOV dword ptr [EBX + 0x4],0x0       ; 005749bc
    MOV EAX,0x1                         ; 005749c3
    POP EBX                             ; 005749c8
    RET                                 ; 005749c9

