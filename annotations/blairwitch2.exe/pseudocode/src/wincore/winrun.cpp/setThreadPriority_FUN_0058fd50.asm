; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl wincore_winrun_cpp_setThreadPriority_FUN_0058fd50(HANDLE hThread,int priority_level)
;
; Parameters:
; HANDLE           Stack[0x4]:4   hThread
; int              Stack[0x8]:4   priority_level
;
; XREF[1]:
;   sound_sndmain.cpp_startSoundThread_FUN_005531d0 at 0055322a
;
; Referenced Globals:
;   void* PTR_SetThreadPriority_005c863c = 001c91c2
;
; Called Functions:
;   SetThreadPriority
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 0058fd50
        ;   Label: wincore_winrun.cpp_setThreadPriority_FUN_0058fd50
    CMP EAX,0x2                         ; 0058fd54
    JNC 0x0058fd82                      ; 0058fd57
        ;   XREF to: 0058fd82 (CONDITIONAL_JUMP)  ; LAB_0058fd82
    TEST EAX,EAX                        ; 0058fd59
    JNZ 0x0058fd70                      ; 0058fd5b
        ;   XREF to: 0058fd70 (CONDITIONAL_JUMP)  ; LAB_0058fd70
    MOV EAX,0xffffffff                  ; 0058fd5d
    PUSH EAX                            ; 0058fd62
        ;   Label: LAB_0058fd62
    MOV EDX,dword ptr [ESP + 0x8]       ; 0058fd63
    PUSH EDX                            ; 0058fd67
    CALL dword ptr CS:[0x5c863c]        ; 0058fd68 | PTR_SetThreadPriority_005c863c
    RET                                 ; 0058fd6f
    XOR EAX,EAX                         ; 0058fd70
        ;   Label: LAB_0058fd70
    JMP 0x0058fd62                      ; 0058fd72
        ;   XREF to: 0058fd62 (UNCONDITIONAL_JUMP)  ; LAB_0058fd62
    MOV EAX,0x1                         ; 0058fd74
        ;   Label: LAB_0058fd74
    JMP 0x0058fd62                      ; 0058fd79
        ;   XREF to: 0058fd62 (UNCONDITIONAL_JUMP)  ; LAB_0058fd62
    MOV EAX,0x2                         ; 0058fd7b
        ;   Label: LAB_0058fd7b
    JMP 0x0058fd62                      ; 0058fd80
        ;   XREF to: 0058fd62 (UNCONDITIONAL_JUMP)  ; LAB_0058fd62
    JBE 0x0058fd74                      ; 0058fd82
        ;   XREF to: 0058fd74 (CONDITIONAL_JUMP)  ; LAB_0058fd74
        ;   Label: LAB_0058fd82
    CMP EAX,0x3                         ; 0058fd84
    JZ 0x0058fd7b                       ; 0058fd87
        ;   XREF to: 0058fd7b (CONDITIONAL_JUMP)  ; LAB_0058fd7b
    XOR EAX,EAX                         ; 0058fd89
    JMP 0x0058fd62                      ; 0058fd8b
        ;   XREF to: 0058fd62 (UNCONDITIONAL_JUMP)  ; LAB_0058fd62

