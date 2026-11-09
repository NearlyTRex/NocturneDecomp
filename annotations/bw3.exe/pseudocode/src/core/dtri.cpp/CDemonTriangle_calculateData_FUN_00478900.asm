; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtri_cpp_CDemonTriangle_calculateData_FUN_00478900(CDemonTriangle *this_ptr)
;
; Parameters:
; CDemonTriangle * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0x38]:8  local_38
; undefined8       Stack[-0x30]:8  local_30
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[2]:
;   core_dtri.cpp_CDemonTriangle_buildCollision_FUN_00478a50 at 00478a95
;   core_dtri.cpp_CDemonTriangle_readDataCSV_FUN_004787a0 at 004787d9
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00478900
        ;   Label: core_dtri.cpp_CDemonTriangle_calculateData_FUN_00478900
    MOV EBP,ESP                         ; 00478901
    SUB ESP,0x30                        ; 00478903
    AND ESP,0xfffffff8                  ; 00478906
    MOV EDX,dword ptr [EBP + 0x8]       ; 00478909
    FLD float ptr [EDX + 0x20]          ; 0047890c
    FLD float ptr [EDX + 0x10]          ; 0047890f
    FSUB float ptr [EDX + 0x4]          ; 00478912
    FXCH                                ; 00478915
    FSUB float ptr [EDX + 0x14]         ; 00478917
    FLD ST1                             ; 0047891a
    FXCH                                ; 0047891c
    FSTP float ptr [ESP + 0x24]         ; 0047891e
    FMUL float ptr [ESP + 0x24]         ; 00478922
    FLD float ptr [EDX + 0x18]          ; 00478926
    FLD float ptr [EDX + 0x14]          ; 00478929
    FSUB float ptr [EDX + 0x8]          ; 0047892c
    FXCH                                ; 0047892f
    FSUB float ptr [EDX + 0xc]          ; 00478931
    FST float ptr [ESP + 0x1c]          ; 00478934
    FMUL ST1                            ; 00478938
    FLD float ptr [EDX + 0x1c]          ; 0047893a
    FLD float ptr [EDX + 0xc]           ; 0047893d
    FSUB float ptr [EDX]                ; 00478940
    FXCH                                ; 00478942
    FSUB float ptr [EDX + 0x10]         ; 00478944
    FLD ST1                             ; 00478947
    FMUL ST1                            ; 00478949
    FXCH                                ; 0047894b
    FMULP ST4                           ; 0047894d
    FXCH                                ; 0047894f
    FMUL float ptr [ESP + 0x24]         ; 00478951
    FLD float ptr [ESP + 0x1c]          ; 00478955
    FMULP ST6                           ; 00478959
    FXCH ST3                            ; 0047895b
    FSUBP ST4,ST0                       ; 0047895d
    FXCH ST2                            ; 0047895f
    FSUBP                               ; 00478961
    FXCH ST2                            ; 00478963
    FST float ptr [EDX + 0x24]          ; 00478965
    FMUL float ptr [EDX + 0x24]         ; 00478968
    FXCH ST2                            ; 0047896b
    FST float ptr [EDX + 0x28]          ; 0047896d
    FMUL float ptr [EDX + 0x28]         ; 00478970
    FXCH ST3                            ; 00478973
    FSUBP                               ; 00478975
    FXCH ST2                            ; 00478977
    FADDP                               ; 00478979
    FXCH                                ; 0047897b
    FST float ptr [EDX + 0x2c]          ; 0047897d
    FMUL float ptr [EDX + 0x2c]         ; 00478980
    FADDP                               ; 00478983
    FSQRT                               ; 00478985
    FSTP float ptr [ESP + 0x2c]         ; 00478987
    TEST dword ptr [ESP + 0x2c],0x7fffffff ; 0047898b
    JZ 0x00478a29                       ; 00478993
        ;   XREF to: 00478a29 (CONDITIONAL_JUMP)  ; LAB_00478a29
    FLD float ptr [EDX + 0x24]          ; 00478999
        ;   Label: LAB_00478999
    FCHS                                ; 0047899c
    FLD1                                ; 0047899e
    FDIV float ptr [ESP + 0x2c]         ; 004789a0
    FLD float ptr [EDX + 0x28]          ; 004789a4
    FCHS                                ; 004789a7
    FMUL ST1                            ; 004789a9
    FST float ptr [EDX + 0x28]          ; 004789ab
    FABS                                ; 004789ae
    FXCH ST2                            ; 004789b0
    FMUL ST1                            ; 004789b2
    FST float ptr [EDX + 0x24]          ; 004789b4
    FABS                                ; 004789b7
    FLD float ptr [EDX + 0x4]           ; 004789b9
    FMUL float ptr [EDX + 0x28]         ; 004789bc
    FLD float ptr [EDX]                 ; 004789bf
    FMUL float ptr [EDX + 0x24]         ; 004789c1
    FLD float ptr [EDX + 0x2c]          ; 004789c4
    FCHS                                ; 004789c7
    FMULP ST4                           ; 004789c9
    FCHS                                ; 004789cb
    FSUBRP                              ; 004789cd
    FXCH ST2                            ; 004789cf
    FSTP float ptr [EDX + 0x2c]         ; 004789d1
    FLD float ptr [EDX + 0x8]           ; 004789d4
    FMUL float ptr [EDX + 0x2c]         ; 004789d7
    FSUBP ST2,ST0                       ; 004789da
    FXCH                                ; 004789dc
    FSTP float ptr [EDX + 0x30]         ; 004789de
    FSTP double ptr [ESP]               ; 004789e1
    FCOMP double ptr [ESP]              ; 004789e4
    FNSTSW AX                           ; 004789e7
    SAHF                                ; 004789e9
    JNC 0x004789f9                      ; 004789ea
        ;   XREF to: 004789f9 (CONDITIONAL_JUMP)  ; LAB_004789f9
    FLD float ptr [EDX + 0x2c]          ; 004789ec
    FABS                                ; 004789ef
    FCOMP double ptr [ESP]              ; 004789f1
    FNSTSW AX                           ; 004789f4
    SAHF                                ; 004789f6
    JC 0x00478a36                       ; 004789f7
        ;   XREF to: 00478a36 (CONDITIONAL_JUMP)  ; LAB_00478a36
    FLD float ptr [EDX + 0x24]          ; 004789f9
        ;   Label: LAB_004789f9
    FABS                                ; 004789fc
    FLD float ptr [EDX + 0x28]          ; 004789fe
    FABS                                ; 00478a01
    FSTP double ptr [ESP + 0x8]         ; 00478a03
    FCOMP double ptr [ESP + 0x8]        ; 00478a07
    FNSTSW AX                           ; 00478a0b
    SAHF                                ; 00478a0d
    JNC 0x00478a41                      ; 00478a0e
        ;   XREF to: 00478a41 (CONDITIONAL_JUMP)  ; LAB_00478a41
    FLD float ptr [EDX + 0x2c]          ; 00478a10
    FABS                                ; 00478a13
    FCOMP double ptr [ESP + 0x8]        ; 00478a15
    FNSTSW AX                           ; 00478a19
    SAHF                                ; 00478a1b
    JNC 0x00478a41                      ; 00478a1c
        ;   XREF to: 00478a41 (CONDITIONAL_JUMP)  ; LAB_00478a41
    MOV dword ptr [EDX + 0x34],0x1      ; 00478a1e
    MOV ESP,EBP                         ; 00478a25
    POP EBP                             ; 00478a27
    RET                                 ; 00478a28
    MOV dword ptr [ESP + 0x2c],0x3f800000 ; 00478a29
        ;   Label: LAB_00478a29
    JMP 0x00478999                      ; 00478a31
        ;   XREF to: 00478999 (UNCONDITIONAL_JUMP)  ; LAB_00478999
    MOV dword ptr [EDX + 0x34],0x0      ; 00478a36
        ;   Label: LAB_00478a36
    MOV ESP,EBP                         ; 00478a3d
    POP EBP                             ; 00478a3f
    RET                                 ; 00478a40
    MOV dword ptr [EDX + 0x34],0x2      ; 00478a41
        ;   Label: LAB_00478a41
    MOV ESP,EBP                         ; 00478a48
    POP EBP                             ; 00478a4a
    RET                                 ; 00478a4b

