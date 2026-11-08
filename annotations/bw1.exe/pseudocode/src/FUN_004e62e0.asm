; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e62e0(undefined4 param_1,undefined4 param_2,int param_3)
;
;
; XREF[21]:
;   FUN_004115b0 at 00411990
;   FUN_00412ba0 at 00413340
;   FUN_00415340 at 00415435
;   FUN_00423b70 at 00423d95
;   FUN_00428ae0 at 00429b0f
;   FUN_00448570 at 0044891a
;   FUN_00459100 at 0045a480
;   FUN_004768a0 at 00476ce4
;   FUN_0047b510 at 0047c2d9
;   FUN_00485d70 at 00486246
;   ... and 11 more
;
; Called Functions:
;   FUN_004e5570
;   FUN_004e6290
;
; *****************************************************************************

section .text

    CMP dword ptr [ESP + 0xc],0x2       ; 004e62e0
        ;   Label: FUN_004e62e0
    JNZ 0x004e62e8                      ; 004e62e5
        ;   XREF to: 004e62e8 (CONDITIONAL_JUMP)  ; LAB_004e62e8
    RET                                 ; 004e62e7
    PUSH ESI                            ; 004e62e8
        ;   Label: LAB_004e62e8
    PUSH EBX                            ; 004e62e9
    MOV ECX,dword ptr [ESP + 0xc]       ; 004e62ea
    PUSH ECX                            ; 004e62ee
    CALL FUN_004e6290                   ; 004e62ef
        ;   XREF to: 004e6290 (UNCONDITIONAL_CALL)  ; undefined FUN_004e6290()
    ADD ESP,0x4                         ; 004e62f4
    MOV EBX,dword ptr [ESP + 0x14]      ; 004e62f7
    PUSH EBX                            ; 004e62fb
    MOV ESI,dword ptr [ESP + 0x14]      ; 004e62fc
    PUSH ESI                            ; 004e6300
    PUSH EAX                            ; 004e6301
    CALL FUN_004e5570                   ; 004e6302
        ;   XREF to: 004e5570 (UNCONDITIONAL_CALL)  ; undefined FUN_004e5570()
    ADD ESP,0xc                         ; 004e6307
    POP EBX                             ; 004e630a
    POP ESI                             ; 004e630b
    RET                                 ; 004e630c

