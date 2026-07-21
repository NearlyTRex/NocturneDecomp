; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_actor_cpp_checkNameHash_FUN_0040d810(int param_1,int param_2)
;
;
; XREF[2]:
;   core_actor.cpp_isOfClassHash_FUN_0040d860 at 0040d87f
;   core_actor.cpp_matchClassTerm_FUN_0040d600 at 0040d6f9
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 0040d810
        ;   Label: core_actor.cpp_checkNameHash_FUN_0040d810
    MOV EDX,dword ptr [ESP + 0x8]       ; 0040d814
    MOV EAX,ECX                         ; 0040d818
    TEST ECX,ECX                        ; 0040d81a
    JZ 0x0040d830                       ; 0040d81c
        ;   XREF to: 0040d830 (CONDITIONAL_JUMP)
    CMP EDX,dword ptr [EAX + 0x38]      ; 0040d81e
        ;   Label: LAB_0040d81e
    JZ 0x0040a090                       ; 0040d821
        ;   XREF to: 0040a090 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EAX + 0x28]      ; 0040d827
    TEST EAX,EAX                        ; 0040d82a
    JNZ 0x0040d81e                      ; 0040d82c
        ;   XREF to: 0040d81e (CONDITIONAL_JUMP)  ; LAB_0040d81e
    MOV EAX,EAX                         ; 0040d82e

