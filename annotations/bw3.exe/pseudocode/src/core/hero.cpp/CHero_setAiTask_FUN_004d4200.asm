; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hero_cpp_CHero_setAiTask_FUN_004d4200(CHero *this_ptr,int ai_task)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   ai_task
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_00529a70 at 0052ee37
;
; Called Functions:
;   crt_memory.c_memset_FUN_005a28f0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004d4200
        ;   Label: core_hero.cpp_CHero_setAiTask_FUN_004d4200
    PUSH 0x34                           ; 004d4204
    PUSH 0x0                            ; 004d4206
    ADD EAX,0xcdd4                      ; 004d4208
    MOV EDX,dword ptr [ESP + 0x10]      ; 004d420d
    PUSH EAX                            ; 004d4211
    MOV dword ptr [EAX + 0x13df4],EDX   ; 004d4212
    CALL crt_memory.c_memset_FUN_005a28f0 ; 004d4218
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 004d421d
    RET                                 ; 004d4220

