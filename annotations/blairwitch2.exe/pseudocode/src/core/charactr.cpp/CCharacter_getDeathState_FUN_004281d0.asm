; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; EDeathState __cdecl core_charactr_cpp_CCharacter_getDeathState_FUN_004281d0(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_doc.cpp_CDoc_getDeathState_FUN_0045dda0 at 0045ddc0
;   core_stranger.cpp_CStranger_getDeathState_FUN_0056f100 at 0056f120
;
; Referenced Globals:
;   undefined4 DAT_005ccdff
;   undefined4 DAT_005cce03
;   TerminatedCString s_DEAD_POSSUM_005cce08
;
; Called Functions:
;   core_motion.cpp_CMotionController_getCurrentStateName_FUN_00503870
;   crt_string.c__stricmp_FUN_005b8130
;   crt_string.c__strnicmp_FUN_005b8da0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004281d0
        ;   Label: core_charactr.cpp_CCharacter_getDeathState_FUN_004281d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004281d1
    MOV EDX,dword ptr [EBX + 0x70]      ; 004281d5
    CMP EDX,0x2                         ; 004281d8
    JNZ 0x004281e1                      ; 004281db
        ;   XREF to: 004281e1 (CONDITIONAL_JUMP)  ; LAB_004281e1
    MOV EAX,EDX                         ; 004281dd
    POP EBX                             ; 004281df
    RET                                 ; 004281e0
    PUSH 0x3                            ; 004281e1
        ;   Label: LAB_004281e1
    PUSH 0x5ccdff                       ; 004281e3 | DAT_005ccdff
    ADD EBX,0x2b4                       ; 004281e8
    PUSH EBX                            ; 004281ee
    CALL core_motion.cpp_CMotionController_getCurrentStateName_FUN_00503870 ; 004281ef
        ;   XREF to: 00503870 (UNCONDITIONAL_CALL)  ; char * core_motion.cpp_CMotionController_getCurrentStateName_FUN_00503870(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 004281f4
    PUSH EAX                            ; 004281f7
    CALL crt_string.c__strnicmp_FUN_005b8da0 ; 004281f8
        ;   XREF to: 005b8da0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005b8da0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004281fd
    TEST EAX,EAX                        ; 00428200
    JNZ 0x0042820b                      ; 00428202
        ;   XREF to: 0042820b (CONDITIONAL_JUMP)  ; LAB_0042820b
    MOV EAX,0x1                         ; 00428204
    POP EBX                             ; 00428209
    RET                                 ; 0042820a
    PUSH 0x5cce03                       ; 0042820b | DAT_005cce03
        ;   Label: LAB_0042820b
    PUSH EBX                            ; 00428210
    CALL core_motion.cpp_CMotionController_getCurrentStateName_FUN_00503870 ; 00428211
        ;   XREF to: 00503870 (UNCONDITIONAL_CALL)  ; char * core_motion.cpp_CMotionController_getCurrentStateName_FUN_00503870(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00428216
    PUSH EAX                            ; 00428219
    CALL crt_string.c__stricmp_FUN_005b8130 ; 0042821a
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 0042821f
    TEST EAX,EAX                        ; 00428222
    JNZ 0x0042822d                      ; 00428224
        ;   XREF to: 0042822d (CONDITIONAL_JUMP)  ; LAB_0042822d
    MOV EAX,0x2                         ; 00428226
    POP EBX                             ; 0042822b
    RET                                 ; 0042822c
    PUSH 0x5cce08                       ; 0042822d | = "DEAD_POSSUM"
        ;   Label: LAB_0042822d
    PUSH EBX                            ; 00428232
    CALL core_motion.cpp_CMotionController_getCurrentStateName_FUN_00503870 ; 00428233
        ;   XREF to: 00503870 (UNCONDITIONAL_CALL)  ; char * core_motion.cpp_CMotionController_getCurrentStateName_FUN_00503870(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00428238
    PUSH EAX                            ; 0042823b
    CALL crt_string.c__stricmp_FUN_005b8130 ; 0042823c
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 00428241
    TEST EAX,EAX                        ; 00428244
    JNZ 0x0042824f                      ; 00428246
        ;   XREF to: 0042824f (CONDITIONAL_JUMP)  ; LAB_0042824f
    MOV EAX,0xfffffffe                  ; 00428248
    POP EBX                             ; 0042824d
    RET                                 ; 0042824e
    XOR EAX,EAX                         ; 0042824f
        ;   Label: LAB_0042824f
    POP EBX                             ; 00428251
    RET                                 ; 00428252

