; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00435320(int param_1,float param_2)
;
;
; XREF[40]:
;   FUN_0040eaa0 at 0040eb19
;   FUN_0040f4d0 at 0040f59b
;   FUN_004115b0 at 00411638
;   FUN_00412ba0 at 00412c28
;   FUN_00414b30 at 00414b9d
;   FUN_00415340 at 00415460
;   FUN_0041bb40 at 0041bf70
;   FUN_00423b70 at 00423c6f
;   FUN_00428ae0 at 00429b7a
;   FUN_00445cb0 at 00446588
;   ... and 30 more
;
; Referenced Globals:
;   TerminatedCString s_ghost_005d5fe3
;   undefined4 DAT_0061d95c
;   undefined4 DAT_01ccf5d4
;
; Called Functions:
;   FUN_005c1210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00435320
        ;   Label: FUN_00435320
    PUSH EBP                            ; 00435321
    MOV EBP,ESP                         ; 00435322
    MOV EBX,dword ptr [EBP + 0xc]       ; 00435324
    MOV EAX,[0x0061d95c]                ; 00435327 | DAT_0061d95c
    CMP dword ptr [EAX + 0x244],0x0     ; 0043532c | DAT_01ccf5d4
    JNZ 0x00435361                      ; 00435333
        ;   XREF to: 00435361 (CONDITIONAL_JUMP)  ; LAB_00435361
    FLD float ptr [EBX + 0x252c]        ; 00435335
    FMUL float ptr [EBP + 0x10]         ; 0043533b
        ;   Label: LAB_0043533b
    FSTP float ptr [EBX + 0x2528]       ; 0043533e
    PUSH 0x5                            ; 00435344
    PUSH 0x5d5fe3                       ; 00435346 | = "ghost"
    LEA EAX,[EBX + 0x24a8]              ; 0043534b
    PUSH EAX                            ; 00435351
    CALL FUN_005c1210                   ; 00435352
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1210()
    ADD ESP,0xc                         ; 00435357
    TEST EAX,EAX                        ; 0043535a
    JZ 0x00435369                       ; 0043535c
        ;   XREF to: 00435369 (CONDITIONAL_JUMP)  ; LAB_00435369
    POP EBP                             ; 0043535e
    POP EBX                             ; 0043535f
    RET                                 ; 00435360
    FLD float ptr [EBX + 0x2530]        ; 00435361
        ;   Label: LAB_00435361
    JMP 0x0043533b                      ; 00435367
        ;   XREF to: 0043533b (UNCONDITIONAL_JUMP)  ; LAB_0043533b
    FLD float ptr [EBX + 0x2534]        ; 00435369
        ;   Label: LAB_00435369
    FMUL float ptr [EBP + 0x10]         ; 0043536f
    FSTP float ptr [EBX + 0x2528]       ; 00435372
    POP EBP                             ; 00435378
    POP EBX                             ; 00435379
    RET                                 ; 0043537a

