; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a68d0(int param_1,int param_2)
;
;
; Called Functions:
;   FUN_005b5200
;   FUN_005b5760
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a68d0
        ;   Label: FUN_005a68d0
    PUSH EDI                            ; 005a68d1
    PUSH EBP                            ; 005a68d2
    SUB ESP,0x9c                        ; 005a68d3
    MOV EBX,ESI                         ; 005a68d9
    MOV EAX,dword ptr [ESP + 0xb0]      ; 005a68db
    SHL EAX,0x3                         ; 005a68e2
    MOV EDX,EAX                         ; 005a68e5
    SHL EAX,0x4                         ; 005a68e7
    MOV ESI,0x3e03126f                  ; 005a68ea
    SUB EAX,EDX                         ; 005a68ef
    MOV EDX,dword ptr [ESP + 0xac]      ; 005a68f1
    MOV EDI,0x40847ae1                  ; 005a68f8
    ADD EAX,EDX                         ; 005a68fd
    XOR ECX,ECX                         ; 005a68ff
    LEA EDX,[ESP + 0x78]                ; 005a6901
    MOV EBP,dword ptr [EAX + 0x25a8]    ; 005a6905
    LEA EAX,[ESP + 0x60]                ; 005a690b
    MOV dword ptr [ESP + 0x60],ECX      ; 005a690f
    MOV dword ptr [ESP + 0x64],ESI      ; 005a6913
    MOV dword ptr [ESP + 0x68],EDI      ; 005a6917
    CMP EDX,EAX                         ; 005a691b
    JNZ 0x005a69dd                      ; 005a691d
        ;   XREF to: 005a69dd (CONDITIONAL_JUMP)  ; LAB_005a69dd
    MOV EAX,0x4048f5c3                  ; 005a6923
        ;   Label: LAB_005a6923
    LEA EDI,[ESP + 0x84]                ; 005a6928
    XOR ESI,ESI                         ; 005a692f
    LEA EDX,[ESP + 0x6c]                ; 005a6931
    MOV dword ptr [ESP + 0x98],ESI      ; 005a6935
    MOV dword ptr [ESP + 0x90],ESI      ; 005a693c
    LEA ESI,[ESP + 0x90]                ; 005a6943
    MOV dword ptr [ESP + 0x94],EAX      ; 005a694a
    LEA EAX,[ESP + 0x84]                ; 005a6951
    MOVSD ES:EDI,ESI                    ; 005a6958
    MOVSD ES:EDI,ESI                    ; 005a6959
    MOVSD ES:EDI,ESI                    ; 005a695a
    CMP EDX,EAX                         ; 005a695b
    JZ 0x005a6980                       ; 005a695d
        ;   XREF to: 005a6980 (CONDITIONAL_JUMP)  ; LAB_005a6980
    MOV EAX,dword ptr [ESP + 0x84]      ; 005a695f
    MOV dword ptr [ESP + 0x6c],EAX      ; 005a6966
    MOV EAX,dword ptr [ESP + 0x88]      ; 005a696a
    MOV dword ptr [ESP + 0x70],EAX      ; 005a6971
    MOV EAX,dword ptr [ESP + 0x8c]      ; 005a6975
    MOV dword ptr [ESP + 0x74],EAX      ; 005a697c
    LEA EAX,[ESP + 0x6c]                ; 005a6980
        ;   Label: LAB_005a6980
    PUSH EAX                            ; 005a6984
    LEA EAX,[ESP + 0x7c]                ; 005a6985
    PUSH EAX                            ; 005a6989
    LEA EAX,[ESP + 0x38]                ; 005a698a
    PUSH EAX                            ; 005a698e
    CALL FUN_005b5760                   ; 005a698f
        ;   XREF to: 005b5760 (UNCONDITIONAL_CALL)  ; undefined FUN_005b5760()
    LEA EAX,[EBP*0x4 + 0x0]             ; 005a6994
    ADD ESP,0xc                         ; 005a699b
    SUB EAX,EBP                         ; 005a699e
    MOV EDX,dword ptr [ESP + 0xac]      ; 005a69a0
    SHL EAX,0x4                         ; 005a69a7
    ADD EDX,0xfd8                       ; 005a69aa
    ADD EAX,EDX                         ; 005a69b0
    PUSH EAX                            ; 005a69b2
    LEA EAX,[ESP + 0x34]                ; 005a69b3
    PUSH EAX                            ; 005a69b7
    LEA ESI,[ESP + 0x8]                 ; 005a69b8
    MOV EDI,EBX                         ; 005a69bc
    CALL FUN_005b5200                   ; 005a69be
        ;   XREF to: 005b5200 (UNCONDITIONAL_CALL)  ; undefined FUN_005b5200()
    MOV ECX,0xc                         ; 005a69c3
    LEA ESI,[ESP + 0x8]                 ; 005a69c8
    ADD ESP,0x8                         ; 005a69cc
    MOVSD.REP ES:EDI,ESI                ; 005a69cf
    MOV EAX,EBX                         ; 005a69d1
    ADD ESP,0x9c                        ; 005a69d3
    POP EBP                             ; 005a69d9
    POP EDI                             ; 005a69da
    POP EBX                             ; 005a69db
    RET                                 ; 005a69dc
    MOV dword ptr [ESP + 0x7c],ESI      ; 005a69dd
        ;   Label: LAB_005a69dd
    MOV dword ptr [ESP + 0x80],EDI      ; 005a69e1
    MOV dword ptr [ESP + 0x78],ECX      ; 005a69e8
    JMP 0x005a6923                      ; 005a69ec
        ;   XREF to: 005a6923 (UNCONDITIONAL_JUMP)  ; LAB_005a6923

