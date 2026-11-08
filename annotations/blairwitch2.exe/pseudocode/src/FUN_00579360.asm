; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_00579360(undefined4 *param_1)
;
;
; XREF[5]:
;   FUN_0050b3f0 at 0050b409
;   FUN_0050b790 at 0050b7b2
;   FUN_00579010 at 00579016
;   FUN_00579030 at 00579036
;   FUN_00579060 at 00579066
;
; Called Functions:
;   FUN_00579090
;   Ordinal_3
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00579360
        ;   Label: FUN_00579360
    MOV EBX,dword ptr [ESP + 0x8]       ; 00579361
    PUSH EBX                            ; 00579365
    CALL FUN_00579090                   ; 00579366
        ;   XREF to: 00579090 (UNCONDITIONAL_CALL)  ; undefined FUN_00579090()
    ADD ESP,0x4                         ; 0057936b
    TEST EAX,EAX                        ; 0057936e
    JNZ 0x00579379                      ; 00579370
        ;   XREF to: 00579379 (CONDITIONAL_JUMP)  ; LAB_00579379
    MOV EAX,0x1                         ; 00579372
    POP EBX                             ; 00579377
    RET                                 ; 00579378
    MOV EDX,dword ptr [EBX]             ; 00579379
        ;   Label: LAB_00579379
    PUSH EDX                            ; 0057937b
    CALL Ordinal_3                      ; 0057937c
        ;   XREF to: 005c74f0 (UNCONDITIONAL_CALL)  ; undefined Ordinal_3()
    TEST EAX,EAX                        ; 00579381
    SETZ AL                             ; 00579383
    AND EAX,0xff                        ; 00579386
    MOV dword ptr [EBX],0xffffffff      ; 0057938b
    POP EBX                             ; 00579391
    RET                                 ; 00579392

