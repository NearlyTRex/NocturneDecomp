; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet * this_ptr, CDemonActor * actor)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
;
; XREF[37]:
;   core_actor.cpp_CDemonActor_cylinderGroundCheck_FUN_00408db0 at 00408de9
;   core_actor.cpp_CDemonActor_processFootstepAtOffset_FUN_0040c8f0 at 0040c96b
;   core_actor.cpp_CDemonActor_processFootstep_FUN_0040c830 at 0040c899
;   core_actor.cpp_CDemonActor_processMeleeHit_FUN_0040a210 at 0040aa4d
;   core_boneguy.cpp_FUN_0041bf90 at 0041c452
;   core_charactr.cpp_CCharacter_FUN_00428f40 at 00429083
;   core_charactr.cpp_CCharacter_findSomethingToLookAt_FUN_0042d5a0 at 0042d8fd
;   core_cow.cpp_FUN_00444310 at 00444469
;   core_crossbow.cpp_CCrossbow_FUN_00448f20 at 00449096
;   core_dog.cpp_CZombieDog_process_FUN_0047f140 at 0047f2b0
;   ... and 27 more
;
; Referenced Globals:
;   TerminatedCString s_core_setcolid_cpp_0064637c
;   TerminatedCString s_CDemonSet_ignore_ignore__00646391
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005741b0
        ;   Label: core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
    PUSH EBP                            ; 005741b1
    MOV EBX,dword ptr [ESP + 0xc]       ; 005741b2
    CMP dword ptr [ESP + 0x10],0x0      ; 005741b6
    JZ 0x005741e3                       ; 005741bb
        ;   XREF to: 005741e3 (CONDITIONAL_JUMP)  ; LAB_005741e3
    MOV ECX,dword ptr [EBX + 0x15f694]  ; 005741bd
    TEST ECX,ECX                        ; 005741c3
    JL 0x005741e3                       ; 005741c5
        ;   XREF to: 005741e3 (CONDITIONAL_JUMP)  ; LAB_005741e3
    CMP ECX,0xa                         ; 005741c7
    JGE 0x005741e6                      ; 005741ca
        ;   XREF to: 005741e6 (CONDITIONAL_JUMP)  ; LAB_005741e6
    MOV EAX,dword ptr [EBX + 0x15f694]  ; 005741cc
        ;   Label: LAB_005741cc
    MOV EDX,dword ptr [ESP + 0x10]      ; 005741d2
    MOV dword ptr [EBX + EAX*0x4 + 0x15f69c],EDX ; 005741d6
    INC dword ptr [EBX + 0x15f694]      ; 005741dd
    POP EBP                             ; 005741e3
        ;   Label: LAB_005741e3
    POP EBX                             ; 005741e4
    RET                                 ; 005741e5
    PUSH EDI                            ; 005741e6
        ;   Label: LAB_005741e6
    MOV EDI,0x64637c                    ; 005741e7 | = "..\\core\\setcolid.cpp"
    MOV EBP,0x473                       ; 005741ec
    PUSH 0x646391                       ; 005741f1 | = "CDemonSet::ignore - ignore list is full"
    MOV dword ptr [0x02f0ca48],EDI      ; 005741f6 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBP      ; 005741fc | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00574202
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00574207
    POP EDI                             ; 0057420a
    JMP 0x005741cc                      ; 0057420b
        ;   XREF to: 005741cc (UNCONDITIONAL_JUMP)  ; LAB_005741cc

