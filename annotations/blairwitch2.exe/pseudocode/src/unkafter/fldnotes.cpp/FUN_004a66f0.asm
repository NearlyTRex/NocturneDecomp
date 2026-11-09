; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_fldnotes_cpp_FUN_004a66f0(undefined4 param_1)
;
;
; XREF[1]:
;   core_fldnotes.cpp_PageResource_TwanaEntry_dtor_FUN_004a2470 at 004a249e
;
; Referenced Globals:
;   WatcomTypeInfo g_CAlphaBitmapTypeInfo
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005b854f
;
; *****************************************************************************

section .text

    PUSH 0x5f6f60                       ; 004a66f0 | g_CAlphaBitmapTypeInfo
        ;   Label: unkafter_fldnotes.cpp_FUN_004a66f0
    PUSH 0x3                            ; 004a66f5
    MOV EDX,dword ptr [ESP + 0xc]       ; 004a66f7
    PUSH EDX                            ; 004a66fb
    CALL crt_memory.c___arrfini_FUN_005b854f ; 004a66fc
        ;   XREF to: 005b854f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrfini_FUN_005b854f()
    ADD ESP,0xc                         ; 004a6701
    RET                                 ; 004a6704

