; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_charactr_cpp_CCharacter_FUN_0042d390(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_0055a810 at 0055d17b
;
; Called Functions:
;   core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
;   core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042d390
        ;   Label: core_charactr.cpp_CCharacter_FUN_0042d390
    MOV EBX,dword ptr [ESP + 0x8]       ; 0042d391
    PUSH 0x0                            ; 0042d395
    MOV EDX,dword ptr [ESP + 0x10]      ; 0042d397
    PUSH EDX                            ; 0042d39b
    LEA EAX,[EBX + 0x158]               ; 0042d39c
    PUSH EAX                            ; 0042d3a2
    MOV dword ptr [EBX + 0x25cc],0x0    ; 0042d3a3
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0 ; 0042d3ad
        ;   XREF to: 0052dce0 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0042d3b2
    PUSH EAX                            ; 0042d3b5
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460 ; 0042d3b6
        ;   XREF to: 0052d460 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460(CMotionList * this_ptr)
    ADD ESP,0xc                         ; 0042d3bb
    MOV dword ptr [EBX + 0x25c8],EAX    ; 0042d3be
    TEST EAX,EAX                        ; 0042d3c4
    SETGE AL                            ; 0042d3c6
    AND EAX,0xff                        ; 0042d3c9
    POP EBX                             ; 0042d3ce
    RET                                 ; 0042d3cf

