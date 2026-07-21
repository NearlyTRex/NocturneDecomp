; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_winrun_cpp_setThreadPriority_FUN_00559c80(HANDLE param_1,uint param_2)
;
;
; XREF[1]:
;   sound_sndmain.cpp_startSoundThread_FUN_005286d0 at 0052873c
;
; Referenced Globals:
;   void* PTR_SetThreadPriority_005755b0 = 00176034
;
; Called Functions:
;   SetThreadPriority
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 00559c80
        ;   Label: wincore_winrun.cpp_setThreadPriority_FUN_00559c80
    CMP EAX,0x2                         ; 00559c84
    JNC 0x00559cb2                      ; 00559c87
        ;   XREF to: 00559cb2 (CONDITIONAL_JUMP)  ; LAB_00559cb2
    TEST EAX,EAX                        ; 00559c89
    JNZ 0x00559ca0                      ; 00559c8b
        ;   XREF to: 00559ca0 (CONDITIONAL_JUMP)  ; LAB_00559ca0
    MOV EAX,0xffffffff                  ; 00559c8d
    PUSH EAX                            ; 00559c92
        ;   Label: LAB_00559c92
    MOV EDX,dword ptr [ESP + 0x8]       ; 00559c93
    PUSH EDX                            ; 00559c97
    CALL dword ptr CS:[0x5755b0]        ; 00559c98 | PTR_SetThreadPriority_005755b0
    RET                                 ; 00559c9f
    XOR EAX,EAX                         ; 00559ca0
        ;   Label: LAB_00559ca0
    JMP 0x00559c92                      ; 00559ca2
        ;   XREF to: 00559c92 (UNCONDITIONAL_JUMP)  ; LAB_00559c92
    MOV EAX,0x1                         ; 00559ca4
        ;   Label: LAB_00559ca4
    JMP 0x00559c92                      ; 00559ca9
        ;   XREF to: 00559c92 (UNCONDITIONAL_JUMP)  ; LAB_00559c92
    MOV EAX,0x2                         ; 00559cab
        ;   Label: LAB_00559cab
    JMP 0x00559c92                      ; 00559cb0
        ;   XREF to: 00559c92 (UNCONDITIONAL_JUMP)  ; LAB_00559c92
    JBE 0x00559ca4                      ; 00559cb2
        ;   XREF to: 00559ca4 (CONDITIONAL_JUMP)  ; LAB_00559ca4
        ;   Label: LAB_00559cb2
    CMP EAX,0x3                         ; 00559cb4
    JZ 0x00559cab                       ; 00559cb7
        ;   XREF to: 00559cab (CONDITIONAL_JUMP)  ; LAB_00559cab
    XOR EAX,EAX                         ; 00559cb9
    JMP 0x00559c92                      ; 00559cbb
        ;   XREF to: 00559c92 (UNCONDITIONAL_JUMP)  ; LAB_00559c92

