; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_snddx_cpp_FUN_00578680(void)
;
;
; Referenced Globals:
;   undefined4 DAT_02c81da0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02c81da0]      ; 00578680 | DAT_02c81da0
        ;   Label: sound_snddx.cpp_FUN_00578680
    TEST EDX,EDX                        ; 00578686
    JNZ 0x0057868b                      ; 00578688
        ;   XREF to: 0057868b (CONDITIONAL_JUMP)  ; LAB_0057868b
    RET                                 ; 0057868a
    PUSH 0x1                            ; 0057868b
        ;   Label: LAB_0057868b
    PUSH dword ptr [ESP + 0x20]         ; 0057868d
    PUSH dword ptr [ESP + 0x20]         ; 00578691
    PUSH dword ptr [ESP + 0x20]         ; 00578695
    PUSH dword ptr [ESP + 0x38]         ; 00578699
    MOV EAX,EDX                         ; 0057869d
    PUSH dword ptr [ESP + 0x38]         ; 0057869f
    MOV EDX,dword ptr [EDX]             ; 005786a3
    PUSH dword ptr [ESP + 0x38]         ; 005786a5
    PUSH EAX                            ; 005786a9
    CALL dword ptr [EDX + 0x34]         ; 005786aa
    RET                                 ; 005786ad

