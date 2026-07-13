; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00563a30(void)
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
;   FUN_0040de00 at 0040de5d
;   FUN_004110f0 at 00411160
;   FUN_00411ea0 at 00411eb7
;   FUN_00416d40 at 004171fd
;   FUN_00417320 at 004173a6
;   FUN_00417730 at 00417802
;   FUN_00418480 at 004185ab
;   ... and 167 more
;
; *****************************************************************************

section .text

    PUSH EAX                            ; 00563a30
        ;   Label: FUN_00563a30
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

