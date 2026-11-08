; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005adc24(void)
;
;
; XREF[1]:
;   FUN_005b1840 at 005b1862
;
; Referenced Globals:
;   void* PTR_TlsSetValue_005b366c = 001b427a
;   undefined4 DAT_0060799c
;   void* PTR_FUN_006079a0 = 005a7f3c
;   void* PTR_FUN_006079a4 = 005a7f44
;   void* PTR_FUN_006079a8 = 005a7f44
;   void* PTR_FUN_006079ac = 005a7f48
;   void* PTR_FUN_006079b0 = 005a7f58
;   void* PTR_FUN_006079b4 = 005a7f44
;   void* PTR_FUN_006079b8 = 005a7f44
;   void* PTR_FUN_006079bc = 005a7f44
;   void* PTR_FUN_006079c0 = 005a7f44
;   void* PTR_FUN_006079c4 = 005a7f44
;   void* PTR_FUN_006079c8 = 005a7f44
;   void* PTR_FUN_006079cc = 005a7f44
;   void* PTR_FUN_006079d0 = 005a7f44
;   ... and 9 more
;
; Called Functions:
;   FUN_005ad794
;   FUN_005afbf0
;   TlsSetValue
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005adc24
        ;   Label: FUN_005adc24
    PUSH ESI                            ; 005adc25
    PUSH EDI                            ; 005adc26
    PUSH EBP                            ; 005adc27
    MOV EDX,0x5ad97c                    ; 005adc28 | LAB_005ad97c
    MOV EBX,0x5ad998                    ; 005adc2d | LAB_005ad998
    MOV ECX,0x5ad9b4                    ; 005adc32 | LAB_005ad9b4
    MOV ESI,0x5ad9c4                    ; 005adc37 | LAB_005ad9c4
    MOV EDI,0x5ad95c                    ; 005adc3c | LAB_005ad95c
    MOV EBP,0x5ad96c                    ; 005adc41 | LAB_005ad96c
    MOV EAX,0x5ada2c                    ; 005adc46 | LAB_005ada2c
    MOV dword ptr [0x006079a4],EDX      ; 005adc4b | PTR_FUN_006079a4
    MOV dword ptr [0x006079a8],EBX      ; 005adc51 | PTR_FUN_006079a8
    MOV dword ptr [0x006079ac],ECX      ; 005adc57 | PTR_FUN_006079ac
    MOV dword ptr [0x006079b0],ESI      ; 005adc5d | PTR_FUN_006079b0
    MOV dword ptr [0x006079b4],EDI      ; 005adc63 | PTR_FUN_006079b4
    MOV dword ptr [0x006079b8],EBP      ; 005adc69 | PTR_FUN_006079b8
    MOV [0x006079cc],EAX                ; 005adc6f | PTR_FUN_006079cc
    MOV EDX,0x5ada3c                    ; 005adc74 | LAB_005ada3c
    MOV EBX,0x5ad8d0                    ; 005adc79
    MOV ECX,0x5ad934                    ; 005adc7e
    MOV ESI,0x5ad8bc                    ; 005adc83
    MOV EDI,0x5ad9ec                    ; 005adc88 | LAB_005ad9ec
    MOV EBP,0x5ada0c                    ; 005adc8d | LAB_005ada0c
    MOV EAX,0x5ad9fc                    ; 005adc92 | LAB_005ad9fc
    MOV dword ptr [0x006079d0],EDX      ; 005adc97 | PTR_FUN_006079d0
    MOV dword ptr [0x00607de4],EBX      ; 005adc9d | PTR_FUN_00607de4
    MOV dword ptr [0x00607de8],ECX      ; 005adca3 | PTR_FUN_00607de8
    MOV dword ptr [0x00607dec],ESI      ; 005adca9 | PTR_FUN_00607dec
    MOV dword ptr [0x006079bc],EDI      ; 005adcaf | PTR_FUN_006079bc
    MOV dword ptr [0x006079c0],EBP      ; 005adcb5 | PTR_FUN_006079c0
    MOV [0x006079c4],EAX                ; 005adcbb | PTR_FUN_006079c4
    MOV EDX,0x5ada1c                    ; 005adcc0 | LAB_005ada1c
    MOV EBX,0x1                         ; 005adcc5
    MOV ESI,0x5ada5c                    ; 005adcca | LAB_005ada5c
    MOV EDI,0x5adbf8                    ; 005adccf | LAB_005adbf8
    MOV dword ptr [0x006079c8],EDX      ; 005adcd4 | PTR_FUN_006079c8
    CALL FUN_005ad794                   ; 005adcda
        ;   XREF to: 005ad794 (UNCONDITIONAL_CALL)  ; undefined FUN_005ad794()
    MOV ECX,0x5ada4c                    ; 005adcdf | LAB_005ada4c
    MOV EBP,dword ptr [0x02d252bc]      ; 005adce4 | DAT_02d252bc
    MOV [0x02d26180],EAX                ; 005adcea | DAT_02d26180
    MOV dword ptr [0x02d26184],EBX      ; 005adcef | DAT_02d26184
    PUSH EBP                            ; 005adcf5
    MOV EDX,dword ptr [EBP + 0xda]      ; 005adcf6
    MOV dword ptr [0x006079d8],ESI      ; 005adcfc | PTR_FUN_006079d8
    PUSH EDX                            ; 005add02
    MOV dword ptr [0x006079dc],EDI      ; 005add03 | PTR_FUN_006079dc
    MOV dword ptr [0x006079d4],ECX      ; 005add09 | PTR_FUN_006079d4
    CALL FUN_005afbf0                   ; 005add0f
        ;   XREF to: 005afbf0 (UNCONDITIONAL_CALL)  ; undefined FUN_005afbf0()
    ADD ESP,0x8                         ; 005add14
    MOV EBX,dword ptr [0x02d252bc]      ; 005add17 | DAT_02d252bc
    PUSH EBX                            ; 005add1d
    MOV ECX,dword ptr [0x0060799c]      ; 005add1e | DAT_0060799c
    PUSH ECX                            ; 005add24
    MOV ESI,0x5ada6c                    ; 005add25 | LAB_005ada6c
    CALL dword ptr CS:[0x5b366c]        ; 005add2a | PTR_TlsSetValue_005b366c
    MOV dword ptr [0x006079a0],ESI      ; 005add31 | PTR_FUN_006079a0
    POP EBP                             ; 005add37
    POP EDI                             ; 005add38
    POP ESI                             ; 005add39
    POP EBX                             ; 005add3a
    RET                                 ; 005add3b

