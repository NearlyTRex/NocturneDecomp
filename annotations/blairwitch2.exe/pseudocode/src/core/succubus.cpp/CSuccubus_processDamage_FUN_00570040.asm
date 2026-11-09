; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_succubus_cpp_CSuccubus_processDamage_FUN_00570040(CSuccubus *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CSuccubus *      Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; Called Functions:
;   core_enemy.cpp_FUN_00488890
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 00570040
        ;   Label: core_succubus.cpp_CSuccubus_processDamage_FUN_00570040
    PUSH EAX                            ; 00570044
    MOV EDX,dword ptr [ESP + 0x8]       ; 00570045
    PUSH EDX                            ; 00570049
    MOV dword ptr [EAX + 0x4],0x0       ; 0057004a
    CALL core_enemy.cpp_FUN_00488890    ; 00570051
        ;   XREF to: 00488890 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_00488890()
    ADD ESP,0x8                         ; 00570056
    RET                                 ; 00570059

