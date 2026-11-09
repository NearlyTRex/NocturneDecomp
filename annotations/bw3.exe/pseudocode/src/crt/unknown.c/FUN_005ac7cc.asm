; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005ac7cc(undefined4 param_1)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   crt_unknown.c_FUN_005ac558 at 005ac56e
;
; Referenced Globals:
;   undefined4 DAT_00607be8
;   undefined4 DAT_00607c0c
;   undefined4 DAT_00607c10
;   undefined4 DAT_00607c14
;   undefined4 DAT_00607c30
;   undefined1 DAT_00607cb1
;   undefined4 DAT_00607d3c
;   undefined4 DAT_00607d40
;   undefined4 DAT_00607d44
;
; Called Functions:
;   crt_unknown.c_FUN_005ac5a8
;   crt_unknown.c_FUN_005ac6c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ac7cc
        ;   Label: crt_unknown.c_FUN_005ac7cc
    PUSH ESI                            ; 005ac7cd
    PUSH EDI                            ; 005ac7ce
    PUSH EBP                            ; 005ac7cf
    SUB ESP,0x4                         ; 005ac7d0
    MOV ESI,dword ptr [0x00607d44]      ; 005ac7d3 | DAT_00607d44
    PUSH 0x607d3c                       ; 005ac7d9 | DAT_00607d3c
    PUSH 0x607c30                       ; 005ac7de | DAT_00607c30
    MOV EBX,dword ptr [ESP + 0x20]      ; 005ac7e3
    XOR EDX,EDX                         ; 005ac7e7
    PUSH EBX                            ; 005ac7e9
    MOV dword ptr [0x00607d40],EDX      ; 005ac7ea | DAT_00607d40
    CALL crt_unknown.c_FUN_005ac5a8     ; 005ac7f0
        ;   XREF to: 005ac5a8 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ac5a8()
    MOV EDX,EAX                         ; 005ac7f5
    MOV AH,byte ptr [EAX]               ; 005ac7f7
    ADD ESP,0xc                         ; 005ac7f9
    TEST AH,AH                          ; 005ac7fc
    JNZ 0x005ac811                      ; 005ac7fe
        ;   XREF to: 005ac811 (CONDITIONAL_JUMP)  ; LAB_005ac811
    MOV ESI,dword ptr [0x00607d44]      ; 005ac800 | DAT_00607d44
    MOV byte ptr [0x00607cb1],AH        ; 005ac806 | DAT_00607cb1
    JMP 0x005ac8dd                      ; 005ac80c
        ;   XREF to: 005ac8dd (UNCONDITIONAL_JUMP)  ; LAB_005ac8dd
    MOV EAX,[0x00607d3c]                ; 005ac811 | DAT_00607d3c
        ;   Label: LAB_005ac811
    SUB EAX,0xe10                       ; 005ac816
    MOV dword ptr [ESP],EAX             ; 005ac81b
    MOV EAX,ESP                         ; 005ac81e
    PUSH EAX                            ; 005ac820
    PUSH 0x607cb1                       ; 005ac821 | DAT_00607cb1
    MOV ECX,0x1                         ; 005ac826
    PUSH EDX                            ; 005ac82b
    MOV dword ptr [0x00607d40],ECX      ; 005ac82c | DAT_00607d40
    CALL crt_unknown.c_FUN_005ac5a8     ; 005ac832
        ;   XREF to: 005ac5a8 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ac5a8()
    ADD ESP,0xc                         ; 005ac837
    MOV EBX,dword ptr [0x00607d3c]      ; 005ac83a | DAT_00607d3c
    MOV ESI,dword ptr [ESP]             ; 005ac840
    SUB EBX,ESI                         ; 005ac843
    MOV ESI,EBX                         ; 005ac845
    MOV dword ptr [0x00607d44],EBX      ; 005ac847 | DAT_00607d44
    MOV BL,byte ptr [EAX]               ; 005ac84d
    MOV EDX,EAX                         ; 005ac84f
    CMP BL,0x2c                         ; 005ac851
    JNZ 0x005ac867                      ; 005ac854
        ;   XREF to: 005ac867 (CONDITIONAL_JUMP)  ; LAB_005ac867
    PUSH 0x607be8                       ; 005ac856 | DAT_00607be8
    INC EAX                             ; 005ac85b
    PUSH EAX                            ; 005ac85c
    CALL crt_unknown.c_FUN_005ac6c4     ; 005ac85d
        ;   XREF to: 005ac6c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ac6c4()
    ADD ESP,0x8                         ; 005ac862
    MOV EDX,EAX                         ; 005ac865
    MOV BH,byte ptr [EDX]               ; 005ac867
        ;   Label: LAB_005ac867
    MOV ESI,dword ptr [0x00607d44]      ; 005ac869 | DAT_00607d44
    CMP BH,0x2c                         ; 005ac86f
    JNZ 0x005ac8dd                      ; 005ac872
        ;   XREF to: 005ac8dd (CONDITIONAL_JUMP)  ; LAB_005ac8dd
    PUSH 0x607c0c                       ; 005ac874 | DAT_00607c0c
    INC EDX                             ; 005ac879
    PUSH EDX                            ; 005ac87a
    CALL crt_unknown.c_FUN_005ac6c4     ; 005ac87b
        ;   XREF to: 005ac6c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ac6c4()
    MOV ESI,dword ptr [0x00607d44]      ; 005ac880 | DAT_00607d44
    MOV EBX,0xe10                       ; 005ac886
    MOV EDX,ESI                         ; 005ac88b
    MOV EAX,ESI                         ; 005ac88d
    SAR EDX,0x1f                        ; 005ac88f
    IDIV EBX                            ; 005ac892
    MOV EDI,dword ptr [0x00607c14]      ; 005ac894 | DAT_00607c14
    MOV EBX,0x3c                        ; 005ac89a
    MOV EDX,ESI                         ; 005ac89f
    SUB EDI,EAX                         ; 005ac8a1
    MOV EAX,ESI                         ; 005ac8a3
    SAR EDX,0x1f                        ; 005ac8a5
    IDIV EBX                            ; 005ac8a8
    MOV EDX,EAX                         ; 005ac8aa
    SAR EDX,0x1f                        ; 005ac8ac
    IDIV EBX                            ; 005ac8af
    MOV EBP,dword ptr [0x00607c10]      ; 005ac8b1 | DAT_00607c10
    SUB EBP,EDX                         ; 005ac8b7
    MOV EDX,ESI                         ; 005ac8b9
    MOV EAX,ESI                         ; 005ac8bb
    SAR EDX,0x1f                        ; 005ac8bd
    IDIV EBX                            ; 005ac8c0
    ADD ESP,0x8                         ; 005ac8c2
    MOV EAX,[0x00607c0c]                ; 005ac8c5 | DAT_00607c0c
    MOV dword ptr [0x00607c14],EDI      ; 005ac8ca | DAT_00607c14
    SUB EAX,EDX                         ; 005ac8d0
    MOV dword ptr [0x00607c10],EBP      ; 005ac8d2 | DAT_00607c10
    MOV [0x00607c0c],EAX                ; 005ac8d8 | DAT_00607c0c
    MOV dword ptr [0x00607d44],ESI      ; 005ac8dd | DAT_00607d44
        ;   Label: LAB_005ac8dd
    ADD ESP,0x4                         ; 005ac8e3
    POP EBP                             ; 005ac8e6
    POP EDI                             ; 005ac8e7
    POP ESI                             ; 005ac8e8
    POP EBX                             ; 005ac8e9
    RET                                 ; 005ac8ea

