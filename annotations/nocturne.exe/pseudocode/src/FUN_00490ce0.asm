; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00490ce0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)
;
;
; XREF[3]:
;   FUN_0045d760 at 0045d88e
;   FUN_0046fff0 at 0047008a
;   FUN_00490d70 at 00490dc2
;
; Called Functions:
;   FUN_00490af0
;   FUN_00492da0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00490ce0
        ;   Label: FUN_00490ce0
    PUSH ESI                            ; 00490ce1
    MOV EAX,dword ptr [ESP + 0x20]      ; 00490ce2
    PUSH EAX                            ; 00490ce6
    MOV EDX,dword ptr [ESP + 0x20]      ; 00490ce7
    PUSH EDX                            ; 00490ceb
    MOV ECX,dword ptr [ESP + 0x20]      ; 00490cec
    PUSH ECX                            ; 00490cf0
    MOV EBX,dword ptr [ESP + 0x20]      ; 00490cf1
    PUSH EBX                            ; 00490cf5
    PUSH EAX                            ; 00490cf6
    MOV ESI,dword ptr [ESP + 0x20]      ; 00490cf7
    PUSH ESI                            ; 00490cfb
    CALL FUN_00492da0                   ; 00490cfc
        ;   XREF to: 00492da0 (UNCONDITIONAL_CALL)  ; undefined FUN_00492da0()
    MOV EDX,EAX                         ; 00490d01
    SAR EDX,0x1f                        ; 00490d03
    SUB EAX,EDX                         ; 00490d06
    SAR EAX,0x1                         ; 00490d08
    ADD ESP,0x8                         ; 00490d0a
    MOV EDX,dword ptr [ESP + 0x20]      ; 00490d0d
    SUB EDX,EAX                         ; 00490d11
    PUSH EDX                            ; 00490d13
    PUSH ESI                            ; 00490d14
    CALL FUN_00490af0                   ; 00490d15
        ;   XREF to: 00490af0 (UNCONDITIONAL_CALL)  ; undefined FUN_00490af0()
    ADD ESP,0x18                        ; 00490d1a
    POP ESI                             ; 00490d1d
    POP EBX                             ; 00490d1e
    RET                                 ; 00490d1f

