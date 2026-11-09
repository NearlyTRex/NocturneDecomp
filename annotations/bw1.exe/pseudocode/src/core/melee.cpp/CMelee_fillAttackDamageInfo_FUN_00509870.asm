; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_melee_cpp_CMelee_fillAttackDamageInfo_FUN_00509870(CMelee *this_ptr,int attack_flags,SDamageInfo *out_damage_info,CDemonActor *victim)
;
; Parameters:
; CMelee *         Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   attack_flags
; SDamageInfo *    Stack[0xc]:4   out_damage_info
; CDemonActor *    Stack[0x10]:4   victim
;
; Called Functions:
;   core_actor.cpp_FUN_0040aa60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00509870
        ;   Label: core_melee.cpp_CMelee_fillAttackDamageInfo_FUN_00509870
    PUSH ESI                            ; 00509871
    SUB ESP,0x4                         ; 00509872
    MOV EBX,dword ptr [ESP + 0x10]      ; 00509875
    MOV ESI,dword ptr [ESP + 0x18]      ; 00509879
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0050987d
    PUSH EDX                            ; 00509881
    PUSH ESI                            ; 00509882
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00509883
    PUSH ECX                            ; 00509887
    PUSH EBX                            ; 00509888
    CALL core_actor.cpp_FUN_0040aa60    ; 00509889
        ;   XREF to: 0040aa60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040aa60()
    ADD ESP,0x10                        ; 0050988e
    MOV EAX,dword ptr [EBX + 0x154]     ; 00509891
    PUSH EBX                            ; 00509897
    CALL dword ptr [EAX + 0xec]         ; 00509898
    MOV dword ptr [ESP + 0x4],EAX       ; 0050989e
    MOV EAX,dword ptr [ESP + 0x4]       ; 005098a2
    MOV dword ptr [ESI + 0x4],EAX       ; 005098a6
    MOV EAX,dword ptr [EBX + 0x584]     ; 005098a9
    MOV dword ptr [ESI + 0x2c],EAX      ; 005098af
    MOV EBX,dword ptr [EBX + 0x59c]     ; 005098b2
    ADD ESP,0x4                         ; 005098b8
    MOV dword ptr [ESI + 0x28],EBX      ; 005098bb
    ADD ESP,0x4                         ; 005098be
    POP ESI                             ; 005098c1
    POP EBX                             ; 005098c2
    RET                                 ; 005098c3

