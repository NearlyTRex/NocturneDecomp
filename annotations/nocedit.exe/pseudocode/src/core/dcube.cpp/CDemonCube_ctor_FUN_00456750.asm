; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonCube * __cdecl core_dcube_cpp_CDemonCube_ctor_FUN_00456750(CDemonCube *this_ptr)
;
; Parameters:
; CDemonCube *     Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00456750
        ;   Label: core_dcube.cpp_CDemonCube_ctor_FUN_00456750
    MOV dword ptr [EAX + 0x24],0x0      ; 00456754
    MOV dword ptr [EAX + 0x28],0x0      ; 0045675b
    MOV dword ptr [EAX + 0x2c],0x0      ; 00456762
    MOV dword ptr [EAX + 0x30],0x0      ; 00456769
    MOV dword ptr [EAX],0x0             ; 00456770
    MOV dword ptr [EAX + 0x4],0x0       ; 00456776
    MOV dword ptr [EAX + 0x20],0x0      ; 0045677d
    RET                                 ; 00456784

