; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00408890(int param_1)
;
;
; XREF[39]:
;   FUN_0040def0 at 0040df07
;   FUN_0040e670 at 0040e685
;   FUN_0040eb10 at 0040eb16
;   FUN_0040eeb0 at 0040eede
;   FUN_0040f500 at 0040f506
;   FUN_00414f60 at 00414f68
;   FUN_0041f130 at 0041f13a
;   FUN_004294a0 at 004294ac
;   FUN_0042b0e0 at 0042b0ed
;   FUN_00445c30 at 00445c3b
;   ... and 29 more
;
; Called Functions:
;   FUN_004088f0
;   FUN_0050b1d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408890
        ;   Label: FUN_00408890
    MOV EBX,dword ptr [ESP + 0x8]       ; 00408891
    MOV dword ptr [EBX + 0x114],0x0     ; 00408895
    PUSH EBX                            ; 0040889f
    MOV dword ptr [EBX + 0x11c],0x0     ; 004088a0
    CALL FUN_004088f0                   ; 004088aa
        ;   XREF to: 004088f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004088f0()
    ADD ESP,0x4                         ; 004088af
    MOV EAX,dword ptr [EBX + 0x154]     ; 004088b2
    PUSH EBX                            ; 004088b8
    CALL dword ptr [EAX + 0xc4]         ; 004088b9
    ADD ESP,0x4                         ; 004088bf
    TEST EAX,EAX                        ; 004088c2
    JNZ 0x004088d1                      ; 004088c4
        ;   XREF to: 004088d1 (CONDITIONAL_JUMP)  ; LAB_004088d1
    POP EBX                             ; 004088c6
    LEA EAX,[EAX]                       ; 004088c7
    LEA EDX,[EDX]                       ; 004088cd
    PUSH 0x1                            ; 004088d1
        ;   Label: LAB_004088d1
    ADD EBX,0x20                        ; 004088d3
    PUSH EBX                            ; 004088d6
    PUSH EAX                            ; 004088d7
    CALL FUN_0050b1d0                   ; 004088d8
        ;   XREF to: 0050b1d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0050b1d0()
    ADD ESP,0xc                         ; 004088dd
    POP EBX                             ; 004088e0
    RET                                 ; 004088e1

