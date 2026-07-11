; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005710a0(undefined4 param_1,undefined4 param_2)
;
; Local Variables:
; undefined        Stack[-0x10]:1  local_10
; undefined        Stack[-0xc]:1  local_c
;
; XREF[1]:
;   FUN_0056dcd0 at 0056dd02
;
; Called Functions:
;   FUN_0056da50
;   FUN_00572d50
;   FUN_00572d90
;   FUN_00572e00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005710a0
        ;   Label: FUN_005710a0
    PUSH ESI                            ; 005710a1
    SUB ESP,0x8                         ; 005710a2
    MOV EDX,dword ptr [ESP + 0x14]      ; 005710a5
    PUSH EDX                            ; 005710a9
    LEA EAX,[ESP + 0x8]                 ; 005710aa
    PUSH EAX                            ; 005710ae
    CALL FUN_00572d50                   ; 005710af
        ;   XREF to: 00572d50 (UNCONDITIONAL_CALL)  ; undefined FUN_00572d50()
    ADD ESP,0x8                         ; 005710b4
    MOV EBX,dword ptr [ESP + 0x14]      ; 005710b7
    PUSH EBX                            ; 005710bb
    CALL FUN_0056da50                   ; 005710bc
        ;   XREF to: 0056da50 (UNCONDITIONAL_CALL)  ; undefined FUN_0056da50()
    ADD ESP,0x4                         ; 005710c1
    MOV ECX,dword ptr [ESP + 0x18]      ; 005710c4
    XOR DL,DL                           ; 005710c8
    PUSH ECX                            ; 005710ca
    MOV byte ptr [ESP + EAX*0x1 + 0x8],DL ; 005710cb
    LEA EAX,[ESP + 0x4]                 ; 005710cf
    PUSH EAX                            ; 005710d3
    CALL FUN_00572d50                   ; 005710d4
        ;   XREF to: 00572d50 (UNCONDITIONAL_CALL)  ; undefined FUN_00572d50()
    ADD ESP,0x8                         ; 005710d9
    MOV ESI,dword ptr [ESP + 0x18]      ; 005710dc
    PUSH ESI                            ; 005710e0
    CALL FUN_0056da50                   ; 005710e1
        ;   XREF to: 0056da50 (UNCONDITIONAL_CALL)  ; undefined FUN_0056da50()
    ADD ESP,0x4                         ; 005710e6
    XOR DH,DH                           ; 005710e9
    MOV byte ptr [ESP + EAX*0x1],DH     ; 005710eb
    LEA EAX,[ESP + 0x4]                 ; 005710ee
    PUSH EAX                            ; 005710f2
    CALL FUN_00572d90                   ; 005710f3
        ;   XREF to: 00572d90 (UNCONDITIONAL_CALL)  ; undefined FUN_00572d90()
    ADD ESP,0x4                         ; 005710f8
    MOV EAX,ESP                         ; 005710fb
    PUSH EAX                            ; 005710fd
    CALL FUN_00572d90                   ; 005710fe
        ;   XREF to: 00572d90 (UNCONDITIONAL_CALL)  ; undefined FUN_00572d90()
    ADD ESP,0x4                         ; 00571103
    MOV EAX,ESP                         ; 00571106
    PUSH EAX                            ; 00571108
    LEA EAX,[ESP + 0x8]                 ; 00571109
    PUSH EAX                            ; 0057110d
    CALL FUN_00572e00                   ; 0057110e
        ;   XREF to: 00572e00 (UNCONDITIONAL_CALL)  ; undefined FUN_00572e00()
    ADD ESP,0x8                         ; 00571113
    ADD ESP,0x8                         ; 00571116
    POP ESI                             ; 00571119
    POP EBX                             ; 0057111a
    RET                                 ; 0057111b

