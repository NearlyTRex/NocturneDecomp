; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0058ff40(LPCSTR param_1,LPCSTR param_2,BYTE *param_3)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
; undefined        Stack[-0x8]:1  local_8
;
; XREF[1]:
;   FUN_004e46c0 at 004e4d92
;
; Referenced Globals:
;   void* PTR_RegCloseKey_005c83dc = 001c8766
;   void* PTR_RegCreateKeyExA_005c83e0 = 001c8774
;   void* PTR_RegSetValueExA_005c83ec = 001c87aa
;   undefined4 DAT_005eeac0
;
; Called Functions:
;   RegCloseKey
;   RegCreateKeyExA
;   RegSetValueExA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058ff40
        ;   Label: FUN_0058ff40
    SUB ESP,0x8                         ; 0058ff41
    MOV EBX,dword ptr [ESP + 0x18]      ; 0058ff44
    LEA EAX,[ESP + 0x4]                 ; 0058ff48
    PUSH EAX                            ; 0058ff4c
    LEA EAX,[ESP + 0x4]                 ; 0058ff4d
    PUSH EAX                            ; 0058ff51
    PUSH 0x0                            ; 0058ff52
    PUSH 0x20006                        ; 0058ff54
    PUSH 0x0                            ; 0058ff59
    PUSH 0x5eeac0                       ; 0058ff5b | DAT_005eeac0
    PUSH 0x0                            ; 0058ff60
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0058ff62
    PUSH EDX                            ; 0058ff66
    PUSH 0x80000002                     ; 0058ff67
    CALL dword ptr CS:[0x5c83e0]        ; 0058ff6c | PTR_RegCreateKeyExA_005c83e0
    TEST EAX,EAX                        ; 0058ff73
    JZ 0x0058ff7c                       ; 0058ff75
        ;   XREF to: 0058ff7c (CONDITIONAL_JUMP)  ; LAB_0058ff7c
    ADD ESP,0x8                         ; 0058ff77
    POP EBX                             ; 0058ff7a
    RET                                 ; 0058ff7b
    PUSH EDI                            ; 0058ff7c
        ;   Label: LAB_0058ff7c
    PUSH ESI                            ; 0058ff7d
    MOV EDI,EBX                         ; 0058ff7e
    SUB ECX,ECX                         ; 0058ff80
    DEC ECX                             ; 0058ff82
    XOR EAX,EAX                         ; 0058ff83
    SCASB.REPNE ES:EDI                  ; 0058ff85
    NOT ECX                             ; 0058ff87
    DEC ECX                             ; 0058ff89
    INC ECX                             ; 0058ff8a
    PUSH ECX                            ; 0058ff8b
    PUSH EBX                            ; 0058ff8c
    PUSH 0x1                            ; 0058ff8d
    PUSH 0x0                            ; 0058ff8f
    MOV ECX,dword ptr [ESP + 0x2c]      ; 0058ff91
    PUSH ECX                            ; 0058ff95
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0058ff96
    PUSH EBX                            ; 0058ff9a
    CALL dword ptr CS:[0x5c83ec]        ; 0058ff9b | PTR_RegSetValueExA_005c83ec
    MOV ESI,dword ptr [ESP + 0x8]       ; 0058ffa2
    PUSH ESI                            ; 0058ffa6
    CALL dword ptr CS:[0x5c83dc]        ; 0058ffa7 | PTR_RegCloseKey_005c83dc
    POP ESI                             ; 0058ffae
    POP EDI                             ; 0058ffaf
    ADD ESP,0x8                         ; 0058ffb0
    POP EBX                             ; 0058ffb3
    RET                                 ; 0058ffb4

