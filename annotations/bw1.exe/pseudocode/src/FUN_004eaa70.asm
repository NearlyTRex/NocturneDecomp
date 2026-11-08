; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004eaa70(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_0061d95c
;   undefined4 DAT_01ccf57c
;
; Called Functions:
;   FUN_00408cd0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004eaa70
        ;   Label: FUN_004eaa70
    MOV EAX,[0x0061d95c]                ; 004eaa74 | DAT_0061d95c
    CMP dword ptr [EAX + 0x1ec],0x0     ; 004eaa79 | DAT_01ccf57c
    JNZ 0x004eaa8e                      ; 004eaa80
        ;   XREF to: 004eaa8e (CONDITIONAL_JUMP)  ; LAB_004eaa8e
    TEST dword ptr [EDX + 0xc1d0],0x7fffffff ; 004eaa82
    JZ 0x004eaa91                       ; 004eaa8c
        ;   XREF to: 004eaa91 (CONDITIONAL_JUMP)  ; LAB_004eaa91
    XOR EAX,EAX                         ; 004eaa8e
        ;   Label: LAB_004eaa8e
    RET                                 ; 004eaa90
    PUSH ESI                            ; 004eaa91
        ;   Label: LAB_004eaa91
    MOV ESI,dword ptr [ESP + 0xc]       ; 004eaa92
    PUSH dword ptr [ESP + 0x10]         ; 004eaa96
    PUSH ESI                            ; 004eaa9a
    PUSH EDX                            ; 004eaa9b
    CALL FUN_00408cd0                   ; 004eaa9c
        ;   XREF to: 00408cd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408cd0()
    ADD ESP,0xc                         ; 004eaaa1
    POP ESI                             ; 004eaaa4
    RET                                 ; 004eaaa5

