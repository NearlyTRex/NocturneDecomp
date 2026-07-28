; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_ammobox_cpp_FUN_0040f480(int param_1,CDemonActor *param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_CHero_005783e2
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040d7e0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0040f480
        ;   Label: core_ammobox.cpp_FUN_0040f480
    CMP dword ptr [EAX + 0x30c],0x0     ; 0040f484
    JNZ 0x0040f490                      ; 0040f48b
        ;   XREF to: 0040f490 (CONDITIONAL_JUMP)  ; LAB_0040f490
    XOR EAX,EAX                         ; 0040f48d
        ;   Label: LAB_0040f48d
    RET                                 ; 0040f48f
    PUSH 0x5783e2                       ; 0040f490 | = "CHero"
        ;   Label: LAB_0040f490
    MOV ECX,dword ptr [ESP + 0xc]       ; 0040f495
    PUSH ECX                            ; 0040f499
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 0040f49a
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040d7e0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 0040f49f
    TEST EAX,EAX                        ; 0040f4a2
    JZ 0x0040f48d                       ; 0040f4a4
        ;   XREF to: 0040f48d (CONDITIONAL_JUMP)  ; LAB_0040f48d
    MOV EAX,0x1                         ; 0040f4a6
    RET                                 ; 0040f4ab

