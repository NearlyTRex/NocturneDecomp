; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CStake * core_fire_cpp_CStake_arrdtor256_FUN_0049f100(CStake *this_ptr,uint flags)
;
; Parameters:
; CStake *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005b854f
;
; *****************************************************************************

section .text

    PUSH 0x5f6670                       ; 0049f100
        ;   Label: core_fire.cpp_CStake_arrdtor256_FUN_0049f100
    PUSH 0x100                          ; 0049f105
    MOV EDX,dword ptr [ESP + 0xc]       ; 0049f10a
    PUSH EDX                            ; 0049f10e
    CALL crt_memory.c___arrfini_FUN_005b854f ; 0049f10f
        ;   XREF to: 005b854f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrfini_FUN_005b854f()
    ADD ESP,0xc                         ; 0049f114
    RET                                 ; 0049f117

