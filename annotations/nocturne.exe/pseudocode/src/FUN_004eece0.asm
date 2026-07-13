; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004eece0(int param_1,int param_2)
;
;
; XREF[1]:
;   FUN_004b82d0 at 004b8315
;
; Called Functions:
;   FUN_00426510
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004eece0
        ;   Label: FUN_004eece0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004eece4
    CMP dword ptr [EAX + 0x1f56c],0x0   ; 004eece8
    JZ 0x004eed09                       ; 004eecef
        ;   XREF to: 004eed09 (CONDITIONAL_JUMP)  ; LAB_004eed09
    TEST EDX,EDX                        ; 004eecf1
    JZ 0x004eecff                       ; 004eecf3
        ;   XREF to: 004eecff (CONDITIONAL_JUMP)  ; LAB_004eecff
    MOV dword ptr [EAX + 0x2404],0x1    ; 004eecf5
    PUSH EDX                            ; 004eecff
        ;   Label: LAB_004eecff
    PUSH EAX                            ; 004eed00
    CALL FUN_00426510                   ; 004eed01
        ;   XREF to: 00426510 (UNCONDITIONAL_CALL)  ; undefined FUN_00426510()
    ADD ESP,0x8                         ; 004eed06
    RET                                 ; 004eed09
        ;   Label: LAB_004eed09

