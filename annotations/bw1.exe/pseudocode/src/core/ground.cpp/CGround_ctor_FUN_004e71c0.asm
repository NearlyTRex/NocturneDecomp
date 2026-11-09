; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CGround * __cdecl core_ground_cpp_CGround_ctor_FUN_004e71c0(CGround *this_ptr,int width,int height)
;
; Parameters:
; CGround *        Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   width
; int              Stack[0xc]:4   height
;
; XREF[1]:
;   core_ground.cpp_staticInit_FUN_004e6ec0 at 004e6ecf
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e71c0
        ;   Label: core_ground.cpp_CGround_ctor_FUN_004e71c0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004e71c1
    MOV ECX,dword ptr [ESP + 0x10]      ; 004e71c5
    MOV dword ptr [EAX + 0x10],0x1e     ; 004e71c9
    MOV EDX,dword ptr [ESP + 0xc]       ; 004e71d0
    MOV dword ptr [EAX + 0x14],0x1e     ; 004e71d4
    MOV dword ptr [EAX],EDX             ; 004e71db
    MOV EBX,dword ptr [EAX + 0x14]      ; 004e71dd
    MOV EDX,dword ptr [EAX + 0x10]      ; 004e71e0
    IMUL EDX,EBX                        ; 004e71e3
    MOV dword ptr [EAX + 0x24],0x0      ; 004e71e6
    MOV dword ptr [EAX + 0x28],0x0      ; 004e71ed
    MOV dword ptr [EAX + 0x1c],0x8      ; 004e71f4
    MOV dword ptr [EAX + 0x20],0x1      ; 004e71fb
    MOV dword ptr [EAX + 0x4],ECX       ; 004e7202
    DEC ECX                             ; 004e7205
    MOV dword ptr [EAX + 0x18],EDX      ; 004e7206
    MOV EDX,dword ptr [ESP + 0xc]       ; 004e7209
    MOV dword ptr [EAX + 0xc],ECX       ; 004e720d
    DEC EDX                             ; 004e7210
    MOV dword ptr [EAX + 0x8],EDX       ; 004e7211
    POP EBX                             ; 004e7214
    RET                                 ; 004e7215

