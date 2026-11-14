; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_vessel_cpp_CCryptVessel_canPickup_FUN_00576610(CCryptVessel *this_ptr,CDemonActor *picker)
;
; Parameters:
; CCryptVessel *   Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   picker
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040c790
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00576610
        ;   Label: core_vessel.cpp_CCryptVessel_canPickup_FUN_00576610
    MOV EAX,dword ptr [ESP + 0x8]       ; 00576611
    CMP dword ptr [EAX + 0x7f0],0x0     ; 00576615
    JNZ 0x00576627                      ; 0057661c
        ;   XREF to: 00576627 (CONDITIONAL_JUMP)  ; LAB_00576627
    CMP dword ptr [EAX + 0x3b8],0x0     ; 0057661e
    JZ 0x0057662b                       ; 00576625
        ;   XREF to: 0057662b (CONDITIONAL_JUMP)  ; LAB_0057662b
    XOR EAX,EAX                         ; 00576627
        ;   Label: LAB_00576627
    POP EBX                             ; 00576629
        ;   Label: LAB_00576629
    RET                                 ; 0057662a
    PUSH 0x5d709f                       ; 0057662b
        ;   Label: LAB_0057662b
    MOV EBX,dword ptr [ESP + 0x10]      ; 00576630
    PUSH EBX                            ; 00576634
    CALL core_actor.cpp_isOfClass_FUN_0040c790 ; 00576635
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c790(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 0057663a
    TEST EAX,EAX                        ; 0057663d
    JZ 0x00576629                       ; 0057663f
        ;   XREF to: 00576629 (CONDITIONAL_JUMP)  ; LAB_00576629
    MOV EAX,0x4                         ; 00576641
    POP EBX                             ; 00576646
    RET                                 ; 00576647

