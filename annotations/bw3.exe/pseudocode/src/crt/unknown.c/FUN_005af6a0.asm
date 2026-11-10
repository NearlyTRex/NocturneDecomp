; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005af6a0(undefined4 param_1,undefined4 param_2)
;
; Local Variables:
; undefined        Stack[-0x10]:1  local_10
; undefined        Stack[-0xc]:1  local_c
;
; XREF[1]:
;   crt_unknown.c_FUN_005acd10 at 005acd42
;
; Called Functions:
;   crt_unknown.c_FUN_005aca50
;   crt_unknown.c_FUN_005b0c50
;   crt_unknown.c_FUN_005b0c90
;   crt_unknown.c_FUN_005b0d00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005af6a0
        ;   Label: crt_unknown.c_FUN_005af6a0
    PUSH ESI                            ; 005af6a1
    SUB ESP,0x8                         ; 005af6a2
    MOV EDX,dword ptr [ESP + 0x14]      ; 005af6a5
    PUSH EDX                            ; 005af6a9
    LEA EAX,[ESP + 0x8]                 ; 005af6aa
    PUSH EAX                            ; 005af6ae
    CALL crt_unknown.c_FUN_005b0c50     ; 005af6af
        ;   XREF to: 005b0c50 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b0c50()
    ADD ESP,0x8                         ; 005af6b4
    MOV EBX,dword ptr [ESP + 0x14]      ; 005af6b7
    PUSH EBX                            ; 005af6bb
    CALL crt_unknown.c_FUN_005aca50     ; 005af6bc
        ;   XREF to: 005aca50 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aca50()
    ADD ESP,0x4                         ; 005af6c1
    MOV ECX,dword ptr [ESP + 0x18]      ; 005af6c4
    XOR DL,DL                           ; 005af6c8
    PUSH ECX                            ; 005af6ca
    MOV byte ptr [ESP + EAX*0x1 + 0x8],DL ; 005af6cb
    LEA EAX,[ESP + 0x4]                 ; 005af6cf
    PUSH EAX                            ; 005af6d3
    CALL crt_unknown.c_FUN_005b0c50     ; 005af6d4
        ;   XREF to: 005b0c50 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b0c50()
    ADD ESP,0x8                         ; 005af6d9
    MOV ESI,dword ptr [ESP + 0x18]      ; 005af6dc
    PUSH ESI                            ; 005af6e0
    CALL crt_unknown.c_FUN_005aca50     ; 005af6e1
        ;   XREF to: 005aca50 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aca50()
    ADD ESP,0x4                         ; 005af6e6
    XOR DH,DH                           ; 005af6e9
    MOV byte ptr [ESP + EAX*0x1],DH     ; 005af6eb
    LEA EAX,[ESP + 0x4]                 ; 005af6ee
    PUSH EAX                            ; 005af6f2
    CALL crt_unknown.c_FUN_005b0c90     ; 005af6f3
        ;   XREF to: 005b0c90 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b0c90()
    ADD ESP,0x4                         ; 005af6f8
    MOV EAX,ESP                         ; 005af6fb
    PUSH EAX                            ; 005af6fd
    CALL crt_unknown.c_FUN_005b0c90     ; 005af6fe
        ;   XREF to: 005b0c90 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b0c90()
    ADD ESP,0x4                         ; 005af703
    MOV EAX,ESP                         ; 005af706
    PUSH EAX                            ; 005af708
    LEA EAX,[ESP + 0x8]                 ; 005af709
    PUSH EAX                            ; 005af70d
    CALL crt_unknown.c_FUN_005b0d00     ; 005af70e
        ;   XREF to: 005b0d00 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b0d00()
    ADD ESP,0x8                         ; 005af713
    ADD ESP,0x8                         ; 005af716
    POP ESI                             ; 005af719
    POP EBX                             ; 005af71a
    RET                                 ; 005af71b

