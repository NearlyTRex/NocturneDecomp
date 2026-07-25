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
; XREF[195]:
;   FUN_00418630 at 004187c7
;   FUN_0041ebe0 at 0041ebf7
;   FUN_0042f8c0 at 0042fa9a
;   FUN_0042fd60 at 0042fecf
;   FUN_0043dad0 at 0043db1a
;   FUN_00442d9c at 00442ee2
;   FUN_00446810 at 0044697b
;   FUN_0044d060 at 0044d1c8
;   FUN_00450c90 at 00450e0a
;   FUN_004571f0 at 004573e1
;   ... and 185 more
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

