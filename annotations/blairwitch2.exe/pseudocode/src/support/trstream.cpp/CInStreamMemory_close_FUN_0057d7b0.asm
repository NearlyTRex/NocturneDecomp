; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl support_trstream_cpp_CInStreamMemory_close_FUN_0057d7b0(CInStreamMemory *this_ptr)
;
; Parameters:
; CInStreamMemory * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   support_trstream.cpp_CInStreamMemory_dtor_FUN_0057d5a0 at 0057d5b3
;
; Called Functions:
;   crt_unknown.c_FUN_005b86a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057d7b0
        ;   Label: support_trstream.cpp_CInStreamMemory_close_FUN_0057d7b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0057d7b1
    MOV EDX,dword ptr [EBX + 0x4]       ; 0057d7b5
    TEST EDX,EDX                        ; 0057d7b8
    JZ 0x0057d7c9                       ; 0057d7ba
        ;   XREF to: 0057d7c9 (CONDITIONAL_JUMP)  ; LAB_0057d7c9
    CMP dword ptr [EBX + 0x10],0x0      ; 0057d7bc
    JNZ 0x0057d7e7                      ; 0057d7c0
        ;   XREF to: 0057d7e7 (CONDITIONAL_JUMP)  ; LAB_0057d7e7
    MOV dword ptr [EBX + 0x4],0x0       ; 0057d7c2
        ;   Label: LAB_0057d7c2
    MOV dword ptr [EBX + 0x8],0x0       ; 0057d7c9
        ;   Label: LAB_0057d7c9
    MOV dword ptr [EBX + 0xc],0x0       ; 0057d7d0
    MOV dword ptr [EBX + 0x10],0x0      ; 0057d7d7
    MOV dword ptr [EBX + 0x4],0x0       ; 0057d7de
    POP EBX                             ; 0057d7e5
    RET                                 ; 0057d7e6
    PUSH EDX                            ; 0057d7e7
        ;   Label: LAB_0057d7e7
    CALL crt_unknown.c_FUN_005b86a0     ; 0057d7e8
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b86a0()
    ADD ESP,0x4                         ; 0057d7ed
    JMP 0x0057d7c2                      ; 0057d7f0
        ;   XREF to: 0057d7c2 (UNCONDITIONAL_JUMP)  ; LAB_0057d7c2

