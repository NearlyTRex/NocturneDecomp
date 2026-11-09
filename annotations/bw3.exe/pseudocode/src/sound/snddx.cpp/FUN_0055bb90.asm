; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_snddx_cpp_FUN_0055bb90(undefined4 param_1,int param_2)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055bb90
        ;   Label: sound_snddx.cpp_FUN_0055bb90
    MOV EBX,dword ptr [ESP + 0xc]       ; 0055bb91
    LEA EAX,[EBX*0x4 + 0x0]             ; 0055bb95
    SUB EAX,EBX                         ; 0055bb9c
    MOV EBX,0x2cf49f4                   ; 0055bb9e
    SHL EAX,0x3                         ; 0055bba3
    ADD EBX,EAX                         ; 0055bba6
    MOV EDX,dword ptr [EBX]             ; 0055bba8
    TEST EDX,EDX                        ; 0055bbaa
    JNZ 0x0055bbdb                      ; 0055bbac
        ;   XREF to: 0055bbdb (CONDITIONAL_JUMP)  ; LAB_0055bbdb
    MOV EBX,dword ptr [ESP + 0xc]       ; 0055bbae
        ;   Label: LAB_0055bbae
    LEA EAX,[EBX*0x4 + 0x0]             ; 0055bbb2
    SUB EAX,EBX                         ; 0055bbb9
    XOR ECX,ECX                         ; 0055bbbb
    MOV dword ptr [EAX*0x8 + 0x2cf49fc],ECX ; 0055bbbd
    MOV dword ptr [EAX*0x8 + 0x2cf4a00],ECX ; 0055bbc4
    MOV dword ptr [EAX*0x8 + 0x2cf4a04],ECX ; 0055bbcb
    MOV dword ptr [EAX*0x8 + 0x2cf4a08],ECX ; 0055bbd2
    POP EBX                             ; 0055bbd9
    RET                                 ; 0055bbda
    MOV EAX,EDX                         ; 0055bbdb
        ;   Label: LAB_0055bbdb
    PUSH EAX                            ; 0055bbdd
    MOV EDX,dword ptr [EDX]             ; 0055bbde
    CALL dword ptr [EDX + 0x8]          ; 0055bbe0
    MOV dword ptr [EBX],0x0             ; 0055bbe3
    JMP 0x0055bbae                      ; 0055bbe9
        ;   XREF to: 0055bbae (UNCONDITIONAL_JUMP)  ; LAB_0055bbae

