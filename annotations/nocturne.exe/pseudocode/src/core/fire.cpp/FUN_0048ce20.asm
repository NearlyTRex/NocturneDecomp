; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_FUN_0048ce20(void)
;
;
; Referenced Globals:
;   WatcomTypeInfo g_CBulletTrailTypeInfo_0059d3c0
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x59d3c0                       ; 0048ce20 | g_CBulletTrailTypeInfo_0059d3c0
        ;   Label: core_fire.cpp_FUN_0048ce20
    PUSH 0xa                            ; 0048ce25
    MOV EDX,dword ptr [ESP + 0xc]       ; 0048ce27
    PUSH EDX                            ; 0048ce2b
    CALL crt_memory.c___arrfini_FUN_0056494f ; 0048ce2c
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrfini_FUN_0056494f()
    ADD ESP,0xc                         ; 0048ce31
    RET                                 ; 0048ce34

