; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a08d0(undefined4 param_1)
;
;
; XREF[14]:
;   FUN_00401010 at 004010a7
;   FUN_00401590 at 00401596
;   FUN_00402940 at 00402954
;   FUN_00437490 at 004374af
;   FUN_0043b2e0 at 0043b309
;   FUN_004c0cd0 at 004c0e4d
;   FUN_004d6420 at 004d66d0
;   FUN_004d6990 at 004d6bf5
;   FUN_0053b250 at 0053b285
;   FUN_0056e130 at 0056e237
;   ... and 4 more
;
; Referenced Globals:
;   undefined1* PTR_FUN_00607384 = 005a0a50
;
; Called Functions:
;   FUN_0059f540
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a08d0
        ;   Label: FUN_005a08d0
    PUSH EDX                            ; 005a08d4
    CALL FUN_0059f540                   ; 005a08d5
        ;   XREF to: 0059f540 (UNCONDITIONAL_CALL)  ; undefined FUN_0059f540()
    MOV dword ptr [EAX],0x607384        ; 005a08da | PTR_FUN_00607384
    MOV dword ptr [EAX + 0x4],0x0       ; 005a08e0
    MOV dword ptr [EAX + 0x8],0x0       ; 005a08e7
    MOV dword ptr [EAX + 0xc],0x0       ; 005a08ee
    MOV dword ptr [EAX + 0x10],0x0      ; 005a08f5
    MOV dword ptr [EAX + 0x14],0x0      ; 005a08fc
    MOV dword ptr [EAX + 0x18],0x0      ; 005a0903
    MOV dword ptr [EAX + 0x1c],0x0      ; 005a090a
    MOV dword ptr [EAX + 0x20],0x0      ; 005a0911
    ADD ESP,0x4                         ; 005a0918
    MOV dword ptr [EAX + 0x24],0x0      ; 005a091b
    RET                                 ; 005a0922

