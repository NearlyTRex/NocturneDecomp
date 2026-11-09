; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 support_trisock_cpp_FUN_0059de30(int param_1,undefined4 *param_2)
;
;
; Called Functions:
;   crt_memory.c_memset_FUN_005bfb70
;   wincore_winrun.cpp_sleep_FUN_005b3860
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059de30
        ;   Label: support_trisock.cpp_FUN_0059de30
    PUSH EDI                            ; 0059de31
    MOV EBX,dword ptr [ESP + 0xc]       ; 0059de32
    MOV EDI,dword ptr [ESP + 0x10]      ; 0059de36
    CMP dword ptr [EBX + 0x3bc],0x1     ; 0059de3a
    JZ 0x0059de64                       ; 0059de41
        ;   XREF to: 0059de64 (CONDITIONAL_JUMP)  ; LAB_0059de64
    CMP dword ptr [EBX + 0x3bc],0x2     ; 0059de43
        ;   Label: LAB_0059de43
    JNZ 0x0059de72                      ; 0059de4a
        ;   XREF to: 0059de72 (CONDITIONAL_JUMP)  ; LAB_0059de72
    PUSH ESI                            ; 0059de4c
    MOV ECX,0xae                        ; 0059de4d
    LEA ESI,[EBX + 0x104]               ; 0059de52
    MOVSD.REP ES:EDI,ESI                ; 0059de58
    POP ESI                             ; 0059de5a
    MOV EAX,dword ptr [EBX + 0x3bc]     ; 0059de5b
    POP EDI                             ; 0059de61
    POP EBX                             ; 0059de62
    RET                                 ; 0059de63
    PUSH 0x0                            ; 0059de64
        ;   Label: LAB_0059de64
    PUSH 0x0                            ; 0059de66
    CALL wincore_winrun.cpp_sleep_FUN_005b3860 ; 0059de68
        ;   XREF to: 005b3860 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_sleep_FUN_005b3860(double seconds)
    ADD ESP,0x8                         ; 0059de6d
    JMP 0x0059de43                      ; 0059de70
        ;   XREF to: 0059de43 (UNCONDITIONAL_JUMP)  ; LAB_0059de43
    PUSH 0x2b8                          ; 0059de72
        ;   Label: LAB_0059de72
    PUSH 0x0                            ; 0059de77
    PUSH EDI                            ; 0059de79
    CALL crt_memory.c_memset_FUN_005bfb70 ; 0059de7a
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0059de7f
    MOV EAX,dword ptr [EBX + 0x3bc]     ; 0059de82
    POP EDI                             ; 0059de88
    POP EBX                             ; 0059de89
    RET                                 ; 0059de8a

