; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_beast_cpp_CBeast_processDamage_FUN_00414b60(CBeast *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CBeast *         Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; Called Functions:
;   core_enemy.cpp_FUN_00488890
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 00414b60
        ;   Label: core_beast.cpp_CBeast_processDamage_FUN_00414b60
    PUSH EAX                            ; 00414b64
    MOV EDX,dword ptr [ESP + 0x8]       ; 00414b65
    PUSH EDX                            ; 00414b69
    MOV dword ptr [EAX + 0x4],0x0       ; 00414b6a
    CALL core_enemy.cpp_FUN_00488890    ; 00414b71
        ;   XREF to: 00488890 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_00488890()
    ADD ESP,0x8                         ; 00414b76
    RET                                 ; 00414b79

