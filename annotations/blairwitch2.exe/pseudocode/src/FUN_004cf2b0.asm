; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_004cf2b0(int param_1)
;
; Local Variables:
; undefined8       Stack[-0x60]:8  local_60
; undefined        Stack[-0x58]:1  local_58
; undefined        Stack[-0x4c]:1  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined        Stack[-0x34]:1  local_34
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[7]:
;   FUN_00435830 at 00435cb8
;   FUN_004ad640 at 004ae95b
;   FUN_004cc990 at 004cce4a
;   FUN_004d0780 at 004d0858
;   FUN_004d4c50 at 004d522f
;   FUN_0056e4d0 at 0056e724
;   FUN_00570510 at 00570ab4
;
; Referenced Globals:
;   undefined4 DAT_005d9c94
;   undefined4 DAT_005d9c9c
;   undefined4 DAT_0061b5a8
;   undefined4 DAT_01d03500
;   undefined4 DAT_01fb331c
;   undefined4 DAT_01fb3320
;
; Called Functions:
;   FUN_00408de0
;   FUN_0040c8f0
;   FUN_004e24e0
;   FUN_005838f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cf2b0
        ;   Label: FUN_004cf2b0
    PUSH ESI                            ; 004cf2b1
    PUSH EDI                            ; 004cf2b2
    PUSH EBP                            ; 004cf2b3
    MOV EBP,ESP                         ; 004cf2b4
    SUB ESP,0x50                        ; 004cf2b6
    AND ESP,0xfffffff8                  ; 004cf2b9
    MOV EDX,0x7149f2ca                  ; 004cf2bc
    MOV EAX,dword ptr [EBP + 0x14]      ; 004cf2c1
    XOR ECX,ECX                         ; 004cf2c4
    MOV dword ptr [ESP + 0x3c],EDX      ; 004cf2c6
    MOV dword ptr [ESP + 0x48],ECX      ; 004cf2ca
    ADD EAX,0x20                        ; 004cf2ce
    MOV dword ptr [ESP + 0x4c],ECX      ; 004cf2d1
    MOV dword ptr [ESP + 0x38],EAX      ; 004cf2d5
    MOV EBX,dword ptr [0x0061b5a8]      ; 004cf2d9 | DAT_0061b5a8
        ;   Label: LAB_004cf2d9
    MOV EAX,dword ptr [ESP + 0x48]      ; 004cf2df
    CMP EAX,dword ptr [EBX + 0x14d164]  ; 004cf2e3 | DAT_01fb331c
    JL 0x004cf304                       ; 004cf2e9
        ;   XREF to: 004cf304 (CONDITIONAL_JUMP)  ; LAB_004cf304
    MOV EAX,dword ptr [EBP + 0x14]      ; 004cf2eb
    CMP dword ptr [EAX + 0x255f0],0x7   ; 004cf2ee
    SETZ AL                             ; 004cf2f5
    AND EAX,0xff                        ; 004cf2f8
    MOV ESP,EBP                         ; 004cf2fd
    POP EBP                             ; 004cf2ff
    POP EDI                             ; 004cf300
    POP ESI                             ; 004cf301
    POP EBX                             ; 004cf302
    RET                                 ; 004cf303
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004cf304
        ;   Label: LAB_004cf304
    MOV EDI,dword ptr [0x01d03500]      ; 004cf308 | DAT_01d03500
    ADD EBX,EAX                         ; 004cf30e
    PUSH EDI                            ; 004cf310
    MOV EDX,dword ptr [EBX + 0x14d168]  ; 004cf311 | DAT_01fb3320
    PUSH EDX                            ; 004cf317
    CALL FUN_0040c8f0                   ; 004cf318
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c8f0()
    MOV EBX,EAX                         ; 004cf31d
    ADD ESP,0x8                         ; 004cf31f
    TEST EAX,EAX                        ; 004cf322
    JZ 0x004cf41c                       ; 004cf324
        ;   XREF to: 004cf41c (CONDITIONAL_JUMP)  ; LAB_004cf41c
    ADD EAX,0x20                        ; 004cf32a
    PUSH EAX                            ; 004cf32d
    MOV ECX,dword ptr [EBP + 0x14]      ; 004cf32e
    PUSH ECX                            ; 004cf331
    LEA ESI,[ESP + 0x34]                ; 004cf332
    LEA EDI,[ESP + 0x28]                ; 004cf336
    CALL FUN_00408de0                   ; 004cf33a
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408de0()
    LEA ESI,[ESP + 0x34]                ; 004cf33f
    ADD ESP,0x8                         ; 004cf343
    MOVSD ES:EDI,ESI                    ; 004cf346
    MOVSD ES:EDI,ESI                    ; 004cf347
    MOVSD ES:EDI,ESI                    ; 004cf348
    FLD float ptr [ESP + 0x24]          ; 004cf349
    FABS                                ; 004cf34d
    FCOMP double ptr [0x005d9c94]       ; 004cf34f | DAT_005d9c94
    FNSTSW AX                           ; 004cf355
    SAHF                                ; 004cf357
    JA 0x004cf41c                       ; 004cf358
        ;   XREF to: 004cf41c (CONDITIONAL_JUMP)  ; LAB_004cf41c
    FLD float ptr [ESP + 0x28]          ; 004cf35e
    FLDZ                                ; 004cf362
    FXCH                                ; 004cf364
    FSTP double ptr [ESP]               ; 004cf366
    FCOMP double ptr [ESP]              ; 004cf369
    FNSTSW AX                           ; 004cf36c
    SAHF                                ; 004cf36e
    JA 0x004cf41c                       ; 004cf36f
        ;   XREF to: 004cf41c (CONDITIONAL_JUMP)  ; LAB_004cf41c
    FLD double ptr [ESP]                ; 004cf375
    FCOMP double ptr [0x005d9c9c]       ; 004cf378 | DAT_005d9c9c
    FNSTSW AX                           ; 004cf37e
    SAHF                                ; 004cf380
    JA 0x004cf41c                       ; 004cf381
        ;   XREF to: 004cf41c (CONDITIONAL_JUMP)  ; LAB_004cf41c
    FLD float ptr [ESP + 0x20]          ; 004cf387
    FABS                                ; 004cf38b
    FCOMP double ptr [0x005d9c9c]       ; 004cf38d | DAT_005d9c9c
    FNSTSW AX                           ; 004cf393
    SAHF                                ; 004cf395
    JA 0x004cf41c                       ; 004cf396
        ;   XREF to: 004cf41c (CONDITIONAL_JUMP)  ; LAB_004cf41c
    LEA EAX,[ESP + 0x20]                ; 004cf39c
    PUSH EAX                            ; 004cf3a0
    LEA ESI,[ESP + 0xc]                 ; 004cf3a1
    LEA EDI,[ESP + 0x18]                ; 004cf3a5
    CALL FUN_005838f0                   ; 004cf3a9
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005838f0()
    LEA ESI,[ESP + 0xc]                 ; 004cf3ae
    ADD ESP,0x4                         ; 004cf3b2
    MOVSD ES:EDI,ESI                    ; 004cf3b5
    MOVSD ES:EDI,ESI                    ; 004cf3b6
    MOVSD ES:EDI,ESI                    ; 004cf3b7
    FLD float ptr [ESP + 0x18]          ; 004cf3b8
    FABS                                ; 004cf3bc
    FSTP float ptr [ESP + 0x40]         ; 004cf3be
    CMP dword ptr [ESP + 0x40],0x3f860a92 ; 004cf3c2
    JG 0x004cf41c                       ; 004cf3ca
        ;   XREF to: 004cf41c (CONDITIONAL_JUMP)  ; LAB_004cf41c
    MOV EDI,dword ptr [ESP + 0x38]      ; 004cf3cc
    PUSH EDI                            ; 004cf3d0
    PUSH EBX                            ; 004cf3d1
    CALL FUN_004e24e0                   ; 004cf3d2
        ;   XREF to: 004e24e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e24e0()
    ADD ESP,0x8                         ; 004cf3d7
    TEST EAX,EAX                        ; 004cf3da
    JZ 0x004cf41c                       ; 004cf3dc
        ;   XREF to: 004cf41c (CONDITIONAL_JUMP)  ; LAB_004cf41c
    FLD float ptr [ESP + 0x40]          ; 004cf3de
    FCHS                                ; 004cf3e2
    FST float ptr [ESP + 0x44]          ; 004cf3e4
    FCOMP float ptr [ESP + 0x3c]        ; 004cf3e8
    FNSTSW AX                           ; 004cf3ec
    SAHF                                ; 004cf3ee
    JA 0x004cf41c                       ; 004cf3ef
        ;   XREF to: 004cf41c (CONDITIONAL_JUMP)  ; LAB_004cf41c
    MOV EAX,dword ptr [ESP + 0x44]      ; 004cf3f1
    MOV dword ptr [ESP + 0x3c],EAX      ; 004cf3f5
    MOV EAX,dword ptr [EBP + 0x14]      ; 004cf3f9
    MOV dword ptr [EAX + 0x255f0],0x7   ; 004cf3fc
    MOV dword ptr [EAX + 0x25600],0x0   ; 004cf406
    MOV dword ptr [EAX + 0x255f4],EBX   ; 004cf410
    MOV dword ptr [EAX + 0x255f8],EBX   ; 004cf416
    MOV EDX,dword ptr [ESP + 0x48]      ; 004cf41c
        ;   Label: LAB_004cf41c
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004cf420
    INC EDX                             ; 004cf424
    ADD EAX,0x4                         ; 004cf425
    MOV dword ptr [ESP + 0x48],EDX      ; 004cf428
    MOV dword ptr [ESP + 0x4c],EAX      ; 004cf42c
    JMP 0x004cf2d9                      ; 004cf430
        ;   XREF to: 004cf2d9 (UNCONDITIONAL_JUMP)  ; LAB_004cf2d9

