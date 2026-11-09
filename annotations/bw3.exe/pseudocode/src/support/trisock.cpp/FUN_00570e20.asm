; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 support_trisock_cpp_FUN_00570e20(int param_1,undefined4 *param_2)
;
;
; Called Functions:
;   crt_memory.c_memset_FUN_005a28f0
;   wincore_winrun.cpp_sleep_FUN_00581a40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00570e20
        ;   Label: support_trisock.cpp_FUN_00570e20
    PUSH EDI                            ; 00570e21
    MOV EBX,dword ptr [ESP + 0xc]       ; 00570e22
    MOV EDI,dword ptr [ESP + 0x10]      ; 00570e26
    CMP dword ptr [EBX + 0x3bc],0x1     ; 00570e2a
    JZ 0x00570e54                       ; 00570e31
        ;   XREF to: 00570e54 (CONDITIONAL_JUMP)  ; LAB_00570e54
    CMP dword ptr [EBX + 0x3bc],0x2     ; 00570e33
        ;   Label: LAB_00570e33
    JNZ 0x00570e62                      ; 00570e3a
        ;   XREF to: 00570e62 (CONDITIONAL_JUMP)  ; LAB_00570e62
    PUSH ESI                            ; 00570e3c
    MOV ECX,0xae                        ; 00570e3d
    LEA ESI,[EBX + 0x104]               ; 00570e42
    MOVSD.REP ES:EDI,ESI                ; 00570e48
    POP ESI                             ; 00570e4a
    MOV EAX,dword ptr [EBX + 0x3bc]     ; 00570e4b
    POP EDI                             ; 00570e51
    POP EBX                             ; 00570e52
    RET                                 ; 00570e53
    PUSH 0x0                            ; 00570e54
        ;   Label: LAB_00570e54
    PUSH 0x0                            ; 00570e56
    CALL wincore_winrun.cpp_sleep_FUN_00581a40 ; 00570e58
        ;   XREF to: 00581a40 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_sleep_FUN_00581a40(double seconds)
    ADD ESP,0x8                         ; 00570e5d
    JMP 0x00570e33                      ; 00570e60
        ;   XREF to: 00570e33 (UNCONDITIONAL_JUMP)  ; LAB_00570e33
    PUSH 0x2b8                          ; 00570e62
        ;   Label: LAB_00570e62
    PUSH 0x0                            ; 00570e67
    PUSH EDI                            ; 00570e69
    CALL crt_memory.c_memset_FUN_005a28f0 ; 00570e6a
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00570e6f
    MOV EAX,dword ptr [EBX + 0x3bc]     ; 00570e72
    POP EDI                             ; 00570e78
    POP EBX                             ; 00570e79
    RET                                 ; 00570e7a

