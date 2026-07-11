; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0056fca0(undefined4 param_1,undefined2 param_2)
;
;
; XREF[2]:
;   FUN_0056af76 at 0056af84
;   FUN_0056ddc0 at 0056ddce
;
; Referenced Globals:
;   undefined1 DAT_005c2050
;
; *****************************************************************************

section .text

    CMP byte ptr [0x005c2050],0x0       ; 0056fca0 | DAT_005c2050
        ;   Label: FUN_0056fca0
    JZ 0x0056fcc8                       ; 0056fca7
        ;   XREF to: 0056fcc8 (CONDITIONAL_JUMP)  ; LAB_0056fcc8
    XOR EAX,EAX                         ; 0056fca9
    MOV AX,word ptr [ESP + 0x8]         ; 0056fcab
    PUSH EAX                            ; 0056fcb0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0056fcb1
    PUSH EDX                            ; 0056fcb5
    INT3                                ; 0056fcb6
    XOR EAX,EAX                         ; 0056fcc8
        ;   Label: LAB_0056fcc8
    RET                                 ; 0056fcca

