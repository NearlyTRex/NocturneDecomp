; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00462470(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[3]:
;   FUN_00422ed0 at 00422eed
;   FUN_004cb7d0 at 004cb7df
;   FUN_0055cf80 at 0055d0bd
;
; Referenced Globals:
;   undefined1* PTR_FUN_005febf4 = 00462530
;
; Called Functions:
;   FUN_0044caa0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00462470
        ;   Label: FUN_00462470
    PUSH EDX                            ; 00462474
    CALL FUN_0044caa0                   ; 00462475
        ;   XREF to: 0044caa0 (UNCONDITIONAL_CALL)  ; undefined FUN_0044caa0()
    MOV dword ptr [EAX + 0x3c],0x5febf4 ; 0046247a | PTR_FUN_005febf4
    MOV dword ptr [EAX + 0x1cb4],0x1    ; 00462481
    MOV dword ptr [EAX + 0x1cb8],0x1    ; 0046248b
    MOV dword ptr [EAX + 0x2f94],0x0    ; 00462495
    MOV dword ptr [EAX + 0x2f98],0x0    ; 0046249f
    MOV dword ptr [EAX + 0x2f9c],0x0    ; 004624a9
    MOV dword ptr [EAX + 0x164],0x0     ; 004624b3
    MOV dword ptr [EAX + 0x140],0x437f0000 ; 004624bd
    MOV dword ptr [EAX + 0x2fa0],0x0    ; 004624c7
    MOV dword ptr [EAX + 0x1c6c],0x0    ; 004624d1
    MOV dword ptr [EAX + 0x1c54],0x0    ; 004624db
    MOV dword ptr [EAX + 0x2fa4],0x10000 ; 004624e5
    MOV dword ptr [EAX + 0x2fa8],0x3f800000 ; 004624ef
    MOV dword ptr [EAX + 0x1cbc],0x0    ; 004624f9
    ADD ESP,0x4                         ; 00462503
    MOV dword ptr [EAX + 0x1cd0],0x1    ; 00462506
    MOV EDX,dword ptr [ESP + 0x8]       ; 00462510
    MOV dword ptr [EAX + 0x1cc0],EDX    ; 00462514
    MOV EDX,dword ptr [ESP + 0xc]       ; 0046251a
    MOV dword ptr [EAX + 0x1cc4],EDX    ; 0046251e
    RET                                 ; 00462524

