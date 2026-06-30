; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_CVector3f_toFixed8_FUN_004103d0(CVector3f *this_ptr,CVector3i *other)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   this_ptr
; CVector3i *      Stack[0x8]:4   other
;
; XREF[1]:
;   core_actor.cpp_CDemonActor_renderBoundingBox_FUN_0040d940 at 0040dc84
;
; Referenced Globals:
;   float FLOAT_006597b0 = 256
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004103d0
        ;   Label: core_actor.cpp_CVector3f_toFixed8_FUN_004103d0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004103d1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004103d5
    FLD float ptr [EAX]                 ; 004103d9
    FMUL float ptr [0x006597b0]         ; 004103db | FLOAT_006597b0
    FISTP dword ptr [EBX]               ; 004103e1
    FLD float ptr [EAX + 0x4]           ; 004103e3
    FMUL float ptr [0x006597b0]         ; 004103e6 | FLOAT_006597b0
    FISTP dword ptr [EBX + 0x4]         ; 004103ec
    FLD float ptr [EAX + 0x8]           ; 004103ef
    FMUL float ptr [0x006597b0]         ; 004103f2 | FLOAT_006597b0
    FISTP dword ptr [EBX + 0x8]         ; 004103f8
    POP EBX                             ; 004103fb
    RET                                 ; 004103fc

