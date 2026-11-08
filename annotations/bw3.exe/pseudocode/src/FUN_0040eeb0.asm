; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040eeb0(int param_1)
;
;
; Called Functions:
;   FUN_00408890
;   FUN_0040ce40
;   FUN_0040f2f0
;   FUN_00444970
;   FUN_00462580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040eeb0
        ;   Label: FUN_0040eeb0
    SUB ESP,0x4                         ; 0040eeb1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0040eeb4
    LEA EAX,[EBX + 0x188]               ; 0040eeb8
    PUSH EAX                            ; 0040eebe
    CALL FUN_00462580                   ; 0040eebf
        ;   XREF to: 00462580 (UNCONDITIONAL_CALL)  ; undefined FUN_00462580()
    ADD ESP,0x4                         ; 0040eec4
    LEA EAX,[EBX + 0x158]               ; 0040eec7
    PUSH EAX                            ; 0040eecd
    LEA EAX,[EBX + 0x178]               ; 0040eece
    PUSH EAX                            ; 0040eed4
    CALL FUN_00444970                   ; 0040eed5
        ;   XREF to: 00444970 (UNCONDITIONAL_CALL)  ; undefined FUN_00444970()
    ADD ESP,0x8                         ; 0040eeda
    PUSH EBX                            ; 0040eedd
    CALL FUN_00408890                   ; 0040eede
        ;   XREF to: 00408890 (UNCONDITIONAL_CALL)  ; undefined FUN_00408890()
    ADD ESP,0x4                         ; 0040eee3
    PUSH EBX                            ; 0040eee6
    CALL FUN_0040f2f0                   ; 0040eee7
        ;   XREF to: 0040f2f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040f2f0()
    ADD ESP,0x4                         ; 0040eeec
    PUSH dword ptr [EBX + 0x37c]        ; 0040eeef
    PUSH dword ptr [EBX + 0x378]        ; 0040eef5
    MOV dword ptr [EBX + 0x380],0x0     ; 0040eefb
    CALL FUN_0040ce40                   ; 0040ef05
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ce40()
    MOV dword ptr [ESP + 0x8],EAX       ; 0040ef0a
    MOV EAX,dword ptr [ESP + 0x8]       ; 0040ef0e
    MOV dword ptr [EBX + 0x384],EAX     ; 0040ef12
    ADD ESP,0x8                         ; 0040ef18
    ADD ESP,0x4                         ; 0040ef1b
    POP EBX                             ; 0040ef1e
    RET                                 ; 0040ef1f

