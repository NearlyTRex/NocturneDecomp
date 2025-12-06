; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CBoundingBox3D * core_glass.cpp_CGlass_getBoundingBox_FUN_004ea030(CGlass * this_ptr, CBoundingBox3D * out_box)
;
; Parameters:
; CGlass *         Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
;
; Referenced Globals:
;   double DOUBLE_0062e059 = 0.5
;   double DOUBLE_0062e061 = 0.100000000000000
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004ea030
        ;   Label: core_glass.cpp_CGlass_getBoundingBox_FUN_004ea030
    MOV EAX,dword ptr [ESP + 0x8]       ; 004ea034
    FLD float ptr [EDX + 0x158]         ; 004ea038
    FCHS                                ; 004ea03e
    FLD double ptr [0x0062e059]         ; 004ea040 | double DOUBLE_0062e059
    FXCH                                ; 004ea046
    FMUL ST1                            ; 004ea048
    MOV dword ptr [EAX + 0x4],0xbdcccccd ; 004ea04a
    FSTP float ptr [EAX]                ; 004ea051
    FLD float ptr [EDX + 0x160]         ; 004ea053
    FCHS                                ; 004ea059
    FMUL ST1                            ; 004ea05b
    FSTP float ptr [EAX + 0x8]          ; 004ea05d
    FLD float ptr [EDX + 0x158]         ; 004ea060
    FMUL ST1                            ; 004ea066
    FSTP float ptr [EAX + 0xc]          ; 004ea068
    FLD float ptr [EDX + 0x15c]         ; 004ea06b
    FADD double ptr [0x0062e061]        ; 004ea071 | double DOUBLE_0062e061
    FSTP float ptr [EAX + 0x10]         ; 004ea077
    FMUL float ptr [EDX + 0x160]        ; 004ea07a
    FSTP float ptr [EAX + 0x14]         ; 004ea080
    RET                                 ; 004ea083

