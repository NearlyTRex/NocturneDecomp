; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00510d70(CPackedBitmapSet *param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[1]:
;   FUN_00510da0 at 00510e4d
;
; Called Functions:
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_reset_FUN_00510670
;   FUN_00510d20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00510d70
        ;   Label: FUN_00510d70
    MOV EBX,dword ptr [ESP + 0x8]       ; 00510d71
    PUSH EBX                            ; 00510d75
    CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_reset_FUN_00510670 ; 00510d76
        ;   XREF to: 00510670 (UNCONDITIONAL_CALL)  ; void cockpit_pkbmpset.cpp_CPackedBitmapSet_reset_FUN_00510670(CPackedBitmapSet * this_ptr)
    ADD ESP,0x4                         ; 00510d7b
    PUSH 0x0                            ; 00510d7e
    MOV EDX,dword ptr [EBX + 0x24]      ; 00510d80
    PUSH EDX                            ; 00510d83
    MOV ECX,dword ptr [ESP + 0x14]      ; 00510d84
    PUSH ECX                            ; 00510d88
    LEA EAX,[EBX + 0x8]                 ; 00510d89
    PUSH EAX                            ; 00510d8c
    PUSH EBX                            ; 00510d8d
    CALL FUN_00510d20                   ; 00510d8e
        ;   XREF to: 00510d20 (UNCONDITIONAL_CALL)  ; undefined FUN_00510d20()
    ADD ESP,0x14                        ; 00510d93
    POP EBX                             ; 00510d96
    RET                                 ; 00510d97

