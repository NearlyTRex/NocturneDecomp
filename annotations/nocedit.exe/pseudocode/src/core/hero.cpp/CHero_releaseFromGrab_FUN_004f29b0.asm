; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hero_cpp_CHero_releaseFromGrab_FUN_004f29b0(CHero *this_ptr)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; Referenced Globals:
;   TerminatedCString s_GETGRABBED_0062ebc8
;   TerminatedCString s_STAND_0062ebd3
;   int g_ActorMagicNumber
;
; Called Functions:
;   core_charactr.cpp_CCharacter_releaseFromGrab_FUN_0042bf40
;   core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
;   core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
;   core_motion.cpp_CMotionController_setDesiredStateByName_FUN_0052db90
;   core_motion.cpp_CMotionList_findStateIndex_FUN_0052d4f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f29b0
        ;   Label: core_hero.cpp_CHero_releaseFromGrab_FUN_004f29b0
    PUSH ESI                            ; 004f29b1
    SUB ESP,0x4                         ; 004f29b2
    MOV ESI,dword ptr [ESP + 0x10]      ; 004f29b5
    CMP dword ptr [ESI + 0x68],0x78a123 ; 004f29b9 | g_ActorMagicNumber
    JNZ 0x004f2a1f                      ; 004f29c0
        ;   XREF to: 004f2a1f (CONDITIONAL_JUMP)  ; LAB_004f2a1f
    LEA EAX,[ESI + 0x158]               ; 004f29c2
    CMP dword ptr [EAX + 0x22b0],0x0    ; 004f29c8
    JZ 0x004f2a1f                       ; 004f29cf
        ;   XREF to: 004f2a1f (CONDITIONAL_JUMP)  ; LAB_004f2a1f
    PUSH 0x0                            ; 004f29d1
    PUSH 0x62ebc8                       ; 004f29d3 | = "GETGRABBED"
    LEA EBX,[ESI + 0x158]               ; 004f29d8
    PUSH EBX                            ; 004f29de
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0 ; 004f29df
        ;   XREF to: 0052dce0 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 004f29e4
    PUSH EAX                            ; 004f29e7
    CALL core_motion.cpp_CMotionList_findStateIndex_FUN_0052d4f0 ; 004f29e8
        ;   XREF to: 0052d4f0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findStateIndex_FUN_0052d4f0(CMotionList * this_ptr, char * state_name, int error_on_not_found)
    ADD ESP,0xc                         ; 004f29ed
    TEST EAX,EAX                        ; 004f29f0
    JL 0x004f2a1f                       ; 004f29f2
        ;   XREF to: 004f2a1f (CONDITIONAL_JUMP)  ; LAB_004f2a1f
    PUSH EAX                            ; 004f29f4
    PUSH EBX                            ; 004f29f5
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20 ; 004f29f6
        ;   XREF to: 0052dd20 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [ESP + 0x8],EAX       ; 004f29fb
    FLD float ptr [ESP + 0x8]           ; 004f29ff
    FLDZ                                ; 004f2a03
    ADD ESP,0x8                         ; 004f2a05
    FCOMPP                              ; 004f2a08
    FNSTSW AX                           ; 004f2a0a
    SAHF                                ; 004f2a0c
    JNC 0x004f2a1f                      ; 004f2a0d
        ;   XREF to: 004f2a1f (CONDITIONAL_JUMP)  ; LAB_004f2a1f
    PUSH 0x1                            ; 004f2a0f
    PUSH 0x62ebd3                       ; 004f2a11 | = "STAND"
    PUSH EBX                            ; 004f2a16
    CALL core_motion.cpp_CMotionController_setDesiredStateByName_FUN_0052db90 ; 004f2a17
        ;   XREF to: 0052db90 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredStateByName_FUN_0052db90(CMotionController * this_ptr, char * state_name, int force_immediate)
    ADD ESP,0xc                         ; 004f2a1c
    PUSH ESI                            ; 004f2a1f
        ;   Label: LAB_004f2a1f
    CALL core_charactr.cpp_CCharacter_releaseFromGrab_FUN_0042bf40 ; 004f2a20
        ;   XREF to: 0042bf40 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_releaseFromGrab_FUN_0042bf40(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004f2a25
    ADD ESP,0x4                         ; 004f2a28
    POP ESI                             ; 004f2a2b
    POP EBX                             ; 004f2a2c
    RET                                 ; 004f2a2d

