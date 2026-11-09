; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_barrier_cpp_CBarrier_getCollisionType_FUN_0040ec30(CBarrier *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CBarrier *       Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; Referenced Globals:
;   undefined4 DAT_007df974
;
; Called Functions:
;   core_actor.cpp_FUN_0040c790
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040ec30
        ;   Label: core_barrier.cpp_CBarrier_getCollisionType_FUN_0040ec30
    MOV EAX,dword ptr [ESP + 0x8]       ; 0040ec31
    MOV EDX,dword ptr [ESP + 0xc]       ; 0040ec35
    CMP dword ptr [EDX],0x0             ; 0040ec39
    JNZ 0x0040ec4e                      ; 0040ec3c
        ;   XREF to: 0040ec4e (CONDITIONAL_JUMP)  ; LAB_0040ec4e
    CMP byte ptr [EAX + 0x168],0x0      ; 0040ec3e
    JNZ 0x0040ec52                      ; 0040ec45
        ;   XREF to: 0040ec52 (CONDITIONAL_JUMP)  ; LAB_0040ec52
    MOV EAX,0x1                         ; 0040ec47
        ;   Label: LAB_0040ec47
    POP EBX                             ; 0040ec4c
    RET                                 ; 0040ec4d
    XOR EAX,EAX                         ; 0040ec4e
        ;   Label: LAB_0040ec4e
    POP EBX                             ; 0040ec50
    RET                                 ; 0040ec51
    ADD EAX,0x168                       ; 0040ec52
        ;   Label: LAB_0040ec52
    PUSH EAX                            ; 0040ec57
    MOV EBX,dword ptr [0x007df974]      ; 0040ec58 | DAT_007df974
    PUSH EBX                            ; 0040ec5e
    CALL core_actor.cpp_FUN_0040c790    ; 0040ec5f
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040c790(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 0040ec64
    TEST EAX,EAX                        ; 0040ec67
    JNZ 0x0040ec47                      ; 0040ec69
        ;   XREF to: 0040ec47 (CONDITIONAL_JUMP)  ; LAB_0040ec47
    POP EBX                             ; 0040ec6b
    RET                                 ; 0040ec6c

