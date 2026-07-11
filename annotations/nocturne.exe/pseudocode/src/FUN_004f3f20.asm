; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f3f20(int param_1)
;
;
; XREF[1]:
;   FUN_004f3f50 at 004f3f6a
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004f3f20
        ;   Label: FUN_004f3f20
    MOV dword ptr [EAX + 0x18],0x0      ; 004f3f24
    MOV dword ptr [EAX + 0x1c],0x0      ; 004f3f2b
    MOV dword ptr [EAX + 0x20],0x0      ; 004f3f32
    MOV dword ptr [EAX + 0x14],0x0      ; 004f3f39
    RET                                 ; 004f3f40

