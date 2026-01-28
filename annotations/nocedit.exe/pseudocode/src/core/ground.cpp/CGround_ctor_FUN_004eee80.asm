; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_ground_cpp_CGround_ctor_FUN_004eee80(CGround *this_ptr,int width,int height)
;
; Parameters:
; CGround *        Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   width
; int              Stack[0xc]:4   height
;
; XREF[1]:
;   core_ground.cpp_staticInit_FUN_004eeb90 at 004eeb9f
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004eee80
        ;   Label: core_ground.cpp_CGround_ctor_FUN_004eee80
    MOV EAX,dword ptr [ESP + 0x8]       ; 004eee81
    MOV ECX,dword ptr [ESP + 0x10]      ; 004eee85
    MOV dword ptr [EAX + 0x10],0x1e     ; 004eee89
    MOV EDX,dword ptr [ESP + 0xc]       ; 004eee90
    MOV dword ptr [EAX + 0x14],0x1e     ; 004eee94
    MOV dword ptr [EAX],EDX             ; 004eee9b
    MOV EBX,dword ptr [EAX + 0x14]      ; 004eee9d
    MOV EDX,dword ptr [EAX + 0x10]      ; 004eeea0
    IMUL EDX,EBX                        ; 004eeea3
    MOV dword ptr [EAX + 0x24],0x0      ; 004eeea6
    MOV dword ptr [EAX + 0x28],0x0      ; 004eeead
    MOV dword ptr [EAX + 0x1c],0x8      ; 004eeeb4
    MOV dword ptr [EAX + 0x20],0x1      ; 004eeebb
    MOV dword ptr [EAX + 0x4],ECX       ; 004eeec2
    DEC ECX                             ; 004eeec5
    MOV dword ptr [EAX + 0x18],EDX      ; 004eeec6
    MOV EDX,dword ptr [ESP + 0xc]       ; 004eeec9
    MOV dword ptr [EAX + 0xc],ECX       ; 004eeecd
    DEC EDX                             ; 004eeed0
    MOV dword ptr [EAX + 0x8],EDX       ; 004eeed1
    POP EBX                             ; 004eeed4
    RET                                 ; 004eeed5

