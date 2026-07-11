; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0040a220(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[11]:
;   FUN_0040a740 at 0040a83a
;   FUN_0041ef90 at 0041efba
;   FUN_00425050 at 0042578b
;   FUN_00428780 at 004288c1
;   FUN_00429730 at 00429907
;   FUN_0042a060 at 0042a0c2
;   FUN_00482c80 at 00482e5a
;   FUN_0048b6f0 at 0048b947
;   FUN_004b4fe0 at 004b50b2
;   FUN_00510a40 at 00511236
;   ... and 1 more
;
; Called Functions:
;   FUN_0044daa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040a220
        ;   Label: FUN_0040a220
    MOV EBX,dword ptr [ESP + 0xc]       ; 0040a221
    MOV EDX,dword ptr [ESP + 0x10]      ; 0040a225
    PUSH EDX                            ; 0040a229
    MOV EAX,dword ptr [ESP + 0xc]       ; 0040a22a
    PUSH EBX                            ; 0040a22e
    ADD EAX,0x3c                        ; 0040a22f
    PUSH EAX                            ; 0040a232
    CALL FUN_0044daa0                   ; 0040a233
        ;   XREF to: 0044daa0 (UNCONDITIONAL_CALL)  ; undefined FUN_0044daa0()
    ADD ESP,0xc                         ; 0040a238
    MOV EAX,EBX                         ; 0040a23b
    POP EBX                             ; 0040a23d
    RET                                 ; 0040a23e

