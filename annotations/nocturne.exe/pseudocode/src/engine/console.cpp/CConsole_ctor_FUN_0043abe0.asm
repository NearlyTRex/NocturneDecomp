; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CConsole * __cdecl engine_console_cpp_CConsole_ctor_FUN_0043abe0(CConsole *this_ptr,int width,int height,int screen_x,int screen_y)
;
; Parameters:
; CConsole *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   width
; int              Stack[0xc]:4   height
; int              Stack[0x10]:4   screen_x
; int              Stack[0x14]:4   screen_y
;
; XREF[1]:
;   core_console.cpp_staticInit_FUN_0043abb0 at 0043abbd
;
; Called Functions:
;   engine_console.cpp_CConsole_reset_FUN_0043ae00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043abe0
        ;   Label: engine_console.cpp_CConsole_ctor_FUN_0043abe0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0043abe1
    MOV EAX,dword ptr [ESP + 0xc]       ; 0043abe5
    MOV dword ptr [EBX + 0xfac],EAX     ; 0043abe9
    MOV EAX,dword ptr [ESP + 0x10]      ; 0043abef
    MOV dword ptr [EBX + 0xfb0],EAX     ; 0043abf3
    MOV EAX,dword ptr [ESP + 0x14]      ; 0043abf9
    MOV dword ptr [EBX + 0xfb4],EAX     ; 0043abfd
    MOV EAX,dword ptr [ESP + 0x18]      ; 0043ac03
    MOV EDX,dword ptr [EBX + 0xfb4]     ; 0043ac07
    MOV dword ptr [EBX + 0xfb8],EAX     ; 0043ac0d
    CMP EDX,0x1                         ; 0043ac13
    JL 0x0043ac3e                       ; 0043ac16
        ;   XREF to: 0043ac3e (CONDITIONAL_JUMP)  ; LAB_0043ac3e
    CMP dword ptr [EBX + 0xfb8],0x1     ; 0043ac18
        ;   Label: LAB_0043ac18
    JGE 0x0043ac2b                      ; 0043ac1f
        ;   XREF to: 0043ac2b (CONDITIONAL_JUMP)  ; LAB_0043ac2b
    MOV dword ptr [EBX + 0xfb8],0x1     ; 0043ac21
    PUSH EBX                            ; 0043ac2b
        ;   Label: LAB_0043ac2b
    CALL engine_console.cpp_CConsole_reset_FUN_0043ae00 ; 0043ac2c
        ;   XREF to: 0043ae00 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_reset_FUN_0043ae00(CConsole * this_ptr)
    ADD ESP,0x4                         ; 0043ac31
    MOV EAX,EBX                         ; 0043ac34
    MOV dword ptr [EBX],0x0             ; 0043ac36
    POP EBX                             ; 0043ac3c
    RET                                 ; 0043ac3d
    MOV dword ptr [EBX + 0xfb4],0x1     ; 0043ac3e
        ;   Label: LAB_0043ac3e
    JMP 0x0043ac18                      ; 0043ac48
        ;   XREF to: 0043ac18 (UNCONDITIONAL_JUMP)  ; LAB_0043ac18

