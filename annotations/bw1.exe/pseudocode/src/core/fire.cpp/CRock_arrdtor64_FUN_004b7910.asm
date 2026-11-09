; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CRock * core_fire_cpp_CRock_arrdtor64_FUN_004b7910(CRock *this_ptr,uint flags)
;
; Parameters:
; CRock *          Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005c1066
;
; *****************************************************************************

section .text

    PUSH 0x600200                       ; 004b7910
        ;   Label: core_fire.cpp_CRock_arrdtor64_FUN_004b7910
    PUSH 0x40                           ; 004b7915
    MOV EDX,dword ptr [ESP + 0xc]       ; 004b7917
    PUSH EDX                            ; 004b791b
    CALL crt_memory.c___arrfini_FUN_005c1066 ; 004b791c
        ;   XREF to: 005c1066 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrfini_FUN_005c1066()
    ADD ESP,0xc                         ; 004b7921
    RET                                 ; 004b7924

