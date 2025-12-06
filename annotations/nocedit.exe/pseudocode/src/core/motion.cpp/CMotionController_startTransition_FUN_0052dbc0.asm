; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_motion.cpp_CMotionController_startTransition_FUN_0052dbc0(CMotionController * this_ptr, SMotionTransition * transition)
;
; Parameters:
; CMotionController * Stack[0x4]:4   this_ptr
; SMotionTransition * Stack[0x8]:4   transition
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[2]:
;   core_motion.cpp_CMotionController_advance_FUN_0052d610 at 0052d8d1
;   core_motion.cpp_CMotionController_findAndStartTransition_FUN_0052d950 at 0052da28
;
; Referenced Globals:
;   float g_MotionControllerAutoDetermineFrame = -1
;
; Called Functions:
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
;   core_motion.cpp_CMotionController_jumpToMotion_FUN_0052dde0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052dbc0
        ;   Label: core_motion.cpp_CMotionController_startTransition_FUN_0052dbc0
    PUSH ESI                            ; 0052dbc1
    PUSH EDI                            ; 0052dbc2
    PUSH EBP                            ; 0052dbc3
    SUB ESP,0x8                         ; 0052dbc4
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0052dbc7
    MOV ESI,dword ptr [ESP + 0x20]      ; 0052dbcb
    MOV EAX,dword ptr [ESI + 0xc]       ; 0052dbcf
    MOV dword ptr [ESP],EAX             ; 0052dbd2
    FLD float ptr [ESP]                 ; 0052dbd5
    FCOMP float ptr [0x0063aa93]        ; 0052dbd8 | float g_MotionControllerAutoDetermineFrame
    FNSTSW AX                           ; 0052dbde
    SAHF                                ; 0052dbe0
    JZ 0x0052dc27                       ; 0052dbe1 | LAB_0052dc27
        ;   XREF to: 0052dc27 (CONDITIONAL_JUMP)
    FLD float ptr [ESI + 0x10]          ; 0052dbe3
        ;   Label: LAB_0052dbe3
    FLDZ                                ; 0052dbe6
    FCOMPP                              ; 0052dbe8
    FNSTSW AX                           ; 0052dbea
    SAHF                                ; 0052dbec
    JNC 0x0052dc49                      ; 0052dbed | LAB_0052dc49
        ;   XREF to: 0052dc49 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESI + 0x8]       ; 0052dbef
    MOV dword ptr [EBX + 0x18],EAX      ; 0052dbf2
    MOV EAX,dword ptr [ESP]             ; 0052dbf5
    MOV dword ptr [EBX + 0x1c],EAX      ; 0052dbf8
    MOV EAX,dword ptr [ESI + 0x4]       ; 0052dbfb
    MOV dword ptr [EBX + 0x14],0x3a83126f ; 0052dbfe
    MOV dword ptr [EBX + 0xc],EAX       ; 0052dc05
    FLD float ptr [ESI + 0x10]          ; 0052dc08
    FLD1                                ; 0052dc0b
    FDIVRP                              ; 0052dc0d
    MOV dword ptr [EBX + 0x20],0x0      ; 0052dc0f
    FSTP float ptr [EBX + 0x10]         ; 0052dc16
    MOV EAX,dword ptr [ESI + 0x14]      ; 0052dc19
    MOV dword ptr [EBX + 0x24],EAX      ; 0052dc1c
    ADD ESP,0x8                         ; 0052dc1f
        ;   Label: LAB_0052dc1f
    POP EBP                             ; 0052dc22
    POP EDI                             ; 0052dc23
    POP ESI                             ; 0052dc24
    POP EBX                             ; 0052dc25
    RET                                 ; 0052dc26
    MOV EDX,dword ptr [ESI + 0x8]       ; 0052dc27
        ;   Label: LAB_0052dc27
    PUSH EDX                            ; 0052dc2a
    MOV ECX,dword ptr [EBX + 0x4]       ; 0052dc2b
    PUSH dword ptr [EBX + 0x8]          ; 0052dc2e
    PUSH ECX                            ; 0052dc31
    MOV EAX,dword ptr [EBX + 0x50]      ; 0052dc32
    PUSH EBX                            ; 0052dc35
    CALL dword ptr [EAX + 0x4]          ; 0052dc36
    ADD ESP,0x10                        ; 0052dc39
    MOV dword ptr [ESP + 0x4],EAX       ; 0052dc3c
    FILD dword ptr [ESP + 0x4]          ; 0052dc40
    FSTP float ptr [ESP]                ; 0052dc44
    JMP 0x0052dbe3                      ; 0052dc47 | LAB_0052dbe3
        ;   XREF to: 0052dbe3 (UNCONDITIONAL_JUMP)
    MOV EDI,dword ptr [ESI + 0x8]       ; 0052dc49
        ;   Label: LAB_0052dc49
    PUSH dword ptr [ESP]                ; 0052dc4c
    PUSH EDI                            ; 0052dc4f
    PUSH EBX                            ; 0052dc50
    CALL core_motion.cpp_CMotionController_jumpToMotion_FUN_0052dde0 ; 0052dc51 | void core_motion.cpp_CMotionController_jumpToMotion_FUN_0052dde0(CMotionController * this_ptr, int target_motion_index, float target_frame_number)
        ;   XREF to: 0052dde0 (UNCONDITIONAL_CALL)
    MOV EBP,dword ptr [ESI + 0x14]      ; 0052dc56
    ADD ESP,0xc                         ; 0052dc59
    TEST EBP,EBP                        ; 0052dc5c
    JZ 0x0052dc1f                       ; 0052dc5e | LAB_0052dc1f
        ;   XREF to: 0052dc1f (CONDITIONAL_JUMP)
    PUSH EBX                            ; 0052dc60
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 0052dc61 | SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EAX + 0x24]      ; 0052dc66
    ADD ESP,0x4                         ; 0052dc69
    MOV dword ptr [EBX + 0x28],EAX      ; 0052dc6c
    ADD ESP,0x8                         ; 0052dc6f
    POP EBP                             ; 0052dc72
    POP EDI                             ; 0052dc73
    POP ESI                             ; 0052dc74
    POP EBX                             ; 0052dc75
    RET                                 ; 0052dc76

