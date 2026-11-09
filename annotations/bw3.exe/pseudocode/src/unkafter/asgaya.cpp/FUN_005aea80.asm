; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_asgaya_cpp_FUN_005aea80(int param_1,undefined4 *param_2,undefined4 *param_3)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005aa0f0 at 005aa12a
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005aea80
        ;   Label: unkafter_asgaya.cpp_FUN_005aea80
    MOV EDX,dword ptr [ESP + 0xc]       ; 005aea81
    MOV EAX,dword ptr [ESP + 0x10]      ; 005aea85
    MOV EBX,dword ptr [ESP + 0x8]       ; 005aea89
    CMP EBX,0x2                         ; 005aea8d
    JNZ 0x005aeaa0                      ; 005aea90
        ;   XREF to: 005aeaa0 (CONDITIONAL_JUMP)  ; LAB_005aeaa0
    MOV dword ptr [EDX],0xc0000000      ; 005aea92
    MOV dword ptr [EAX],0x80            ; 005aea98
    POP EBX                             ; 005aea9e
    RET                                 ; 005aea9f
    CMP EBX,0x1                         ; 005aeaa0
        ;   Label: LAB_005aeaa0
    JNZ 0x005aeab3                      ; 005aeaa3
        ;   XREF to: 005aeab3 (CONDITIONAL_JUMP)  ; LAB_005aeab3
    MOV dword ptr [EDX],0x40000000      ; 005aeaa5
    MOV dword ptr [EAX],0x80            ; 005aeaab
    POP EBX                             ; 005aeab1
    RET                                 ; 005aeab2
    MOV dword ptr [EDX],0x80000000      ; 005aeab3
        ;   Label: LAB_005aeab3
    MOV dword ptr [EAX],0x1             ; 005aeab9
    POP EBX                             ; 005aeabf
    RET                                 ; 005aeac0

