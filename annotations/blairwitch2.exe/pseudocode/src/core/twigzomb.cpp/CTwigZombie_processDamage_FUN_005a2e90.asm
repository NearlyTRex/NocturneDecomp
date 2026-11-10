; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_twigzomb_cpp_CTwigZombie_processDamage_FUN_005a2e90(CTwigZombie *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CTwigZombie *    Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; Called Functions:
;   core_basicene.cpp_CBasicEnemy_processDamage_FUN_0059f800
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 005a2e90
        ;   Label: core_twigzomb.cpp_CTwigZombie_processDamage_FUN_005a2e90
    PUSH EAX                            ; 005a2e94
    MOV EDX,dword ptr [ESP + 0x8]       ; 005a2e95
    PUSH EDX                            ; 005a2e99
    MOV dword ptr [EAX + 0x8],0x0       ; 005a2e9a
    CALL core_basicene.cpp_CBasicEnemy_processDamage_FUN_0059f800 ; 005a2ea1
        ;   XREF to: 0059f800 (UNCONDITIONAL_CALL)  ; void core_basicene.cpp_CBasicEnemy_processDamage_FUN_0059f800(CBasicEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 005a2ea6
    RET                                 ; 005a2ea9

