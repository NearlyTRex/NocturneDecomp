; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005b84c0(undefined4 param_1)
;
;
; XREF[2]:
;   FUN_0050cf50 at 0050d547
;   FUN_0058f310 at 0058f34e
;
; Called Functions:
;   FUN_005b8490
;
; *****************************************************************************

section .text

    CALL FUN_005b8490                   ; 005b84c0
        ;   XREF to: 005b8490 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8490()
        ;   Label: FUN_005b84c0
    TEST EAX,EAX                        ; 005b84c5
    JZ 0x005b84cf                       ; 005b84c7
        ;   XREF to: 005b84cf (CONDITIONAL_JUMP)  ; LAB_005b84cf
    MOV EDX,dword ptr [ESP + 0x4]       ; 005b84c9
    MOV dword ptr [EAX],EDX             ; 005b84cd
    RET                                 ; 005b84cf
        ;   Label: LAB_005b84cf

