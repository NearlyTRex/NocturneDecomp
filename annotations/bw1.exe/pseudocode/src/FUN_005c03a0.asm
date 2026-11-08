; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c03a0(void)
;
; Parameters:
; undefined        Stack[0x0]:1   local_res0
; Local Variables:
; undefined2       Stack[-0x8]:2  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[198]:
;   FUN_00409f20 at 0040a24f
;   FUN_0040cc60 at 0040ccbd
;   FUN_004101f0 at 00410260
;   FUN_00411000 at 00411016
;   FUN_00419b90 at 0041a0cd
;   FUN_0041a200 at 0041a27f
;   FUN_0041a700 at 0041a7d3
;   FUN_0041b590 at 0041b6cc
;   FUN_0041b750 at 0041b907
;   FUN_00422000 at 0042205c
;   ... and 188 more
;
; *****************************************************************************

section .text

    PUSH EAX                            ; 005c03a0
        ;   Label: FUN_005c03a0
    FSTCW word ptr [ESP]                ; 005c03a1
    WAIT                                ; 005c03a5
    PUSH dword ptr [ESP]                ; 005c03a6
    MOV byte ptr [ESP + 0x1],0x1f       ; 005c03a9
    FLDCW word ptr [ESP]                ; 005c03ae
    FRNDINT                             ; 005c03b1
    FLDCW word ptr [ESP + 0x4]          ; 005c03b3
    WAIT                                ; 005c03b7
    LEA ESP,[ESP + 0x8]                 ; 005c03b8
    RET                                 ; 005c03bc

