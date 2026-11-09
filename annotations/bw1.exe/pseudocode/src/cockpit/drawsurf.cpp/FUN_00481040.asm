; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl cockpit_drawsurf_cpp_FUN_00481040(CDrawSurface *this_ptr)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_script.cpp_FUN_00543c00 at 00543c77
;
; Referenced Globals:
;   undefined4 DAT_01bc11ec
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x01bc11ec]      ; 00481040 | DAT_01bc11ec
        ;   Label: cockpit_drawsurf.cpp_FUN_00481040
    TEST EDX,EDX                        ; 00481046
    JZ 0x00481051                       ; 00481048
        ;   XREF to: 00481051 (CONDITIONAL_JUMP)  ; LAB_00481051
    MOV EAX,dword ptr [EDX + 0x41f0]    ; 0048104a
    RET                                 ; 00481050
    MOV EAX,0xb                         ; 00481051
        ;   Label: LAB_00481051
    RET                                 ; 00481056

