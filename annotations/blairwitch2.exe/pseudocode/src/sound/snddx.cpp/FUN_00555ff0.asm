; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_snddx_cpp_FUN_00555ff0(undefined4 param_1,int param_2)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00555ff0
        ;   Label: sound_snddx.cpp_FUN_00555ff0
    MOV EBX,dword ptr [ESP + 0xc]       ; 00555ff1
    LEA EAX,[EBX*0x4 + 0x0]             ; 00555ff5
    SUB EAX,EBX                         ; 00555ffc
    MOV EBX,0x264a5f4                   ; 00555ffe
    SHL EAX,0x3                         ; 00556003
    ADD EBX,EAX                         ; 00556006
    MOV EDX,dword ptr [EBX]             ; 00556008
    TEST EDX,EDX                        ; 0055600a
    JNZ 0x0055603b                      ; 0055600c
        ;   XREF to: 0055603b (CONDITIONAL_JUMP)  ; LAB_0055603b
    MOV EBX,dword ptr [ESP + 0xc]       ; 0055600e
        ;   Label: LAB_0055600e
    LEA EAX,[EBX*0x4 + 0x0]             ; 00556012
    SUB EAX,EBX                         ; 00556019
    XOR ECX,ECX                         ; 0055601b
    MOV dword ptr [EAX*0x8 + 0x264a5fc],ECX ; 0055601d
    MOV dword ptr [EAX*0x8 + 0x264a600],ECX ; 00556024
    MOV dword ptr [EAX*0x8 + 0x264a604],ECX ; 0055602b
    MOV dword ptr [EAX*0x8 + 0x264a608],ECX ; 00556032
    POP EBX                             ; 00556039
    RET                                 ; 0055603a
    MOV EAX,EDX                         ; 0055603b
        ;   Label: LAB_0055603b
    PUSH EAX                            ; 0055603d
    MOV EDX,dword ptr [EDX]             ; 0055603e
    CALL dword ptr [EDX + 0x8]          ; 00556040
    MOV dword ptr [EBX],0x0             ; 00556043
    JMP 0x0055600e                      ; 00556049
        ;   XREF to: 0055600e (UNCONDITIONAL_JUMP)  ; LAB_0055600e

