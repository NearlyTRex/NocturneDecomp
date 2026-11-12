; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ghostchi_cpp_CGhostChild_processStates_FUN_005a94c0(CGhostChild *this_ptr,float delta_time,int mode)
;
; Parameters:
; CGhostChild *    Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; int              Stack[0xc]:4   mode
;
; XREF[1]:
;   core_ghostchi.cpp_CGhostChild_ctor_FUN_005a9230 at 005a92f0
;
; Referenced Globals:
;   TerminatedCString s_MeleeAttack_005f0910
;   TerminatedCString s_MeleeAttack_005f091c
;   TerminatedCString s_Sleep_005f0928
;   TerminatedCString s_Sleep_005f092e
;
; Called Functions:
;   core_basicene.cpp_FUN_0059e8c0
;   core_muzzle.cpp_FUN_0059d650
;   core_muzzle.cpp_FUN_0059daa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a94c0
        ;   Label: core_ghostchi.cpp_CGhostChild_processStates_FUN_005a94c0
    PUSH ESI                            ; 005a94c1
    MOV ESI,dword ptr [ESP + 0xc]       ; 005a94c2
    MOV EBX,dword ptr [ESP + 0x14]      ; 005a94c6
    TEST EBX,EBX                        ; 005a94ca
    JNZ 0x005a94ef                      ; 005a94cc
        ;   XREF to: 005a94ef (CONDITIONAL_JUMP)  ; LAB_005a94ef
    LEA EAX,[ESI + 0x10af8]             ; 005a94ce
        ;   Label: LAB_005a94ce
    TEST EBX,EBX                        ; 005a94d4
    JBE 0x005a94ff                      ; 005a94d6
        ;   XREF to: 005a94ff (CONDITIONAL_JUMP)  ; LAB_005a94ff
    CMP EBX,0x1                         ; 005a94d8
    JZ 0x005a950f                       ; 005a94db
        ;   XREF to: 005a950f (CONDITIONAL_JUMP)  ; LAB_005a950f
    LEA EAX,[ESI + 0x10af8]             ; 005a94dd
        ;   Label: LAB_005a94dd
    TEST EBX,EBX                        ; 005a94e3
    JBE 0x005a9538                      ; 005a94e5
        ;   XREF to: 005a9538 (CONDITIONAL_JUMP)  ; LAB_005a9538
    CMP EBX,0x1                         ; 005a94e7
    JZ 0x005a9549                       ; 005a94ea
        ;   XREF to: 005a9549 (CONDITIONAL_JUMP)  ; LAB_005a9549
    POP ESI                             ; 005a94ec
        ;   Label: LAB_005a94ec
    POP EBX                             ; 005a94ed
    RET                                 ; 005a94ee
    PUSH EBX                            ; 005a94ef
        ;   Label: LAB_005a94ef
    PUSH dword ptr [ESP + 0x14]         ; 005a94f0
    PUSH ESI                            ; 005a94f4
    CALL core_basicene.cpp_FUN_0059e8c0 ; 005a94f5
        ;   XREF to: 0059e8c0 (UNCONDITIONAL_CALL)  ; undefined core_basicene.cpp_FUN_0059e8c0()
    ADD ESP,0xc                         ; 005a94fa
    JMP 0x005a94ce                      ; 005a94fd
        ;   XREF to: 005a94ce (UNCONDITIONAL_JUMP)  ; LAB_005a94ce
    PUSH 0x5f0910                       ; 005a94ff | = "MeleeAttack"
        ;   Label: LAB_005a94ff
    PUSH EAX                            ; 005a9504
    CALL core_muzzle.cpp_FUN_0059d650   ; 005a9505
        ;   XREF to: 0059d650 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059d650()
    ADD ESP,0x8                         ; 005a950a
    JMP 0x005a94dd                      ; 005a950d
        ;   XREF to: 005a94dd (UNCONDITIONAL_JUMP)  ; LAB_005a94dd
    PUSH 0x5f091c                       ; 005a950f | = "MeleeAttack"
        ;   Label: LAB_005a950f
    PUSH EAX                            ; 005a9514
    CALL core_muzzle.cpp_FUN_0059daa0   ; 005a9515
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059daa0()
    ADD ESP,0x8                         ; 005a951a
    TEST EAX,EAX                        ; 005a951d
    JZ 0x005a94dd                       ; 005a951f
        ;   XREF to: 005a94dd (CONDITIONAL_JUMP)  ; LAB_005a94dd
    PUSH dword ptr [ESP + 0x10]         ; 005a9521
    MOV EAX,dword ptr [ESI + 0x2b0]     ; 005a9525
    PUSH ESI                            ; 005a952b
    CALL dword ptr [EAX + 0x180]        ; 005a952c
    ADD ESP,0x8                         ; 005a9532
    POP ESI                             ; 005a9535
    POP EBX                             ; 005a9536
    RET                                 ; 005a9537
    PUSH 0x5f0928                       ; 005a9538 | = "Sleep"
        ;   Label: LAB_005a9538
    PUSH EAX                            ; 005a953d
    CALL core_muzzle.cpp_FUN_0059d650   ; 005a953e
        ;   XREF to: 0059d650 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059d650()
    ADD ESP,0x8                         ; 005a9543
    POP ESI                             ; 005a9546
    POP EBX                             ; 005a9547
    RET                                 ; 005a9548
    PUSH 0x5f092e                       ; 005a9549 | = "Sleep"
        ;   Label: LAB_005a9549
    PUSH EAX                            ; 005a954e
    CALL core_muzzle.cpp_FUN_0059daa0   ; 005a954f
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059daa0()
    ADD ESP,0x8                         ; 005a9554
    TEST EAX,EAX                        ; 005a9557
    JZ 0x005a94ec                       ; 005a9559
        ;   XREF to: 005a94ec (CONDITIONAL_JUMP)  ; LAB_005a94ec
    PUSH dword ptr [ESP + 0x10]         ; 005a955b
    MOV EAX,dword ptr [ESI + 0x2b0]     ; 005a955f
    PUSH ESI                            ; 005a9565
    CALL dword ptr [EAX + 0x184]        ; 005a9566
    ADD ESP,0x8                         ; 005a956c
    POP ESI                             ; 005a956f
    POP EBX                             ; 005a9570
    RET                                 ; 005a9571

