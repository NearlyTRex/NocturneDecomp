; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00517d40(CPackedBitmapSet *param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[1]:
;   FUN_00517d70 at 00517e1d
;
; Called Functions:
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_reset_FUN_00517640
;   FUN_00517cf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00517d40
        ;   Label: FUN_00517d40
    MOV EBX,dword ptr [ESP + 0x8]       ; 00517d41
    PUSH EBX                            ; 00517d45
    CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_reset_FUN_00517640 ; 00517d46
        ;   XREF to: 00517640 (UNCONDITIONAL_CALL)  ; void cockpit_pkbmpset.cpp_CPackedBitmapSet_reset_FUN_00517640(CPackedBitmapSet * this_ptr)
    ADD ESP,0x4                         ; 00517d4b
    PUSH 0x0                            ; 00517d4e
    MOV EDX,dword ptr [EBX + 0x24]      ; 00517d50
    PUSH EDX                            ; 00517d53
    MOV ECX,dword ptr [ESP + 0x14]      ; 00517d54
    PUSH ECX                            ; 00517d58
    LEA EAX,[EBX + 0x8]                 ; 00517d59
    PUSH EAX                            ; 00517d5c
    PUSH EBX                            ; 00517d5d
    CALL FUN_00517cf0                   ; 00517d5e
        ;   XREF to: 00517cf0 (UNCONDITIONAL_CALL)  ; undefined FUN_00517cf0()
    ADD ESP,0x14                        ; 00517d63
    POP EBX                             ; 00517d66
    RET                                 ; 00517d67

