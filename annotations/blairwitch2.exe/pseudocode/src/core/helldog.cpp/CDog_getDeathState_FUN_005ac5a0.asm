; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; EDeathState __cdecl core_helldog_cpp_CDog_getDeathState_FUN_005ac5a0(CDog *this_ptr)
;
; Parameters:
; CDog *           Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_Death_005f0e44
;   TerminatedCString s_Animation_005f0e4a
;
; Called Functions:
;   core_motion.cpp_FUN_005035c0
;   core_muzzle.cpp_FUN_0059daa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ac5a0
        ;   Label: core_helldog.cpp_CDog_getDeathState_FUN_005ac5a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005ac5a1
    PUSH 0x5f0e44                       ; 005ac5a5 | = "Death"
    ADD EBX,0x10af8                     ; 005ac5aa
    PUSH EBX                            ; 005ac5b0
    CALL core_muzzle.cpp_FUN_0059daa0   ; 005ac5b1
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059daa0()
    ADD ESP,0x8                         ; 005ac5b6
    TEST EAX,EAX                        ; 005ac5b9
    JNZ 0x005ac5cf                      ; 005ac5bb
        ;   XREF to: 005ac5cf (CONDITIONAL_JUMP)  ; LAB_005ac5cf
    PUSH 0x5f0e4a                       ; 005ac5bd | = "Animation"
    PUSH EBX                            ; 005ac5c2
    CALL core_muzzle.cpp_FUN_0059daa0   ; 005ac5c3
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059daa0()
    ADD ESP,0x8                         ; 005ac5c8
    TEST EAX,EAX                        ; 005ac5cb
    JZ 0x005ac5fe                       ; 005ac5cd
        ;   XREF to: 005ac5fe (CONDITIONAL_JUMP)  ; LAB_005ac5fe
    MOV EAX,dword ptr [ESP + 0x8]       ; 005ac5cf
        ;   Label: LAB_005ac5cf
    ADD EAX,0x2b4                       ; 005ac5d3
    PUSH EAX                            ; 005ac5d8
    CALL core_motion.cpp_FUN_005035c0   ; 005ac5d9
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 005ac5de
    ADD ESP,0x4                         ; 005ac5e1
    CMP EAX,0x5                         ; 005ac5e4
    JC 0x005ac5fe                       ; 005ac5e7
        ;   XREF to: 005ac5fe (CONDITIONAL_JUMP)  ; LAB_005ac5fe
    JBE 0x005ac5f7                      ; 005ac5e9
        ;   XREF to: 005ac5f7 (CONDITIONAL_JUMP)  ; LAB_005ac5f7
    CMP EAX,0x6                         ; 005ac5eb
    JNZ 0x005ac5fe                      ; 005ac5ee
        ;   XREF to: 005ac5fe (CONDITIONAL_JUMP)  ; LAB_005ac5fe
    MOV EAX,0x2                         ; 005ac5f0
    POP EBX                             ; 005ac5f5
    RET                                 ; 005ac5f6
    MOV EAX,0x1                         ; 005ac5f7
        ;   Label: LAB_005ac5f7
    POP EBX                             ; 005ac5fc
    RET                                 ; 005ac5fd
    XOR EAX,EAX                         ; 005ac5fe
        ;   Label: LAB_005ac5fe
    POP EBX                             ; 005ac600
    RET                                 ; 005ac601

