; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_actor_cpp_FUN_0040e300(undefined4 param_1)
;
;
; Referenced Globals:
;   WatcomTypeInfo g_CVectorTypeInfo_005993b0
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x5993b0                       ; 0040e300 | g_CVectorTypeInfo_005993b0
        ;   Label: core_actor.cpp_FUN_0040e300
    PUSH 0xa                            ; 0040e305
    MOV EDX,dword ptr [ESP + 0xc]       ; 0040e307
    PUSH EDX                            ; 0040e30b
    CALL crt_memory.c___arrfini_FUN_0056494f ; 0040e30c
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrfini_FUN_0056494f()
    ADD ESP,0xc                         ; 0040e311
    RET                                 ; 0040e314

