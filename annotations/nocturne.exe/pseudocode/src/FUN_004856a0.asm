; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004856a0(int param_1)
;
;
; XREF[1]:
;   FUN_0048a390 at 0048a47e
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004856a0
        ;   Label: FUN_004856a0
    MOV EDX,dword ptr [EAX + 0x20]      ; 004856a4
    DEC EDX                             ; 004856a7
    MOV dword ptr [EAX + 0x20],EDX      ; 004856a8
    TEST EDX,EDX                        ; 004856ab
    JL 0x004856b0                       ; 004856ad
        ;   XREF to: 004856b0 (CONDITIONAL_JUMP)  ; LAB_004856b0
    RET                                 ; 004856af
    MOV dword ptr [EAX + 0x20],0x0      ; 004856b0
        ;   Label: LAB_004856b0
    RET                                 ; 004856b7

