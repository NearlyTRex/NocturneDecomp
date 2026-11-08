; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00479460(int param_1)
;
;
; XREF[7]:
;   FUN_00479340 at 00479346
;   FUN_00479360 at 0047936f
;   FUN_00499ed0 at 0049a078
;   FUN_0049a0d0 at 0049a277
;   FUN_0049a300 at 0049a3a5
;   FUN_0049a480 at 0049a580
;   FUN_0053d580 at 0053d602
;
; Referenced Globals:
;   void* PTR_FindClose_005d0554 = 001d0d5e
;
; Called Functions:
;   FindClose
;   FUN_004794a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00479460
        ;   Label: FUN_00479460
    MOV EBX,dword ptr [ESP + 0x8]       ; 00479461
    CMP dword ptr [EBX + 0x10c],0x0     ; 00479465
    JNZ 0x00479479                      ; 0047946c
        ;   XREF to: 00479479 (CONDITIONAL_JUMP)  ; LAB_00479479
    PUSH EBX                            ; 0047946e
    CALL FUN_004794a0                   ; 0047946f
        ;   XREF to: 004794a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004794a0()
    ADD ESP,0x4                         ; 00479474
    POP EBX                             ; 00479477
    RET                                 ; 00479478
    MOV ECX,dword ptr [EBX + 0x110]     ; 00479479
        ;   Label: LAB_00479479
    PUSH ECX                            ; 0047947f
    CALL dword ptr CS:[0x5d0554]        ; 00479480 | PTR_FindClose_005d0554
    MOV dword ptr [EBX + 0x10c],0x0     ; 00479487
    PUSH EBX                            ; 00479491
    CALL FUN_004794a0                   ; 00479492
        ;   XREF to: 004794a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004794a0()
    ADD ESP,0x4                         ; 00479497
    POP EBX                             ; 0047949a
    RET                                 ; 0047949b

