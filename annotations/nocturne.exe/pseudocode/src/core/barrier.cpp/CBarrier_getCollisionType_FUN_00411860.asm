; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_barrier_cpp_CBarrier_getCollisionType_FUN_00411860(CBarrier *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CBarrier *       Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; Referenced Globals:
;   undefined4 DAT_00763e44
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040d7e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00411860
        ;   Label: core_barrier.cpp_CBarrier_getCollisionType_FUN_00411860
    MOV EAX,dword ptr [ESP + 0x8]       ; 00411861
    MOV EDX,dword ptr [ESP + 0xc]       ; 00411865
    CMP dword ptr [EDX],0x0             ; 00411869
    JNZ 0x0041187e                      ; 0041186c
        ;   XREF to: 0041187e (CONDITIONAL_JUMP)  ; LAB_0041187e
    CMP byte ptr [EAX + 0x160],0x0      ; 0041186e
    JNZ 0x00411882                      ; 00411875
        ;   XREF to: 00411882 (CONDITIONAL_JUMP)  ; LAB_00411882
    MOV EAX,0x1                         ; 00411877
        ;   Label: LAB_00411877
    POP EBX                             ; 0041187c
    RET                                 ; 0041187d
    XOR EAX,EAX                         ; 0041187e
        ;   Label: LAB_0041187e
    POP EBX                             ; 00411880
    RET                                 ; 00411881
    ADD EAX,0x160                       ; 00411882
        ;   Label: LAB_00411882
    PUSH EAX                            ; 00411887
    MOV EBX,dword ptr [0x00763e44]      ; 00411888 | DAT_00763e44
    PUSH EBX                            ; 0041188e
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 0041188f
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040d7e0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 00411894
    TEST EAX,EAX                        ; 00411897
    JNZ 0x00411877                      ; 00411899
        ;   XREF to: 00411877 (CONDITIONAL_JUMP)  ; LAB_00411877
    POP EBX                             ; 0041189b
    RET                                 ; 0041189c

