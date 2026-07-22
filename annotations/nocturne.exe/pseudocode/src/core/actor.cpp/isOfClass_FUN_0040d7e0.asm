; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_isOfClass_FUN_0040d7e0(int param_1,undefined4 param_2)
;
;
; XREF[53]:
;   FUN_0040ef70 at 0040ef7a
;   FUN_0040f480 at 0040f49a
;   FUN_00414e10 at 00414e1a
;   FUN_004196b0 at 00419ac0
;   FUN_00481d30 at 00481d3a
;   FUN_00497900 at 00497b74
;   FUN_004980d0 at 0049824d
;   FUN_004b43d0 at 004b43da
;   FUN_004b5b00 at 004b5b22
;   FUN_004b8700 at 004b8868
;   ... and 43 more
;
; Called Functions:
;   core_actor.cpp_matchesClassName_FUN_0040d840
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0040d7e0
        ;   Label: core_actor.cpp_isOfClass_FUN_0040d7e0
    TEST EAX,EAX                        ; 0040d7e4
    JNZ 0x0040d7e9                      ; 0040d7e6
        ;   XREF to: 0040d7e9 (CONDITIONAL_JUMP)  ; LAB_0040d7e9
    RET                                 ; 0040d7e8
    MOV EDX,dword ptr [ESP + 0x8]       ; 0040d7e9
        ;   Label: LAB_0040d7e9
    PUSH EDX                            ; 0040d7ed
    PUSH EAX                            ; 0040d7ee
    MOV EDX,dword ptr [EAX + 0x14c]     ; 0040d7ef
    CALL dword ptr [EDX + 0xc4]         ; 0040d7f5
    ADD ESP,0x4                         ; 0040d7fb
    PUSH EAX                            ; 0040d7fe
    CALL core_actor.cpp_matchesClassName_FUN_0040d840 ; 0040d7ff
        ;   XREF to: 0040d840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_matchesClassName_FUN_0040d840()
    ADD ESP,0x8                         ; 0040d804
    RET                                 ; 0040d807

