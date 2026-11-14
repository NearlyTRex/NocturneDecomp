; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hero_cpp_CHero_setAiTask_FUN_004ec320(CHero *this_ptr,int ai_task)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   ai_task
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_00544460 at 00549747
;
; Called Functions:
;   crt_memory.c_memset_FUN_005bfb70
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004ec320
        ;   Label: core_hero.cpp_CHero_setAiTask_FUN_004ec320
    PUSH 0x30                           ; 004ec324
    PUSH 0x0                            ; 004ec326
    ADD EAX,0xc1d8                      ; 004ec328
    MOV EDX,dword ptr [ESP + 0x10]      ; 004ec32d
    PUSH EAX                            ; 004ec331
    MOV dword ptr [EAX + 0x13dd0],EDX   ; 004ec332
    CALL crt_memory.c_memset_FUN_005bfb70 ; 004ec338
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 004ec33d
    RET                                 ; 004ec340

