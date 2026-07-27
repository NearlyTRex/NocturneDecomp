; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_dracbrid_cpp_SFreaky_ctor_FUN_0045b310(int param_1)
;
;
; Referenced Globals:
;   WatcomTypeInfo g_CVectorTypeInfo_005993b0
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005644a7
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0045b310
        ;   Label: core_dracbrid.cpp_SFreaky_ctor_FUN_0045b310
    PUSH 0x5993b0                       ; 0045b314 | g_CVectorTypeInfo_005993b0
    PUSH 0x4                            ; 0045b319
    ADD EAX,0x20                        ; 0045b31b
    PUSH EAX                            ; 0045b31e
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 0045b31f
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005644a7()
    ADD ESP,0xc                         ; 0045b324
    SUB EAX,0x20                        ; 0045b327
    RET                                 ; 0045b32a

