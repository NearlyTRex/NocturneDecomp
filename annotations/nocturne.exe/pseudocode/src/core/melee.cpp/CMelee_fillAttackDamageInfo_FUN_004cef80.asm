; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_melee_cpp_CMelee_fillAttackDamageInfo_FUN_004cef80(CCharacter *param_1,int param_2,SDamageInfo *param_3,CDemonActor *param_4)
;
;
; Called Functions:
;   core_actor.cpp_CDemonActor_fillAttackDamageInfo_FUN_0040bca0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cef80
        ;   Label: core_melee.cpp_CMelee_fillAttackDamageInfo_FUN_004cef80
    PUSH ESI                            ; 004cef81
    SUB ESP,0x4                         ; 004cef82
    MOV EBX,dword ptr [ESP + 0x10]      ; 004cef85
    MOV ESI,dword ptr [ESP + 0x18]      ; 004cef89
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004cef8d
    PUSH EDX                            ; 004cef91
    PUSH ESI                            ; 004cef92
    MOV ECX,dword ptr [ESP + 0x1c]      ; 004cef93
    PUSH ECX                            ; 004cef97
    PUSH EBX                            ; 004cef98
    CALL core_actor.cpp_CDemonActor_fillAttackDamageInfo_FUN_0040bca0 ; 004cef99
        ;   XREF to: 0040bca0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_fillAttackDamageInfo_FUN_0040bca0(CDemonActor * this_ptr, int attack_flags, SDamageInfo * out_damage_info, CDemonActor * victim)
    ADD ESP,0x10                        ; 004cef9e
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004cefa1
    PUSH EBX                            ; 004cefa7
    CALL dword ptr [EAX + 0xe4]         ; 004cefa8
    MOV dword ptr [ESP + 0x4],EAX       ; 004cefae
    MOV EAX,dword ptr [ESP + 0x4]       ; 004cefb2
    MOV dword ptr [ESI + 0x4],EAX       ; 004cefb6
    MOV EAX,dword ptr [EBX + 0x57c]     ; 004cefb9
    MOV dword ptr [ESI + 0x2c],EAX      ; 004cefbf
    MOV EBX,dword ptr [EBX + 0x594]     ; 004cefc2
    ADD ESP,0x4                         ; 004cefc8
    MOV dword ptr [ESI + 0x28],EBX      ; 004cefcb
    ADD ESP,0x4                         ; 004cefce
    POP ESI                             ; 004cefd1
    POP EBX                             ; 004cefd2
    RET                                 ; 004cefd3

