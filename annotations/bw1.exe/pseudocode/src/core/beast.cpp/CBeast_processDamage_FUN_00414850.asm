; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_beast_cpp_CBeast_processDamage_FUN_00414850(CBeast *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CBeast *         Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; Called Functions:
;   core_enemy.cpp_FUN_004a0f00
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 00414850
        ;   Label: core_beast.cpp_CBeast_processDamage_FUN_00414850
    PUSH EAX                            ; 00414854
    MOV EDX,dword ptr [ESP + 0x8]       ; 00414855
    PUSH EDX                            ; 00414859
    MOV dword ptr [EAX + 0x4],0x0       ; 0041485a
    CALL core_enemy.cpp_FUN_004a0f00    ; 00414861
        ;   XREF to: 004a0f00 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_004a0f00()
    ADD ESP,0x8                         ; 00414866
    RET                                 ; 00414869

