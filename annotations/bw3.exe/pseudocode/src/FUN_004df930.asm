; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004df930(int param_1)
;
;
; XREF[1]:
;   FUN_004df720 at 004df725
;
; Called Functions:
;   FUN_004088f0
;   FUN_005833e0
;   FUN_00583940
;   FUN_00583b10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004df930
        ;   Label: FUN_004df930
    SUB ESP,0xf0                        ; 004df931
    MOV EBX,dword ptr [ESP + 0xf8]      ; 004df937
    CMP dword ptr [EBX + 0x2e0],0x0     ; 004df93e
    JNZ 0x004df94f                      ; 004df945
        ;   XREF to: 004df94f (CONDITIONAL_JUMP)  ; LAB_004df94f
    ADD ESP,0xf0                        ; 004df947
    POP EBX                             ; 004df94d
    RET                                 ; 004df94e
    PUSH EDI                            ; 004df94f
        ;   Label: LAB_004df94f
    PUSH ESI                            ; 004df950
    LEA EAX,[EBX + 0x2f0]               ; 004df951
    PUSH EAX                            ; 004df957
    LEA EAX,[EBX + 0x2e4]               ; 004df958
    PUSH EAX                            ; 004df95e
    LEA EAX,[ESP + 0x40]                ; 004df95f
    PUSH EAX                            ; 004df963
    CALL FUN_00583940                   ; 004df964
        ;   XREF to: 00583940 (UNCONDITIONAL_CALL)  ; undefined FUN_00583940()
    MOV EAX,dword ptr [EBX + 0x2e0]     ; 004df969
    ADD ESP,0xc                         ; 004df96f
    LEA EDX,[EAX + 0x30]                ; 004df972
    PUSH EDX                            ; 004df975
    ADD EAX,0x20                        ; 004df976
    PUSH EAX                            ; 004df979
    LEA EAX,[ESP + 0x70]                ; 004df97a
    PUSH EAX                            ; 004df97e
    CALL FUN_00583940                   ; 004df97f
        ;   XREF to: 00583940 (UNCONDITIONAL_CALL)  ; undefined FUN_00583940()
    ADD ESP,0xc                         ; 004df984
    LEA EAX,[ESP + 0x68]                ; 004df987
    PUSH EAX                            ; 004df98b
    LEA EAX,[ESP + 0x3c]                ; 004df98c
    PUSH EAX                            ; 004df990
    LEA ESI,[ESP + 0xa0]                ; 004df991
    LEA EDI,[ESP + 0x10]                ; 004df998
    CALL FUN_005833e0                   ; 004df99c
        ;   XREF to: 005833e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005833e0()
    MOV ECX,0xc                         ; 004df9a1
    LEA ESI,[ESP + 0xa0]                ; 004df9a6
    ADD ESP,0x8                         ; 004df9ad
    MOVSD.REP ES:EDI,ESI                ; 004df9b0
    MOV EAX,dword ptr [ESP + 0x14]      ; 004df9b2
    MOV dword ptr [ESP + 0xec],EAX      ; 004df9b6
    MOV EAX,dword ptr [ESP + 0x24]      ; 004df9bd
    LEA EDI,[ESP + 0xc8]                ; 004df9c1
    MOV dword ptr [ESP + 0xf0],EAX      ; 004df9c8
    MOV EAX,dword ptr [ESP + 0x34]      ; 004df9cf
    LEA ESI,[ESP + 0xec]                ; 004df9d3
    MOV dword ptr [ESP + 0xf4],EAX      ; 004df9da
    MOVSD ES:EDI,ESI                    ; 004df9e1
    MOVSD ES:EDI,ESI                    ; 004df9e2
    MOVSD ES:EDI,ESI                    ; 004df9e3
    LEA EDX,[EBX + 0x20]                ; 004df9e4
    MOV EAX,dword ptr [ESP + 0xc8]      ; 004df9e7
    MOV dword ptr [EDX],EAX             ; 004df9ee
    MOV EAX,dword ptr [ESP + 0xcc]      ; 004df9f0
    MOV dword ptr [EDX + 0x4],EAX       ; 004df9f7
    MOV EAX,dword ptr [ESP + 0xd0]      ; 004df9fa
    MOV dword ptr [EDX + 0x8],EAX       ; 004dfa01
    LEA EAX,[ESP + 0x8]                 ; 004dfa04
    PUSH EAX                            ; 004dfa08
    LEA ESI,[ESP + 0xe4]                ; 004dfa09
    LEA EDI,[ESP + 0xd8]                ; 004dfa10
    CALL FUN_00583b10                   ; 004dfa17
        ;   XREF to: 00583b10 (UNCONDITIONAL_CALL)  ; undefined FUN_00583b10()
    LEA ESI,[ESP + 0xe4]                ; 004dfa1c
    LEA EAX,[ESP + 0xd8]                ; 004dfa23
    ADD ESP,0x4                         ; 004dfa2a
    LEA EDX,[EBX + 0x30]                ; 004dfa2d
    MOVSD ES:EDI,ESI                    ; 004dfa30
    MOVSD ES:EDI,ESI                    ; 004dfa31
    MOVSD ES:EDI,ESI                    ; 004dfa32
    CMP EDX,EAX                         ; 004dfa33
    JZ 0x004dfa54                       ; 004dfa35
        ;   XREF to: 004dfa54 (CONDITIONAL_JUMP)  ; LAB_004dfa54
    MOV EAX,dword ptr [ESP + 0xd4]      ; 004dfa37
    MOV dword ptr [EDX],EAX             ; 004dfa3e
    MOV EAX,dword ptr [ESP + 0xd8]      ; 004dfa40
    MOV dword ptr [EDX + 0x4],EAX       ; 004dfa47
    MOV EAX,dword ptr [ESP + 0xdc]      ; 004dfa4a
    MOV dword ptr [EDX + 0x8],EAX       ; 004dfa51
    PUSH EBX                            ; 004dfa54
        ;   Label: LAB_004dfa54
    CALL FUN_004088f0                   ; 004dfa55
        ;   XREF to: 004088f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004088f0()
    ADD ESP,0x4                         ; 004dfa5a
    POP ESI                             ; 004dfa5d
    POP EDI                             ; 004dfa5e
    ADD ESP,0xf0                        ; 004dfa5f
    POP EBX                             ; 004dfa65
    RET                                 ; 004dfa66

