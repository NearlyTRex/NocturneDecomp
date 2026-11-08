; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0040c580(int param_1,int param_2)
;
;
; XREF[2]:
;   FUN_0040c370 at 0040c469
;   FUN_0040c5d0 at 0040c5ef
;
; *****************************************************************************

section .text

    MOV EAX,0x1                         ; 00408950
        ;   Label: LAB_00408950
    RET                                 ; 00408955
    MOV ECX,dword ptr [ESP + 0x4]       ; 0040c580
        ;   Label: FUN_0040c580
    MOV EDX,dword ptr [ESP + 0x8]       ; 0040c584
    MOV EAX,ECX                         ; 0040c588
    TEST ECX,ECX                        ; 0040c58a
    JZ 0x0040c5a0                       ; 0040c58c
        ;   XREF to: 0040c5a0 (CONDITIONAL_JUMP)
    CMP EDX,dword ptr [EAX + 0x38]      ; 0040c58e
        ;   Label: LAB_0040c58e
    JZ 0x00408950                       ; 0040c591
        ;   XREF to: 00408950 (CONDITIONAL_JUMP)  ; LAB_00408950
    MOV EAX,dword ptr [EAX + 0x28]      ; 0040c597
    TEST EAX,EAX                        ; 0040c59a
    JNZ 0x0040c58e                      ; 0040c59c
        ;   XREF to: 0040c58e (CONDITIONAL_JUMP)  ; LAB_0040c58e
    MOV EAX,EAX                         ; 0040c59e

