; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004567c0(int param_1,int param_2)
;
; Local Variables:
; undefined        Stack[-0x128]:1  local_128
; undefined        Stack[-0xf8]:1  local_f8
; undefined        Stack[-0xc8]:1  local_c8
; undefined        Stack[-0x98]:1  local_98
; undefined        Stack[-0x68]:1  local_68
; undefined        Stack[-0x38]:1  local_38
; undefined        Stack[-0x2c]:1  local_2c
; undefined        Stack[-0x20]:1  local_20
; undefined        Stack[-0x14]:1  local_14
;
; XREF[1]:
;   FUN_004599a0 at 00459b66
;
; Called Functions:
;   FUN_004568e0
;   FUN_005916b0
;   FUN_00591c10
;   FUN_00591de0
;   FUN_00592720
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004567c0
        ;   Label: FUN_004567c0
    PUSH EBP                            ; 004567c1
    SUB ESP,0x120                       ; 004567c2
    MOV EBP,dword ptr [ESP + 0x12c]     ; 004567c8
    MOV EBX,dword ptr [EBP + 0x25698]   ; 004567cf
    TEST EBX,EBX                        ; 004567d5
    JZ 0x004568d6                       ; 004567d7
        ;   XREF to: 004568d6 (CONDITIONAL_JUMP)  ; LAB_004568d6
    CMP EBX,dword ptr [EBP + 0x2620]    ; 004567dd
    JZ 0x004568d6                       ; 004567e3
        ;   XREF to: 004568d6 (CONDITIONAL_JUMP)  ; LAB_004568d6
    CMP EBX,dword ptr [EBP + 0x2698]    ; 004567e9
    JZ 0x004568d6                       ; 004567ef
        ;   XREF to: 004568d6 (CONDITIONAL_JUMP)  ; LAB_004568d6
    PUSH EDI                            ; 004567f5
    PUSH ESI                            ; 004567f6
    MOV EDI,dword ptr [ESP + 0x138]     ; 004567f7
    MOV ESI,0x1                         ; 004567fe
    TEST EDI,EDI                        ; 00456803
    JZ 0x00456809                       ; 00456805
        ;   XREF to: 00456809 (CONDITIONAL_JUMP)  ; LAB_00456809
    XOR ESI,ESI                         ; 00456807
    PUSH ESI                            ; 00456809
        ;   Label: LAB_00456809
    PUSH EBX                            ; 0045680a
    PUSH EBP                            ; 0045680b
    LEA ESI,[ESP + 0x44]                ; 0045680c
    LEA EDI,[ESP + 0x74]                ; 00456810
    CALL FUN_004568e0                   ; 00456814
        ;   XREF to: 004568e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004568e0()
    MOV ECX,0xc                         ; 00456819
    LEA ESI,[ESP + 0x44]                ; 0045681e
    ADD ESP,0xc                         ; 00456822
    MOVSD.REP ES:EDI,ESI                ; 00456825
    LEA ESI,[EBP + 0x30]                ; 00456827
    PUSH ESI                            ; 0045682a
    ADD EBP,0x20                        ; 0045682b
    PUSH EBP                            ; 0045682e
    LEA ESI,[ESP + 0xa0]                ; 0045682f
    PUSH ESI                            ; 00456836
    CALL FUN_00591c10                   ; 00456837
        ;   XREF to: 00591c10 (UNCONDITIONAL_CALL)  ; undefined FUN_00591c10()
    ADD ESP,0xc                         ; 0045683c
    LEA ESI,[ESP + 0x98]                ; 0045683f
    PUSH ESI                            ; 00456846
    LEA ESI,[ESP + 0x6c]                ; 00456847
    PUSH ESI                            ; 0045684b
    LEA ESI,[ESP + 0xd0]                ; 0045684c
    LEA EDI,[ESP + 0x10]                ; 00456853
    CALL FUN_005916b0                   ; 00456857
        ;   XREF to: 005916b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005916b0()
    MOV ECX,0xc                         ; 0045685c
    LEA ESI,[ESP + 0xd0]                ; 00456861
    ADD ESP,0x8                         ; 00456868
    MOVSD.REP ES:EDI,ESI                ; 0045686b
    LEA ESI,[ESP + 0x8]                 ; 0045686d
    LEA EDI,[ESP + 0x11c]               ; 00456871
    PUSH ESI                            ; 00456878
    LEA ESI,[ESP + 0x114]               ; 00456879
    MOV EBP,dword ptr [EBX + 0x2b0]     ; 00456880
    CALL FUN_00591de0                   ; 00456886
        ;   XREF to: 00591de0 (UNCONDITIONAL_CALL)  ; undefined FUN_00591de0()
    LEA ESI,[ESP + 0x114]               ; 0045688b
    ADD ESP,0x4                         ; 00456892
    MOVSD ES:EDI,ESI                    ; 00456895
    MOVSD ES:EDI,ESI                    ; 00456896
    MOVSD ES:EDI,ESI                    ; 00456897
    LEA ESI,[ESP + 0x11c]               ; 00456898
    PUSH ESI                            ; 0045689f
    LEA ESI,[ESP + 0xc]                 ; 004568a0
    PUSH ESI                            ; 004568a4
    LEA ESI,[ESP + 0x10c]               ; 004568a5
    LEA EDI,[ESP + 0x100]               ; 004568ac
    CALL FUN_00592720                   ; 004568b3
        ;   XREF to: 00592720 (UNCONDITIONAL_CALL)  ; undefined FUN_00592720()
    LEA ESI,[ESP + 0x10c]               ; 004568b8
    ADD ESP,0x4                         ; 004568bf
    MOVSD ES:EDI,ESI                    ; 004568c2
    MOVSD ES:EDI,ESI                    ; 004568c3
    MOVSD ES:EDI,ESI                    ; 004568c4
    LEA ESI,[ESP + 0xfc]                ; 004568c5
    PUSH ESI                            ; 004568cc
    PUSH EBX                            ; 004568cd
    CALL dword ptr [EBP + 0x70]         ; 004568ce
    ADD ESP,0xc                         ; 004568d1
    POP ESI                             ; 004568d4
    POP EDI                             ; 004568d5
    ADD ESP,0x120                       ; 004568d6
        ;   Label: LAB_004568d6
    POP EBP                             ; 004568dc
    POP EBX                             ; 004568dd
    RET                                 ; 004568de

