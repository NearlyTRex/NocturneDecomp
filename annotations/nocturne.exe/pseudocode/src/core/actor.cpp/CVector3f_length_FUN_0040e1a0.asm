; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_actor_cpp_CVector3f_length_FUN_0040e1a0(CVector3f *this_ptr)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 0040e1a0
        ;   Label: core_actor.cpp_CVector3f_length_FUN_0040e1a0
    MOV EAX,dword ptr [ESP + 0x8]       ; 0040e1a3
    FLD float ptr [EAX + 0x4]           ; 0040e1a7
    FMUL ST0                            ; 0040e1aa
    FLD float ptr [EAX]                 ; 0040e1ac
    FMUL ST0                            ; 0040e1ae
    FADDP                               ; 0040e1b0
    FLD float ptr [EAX + 0x8]           ; 0040e1b2
    FMUL ST0                            ; 0040e1b5
    FADDP                               ; 0040e1b7
    FSQRT                               ; 0040e1b9
    FSTP float ptr [ESP]                ; 0040e1bb
    MOV EAX,dword ptr [ESP]             ; 0040e1be
    ADD ESP,0x4                         ; 0040e1c1
    RET                                 ; 0040e1c4

