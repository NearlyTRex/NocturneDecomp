; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040d180(undefined4 param_1)
;
;
; XREF[2]:
;   FUN_00409c80 at 00409cb3
;   FUN_00433130 at 00433158
;
; Called Functions:
;   FUN_0040d140
;
; *****************************************************************************

section .text

    PUSH 0x4                            ; 0040d180
        ;   Label: FUN_0040d180
    LEA EAX,[ESP + 0xc]                 ; 0040d182
    PUSH EAX                            ; 0040d186
    MOV EDX,dword ptr [ESP + 0xc]       ; 0040d187
    PUSH EDX                            ; 0040d18b
    CALL FUN_0040d140                   ; 0040d18c
        ;   XREF to: 0040d140 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d140()
    ADD ESP,0xc                         ; 0040d191
    RET                                 ; 0040d194

