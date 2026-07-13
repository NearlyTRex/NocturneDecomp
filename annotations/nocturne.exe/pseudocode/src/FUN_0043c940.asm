; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0043c940(undefined4 param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   undefined4 s_CHero_0057b43a+1
;
; Called Functions:
;   FUN_0040d7e0
;
; *****************************************************************************

section .text

    PUSH 0x57b43b                       ; 0043c940 | s_CHero_0057b43a+1
        ;   Label: FUN_0043c940
    MOV EDX,dword ptr [ESP + 0xc]       ; 0043c945
    PUSH EDX                            ; 0043c949
    CALL FUN_0040d7e0                   ; 0043c94a
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d7e0()
    ADD ESP,0x8                         ; 0043c94f
    TEST EAX,EAX                        ; 0043c952
    JZ 0x0043c95b                       ; 0043c954
        ;   XREF to: 0043c95b (CONDITIONAL_JUMP)  ; LAB_0043c95b
    MOV EAX,0x4                         ; 0043c956
    RET                                 ; 0043c95b
        ;   Label: LAB_0043c95b

