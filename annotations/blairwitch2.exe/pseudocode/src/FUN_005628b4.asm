; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005628b4(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005fc1d4
;
; Called Functions:
;   FUN_0042a330
;   FUN_0044fd70
;   FUN_005478b0
;   FUN_005b15c0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005628b4
        ;   Label: FUN_005628b4
    ADD AL,byte ptr [EAX]               ; 005628b5
    ADD byte ptr [EAX],AL               ; 005628b7
    ADD byte ptr [EAX],AL               ; 005628b9
    MOV dword ptr [EBX + 0x256f8],0x0   ; 005628bb
    MOV dword ptr [EBX + 0x25694],0x0   ; 005628c5
    MOV dword ptr [EBX + 0x2569c],0x0   ; 005628cf
    MOV dword ptr [EBX + 0x256a8],0x0   ; 005628d9
    MOV dword ptr [EBX + 0x256ac],0x0   ; 005628e3
    FLD float ptr [0x005fc1d4]          ; 005628ed | DAT_005fc1d4
    MOV dword ptr [EBX + 0x256b0],0x0   ; 005628f3
    ADD ESP,0x4                         ; 005628fd
    FSTP float ptr [EBX + 0x25650]      ; 00562900
    MOV dword ptr [EBX + 0x2571c],0xf149f2ca ; 00562906
    PUSH 0x5eb1bd                       ; 00562910
    MOV dword ptr [EBX + 0x25704],0xf149f2ca ; 00562915
    LEA EAX,[EBX + 0x2b4]               ; 0056291f
    FLD float ptr [EBX + 0x2565c]       ; 00562925
    FLD float ptr [EBX + 0x25654]       ; 0056292b
    FLD float ptr [EBX + 0x2567c]       ; 00562931
    FLD float ptr [EBX + 0x25674]       ; 00562937
    PUSH EAX                            ; 0056293d
    FXCH ST3                            ; 0056293e
    FSTP float ptr [EBX + 0x25660]      ; 00562940
    FXCH                                ; 00562946
    FSTP float ptr [EBX + 0x25658]      ; 00562948
    FSTP float ptr [EBX + 0x25680]      ; 0056294e
    FSTP float ptr [EBX + 0x25678]      ; 00562954
    CALL FUN_005478b0                   ; 0056295a
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005478b0()
    MOV dword ptr [EBX + 0x2d04],0x0    ; 0056295f
    MOV dword ptr [EBX + 0x25698],0x0   ; 00562969
    MOV dword ptr [EBX + 0x256bc],0x0   ; 00562973
    LEA EAX,[EBX + 0x256e4]             ; 0056297d
    MOV dword ptr [EBX + 0x256c0],0x0   ; 00562983
    MOV dword ptr [EAX + 0x8],0x0       ; 0056298d
    MOV EDX,dword ptr [EAX + 0x8]       ; 00562994
    MOV dword ptr [EAX + 0x4],EDX       ; 00562997
    MOV EDX,dword ptr [EAX + 0x4]       ; 0056299a
    MOV dword ptr [EAX],EDX             ; 0056299d
    MOV dword ptr [EBX + 0x256f0],0xffffffff ; 0056299f
    MOV dword ptr [EBX + 0x256a0],0x0   ; 005629a9
    MOV dword ptr [EBX + 0x256c4],0x0   ; 005629b3
    MOV dword ptr [EBX + 0x256c8],0x0   ; 005629bd
    MOV dword ptr [EBX + 0x256a4],0x0   ; 005629c7
    MOV dword ptr [EBX + 0x256f4],0x0   ; 005629d1
    LEA EAX,[EBX + 0x2437c]             ; 005629db
    MOV dword ptr [EBX + 0x256fc],0x0   ; 005629e1
    ADD ESP,0x8                         ; 005629eb
    MOV EDX,dword ptr [EAX + 0x468]     ; 005629ee
    PUSH 0x5eb1ca                       ; 005629f4
    MOV EAX,dword ptr [EAX + EDX*0x4 + 0x610] ; 005629f9
    ADD EAX,0x2b4                       ; 00562a00
    PUSH EAX                            ; 00562a05
    CALL FUN_0044fd70                   ; 00562a06
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd70()
    ADD ESP,0x8                         ; 00562a0b
    PUSH 0x0                            ; 00562a0e
    PUSH 0x5eb1d2                       ; 00562a10
    PUSH 0x1                            ; 00562a15
    PUSH 0x0                            ; 00562a17
    PUSH EBX                            ; 00562a19
    CALL FUN_0042a330                   ; 00562a1a
        ;   XREF to: 0042a330 (UNCONDITIONAL_CALL)  ; undefined FUN_0042a330()
    ADD ESP,0x14                        ; 00562a1f
    PUSH 0x0                            ; 00562a22
    PUSH 0x5eb1e6                       ; 00562a24
    PUSH 0x2                            ; 00562a29
    PUSH 0x1                            ; 00562a2b
    PUSH EBX                            ; 00562a2d
    CALL FUN_0042a330                   ; 00562a2e
        ;   XREF to: 0042a330 (UNCONDITIONAL_CALL)  ; undefined FUN_0042a330()
    ADD ESP,0x14                        ; 00562a33
    PUSH 0x0                            ; 00562a36
    PUSH 0x5eb1ff                       ; 00562a38
    PUSH 0x3                            ; 00562a3d
    PUSH 0x0                            ; 00562a3f
    PUSH EBX                            ; 00562a41
    CALL FUN_0042a330                   ; 00562a42
        ;   XREF to: 0042a330 (UNCONDITIONAL_CALL)  ; undefined FUN_0042a330()
    ADD ESP,0x14                        ; 00562a47
    PUSH 0x0                            ; 00562a4a
    PUSH 0x5eb215                       ; 00562a4c
    PUSH 0x4                            ; 00562a51
    PUSH 0x3                            ; 00562a53
    PUSH EBX                            ; 00562a55
    CALL FUN_0042a330                   ; 00562a56
        ;   XREF to: 0042a330 (UNCONDITIONAL_CALL)  ; undefined FUN_0042a330()
    ADD ESP,0x14                        ; 00562a5b
    PUSH 0x0                            ; 00562a5e
    PUSH 0x5eb230                       ; 00562a60
    PUSH 0x5                            ; 00562a65
    PUSH 0x3                            ; 00562a67
    PUSH EBX                            ; 00562a69
    CALL FUN_0042a330                   ; 00562a6a
        ;   XREF to: 0042a330 (UNCONDITIONAL_CALL)  ; undefined FUN_0042a330()
    ADD ESP,0x14                        ; 00562a6f
    PUSH 0x0                            ; 00562a72
    PUSH 0x5eb250                       ; 00562a74
    PUSH 0x3                            ; 00562a79
    PUSH 0x1                            ; 00562a7b
    PUSH EBX                            ; 00562a7d
    CALL FUN_0042a330                   ; 00562a7e
        ;   XREF to: 0042a330 (UNCONDITIONAL_CALL)  ; undefined FUN_0042a330()
    ADD ESP,0x14                        ; 00562a83
    PUSH 0x1                            ; 00562a86
    PUSH 0x5eb269                       ; 00562a88
    PUSH 0x6                            ; 00562a8d
    PUSH 0x0                            ; 00562a8f
    PUSH EBX                            ; 00562a91
    CALL FUN_0042a330                   ; 00562a92
        ;   XREF to: 0042a330 (UNCONDITIONAL_CALL)  ; undefined FUN_0042a330()
    ADD ESP,0x14                        ; 00562a97
    PUSH 0x1                            ; 00562a9a
    PUSH 0x5eb27c                       ; 00562a9c
    PUSH 0x0                            ; 00562aa1
    PUSH 0x6                            ; 00562aa3
    PUSH EBX                            ; 00562aa5
    CALL FUN_0042a330                   ; 00562aa6
        ;   XREF to: 0042a330 (UNCONDITIONAL_CALL)  ; undefined FUN_0042a330()
    ADD ESP,0x14                        ; 00562aab
    PUSH 0x1                            ; 00562aae
    PUSH 0x5eb28f                       ; 00562ab0
    PUSH 0x4                            ; 00562ab5
    PUSH 0xb                            ; 00562ab7
    PUSH EBX                            ; 00562ab9
    CALL FUN_0042a330                   ; 00562aba
        ;   XREF to: 0042a330 (UNCONDITIONAL_CALL)  ; undefined FUN_0042a330()
    ADD ESP,0x14                        ; 00562abf
    PUSH 0x0                            ; 00562ac2
    PUSH 0x5eb2a2                       ; 00562ac4
    PUSH 0x7                            ; 00562ac9
    PUSH 0x3                            ; 00562acb
    PUSH EBX                            ; 00562acd
    CALL FUN_0042a330                   ; 00562ace
        ;   XREF to: 0042a330 (UNCONDITIONAL_CALL)  ; undefined FUN_0042a330()
    ADD ESP,0x14                        ; 00562ad3
    PUSH 0x0                            ; 00562ad6
    PUSH 0x5eb2bb                       ; 00562ad8
    PUSH 0x7                            ; 00562add
    PUSH 0x7                            ; 00562adf
    PUSH EBX                            ; 00562ae1
    CALL FUN_0042a330                   ; 00562ae2
        ;   XREF to: 0042a330 (UNCONDITIONAL_CALL)  ; undefined FUN_0042a330()
    ADD ESP,0x14                        ; 00562ae7
    PUSH 0x0                            ; 00562aea
    PUSH 0x5eb2cc                       ; 00562aec
    PUSH 0x8                            ; 00562af1
    PUSH 0x0                            ; 00562af3
    PUSH EBX                            ; 00562af5
    CALL FUN_0042a330                   ; 00562af6
        ;   XREF to: 0042a330 (UNCONDITIONAL_CALL)  ; undefined FUN_0042a330()
    ADD ESP,0x14                        ; 00562afb
    PUSH 0x1                            ; 00562afe
    PUSH 0x5eb2e1                       ; 00562b00
    PUSH 0x8                            ; 00562b05
    PUSH 0xc                            ; 00562b07
    PUSH EBX                            ; 00562b09
    CALL FUN_0042a330                   ; 00562b0a
        ;   XREF to: 0042a330 (UNCONDITIONAL_CALL)  ; undefined FUN_0042a330()
    ADD ESP,0x14                        ; 00562b0f
    PUSH 0x1                            ; 00562b12
    PUSH 0x5eb2f0                       ; 00562b14
    PUSH 0x8                            ; 00562b19
    PUSH 0xc                            ; 00562b1b
    PUSH EBX                            ; 00562b1d
    CALL FUN_0042a330                   ; 00562b1e
        ;   XREF to: 0042a330 (UNCONDITIONAL_CALL)  ; undefined FUN_0042a330()
    ADD ESP,0x14                        ; 00562b23
    PUSH 0x0                            ; 00562b26
    PUSH 0x5eb308                       ; 00562b28
    PUSH 0x9                            ; 00562b2d
    PUSH 0x9                            ; 00562b2f
    PUSH EBX                            ; 00562b31
    CALL FUN_0042a330                   ; 00562b32
        ;   XREF to: 0042a330 (UNCONDITIONAL_CALL)  ; undefined FUN_0042a330()
    ADD ESP,0x14                        ; 00562b37
    PUSH 0x0                            ; 00562b3a
    PUSH 0x5eb317                       ; 00562b3c
    PUSH 0xa                            ; 00562b41
    PUSH 0x3                            ; 00562b43
    PUSH EBX                            ; 00562b45
    CALL FUN_0042a330                   ; 00562b46
        ;   XREF to: 0042a330 (UNCONDITIONAL_CALL)  ; undefined FUN_0042a330()
    ADD ESP,0x14                        ; 00562b4b
    PUSH 0x0                            ; 00562b4e
    PUSH 0x5eb32f                       ; 00562b50
    PUSH 0x0                            ; 00562b55
    PUSH 0xa                            ; 00562b57
    PUSH EBX                            ; 00562b59
    CALL FUN_0042a330                   ; 00562b5a
        ;   XREF to: 0042a330 (UNCONDITIONAL_CALL)  ; undefined FUN_0042a330()
    ADD ESP,0x14                        ; 00562b5f
    PUSH 0x5eb342                       ; 00562b62
    LEA EAX,[EBX + 0x2d0c]              ; 00562b67
    PUSH EAX                            ; 00562b6d
    CALL FUN_005b15c0                   ; 00562b6e
        ;   XREF to: 005b15c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b15c0()
    ADD ESP,0x8                         ; 00562b73
    MOV EAX,EBX                         ; 00562b76
    MOV dword ptr [EBX + 0x258d8],0x0   ; 00562b78
    POP EBP                             ; 00562b82
    POP EBX                             ; 00562b83
    RET                                 ; 00562b84

