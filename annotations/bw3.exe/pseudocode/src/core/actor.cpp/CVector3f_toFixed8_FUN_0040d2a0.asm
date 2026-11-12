; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_CVector3f_toFixed8_FUN_0040d2a0(CVector3f *this_ptr,CVector3i *other)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   this_ptr
; CVector3i *      Stack[0x8]:4   other
;
; Referenced Globals:
;   undefined4 DAT_005dafd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040d2a0
        ;   Label: core_actor.cpp_CVector3f_toFixed8_FUN_0040d2a0
    MOV EAX,dword ptr [ESP + 0x8]       ; 0040d2a1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0040d2a5
    FLD float ptr [EAX]                 ; 0040d2a9
    FMUL float ptr [0x005dafd0]         ; 0040d2ab | DAT_005dafd0
    FISTP dword ptr [EBX]               ; 0040d2b1
    FLD float ptr [EAX + 0x4]           ; 0040d2b3
    FMUL float ptr [0x005dafd0]         ; 0040d2b6 | DAT_005dafd0
    FISTP dword ptr [EBX + 0x4]         ; 0040d2bc
    FLD float ptr [EAX + 0x8]           ; 0040d2bf
    FMUL float ptr [0x005dafd0]         ; 0040d2c2 | DAT_005dafd0
    FISTP dword ptr [EBX + 0x8]         ; 0040d2c8
    POP EBX                             ; 0040d2cb
    RET                                 ; 0040d2cc

