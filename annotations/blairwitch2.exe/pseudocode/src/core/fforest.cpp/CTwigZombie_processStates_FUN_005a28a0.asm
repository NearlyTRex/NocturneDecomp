; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fforest_cpp_CTwigZombie_processStates_FUN_005a28a0(CTwigZombie *this_ptr,float delta_time,int mode)
;
; Parameters:
; CTwigZombie *    Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; int              Stack[0xc]:4   mode
;
; XREF[1]:
;   core_fforest.cpp_CTwigZombie_ctor_FUN_005a26d0 at 005a278a
;
; Referenced Globals:
;   TerminatedCString s_Attacking_005effe8
;   TerminatedCString s_Attacking_005efff2
;
; Called Functions:
;   core_basicene.cpp_FUN_0059e8c0
;   core_fforest.cpp_FUN_005a2ac0
;   core_muzzle.cpp_FUN_0059d650
;   core_muzzle.cpp_FUN_0059daa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a28a0
        ;   Label: core_fforest.cpp_CTwigZombie_processStates_FUN_005a28a0
    PUSH ESI                            ; 005a28a1
    MOV ESI,dword ptr [ESP + 0xc]       ; 005a28a2
    MOV EBX,dword ptr [ESP + 0x14]      ; 005a28a6
    TEST EBX,EBX                        ; 005a28aa
    JNZ 0x005a28c0                      ; 005a28ac
        ;   XREF to: 005a28c0 (CONDITIONAL_JUMP)  ; LAB_005a28c0
    LEA EAX,[ESI + 0x10af8]             ; 005a28ae
        ;   Label: LAB_005a28ae
    TEST EBX,EBX                        ; 005a28b4
    JBE 0x005a28d0                      ; 005a28b6
        ;   XREF to: 005a28d0 (CONDITIONAL_JUMP)  ; LAB_005a28d0
    CMP EBX,0x1                         ; 005a28b8
    JZ 0x005a28e1                       ; 005a28bb
        ;   XREF to: 005a28e1 (CONDITIONAL_JUMP)  ; LAB_005a28e1
    POP ESI                             ; 005a28bd
        ;   Label: LAB_005a28bd
    POP EBX                             ; 005a28be
    RET                                 ; 005a28bf
    PUSH EBX                            ; 005a28c0
        ;   Label: LAB_005a28c0
    PUSH dword ptr [ESP + 0x14]         ; 005a28c1
    PUSH ESI                            ; 005a28c5
    CALL core_basicene.cpp_FUN_0059e8c0 ; 005a28c6
        ;   XREF to: 0059e8c0 (UNCONDITIONAL_CALL)  ; undefined core_basicene.cpp_FUN_0059e8c0()
    ADD ESP,0xc                         ; 005a28cb
    JMP 0x005a28ae                      ; 005a28ce
        ;   XREF to: 005a28ae (UNCONDITIONAL_JUMP)  ; LAB_005a28ae
    PUSH 0x5effe8                       ; 005a28d0 | = "Attacking"
        ;   Label: LAB_005a28d0
    PUSH EAX                            ; 005a28d5
    CALL core_muzzle.cpp_FUN_0059d650   ; 005a28d6
        ;   XREF to: 0059d650 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059d650()
    ADD ESP,0x8                         ; 005a28db
    POP ESI                             ; 005a28de
    POP EBX                             ; 005a28df
    RET                                 ; 005a28e0
    PUSH 0x5efff2                       ; 005a28e1 | = "Attacking"
        ;   Label: LAB_005a28e1
    PUSH EAX                            ; 005a28e6
    CALL core_muzzle.cpp_FUN_0059daa0   ; 005a28e7
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059daa0()
    ADD ESP,0x8                         ; 005a28ec
    TEST EAX,EAX                        ; 005a28ef
    JZ 0x005a28bd                       ; 005a28f1
        ;   XREF to: 005a28bd (CONDITIONAL_JUMP)  ; LAB_005a28bd
    PUSH dword ptr [ESP + 0x10]         ; 005a28f3
    PUSH ESI                            ; 005a28f7
    CALL core_fforest.cpp_FUN_005a2ac0  ; 005a28f8
        ;   XREF to: 005a2ac0 (UNCONDITIONAL_CALL)  ; undefined core_fforest.cpp_FUN_005a2ac0()
    ADD ESP,0x8                         ; 005a28fd
    POP ESI                             ; 005a2900
    POP EBX                             ; 005a2901
    RET                                 ; 005a2902

