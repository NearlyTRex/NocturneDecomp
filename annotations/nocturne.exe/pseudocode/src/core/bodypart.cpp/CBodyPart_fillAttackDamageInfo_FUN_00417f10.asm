; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bodypart_cpp_CBodyPart_fillAttackDamageInfo_FUN_00417f10(CBodyPart *this_ptr,int attack_flags,SDamageInfo *out_damage_info,CDemonActor *victim)
;
; Parameters:
; CBodyPart *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   attack_flags
; SDamageInfo *    Stack[0xc]:4   out_damage_info
; CDemonActor *    Stack[0x10]:4   victim
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; Called Functions:
;   core_actor.cpp_CDemonActor_fillAttackDamageInfo_FUN_0040bca0
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00417f10
        ;   Label: core_bodypart.cpp_CBodyPart_fillAttackDamageInfo_FUN_00417f10
    PUSH ESI                            ; 00417f11
    SUB ESP,0x4                         ; 00417f12
    MOV EBX,dword ptr [ESP + 0x18]      ; 00417f15
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00417f19
    PUSH EDX                            ; 00417f1d
    PUSH EBX                            ; 00417f1e
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00417f1f
    PUSH ECX                            ; 00417f23
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00417f24
    PUSH ESI                            ; 00417f28
    CALL core_actor.cpp_CDemonActor_fillAttackDamageInfo_FUN_0040bca0 ; 00417f29
        ;   XREF to: 0040bca0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_fillAttackDamageInfo_FUN_0040bca0(CDemonActor * this_ptr, int attack_flags, SDamageInfo * out_damage_info, CDemonActor * victim)
    ADD ESP,0x10                        ; 00417f2e
    PUSH 0x41700000                     ; 00417f31
    PUSH 0x40a00000                     ; 00417f36
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00417f3b
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [ESP + 0x8],EAX       ; 00417f40
    MOV dword ptr [EBX + 0x2c],0x3ca3d70a ; 00417f44
    MOV EAX,dword ptr [ESP + 0x8]       ; 00417f4b
    MOV dword ptr [EBX + 0x4],EAX       ; 00417f4f
    ADD ESP,0x8                         ; 00417f52
    ADD ESP,0x4                         ; 00417f55
    POP ESI                             ; 00417f58
    POP EBX                             ; 00417f59
    RET                                 ; 00417f5a

