; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_isOfClassHash_FUN_0040d860(int param_1,undefined4 param_2)
;
;
; XREF[4]:
;   core_actor.cpp_castToClassHash_FUN_0040d890 at 0040d8a3
;   core_event.cpp_resolveActorByName_FUN_0047a390 at 0047a425
;   core_script.cpp_getActor_FUN_004fe180 at 004fe206
;   core_setcolid.cpp_CDemonSet_isActorIgnored_FUN_005103f0 at 00510438
;
; Called Functions:
;   core_actor.cpp_checkNameHash_FUN_0040d810
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0040d860
        ;   Label: core_actor.cpp_isOfClassHash_FUN_0040d860
    TEST EAX,EAX                        ; 0040d864
    JNZ 0x0040d869                      ; 0040d866
        ;   XREF to: 0040d869 (CONDITIONAL_JUMP)  ; LAB_0040d869
    RET                                 ; 0040d868
    MOV EDX,dword ptr [ESP + 0x8]       ; 0040d869
        ;   Label: LAB_0040d869
    PUSH EDX                            ; 0040d86d
    PUSH EAX                            ; 0040d86e
    MOV EDX,dword ptr [EAX + 0x14c]     ; 0040d86f
    CALL dword ptr [EDX + 0xc4]         ; 0040d875
    ADD ESP,0x4                         ; 0040d87b
    PUSH EAX                            ; 0040d87e
    CALL core_actor.cpp_checkNameHash_FUN_0040d810 ; 0040d87f
        ;   XREF to: 0040d810 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_checkNameHash_FUN_0040d810()
    ADD ESP,0x8                         ; 0040d884
    RET                                 ; 0040d887

