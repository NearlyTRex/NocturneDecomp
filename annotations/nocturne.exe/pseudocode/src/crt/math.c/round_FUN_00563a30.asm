; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float10 __fpureg_safe crt_math_c_round_FUN_00563a30(float10 param_1)
;
; Parameters:
; undefined        Stack[0x0]:1   local_res0
; Local Variables:
; undefined2       Stack[-0x8]:2  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[177]:
;   FUN_00402e90 at 00402fbe
;   FUN_004031a0 at 004032da
;   FUN_0040b300 at 0040b5be
;   FUN_004110f0 at 00411160
;   FUN_00411ea0 at 00411eb7
;   FUN_00418630 at 004187c7
;   FUN_0041ebe0 at 0041ebf7
;   FUN_00421b80 at 00421c45
;   FUN_004270e0 at 0042713e
;   FUN_0042fd60 at 0042fecf
;   ... and 167 more
;
; *****************************************************************************

section .text

    PUSH EAX                            ; 00563a30
        ;   Label: crt_math.c_round_FUN_00563a30
    FSTCW word ptr [ESP]                ; 00563a31
    WAIT                                ; 00563a35
    PUSH dword ptr [ESP]                ; 00563a36
    MOV byte ptr [ESP + 0x1],0x1f       ; 00563a39
    FLDCW word ptr [ESP]                ; 00563a3e
    FRNDINT                             ; 00563a41
    FLDCW word ptr [ESP + 0x4]          ; 00563a43
    WAIT                                ; 00563a47
    LEA ESP,[ESP + 0x8]                 ; 00563a48
    RET                                 ; 00563a4c

