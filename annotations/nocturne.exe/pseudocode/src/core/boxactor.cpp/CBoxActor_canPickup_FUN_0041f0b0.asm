; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_boxactor_cpp_CBoxActor_canPickup_FUN_0041f0b0(int param_1,CDemonActor *param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_CHero_00579965
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040d7e0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0041f0b0
        ;   Label: core_boxactor.cpp_CBoxActor_canPickup_FUN_0041f0b0
    CMP dword ptr [EAX + 0x30c],0x3     ; 0041f0b4
    JNZ 0x0041f0c8                      ; 0041f0bb
        ;   XREF to: 0041f0c8 (CONDITIONAL_JUMP)  ; LAB_0041f0c8
    MOV EAX,dword ptr [ESP + 0x4]       ; 0041f0bd
        ;   Label: LAB_0041f0bd
    MOV EAX,dword ptr [EAX + 0x30c]     ; 0041f0c1
    RET                                 ; 0041f0c7
    PUSH 0x579965                       ; 0041f0c8 | = "CHero"
        ;   Label: LAB_0041f0c8
    MOV ECX,dword ptr [ESP + 0xc]       ; 0041f0cd
    PUSH ECX                            ; 0041f0d1
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 0041f0d2
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040d7e0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 0041f0d7
    TEST EAX,EAX                        ; 0041f0da
    JNZ 0x0041f0bd                      ; 0041f0dc
        ;   XREF to: 0041f0bd (CONDITIONAL_JUMP)  ; LAB_0041f0bd
    RET                                 ; 0041f0de

