; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00558860(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[3]:
;   FUN_0055fd30 at 0055fd8b
;   FUN_005607d0 at 0056086e
;   FUN_00560c00 at 00560c24
;
; Referenced Globals:
;   undefined4 DAT_02cf3280
;   undefined4 DAT_02cf3400
;   undefined4 DAT_02cf3404
;   undefined4 DAT_02cf3408
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00558860
        ;   Label: FUN_00558860
    MOV [0x02cf3400],EAX                ; 00558864 | DAT_02cf3400
    MOV EAX,dword ptr [ESP + 0x8]       ; 00558869
    MOV [0x02cf3404],EAX                ; 0055886d | DAT_02cf3404
    MOV EAX,dword ptr [ESP + 0xc]       ; 00558872
    MOV EDX,dword ptr [0x02cf3280]      ; 00558876 | DAT_02cf3280
    MOV [0x02cf3408],EAX                ; 0055887c | DAT_02cf3408
    TEST EDX,EDX                        ; 00558881
    JNZ 0x00558886                      ; 00558883
        ;   XREF to: 00558886 (CONDITIONAL_JUMP)  ; LAB_00558886
    RET                                 ; 00558885
    PUSH dword ptr [ESP + 0xc]          ; 00558886
        ;   Label: LAB_00558886
    PUSH dword ptr [ESP + 0xc]          ; 0055888a
    MOV EAX,EDX                         ; 0055888e
    PUSH dword ptr [ESP + 0xc]          ; 00558890
    MOV EDX,dword ptr [EDX]             ; 00558894
    PUSH EAX                            ; 00558896
    CALL dword ptr [EDX + 0x2c]         ; 00558897
    ADD ESP,0x10                        ; 0055889a
    RET                                 ; 0055889d

