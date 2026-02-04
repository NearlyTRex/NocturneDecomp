; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl wincore_winrun_cpp_setThreadPriority_FUN_005f40a0(HANDLE hThread,int priority_level)
;
; Parameters:
; HANDLE           Stack[0x4]:4   hThread
; int              Stack[0x8]:4   priority_level
;
; XREF[1]:
;   sound_sndmain.cpp_startSoundThread_FUN_005abc00 at 005abc6c
;
; Referenced Globals:
;   SET_THREAD_PRIORITY_FUNC* g_SetThreadPriorityFunc = 002121f6
;
; Called Functions:
;   SetThreadPriority
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 005f40a0
        ;   Label: wincore_winrun.cpp_setThreadPriority_FUN_005f40a0
    CMP EAX,0x2                         ; 005f40a4
    JNC 0x005f40d2                      ; 005f40a7
        ;   XREF to: 005f40d2 (CONDITIONAL_JUMP)  ; LAB_005f40d2
    TEST EAX,EAX                        ; 005f40a9
    JNZ 0x005f40c0                      ; 005f40ab
        ;   XREF to: 005f40c0 (CONDITIONAL_JUMP)  ; LAB_005f40c0
    MOV EAX,0xffffffff                  ; 005f40ad
    PUSH EAX                            ; 005f40b2
        ;   Label: LAB_005f40b2
    MOV EDX,dword ptr [ESP + 0x8]       ; 005f40b3
    PUSH EDX                            ; 005f40b7
    CALL dword ptr CS:[0x61163c]        ; 005f40b8 | g_SetThreadPriorityFunc
    RET                                 ; 005f40bf
    XOR EAX,EAX                         ; 005f40c0
        ;   Label: LAB_005f40c0
    JMP 0x005f40b2                      ; 005f40c2
        ;   XREF to: 005f40b2 (UNCONDITIONAL_JUMP)  ; LAB_005f40b2
    MOV EAX,0x1                         ; 005f40c4
        ;   Label: LAB_005f40c4
    JMP 0x005f40b2                      ; 005f40c9
        ;   XREF to: 005f40b2 (UNCONDITIONAL_JUMP)  ; LAB_005f40b2
    MOV EAX,0x2                         ; 005f40cb
        ;   Label: LAB_005f40cb
    JMP 0x005f40b2                      ; 005f40d0
        ;   XREF to: 005f40b2 (UNCONDITIONAL_JUMP)  ; LAB_005f40b2
    JBE 0x005f40c4                      ; 005f40d2
        ;   XREF to: 005f40c4 (CONDITIONAL_JUMP)  ; LAB_005f40c4
        ;   Label: LAB_005f40d2
    CMP EAX,0x3                         ; 005f40d4
    JZ 0x005f40cb                       ; 005f40d7
        ;   XREF to: 005f40cb (CONDITIONAL_JUMP)  ; LAB_005f40cb
    XOR EAX,EAX                         ; 005f40d9
    JMP 0x005f40b2                      ; 005f40db
        ;   XREF to: 005f40b2 (UNCONDITIONAL_JUMP)  ; LAB_005f40b2

