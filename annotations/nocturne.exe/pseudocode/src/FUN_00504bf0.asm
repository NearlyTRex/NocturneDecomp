; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00504bf0(int param_1,int param_2)
;
;
; XREF[3]:
;   FUN_004259f0 at 00425a94
;   FUN_004ff2c0 at 00500fa9
;   FUN_00504d60 at 00504d6a
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00504bf0
        ;   Label: FUN_00504bf0
    MOV EDX,dword ptr [ESP + 0x8]       ; 00504bf4
    CMP EDX,dword ptr [EAX + 0x4]       ; 00504bf8
    JZ 0x00504bfe                       ; 00504bfb
        ;   XREF to: 00504bfe (CONDITIONAL_JUMP)  ; LAB_00504bfe
    RET                                 ; 00504bfd
    MOV dword ptr [EAX + 0x4],0x0       ; 00504bfe
        ;   Label: LAB_00504bfe
    MOV byte ptr [EAX + 0x4c],0x0       ; 00504c05
    RET                                 ; 00504c09

