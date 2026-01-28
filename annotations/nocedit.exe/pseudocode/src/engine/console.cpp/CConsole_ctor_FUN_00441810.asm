; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CConsole * __cdecl engine_console_cpp_CConsole_ctor_FUN_00441810 (CConsole *this_ptr,int width,int height,int screen_x,int screen_y)
;
; Parameters:
; CConsole *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   width
; int              Stack[0xc]:4   height
; int              Stack[0x10]:4   screen_x
; int              Stack[0x14]:4   screen_y
;
; XREF[1]:
;   engine_console.cpp_staticInit_FUN_004417e0 at 004417ed
;
; Called Functions:
;   engine_console.cpp_CConsole_reset_FUN_00441a40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00441810
        ;   Label: engine_console.cpp_CConsole_ctor_FUN_00441810
    MOV EBX,dword ptr [ESP + 0x8]       ; 00441811
    MOV EAX,dword ptr [ESP + 0xc]       ; 00441815
    MOV dword ptr [EBX + 0xfac],EAX     ; 00441819
    MOV EAX,dword ptr [ESP + 0x10]      ; 0044181f
    MOV dword ptr [EBX + 0xfb0],EAX     ; 00441823
    MOV EAX,dword ptr [ESP + 0x14]      ; 00441829
    MOV dword ptr [EBX + 0xfb4],EAX     ; 0044182d
    MOV EAX,dword ptr [ESP + 0x18]      ; 00441833
    MOV EDX,dword ptr [EBX + 0xfb4]     ; 00441837
    MOV dword ptr [EBX + 0xfb8],EAX     ; 0044183d
    CMP EDX,0x1                         ; 00441843
    JL 0x0044186e                       ; 00441846
        ;   XREF to: 0044186e (CONDITIONAL_JUMP)  ; LAB_0044186e
    CMP dword ptr [EBX + 0xfb8],0x1     ; 00441848
        ;   Label: LAB_00441848
    JGE 0x0044185b                      ; 0044184f
        ;   XREF to: 0044185b (CONDITIONAL_JUMP)  ; LAB_0044185b
    MOV dword ptr [EBX + 0xfb8],0x1     ; 00441851
    PUSH EBX                            ; 0044185b
        ;   Label: LAB_0044185b
    CALL engine_console.cpp_CConsole_reset_FUN_00441a40 ; 0044185c
        ;   XREF to: 00441a40 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_reset_FUN_00441a40(CConsole * this_ptr)
    ADD ESP,0x4                         ; 00441861
    MOV EAX,EBX                         ; 00441864
    MOV dword ptr [EBX],0x0             ; 00441866
    POP EBX                             ; 0044186c
    RET                                 ; 0044186d
    MOV dword ptr [EBX + 0xfb4],0x1     ; 0044186e
        ;   Label: LAB_0044186e
    JMP 0x00441848                      ; 00441878
        ;   XREF to: 00441848 (UNCONDITIONAL_JUMP)  ; LAB_00441848

