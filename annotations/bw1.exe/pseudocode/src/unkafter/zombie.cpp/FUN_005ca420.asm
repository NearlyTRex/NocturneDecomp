; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 unkafter_zombie_cpp_FUN_005ca420(undefined4 param_1,undefined2 param_2)
;
;
; XREF[2]:
;   crt_unknown.c_FUN_005c32d4 at 005c32e2
;   crt_unknown.c_FUN_005c9f70 at 005c9f7e
;
; Referenced Globals:
;   undefined1 DAT_006269d0
;
; *****************************************************************************

section .text

    CMP byte ptr [0x006269d0],0x0       ; 005ca420 | DAT_006269d0
        ;   Label: unkafter_zombie.cpp_FUN_005ca420
    JZ 0x005ca448                       ; 005ca427
        ;   XREF to: 005ca448 (CONDITIONAL_JUMP)  ; LAB_005ca448
    XOR EAX,EAX                         ; 005ca429
    MOV AX,word ptr [ESP + 0x8]         ; 005ca42b
    PUSH EAX                            ; 005ca430
    MOV EDX,dword ptr [ESP + 0x8]       ; 005ca431
    PUSH EDX                            ; 005ca435
    INT3                                ; 005ca436
    XOR EAX,EAX                         ; 005ca448
        ;   Label: LAB_005ca448
    RET                                 ; 005ca44a

