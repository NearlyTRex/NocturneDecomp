; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_charactr_cpp_CCharacter_initGesture_FUN_004291b0(CCharacter *this_ptr,char *motion_name)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   motion_name
;
; XREF[1]:
;   core_script.cpp_FUN_00522350 at 00525570
;
; Called Functions:
;   core_motion.cpp_CMotionController_getMotionList_FUN_00503860
;   core_motion.cpp_CMotionList_findMotionIndex_FUN_00502f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004291b0
        ;   Label: core_charactr.cpp_CCharacter_initGesture_FUN_004291b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004291b1
    PUSH 0x0                            ; 004291b5
    MOV EDX,dword ptr [ESP + 0x10]      ; 004291b7
    PUSH EDX                            ; 004291bb
    LEA EAX,[EBX + 0x2b4]               ; 004291bc
    PUSH EAX                            ; 004291c2
    MOV dword ptr [EBX + 0x27c8],0x0    ; 004291c3
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_00503860 ; 004291cd
        ;   XREF to: 00503860 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_00503860(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 004291d2
    PUSH EAX                            ; 004291d5
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_00502f10 ; 004291d6
        ;   XREF to: 00502f10 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_00502f10(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    ADD ESP,0xc                         ; 004291db
    MOV dword ptr [EBX + 0x27c4],EAX    ; 004291de
    TEST EAX,EAX                        ; 004291e4
    SETGE AL                            ; 004291e6
    AND EAX,0xff                        ; 004291e9
    POP EBX                             ; 004291ee
    RET                                 ; 004291ef

