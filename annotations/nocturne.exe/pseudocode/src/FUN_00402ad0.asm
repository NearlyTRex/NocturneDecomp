; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00402ad0(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; Called Functions:
;   FUN_00402a60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00402ad0
        ;   Label: FUN_00402ad0
    MOV EDX,dword ptr [ESP + 0xc]       ; 00402ad1
    PUSH EDX                            ; 00402ad5
    MOV ECX,dword ptr [ESP + 0xc]       ; 00402ad6
    PUSH ECX                            ; 00402ada
    MOV EBX,dword ptr [ESP + 0x18]      ; 00402adb
    PUSH EBX                            ; 00402adf
    CALL FUN_00402a60                   ; 00402ae0
        ;   XREF to: 00402a60 (UNCONDITIONAL_CALL)  ; undefined FUN_00402a60()
    ADD ESP,0xc                         ; 00402ae5
    POP EBX                             ; 00402ae8
    RET                                 ; 00402ae9

