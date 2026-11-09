; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 unkafter_asgaya_cpp_FUN_005ad290(undefined4 param_1,undefined2 param_2)
;
;
; XREF[2]:
;   crt_unknown.c_FUN_005a6144 at 005a6152
;   crt_unknown.c_FUN_005acde0 at 005acdee
;
; Referenced Globals:
;   undefined1 DAT_00607d74
;
; *****************************************************************************

section .text

    CMP byte ptr [0x00607d74],0x0       ; 005ad290 | DAT_00607d74
        ;   Label: unkafter_asgaya.cpp_FUN_005ad290
    JZ 0x005ad2b8                       ; 005ad297
        ;   XREF to: 005ad2b8 (CONDITIONAL_JUMP)  ; LAB_005ad2b8
    XOR EAX,EAX                         ; 005ad299
    MOV AX,word ptr [ESP + 0x8]         ; 005ad29b
    PUSH EAX                            ; 005ad2a0
    MOV EDX,dword ptr [ESP + 0x8]       ; 005ad2a1
    PUSH EDX                            ; 005ad2a5
    INT3                                ; 005ad2a6
    XOR EAX,EAX                         ; 005ad2b8
        ;   Label: LAB_005ad2b8
    RET                                 ; 005ad2ba

