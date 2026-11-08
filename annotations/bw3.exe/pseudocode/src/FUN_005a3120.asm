; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a3120(void)
;
; Parameters:
; undefined        Stack[0x0]:1   local_res0
; Local Variables:
; undefined2       Stack[-0x8]:2  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[205]:
;   FUN_00409f60 at 0040a3ac
;   FUN_0040cea0 at 0040cefd
;   FUN_0040df20 at 0040df80
;   FUN_0040f290 at 0040f2a6
;   FUN_004157c0 at 00415cfd
;   FUN_00415e30 at 00415eaf
;   FUN_00416330 at 00416403
;   FUN_00417240 at 0041737c
;   FUN_00417400 at 004175d5
;   FUN_0041f360 at 0041f3c9
;   ... and 195 more
;
; *****************************************************************************

section .text

    PUSH EAX                            ; 005a3120
        ;   Label: FUN_005a3120
    FSTCW word ptr [ESP]                ; 005a3121
    WAIT                                ; 005a3125
    PUSH dword ptr [ESP]                ; 005a3126
    MOV byte ptr [ESP + 0x1],0x1f       ; 005a3129
    FLDCW word ptr [ESP]                ; 005a312e
    FRNDINT                             ; 005a3131
    FLDCW word ptr [ESP + 0x4]          ; 005a3133
    WAIT                                ; 005a3137
    LEA ESP,[ESP + 0x8]                 ; 005a3138
    RET                                 ; 005a313c

