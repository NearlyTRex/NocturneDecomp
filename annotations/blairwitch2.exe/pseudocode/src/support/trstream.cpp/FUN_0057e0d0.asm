; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void support_trstream_cpp_FUN_0057e0d0(int param_1)
;
;
; XREF[1]:
;   support_trstream.cpp_COutStreamMemory_dtor_FUN_0057df10 at 0057df23
;
; Called Functions:
;   crt_unknown.c_FUN_005b86a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057e0d0
        ;   Label: support_trstream.cpp_FUN_0057e0d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0057e0d1
    MOV EDX,dword ptr [EBX + 0x4]       ; 0057e0d5
    TEST EDX,EDX                        ; 0057e0d8
    JZ 0x0057e0e9                       ; 0057e0da
        ;   XREF to: 0057e0e9 (CONDITIONAL_JUMP)  ; LAB_0057e0e9
    CMP dword ptr [EBX + 0x14],0x0      ; 0057e0dc
    JNZ 0x0057e100                      ; 0057e0e0
        ;   XREF to: 0057e100 (CONDITIONAL_JUMP)  ; LAB_0057e100
    MOV dword ptr [EBX + 0x4],0x0       ; 0057e0e2
        ;   Label: LAB_0057e0e2
    MOV dword ptr [EBX + 0xc],0x0       ; 0057e0e9
        ;   Label: LAB_0057e0e9
    MOV dword ptr [EBX + 0x14],0x1      ; 0057e0f0
    MOV dword ptr [EBX + 0x8],0x0       ; 0057e0f7
    POP EBX                             ; 0057e0fe
    RET                                 ; 0057e0ff
    PUSH EDX                            ; 0057e100
        ;   Label: LAB_0057e100
    CALL crt_unknown.c_FUN_005b86a0     ; 0057e101
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b86a0()
    ADD ESP,0x4                         ; 0057e106
    JMP 0x0057e0e2                      ; 0057e109
        ;   XREF to: 0057e0e2 (UNCONDITIONAL_JUMP)  ; LAB_0057e0e2

