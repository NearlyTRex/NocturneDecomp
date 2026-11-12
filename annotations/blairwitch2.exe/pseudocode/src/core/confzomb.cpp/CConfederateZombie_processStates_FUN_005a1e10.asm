; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_confzomb_cpp_CConfederateZombie_processStates_FUN_005a1e10(CConfederateZombie *this_ptr,float delta_time,int mode)
;
; Parameters:
; CConfederateZombie * Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; int              Stack[0xc]:4   mode
;
; XREF[1]:
;   core_confzomb.cpp_CConfederateZombie_ctor_FUN_005a1b40 at 005a1c18
;
; Referenced Globals:
;   TerminatedCString s_RangeAttack_005efddf
;   TerminatedCString s_RangeAttack_005efdeb
;   TerminatedCString s_MeleeAttack_005efdf7
;   TerminatedCString s_MeleeAttack_005efe03
;
; Called Functions:
;   core_basicene.cpp_FUN_0059e8c0
;   core_muzzle.cpp_FUN_0059d650
;   core_muzzle.cpp_FUN_0059daa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a1e10
        ;   Label: core_confzomb.cpp_CConfederateZombie_processStates_FUN_005a1e10
    PUSH ESI                            ; 005a1e11
    MOV ESI,dword ptr [ESP + 0xc]       ; 005a1e12
    MOV EBX,dword ptr [ESP + 0x14]      ; 005a1e16
    TEST EBX,EBX                        ; 005a1e1a
    JNZ 0x005a1e3f                      ; 005a1e1c
        ;   XREF to: 005a1e3f (CONDITIONAL_JUMP)  ; LAB_005a1e3f
    LEA EAX,[ESI + 0x10af8]             ; 005a1e1e
        ;   Label: LAB_005a1e1e
    TEST EBX,EBX                        ; 005a1e24
    JBE 0x005a1e4f                      ; 005a1e26
        ;   XREF to: 005a1e4f (CONDITIONAL_JUMP)  ; LAB_005a1e4f
    CMP EBX,0x1                         ; 005a1e28
    JZ 0x005a1e5f                       ; 005a1e2b
        ;   XREF to: 005a1e5f (CONDITIONAL_JUMP)  ; LAB_005a1e5f
    LEA EAX,[ESI + 0x10af8]             ; 005a1e2d
        ;   Label: LAB_005a1e2d
    TEST EBX,EBX                        ; 005a1e33
    JBE 0x005a1e88                      ; 005a1e35
        ;   XREF to: 005a1e88 (CONDITIONAL_JUMP)  ; LAB_005a1e88
    CMP EBX,0x1                         ; 005a1e37
    JZ 0x005a1e99                       ; 005a1e3a
        ;   XREF to: 005a1e99 (CONDITIONAL_JUMP)  ; LAB_005a1e99
    POP ESI                             ; 005a1e3c
        ;   Label: LAB_005a1e3c
    POP EBX                             ; 005a1e3d
    RET                                 ; 005a1e3e
    PUSH EBX                            ; 005a1e3f
        ;   Label: LAB_005a1e3f
    PUSH dword ptr [ESP + 0x14]         ; 005a1e40
    PUSH ESI                            ; 005a1e44
    CALL core_basicene.cpp_FUN_0059e8c0 ; 005a1e45
        ;   XREF to: 0059e8c0 (UNCONDITIONAL_CALL)  ; undefined core_basicene.cpp_FUN_0059e8c0()
    ADD ESP,0xc                         ; 005a1e4a
    JMP 0x005a1e1e                      ; 005a1e4d
        ;   XREF to: 005a1e1e (UNCONDITIONAL_JUMP)  ; LAB_005a1e1e
    PUSH 0x5efddf                       ; 005a1e4f | = "RangeAttack"
        ;   Label: LAB_005a1e4f
    PUSH EAX                            ; 005a1e54
    CALL core_muzzle.cpp_FUN_0059d650   ; 005a1e55
        ;   XREF to: 0059d650 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059d650()
    ADD ESP,0x8                         ; 005a1e5a
    JMP 0x005a1e2d                      ; 005a1e5d
        ;   XREF to: 005a1e2d (UNCONDITIONAL_JUMP)  ; LAB_005a1e2d
    PUSH 0x5efdeb                       ; 005a1e5f | = "RangeAttack"
        ;   Label: LAB_005a1e5f
    PUSH EAX                            ; 005a1e64
    CALL core_muzzle.cpp_FUN_0059daa0   ; 005a1e65
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059daa0()
    ADD ESP,0x8                         ; 005a1e6a
    TEST EAX,EAX                        ; 005a1e6d
    JZ 0x005a1e2d                       ; 005a1e6f
        ;   XREF to: 005a1e2d (CONDITIONAL_JUMP)  ; LAB_005a1e2d
    PUSH dword ptr [ESP + 0x10]         ; 005a1e71
    MOV EAX,dword ptr [ESI + 0x2b0]     ; 005a1e75
    PUSH ESI                            ; 005a1e7b
    CALL dword ptr [EAX + 0x180]        ; 005a1e7c
    ADD ESP,0x8                         ; 005a1e82
    POP ESI                             ; 005a1e85
    POP EBX                             ; 005a1e86
    RET                                 ; 005a1e87
    PUSH 0x5efdf7                       ; 005a1e88 | = "MeleeAttack"
        ;   Label: LAB_005a1e88
    PUSH EAX                            ; 005a1e8d
    CALL core_muzzle.cpp_FUN_0059d650   ; 005a1e8e
        ;   XREF to: 0059d650 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059d650()
    ADD ESP,0x8                         ; 005a1e93
    POP ESI                             ; 005a1e96
    POP EBX                             ; 005a1e97
    RET                                 ; 005a1e98
    PUSH 0x5efe03                       ; 005a1e99 | = "MeleeAttack"
        ;   Label: LAB_005a1e99
    PUSH EAX                            ; 005a1e9e
    CALL core_muzzle.cpp_FUN_0059daa0   ; 005a1e9f
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059daa0()
    ADD ESP,0x8                         ; 005a1ea4
    TEST EAX,EAX                        ; 005a1ea7
    JZ 0x005a1e3c                       ; 005a1ea9
        ;   XREF to: 005a1e3c (CONDITIONAL_JUMP)  ; LAB_005a1e3c
    PUSH dword ptr [ESP + 0x10]         ; 005a1eab
    MOV EAX,dword ptr [ESI + 0x2b0]     ; 005a1eaf
    PUSH ESI                            ; 005a1eb5
    CALL dword ptr [EAX + 0x184]        ; 005a1eb6
    ADD ESP,0x8                         ; 005a1ebc
    POP ESI                             ; 005a1ebf
    POP EBX                             ; 005a1ec0
    RET                                 ; 005a1ec1

