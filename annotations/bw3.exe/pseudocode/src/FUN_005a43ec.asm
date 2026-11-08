; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a43ec(undefined4 param_1,undefined4 param_2)
;
;
; XREF[22]:
;   FUN_00441ff0 at 00442087
;   FUN_004659c0 at 00465a1a
;   FUN_0048c2e0 at 0048c464
;   FUN_004946f0 at 004947d4
;   FUN_004948e0 at 004949c4
;   FUN_004bda10 at 004bdaef
;   FUN_004bdfb0 at 004be351
;   FUN_004be8d0 at 004be966
;   FUN_004d8290 at 004d82b7
;   FUN_004d8470 at 004d8498
;   ... and 12 more
;
; Called Functions:
;   FUN_005a4390
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a43ec
        ;   Label: FUN_005a43ec
    PUSH 0x0                            ; 005a43ed
    MOV EDX,dword ptr [ESP + 0x10]      ; 005a43ef
    PUSH EDX                            ; 005a43f3
    MOV EBX,dword ptr [ESP + 0x10]      ; 005a43f4
    PUSH EBX                            ; 005a43f8
    CALL FUN_005a4390                   ; 005a43f9
        ;   XREF to: 005a4390 (UNCONDITIONAL_CALL)  ; undefined FUN_005a4390()
    ADD ESP,0xc                         ; 005a43fe
    POP EBX                             ; 005a4401
    RET                                 ; 005a4402

