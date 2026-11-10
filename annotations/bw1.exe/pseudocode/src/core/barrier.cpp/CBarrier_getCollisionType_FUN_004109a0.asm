; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_barrier_cpp_CBarrier_getCollisionType_FUN_004109a0(CBarrier *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CBarrier *       Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; Referenced Globals:
;   undefined4 DAT_007c2ff4
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040c550
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004109a0
        ;   Label: core_barrier.cpp_CBarrier_getCollisionType_FUN_004109a0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004109a1
    MOV EDX,dword ptr [ESP + 0xc]       ; 004109a5
    CMP dword ptr [EDX],0x0             ; 004109a9
    JNZ 0x004109be                      ; 004109ac
        ;   XREF to: 004109be (CONDITIONAL_JUMP)  ; LAB_004109be
    CMP byte ptr [EAX + 0x168],0x0      ; 004109ae
    JNZ 0x004109c2                      ; 004109b5
        ;   XREF to: 004109c2 (CONDITIONAL_JUMP)  ; LAB_004109c2
    MOV EAX,0x1                         ; 004109b7
        ;   Label: LAB_004109b7
    POP EBX                             ; 004109bc
    RET                                 ; 004109bd
    XOR EAX,EAX                         ; 004109be
        ;   Label: LAB_004109be
    POP EBX                             ; 004109c0
    RET                                 ; 004109c1
    ADD EAX,0x168                       ; 004109c2
        ;   Label: LAB_004109c2
    PUSH EAX                            ; 004109c7
    MOV EBX,dword ptr [0x007c2ff4]      ; 004109c8 | DAT_007c2ff4
    PUSH EBX                            ; 004109ce
    CALL core_actor.cpp_isOfClass_FUN_0040c550 ; 004109cf
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004109d4
    TEST EAX,EAX                        ; 004109d7
    JNZ 0x004109b7                      ; 004109d9
        ;   XREF to: 004109b7 (CONDITIONAL_JUMP)  ; LAB_004109b7
    POP EBX                             ; 004109db
    RET                                 ; 004109dc

