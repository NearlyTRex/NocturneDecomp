; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_bodypart_cpp_subtractVector_FUN_0041b510(CVector3f *a,CVector3f *dst,CVector3f *b)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   a
; CVector3f *      Stack[0x8]:4   dst
; CVector3f *      Stack[0xc]:4   b
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_0055a810 at 0055f588
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0041b510
        ;   Label: core_bodypart.cpp_subtractVector_FUN_0041b510
    MOV EAX,dword ptr [ESP + 0x8]       ; 0041b514
    MOV ECX,dword ptr [ESP + 0xc]       ; 0041b518
    FLD float ptr [EDX]                 ; 0041b51c
    FSUB float ptr [ECX]                ; 0041b51e
    FSTP float ptr [EAX]                ; 0041b520
    FLD float ptr [EDX + 0x4]           ; 0041b522
    FSUB float ptr [ECX + 0x4]          ; 0041b525
    FSTP float ptr [EAX + 0x4]          ; 0041b528
    FLD float ptr [EDX + 0x8]           ; 0041b52b
    FSUB float ptr [ECX + 0x8]          ; 0041b52e
    FSTP float ptr [EAX + 0x8]          ; 0041b531
    RET                                 ; 0041b534

