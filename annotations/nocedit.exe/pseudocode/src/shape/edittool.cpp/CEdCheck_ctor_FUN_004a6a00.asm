; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CEdCheck * __cdecl shape_edittool_cpp_CEdCheck_ctor_FUN_004a6a00(CEdCheck *this_ptr)
;
; Parameters:
; CEdCheck *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_msnedit.cpp_staticInit_FUN_00535c30 at 00535c42
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004a6a00
        ;   Label: shape_edittool.cpp_CEdCheck_ctor_FUN_004a6a00
    MOV dword ptr [EAX + 0x4],0x0       ; 004a6a04
    MOV dword ptr [EAX + 0x8],0x0       ; 004a6a0b
    MOV byte ptr [EAX + 0x24],0x0       ; 004a6a12
    MOV dword ptr [EAX + 0x1c],0x0      ; 004a6a16
    MOV dword ptr [EAX + 0x20],0x0      ; 004a6a1d
    MOV dword ptr [EAX + 0xc],0x0       ; 004a6a24
    MOV dword ptr [EAX],0x0             ; 004a6a2b
    MOV EDX,dword ptr [EAX + 0x1c]      ; 004a6a31
    MOV dword ptr [EAX + 0x18],EDX      ; 004a6a34
    MOV dword ptr [EAX + 0x14],EDX      ; 004a6a37
    MOV dword ptr [EAX + 0x10],EDX      ; 004a6a3a
    RET                                 ; 004a6a3d

