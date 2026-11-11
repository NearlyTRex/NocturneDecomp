; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_fldnotes_cpp_FUN_004ad410(undefined4 param_1)
;
;
; XREF[1]:
;   core_fldnotes.cpp_SPageResourceTwanaEntry_dtor_FUN_004a8980 at 004a89ae
;
; Referenced Globals:
;   WatcomTypeInfo g_CAlphaBitmapTypeInfo
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005a3de6
;
; *****************************************************************************

section .text

    PUSH 0x5dbf20                       ; 004ad410 | g_CAlphaBitmapTypeInfo
        ;   Label: unkafter_fldnotes.cpp_FUN_004ad410
    PUSH 0x3                            ; 004ad415
    MOV EDX,dword ptr [ESP + 0xc]       ; 004ad417
    PUSH EDX                            ; 004ad41b
    CALL crt_memory.c___arrfini_FUN_005a3de6 ; 004ad41c
        ;   XREF to: 005a3de6 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrfini_FUN_005a3de6()
    ADD ESP,0xc                         ; 004ad421
    RET                                 ; 004ad424

