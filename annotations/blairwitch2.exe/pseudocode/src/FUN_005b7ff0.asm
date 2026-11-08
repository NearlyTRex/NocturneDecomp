; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005b7ff0(void)
;
; Parameters:
; undefined        Stack[0x0]:1   local_res0
; Local Variables:
; undefined2       Stack[-0x8]:2  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[199]:
;   FUN_0040a050 at 0040a4ae
;   FUN_0040cfc0 at 0040d01d
;   FUN_00410670 at 004106e0
;   FUN_00411480 at 00411496
;   FUN_00416700 at 00416c3d
;   FUN_00416d70 at 00416def
;   FUN_00417270 at 00417343
;   FUN_00418110 at 0041824c
;   FUN_004182d0 at 00418487
;   FUN_0041c090 at 0041c0ec
;   ... and 189 more
;
; *****************************************************************************

section .text

    PUSH EAX                            ; 005b7ff0
        ;   Label: FUN_005b7ff0
    FSTCW word ptr [ESP]                ; 005b7ff1
    WAIT                                ; 005b7ff5
    PUSH dword ptr [ESP]                ; 005b7ff6
    MOV byte ptr [ESP + 0x1],0x1f       ; 005b7ff9
    FLDCW word ptr [ESP]                ; 005b7ffe
    FRNDINT                             ; 005b8001
    FLDCW word ptr [ESP + 0x4]          ; 005b8003
    WAIT                                ; 005b8007
    LEA ESP,[ESP + 0x8]                 ; 005b8008
    RET                                 ; 005b800c

