; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_CVector3f_toFixed8_FUN_0040e1f0(CVector3f *this_ptr,CVector3i *other)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   this_ptr
; CVector3i *      Stack[0x8]:4   other
;
; Referenced Globals:
;   float FLOAT_005992b0 = 256
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e1f0
        ;   Label: core_actor.cpp_CVector3f_toFixed8_FUN_0040e1f0
    MOV EAX,dword ptr [ESP + 0x8]       ; 0040e1f1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0040e1f5
    FLD float ptr [EAX]                 ; 0040e1f9
    FMUL float ptr [0x005992b0]         ; 0040e1fb | FLOAT_005992b0
    FISTP dword ptr [EBX]               ; 0040e201
    FLD float ptr [EAX + 0x4]           ; 0040e203
    FMUL float ptr [0x005992b0]         ; 0040e206 | FLOAT_005992b0
    FISTP dword ptr [EBX + 0x4]         ; 0040e20c
    FLD float ptr [EAX + 0x8]           ; 0040e20f
    FMUL float ptr [0x005992b0]         ; 0040e212 | FLOAT_005992b0
    FISTP dword ptr [EBX + 0x8]         ; 0040e218
    POP EBX                             ; 0040e21b
    RET                                 ; 0040e21c

