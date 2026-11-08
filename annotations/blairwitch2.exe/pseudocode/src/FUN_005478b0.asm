; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005478b0(int param_1,char *param_2)
;
;
; XREF[73]:
;   FUN_0040bae0 at 0040bb11
;   FUN_0040ee40 at 0040ee6d
;   FUN_0040f690 at 0040f6b4
;   FUN_00411690 at 004116b2
;   FUN_00412b20 at 00412b4f
;   FUN_00414a00 at 00414a22
;   FUN_00414d10 at 00414d58
;   FUN_004182d0 at 00418314
;   FUN_0041d950 at 0041d972
;   FUN_0041ef50 at 0041f019
;   ... and 63 more
;
; Called Functions:
;   FUN_00547440
;   FUN_00547460
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005478b0
        ;   Label: FUN_005478b0
    PUSH ESI                            ; 005478b1
    PUSH EDI                            ; 005478b2
    MOV EBX,dword ptr [ESP + 0x10]      ; 005478b3
    MOV ESI,dword ptr [ESP + 0x14]      ; 005478b7
    LEA EDI,[EBX + 0x2260]              ; 005478bb
    PUSH EDI                            ; 005478c1
    MOV AL,byte ptr [ESI]               ; 005478c2
        ;   Label: LAB_005478c2
    MOV byte ptr [EDI],AL               ; 005478c4
    CMP AL,0x0                          ; 005478c6
    JZ 0x005478da                       ; 005478c8
        ;   XREF to: 005478da (CONDITIONAL_JUMP)  ; LAB_005478da
    MOV AL,byte ptr [ESI + 0x1]         ; 005478ca
    ADD ESI,0x2                         ; 005478cd
    MOV byte ptr [EDI + 0x1],AL         ; 005478d0
    ADD EDI,0x2                         ; 005478d3
    CMP AL,0x0                          ; 005478d6
    JNZ 0x005478c2                      ; 005478d8
        ;   XREF to: 005478c2 (CONDITIONAL_JUMP)  ; LAB_005478c2
    POP EDI                             ; 005478da
        ;   Label: LAB_005478da
    PUSH EBX                            ; 005478db
    MOV dword ptr [EBX + 0x22b0],0x0    ; 005478dc
    CALL FUN_00547440                   ; 005478e6
        ;   XREF to: 00547440 (UNCONDITIONAL_CALL)  ; undefined FUN_00547440()
    ADD ESP,0x4                         ; 005478eb
    PUSH EBX                            ; 005478ee
    CALL FUN_00547460                   ; 005478ef
        ;   XREF to: 00547460 (UNCONDITIONAL_CALL)  ; undefined FUN_00547460()
    ADD ESP,0x4                         ; 005478f4
    MOV dword ptr [EBX + 0x2230],0xffffffff ; 005478f7
    POP EDI                             ; 00547901
    POP ESI                             ; 00547902
    POP EBX                             ; 00547903
    RET                                 ; 00547904

