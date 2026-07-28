; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hero_cpp_CHero_setAiTask_FUN_004b5cd0(CHero *this_ptr,int ai_task)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   ai_task
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_004ff2c0 at 005038bb
;
; Called Functions:
;   crt_memory.c_memset_FUN_00563cc0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004b5cd0
        ;   Label: core_hero.cpp_CHero_setAiTask_FUN_004b5cd0
    PUSH 0x2c                           ; 004b5cd4
    PUSH 0x0                            ; 004b5cd6
    ADD EAX,0xbc94                      ; 004b5cd8
    MOV EDX,dword ptr [ESP + 0x10]      ; 004b5cdd
    PUSH EAX                            ; 004b5ce1
    MOV dword ptr [EAX + 0x13da4],EDX   ; 004b5ce2
    CALL crt_memory.c_memset_FUN_00563cc0 ; 004b5ce8
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_00563cc0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 004b5ced
    RET                                 ; 004b5cf0

