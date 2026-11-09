; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonCube * __cdecl core_dcube_cpp_CDemonCube_ctor_FUN_004464b0(CDemonCube *this_ptr)
;
; Parameters:
; CDemonCube *     Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004464b0
        ;   Label: core_dcube.cpp_CDemonCube_ctor_FUN_004464b0
    MOV dword ptr [EAX + 0x24],0x0      ; 004464b4
    MOV dword ptr [EAX + 0x28],0x0      ; 004464bb
    MOV dword ptr [EAX + 0x2c],0x0      ; 004464c2
    MOV dword ptr [EAX + 0x30],0x0      ; 004464c9
    MOV dword ptr [EAX],0x0             ; 004464d0
    MOV dword ptr [EAX + 0x4],0x0       ; 004464d6
    MOV dword ptr [EAX + 0x20],0x0      ; 004464dd
    RET                                 ; 004464e4

