; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CBodyPart * __cdecl core_skeleton_cpp_CDeformableModelInstance_spawnDismemberedBodyPart_FUN_005a0fe0 (CDeformableModelInstance *this_ptr,int part_index,COrientation *orientation, CVector3f *velocity,CDemonActor *source_actor,int unknown)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   part_index
; COrientation *   Stack[0xc]:4   orientation
; CVector3f *      Stack[0x10]:4   velocity
; CDemonActor *    Stack[0x14]:4   source_actor
; int              Stack[0x18]:4   unknown
;
; Called Functions:
;   core_bodypart.cpp_CBodyPart_FUN_0041a050
;   core_bodypart.cpp_createBodyPart_FUN_00418e10
;   core_skeleton.cpp_CDeformableModelInstance_dismemberPart_FUN_005a1040
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a0fe0
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_spawnDismemberedBodyPart_FUN_005a0fe0
    PUSH ESI                            ; 005a0fe1
    PUSH EDI                            ; 005a0fe2
    PUSH EBP                            ; 005a0fe3
    PUSH 0x0                            ; 005a0fe4
    PUSH 0x0                            ; 005a0fe6
    PUSH 0x0                            ; 005a0fe8
    MOV EDX,dword ptr [ESP + 0x34]      ; 005a0fea
    PUSH EDX                            ; 005a0fee
    MOV ECX,dword ptr [ESP + 0x34]      ; 005a0fef
    PUSH ECX                            ; 005a0ff3
    MOV EBX,dword ptr [ESP + 0x34]      ; 005a0ff4
    PUSH EBX                            ; 005a0ff8
    MOV ESI,dword ptr [ESP + 0x34]      ; 005a0ff9
    PUSH ESI                            ; 005a0ffd
    CALL core_bodypart.cpp_createBodyPart_FUN_00418e10 ; 005a0ffe
        ;   XREF to: 00418e10 (UNCONDITIONAL_CALL)  ; CBodyPart * core_bodypart.cpp_createBodyPart_FUN_00418e10()
    ADD ESP,0x1c                        ; 005a1003
    MOV EDI,dword ptr [ESP + 0x18]      ; 005a1006
    PUSH EDI                            ; 005a100a
    PUSH EAX                            ; 005a100b
    MOV EBP,dword ptr [ESP + 0x1c]      ; 005a100c
    PUSH EBP                            ; 005a1010
    MOV EBX,EAX                         ; 005a1011
    MOV ESI,EAX                         ; 005a1013
    CALL core_skeleton.cpp_CDeformableModelInstance_dismemberPart_FUN_005a1040 ; 005a1015
        ;   XREF to: 005a1040 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_dismemberPart_FUN_005a1040(CDeformableModelInstance * this_ptr, CBodyPart * body_part, int part_index)
    ADD ESP,0xc                         ; 005a101a
    TEST EBX,EBX                        ; 005a101d
    JNZ 0x005a1028                      ; 005a101f
        ;   XREF to: 005a1028 (CONDITIONAL_JUMP)  ; LAB_005a1028
    MOV EAX,ESI                         ; 005a1021
    POP EBP                             ; 005a1023
    POP EDI                             ; 005a1024
    POP ESI                             ; 005a1025
    POP EBX                             ; 005a1026
    RET                                 ; 005a1027
    PUSH EBX                            ; 005a1028
        ;   Label: LAB_005a1028
    CALL core_bodypart.cpp_CBodyPart_FUN_0041a050 ; 005a1029
        ;   XREF to: 0041a050 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_FUN_0041a050(CBodyPart * this_ptr)
    ADD ESP,0x4                         ; 005a102e
    MOV EAX,ESI                         ; 005a1031
    POP EBP                             ; 005a1033
    POP EDI                             ; 005a1034
    POP ESI                             ; 005a1035
    POP EBX                             ; 005a1036
    RET                                 ; 005a1037

