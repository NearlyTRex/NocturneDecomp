; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_event_cpp_getVectorDistance_FUN_004818e0(CVector3f *a,CVector3f *b)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   a
; CVector3f *      Stack[0x8]:4   b
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; *****************************************************************************

section .text

    SUB ESP,0x10                        ; 004818e0
        ;   Label: core_event.cpp_getVectorDistance_FUN_004818e0
    MOV EDX,dword ptr [ESP + 0x14]      ; 004818e3
    MOV EAX,dword ptr [ESP + 0x18]      ; 004818e7
    FLD float ptr [EDX]                 ; 004818eb
    FSUB float ptr [EAX]                ; 004818ed
    FMUL ST0                            ; 004818ef
    FLD float ptr [EDX + 0x4]           ; 004818f1
    FSUB float ptr [EAX + 0x4]          ; 004818f4
    FMUL ST0                            ; 004818f7
    FLD float ptr [EDX + 0x8]           ; 004818f9
    FXCH                                ; 004818fc
    FADDP ST2,ST0                       ; 004818fe
    FSUB float ptr [EAX + 0x8]          ; 00481900
    FMUL ST0                            ; 00481903
    FADDP                               ; 00481905
    FSQRT                               ; 00481907
    FSTP float ptr [ESP + 0x8]          ; 00481909
    MOV EAX,dword ptr [ESP + 0x8]       ; 0048190d
    ADD ESP,0x10                        ; 00481911
    RET                                 ; 00481914

