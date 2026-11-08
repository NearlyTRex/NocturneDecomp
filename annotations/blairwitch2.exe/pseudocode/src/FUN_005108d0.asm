; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005108d0(int param_1,int param_2)
;
;
; XREF[1]:
;   FUN_004d2da0 at 004d2de5
;
; Called Functions:
;   FUN_00425a00
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005108d0
        ;   Label: FUN_005108d0
    MOV EDX,dword ptr [ESP + 0x8]       ; 005108d4
    CMP dword ptr [EAX + 0x24340],0x0   ; 005108d8
    JZ 0x005108f9                       ; 005108df
        ;   XREF to: 005108f9 (CONDITIONAL_JUMP)  ; LAB_005108f9
    TEST EDX,EDX                        ; 005108e1
    JZ 0x005108ef                       ; 005108e3
        ;   XREF to: 005108ef (CONDITIONAL_JUMP)  ; LAB_005108ef
    MOV dword ptr [EAX + 0x2568],0x1    ; 005108e5
    PUSH EDX                            ; 005108ef
        ;   Label: LAB_005108ef
    PUSH EAX                            ; 005108f0
    CALL FUN_00425a00                   ; 005108f1
        ;   XREF to: 00425a00 (UNCONDITIONAL_CALL)  ; undefined FUN_00425a00()
    ADD ESP,0x8                         ; 005108f6
    RET                                 ; 005108f9
        ;   Label: LAB_005108f9

