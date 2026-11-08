; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0042e160(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[43]:
;   FUN_0040f4d0 at 0040f66b
;   FUN_004115b0 at 0041180c
;   FUN_00412ba0 at 00412e09
;   FUN_00414770 at 004147d3
;   FUN_00414b30 at 00414d15
;   FUN_00415340 at 004155a2
;   FUN_0041bb40 at 0041c14c
;   FUN_00428ae0 at 00429866
;   FUN_00445cb0 at 00446728
;   FUN_00448570 at 004487a7
;   ... and 33 more
;
; Called Functions:
;   FUN_00433d50
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0042e160
        ;   Label: FUN_0042e160
    PUSH EDI                            ; 0042e161
    SUB ESP,0xc                         ; 0042e162
    MOV EAX,dword ptr [ESP + 0x18]      ; 0042e165
    MOV EDI,ESP                         ; 0042e169
    LEA ESI,[EAX + 0x30]                ; 0042e16b
    MOV EDX,ESP                         ; 0042e16e
    MOVSD ES:EDI,ESI                    ; 0042e170
    MOVSD ES:EDI,ESI                    ; 0042e171
    MOVSD ES:EDI,ESI                    ; 0042e172
    PUSH EDX                            ; 0042e173
    FLD float ptr [ESP + 0x8]           ; 0042e174
    FADD float ptr [EAX + 0x2508]       ; 0042e178
    PUSH EAX                            ; 0042e17e
    FSTP float ptr [ESP + 0xc]          ; 0042e17f
    MOV dword ptr [EAX + 0x2508],0x0    ; 0042e183
    CALL FUN_00433d50                   ; 0042e18d
        ;   XREF to: 00433d50 (UNCONDITIONAL_CALL)  ; undefined FUN_00433d50()
    ADD ESP,0x8                         ; 0042e192
    ADD ESP,0xc                         ; 0042e195
    POP EDI                             ; 0042e198
    POP ESI                             ; 0042e199
    RET                                 ; 0042e19a

