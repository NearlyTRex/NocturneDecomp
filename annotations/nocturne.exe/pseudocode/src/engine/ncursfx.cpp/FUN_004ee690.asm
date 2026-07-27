; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 engine_ncursfx_cpp_FUN_004ee690(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01bd1d94
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004ee690
        ;   Label: engine_ncursfx.cpp_FUN_004ee690
    MOV ECX,dword ptr [ESP + 0x8]       ; 004ee694
    TEST dword ptr [0x01bd1d94],ECX     ; 004ee698 | DAT_01bd1d94
    JZ 0x004ee6a9                       ; 004ee69e
        ;   XREF to: 004ee6a9 (CONDITIONAL_JUMP)  ; LAB_004ee6a9
    CMP dword ptr [EAX + 0x25c],0x0     ; 004ee6a0
    JZ 0x004ee6ac                       ; 004ee6a7
        ;   XREF to: 004ee6ac (CONDITIONAL_JUMP)  ; LAB_004ee6ac
    XOR EAX,EAX                         ; 004ee6a9
        ;   Label: LAB_004ee6a9
    RET                                 ; 004ee6ab
    MOV dword ptr [EAX + 0x25c],0x1     ; 004ee6ac
        ;   Label: LAB_004ee6ac
    XOR EAX,EAX                         ; 004ee6b6
    RET                                 ; 004ee6b8

