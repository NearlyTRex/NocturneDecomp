; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0043cca0(int param_1)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0043cca0
        ;   Label: FUN_0043cca0
    MOV EDX,dword ptr [EAX + 0x70]      ; 0043cca4
    CMP EDX,0x1                         ; 0043cca7
    JNZ 0x0043ccb5                      ; 0043ccaa
        ;   XREF to: 0043ccb5 (CONDITIONAL_JUMP)  ; LAB_0043ccb5
    CMP dword ptr [EAX + 0x2cc],0x0     ; 0043ccac
    JZ 0x0043ccb8                       ; 0043ccb3
        ;   XREF to: 0043ccb8 (CONDITIONAL_JUMP)  ; LAB_0043ccb8
    XOR EAX,EAX                         ; 0043ccb5
        ;   Label: LAB_0043ccb5
    RET                                 ; 0043ccb7
    MOV EAX,EDX                         ; 0043ccb8
        ;   Label: LAB_0043ccb8
    RET                                 ; 0043ccba

