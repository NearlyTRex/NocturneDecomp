; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c2ab4(void)
;
;
; XREF[1]:
;   FUN_005c67b0 at 005c67d2
;
; Referenced Globals:
;   void* PTR_TlsSetValue_005c8658 = 001c9238
;   undefined4 DAT_0061f2a0
;   void* PTR_FUN_0061f2a4 = 005bcdfc
;   void* PTR_FUN_0061f2a8 = 005bce04
;   void* PTR_FUN_0061f2ac = 005bce04
;   void* PTR_FUN_0061f2b0 = 005bce08
;   void* PTR_FUN_0061f2b4 = 005bce18
;   void* PTR_FUN_0061f2b8 = 005bce04
;   void* PTR_FUN_0061f2bc = 005bce04
;   void* PTR_FUN_0061f2c0 = 005bce04
;   void* PTR_FUN_0061f2c4 = 005bce04
;   void* PTR_FUN_0061f2c8 = 005bce04
;   void* PTR_FUN_0061f2cc = 005bce04
;   void* PTR_FUN_0061f2d0 = 005bce04
;   void* PTR_FUN_0061f2d4 = 005bce04
;   ... and 9 more
;
; Called Functions:
;   FUN_005c2624
;   FUN_005c4b60
;   TlsSetValue
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c2ab4
        ;   Label: FUN_005c2ab4
    PUSH ESI                            ; 005c2ab5
    PUSH EDI                            ; 005c2ab6
    PUSH EBP                            ; 005c2ab7
    MOV EDX,0x5c280c                    ; 005c2ab8 | LAB_005c280c
    MOV EBX,0x5c2828                    ; 005c2abd | LAB_005c2828
    MOV ECX,0x5c2844                    ; 005c2ac2 | LAB_005c2844
    MOV ESI,0x5c2854                    ; 005c2ac7 | LAB_005c2854
    MOV EDI,0x5c27ec                    ; 005c2acc | LAB_005c27ec
    MOV EBP,0x5c27fc                    ; 005c2ad1 | LAB_005c27fc
    MOV EAX,0x5c28bc                    ; 005c2ad6 | LAB_005c28bc
    MOV dword ptr [0x0061f2a8],EDX      ; 005c2adb | PTR_FUN_0061f2a8
    MOV dword ptr [0x0061f2ac],EBX      ; 005c2ae1 | PTR_FUN_0061f2ac
    MOV dword ptr [0x0061f2b0],ECX      ; 005c2ae7 | PTR_FUN_0061f2b0
    MOV dword ptr [0x0061f2b4],ESI      ; 005c2aed | PTR_FUN_0061f2b4
    MOV dword ptr [0x0061f2b8],EDI      ; 005c2af3 | PTR_FUN_0061f2b8
    MOV dword ptr [0x0061f2bc],EBP      ; 005c2af9 | PTR_FUN_0061f2bc
    MOV [0x0061f2d0],EAX                ; 005c2aff | PTR_FUN_0061f2d0
    MOV EDX,0x5c28cc                    ; 005c2b04 | LAB_005c28cc
    MOV EBX,0x5c2760                    ; 005c2b09
    MOV ECX,0x5c27c4                    ; 005c2b0e
    MOV ESI,0x5c274c                    ; 005c2b13
    MOV EDI,0x5c287c                    ; 005c2b18 | LAB_005c287c
    MOV EBP,0x5c289c                    ; 005c2b1d | LAB_005c289c
    MOV EAX,0x5c288c                    ; 005c2b22 | LAB_005c288c
    MOV dword ptr [0x0061f2d4],EDX      ; 005c2b27 | PTR_FUN_0061f2d4
    MOV dword ptr [0x0061f6c0],EBX      ; 005c2b2d | PTR_FUN_0061f6c0
    MOV dword ptr [0x0061f6c4],ECX      ; 005c2b33 | PTR_FUN_0061f6c4
    MOV dword ptr [0x0061f6c8],ESI      ; 005c2b39 | PTR_FUN_0061f6c8
    MOV dword ptr [0x0061f2c0],EDI      ; 005c2b3f | PTR_FUN_0061f2c0
    MOV dword ptr [0x0061f2c4],EBP      ; 005c2b45 | PTR_FUN_0061f2c4
    MOV [0x0061f2c8],EAX                ; 005c2b4b | PTR_FUN_0061f2c8
    MOV EDX,0x5c28ac                    ; 005c2b50 | LAB_005c28ac
    MOV EBX,0x1                         ; 005c2b55
    MOV ESI,0x5c28ec                    ; 005c2b5a | LAB_005c28ec
    MOV EDI,0x5c2a88                    ; 005c2b5f | LAB_005c2a88
    MOV dword ptr [0x0061f2cc],EDX      ; 005c2b64 | PTR_FUN_0061f2cc
    CALL FUN_005c2624                   ; 005c2b6a
        ;   XREF to: 005c2624 (UNCONDITIONAL_CALL)  ; undefined FUN_005c2624()
    MOV ECX,0x5c28dc                    ; 005c2b6f | LAB_005c28dc
    MOV EBP,dword ptr [0x0268017c]      ; 005c2b74 | DAT_0268017c
    MOV [0x02681040],EAX                ; 005c2b7a | DAT_02681040
    MOV dword ptr [0x02681044],EBX      ; 005c2b7f | DAT_02681044
    PUSH EBP                            ; 005c2b85
    MOV EDX,dword ptr [EBP + 0xda]      ; 005c2b86
    MOV dword ptr [0x0061f2dc],ESI      ; 005c2b8c | PTR_FUN_0061f2dc
    PUSH EDX                            ; 005c2b92
    MOV dword ptr [0x0061f2e0],EDI      ; 005c2b93 | PTR_FUN_0061f2e0
    MOV dword ptr [0x0061f2d8],ECX      ; 005c2b99 | PTR_FUN_0061f2d8
    CALL FUN_005c4b60                   ; 005c2b9f
        ;   XREF to: 005c4b60 (UNCONDITIONAL_CALL)  ; undefined FUN_005c4b60()
    ADD ESP,0x8                         ; 005c2ba4
    MOV EBX,dword ptr [0x0268017c]      ; 005c2ba7 | DAT_0268017c
    PUSH EBX                            ; 005c2bad
    MOV ECX,dword ptr [0x0061f2a0]      ; 005c2bae | DAT_0061f2a0
    PUSH ECX                            ; 005c2bb4
    MOV ESI,0x5c28fc                    ; 005c2bb5 | LAB_005c28fc
    CALL dword ptr CS:[0x5c8658]        ; 005c2bba | PTR_TlsSetValue_005c8658
    MOV dword ptr [0x0061f2a4],ESI      ; 005c2bc1 | PTR_FUN_0061f2a4
    POP EBP                             ; 005c2bc7
    POP EDI                             ; 005c2bc8
    POP ESI                             ; 005c2bc9
    POP EBX                             ; 005c2bca
    RET                                 ; 005c2bcb

