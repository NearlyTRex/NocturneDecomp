; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __initterm(undefined4 *param_1,undefined4 *param_2)
;
;
; XREF[2]:
;   FUN_10007600 at 10007675
;   __cinit at 10007585
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 100076e0
        ;   Label: __initterm
    PUSH EDI                            ; 100076e1
    MOV EDI,dword ptr [ESP + 0x10]      ; 100076e2
    MOV ESI,dword ptr [ESP + 0xc]       ; 100076e6
    CMP EDI,ESI                         ; 100076ea
    JBE 0x100076fd                      ; 100076ec
        ;   XREF to: 100076fd (CONDITIONAL_JUMP)  ; LAB_100076fd
    MOV EAX,dword ptr [ESI]             ; 100076ee
        ;   Label: LAB_100076ee
    TEST EAX,EAX                        ; 100076f0
    JZ 0x100076f6                       ; 100076f2
        ;   XREF to: 100076f6 (CONDITIONAL_JUMP)  ; LAB_100076f6
    CALL EAX                            ; 100076f4
    ADD ESI,0x4                         ; 100076f6
        ;   Label: LAB_100076f6
    CMP EDI,ESI                         ; 100076f9
    JA 0x100076ee                       ; 100076fb
        ;   XREF to: 100076ee (CONDITIONAL_JUMP)  ; LAB_100076ee
    POP EDI                             ; 100076fd
        ;   Label: LAB_100076fd
    POP ESI                             ; 100076fe
    RET                                 ; 100076ff

