; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_conveyor_cpp_CConveyor_getBoundingBox_FUN_0043b3c0(CConveyor *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CConveyor *      Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
;
; Referenced Globals:
;   double DOUBLE_0057b21a = 0.5
;   double DOUBLE_0057b222 = 0.100000000000000
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0043b3c0
        ;   Label: core_conveyor.cpp_CConveyor_getBoundingBox_FUN_0043b3c0
    MOV EAX,dword ptr [ESP + 0x8]       ; 0043b3c4
    FLD float ptr [EDX + 0x720]         ; 0043b3c8
    FCHS                                ; 0043b3ce
    FLD double ptr [0x0057b21a]         ; 0043b3d0 | DOUBLE_0057b21a
    FXCH                                ; 0043b3d6
    FMUL ST1                            ; 0043b3d8
    MOV dword ptr [EAX + 0x4],0xbdcccccd ; 0043b3da
    FSTP float ptr [EAX]                ; 0043b3e1
    FLD float ptr [EDX + 0x728]         ; 0043b3e3
    FCHS                                ; 0043b3e9
    FMUL ST1                            ; 0043b3eb
    FSTP float ptr [EAX + 0x8]          ; 0043b3ed
    FLD float ptr [EDX + 0x720]         ; 0043b3f0
    FMUL ST1                            ; 0043b3f6
    FSTP float ptr [EAX + 0xc]          ; 0043b3f8
    FLD float ptr [EDX + 0x724]         ; 0043b3fb
    FADD double ptr [0x0057b222]        ; 0043b401 | DOUBLE_0057b222
    FSTP float ptr [EAX + 0x10]         ; 0043b407
    FMUL float ptr [EDX + 0x728]        ; 0043b40a
    FSTP float ptr [EAX + 0x14]         ; 0043b410
    RET                                 ; 0043b413

