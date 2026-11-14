; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_CVector3f_toFixed8_FUN_0040d3c0(CVector3f *this_ptr,CVector3i *other)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   this_ptr
; CVector3i *      Stack[0x8]:4   other
;
; Referenced Globals:
;   undefined4 DAT_005f2160
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040d3c0
        ;   Label: core_actor.cpp_CVector3f_toFixed8_FUN_0040d3c0
    MOV EAX,dword ptr [ESP + 0x8]       ; 0040d3c1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0040d3c5
    FLD float ptr [EAX]                 ; 0040d3c9
    FMUL float ptr [0x005f2160]         ; 0040d3cb | DAT_005f2160
    FISTP dword ptr [EBX]               ; 0040d3d1
    FLD float ptr [EAX + 0x4]           ; 0040d3d3
    FMUL float ptr [0x005f2160]         ; 0040d3d6 | DAT_005f2160
    FISTP dword ptr [EBX + 0x4]         ; 0040d3dc
    FLD float ptr [EAX + 0x8]           ; 0040d3df
    FMUL float ptr [0x005f2160]         ; 0040d3e2 | DAT_005f2160
    FISTP dword ptr [EBX + 0x8]         ; 0040d3e8
    POP EBX                             ; 0040d3eb
    RET                                 ; 0040d3ec

