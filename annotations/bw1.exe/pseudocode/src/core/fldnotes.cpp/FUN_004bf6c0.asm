; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fldnotes_cpp_FUN_004bf6c0(void *param_1)
;
;
; XREF[1]:
;   core_fldnotes.cpp_SPageResourceTwanaEntry_dtor_FUN_004bad40 at 004bad6e
;
; Referenced Globals:
;   WatcomTypeInfo g_CAlphaBitmapTypeInfo
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005c1066
;
; *****************************************************************************

section .text

    PUSH 0x5fca10                       ; 004bf6c0 | g_CAlphaBitmapTypeInfo
        ;   Label: core_fldnotes.cpp_FUN_004bf6c0
    PUSH 0x3                            ; 004bf6c5
    MOV EDX,dword ptr [ESP + 0xc]       ; 004bf6c7
    PUSH EDX                            ; 004bf6cb
    CALL crt_memory.c___arrfini_FUN_005c1066 ; 004bf6cc
        ;   XREF to: 005c1066 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005c1066(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004bf6d1
    RET                                 ; 004bf6d4

