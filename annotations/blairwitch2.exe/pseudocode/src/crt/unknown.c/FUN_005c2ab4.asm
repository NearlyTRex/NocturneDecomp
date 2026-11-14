; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c2ab4(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c67b0 at 005c67d2
;
; Referenced Globals:
;   void* PTR_TlsSetValue_005c8658 = 001c9238
;   undefined4 DAT_0061f2a0
;   void* PTR_crt_unknown.c_FUN_005bcdfc_0061f2a4 = 005bcdfc
;   void* PTR_crt_unknown.c_FUN_005bce04_0061f2a8 = 005bce04
;   void* PTR_crt_unknown.c_FUN_005bce04_0061f2ac = 005bce04
;   void* PTR_crt_unknown.c_FUN_005bce08_0061f2b0 = 005bce08
;   void* PTR_crt_unknown.c_FUN_005bce18_0061f2b4 = 005bce18
;   void* PTR_crt_unknown.c_FUN_005bce04_0061f2b8 = 005bce04
;   void* PTR_crt_unknown.c_FUN_005bce04_0061f2bc = 005bce04
;   void* PTR_crt_unknown.c_FUN_005bce04_0061f2c0 = 005bce04
;   void* PTR_crt_unknown.c_FUN_005bce04_0061f2c4 = 005bce04
;   void* PTR_crt_unknown.c_FUN_005bce04_0061f2c8 = 005bce04
;   void* PTR_crt_unknown.c_FUN_005bce04_0061f2cc = 005bce04
;   void* PTR_crt_unknown.c_FUN_005bce04_0061f2d0 = 005bce04
;   void* PTR_crt_unknown.c_FUN_005bce04_0061f2d4 = 005bce04
;   ... and 9 more
;
; Called Functions:
;   crt_unknown.c_FUN_005c2624
;   crt_unknown.c_FUN_005c4b60
;   TlsSetValue
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c2ab4
        ;   Label: crt_unknown.c_FUN_005c2ab4
    PUSH ESI                            ; 005c2ab5
    PUSH EDI                            ; 005c2ab6
    PUSH EBP                            ; 005c2ab7
    MOV EDX,0x5c280c                    ; 005c2ab8
    MOV EBX,0x5c2828                    ; 005c2abd
    MOV ECX,0x5c2844                    ; 005c2ac2
    MOV ESI,0x5c2854                    ; 005c2ac7
    MOV EDI,0x5c27ec                    ; 005c2acc
    MOV EBP,0x5c27fc                    ; 005c2ad1
    MOV EAX,0x5c28bc                    ; 005c2ad6
    MOV dword ptr [0x0061f2a8],EDX      ; 005c2adb | PTR_crt_unknown.c_FUN_005bce04_0061f2a8
    MOV dword ptr [0x0061f2ac],EBX      ; 005c2ae1 | PTR_crt_unknown.c_FUN_005bce04_0061f2ac
    MOV dword ptr [0x0061f2b0],ECX      ; 005c2ae7 | PTR_crt_unknown.c_FUN_005bce08_0061f2b0
    MOV dword ptr [0x0061f2b4],ESI      ; 005c2aed | PTR_crt_unknown.c_FUN_005bce18_0061f2b4
    MOV dword ptr [0x0061f2b8],EDI      ; 005c2af3 | PTR_crt_unknown.c_FUN_005bce04_0061f2b8
    MOV dword ptr [0x0061f2bc],EBP      ; 005c2af9 | PTR_crt_unknown.c_FUN_005bce04_0061f2bc
    MOV [0x0061f2d0],EAX                ; 005c2aff | PTR_crt_unknown.c_FUN_005bce04_0061f2d0
    MOV EDX,0x5c28cc                    ; 005c2b04
    MOV EBX,0x5c2760                    ; 005c2b09
    MOV ECX,0x5c27c4                    ; 005c2b0e
    MOV ESI,0x5c274c                    ; 005c2b13
    MOV EDI,0x5c287c                    ; 005c2b18
    MOV EBP,0x5c289c                    ; 005c2b1d
    MOV EAX,0x5c288c                    ; 005c2b22
    MOV dword ptr [0x0061f2d4],EDX      ; 005c2b27 | PTR_crt_unknown.c_FUN_005bce04_0061f2d4
    MOV dword ptr [0x0061f6c0],EBX      ; 005c2b2d | PTR_crt_unknown.c_FUN_005c2620_0061f6c0
    MOV dword ptr [0x0061f6c4],ECX      ; 005c2b33 | PTR_crt_unknown.c_FUN_005c2620_0061f6c4
    MOV dword ptr [0x0061f6c8],ESI      ; 005c2b39 | PTR_crt_unknown.c_FUN_005c2620_0061f6c8
    MOV dword ptr [0x0061f2c0],EDI      ; 005c2b3f | PTR_crt_unknown.c_FUN_005bce04_0061f2c0
    MOV dword ptr [0x0061f2c4],EBP      ; 005c2b45 | PTR_crt_unknown.c_FUN_005bce04_0061f2c4
    MOV [0x0061f2c8],EAX                ; 005c2b4b | PTR_crt_unknown.c_FUN_005bce04_0061f2c8
    MOV EDX,0x5c28ac                    ; 005c2b50
    MOV EBX,0x1                         ; 005c2b55
    MOV ESI,0x5c28ec                    ; 005c2b5a
    MOV EDI,0x5c2a88                    ; 005c2b5f
    MOV dword ptr [0x0061f2cc],EDX      ; 005c2b64 | PTR_crt_unknown.c_FUN_005bce04_0061f2cc
    CALL crt_unknown.c_FUN_005c2624     ; 005c2b6a
        ;   XREF to: 005c2624 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c2624()
    MOV ECX,0x5c28dc                    ; 005c2b6f
    MOV EBP,dword ptr [0x0268017c]      ; 005c2b74 | DAT_0268017c
    MOV [0x02681040],EAX                ; 005c2b7a | DAT_02681040
    MOV dword ptr [0x02681044],EBX      ; 005c2b7f | DAT_02681044
    PUSH EBP                            ; 005c2b85
    MOV EDX,dword ptr [EBP + 0xda]      ; 005c2b86
    MOV dword ptr [0x0061f2dc],ESI      ; 005c2b8c | PTR_crt_unknown.c_FUN_005bce04_0061f2dc
    PUSH EDX                            ; 005c2b92
    MOV dword ptr [0x0061f2e0],EDI      ; 005c2b93 | PTR_crt_unknown.c_FUN_005bce04_0061f2e0
    MOV dword ptr [0x0061f2d8],ECX      ; 005c2b99 | PTR_crt_unknown.c_FUN_005bce04_0061f2d8
    CALL crt_unknown.c_FUN_005c4b60     ; 005c2b9f
        ;   XREF to: 005c4b60 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c4b60()
    ADD ESP,0x8                         ; 005c2ba4
    MOV EBX,dword ptr [0x0268017c]      ; 005c2ba7 | DAT_0268017c
    PUSH EBX                            ; 005c2bad
    MOV ECX,dword ptr [0x0061f2a0]      ; 005c2bae | DAT_0061f2a0
    PUSH ECX                            ; 005c2bb4
    MOV ESI,0x5c28fc                    ; 005c2bb5
    CALL dword ptr CS:[0x5c8658]        ; 005c2bba | PTR_TlsSetValue_005c8658
    MOV dword ptr [0x0061f2a4],ESI      ; 005c2bc1 | PTR_crt_unknown.c_FUN_005bcdfc_0061f2a4
    POP EBP                             ; 005c2bc7
    POP EDI                             ; 005c2bc8
    POP ESI                             ; 005c2bc9
    POP EBX                             ; 005c2bca
    RET                                 ; 005c2bcb

