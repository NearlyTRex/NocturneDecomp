; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a1970(int param_1,int param_2)
;
;
; Called Functions:
;   FUN_005833e0
;   FUN_00583940
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a1970
        ;   Label: FUN_005a1970
    PUSH EDI                            ; 005a1971
    PUSH EBP                            ; 005a1972
    SUB ESP,0x9c                        ; 005a1973
    MOV EBX,ESI                         ; 005a1979
    MOV ESI,dword ptr [ESP + 0xb0]      ; 005a197b
    LEA EAX,[ESI*0x8 + 0x0]             ; 005a1982
    MOV EDX,EAX                         ; 005a1989
    SHL EAX,0x4                         ; 005a198b
    SUB EAX,EDX                         ; 005a198e
    ADD EAX,dword ptr [ESP + 0xac]      ; 005a1990
    MOV EBP,dword ptr [EAX + 0x25a8]    ; 005a1997
    TEST ESI,ESI                        ; 005a199d
    JNZ 0x005a1a3d                      ; 005a199f
        ;   XREF to: 005a1a3d (CONDITIONAL_JUMP)  ; LAB_005a1a3d
    MOV ESI,0xbf6c7086                  ; 005a19a5
    MOV EDI,0x3d5b9b16                  ; 005a19aa
    MOV ECX,0xbf204945                  ; 005a19af
    LEA EDX,[ESP + 0x78]                ; 005a19b4
    LEA EAX,[ESP + 0x6c]                ; 005a19b8
    MOV dword ptr [ESP + 0x7c],ESI      ; 005a19bc
    MOV dword ptr [ESP + 0x80],EDI      ; 005a19c0
    MOV dword ptr [ESP + 0x78],ECX      ; 005a19c7
    CMP EAX,EDX                         ; 005a19cb
    JZ 0x005a19db                       ; 005a19cd
        ;   XREF to: 005a19db (CONDITIONAL_JUMP)  ; LAB_005a19db
    MOV dword ptr [ESP + 0x70],ESI      ; 005a19cf
    MOV dword ptr [ESP + 0x74],EDI      ; 005a19d3
    MOV dword ptr [ESP + 0x6c],ECX      ; 005a19d7
    MOV EDI,0xc01bd399                  ; 005a19db
        ;   Label: LAB_005a19db
    MOV ESI,0xbbd21c02                  ; 005a19e0
    MOV EAX,0x3d9ba527                  ; 005a19e5
    LEA EDX,[ESP + 0x60]                ; 005a19ea
    MOV dword ptr [ESP + 0x98],EDI      ; 005a19ee
    MOV dword ptr [ESP + 0x90],ESI      ; 005a19f5
    LEA EDI,[ESP + 0x60]                ; 005a19fc
    LEA ESI,[ESP + 0x90]                ; 005a1a00
    MOV dword ptr [ESP + 0x94],EAX      ; 005a1a07
    LEA EAX,[ESP + 0x84]                ; 005a1a0e
    MOVSD ES:EDI,ESI                    ; 005a1a15
    MOVSD ES:EDI,ESI                    ; 005a1a16
    MOVSD ES:EDI,ESI                    ; 005a1a17
    CMP EAX,EDX                         ; 005a1a18
    JZ 0x005a1a3d                       ; 005a1a1a
        ;   XREF to: 005a1a3d (CONDITIONAL_JUMP)  ; LAB_005a1a3d
    MOV EAX,dword ptr [ESP + 0x60]      ; 005a1a1c
    MOV dword ptr [ESP + 0x84],EAX      ; 005a1a20
    MOV EAX,dword ptr [ESP + 0x64]      ; 005a1a27
    MOV dword ptr [ESP + 0x88],EAX      ; 005a1a2b
    MOV EAX,dword ptr [ESP + 0x68]      ; 005a1a32
    MOV dword ptr [ESP + 0x8c],EAX      ; 005a1a36
    LEA EAX,[ESP + 0x84]                ; 005a1a3d
        ;   Label: LAB_005a1a3d
    PUSH EAX                            ; 005a1a44
    LEA EAX,[ESP + 0x70]                ; 005a1a45
    PUSH EAX                            ; 005a1a49
    LEA EAX,[ESP + 0x38]                ; 005a1a4a
    PUSH EAX                            ; 005a1a4e
    CALL FUN_00583940                   ; 005a1a4f
        ;   XREF to: 00583940 (UNCONDITIONAL_CALL)  ; undefined FUN_00583940()
    LEA EAX,[EBP*0x4 + 0x0]             ; 005a1a54
    ADD ESP,0xc                         ; 005a1a5b
    SUB EAX,EBP                         ; 005a1a5e
    MOV EDX,dword ptr [ESP + 0xac]      ; 005a1a60
    SHL EAX,0x4                         ; 005a1a67
    ADD EDX,0xfd8                       ; 005a1a6a
    ADD EAX,EDX                         ; 005a1a70
    PUSH EAX                            ; 005a1a72
    LEA EAX,[ESP + 0x34]                ; 005a1a73
    PUSH EAX                            ; 005a1a77
    LEA ESI,[ESP + 0x8]                 ; 005a1a78
    MOV EDI,EBX                         ; 005a1a7c
    CALL FUN_005833e0                   ; 005a1a7e
        ;   XREF to: 005833e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005833e0()
    MOV ECX,0xc                         ; 005a1a83
    LEA ESI,[ESP + 0x8]                 ; 005a1a88
    ADD ESP,0x8                         ; 005a1a8c
    MOVSD.REP ES:EDI,ESI                ; 005a1a8f
    MOV EAX,EBX                         ; 005a1a91
    ADD ESP,0x9c                        ; 005a1a93
    POP EBP                             ; 005a1a99
    POP EDI                             ; 005a1a9a
    POP EBX                             ; 005a1a9b
    RET                                 ; 005a1a9c

