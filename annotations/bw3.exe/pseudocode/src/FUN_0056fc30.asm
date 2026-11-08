; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_0056fc30(undefined4 *param_1)
;
;
; XREF[5]:
;   FUN_00503ed0 at 00503ee9
;   FUN_00504270 at 00504292
;   FUN_0056f8e0 at 0056f8e6
;   FUN_0056f900 at 0056f906
;   FUN_0056f930 at 0056f936
;
; Called Functions:
;   FUN_0056f960
;   Ordinal_3
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056fc30
        ;   Label: FUN_0056fc30
    MOV EBX,dword ptr [ESP + 0x8]       ; 0056fc31
    PUSH EBX                            ; 0056fc35
    CALL FUN_0056f960                   ; 0056fc36
        ;   XREF to: 0056f960 (UNCONDITIONAL_CALL)  ; undefined FUN_0056f960()
    ADD ESP,0x4                         ; 0056fc3b
    TEST EAX,EAX                        ; 0056fc3e
    JNZ 0x0056fc49                      ; 0056fc40
        ;   XREF to: 0056fc49 (CONDITIONAL_JUMP)  ; LAB_0056fc49
    MOV EAX,0x1                         ; 0056fc42
    POP EBX                             ; 0056fc47
    RET                                 ; 0056fc48
    MOV EDX,dword ptr [EBX]             ; 0056fc49
        ;   Label: LAB_0056fc49
    PUSH EDX                            ; 0056fc4b
    CALL Ordinal_3                      ; 0056fc4c
        ;   XREF to: 005b2592 (UNCONDITIONAL_CALL)  ; undefined Ordinal_3()
    TEST EAX,EAX                        ; 0056fc51
    SETZ AL                             ; 0056fc53
    AND EAX,0xff                        ; 0056fc56
    MOV dword ptr [EBX],0xffffffff      ; 0056fc5b
    POP EBX                             ; 0056fc61
    RET                                 ; 0056fc62

