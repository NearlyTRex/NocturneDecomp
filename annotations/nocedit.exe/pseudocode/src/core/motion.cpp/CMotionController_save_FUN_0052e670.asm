; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_motion_cpp_CMotionController_save_FUN_0052e670(CMotionController *this_ptr,_FILE *file_handle,char *indent_prefix)
;
; Parameters:
; CMotionController * Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; char *           Stack[0xc]:4   indent_prefix
; Local Variables:
; undefined8       Stack[-0x14]:8  local_14
;
; XREF[1]:
;   core_actor.cpp_archiveMotionState_FUN_0040b9f0 at 0040baac
;
; Referenced Globals:
;   TerminatedCString s_core_motion_cpp_0063ab84
;   TerminatedCString s_Tried_to_save_motion_con_0063ab97
;   TerminatedCString s_s_s_g_current_motion_nam_0063abe2
;   TerminatedCString s_s_s_g_current_motion_nam_0063ac14
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
;   crt_stdio.c_fprintf_FUN_005fe6d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052e670
        ;   Label: core_motion.cpp_CMotionController_save_FUN_0052e670
    PUSH EDI                            ; 0052e671
    PUSH EBP                            ; 0052e672
    MOV EBP,ESP                         ; 0052e673
    MOV EBX,dword ptr [EBP + 0x10]      ; 0052e675
    CMP byte ptr [EBX + 0x30],0x0       ; 0052e678
    JNZ 0x0052e6d1                      ; 0052e67c
        ;   XREF to: 0052e6d1 (CONDITIONAL_JUMP)  ; LAB_0052e6d1
    CMP dword ptr [EBX],0x0             ; 0052e67e
    JNZ 0x0052e6a5                      ; 0052e681
        ;   XREF to: 0052e6a5 (CONDITIONAL_JUMP)  ; LAB_0052e6a5
    MOV EDI,0x63ab84                    ; 0052e683 | = "..\\core\\motion.cpp"
    MOV EAX,0x536                       ; 0052e688
    PUSH 0x63ab97                       ; 0052e68d | = "Tried to save motion controller state..."
    MOV dword ptr [0x02f0ca48],EDI      ; 0052e692 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 0052e698 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0052e69d
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0052e6a2
    SUB ESP,0x8                         ; 0052e6a5
        ;   Label: LAB_0052e6a5
    FLD float ptr [EBX + 0x8]           ; 0052e6a8
    FSTP double ptr [ESP]               ; 0052e6ab
    PUSH EBX                            ; 0052e6ae
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 0052e6af
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0052e6b4
    PUSH EAX                            ; 0052e6b7
    MOV EDX,dword ptr [EBP + 0x18]      ; 0052e6b8
    PUSH EDX                            ; 0052e6bb
    PUSH 0x63abe2                       ; 0052e6bc | = "%s\"%s\",%g // current motion name, c..."
    MOV ECX,dword ptr [EBP + 0x14]      ; 0052e6c1
    PUSH ECX                            ; 0052e6c4
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0052e6c5
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x18                        ; 0052e6ca
    POP EBP                             ; 0052e6cd
    POP EDI                             ; 0052e6ce
    POP EBX                             ; 0052e6cf
    RET                                 ; 0052e6d0
    SUB ESP,0x8                         ; 0052e6d1
        ;   Label: LAB_0052e6d1
    FLD float ptr [EBX + 0x8]           ; 0052e6d4
    ADD EBX,0x30                        ; 0052e6d7
    FSTP double ptr [ESP]               ; 0052e6da
    PUSH EBX                            ; 0052e6dd
    MOV EDX,dword ptr [EBP + 0x18]      ; 0052e6de
    PUSH EDX                            ; 0052e6e1
    PUSH 0x63ac14                       ; 0052e6e2 | = "%s\"%s\",%g // current motion name, c..."
    MOV ECX,dword ptr [EBP + 0x14]      ; 0052e6e7
    PUSH ECX                            ; 0052e6ea
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0052e6eb
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x18                        ; 0052e6f0
    POP EBP                             ; 0052e6f3
    POP EDI                             ; 0052e6f4
    POP EBX                             ; 0052e6f5
    RET                                 ; 0052e6f6

