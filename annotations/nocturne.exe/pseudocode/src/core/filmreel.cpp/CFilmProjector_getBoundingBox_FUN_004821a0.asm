; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_filmreel_cpp_CFilmProjector_getBoundingBox_FUN_004821a0(CFilmProjector *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CFilmProjector * Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 004821a0
        ;   Label: core_filmreel.cpp_CFilmProjector_getBoundingBox_FUN_004821a0
    MOV dword ptr [EAX + 0x4],0x0       ; 004821a4
    MOV dword ptr [EAX + 0x8],0xbdcccccd ; 004821ab
    MOV dword ptr [EAX + 0xc],0x3f800000 ; 004821b2
    MOV dword ptr [EAX + 0x10],0x40400000 ; 004821b9
    MOV dword ptr [EAX + 0x14],0x3dcccccd ; 004821c0
    MOV dword ptr [EAX],0xbf800000      ; 004821c7
    RET                                 ; 004821cd

