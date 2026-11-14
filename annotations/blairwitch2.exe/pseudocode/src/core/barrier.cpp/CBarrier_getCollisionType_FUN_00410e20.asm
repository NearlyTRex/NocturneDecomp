; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_barrier_cpp_CBarrier_getCollisionType_FUN_00410e20(CBarrier *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CBarrier *       Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; Referenced Globals:
;   undefined4 DAT_007bbff4
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040c840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00410e20
        ;   Label: core_barrier.cpp_CBarrier_getCollisionType_FUN_00410e20
    MOV EAX,dword ptr [ESP + 0x8]       ; 00410e21
    MOV EDX,dword ptr [ESP + 0xc]       ; 00410e25
    CMP dword ptr [EDX],0x0             ; 00410e29
    JNZ 0x00410e3e                      ; 00410e2c
        ;   XREF to: 00410e3e (CONDITIONAL_JUMP)  ; LAB_00410e3e
    CMP byte ptr [EAX + 0x2c4],0x0      ; 00410e2e
    JNZ 0x00410e42                      ; 00410e35
        ;   XREF to: 00410e42 (CONDITIONAL_JUMP)  ; LAB_00410e42
    MOV EAX,0x1                         ; 00410e37
        ;   Label: LAB_00410e37
    POP EBX                             ; 00410e3c
    RET                                 ; 00410e3d
    XOR EAX,EAX                         ; 00410e3e
        ;   Label: LAB_00410e3e
    POP EBX                             ; 00410e40
    RET                                 ; 00410e41
    ADD EAX,0x2c4                       ; 00410e42
        ;   Label: LAB_00410e42
    PUSH EAX                            ; 00410e47
    MOV EBX,dword ptr [0x007bbff4]      ; 00410e48 | DAT_007bbff4
    PUSH EBX                            ; 00410e4e
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 00410e4f
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 00410e54
    TEST EAX,EAX                        ; 00410e57
    JNZ 0x00410e37                      ; 00410e59
        ;   XREF to: 00410e37 (CONDITIONAL_JUMP)  ; LAB_00410e37
    POP EBX                             ; 00410e5b
    RET                                 ; 00410e5c

