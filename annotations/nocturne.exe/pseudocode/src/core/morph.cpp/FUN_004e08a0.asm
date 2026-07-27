; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_morph_cpp_FUN_004e08a0(undefined4 param_1)
;
;
; Referenced Globals:
;   WatcomTypeInfo g_CBoundingBox3D_005993f0
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x5993f0                       ; 004e08a0 | g_CBoundingBox3D_005993f0
        ;   Label: core_morph.cpp_FUN_004e08a0
    PUSH 0x2                            ; 004e08a5
    MOV EDX,dword ptr [ESP + 0xc]       ; 004e08a7
    PUSH EDX                            ; 004e08ab
    CALL crt_memory.c___arrfini_FUN_0056494f ; 004e08ac
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrfini_FUN_0056494f()
    ADD ESP,0xc                         ; 004e08b1
    RET                                 ; 004e08b4

