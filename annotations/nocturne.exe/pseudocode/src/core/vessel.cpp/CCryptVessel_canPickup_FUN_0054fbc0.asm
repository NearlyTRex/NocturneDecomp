; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_vessel_cpp_CCryptVessel_canPickup_FUN_0054fbc0(CCryptVessel *this_ptr,CDemonActor *picker)
;
; Parameters:
; CCryptVessel *   Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   picker
;
; Referenced Globals:
;   TerminatedCString s_CHero_00597473
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040d7e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054fbc0
        ;   Label: core_vessel.cpp_CCryptVessel_canPickup_FUN_0054fbc0
    MOV EAX,dword ptr [ESP + 0x8]       ; 0054fbc1
    CMP dword ptr [EAX + 0x7e0],0x0     ; 0054fbc5
    JNZ 0x0054fbd7                      ; 0054fbcc
        ;   XREF to: 0054fbd7 (CONDITIONAL_JUMP)  ; LAB_0054fbd7
    CMP dword ptr [EAX + 0x3b0],0x0     ; 0054fbce
    JZ 0x0054fbdb                       ; 0054fbd5
        ;   XREF to: 0054fbdb (CONDITIONAL_JUMP)  ; LAB_0054fbdb
    XOR EAX,EAX                         ; 0054fbd7
        ;   Label: LAB_0054fbd7
    POP EBX                             ; 0054fbd9
        ;   Label: LAB_0054fbd9
    RET                                 ; 0054fbda
    PUSH 0x597473                       ; 0054fbdb | = "CHero"
        ;   Label: LAB_0054fbdb
    MOV EBX,dword ptr [ESP + 0x10]      ; 0054fbe0
    PUSH EBX                            ; 0054fbe4
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 0054fbe5
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040d7e0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 0054fbea
    TEST EAX,EAX                        ; 0054fbed
    JZ 0x0054fbd9                       ; 0054fbef
        ;   XREF to: 0054fbd9 (CONDITIONAL_JUMP)  ; LAB_0054fbd9
    MOV EAX,0x4                         ; 0054fbf1
    POP EBX                             ; 0054fbf6
    RET                                 ; 0054fbf7

