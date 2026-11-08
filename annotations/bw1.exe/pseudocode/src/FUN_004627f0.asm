; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004627f0(int param_1)
;
;
; XREF[2]:
;   FUN_00462670 at 00462681
;   FUN_0054f0d0 at 0054f198
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004627f0
        ;   Label: FUN_004627f0
    CMP dword ptr [EAX + 0x2f9c],0x0    ; 004627f4
    JNZ 0x004627fe                      ; 004627fb
        ;   XREF to: 004627fe (CONDITIONAL_JUMP)  ; LAB_004627fe
    RET                                 ; 004627fd
    MOV dword ptr [EAX + 0x164],0x0     ; 004627fe
        ;   Label: LAB_004627fe
    MOV dword ptr [EAX + 0x2f9c],0x0    ; 00462808
    RET                                 ; 00462812

