; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SLaserInfo * __cdecl core_fire_cpp_SLaserInfo_ctor_FUN_004b63e0(SLaserInfo *this_ptr)
;
; Parameters:
; SLaserInfo *     Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_emitter.cpp_FUN_0049fdf0 at 0049fe4c
;   core_manpuz.cpp_CMansionPuzzleCircle_updateLaser_FUN_00505bc0 at 00505dbb
;   core_weapon.cpp_FUN_005adf90 at 005ae091
;
; Referenced Globals:
;   undefined4 DAT_005fffac
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004b63e0
        ;   Label: core_fire.cpp_SLaserInfo_ctor_FUN_004b63e0
    MOV dword ptr [EAX],0x3f800000      ; 004b63e4
    MOV dword ptr [EAX + 0x8],0x0       ; 004b63ea
    MOV dword ptr [EAX + 0xc],0xff      ; 004b63f1
    MOV dword ptr [EAX + 0x10],0x0      ; 004b63f8
    MOV dword ptr [EAX + 0x14],0x0      ; 004b63ff
    MOV dword ptr [EAX + 0x18],0x0      ; 004b6406
    MOV dword ptr [EAX + 0x1c],0x0      ; 004b640d
    MOV EDX,dword ptr [0x005fffac]      ; 004b6414 | DAT_005fffac
    MOV dword ptr [EAX + 0x4],EDX       ; 004b641a
    RET                                 ; 004b641d

