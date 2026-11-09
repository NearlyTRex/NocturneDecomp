; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_snddx_cpp_FUN_005786b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; Referenced Globals:
;   undefined4 DAT_02c81da0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02c81da0]      ; 005786b0 | DAT_02c81da0
        ;   Label: sound_snddx.cpp_FUN_005786b0
    TEST EDX,EDX                        ; 005786b6
    JNZ 0x005786bb                      ; 005786b8
        ;   XREF to: 005786bb (CONDITIONAL_JUMP)  ; LAB_005786bb
    RET                                 ; 005786ba
    PUSH 0x1                            ; 005786bb
        ;   Label: LAB_005786bb
    PUSH dword ptr [ESP + 0x14]         ; 005786bd
    MOV EAX,EDX                         ; 005786c1
    PUSH dword ptr [ESP + 0x14]         ; 005786c3
    MOV EDX,dword ptr [EDX]             ; 005786c7
    PUSH dword ptr [ESP + 0x14]         ; 005786c9
    PUSH EAX                            ; 005786cd
    CALL dword ptr [EDX + 0x40]         ; 005786ce
    RET                                 ; 005786d1

