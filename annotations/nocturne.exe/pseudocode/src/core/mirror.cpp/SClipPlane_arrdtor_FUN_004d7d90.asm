; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mirror_cpp_SClipPlane_arrdtor_FUN_004d7d90(undefined4 param_1)
;
;
; XREF[1]:
;   core_mirror.cpp_CMirror_dtor_FUN_004d6570 at 004d657c
;
; Referenced Globals:
;   WatcomTypeInfo g_SClipPlaneTypeInfo_005a08a0
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x5a08a0                       ; 004d7d90 | g_SClipPlaneTypeInfo_005a08a0
        ;   Label: core_mirror.cpp_SClipPlane_arrdtor_FUN_004d7d90
    PUSH 0x5                            ; 004d7d95
    MOV EDX,dword ptr [ESP + 0xc]       ; 004d7d97
    PUSH EDX                            ; 004d7d9b
    CALL crt_memory.c___arrfini_FUN_0056494f ; 004d7d9c
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrfini_FUN_0056494f()
    ADD ESP,0xc                         ; 004d7da1
    RET                                 ; 004d7da4

