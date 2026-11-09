; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CConsole * __cdecl engine_console_cpp_CConsole_ctor_FUN_00441f60(CConsole *this_ptr,int width,int height,int screen_x,int screen_y)
;
; Parameters:
; CConsole *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   width
; int              Stack[0xc]:4   height
; int              Stack[0x10]:4   screen_x
; int              Stack[0x14]:4   screen_y
;
; XREF[1]:
;   engine_console.cpp_staticInit_FUN_00441f30 at 00441f3d
;
; Called Functions:
;   engine_console.cpp_CConsole_reset_FUN_00442190
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00441f60
        ;   Label: engine_console.cpp_CConsole_ctor_FUN_00441f60
    MOV EBX,dword ptr [ESP + 0x8]       ; 00441f61
    MOV EAX,dword ptr [ESP + 0xc]       ; 00441f65
    MOV dword ptr [EBX + 0xfb0],EAX     ; 00441f69
    MOV EAX,dword ptr [ESP + 0x10]      ; 00441f6f
    MOV dword ptr [EBX + 0xfb4],EAX     ; 00441f73
    MOV EAX,dword ptr [ESP + 0x14]      ; 00441f79
    MOV dword ptr [EBX + 0xfb8],EAX     ; 00441f7d
    MOV EAX,dword ptr [ESP + 0x18]      ; 00441f83
    MOV EDX,dword ptr [EBX + 0xfb8]     ; 00441f87
    MOV dword ptr [EBX + 0xfbc],EAX     ; 00441f8d
    CMP EDX,0x1                         ; 00441f93
    JL 0x00441fc5                       ; 00441f96
        ;   XREF to: 00441fc5 (CONDITIONAL_JUMP)  ; LAB_00441fc5
    CMP dword ptr [EBX + 0xfbc],0x1     ; 00441f98
        ;   Label: LAB_00441f98
    JGE 0x00441fab                      ; 00441f9f
        ;   XREF to: 00441fab (CONDITIONAL_JUMP)  ; LAB_00441fab
    MOV dword ptr [EBX + 0xfbc],0x1     ; 00441fa1
    PUSH EBX                            ; 00441fab
        ;   Label: LAB_00441fab
    CALL engine_console.cpp_CConsole_reset_FUN_00442190 ; 00441fac
        ;   XREF to: 00442190 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_reset_FUN_00442190(CConsole * this_ptr)
    ADD ESP,0x4                         ; 00441fb1
    MOV dword ptr [EBX],0x0             ; 00441fb4
    MOV EAX,EBX                         ; 00441fba
    MOV dword ptr [EBX + 0x4],0x0       ; 00441fbc
    POP EBX                             ; 00441fc3
    RET                                 ; 00441fc4
    MOV dword ptr [EBX + 0xfb8],0x1     ; 00441fc5
        ;   Label: LAB_00441fc5
    JMP 0x00441f98                      ; 00441fcf
        ;   XREF to: 00441f98 (UNCONDITIONAL_JUMP)  ; LAB_00441f98

