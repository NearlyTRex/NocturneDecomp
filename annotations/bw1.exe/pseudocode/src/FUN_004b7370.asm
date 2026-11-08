; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b7370(undefined4 param_1,undefined4 param_2)
;
; Local Variables:
; undefined        Stack[-0x110]:1  local_110
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   FUN_004d6990 at 004d7234
;
; Referenced Globals:
;   undefined4 DAT_005df674
;
; Called Functions:
;   FUN_004b2600
;   FUN_004b4b30
;   FUN_005c04b0
;   FUN_005c1180
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b7370
        ;   Label: FUN_004b7370
    PUSH ESI                            ; 004b7371
    PUSH EDI                            ; 004b7372
    SUB ESP,0x104                       ; 004b7373
    MOV EDI,dword ptr [ESP + 0x118]     ; 004b7379
    MOV ECX,dword ptr [ESP + 0x114]     ; 004b7380
    XOR EDX,EDX                         ; 004b7387
    PUSH ECX                            ; 004b7389
    MOV dword ptr [ESP + 0x104],EDX     ; 004b738a
    CALL FUN_004b4b30                   ; 004b7391
        ;   XREF to: 004b4b30 (UNCONDITIONAL_CALL)  ; undefined FUN_004b4b30()
    ADD ESP,0x4                         ; 004b7396
    PUSH EDI                            ; 004b7399
    PUSH 0xff                           ; 004b739a
    LEA EBX,[ESP + 0x8]                 ; 004b739f
    PUSH EBX                            ; 004b73a3
    CALL FUN_005c1180                   ; 004b73a4
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1180()
    ADD ESP,0xc                         ; 004b73a9
    LEA EBX,[ESP + 0x100]               ; 004b73ac
    PUSH EBX                            ; 004b73b3
    PUSH 0x5df674                       ; 004b73b4 | DAT_005df674
    PUSH EDI                            ; 004b73b9
    MOV EBX,0x1cb4f60                   ; 004b73ba
    CALL FUN_005c04b0                   ; 004b73bf
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04b0()
    LEA ESI,[EBX + 0x8c0]               ; 004b73c4
    ADD ESP,0xc                         ; 004b73ca
    PUSH EDI                            ; 004b73cd
        ;   Label: LAB_004b73cd
    PUSH EBX                            ; 004b73ce
    CALL FUN_004b2600                   ; 004b73cf
        ;   XREF to: 004b2600 (UNCONDITIONAL_CALL)  ; undefined FUN_004b2600()
    ADD EBX,0x70                        ; 004b73d4
    ADD ESP,0x8                         ; 004b73d7
    CMP EBX,ESI                         ; 004b73da
    JNZ 0x004b73cd                      ; 004b73dc
        ;   XREF to: 004b73cd (CONDITIONAL_JUMP)  ; LAB_004b73cd
    ADD ESP,0x104                       ; 004b73de
    POP EDI                             ; 004b73e4
    POP ESI                             ; 004b73e5
    POP EBX                             ; 004b73e6
    RET                                 ; 004b73e7

