; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 support_trisock_cpp_FUN_0057a7c0(int param_1,undefined4 *param_2)
;
;
; Called Functions:
;   crt_memory.c_memset_FUN_005b77c0
;   wincore_winrun.cpp_sleep_FUN_0058fd90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057a7c0
        ;   Label: support_trisock.cpp_FUN_0057a7c0
    PUSH EDI                            ; 0057a7c1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0057a7c2
    MOV EDI,dword ptr [ESP + 0x10]      ; 0057a7c6
    CMP dword ptr [EBX + 0x3bc],0x1     ; 0057a7ca
    JZ 0x0057a7f4                       ; 0057a7d1
        ;   XREF to: 0057a7f4 (CONDITIONAL_JUMP)  ; LAB_0057a7f4
    CMP dword ptr [EBX + 0x3bc],0x2     ; 0057a7d3
        ;   Label: LAB_0057a7d3
    JNZ 0x0057a802                      ; 0057a7da
        ;   XREF to: 0057a802 (CONDITIONAL_JUMP)  ; LAB_0057a802
    PUSH ESI                            ; 0057a7dc
    MOV ECX,0xae                        ; 0057a7dd
    LEA ESI,[EBX + 0x104]               ; 0057a7e2
    MOVSD.REP ES:EDI,ESI                ; 0057a7e8
    POP ESI                             ; 0057a7ea
    MOV EAX,dword ptr [EBX + 0x3bc]     ; 0057a7eb
    POP EDI                             ; 0057a7f1
    POP EBX                             ; 0057a7f2
    RET                                 ; 0057a7f3
    PUSH 0x0                            ; 0057a7f4
        ;   Label: LAB_0057a7f4
    PUSH 0x0                            ; 0057a7f6
    CALL wincore_winrun.cpp_sleep_FUN_0058fd90 ; 0057a7f8
        ;   XREF to: 0058fd90 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_sleep_FUN_0058fd90(double seconds)
    ADD ESP,0x8                         ; 0057a7fd
    JMP 0x0057a7d3                      ; 0057a800
        ;   XREF to: 0057a7d3 (UNCONDITIONAL_JUMP)  ; LAB_0057a7d3
    PUSH 0x2b8                          ; 0057a802
        ;   Label: LAB_0057a802
    PUSH 0x0                            ; 0057a807
    PUSH EDI                            ; 0057a809
    CALL crt_memory.c_memset_FUN_005b77c0 ; 0057a80a
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0057a80f
    MOV EAX,dword ptr [EBX + 0x3bc]     ; 0057a812
    POP EDI                             ; 0057a818
    POP EBX                             ; 0057a819
    RET                                 ; 0057a81a

