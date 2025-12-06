; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_barrier.cpp_CBarrier_FUN_004143a0(CBarrier * this_ptr)
;
; Parameters:
; CBarrier *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_00821ff4
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040c6d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004143a0
        ;   Label: core_barrier.cpp_CBarrier_FUN_004143a0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004143a1
    MOV EDX,dword ptr [ESP + 0xc]       ; 004143a5
    CMP dword ptr [EDX],0x0             ; 004143a9
    JNZ 0x004143be                      ; 004143ac | LAB_004143be
        ;   XREF to: 004143be (CONDITIONAL_JUMP)
    CMP byte ptr [EAX + 0x168],0x0      ; 004143ae
    JNZ 0x004143c2                      ; 004143b5 | LAB_004143c2
        ;   XREF to: 004143c2 (CONDITIONAL_JUMP)
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
    MOV EBX,dword ptr [0x00821ff4]      ; 004143c8 | undefined4 DAT_00821ff4
    PUSH EBX                            ; 004143ce
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 004143cf | int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004143d4
    TEST EAX,EAX                        ; 004143d7
    JNZ 0x004143b7                      ; 004143d9 | LAB_004143b7
        ;   XREF to: 004143b7 (CONDITIONAL_JUMP)
    POP EBX                             ; 004143db
    RET                                 ; 004143dc

