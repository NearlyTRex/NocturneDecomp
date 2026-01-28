; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_vessel_cpp_CCryptVessel_FUN_005e9100(CCryptVessel *this_ptr)
;
; Parameters:
; CCryptVessel *   Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_CHero_00657031
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040c6d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e9100
        ;   Label: core_vessel.cpp_CCryptVessel_FUN_005e9100
    MOV EAX,dword ptr [ESP + 0x8]       ; 005e9101
    CMP dword ptr [EAX + 0x7f0],0x0     ; 005e9105
    JNZ 0x005e9117                      ; 005e910c
        ;   XREF to: 005e9117 (CONDITIONAL_JUMP)  ; LAB_005e9117
    CMP dword ptr [EAX + 0x3b8],0x0     ; 005e910e
    JZ 0x005e911b                       ; 005e9115
        ;   XREF to: 005e911b (CONDITIONAL_JUMP)  ; LAB_005e911b
    XOR EAX,EAX                         ; 005e9117
        ;   Label: LAB_005e9117
    POP EBX                             ; 005e9119
        ;   Label: LAB_005e9119
    RET                                 ; 005e911a
    PUSH 0x657031                       ; 005e911b | = "CHero"
        ;   Label: LAB_005e911b
    MOV EBX,dword ptr [ESP + 0x10]      ; 005e9120
    PUSH EBX                            ; 005e9124
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 005e9125
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 005e912a
    TEST EAX,EAX                        ; 005e912d
    JZ 0x005e9119                       ; 005e912f
        ;   XREF to: 005e9119 (CONDITIONAL_JUMP)  ; LAB_005e9119
    MOV EAX,0x4                         ; 005e9131
    POP EBX                             ; 005e9136
    RET                                 ; 005e9137

