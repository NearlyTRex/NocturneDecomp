; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hero_cpp_CHero_setAiTask_FUN_004d0090(CHero *this_ptr,int ai_task)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   ai_task
;
; XREF[1]:
;   core_script.cpp_FUN_00522350 at 00528459
;
; Called Functions:
;   crt_memory.c_memset_FUN_005b77c0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004d0090
        ;   Label: core_hero.cpp_CHero_setAiTask_FUN_004d0090
    PUSH 0x34                           ; 004d0094
    PUSH 0x0                            ; 004d0096
    ADD EAX,0x10a68                     ; 004d0098
    MOV EDX,dword ptr [ESP + 0x10]      ; 004d009d
    PUSH EAX                            ; 004d00a1
    MOV dword ptr [EAX + 0x14bd0],EDX   ; 004d00a2
    CALL crt_memory.c_memset_FUN_005b77c0 ; 004d00a8
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 004d00ad
    RET                                 ; 004d00b0

