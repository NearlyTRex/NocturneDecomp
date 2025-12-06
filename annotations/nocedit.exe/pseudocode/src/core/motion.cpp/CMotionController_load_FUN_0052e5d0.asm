; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_motion.cpp_CMotionController_load_FUN_0052e5d0(CMotionController * this_ptr, FILE * file_handle)
;
; Parameters:
; CMotionController * Stack[0x4]:4   this_ptr
; FILE *           Stack[0x8]:4   file_handle
;
; XREF[1]:
;   core_actor.cpp_serializeMotionState_FUN_0040b9f0 at 0040ba29
;
; Referenced Globals:
;   TerminatedCString s_anon_0063ab2f
;   TerminatedCString s_d_f_0063ab31
;   TerminatedCString s_f_0063ab37
;   TerminatedCString s_core_motion_cpp_0063ab44
;   TerminatedCString s_CMotionController_load_e_0063ab57
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_fgetc_FUN_005fe840
;   crt_stdio.c_fscanf_FUN_005fe7c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052e5d0
        ;   Label: core_motion.cpp_CMotionController_load_FUN_0052e5d0
    PUSH EDI                            ; 0052e5d1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0052e5d2
    MOV EDI,dword ptr [ESP + 0x10]      ; 0052e5d6
    PUSH ESI                            ; 0052e5da
    PUSH 0x63ab2f                       ; 0052e5db | = " " | s_anon_0063ab2f =
    PUSH EDI                            ; 0052e5e0
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0052e5e1 | int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0052e5e6
    LEA ESI,[EBX + 0x8]                 ; 0052e5e9
    PUSH ESI                            ; 0052e5ec
    LEA EAX,[EBX + 0x4]                 ; 0052e5ed
    PUSH EAX                            ; 0052e5f0
    PUSH 0x63ab31                       ; 0052e5f1 | = "%d,%f" | s_d_f_0063ab31 = %d,%f
    MOV byte ptr [EBX + 0x30],0x0       ; 0052e5f6
    PUSH EDI                            ; 0052e5fa
    MOV dword ptr [EBX + 0x4],0xffffffff ; 0052e5fb
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0052e602 | int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0052e607
    CMP EAX,0x2                         ; 0052e60a
    JNZ 0x0052e627                      ; 0052e60d | LAB_0052e627
        ;   XREF to: 0052e627 (CONDITIONAL_JUMP)
    MOV EBX,EDI                         ; 0052e60f
        ;   Label: LAB_0052e60f
    POP ESI                             ; 0052e611
    PUSH EBX                            ; 0052e612
        ;   Label: LAB_0052e612
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0052e613 | int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0052e618
    TEST EAX,EAX                        ; 0052e61b
    JL 0x0052e624                       ; 0052e61d | LAB_0052e624
        ;   XREF to: 0052e624 (CONDITIONAL_JUMP)
    CMP EAX,0xa                         ; 0052e61f
    JNZ 0x0052e612                      ; 0052e622 | LAB_0052e612
        ;   XREF to: 0052e612 (CONDITIONAL_JUMP)
    POP EDI                             ; 0052e624
        ;   Label: LAB_0052e624
    POP EBX                             ; 0052e625
    RET                                 ; 0052e626
    PUSH ESI                            ; 0052e627
        ;   Label: LAB_0052e627
    ADD EBX,0x30                        ; 0052e628
    PUSH EBX                            ; 0052e62b
    PUSH 0x63ab37                       ; 0052e62c | = "\"%[^\"]\" , %f" | s_f_0063ab37 = "%[^"]" , %f
    PUSH EDI                            ; 0052e631
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0052e632 | int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0052e637
    CMP EAX,0x2                         ; 0052e63a
    JZ 0x0052e60f                       ; 0052e63d | LAB_0052e60f
        ;   XREF to: 0052e60f (CONDITIONAL_JUMP)
    MOV EDX,0x63ab44                    ; 0052e63f | = "..\\core\\motion.cpp" | s_core_motion_cpp_0063ab44 = ..\core\motion.cpp
    MOV ECX,0x51e                       ; 0052e644
    PUSH 0x63ab57                       ; 0052e649 | = "CMotionController::load - error parsi..." | s_CMotionController_load_e_0063ab57 = CMotionController::load - error parsing file
    MOV dword ptr [0x02f0ca48],EDX      ; 0052e64e | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 0052e654 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0052e65a | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0052e65f
    JMP 0x0052e60f                      ; 0052e662 | LAB_0052e60f
        ;   XREF to: 0052e60f (UNCONDITIONAL_JUMP)

