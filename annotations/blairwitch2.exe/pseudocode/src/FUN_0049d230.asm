; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049d230(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[15]:
;   FUN_0040f950 at 0040fbe5
;   FUN_00412f40 at 004132df
;   FUN_0042a7a0 at 0042a91e
;   FUN_00436e80 at 0043720c
;   FUN_00462ff0 at 0046367e
;   FUN_0046d110 at 0046d3be
;   FUN_00486cb0 at 004870f8
;   FUN_00495960 at 00495a4f
;   FUN_00499930 at 004999b1
;   FUN_0049a3a0 at 0049a496
;   ... and 5 more
;
; Referenced Globals:
;   undefined4 DAT_01c3f8dc
;
; Called Functions:
;   FUN_00493510
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0049d230
        ;   Label: FUN_0049d230
    PUSH EDI                            ; 0049d231
    PUSH EBP                            ; 0049d232
    MOV EDX,dword ptr [0x01c3f8dc]      ; 0049d233 | DAT_01c3f8dc
    LEA EAX,[EDX*0x4 + 0x0]             ; 0049d239
    SUB EAX,EDX                         ; 0049d240
    SHL EAX,0x2                         ; 0049d242
    SUB EAX,EDX                         ; 0049d245
    SHL EAX,0x2                         ; 0049d247
    INC EDX                             ; 0049d24a
    ADD EAX,0x1c3f8e0                   ; 0049d24b
    MOV dword ptr [0x01c3f8dc],EDX      ; 0049d250 | DAT_01c3f8dc
    CMP EDX,0x800                       ; 0049d256
    JL 0x0049d268                       ; 0049d25c
        ;   XREF to: 0049d268 (CONDITIONAL_JUMP)  ; LAB_0049d268
    PUSH EBX                            ; 0049d25e
    XOR EBX,EBX                         ; 0049d25f
    MOV dword ptr [0x01c3f8dc],EBX      ; 0049d261 | DAT_01c3f8dc
    POP EBX                             ; 0049d267
    MOV ESI,dword ptr [ESP + 0x20]      ; 0049d268
        ;   Label: LAB_0049d268
    PUSH ESI                            ; 0049d26c
    MOV EDI,dword ptr [ESP + 0x20]      ; 0049d26d
    PUSH EDI                            ; 0049d271
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0049d272
    PUSH dword ptr [ESP + 0x20]         ; 0049d276
    PUSH EBP                            ; 0049d27a
    PUSH EAX                            ; 0049d27b
    CALL FUN_00493510                   ; 0049d27c
        ;   XREF to: 00493510 (UNCONDITIONAL_CALL)  ; undefined FUN_00493510()
    ADD ESP,0x14                        ; 0049d281
    POP EBP                             ; 0049d284
    POP EDI                             ; 0049d285
    POP ESI                             ; 0049d286
    RET                                 ; 0049d287

