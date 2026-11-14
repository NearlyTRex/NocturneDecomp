; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_union_cpp_CUnion_processDamage_FUN_005a59f0(CUnion *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CUnion *         Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; Referenced Globals:
;   undefined4 DAT_01cedef4
;   undefined4 g_CUnionClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_basicene.cpp_CBasicEnemy_processDamage_FUN_0059f800
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a59f0
        ;   Label: core_union.cpp_CUnion_processDamage_FUN_005a59f0
    MOV EBX,dword ptr [ESP + 0xc]       ; 005a59f1
    MOV EDX,dword ptr [0x0266863c]      ; 005a59f5 | g_CUnionClassInfo.name_hash
    PUSH EDX                            ; 005a59fb
    MOV ECX,dword ptr [EBX + 0x38]      ; 005a59fc
    PUSH ECX                            ; 005a59ff
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 005a5a00
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 005a5a05
    TEST EAX,EAX                        ; 005a5a08
    JNZ 0x005a5a1d                      ; 005a5a0a
        ;   XREF to: 005a5a1d (CONDITIONAL_JUMP)  ; LAB_005a5a1d
    MOV EAX,[0x01cedef4]                ; 005a5a0c | DAT_01cedef4
    MOV EDX,dword ptr [EBX + 0x38]      ; 005a5a11
    CMP EDX,dword ptr [EAX*0x4 + 0x1cedee4] ; 005a5a14
    JNZ 0x005a5a1f                      ; 005a5a1b
        ;   XREF to: 005a5a1f (CONDITIONAL_JUMP)  ; LAB_005a5a1f
    POP EBX                             ; 005a5a1d
        ;   Label: LAB_005a5a1d
    RET                                 ; 005a5a1e
    PUSH EDI                            ; 005a5a1f
        ;   Label: LAB_005a5a1f
    PUSH EBX                            ; 005a5a20
    MOV EDI,dword ptr [ESP + 0x10]      ; 005a5a21
    PUSH EDI                            ; 005a5a25
    CALL core_basicene.cpp_CBasicEnemy_processDamage_FUN_0059f800 ; 005a5a26
        ;   XREF to: 0059f800 (UNCONDITIONAL_CALL)  ; void core_basicene.cpp_CBasicEnemy_processDamage_FUN_0059f800(CBasicEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 005a5a2b
    POP EDI                             ; 005a5a2e
    POP EBX                             ; 005a5a2f
    RET                                 ; 005a5a30

