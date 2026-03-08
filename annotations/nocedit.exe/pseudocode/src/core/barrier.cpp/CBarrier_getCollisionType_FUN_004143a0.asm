; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_barrier_cpp_CBarrier_getCollisionType_FUN_004143a0(CBarrier *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CBarrier *       Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; Referenced Globals:
;   CDemonActor* g_CurrentProcessingActor
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040c6d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004143a0
        ;   Label: core_barrier.cpp_CBarrier_getCollisionType_FUN_004143a0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004143a1
    MOV EDX,dword ptr [ESP + 0xc]       ; 004143a5
    CMP dword ptr [EDX],0x0             ; 004143a9
    JNZ 0x004143be                      ; 004143ac
        ;   XREF to: 004143be (CONDITIONAL_JUMP)  ; LAB_004143be
    CMP byte ptr [EAX + 0x168],0x0      ; 004143ae
    JNZ 0x004143c2                      ; 004143b5
        ;   XREF to: 004143c2 (CONDITIONAL_JUMP)  ; LAB_004143c2
    MOV EAX,0x1                         ; 004143b7
        ;   Label: LAB_004143b7
    POP EBX                             ; 004143bc
    RET                                 ; 004143bd
    XOR EAX,EAX                         ; 004143be
        ;   Label: LAB_004143be
    POP EBX                             ; 004143c0
    RET                                 ; 004143c1
    ADD EAX,0x168                       ; 004143c2
        ;   Label: LAB_004143c2
    PUSH EAX                            ; 004143c7
    MOV EBX,dword ptr [0x00821ff4]      ; 004143c8 | g_CurrentProcessingActor
    PUSH EBX                            ; 004143ce
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 004143cf
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004143d4
    TEST EAX,EAX                        ; 004143d7
    JNZ 0x004143b7                      ; 004143d9
        ;   XREF to: 004143b7 (CONDITIONAL_JUMP)  ; LAB_004143b7
    POP EBX                             ; 004143db
    RET                                 ; 004143dc

