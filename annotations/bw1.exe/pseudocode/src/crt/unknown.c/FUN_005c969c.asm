; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c969c(undefined4 param_1)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   crt_unknown.c_FUN_005c9428 at 005c943e
;
; Referenced Globals:
;   undefined4 DAT_00626844
;   undefined4 DAT_00626868
;   undefined4 DAT_0062686c
;   undefined4 DAT_00626870
;   undefined4 DAT_0062688c
;   undefined1 DAT_0062690d
;   undefined4 DAT_00626998
;   undefined4 DAT_0062699c
;   undefined4 DAT_006269a0
;
; Called Functions:
;   crt_unknown.c_FUN_005c9478
;   crt_unknown.c_FUN_005c9594
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c969c
        ;   Label: crt_unknown.c_FUN_005c969c
    PUSH ESI                            ; 005c969d
    PUSH EDI                            ; 005c969e
    PUSH EBP                            ; 005c969f
    SUB ESP,0x4                         ; 005c96a0
    MOV ESI,dword ptr [0x006269a0]      ; 005c96a3 | DAT_006269a0
    PUSH 0x626998                       ; 005c96a9 | DAT_00626998
    PUSH 0x62688c                       ; 005c96ae | DAT_0062688c
    MOV EBX,dword ptr [ESP + 0x20]      ; 005c96b3
    XOR EDX,EDX                         ; 005c96b7
    PUSH EBX                            ; 005c96b9
    MOV dword ptr [0x0062699c],EDX      ; 005c96ba | DAT_0062699c
    CALL crt_unknown.c_FUN_005c9478     ; 005c96c0
        ;   XREF to: 005c9478 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c9478()
    MOV EDX,EAX                         ; 005c96c5
    MOV AH,byte ptr [EAX]               ; 005c96c7
    ADD ESP,0xc                         ; 005c96c9
    TEST AH,AH                          ; 005c96cc
    JNZ 0x005c96e1                      ; 005c96ce
        ;   XREF to: 005c96e1 (CONDITIONAL_JUMP)  ; LAB_005c96e1
    MOV ESI,dword ptr [0x006269a0]      ; 005c96d0 | DAT_006269a0
    MOV byte ptr [0x0062690d],AH        ; 005c96d6 | DAT_0062690d
    JMP 0x005c97ad                      ; 005c96dc
        ;   XREF to: 005c97ad (UNCONDITIONAL_JUMP)  ; LAB_005c97ad
    MOV EAX,[0x00626998]                ; 005c96e1 | DAT_00626998
        ;   Label: LAB_005c96e1
    SUB EAX,0xe10                       ; 005c96e6
    MOV dword ptr [ESP],EAX             ; 005c96eb
    MOV EAX,ESP                         ; 005c96ee
    PUSH EAX                            ; 005c96f0
    PUSH 0x62690d                       ; 005c96f1 | DAT_0062690d
    MOV ECX,0x1                         ; 005c96f6
    PUSH EDX                            ; 005c96fb
    MOV dword ptr [0x0062699c],ECX      ; 005c96fc | DAT_0062699c
    CALL crt_unknown.c_FUN_005c9478     ; 005c9702
        ;   XREF to: 005c9478 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c9478()
    ADD ESP,0xc                         ; 005c9707
    MOV EBX,dword ptr [0x00626998]      ; 005c970a | DAT_00626998
    MOV ESI,dword ptr [ESP]             ; 005c9710
    SUB EBX,ESI                         ; 005c9713
    MOV ESI,EBX                         ; 005c9715
    MOV dword ptr [0x006269a0],EBX      ; 005c9717 | DAT_006269a0
    MOV BL,byte ptr [EAX]               ; 005c971d
    MOV EDX,EAX                         ; 005c971f
    CMP BL,0x2c                         ; 005c9721
    JNZ 0x005c9737                      ; 005c9724
        ;   XREF to: 005c9737 (CONDITIONAL_JUMP)  ; LAB_005c9737
    PUSH 0x626844                       ; 005c9726 | DAT_00626844
    INC EAX                             ; 005c972b
    PUSH EAX                            ; 005c972c
    CALL crt_unknown.c_FUN_005c9594     ; 005c972d
        ;   XREF to: 005c9594 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c9594()
    ADD ESP,0x8                         ; 005c9732
    MOV EDX,EAX                         ; 005c9735
    MOV BH,byte ptr [EDX]               ; 005c9737
        ;   Label: LAB_005c9737
    MOV ESI,dword ptr [0x006269a0]      ; 005c9739 | DAT_006269a0
    CMP BH,0x2c                         ; 005c973f
    JNZ 0x005c97ad                      ; 005c9742
        ;   XREF to: 005c97ad (CONDITIONAL_JUMP)  ; LAB_005c97ad
    PUSH 0x626868                       ; 005c9744 | DAT_00626868
    INC EDX                             ; 005c9749
    PUSH EDX                            ; 005c974a
    CALL crt_unknown.c_FUN_005c9594     ; 005c974b
        ;   XREF to: 005c9594 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c9594()
    MOV ESI,dword ptr [0x006269a0]      ; 005c9750 | DAT_006269a0
    MOV EBX,0xe10                       ; 005c9756
    MOV EDX,ESI                         ; 005c975b
    MOV EAX,ESI                         ; 005c975d
    SAR EDX,0x1f                        ; 005c975f
    IDIV EBX                            ; 005c9762
    MOV EDI,dword ptr [0x00626870]      ; 005c9764 | DAT_00626870
    MOV EBX,0x3c                        ; 005c976a
    MOV EDX,ESI                         ; 005c976f
    SUB EDI,EAX                         ; 005c9771
    MOV EAX,ESI                         ; 005c9773
    SAR EDX,0x1f                        ; 005c9775
    IDIV EBX                            ; 005c9778
    MOV EDX,EAX                         ; 005c977a
    SAR EDX,0x1f                        ; 005c977c
    IDIV EBX                            ; 005c977f
    MOV EBP,dword ptr [0x0062686c]      ; 005c9781 | DAT_0062686c
    SUB EBP,EDX                         ; 005c9787
    MOV EDX,ESI                         ; 005c9789
    MOV EAX,ESI                         ; 005c978b
    SAR EDX,0x1f                        ; 005c978d
    IDIV EBX                            ; 005c9790
    ADD ESP,0x8                         ; 005c9792
    MOV EAX,[0x00626868]                ; 005c9795 | DAT_00626868
    MOV dword ptr [0x00626870],EDI      ; 005c979a | DAT_00626870
    SUB EAX,EDX                         ; 005c97a0
    MOV dword ptr [0x0062686c],EBP      ; 005c97a2 | DAT_0062686c
    MOV [0x00626868],EAX                ; 005c97a8 | DAT_00626868
    MOV dword ptr [0x006269a0],ESI      ; 005c97ad | DAT_006269a0
        ;   Label: LAB_005c97ad
    ADD ESP,0x4                         ; 005c97b3
    POP EBP                             ; 005c97b6
    POP EDI                             ; 005c97b7
    POP ESI                             ; 005c97b8
    POP EBX                             ; 005c97b9
    RET                                 ; 005c97ba

