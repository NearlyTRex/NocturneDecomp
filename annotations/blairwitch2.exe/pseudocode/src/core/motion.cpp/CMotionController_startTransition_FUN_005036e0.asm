; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_motion_cpp_CMotionController_startTransition_FUN_005036e0(CMotionController *this_ptr,SMotionTransition *transition)
;
; Parameters:
; CMotionController * Stack[0x4]:4   this_ptr
; SMotionTransition * Stack[0x8]:4   transition
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[2]:
;   core_motion.cpp_CMotionController_advance_FUN_005030c0 at 005033e8
;   core_motion.cpp_CMotionController_findAndStartTransition_FUN_00503470 at 00503539
;
; Referenced Globals:
;   undefined4 DAT_005dfc94
;
; Called Functions:
;   core_motion.cpp_CMotionController_jumpToMotion_FUN_00503980
;   core_motion.cpp_FUN_005035c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005036e0
        ;   Label: core_motion.cpp_CMotionController_startTransition_FUN_005036e0
    PUSH ESI                            ; 005036e1
    PUSH EDI                            ; 005036e2
    PUSH EBP                            ; 005036e3
    SUB ESP,0x8                         ; 005036e4
    MOV EBX,dword ptr [ESP + 0x1c]      ; 005036e7
    MOV ESI,dword ptr [ESP + 0x20]      ; 005036eb
    MOV EAX,dword ptr [ESI + 0xc]       ; 005036ef
    MOV dword ptr [ESP],EAX             ; 005036f2
    FLD float ptr [ESP]                 ; 005036f5
    FCOMP float ptr [0x005dfc94]        ; 005036f8 | DAT_005dfc94
    FNSTSW AX                           ; 005036fe
    SAHF                                ; 00503700
    JZ 0x00503747                       ; 00503701
        ;   XREF to: 00503747 (CONDITIONAL_JUMP)  ; LAB_00503747
    FLD float ptr [ESI + 0x10]          ; 00503703
        ;   Label: LAB_00503703
    FLDZ                                ; 00503706
    FCOMPP                              ; 00503708
    FNSTSW AX                           ; 0050370a
    SAHF                                ; 0050370c
    JNC 0x00503769                      ; 0050370d
        ;   XREF to: 00503769 (CONDITIONAL_JUMP)  ; LAB_00503769
    MOV EAX,dword ptr [ESI + 0x8]       ; 0050370f
    MOV dword ptr [EBX + 0x18],EAX      ; 00503712
    MOV EAX,dword ptr [ESP]             ; 00503715
    MOV dword ptr [EBX + 0x1c],EAX      ; 00503718
    MOV EAX,dword ptr [ESI + 0x4]       ; 0050371b
    MOV dword ptr [EBX + 0x14],0x3a83126f ; 0050371e
    MOV dword ptr [EBX + 0xc],EAX       ; 00503725
    FLD float ptr [ESI + 0x10]          ; 00503728
    FLD1                                ; 0050372b
    FDIVRP                              ; 0050372d
    MOV dword ptr [EBX + 0x20],0x0      ; 0050372f
    FSTP float ptr [EBX + 0x10]         ; 00503736
    MOV EAX,dword ptr [ESI + 0x14]      ; 00503739
    MOV dword ptr [EBX + 0x24],EAX      ; 0050373c
    ADD ESP,0x8                         ; 0050373f
        ;   Label: LAB_0050373f
    POP EBP                             ; 00503742
    POP EDI                             ; 00503743
    POP ESI                             ; 00503744
    POP EBX                             ; 00503745
    RET                                 ; 00503746
    MOV EDX,dword ptr [ESI + 0x8]       ; 00503747
        ;   Label: LAB_00503747
    PUSH EDX                            ; 0050374a
    MOV ECX,dword ptr [EBX + 0x4]       ; 0050374b
    PUSH dword ptr [EBX + 0x8]          ; 0050374e
    PUSH ECX                            ; 00503751
    MOV EAX,dword ptr [EBX + 0x50]      ; 00503752
    PUSH EBX                            ; 00503755
    CALL dword ptr [EAX + 0x4]          ; 00503756
    ADD ESP,0x10                        ; 00503759
    MOV dword ptr [ESP + 0x4],EAX       ; 0050375c
    FILD dword ptr [ESP + 0x4]          ; 00503760
    FSTP float ptr [ESP]                ; 00503764
    JMP 0x00503703                      ; 00503767
        ;   XREF to: 00503703 (UNCONDITIONAL_JUMP)  ; LAB_00503703
    MOV EDI,dword ptr [ESI + 0x8]       ; 00503769
        ;   Label: LAB_00503769
    PUSH dword ptr [ESP]                ; 0050376c
    PUSH EDI                            ; 0050376f
    PUSH EBX                            ; 00503770
    CALL core_motion.cpp_CMotionController_jumpToMotion_FUN_00503980 ; 00503771
        ;   XREF to: 00503980 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_jumpToMotion_FUN_00503980(CMotionController * this_ptr, int target_motion_index, float target_frame_number)
    MOV EBP,dword ptr [ESI + 0x14]      ; 00503776
    ADD ESP,0xc                         ; 00503779
    TEST EBP,EBP                        ; 0050377c
    JZ 0x0050373f                       ; 0050377e
        ;   XREF to: 0050373f (CONDITIONAL_JUMP)  ; LAB_0050373f
    PUSH EBX                            ; 00503780
    CALL core_motion.cpp_FUN_005035c0   ; 00503781
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 00503786
    ADD ESP,0x4                         ; 00503789
    MOV dword ptr [EBX + 0x28],EAX      ; 0050378c
    ADD ESP,0x8                         ; 0050378f
    POP EBP                             ; 00503792
    POP EDI                             ; 00503793
    POP ESI                             ; 00503794
    POP EBX                             ; 00503795
    RET                                 ; 00503796

