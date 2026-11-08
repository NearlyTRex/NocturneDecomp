; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004f7260(float param_1)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004f7280 at 004f72e7
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f7260
        ;   Label: FUN_004f7260
    PUSH ESI                            ; 004f7261
    PUSH EDI                            ; 004f7262
    PUSH EBP                            ; 004f7263
    MOV EBP,ESP                         ; 004f7264
    SUB ESP,0x4                         ; 004f7266
    FLD float ptr [EBP + 0x14]          ; 004f7269
    FISTP dword ptr [EBP + 0xfffffffc]  ; 004f726f
    MOV EAX,dword ptr [EBP + -0x4]      ; 004f7275
    MOV ESP,EBP                         ; 004f7278
    POP EBP                             ; 004f727a
    POP EDI                             ; 004f727b
    POP ESI                             ; 004f727c
    POP EBX                             ; 004f727d
    RET                                 ; 004f727e

