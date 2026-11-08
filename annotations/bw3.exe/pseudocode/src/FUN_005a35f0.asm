; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a35f0(undefined4 param_1)
;
;
; XREF[2]:
;   FUN_00505a30 at 00506027
;   FUN_00581080 at 005810be
;
; Called Functions:
;   FUN_005a35c0
;
; *****************************************************************************

section .text

    CALL FUN_005a35c0                   ; 005a35f0
        ;   XREF to: 005a35c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a35c0()
        ;   Label: FUN_005a35f0
    TEST EAX,EAX                        ; 005a35f5
    JZ 0x005a35ff                       ; 005a35f7
        ;   XREF to: 005a35ff (CONDITIONAL_JUMP)  ; LAB_005a35ff
    MOV EDX,dword ptr [ESP + 0x4]       ; 005a35f9
    MOV dword ptr [EAX],EDX             ; 005a35fd
    RET                                 ; 005a35ff
        ;   Label: LAB_005a35ff

