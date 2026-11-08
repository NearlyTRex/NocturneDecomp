; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00526fc0(undefined4 param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_docCannotDie_005cd9f4
;   undefined4 DAT_005fba60
;
; Called Functions:
;   FUN_00431000
;   FUN_00491aa0
;
; *****************************************************************************

section .text

    PUSH 0x5cd9f4                       ; 00526fc0 | = "docCannotDie"
        ;   Label: FUN_00526fc0
    MOV EDX,dword ptr [0x005fba60]      ; 00526fc5 | DAT_005fba60
    PUSH EDX                            ; 00526fcb
    CALL FUN_00491aa0                   ; 00526fcc
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; undefined FUN_00491aa0()
    ADD ESP,0x8                         ; 00526fd1
    TEST EAX,EAX                        ; 00526fd4
    JZ 0x00526fdb                       ; 00526fd6
        ;   XREF to: 00526fdb (CONDITIONAL_JUMP)  ; LAB_00526fdb
    XOR EAX,EAX                         ; 00526fd8
    RET                                 ; 00526fda
    MOV ECX,dword ptr [ESP + 0x4]       ; 00526fdb
        ;   Label: LAB_00526fdb
    PUSH ECX                            ; 00526fdf
    CALL FUN_00431000                   ; 00526fe0
        ;   XREF to: 00431000 (UNCONDITIONAL_CALL)  ; undefined FUN_00431000()
    ADD ESP,0x4                         ; 00526fe5
    RET                                 ; 00526fe8

