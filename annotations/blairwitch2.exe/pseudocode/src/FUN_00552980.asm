; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00552980(void)
;
; Local Variables:
; undefined4       Stack[-0x478]:4  local_478
; undefined        Stack[-0x468]:1  local_468
; undefined4       Stack[-0x368]:4  local_368
; undefined4       Stack[-0x354]:4  local_354
; undefined        Stack[-0x350]:1  local_350
; undefined4       Stack[-0x250]:4  local_250
; undefined        Stack[-0x238]:1  local_238
; undefined4       Stack[-0x130]:4  local_130
; undefined        Stack[-0x120]:1  local_120
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   FUN_00552aa0 at 00552ac1
;
; Called Functions:
;   FUN_00552890
;   FUN_00552920
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00552980
        ;   Label: FUN_00552980
    PUSH ESI                            ; 00552981
    SUB ESP,0x578                       ; 00552982
    CALL FUN_00552890                   ; 00552988
        ;   XREF to: 00552890 (UNCONDITIONAL_CALL)  ; undefined FUN_00552890()
    MOV EBX,EAX                         ; 0055298d
    CMP EAX,0x1                         ; 0055298f
    JL 0x00552a84                       ; 00552992
        ;   XREF to: 00552a84 (CONDITIONAL_JUMP)  ; LAB_00552a84
    XOR ESI,ESI                         ; 00552998
    TEST EAX,EAX                        ; 0055299a
    JLE 0x005529bd                      ; 0055299c
        ;   XREF to: 005529bd (CONDITIONAL_JUMP)  ; LAB_005529bd
    MOV EAX,ESP                         ; 0055299e
        ;   Label: LAB_0055299e
    PUSH EAX                            ; 005529a0
    PUSH ESI                            ; 005529a1
    CALL FUN_00552920                   ; 005529a2
        ;   XREF to: 00552920 (UNCONDITIONAL_CALL)  ; undefined FUN_00552920()
    ADD ESP,0x8                         ; 005529a7
    CMP dword ptr [ESP + 0x108],0x2     ; 005529aa
    JGE 0x00552a79                      ; 005529b2
        ;   XREF to: 00552a79 (CONDITIONAL_JUMP)  ; LAB_00552a79
    INC ESI                             ; 005529b8
    CMP ESI,EBX                         ; 005529b9
    JL 0x0055299e                       ; 005529bb
        ;   XREF to: 0055299e (CONDITIONAL_JUMP)  ; LAB_0055299e
    XOR ESI,ESI                         ; 005529bd
        ;   Label: LAB_005529bd
    TEST EBX,EBX                        ; 005529bf
    JLE 0x005529e7                      ; 005529c1
        ;   XREF to: 005529e7 (CONDITIONAL_JUMP)  ; LAB_005529e7
    LEA EAX,[ESP + 0x348]               ; 005529c3
        ;   Label: LAB_005529c3
    PUSH EAX                            ; 005529ca
    PUSH ESI                            ; 005529cb
    CALL FUN_00552920                   ; 005529cc
        ;   XREF to: 00552920 (UNCONDITIONAL_CALL)  ; undefined FUN_00552920()
    ADD ESP,0x8                         ; 005529d1
    CMP dword ptr [ESP + 0x450],0x1     ; 005529d4
    JGE 0x00552a79                      ; 005529dc
        ;   XREF to: 00552a79 (CONDITIONAL_JUMP)  ; LAB_00552a79
    INC ESI                             ; 005529e2
    CMP ESI,EBX                         ; 005529e3
    JL 0x005529c3                       ; 005529e5
        ;   XREF to: 005529c3 (CONDITIONAL_JUMP)  ; LAB_005529c3
    XOR ESI,ESI                         ; 005529e7
        ;   Label: LAB_005529e7
    TEST EBX,EBX                        ; 005529e9
    JLE 0x00552a21                      ; 005529eb
        ;   XREF to: 00552a21 (CONDITIONAL_JUMP)  ; LAB_00552a21
    LEA EAX,[ESP + 0x460]               ; 005529ed
        ;   Label: LAB_005529ed
    PUSH EAX                            ; 005529f4
    PUSH ESI                            ; 005529f5
    CALL FUN_00552920                   ; 005529f6
        ;   XREF to: 00552920 (UNCONDITIONAL_CALL)  ; undefined FUN_00552920()
    ADD ESP,0x8                         ; 005529fb
    CMP dword ptr [ESP + 0x560],0x1     ; 005529fe
    JNZ 0x00552a1c                      ; 00552a06
        ;   XREF to: 00552a1c (CONDITIONAL_JUMP)  ; LAB_00552a1c
    CMP dword ptr [ESP + 0x570],0x0     ; 00552a08
    JZ 0x00552a1c                       ; 00552a10
        ;   XREF to: 00552a1c (CONDITIONAL_JUMP)  ; LAB_00552a1c
    CMP dword ptr [ESP + 0x574],0x0     ; 00552a12
    JZ 0x00552a79                       ; 00552a1a
        ;   XREF to: 00552a79 (CONDITIONAL_JUMP)  ; LAB_00552a79
    INC ESI                             ; 00552a1c
        ;   Label: LAB_00552a1c
    CMP ESI,EBX                         ; 00552a1d
    JL 0x005529ed                       ; 00552a1f
        ;   XREF to: 005529ed (CONDITIONAL_JUMP)  ; LAB_005529ed
    XOR ESI,ESI                         ; 00552a21
        ;   Label: LAB_00552a21
    TEST EBX,EBX                        ; 00552a23
    JLE 0x00552a51                      ; 00552a25
        ;   XREF to: 00552a51 (CONDITIONAL_JUMP)  ; LAB_00552a51
    LEA EAX,[ESP + 0x118]               ; 00552a27
        ;   Label: LAB_00552a27
    PUSH EAX                            ; 00552a2e
    PUSH ESI                            ; 00552a2f
    CALL FUN_00552920                   ; 00552a30
        ;   XREF to: 00552920 (UNCONDITIONAL_CALL)  ; undefined FUN_00552920()
    ADD ESP,0x8                         ; 00552a35
    CMP dword ptr [ESP + 0x218],0x1     ; 00552a38
    JNZ 0x00552a4c                      ; 00552a40
        ;   XREF to: 00552a4c (CONDITIONAL_JUMP)  ; LAB_00552a4c
    CMP dword ptr [ESP + 0x22c],0x0     ; 00552a42
    JZ 0x00552a79                       ; 00552a4a
        ;   XREF to: 00552a79 (CONDITIONAL_JUMP)  ; LAB_00552a79
    INC ESI                             ; 00552a4c
        ;   Label: LAB_00552a4c
    CMP ESI,EBX                         ; 00552a4d
    JL 0x00552a27                       ; 00552a4f
        ;   XREF to: 00552a27 (CONDITIONAL_JUMP)  ; LAB_00552a27
    XOR ESI,ESI                         ; 00552a51
        ;   Label: LAB_00552a51
    TEST EBX,EBX                        ; 00552a53
    JLE 0x00552a77                      ; 00552a55
        ;   XREF to: 00552a77 (CONDITIONAL_JUMP)  ; LAB_00552a77
    LEA EAX,[ESP + 0x230]               ; 00552a57
        ;   Label: LAB_00552a57
    PUSH EAX                            ; 00552a5e
    PUSH ESI                            ; 00552a5f
    CALL FUN_00552920                   ; 00552a60
        ;   XREF to: 00552920 (UNCONDITIONAL_CALL)  ; undefined FUN_00552920()
    ADD ESP,0x8                         ; 00552a65
    CMP dword ptr [ESP + 0x330],0x0     ; 00552a68
    JZ 0x00552a79                       ; 00552a70
        ;   XREF to: 00552a79 (CONDITIONAL_JUMP)  ; LAB_00552a79
    INC ESI                             ; 00552a72
    CMP ESI,EBX                         ; 00552a73
    JL 0x00552a57                       ; 00552a75
        ;   XREF to: 00552a57 (CONDITIONAL_JUMP)  ; LAB_00552a57
    XOR ESI,ESI                         ; 00552a77
        ;   Label: LAB_00552a77
    MOV EAX,ESI                         ; 00552a79
        ;   Label: LAB_00552a79
    ADD ESP,0x578                       ; 00552a7b
    POP ESI                             ; 00552a81
    POP EBX                             ; 00552a82
    RET                                 ; 00552a83
    MOV ESI,0xffffffff                  ; 00552a84
        ;   Label: LAB_00552a84
    MOV EAX,ESI                         ; 00552a89
    ADD ESP,0x578                       ; 00552a8b
    POP ESI                             ; 00552a91
    POP EBX                             ; 00552a92
    RET                                 ; 00552a93

