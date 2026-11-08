; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00418b40(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_00418940 at 00418a50
;
; Referenced Globals:
;   void* PTR_FUN_005fcad4 = 00419350
;   undefined4 DAT_005fcbb0
;   undefined4 DAT_005fcbd0
;
; Called Functions:
;   FUN_004085c0
;   FUN_0041da00
;   FUN_005c0357
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00418b40
        ;   Label: FUN_00418b40
    PUSH EAX                            ; 00418b44
    CALL FUN_004085c0                   ; 00418b45
        ;   XREF to: 004085c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004085c0()
    ADD ESP,0x4                         ; 00418b4a
    PUSH 0x5fcbb0                       ; 00418b4d | DAT_005fcbb0
    PUSH 0x3                            ; 00418b52
    ADD EAX,0x290                       ; 00418b54
    PUSH EAX                            ; 00418b59
    CALL FUN_005c0357                   ; 00418b5a
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0357()
    ADD ESP,0xc                         ; 00418b5f
    PUSH 0x5fcbd0                       ; 00418b62 | DAT_005fcbd0
    PUSH 0x2                            ; 00418b67
    ADD EAX,0x4c0                       ; 00418b69
    PUSH EAX                            ; 00418b6e
    CALL FUN_005c0357                   ; 00418b6f
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0357()
    ADD ESP,0xc                         ; 00418b74
    ADD EAX,0x580                       ; 00418b77
    PUSH EAX                            ; 00418b7c
    CALL FUN_0041da00                   ; 00418b7d
        ;   XREF to: 0041da00 (UNCONDITIONAL_CALL)  ; undefined FUN_0041da00()
    SUB EAX,0xcd0                       ; 00418b82
    MOV dword ptr [EAX + 0x154],0x5fcad4 ; 00418b87 | PTR_FUN_005fcad4
    MOV dword ptr [EAX + 0xf2c],0x0     ; 00418b91
    MOV dword ptr [EAX + 0x174],0x0     ; 00418b9b
    MOV dword ptr [EAX + 0x178],0x0     ; 00418ba5
    MOV dword ptr [EAX + 0x17c],0x0     ; 00418baf
    MOV dword ptr [EAX + 0x180],0x0     ; 00418bb9
    MOV dword ptr [EAX + 0x184],0x0     ; 00418bc3
    MOV dword ptr [EAX + 0x188],0x0     ; 00418bcd
    MOV dword ptr [EAX + 0x18c],0x0     ; 00418bd7
    LEA EDX,[EAX + 0x280]               ; 00418be1
    MOV dword ptr [EAX + 0x158],0x0     ; 00418be7
    MOV dword ptr [EDX + 0x8],0x0       ; 00418bf1
    MOV ECX,dword ptr [EDX + 0x8]       ; 00418bf8
    MOV dword ptr [EDX + 0x4],ECX       ; 00418bfb
    MOV ECX,dword ptr [EDX + 0x4]       ; 00418bfe
    MOV dword ptr [EDX],ECX             ; 00418c01
    MOV dword ptr [EAX + 0x74c],0x0     ; 00418c03
    MOV dword ptr [EAX + 0x28c],0x0     ; 00418c0d
    MOV dword ptr [EAX + 0xcbc],0x40a00000 ; 00418c17
    MOV dword ptr [EAX + 0xcb8],0x0     ; 00418c21
    MOV dword ptr [EAX + 0xcc0],0xffff  ; 00418c2b
    MOV dword ptr [EAX + 0xf30],0x0     ; 00418c35
    MOV dword ptr [EAX + 0xcc4],0x0     ; 00418c3f
    MOV dword ptr [EAX + 0xcc8],0x0     ; 00418c49
    ADD ESP,0x4                         ; 00418c53
    MOV dword ptr [EAX + 0xccc],0x0     ; 00418c56
    RET                                 ; 00418c60

