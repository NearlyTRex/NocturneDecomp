; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00567458(undefined4 param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_0056df10 at 0056df51
;
; Referenced Globals:
;   void* PTR_GetModuleHandleA_0057552c = 00175dbc
;   void* PTR_FUN_005c1abc = 005671dc
;   void* PTR_FUN_005c1afc = 00567208
;   undefined4 DAT_005c1cec
;
; Called Functions:
;   FUN_005671dc
;   FUN_00567208
;   FUN_0056720c
;   FUN_0056e9d0
;   FUN_0056eed8
;   FUN_0056ef60
;   GetModuleHandleA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00567458
        ;   Label: FUN_00567458
    PUSH 0x0                            ; 00567459
    CALL dword ptr CS:[0x57552c]        ; 0056745b | PTR_GetModuleHandleA_0057552c
    PUSH EAX                            ; 00567462
    MOV EDX,dword ptr [ESP + 0x10]      ; 00567463
    PUSH EDX                            ; 00567467
    PUSH 0x0                            ; 00567468
    CALL FUN_0056720c                   ; 0056746a
        ;   XREF to: 0056720c (UNCONDITIONAL_CALL)  ; undefined FUN_0056720c()
    ADD ESP,0xc                         ; 0056746f
    PUSH 0x5c1cec                       ; 00567472 | DAT_005c1cec
    CALL dword ptr [0x005c1abc]         ; 00567477 | PTR_FUN_005c1abc
    PUSH EAX                            ; 0056747d
    CALL FUN_0056e9d0                   ; 0056747e
        ;   XREF to: 0056e9d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0056e9d0()
    ADD ESP,0x8                         ; 00567483
    MOV EBX,dword ptr [ESP + 0x8]       ; 00567486
    PUSH EBX                            ; 0056748a
    CALL FUN_0056eed8                   ; 0056748b
        ;   XREF to: 0056eed8 (UNCONDITIONAL_CALL)  ; undefined FUN_0056eed8()
    ADD ESP,0x4                         ; 00567490
    MOV EAX,0x21                        ; 00567493
    CALL FUN_0056ef60                   ; 00567498
        ;   XREF to: 0056ef60 (UNCONDITIONAL_CALL)  ; undefined FUN_0056ef60()
    CALL dword ptr [0x005c1afc]         ; 0056749d | PTR_FUN_005c1afc
    MOV EAX,0xff                        ; 005674a3
    CALL FUN_0056ef60                   ; 005674a8
        ;   XREF to: 0056ef60 (UNCONDITIONAL_CALL)  ; undefined FUN_0056ef60()
    POP EBX                             ; 005674ad
    RET                                 ; 005674ae

