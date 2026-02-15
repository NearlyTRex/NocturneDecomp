; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_barrier_cpp_CBarrier_getBoundingBox_FUN_004142e0(CBarrier *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CBarrier *       Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
;
; Referenced Globals:
;   double DOUBLE_0061515f = 0.5
;   double DOUBLE_00615167 = 0.100000000000000
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004142e0
        ;   Label: core_barrier.cpp_CBarrier_getBoundingBox_FUN_004142e0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004142e4
    FLD float ptr [EDX + 0x158]         ; 004142e8
    FCHS                                ; 004142ee
    FLD double ptr [0x0061515f]         ; 004142f0 | DOUBLE_0061515f
    FXCH                                ; 004142f6
    FMUL ST1                            ; 004142f8
    MOV dword ptr [EAX + 0x4],0xbdcccccd ; 004142fa
    FSTP float ptr [EAX]                ; 00414301
    FLD float ptr [EDX + 0x160]         ; 00414303
    FCHS                                ; 00414309
    FMUL ST1                            ; 0041430b
    FSTP float ptr [EAX + 0x8]          ; 0041430d
    FLD float ptr [EDX + 0x158]         ; 00414310
    FMUL ST1                            ; 00414316
    FSTP float ptr [EAX + 0xc]          ; 00414318
    FLD float ptr [EDX + 0x15c]         ; 0041431b
    FADD double ptr [0x00615167]        ; 00414321 | DOUBLE_00615167
    FSTP float ptr [EAX + 0x10]         ; 00414327
    FMUL float ptr [EDX + 0x160]        ; 0041432a
    FSTP float ptr [EAX + 0x14]         ; 00414330
    RET                                 ; 00414333

