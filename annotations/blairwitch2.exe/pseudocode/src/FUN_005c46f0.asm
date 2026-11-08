; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c46f0(undefined4 param_1,undefined4 param_2)
;
; Local Variables:
; undefined        Stack[-0x10]:1  local_10
; undefined        Stack[-0xc]:1  local_c
;
; XREF[1]:
;   FUN_005c1b50 at 005c1b82
;
; Called Functions:
;   FUN_005c0e50
;   FUN_005c5bc0
;   FUN_005c5c00
;   FUN_005c5c70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c46f0
        ;   Label: FUN_005c46f0
    PUSH ESI                            ; 005c46f1
    SUB ESP,0x8                         ; 005c46f2
    MOV EDX,dword ptr [ESP + 0x14]      ; 005c46f5
    PUSH EDX                            ; 005c46f9
    LEA EAX,[ESP + 0x8]                 ; 005c46fa
    PUSH EAX                            ; 005c46fe
    CALL FUN_005c5bc0                   ; 005c46ff
        ;   XREF to: 005c5bc0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c5bc0()
    ADD ESP,0x8                         ; 005c4704
    MOV EBX,dword ptr [ESP + 0x14]      ; 005c4707
    PUSH EBX                            ; 005c470b
    CALL FUN_005c0e50                   ; 005c470c
        ;   XREF to: 005c0e50 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0e50()
    ADD ESP,0x4                         ; 005c4711
    MOV ECX,dword ptr [ESP + 0x18]      ; 005c4714
    XOR DL,DL                           ; 005c4718
    PUSH ECX                            ; 005c471a
    MOV byte ptr [ESP + EAX*0x1 + 0x8],DL ; 005c471b
    LEA EAX,[ESP + 0x4]                 ; 005c471f
    PUSH EAX                            ; 005c4723
    CALL FUN_005c5bc0                   ; 005c4724
        ;   XREF to: 005c5bc0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c5bc0()
    ADD ESP,0x8                         ; 005c4729
    MOV ESI,dword ptr [ESP + 0x18]      ; 005c472c
    PUSH ESI                            ; 005c4730
    CALL FUN_005c0e50                   ; 005c4731
        ;   XREF to: 005c0e50 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0e50()
    ADD ESP,0x4                         ; 005c4736
    XOR DH,DH                           ; 005c4739
    MOV byte ptr [ESP + EAX*0x1],DH     ; 005c473b
    LEA EAX,[ESP + 0x4]                 ; 005c473e
    PUSH EAX                            ; 005c4742
    CALL FUN_005c5c00                   ; 005c4743
        ;   XREF to: 005c5c00 (UNCONDITIONAL_CALL)  ; undefined FUN_005c5c00()
    ADD ESP,0x4                         ; 005c4748
    MOV EAX,ESP                         ; 005c474b
    PUSH EAX                            ; 005c474d
    CALL FUN_005c5c00                   ; 005c474e
        ;   XREF to: 005c5c00 (UNCONDITIONAL_CALL)  ; undefined FUN_005c5c00()
    ADD ESP,0x4                         ; 005c4753
    MOV EAX,ESP                         ; 005c4756
    PUSH EAX                            ; 005c4758
    LEA EAX,[ESP + 0x8]                 ; 005c4759
    PUSH EAX                            ; 005c475d
    CALL FUN_005c5c70                   ; 005c475e
        ;   XREF to: 005c5c70 (UNCONDITIONAL_CALL)  ; undefined FUN_005c5c70()
    ADD ESP,0x8                         ; 005c4763
    ADD ESP,0x8                         ; 005c4766
    POP ESI                             ; 005c4769
    POP EBX                             ; 005c476a
    RET                                 ; 005c476b

