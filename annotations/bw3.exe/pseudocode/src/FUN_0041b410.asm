; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0041b410(undefined4 param_1,float param_2)
;
; Local Variables:
; undefined8       Stack[-0x18]:8  local_18
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[5]:
;   FUN_00415350 at 00415466
;   FUN_0041f360 at 0041f5c3
;   FUN_0049d090 at 0049d24d
;   FUN_005473c0 at 0054755a
;   FUN_0057b160 at 0057b1c9
;
; Referenced Globals:
;   undefined4 DAT_005b7381
;   undefined4 DAT_005b7389
;
; Called Functions:
;   FUN_0041b470
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041b410
        ;   Label: FUN_0041b410
    PUSH EBP                            ; 0041b411
    MOV EBP,ESP                         ; 0041b412
    SUB ESP,0xc                         ; 0041b414
    AND ESP,0xfffffff8                  ; 0041b417
    MOV EBX,dword ptr [EBP + 0xc]       ; 0041b41a
    FLD float ptr [EBP + 0x10]          ; 0041b41d
    FST double ptr [ESP]                ; 0041b420
    FCOMP double ptr [0x005b7381]       ; 0041b423 | DAT_005b7381
    FNSTSW AX                           ; 0041b429
    SAHF                                ; 0041b42b
    JBE 0x0041b45a                      ; 0041b42c
        ;   XREF to: 0041b45a (CONDITIONAL_JUMP)  ; LAB_0041b45a
    FLD double ptr [ESP]                ; 0041b42e
    FMUL double ptr [0x005b7389]        ; 0041b431 | DAT_005b7389
    FSTP float ptr [ESP + 0x8]          ; 0041b437
    PUSH dword ptr [ESP + 0x8]          ; 0041b43b
    PUSH EBX                            ; 0041b43f
    CALL FUN_0041b410                   ; 0041b440
        ;   XREF to: 0041b410 (UNCONDITIONAL_CALL)  ; undefined FUN_0041b410()
    ADD ESP,0x8                         ; 0041b445
    PUSH dword ptr [ESP + 0x8]          ; 0041b448
    PUSH EBX                            ; 0041b44c
    CALL FUN_0041b410                   ; 0041b44d
        ;   XREF to: 0041b410 (UNCONDITIONAL_CALL)  ; undefined FUN_0041b410()
    ADD ESP,0x8                         ; 0041b452
    MOV ESP,EBP                         ; 0041b455
    POP EBP                             ; 0041b457
    POP EBX                             ; 0041b458
    RET                                 ; 0041b459
    PUSH dword ptr [EBP + 0x10]         ; 0041b45a
        ;   Label: LAB_0041b45a
    PUSH EBX                            ; 0041b45d
    CALL FUN_0041b470                   ; 0041b45e
        ;   XREF to: 0041b470 (UNCONDITIONAL_CALL)  ; undefined FUN_0041b470()
    ADD ESP,0x8                         ; 0041b463
    MOV ESP,EBP                         ; 0041b466
    POP EBP                             ; 0041b468
    POP EBX                             ; 0041b469
    RET                                 ; 0041b46a

