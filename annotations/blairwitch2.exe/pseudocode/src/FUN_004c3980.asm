; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c3980(int param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_00488940
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004c3980
        ;   Label: FUN_004c3980
    CMP dword ptr [EAX + 0x10b18],0x0   ; 004c3984
    JNZ 0x004c3996                      ; 004c398b
        ;   XREF to: 004c3996 (CONDITIONAL_JUMP)  ; LAB_004c3996
    CMP dword ptr [EAX + 0x10b14],0x0   ; 004c398d
    JLE 0x004c3997                      ; 004c3994
        ;   XREF to: 004c3997 (CONDITIONAL_JUMP)  ; LAB_004c3997
    RET                                 ; 004c3996
        ;   Label: LAB_004c3996
    PUSH EBX                            ; 004c3997
        ;   Label: LAB_004c3997
    MOV EBX,dword ptr [ESP + 0xc]       ; 004c3998
    PUSH EBX                            ; 004c399c
    PUSH EAX                            ; 004c399d
    CALL FUN_00488940                   ; 004c399e
        ;   XREF to: 00488940 (UNCONDITIONAL_CALL)  ; undefined FUN_00488940()
    ADD ESP,0x8                         ; 004c39a3
    POP EBX                             ; 004c39a6
    RET                                 ; 004c39a7

