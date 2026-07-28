; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_setcolid_cpp_CDemonSet_isActorIgnored_FUN_005103f0(CDemonSet *this_ptr,CDemonActor *actor)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
;
; XREF[3]:
;   core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_0050ec80 at 0050eead
;   core_setcolid.cpp_CDemonSet_raycastAgainstActors_FUN_0050ffe0 at 00510195
;   core_setcolid.cpp_CDemonSet_testCylinderCollision_FUN_00510a40 at 00510c1a
;
; Referenced Globals:
;   undefined4 g_CCharacterActorType_00765a60.name_hash
;
; Called Functions:
;   core_actor.cpp_isOfClassHash_FUN_0040d860
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005103f0
        ;   Label: core_setcolid.cpp_CDemonSet_isActorIgnored_FUN_005103f0
    PUSH ESI                            ; 005103f1
    PUSH EDI                            ; 005103f2
    PUSH EBP                            ; 005103f3
    MOV EBX,dword ptr [ESP + 0x14]      ; 005103f4
    MOV ESI,dword ptr [ESP + 0x18]      ; 005103f8
    CMP dword ptr [EBX + 0x15f2b0],0x0  ; 005103fc
    JNZ 0x00510430                      ; 00510403
        ;   XREF to: 00510430 (CONDITIONAL_JUMP)  ; LAB_00510430
    MOV EDI,dword ptr [EBX + 0x15f2ac]  ; 00510405
        ;   Label: LAB_00510405
    XOR EAX,EAX                         ; 0051040b
    TEST EDI,EDI                        ; 0051040d
    JLE 0x00510429                      ; 0051040f
        ;   XREF to: 00510429 (CONDITIONAL_JUMP)  ; LAB_00510429
    MOV EDX,EBX                         ; 00510411
    CMP ESI,dword ptr [EDX + 0x15f2b4]  ; 00510413
        ;   Label: LAB_00510413
    JZ 0x00510444                       ; 00510419
        ;   XREF to: 00510444 (CONDITIONAL_JUMP)  ; LAB_00510444
    INC EAX                             ; 0051041b
    MOV EBP,dword ptr [EBX + 0x15f2ac]  ; 0051041c
    ADD EDX,0x4                         ; 00510422
    CMP EAX,EBP                         ; 00510425
    JL 0x00510413                       ; 00510427
        ;   XREF to: 00510413 (CONDITIONAL_JUMP)  ; LAB_00510413
    XOR EAX,EAX                         ; 00510429
        ;   Label: LAB_00510429
    POP EBP                             ; 0051042b
    POP EDI                             ; 0051042c
    POP ESI                             ; 0051042d
    POP EBX                             ; 0051042e
    RET                                 ; 0051042f
    MOV ECX,dword ptr [0x00765a98]      ; 00510430 | g_CCharacterActorType_00765a60.name_hash
        ;   Label: LAB_00510430
    PUSH ECX                            ; 00510436
    PUSH ESI                            ; 00510437
    CALL core_actor.cpp_isOfClassHash_FUN_0040d860 ; 00510438
        ;   XREF to: 0040d860 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClassHash_FUN_0040d860(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0051043d
    TEST EAX,EAX                        ; 00510440
    JZ 0x00510405                       ; 00510442
        ;   XREF to: 00510405 (CONDITIONAL_JUMP)  ; LAB_00510405
    MOV EAX,0x1                         ; 00510444
        ;   Label: LAB_00510444
    POP EBP                             ; 00510449
    POP EDI                             ; 0051044a
    POP ESI                             ; 0051044b
    POP EBX                             ; 0051044c
    RET                                 ; 0051044d

