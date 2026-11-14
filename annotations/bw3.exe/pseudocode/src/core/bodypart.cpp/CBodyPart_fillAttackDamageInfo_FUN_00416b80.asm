; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bodypart_cpp_CBodyPart_fillAttackDamageInfo_FUN_00416b80(CBodyPart *this_ptr,int attack_flags,SDamageInfo *out_damage_info,CDemonActor *victim)
;
; Parameters:
; CBodyPart *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   attack_flags
; SDamageInfo *    Stack[0xc]:4   out_damage_info
; CDemonActor *    Stack[0x10]:4   victim
;
; Called Functions:
;   core_actor.cpp_CDemonActor_fillAttackDamageInfo_FUN_0040aca0
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00416b80
        ;   Label: core_bodypart.cpp_CBodyPart_fillAttackDamageInfo_FUN_00416b80
    PUSH ESI                            ; 00416b81
    SUB ESP,0x4                         ; 00416b82
    MOV EBX,dword ptr [ESP + 0x18]      ; 00416b85
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00416b89
    PUSH EDX                            ; 00416b8d
    PUSH EBX                            ; 00416b8e
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00416b8f
    PUSH ECX                            ; 00416b93
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00416b94
    PUSH ESI                            ; 00416b98
    CALL core_actor.cpp_CDemonActor_fillAttackDamageInfo_FUN_0040aca0 ; 00416b99
        ;   XREF to: 0040aca0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_fillAttackDamageInfo_FUN_0040aca0(CDemonActor * this_ptr, int attack_flags, SDamageInfo * out_damage_info, CDemonActor * victim)
    ADD ESP,0x10                        ; 00416b9e
    PUSH 0x41700000                     ; 00416ba1
    PUSH 0x40a00000                     ; 00416ba6
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 00416bab
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x8],EAX       ; 00416bb0
    MOV dword ptr [EBX + 0x2c],0x3ca3d70a ; 00416bb4
    MOV EAX,dword ptr [ESP + 0x8]       ; 00416bbb
    MOV dword ptr [EBX + 0x4],EAX       ; 00416bbf
    ADD ESP,0x8                         ; 00416bc2
    ADD ESP,0x4                         ; 00416bc5
    POP ESI                             ; 00416bc8
    POP EBX                             ; 00416bc9
    RET                                 ; 00416bca

