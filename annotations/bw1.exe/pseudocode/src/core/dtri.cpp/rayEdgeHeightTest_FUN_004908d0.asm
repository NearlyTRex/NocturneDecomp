; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_dtri_cpp_rayEdgeHeightTest_FUN_004908d0(float *param_1,float *param_2,float param_3,float *param_4)
;
; Local Variables:
; undefined8       Stack[-0x60]:8  local_60
; undefined8       Stack[-0x58]:8  local_58
; undefined8       Stack[-0x50]:8  local_50
; undefined8       Stack[-0x48]:8  local_48
; undefined8       Stack[-0x40]:8  local_40
; undefined8       Stack[-0x38]:8  local_38
; undefined8       Stack[-0x30]:8  local_30
; undefined8       Stack[-0x28]:8  local_28
; undefined8       Stack[-0x20]:8  local_20
;
; XREF[1]:
;   core_dtri.cpp_FUN_00490a40 at 00490be3
;
; Referenced Globals:
;   undefined4 DAT_005dbbdc
;   undefined4 DAT_005dbbe4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004908d0
        ;   Label: core_dtri.cpp_rayEdgeHeightTest_FUN_004908d0
    PUSH ESI                            ; 004908d1
    PUSH EBP                            ; 004908d2
    MOV EBP,ESP                         ; 004908d3
    SUB ESP,0x50                        ; 004908d5
    AND ESP,0xfffffff8                  ; 004908d8
    MOV EDX,dword ptr [EBP + 0x10]      ; 004908db
    MOV ESI,dword ptr [EBP + 0x14]      ; 004908de
    MOV EBX,dword ptr [EBP + 0x1c]      ; 004908e1
    FLD float ptr [ESI + 0x8]           ; 004908e4
    FLD float ptr [ESI]                 ; 004908e7
    FSUB float ptr [EDX]                ; 004908e9
    FXCH                                ; 004908eb
    FSUB float ptr [EDX + 0x8]          ; 004908ed
    FXCH                                ; 004908f0
    FST double ptr [ESP + 0x30]         ; 004908f2
    FMUL double ptr [ESP + 0x30]        ; 004908f6
    FXCH                                ; 004908fa
    FST double ptr [ESP + 0x18]         ; 004908fc
    FMUL double ptr [ESP + 0x18]        ; 00490900
    FADDP                               ; 00490904
    FLDZ                                ; 00490906
    FXCH                                ; 00490908
    FSTP double ptr [ESP + 0x40]        ; 0049090a
    FCOMP double ptr [ESP + 0x40]       ; 0049090e
    FNSTSW AX                           ; 00490912
    SAHF                                ; 00490914
    JNC 0x00490a35                      ; 00490915
        ;   XREF to: 00490a35 (CONDITIONAL_JUMP)  ; LAB_00490a35
    FLD float ptr [EDX + 0x8]           ; 0049091b
    FMUL double ptr [ESP + 0x18]        ; 0049091e
    FLD float ptr [EDX + 0x8]           ; 00490922
    FMUL ST0                            ; 00490925
    FLD double ptr [ESP + 0x40]         ; 00490927
    FMUL double ptr [0x005dbbe4]        ; 0049092b | DAT_005dbbe4
    FLD float ptr [EDX]                 ; 00490931
    FMUL ST0                            ; 00490933
    FLD float ptr [EDX]                 ; 00490935
    FMUL double ptr [ESP + 0x30]        ; 00490937
    FXCH                                ; 0049093b
    FADDP ST3,ST0                       ; 0049093d
    FADDP ST3,ST0                       ; 0049093f
    FLD float ptr [EBP + 0x18]          ; 00490941
    FMUL ST0                            ; 00490944
    FXCH ST3                            ; 00490946
    FMUL double ptr [0x005dbbdc]        ; 00490948 | DAT_005dbbdc
    FXCH ST3                            ; 0049094e
    FSUBP ST2,ST0                       ; 00490950
    FMULP                               ; 00490952
    FXCH                                ; 00490954
    FST double ptr [ESP + 0x38]         ; 00490956
    FMUL double ptr [ESP + 0x38]        ; 0049095a
    FSUBRP                              ; 0049095e
    FLDZ                                ; 00490960
    FXCH                                ; 00490962
    FSTP double ptr [ESP + 0x8]         ; 00490964
    FCOMP double ptr [ESP + 0x8]        ; 00490968
    FNSTSW AX                           ; 0049096c
    SAHF                                ; 0049096e
    JA 0x00490a35                       ; 0049096f
        ;   XREF to: 00490a35 (CONDITIONAL_JUMP)  ; LAB_00490a35
    FLD double ptr [ESP + 0x38]         ; 00490975
    FCHS                                ; 00490979
    FLD double ptr [ESP + 0x8]          ; 0049097b
    FSQRT                               ; 0049097f
    FSUBP                               ; 00490981
    FLD double ptr [ESP + 0x40]         ; 00490983
    FMUL double ptr [0x005dbbdc]        ; 00490987 | DAT_005dbbdc
    FDIVP                               ; 0049098d
    FLDZ                                ; 0049098f
    XOR ECX,ECX                         ; 00490991
    FXCH                                ; 00490993
    FSTP double ptr [ESP + 0x10]        ; 00490995
    FCOMP double ptr [ESP + 0x10]       ; 00490999
    FNSTSW AX                           ; 0049099d
    SAHF                                ; 0049099f
    JA 0x004909d6                       ; 004909a0
        ;   XREF to: 004909d6 (CONDITIONAL_JUMP)  ; LAB_004909d6
    FLD1                                ; 004909a2
    FCOMP double ptr [ESP + 0x10]       ; 004909a4
    FNSTSW AX                           ; 004909a8
    SAHF                                ; 004909aa
    JC 0x004909d6                       ; 004909ab
        ;   XREF to: 004909d6 (CONDITIONAL_JUMP)  ; LAB_004909d6
    FLD float ptr [ESI + 0x4]           ; 004909ad
    FSUB float ptr [EDX + 0x4]          ; 004909b0
    FMUL double ptr [ESP + 0x10]        ; 004909b3
    FADD float ptr [EDX + 0x4]          ; 004909b7
    FLD float ptr [EBX]                 ; 004909ba
    FXCH                                ; 004909bc
    FSTP double ptr [ESP + 0x20]        ; 004909be
    FCOMP double ptr [ESP + 0x20]       ; 004909c2
    FNSTSW AX                           ; 004909c6
    SAHF                                ; 004909c8
    JNC 0x004909d6                      ; 004909c9
        ;   XREF to: 004909d6 (CONDITIONAL_JUMP)  ; LAB_004909d6
    FLD double ptr [ESP + 0x20]         ; 004909cb
    MOV ECX,0x1                         ; 004909cf
    FSTP float ptr [EBX]                ; 004909d4
    FLD double ptr [ESP + 0x8]          ; 004909d6
        ;   Label: LAB_004909d6
    FSQRT                               ; 004909da
    FSUB double ptr [ESP + 0x38]        ; 004909dc
    FLD double ptr [ESP + 0x40]         ; 004909e0
    FMUL double ptr [0x005dbbdc]        ; 004909e4 | DAT_005dbbdc
    FDIVP                               ; 004909ea
    FLDZ                                ; 004909ec
    FXCH                                ; 004909ee
    FSTP double ptr [ESP]               ; 004909f0
    FCOMP double ptr [ESP]              ; 004909f3
    FNSTSW AX                           ; 004909f6
    SAHF                                ; 004909f8
    JA 0x00490a2d                       ; 004909f9
        ;   XREF to: 00490a2d (CONDITIONAL_JUMP)  ; LAB_00490a2d
    FLD1                                ; 004909fb
    FCOMP double ptr [ESP]              ; 004909fd
    FNSTSW AX                           ; 00490a00
    SAHF                                ; 00490a02
    JC 0x00490a2d                       ; 00490a03
        ;   XREF to: 00490a2d (CONDITIONAL_JUMP)  ; LAB_00490a2d
    FLD float ptr [ESI + 0x4]           ; 00490a05
    FSUB float ptr [EDX + 0x4]          ; 00490a08
    FMUL double ptr [ESP]               ; 00490a0b
    FADD float ptr [EDX + 0x4]          ; 00490a0e
    FLD float ptr [EBX]                 ; 00490a11
    FXCH                                ; 00490a13
    FSTP double ptr [ESP + 0x28]        ; 00490a15
    FCOMP double ptr [ESP + 0x28]       ; 00490a19
    FNSTSW AX                           ; 00490a1d
    SAHF                                ; 00490a1f
    JNC 0x00490a2d                      ; 00490a20
        ;   XREF to: 00490a2d (CONDITIONAL_JUMP)  ; LAB_00490a2d
    FLD double ptr [ESP + 0x28]         ; 00490a22
    MOV ECX,0x1                         ; 00490a26
    FSTP float ptr [EBX]                ; 00490a2b
    MOV EAX,ECX                         ; 00490a2d
        ;   Label: LAB_00490a2d
    MOV ESP,EBP                         ; 00490a2f
    POP EBP                             ; 00490a31
    POP ESI                             ; 00490a32
    POP EBX                             ; 00490a33
    RET                                 ; 00490a34
    XOR EAX,EAX                         ; 00490a35
        ;   Label: LAB_00490a35
    MOV ESP,EBP                         ; 00490a37
    POP EBP                             ; 00490a39
    POP ESI                             ; 00490a3a
    POP EBX                             ; 00490a3b
    RET                                 ; 00490a3c

