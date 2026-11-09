; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_00516c60(void)
;
;
; XREF[7]:
;   engine_mini3d.cpp_FUN_005126d0 at 00512712
;   engine_mini3d.cpp_FUN_00512940 at 00512969
;   engine_mini3d.cpp_FUN_005129d0 at 00512a12
;   engine_mini3d.cpp_FUN_00512bce at 00512bf9
;   engine_mini3d.cpp_FUN_00512c60 at 00512cb5
;   engine_mini3d.cpp_FUN_00512de0 at 00512e2e
;   engine_mini3d.cpp_FUN_00513220 at 00513225
;
; Referenced Globals:
;   undefined4 DAT_01c51d0c
;   undefined4 DAT_01c51d14
;   undefined4 DAT_01c51d18
;   undefined4 DAT_01d224b8
;   undefined4 DAT_01d224bc
;   undefined4 DAT_01d224c4
;   undefined4 DAT_01d224c8
;
; *****************************************************************************

section .text

    MOV EAX,[0x01d224b8]                ; 00516c60 | DAT_01d224b8
        ;   Label: engine_mini3d.cpp_FUN_00516c60
    MOV ECX,dword ptr [0x01d224c8]      ; 00516c65 | DAT_01d224c8
    XOR EDX,EDX                         ; 00516c6b
    OR AX,0x205                         ; 00516c6d
    MOV dword ptr [0x01c51d18],EDX      ; 00516c71 | DAT_01c51d18
    MOV [0x01c51d14],EAX                ; 00516c77 | DAT_01c51d14
    TEST ECX,ECX                        ; 00516c7c
    JNZ 0x00516c94                      ; 00516c7e
        ;   XREF to: 00516c94 (CONDITIONAL_JUMP)  ; LAB_00516c94
    CMP dword ptr [0x01d224c4],0x0      ; 00516c80 | DAT_01d224c4
        ;   Label: LAB_00516c80
    JNZ 0x00516c9d                      ; 00516c87
        ;   XREF to: 00516c9d (CONDITIONAL_JUMP)  ; LAB_00516c9d
    MOV EAX,[0x01d224bc]                ; 00516c89 | DAT_01d224bc
    MOV [0x01c51d0c],EAX                ; 00516c8e | DAT_01c51d0c
    RET                                 ; 00516c93
    OR byte ptr [0x01c51d14],0x8        ; 00516c94 | DAT_01c51d14
        ;   Label: LAB_00516c94
    JMP 0x00516c80                      ; 00516c9b
        ;   XREF to: 00516c80 (UNCONDITIONAL_JUMP)  ; LAB_00516c80
    OR word ptr [0x01c51d14],0x122      ; 00516c9d | DAT_01c51d14
        ;   Label: LAB_00516c9d
    MOV EAX,[0x01d224bc]                ; 00516ca6 | DAT_01d224bc
    MOV [0x01c51d0c],EAX                ; 00516cab | DAT_01c51d0c
    RET                                 ; 00516cb0

