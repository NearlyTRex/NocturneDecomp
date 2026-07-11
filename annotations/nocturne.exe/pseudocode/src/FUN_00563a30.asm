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
; XREF[131]:
;   FUN_004031a0 at 004032da
;   FUN_0040de00 at 0040de5d
;   FUN_00416d40 at 004171fd
;   FUN_00417320 at 004173a6
;   FUN_00417730 at 00417802
;   FUN_00418480 at 004185ab
;   FUN_0041e5e0 at 0041e63c
;   FUN_00421b80 at 00421c45
;   FUN_00421f00 at 00421f3b
;   FUN_004266a0 at 0042676d
;   ... and 121 more
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

