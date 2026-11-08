; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0054aca0(int param_1,int param_2)
;
;
; XREF[3]:
;   FUN_0042e1a0 at 0042e245
;   FUN_00544460 at 00546603
;   FUN_0054ae10 at 0054ae1a
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0054aca0
        ;   Label: FUN_0054aca0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0054aca4
    CMP EDX,dword ptr [EAX + 0x4]       ; 0054aca8
    JZ 0x0054acae                       ; 0054acab
        ;   XREF to: 0054acae (CONDITIONAL_JUMP)  ; LAB_0054acae
    RET                                 ; 0054acad
    MOV dword ptr [EAX + 0x4],0x0       ; 0054acae
        ;   Label: LAB_0054acae
    MOV byte ptr [EAX + 0x50],0x0       ; 0054acb5
    RET                                 ; 0054acb9

