; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0044fca0(undefined4 *param_1)
;
;
; XREF[2]:
;   FUN_0044fc80 at 0044fc94
;   FUN_0044fd70 at 0044fda2
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0044fca0
        ;   Label: FUN_0044fca0
    MOV EAX,EDX                         ; 0044fca4
    ADD EDX,0x78                        ; 0044fca6
    MOV dword ptr [EAX],0x1             ; 0044fca9
        ;   Label: LAB_0044fca9
    ADD EAX,0x4                         ; 0044fcaf
    CMP EAX,EDX                         ; 0044fcb2
    JNZ 0x0044fca9                      ; 0044fcb4
        ;   XREF to: 0044fca9 (CONDITIONAL_JUMP)  ; LAB_0044fca9
    RET                                 ; 0044fcb6

