; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; EDeathState __cdecl core_charactr_cpp_CCharacter_getDeathState_FUN_00428710(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_stranger.cpp_CStranger_getDeathState_FUN_00540890 at 005408b0
;
; Referenced Globals:
;   float FLOAT_0057a04a = 6.362932E-39
;   TerminatedCString s_DEAD_0057a04e
;
; Called Functions:
;   core_motion.cpp_CMotionController_getCurrentStateName_FUN_004e18a0
;   crt_string.c__stricmp_FUN_00564520
;   crt_string.c__strnicmp_FUN_00564bc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00428710
        ;   Label: core_charactr.cpp_CCharacter_getDeathState_FUN_00428710
    MOV EBX,dword ptr [ESP + 0x8]       ; 00428711
    MOV EDX,dword ptr [EBX + 0x70]      ; 00428715
    CMP EDX,0x2                         ; 00428718
    JNZ 0x00428721                      ; 0042871b
        ;   XREF to: 00428721 (CONDITIONAL_JUMP)  ; LAB_00428721
    MOV EAX,EDX                         ; 0042871d
    POP EBX                             ; 0042871f
    RET                                 ; 00428720
    PUSH 0x3                            ; 00428721
        ;   Label: LAB_00428721
    PUSH 0x57a04a                       ; 00428723 | FLOAT_0057a04a
    ADD EBX,0x150                       ; 00428728
    PUSH EBX                            ; 0042872e
    CALL core_motion.cpp_CMotionController_getCurrentStateName_FUN_004e18a0 ; 0042872f
        ;   XREF to: 004e18a0 (UNCONDITIONAL_CALL)  ; char * core_motion.cpp_CMotionController_getCurrentStateName_FUN_004e18a0(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00428734
    PUSH EAX                            ; 00428737
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 00428738
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0042873d
    TEST EAX,EAX                        ; 00428740
    JNZ 0x0042874b                      ; 00428742
        ;   XREF to: 0042874b (CONDITIONAL_JUMP)  ; LAB_0042874b
    MOV EAX,0x1                         ; 00428744
    POP EBX                             ; 00428749
    RET                                 ; 0042874a
    PUSH 0x57a04e                       ; 0042874b | = "DEAD"
        ;   Label: LAB_0042874b
    PUSH EBX                            ; 00428750
    CALL core_motion.cpp_CMotionController_getCurrentStateName_FUN_004e18a0 ; 00428751
        ;   XREF to: 004e18a0 (UNCONDITIONAL_CALL)  ; char * core_motion.cpp_CMotionController_getCurrentStateName_FUN_004e18a0(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00428756
    PUSH EAX                            ; 00428759
    CALL crt_string.c__stricmp_FUN_00564520 ; 0042875a
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_00564520(char * str1, char * str2)
    ADD ESP,0x8                         ; 0042875f
    TEST EAX,EAX                        ; 00428762
    JNZ 0x0042876d                      ; 00428764
        ;   XREF to: 0042876d (CONDITIONAL_JUMP)  ; LAB_0042876d
    MOV EAX,0x2                         ; 00428766
    POP EBX                             ; 0042876b
    RET                                 ; 0042876c
    XOR EAX,EAX                         ; 0042876d
        ;   Label: LAB_0042876d
    POP EBX                             ; 0042876f
    RET                                 ; 00428770

