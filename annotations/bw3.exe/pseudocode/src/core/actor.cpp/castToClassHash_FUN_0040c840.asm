; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_actor_cpp_castToClassHash_FUN_0040c840(int param_1,undefined4 param_2)
;
;
; XREF[120]:
;   core_actor.cpp_FUN_00408a40 at 00408ab2
;   core_actor.cpp_FUN_00409f60 at 0040a2dc
;   core_baal.cpp_FUN_005968a0 at 005971b5
;   core_blundrbs.cpp_FUN_00410490 at 004110ee
;   core_bugs.cpp_FUN_00422570 at 00422612
;   core_bugs.cpp_FUN_00423cd0 at 00423cfb
;   core_burncrss.cpp_FUN_00424550 at 00424814
;   core_burncrss.cpp_FUN_00425360 at 004253b6
;   core_charactr.cpp_FUN_0042ff70 at 0042ffb4
;   core_charactr.cpp_FUN_004300e0 at 0043023a
;   ... and 110 more
;
; Called Functions:
;   core_actor.cpp_isOfClassHash_FUN_0040c810
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040c840
        ;   Label: core_actor.cpp_castToClassHash_FUN_0040c840
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040c841
    TEST EBX,EBX                        ; 0040c845
    JNZ 0x0040c84d                      ; 0040c847
        ;   XREF to: 0040c84d (CONDITIONAL_JUMP)  ; LAB_0040c84d
    XOR EAX,EAX                         ; 0040c849
    POP EBX                             ; 0040c84b
        ;   Label: LAB_0040c84b
    RET                                 ; 0040c84c
    MOV EDX,dword ptr [ESP + 0xc]       ; 0040c84d
        ;   Label: LAB_0040c84d
    PUSH EDX                            ; 0040c851
    PUSH EBX                            ; 0040c852
    CALL core_actor.cpp_isOfClassHash_FUN_0040c810 ; 0040c853
        ;   XREF to: 0040c810 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_isOfClassHash_FUN_0040c810()
    ADD ESP,0x8                         ; 0040c858
    TEST EAX,EAX                        ; 0040c85b
    JZ 0x0040c84b                       ; 0040c85d
        ;   XREF to: 0040c84b (CONDITIONAL_JUMP)  ; LAB_0040c84b
    MOV EAX,EBX                         ; 0040c85f
    POP EBX                             ; 0040c861
    RET                                 ; 0040c862

