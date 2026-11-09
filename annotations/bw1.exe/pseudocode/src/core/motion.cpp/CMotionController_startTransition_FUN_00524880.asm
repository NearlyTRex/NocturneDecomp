; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_motion_cpp_CMotionController_startTransition_FUN_00524880(CMotionController *this_ptr,SMotionTransition *transition)
;
; Parameters:
; CMotionController * Stack[0x4]:4   this_ptr
; SMotionTransition * Stack[0x8]:4   transition
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[2]:
;   core_motion.cpp_CMotionController_advance_FUN_00524270 at 00524598
;   core_motion.cpp_CMotionController_findAndStartTransition_FUN_00524620 at 005246e9
;
; Referenced Globals:
;   undefined4 DAT_005eaeef
;
; Called Functions:
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770
;   core_motion.cpp_CMotionController_jumpToMotion_FUN_00524b10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00524880
        ;   Label: core_motion.cpp_CMotionController_startTransition_FUN_00524880
    PUSH ESI                            ; 00524881
    PUSH EDI                            ; 00524882
    PUSH EBP                            ; 00524883
    SUB ESP,0x8                         ; 00524884
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00524887
    MOV ESI,dword ptr [ESP + 0x20]      ; 0052488b
    MOV EAX,dword ptr [ESI + 0xc]       ; 0052488f
    MOV dword ptr [ESP],EAX             ; 00524892
    FLD float ptr [ESP]                 ; 00524895
    FCOMP float ptr [0x005eaeef]        ; 00524898 | DAT_005eaeef
    FNSTSW AX                           ; 0052489e
    SAHF                                ; 005248a0
    JZ 0x005248e7                       ; 005248a1
        ;   XREF to: 005248e7 (CONDITIONAL_JUMP)  ; LAB_005248e7
    FLD float ptr [ESI + 0x10]          ; 005248a3
        ;   Label: LAB_005248a3
    FLDZ                                ; 005248a6
    FCOMPP                              ; 005248a8
    FNSTSW AX                           ; 005248aa
    SAHF                                ; 005248ac
    JNC 0x00524909                      ; 005248ad
        ;   XREF to: 00524909 (CONDITIONAL_JUMP)  ; LAB_00524909
    MOV EAX,dword ptr [ESI + 0x8]       ; 005248af
    MOV dword ptr [EBX + 0x18],EAX      ; 005248b2
    MOV EAX,dword ptr [ESP]             ; 005248b5
    MOV dword ptr [EBX + 0x1c],EAX      ; 005248b8
    MOV EAX,dword ptr [ESI + 0x4]       ; 005248bb
    MOV dword ptr [EBX + 0x14],0x3a83126f ; 005248be
    MOV dword ptr [EBX + 0xc],EAX       ; 005248c5
    FLD float ptr [ESI + 0x10]          ; 005248c8
    FLD1                                ; 005248cb
    FDIVRP                              ; 005248cd
    MOV dword ptr [EBX + 0x20],0x0      ; 005248cf
    FSTP float ptr [EBX + 0x10]         ; 005248d6
    MOV EAX,dword ptr [ESI + 0x14]      ; 005248d9
    MOV dword ptr [EBX + 0x24],EAX      ; 005248dc
    ADD ESP,0x8                         ; 005248df
        ;   Label: LAB_005248df
    POP EBP                             ; 005248e2
    POP EDI                             ; 005248e3
    POP ESI                             ; 005248e4
    POP EBX                             ; 005248e5
    RET                                 ; 005248e6
    MOV EDX,dword ptr [ESI + 0x8]       ; 005248e7
        ;   Label: LAB_005248e7
    PUSH EDX                            ; 005248ea
    MOV ECX,dword ptr [EBX + 0x4]       ; 005248eb
    PUSH dword ptr [EBX + 0x8]          ; 005248ee
    PUSH ECX                            ; 005248f1
    MOV EAX,dword ptr [EBX + 0x50]      ; 005248f2
    PUSH EBX                            ; 005248f5
    CALL dword ptr [EAX + 0x4]          ; 005248f6
    ADD ESP,0x10                        ; 005248f9
    MOV dword ptr [ESP + 0x4],EAX       ; 005248fc
    FILD dword ptr [ESP + 0x4]          ; 00524900
    FSTP float ptr [ESP]                ; 00524904
    JMP 0x005248a3                      ; 00524907
        ;   XREF to: 005248a3 (UNCONDITIONAL_JUMP)  ; LAB_005248a3
    MOV EDI,dword ptr [ESI + 0x8]       ; 00524909
        ;   Label: LAB_00524909
    PUSH dword ptr [ESP]                ; 0052490c
    PUSH EDI                            ; 0052490f
    PUSH EBX                            ; 00524910
    CALL core_motion.cpp_CMotionController_jumpToMotion_FUN_00524b10 ; 00524911
        ;   XREF to: 00524b10 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_jumpToMotion_FUN_00524b10(CMotionController * this_ptr, int target_motion_index, float target_frame_number)
    MOV EBP,dword ptr [ESI + 0x14]      ; 00524916
    ADD ESP,0xc                         ; 00524919
    TEST EBP,EBP                        ; 0052491c
    JZ 0x005248df                       ; 0052491e
        ;   XREF to: 005248df (CONDITIONAL_JUMP)  ; LAB_005248df
    PUSH EBX                            ; 00524920
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 00524921
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00524926
    ADD ESP,0x4                         ; 00524929
    MOV dword ptr [EBX + 0x28],EAX      ; 0052492c
    ADD ESP,0x8                         ; 0052492f
    POP EBP                             ; 00524932
    POP EDI                             ; 00524933
    POP ESI                             ; 00524934
    POP EBX                             ; 00524935
    RET                                 ; 00524936

