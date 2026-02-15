; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_wateract_cpp_CWaterActor_getBoundingBox_FUN_005eb4b0(CWaterActor *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CWaterActor *    Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
;
; Referenced Globals:
;   double DOUBLE_006572ff = 0.5
;   double DOUBLE_00657307 = 0.100000000000000
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005eb4b0
        ;   Label: core_wateract.cpp_CWaterActor_getBoundingBox_FUN_005eb4b0
    MOV EAX,dword ptr [ESP + 0x8]       ; 005eb4b4
    FLD float ptr [EDX + 0x158]         ; 005eb4b8
    FCHS                                ; 005eb4be
    FLD double ptr [0x006572ff]         ; 005eb4c0 | DOUBLE_006572ff
    FXCH                                ; 005eb4c6
    FMUL ST1                            ; 005eb4c8
    MOV dword ptr [EAX + 0x4],0xbdcccccd ; 005eb4ca
    FSTP float ptr [EAX]                ; 005eb4d1
    FLD float ptr [EDX + 0x160]         ; 005eb4d3
    FCHS                                ; 005eb4d9
    FMUL ST1                            ; 005eb4db
    FSTP float ptr [EAX + 0x8]          ; 005eb4dd
    FLD float ptr [EDX + 0x158]         ; 005eb4e0
    FMUL ST1                            ; 005eb4e6
    FSTP float ptr [EAX + 0xc]          ; 005eb4e8
    FLD float ptr [EDX + 0x15c]         ; 005eb4eb
    FADD double ptr [0x00657307]        ; 005eb4f1 | DOUBLE_00657307
    FSTP float ptr [EAX + 0x10]         ; 005eb4f7
    FMUL float ptr [EDX + 0x160]        ; 005eb4fa
    FSTP float ptr [EAX + 0x14]         ; 005eb500
    RET                                 ; 005eb503

