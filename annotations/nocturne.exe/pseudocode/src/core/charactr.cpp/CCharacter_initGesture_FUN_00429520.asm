; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_charactr_cpp_CCharacter_initGesture_FUN_00429520(CCharacter *this_ptr,char *motion_name)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   motion_name
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_004ff2c0 at 00501c2b
;
; Called Functions:
;   core_motion.cpp_CMotionController_getMotionList_FUN_004e1890
;   core_motion.cpp_CMotionList_findMotionIndex_FUN_004e1010
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00429520
        ;   Label: core_charactr.cpp_CCharacter_initGesture_FUN_00429520
    MOV EBX,dword ptr [ESP + 0x8]       ; 00429521
    PUSH 0x0                            ; 00429525
    MOV EDX,dword ptr [ESP + 0x10]      ; 00429527
    PUSH EDX                            ; 0042952b
    LEA EAX,[EBX + 0x150]               ; 0042952c
    PUSH EAX                            ; 00429532
    MOV dword ptr [EBX + 0x25c4],0x0    ; 00429533
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_004e1890 ; 0042953d
        ;   XREF to: 004e1890 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_004e1890(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00429542
    PUSH EAX                            ; 00429545
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_004e1010 ; 00429546
        ;   XREF to: 004e1010 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_004e1010(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    ADD ESP,0xc                         ; 0042954b
    MOV dword ptr [EBX + 0x25c0],EAX    ; 0042954e
    TEST EAX,EAX                        ; 00429554
    SETGE AL                            ; 00429556
    AND EAX,0xff                        ; 00429559
    POP EBX                             ; 0042955e
    RET                                 ; 0042955f

