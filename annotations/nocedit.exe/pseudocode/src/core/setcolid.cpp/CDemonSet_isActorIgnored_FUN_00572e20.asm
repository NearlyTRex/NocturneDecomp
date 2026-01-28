; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_setcolid_cpp_CDemonSet_isActorIgnored_FUN_00572e20(CDemonSet *this_ptr,CDemonActor *actor)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
;
; XREF[3]:
;   core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0 at 005718dd
;   core_setcolid.cpp_CDemonSet_raycastAgainstActors_FUN_00572a10 at 00572bc5
;   core_setcolid.cpp_CDemonSet_testCapsuleCollision_FUN_00573470 at 0057364a
;
; Referenced Globals:
;   undefined4 g_CCharacterClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_isOfClassHash_FUN_0040c760
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00572e20
        ;   Label: core_setcolid.cpp_CDemonSet_isActorIgnored_FUN_00572e20
    PUSH ESI                            ; 00572e21
    PUSH EDI                            ; 00572e22
    PUSH EBP                            ; 00572e23
    MOV EBX,dword ptr [ESP + 0x14]      ; 00572e24
    MOV ESI,dword ptr [ESP + 0x18]      ; 00572e28
    CMP dword ptr [EBX + 0x15f698],0x0  ; 00572e2c
    JNZ 0x00572e60                      ; 00572e33
        ;   XREF to: 00572e60 (CONDITIONAL_JUMP)  ; LAB_00572e60
    MOV EDI,dword ptr [EBX + 0x15f694]  ; 00572e35
        ;   Label: LAB_00572e35
    XOR EAX,EAX                         ; 00572e3b
    TEST EDI,EDI                        ; 00572e3d
    JLE 0x00572e59                      ; 00572e3f
        ;   XREF to: 00572e59 (CONDITIONAL_JUMP)  ; LAB_00572e59
    MOV EDX,EBX                         ; 00572e41
    CMP ESI,dword ptr [EDX + 0x15f69c]  ; 00572e43
        ;   Label: LAB_00572e43
    JZ 0x00572e74                       ; 00572e49
        ;   XREF to: 00572e74 (CONDITIONAL_JUMP)  ; LAB_00572e74
    INC EAX                             ; 00572e4b
    MOV EBP,dword ptr [EBX + 0x15f694]  ; 00572e4c
    ADD EDX,0x4                         ; 00572e52
    CMP EAX,EBP                         ; 00572e55
    JL 0x00572e43                       ; 00572e57
        ;   XREF to: 00572e43 (CONDITIONAL_JUMP)  ; LAB_00572e43
    XOR EAX,EAX                         ; 00572e59
        ;   Label: LAB_00572e59
    POP EBP                             ; 00572e5b
    POP EDI                             ; 00572e5c
    POP ESI                             ; 00572e5d
    POP EBX                             ; 00572e5e
    RET                                 ; 00572e5f
    MOV ECX,dword ptr [0x00823c4c]      ; 00572e60 | g_CCharacterClassInfo.name_hash
        ;   Label: LAB_00572e60
    PUSH ECX                            ; 00572e66
    PUSH ESI                            ; 00572e67
    CALL core_actor.cpp_isOfClassHash_FUN_0040c760 ; 00572e68
        ;   XREF to: 0040c760 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClassHash_FUN_0040c760(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 00572e6d
    TEST EAX,EAX                        ; 00572e70
    JZ 0x00572e35                       ; 00572e72
        ;   XREF to: 00572e35 (CONDITIONAL_JUMP)  ; LAB_00572e35
    MOV EAX,0x1                         ; 00572e74
        ;   Label: LAB_00572e74
    POP EBP                             ; 00572e79
    POP EDI                             ; 00572e7a
    POP ESI                             ; 00572e7b
    POP EBX                             ; 00572e7c
    RET                                 ; 00572e7d

