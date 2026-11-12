; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ghostchi_cpp_CGhostChild_processSleepState_FUN_005a9770(CGhostChild *this_ptr,float delta_time)
;
; Parameters:
; CGhostChild *    Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   TerminatedCString s_SleepComplete_005f0956
;
; Called Functions:
;   core_basicene.cpp_FUN_0059f570
;   core_basicene.cpp_FUN_005a01a0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;   core_muzzle.cpp_FUN_0059d880
;   core_muzzle.cpp_FUN_0059dcb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a9770
        ;   Label: core_ghostchi.cpp_CGhostChild_processSleepState_FUN_005a9770
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a9771
    PUSH EBX                            ; 005a9775
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 005a9776
    CALL dword ptr [EAX + 0x17c]        ; 005a977c
    ADD ESP,0x4                         ; 005a9782
    PUSH 0x1                            ; 005a9785
    PUSH 0x4                            ; 005a9787
    LEA EAX,[EBX + 0x2b4]               ; 005a9789
    PUSH EAX                            ; 005a978f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 005a9790
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV EAX,dword ptr [EBX + 0x11858]   ; 005a9795
    ADD ESP,0xc                         ; 005a979b
    CMP EAX,0x1                         ; 005a979e
    JNC 0x005a9880                      ; 005a97a1
        ;   XREF to: 005a9880 (CONDITIONAL_JUMP)  ; LAB_005a9880
    TEST EAX,EAX                        ; 005a97a7
    JZ 0x005a97ad                       ; 005a97a9
        ;   XREF to: 005a97ad (CONDITIONAL_JUMP)  ; LAB_005a97ad
    POP EBX                             ; 005a97ab
        ;   Label: LAB_005a97ab
    RET                                 ; 005a97ac
    PUSH 0x3f000000                     ; 005a97ad
        ;   Label: LAB_005a97ad
    PUSH 0x0                            ; 005a97b2
    PUSH dword ptr [EBX + 0x113c4]      ; 005a97b4
    PUSH EBX                            ; 005a97ba
    MOV dword ptr [EBX + 0x2814],0x1    ; 005a97bb
    CALL core_basicene.cpp_FUN_005a01a0 ; 005a97c5
        ;   XREF to: 005a01a0 (UNCONDITIONAL_CALL)  ; undefined core_basicene.cpp_FUN_005a01a0()
    ADD ESP,0x10                        ; 005a97ca
    PUSH EBX                            ; 005a97cd
    CALL core_basicene.cpp_FUN_0059f570 ; 005a97ce
        ;   XREF to: 0059f570 (UNCONDITIONAL_CALL)  ; undefined core_basicene.cpp_FUN_0059f570()
    FLD float ptr [EBX + 0x11860]       ; 005a97d3
    MOV dword ptr [EBX + 0x11858],0x1   ; 005a97d9
    ADD ESP,0x4                         ; 005a97e3
    FSTP float ptr [EBX + 0x11864]      ; 005a97e6
    POP EBX                             ; 005a97ec
    RET                                 ; 005a97ed
    FLD float ptr [EBX + 0x11864]       ; 005a97ee
        ;   Label: LAB_005a97ee
    FSUB float ptr [ESP + 0xc]          ; 005a97f4
    MOV dword ptr [EBX + 0x2814],0x1    ; 005a97f8
    FST float ptr [EBX + 0x11864]       ; 005a9802
    FLDZ                                ; 005a9808
    FCOMPP                              ; 005a980a
    FNSTSW AX                           ; 005a980c
    SAHF                                ; 005a980e
    JC 0x005a97ab                       ; 005a980f
        ;   XREF to: 005a97ab (CONDITIONAL_JUMP)  ; LAB_005a97ab
    PUSH 0x3f800000                     ; 005a9811
    PUSH 0x3f800000                     ; 005a9816
    PUSH dword ptr [EBX + 0x113c4]      ; 005a981b
    PUSH EBX                            ; 005a9821
    MOV dword ptr [EBX + 0x11864],0x0   ; 005a9822
    CALL core_basicene.cpp_FUN_005a01a0 ; 005a982c
        ;   XREF to: 005a01a0 (UNCONDITIONAL_CALL)  ; undefined core_basicene.cpp_FUN_005a01a0()
    ADD ESP,0x10                        ; 005a9831
    PUSH EBX                            ; 005a9834
    CALL core_basicene.cpp_FUN_0059f570 ; 005a9835
        ;   XREF to: 0059f570 (UNCONDITIONAL_CALL)  ; undefined core_basicene.cpp_FUN_0059f570()
    ADD ESP,0x4                         ; 005a983a
    MOV dword ptr [EBX + 0x11858],0x2   ; 005a983d
    POP EBX                             ; 005a9847
    RET                                 ; 005a9848
    PUSH ESI                            ; 005a9849
        ;   Label: LAB_005a9849
    LEA ESI,[EBX + 0x10af8]             ; 005a984a
    PUSH 0x0                            ; 005a9850
    PUSH ESI                            ; 005a9852
    MOV dword ptr [EBX + 0x2814],0x0    ; 005a9853
    CALL core_muzzle.cpp_FUN_0059dcb0   ; 005a985d
        ;   XREF to: 0059dcb0 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059dcb0()
    ADD ESP,0x8                         ; 005a9862
    PUSH 0x5f0956                       ; 005a9865 | = "SleepComplete"
    PUSH ESI                            ; 005a986a
    CALL core_muzzle.cpp_FUN_0059d880   ; 005a986b
        ;   XREF to: 0059d880 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059d880()
    ADD ESP,0x8                         ; 005a9870
    MOV dword ptr [EBX + 0x11858],0x3   ; 005a9873
    POP ESI                             ; 005a987d
    POP EBX                             ; 005a987e
    RET                                 ; 005a987f
    JBE 0x005a97ee                      ; 005a9880
        ;   XREF to: 005a97ee (CONDITIONAL_JUMP)  ; LAB_005a97ee
        ;   Label: LAB_005a9880
    CMP EAX,0x2                         ; 005a9886
    JZ 0x005a9849                       ; 005a9889
        ;   XREF to: 005a9849 (CONDITIONAL_JUMP)  ; LAB_005a9849
    POP EBX                             ; 005a988b
    RET                                 ; 005a988c

