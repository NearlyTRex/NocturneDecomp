; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_10001470(undefined4 param_1)
;
;
; XREF[1]:
;   APIDLLselectTexture at 10003eb2
;
; Referenced Globals:
;   void* switchdataD_100014d8 = 10001493
;   byte switchdataD_100014ec = 0x0
;   void* PTR_DAT_10014044 = 10060678
;   void* PTR_DAT_10014048 = 100a8688
;   void* PTR_DAT_1001404c = 100f0698
;   void* PTR_DAT_10014050 = 10018660
;   undefined4 DAT_10226900
;
; Called Functions:
;   FUN_10001090
;
; *****************************************************************************

section .text

    MOV EAX,[0x10226900]                ; 10001470 | DAT_10226900
        ;   Label: FUN_10001470
    MOV EAX,dword ptr [EAX]             ; 10001475
    SUB EAX,0x20                        ; 10001477
    CMP EAX,0xe0                        ; 1000147a
    JA 0x10001490                       ; 1000147f
        ;   XREF to: 10001490 (CONDITIONAL_JUMP)  ; caseD_ff
    XOR ECX,ECX                         ; 10001481
    MOV CL,byte ptr [EAX + 0x100014ec]  ; 10001483 | switchdataD_100014ec
    JMP dword ptr [ECX*0x4 + 0x100014d8] ; 10001489 | caseD_20 | caseD_ff | caseD_40
        ;   Label: switchD
    XOR EAX,EAX                         ; 10001490
        ;   Label: caseD_21
    RET                                 ; 10001492
    MOV EAX,dword ptr [ESP + 0x4]       ; 10001493
        ;   Label: caseD_20
    MOV ECX,dword ptr [0x10014044]      ; 10001497 | PTR_DAT_10014044
    PUSH EAX                            ; 1000149d
    CALL FUN_10001090                   ; 1000149e
        ;   XREF to: 10001090 (UNCONDITIONAL_CALL)  ; undefined FUN_10001090()
    RET                                 ; 100014a3
    MOV EAX,dword ptr [ESP + 0x4]       ; 100014a4
        ;   Label: caseD_40
    MOV ECX,dword ptr [0x10014048]      ; 100014a8 | PTR_DAT_10014048
    PUSH EAX                            ; 100014ae
    CALL FUN_10001090                   ; 100014af
        ;   XREF to: 10001090 (UNCONDITIONAL_CALL)  ; undefined FUN_10001090()
    RET                                 ; 100014b4
    MOV EAX,dword ptr [ESP + 0x4]       ; 100014b5
        ;   Label: caseD_80
    MOV ECX,dword ptr [0x1001404c]      ; 100014b9 | PTR_DAT_1001404c
    PUSH EAX                            ; 100014bf
    CALL FUN_10001090                   ; 100014c0
        ;   XREF to: 10001090 (UNCONDITIONAL_CALL)  ; undefined FUN_10001090()
    RET                                 ; 100014c5
    MOV EAX,dword ptr [ESP + 0x4]       ; 100014c6
        ;   Label: caseD_100
    MOV ECX,dword ptr [0x10014050]      ; 100014ca | PTR_DAT_10014050
    PUSH EAX                            ; 100014d0
    CALL FUN_10001090                   ; 100014d1
        ;   XREF to: 10001090 (UNCONDITIONAL_CALL)  ; undefined FUN_10001090()
    RET                                 ; 100014d6

