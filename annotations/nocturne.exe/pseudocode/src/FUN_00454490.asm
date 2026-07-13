; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00454490(int param_1)
;
;
; XREF[37]:
;   FUN_0040eb70 at 0040eb86
;   FUN_0040fed0 at 0040fee4
;   FUN_00411a10 at 00411a32
;   FUN_00414d80 at 00414d94
;   FUN_00415370 at 00415386
;   FUN_004180e0 at 004180e8
;   FUN_0041e300 at 0041e314
;   FUN_0043c810 at 0043c824
;   FUN_00455050 at 00455066
;   FUN_00462060 at 00462076
;   ... and 27 more
;
; Called Functions:
;   FUN_004544b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00454490
        ;   Label: FUN_00454490
    MOV EBX,dword ptr [ESP + 0x8]       ; 00454491
    MOV byte ptr [EBX + 0x78],0x0       ; 00454495
    PUSH EBX                            ; 00454499
    MOV dword ptr [EBX + 0x178],0x0     ; 0045449a
    CALL FUN_004544b0                   ; 004544a4
        ;   XREF to: 004544b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004544b0()
    ADD ESP,0x4                         ; 004544a9
    MOV EAX,EBX                         ; 004544ac
    POP EBX                             ; 004544ae
    RET                                 ; 004544af

