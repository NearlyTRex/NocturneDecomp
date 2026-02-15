; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hero_cpp_CHero_FUN_004f3930(CHero *this_ptr)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_0055a810 at 0055ee01
;
; Called Functions:
;   crt_memory.c_memset_FUN_005fde40
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004f3930
        ;   Label: core_hero.cpp_CHero_FUN_004f3930
    PUSH 0x2c                           ; 004f3934
    PUSH 0x0                            ; 004f3936
    ADD EAX,0xbe2c                      ; 004f3938
    MOV EDX,dword ptr [ESP + 0x10]      ; 004f393d
    PUSH EAX                            ; 004f3941
    MOV dword ptr [EAX + 0x13da4],EDX   ; 004f3942
    CALL crt_memory.c_memset_FUN_005fde40 ; 004f3948
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 004f394d
    RET                                 ; 004f3950

