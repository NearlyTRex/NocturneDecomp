; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00431440(int param_1)
;
;
; XREF[1]:
;   FUN_004eaf20 at 004eaf9e
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00431440
        ;   Label: FUN_00431440
    MOV ECX,dword ptr [EDX + 0x26fc]    ; 00431444
    TEST ECX,ECX                        ; 0043144a
    JNZ 0x0043144f                      ; 0043144c
        ;   XREF to: 0043144f (CONDITIONAL_JUMP)  ; LAB_0043144f
    RET                                 ; 0043144e
    PUSH EDX                            ; 0043144f
        ;   Label: LAB_0043144f
    MOV EAX,ECX                         ; 00431450
    MOV dword ptr [EDX + 0x26fc],0x0    ; 00431452
    PUSH EAX                            ; 0043145c
    MOV ECX,dword ptr [ECX + 0x154]     ; 0043145d
    CALL dword ptr [ECX + 0xfc]         ; 00431463
    ADD ESP,0x8                         ; 00431469
    LEA EAX,[EAX]                       ; 0043146c
    RET                                 ; 00431470

