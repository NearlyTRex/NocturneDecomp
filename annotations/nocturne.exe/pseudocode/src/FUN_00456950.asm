; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_00456950(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   thunk_FUN_0056c864
;   thunk_FUN_0056cb60
;
; *****************************************************************************

section .text

    SUB ESP,0x50                        ; 00456950
        ;   Label: FUN_00456950
    MOV EAX,dword ptr [ESP + 0x58]      ; 00456953
    MOV dword ptr [ESP + 0x48],EAX      ; 00456957
    MOV dword ptr [ESP + 0x4c],EAX      ; 0045695b
    MOV EAX,ESP                         ; 0045695f
    PUSH EAX                            ; 00456961
    MOV EDX,dword ptr [ESP + 0x58]      ; 00456962
    PUSH EDX                            ; 00456966
    CALL thunk_FUN_0056c864             ; 00456967
        ;   XREF to: 00565dc0 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_0056c864()
    ADD ESP,0x8                         ; 0045696c
    TEST EAX,EAX                        ; 0045696f
    JNZ 0x0045697b                      ; 00456971
        ;   XREF to: 0045697b (CONDITIONAL_JUMP)  ; LAB_0045697b
    MOV EAX,dword ptr [ESP + 0x1a]      ; 00456973
    MOV dword ptr [ESP + 0x48],EAX      ; 00456977
    LEA EAX,[ESP + 0x48]                ; 0045697b
        ;   Label: LAB_0045697b
    PUSH EAX                            ; 0045697f
    MOV ECX,dword ptr [ESP + 0x58]      ; 00456980
    PUSH ECX                            ; 00456984
    CALL thunk_FUN_0056cb60             ; 00456985
        ;   XREF to: 00565dc6 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_0056cb60()
    ADD ESP,0x8                         ; 0045698a
    TEST EAX,EAX                        ; 0045698d
    SETZ AL                             ; 0045698f
    AND EAX,0xff                        ; 00456992
    ADD ESP,0x50                        ; 00456997
    RET                                 ; 0045699a

