; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl support_trstream_cpp_CInStreamFile_freeBuffer_FUN_0057d240(CInStreamFile *this_ptr)
;
; Parameters:
; CInStreamFile *  Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   support_trstream.cpp_CInStreamFile_close_FUN_0057d180 at 0057d1a2
;   support_trstream.cpp_FUN_0057d1d0 at 0057d1d6
;
; Called Functions:
;   crt_unknown.c_FUN_005b86a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057d240
        ;   Label: support_trstream.cpp_CInStreamFile_freeBuffer_FUN_0057d240
    MOV EBX,dword ptr [ESP + 0x8]       ; 0057d241
    MOV EDX,dword ptr [EBX + 0x14]      ; 0057d245
    TEST EDX,EDX                        ; 0057d248
    JNZ 0x0057d26a                      ; 0057d24a
        ;   XREF to: 0057d26a (CONDITIONAL_JUMP)  ; LAB_0057d26a
    MOV dword ptr [EBX + 0x1c],0x0      ; 0057d24c
        ;   Label: LAB_0057d24c
    MOV dword ptr [EBX + 0x20],0x0      ; 0057d253
    MOV dword ptr [EBX + 0x24],0x0      ; 0057d25a
    MOV dword ptr [EBX + 0x18],0x0      ; 0057d261
    POP EBX                             ; 0057d268
    RET                                 ; 0057d269
    PUSH EDX                            ; 0057d26a
        ;   Label: LAB_0057d26a
    CALL crt_unknown.c_FUN_005b86a0     ; 0057d26b
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b86a0()
    ADD ESP,0x4                         ; 0057d270
    MOV dword ptr [EBX + 0x14],0x0      ; 0057d273
    JMP 0x0057d24c                      ; 0057d27a
        ;   XREF to: 0057d24c (UNCONDITIONAL_JUMP)  ; LAB_0057d24c

