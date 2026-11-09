; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 unkafter_morph_cpp_FUN_005c2120(undefined4 param_1,undefined2 param_2)
;
;
; XREF[2]:
;   crt_unknown.c_FUN_005bb007 at 005bb015
;   crt_unknown.c_FUN_005c1c20 at 005c1c2e
;
; Referenced Globals:
;   undefined1 DAT_0061f650
;
; *****************************************************************************

section .text

    CMP byte ptr [0x0061f650],0x0       ; 005c2120 | DAT_0061f650
        ;   Label: unkafter_morph.cpp_FUN_005c2120
    JZ 0x005c2148                       ; 005c2127
        ;   XREF to: 005c2148 (CONDITIONAL_JUMP)  ; LAB_005c2148
    XOR EAX,EAX                         ; 005c2129
    MOV AX,word ptr [ESP + 0x8]         ; 005c212b
    PUSH EAX                            ; 005c2130
    MOV EDX,dword ptr [ESP + 0x8]       ; 005c2131
    PUSH EDX                            ; 005c2135
    INT3                                ; 005c2136
    XOR EAX,EAX                         ; 005c2148
        ;   Label: LAB_005c2148
    RET                                 ; 005c214a

