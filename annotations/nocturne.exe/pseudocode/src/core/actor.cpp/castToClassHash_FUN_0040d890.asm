; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_actor_cpp_castToClassHash_FUN_0040d890(int param_1,undefined4 param_2)
;
;
; XREF[116]:
;   FUN_0043d1c0 at 0043d4b7
;   FUN_00477890 at 00477c27
;   FUN_0048b6f0 at 0048b97d
;   FUN_0048df20 at 0048e038
;   FUN_00495a20 at 004960cd
;   FUN_00497810 at 00497826
;   FUN_00498de0 at 00498dfd
;   FUN_00499ca0 at 00499d08
;   FUN_004a4170 at 004a486e
;   FUN_004b27c0 at 004b2bd5
;   ... and 106 more
;
; Called Functions:
;   core_actor.cpp_isOfClassHash_FUN_0040d860
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040d890
        ;   Label: core_actor.cpp_castToClassHash_FUN_0040d890
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040d891
    TEST EBX,EBX                        ; 0040d895
    JNZ 0x0040d89d                      ; 0040d897
        ;   XREF to: 0040d89d (CONDITIONAL_JUMP)  ; LAB_0040d89d
    XOR EAX,EAX                         ; 0040d899
    POP EBX                             ; 0040d89b
        ;   Label: LAB_0040d89b
    RET                                 ; 0040d89c
    MOV EDX,dword ptr [ESP + 0xc]       ; 0040d89d
        ;   Label: LAB_0040d89d
    PUSH EDX                            ; 0040d8a1
    PUSH EBX                            ; 0040d8a2
    CALL core_actor.cpp_isOfClassHash_FUN_0040d860 ; 0040d8a3
        ;   XREF to: 0040d860 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_isOfClassHash_FUN_0040d860()
    ADD ESP,0x8                         ; 0040d8a8
    TEST EAX,EAX                        ; 0040d8ab
    JZ 0x0040d89b                       ; 0040d8ad
        ;   XREF to: 0040d89b (CONDITIONAL_JUMP)  ; LAB_0040d89b
    MOV EAX,EBX                         ; 0040d8af
    POP EBX                             ; 0040d8b1
    RET                                 ; 0040d8b2

