; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00484e50(undefined4 param_1)
;
;
; XREF[3]:
;   FUN_0047b1f0 at 0047b4e6
;   FUN_0047b800 at 0047bacf
;   FUN_004820b0 at 004820d5
;
; Called Functions:
;   FUN_00484e70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00484e50
        ;   Label: FUN_00484e50
    MOV EBX,dword ptr [ESP + 0x8]       ; 00484e51
    PUSH EBX                            ; 00484e55
    CALL FUN_00484e70                   ; 00484e56
        ;   XREF to: 00484e70 (UNCONDITIONAL_CALL)  ; undefined FUN_00484e70()
    ADD ESP,0x4                         ; 00484e5b
    MOV EAX,EBX                         ; 00484e5e
    POP EBX                             ; 00484e60
    RET                                 ; 00484e61

