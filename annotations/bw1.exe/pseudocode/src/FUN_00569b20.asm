; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00569b20(int param_1)
;
;
; XREF[41]:
;   FUN_0040ea80 at 0040ea97
;   FUN_00411280 at 004112a1
;   FUN_00412840 at 00412861
;   FUN_00414750 at 0041475a
;   FUN_00414ab0 at 00414ac7
;   FUN_0041b940 at 0041b94e
;   FUN_00423940 at 00423951
;   FUN_004287e0 at 004287ee
;   FUN_0042c510 at 0042c59e
;   FUN_004459c0 at 004459fd
;   ... and 31 more
;
; Called Functions:
;   FUN_00569b50
;   FUN_0056b520
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00569b20
        ;   Label: FUN_00569b20
    ADD EAX,0x2350                      ; 00569b24
    PUSH EAX                            ; 00569b29
    CALL FUN_0056b520                   ; 00569b2a
        ;   XREF to: 0056b520 (UNCONDITIONAL_CALL)  ; undefined FUN_0056b520()
    ADD ESP,0x4                         ; 00569b2f
    PUSH EAX                            ; 00569b32
    MOV EDX,dword ptr [ESP + 0x8]       ; 00569b33
    PUSH EDX                            ; 00569b37
    CALL FUN_00569b50                   ; 00569b38
        ;   XREF to: 00569b50 (UNCONDITIONAL_CALL)  ; undefined FUN_00569b50()
    ADD ESP,0x8                         ; 00569b3d
    RET                                 ; 00569b40

