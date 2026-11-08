; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004953d0(int param_1)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   FUN_0055fd30 at 0055feb5
;
; Called Functions:
;   FUN_00495280
;   FUN_00555f20
;   FUN_00555f60
;   FUN_00555fd0
;   FUN_00556050
;   FUN_00556240
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004953d0
        ;   Label: FUN_004953d0
    PUSH EBP                            ; 004953d1
    SUB ESP,0x4                         ; 004953d2
    MOV EBP,dword ptr [ESP + 0x10]      ; 004953d5
    MOV EDX,dword ptr [EBP + 0x3ac8]    ; 004953d9
    XOR EBX,EBX                         ; 004953df
    TEST EDX,EDX                        ; 004953e1
    JLE 0x0049544b                      ; 004953e3
        ;   XREF to: 0049544b (CONDITIONAL_JUMP)  ; LAB_0049544b
    PUSH EDI                            ; 004953e5
    PUSH ESI                            ; 004953e6
    LEA EAX,[EBP + 0x3acc]              ; 004953e7
    LEA EDI,[EBP + 0x3ae4]              ; 004953ed
    MOV dword ptr [ESP + 0x8],EAX       ; 004953f3
    IMUL ESI,EBX,0x120                  ; 004953f7
        ;   Label: LAB_004953f7
    ADD ESI,dword ptr [ESP + 0x8]       ; 004953fd
    CALL FUN_00555fd0                   ; 00495401
        ;   XREF to: 00555fd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00555fd0()
    PUSH 0x1                            ; 00495406
    MOV EAX,dword ptr [ESI + 0x11c]     ; 00495408
    PUSH EAX                            ; 0049540e
    MOV EDX,dword ptr [ESI + 0x118]     ; 0049540f
    PUSH EDX                            ; 00495415
    CALL FUN_00555f60                   ; 00495416
        ;   XREF to: 00555f60 (UNCONDITIONAL_CALL)  ; undefined FUN_00555f60()
    ADD ESP,0xc                         ; 0049541b
    PUSH 0x1                            ; 0049541e
    CALL FUN_00555f20                   ; 00495420
        ;   XREF to: 00555f20 (UNCONDITIONAL_CALL)  ; undefined FUN_00555f20()
    ADD ESP,0x4                         ; 00495425
    PUSH EDI                            ; 00495428
    CALL FUN_00556240                   ; 00495429
        ;   XREF to: 00556240 (UNCONDITIONAL_CALL)  ; undefined FUN_00556240()
    ADD ESP,0x4                         ; 0049542e
    INC EBX                             ; 00495431
    MOV dword ptr [ESI],EAX             ; 00495432
    CALL FUN_00556050                   ; 00495434
        ;   XREF to: 00556050 (UNCONDITIONAL_CALL)  ; undefined FUN_00556050()
    MOV ECX,dword ptr [EBP + 0x3ac8]    ; 00495439
    ADD EDI,0x120                       ; 0049543f
    CMP EBX,ECX                         ; 00495445
    JL 0x004953f7                       ; 00495447
        ;   XREF to: 004953f7 (CONDITIONAL_JUMP)  ; LAB_004953f7
    POP ESI                             ; 00495449
    POP EDI                             ; 0049544a
    PUSH EBP                            ; 0049544b
        ;   Label: LAB_0049544b
    CALL FUN_00495280                   ; 0049544c
        ;   XREF to: 00495280 (UNCONDITIONAL_CALL)  ; undefined FUN_00495280()
    ADD ESP,0x4                         ; 00495451
    ADD ESP,0x4                         ; 00495454
    POP EBP                             ; 00495457
    POP EBX                             ; 00495458
    RET                                 ; 00495459

