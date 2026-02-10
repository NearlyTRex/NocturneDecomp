; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_charactr_cpp_CCharacter_advanceGesture_FUN_0042d4d0(CCharacter *this_ptr,float delta_time)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; XREF[1]:
;   core_charactr.cpp_CCharacter_process_FUN_00429870 at 004298af
;
; Called Functions:
;   core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042d4d0
        ;   Label: core_charactr.cpp_CCharacter_advanceGesture_FUN_0042d4d0
    PUSH ESI                            ; 0042d4d1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0042d4d2
    MOV EDX,dword ptr [EBX + 0x25c8]    ; 0042d4d6
    TEST EDX,EDX                        ; 0042d4dc
    JGE 0x0042d4e3                      ; 0042d4de
        ;   XREF to: 0042d4e3 (CONDITIONAL_JUMP)  ; LAB_0042d4e3
    POP ESI                             ; 0042d4e0
        ;   Label: LAB_0042d4e0
    POP EBX                             ; 0042d4e1
    RET                                 ; 0042d4e2
    IMUL ESI,EDX,0x54c                  ; 0042d4e3
        ;   Label: LAB_0042d4e3
    LEA EAX,[EBX + 0x158]               ; 0042d4e9
    PUSH EAX                            ; 0042d4ef
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0 ; 0042d4f0
        ;   XREF to: 0052dce0 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0042d4f5
    FLD float ptr [ESP + 0x10]          ; 0042d4f8
    FMUL float ptr [ESI + EAX*0x1 + 0x988] ; 0042d4fc
    FADD float ptr [EBX + 0x25cc]       ; 0042d503
    FSTP float ptr [EBX + 0x25cc]       ; 0042d509
    FILD dword ptr [ESI + EAX*0x1 + 0x9cc] ; 0042d50f
    FCOMP float ptr [EBX + 0x25cc]      ; 0042d516
    FNSTSW AX                           ; 0042d51c
    SAHF                                ; 0042d51e
    JA 0x0042d4e0                       ; 0042d51f
        ;   XREF to: 0042d4e0 (CONDITIONAL_JUMP)  ; LAB_0042d4e0
    MOV dword ptr [EBX + 0x25c8],0xffffffff ; 0042d521
    POP ESI                             ; 0042d52b
    POP EBX                             ; 0042d52c
    RET                                 ; 0042d52d

