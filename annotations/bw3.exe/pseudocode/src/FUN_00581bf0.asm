; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00581bf0(LPCSTR param_1,LPCSTR param_2,BYTE *param_3)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
; undefined        Stack[-0x8]:1  local_8
;
; XREF[1]:
;   FUN_004e44e0 at 004e4be2
;
; Referenced Globals:
;   void* PTR_RegCloseKey_005b33e8 = 001b377e
;   void* PTR_RegCreateKeyExA_005b33ec = 001b378c
;   void* PTR_RegSetValueExA_005b33f8 = 001b37c2
;   undefined4 DAT_005d7eb9
;
; Called Functions:
;   RegCloseKey
;   RegCreateKeyExA
;   RegSetValueExA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00581bf0
        ;   Label: FUN_00581bf0
    SUB ESP,0x8                         ; 00581bf1
    MOV EBX,dword ptr [ESP + 0x18]      ; 00581bf4
    LEA EAX,[ESP + 0x4]                 ; 00581bf8
    PUSH EAX                            ; 00581bfc
    LEA EAX,[ESP + 0x4]                 ; 00581bfd
    PUSH EAX                            ; 00581c01
    PUSH 0x0                            ; 00581c02
    PUSH 0x20006                        ; 00581c04
    PUSH 0x0                            ; 00581c09
    PUSH 0x5d7eb9                       ; 00581c0b | DAT_005d7eb9
    PUSH 0x0                            ; 00581c10
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00581c12
    PUSH EDX                            ; 00581c16
    PUSH 0x80000002                     ; 00581c17
    CALL dword ptr CS:[0x5b33ec]        ; 00581c1c | PTR_RegCreateKeyExA_005b33ec
    TEST EAX,EAX                        ; 00581c23
    JZ 0x00581c2c                       ; 00581c25
        ;   XREF to: 00581c2c (CONDITIONAL_JUMP)  ; LAB_00581c2c
    ADD ESP,0x8                         ; 00581c27
    POP EBX                             ; 00581c2a
    RET                                 ; 00581c2b
    PUSH EDI                            ; 00581c2c
        ;   Label: LAB_00581c2c
    PUSH ESI                            ; 00581c2d
    MOV EDI,EBX                         ; 00581c2e
    SUB ECX,ECX                         ; 00581c30
    DEC ECX                             ; 00581c32
    XOR EAX,EAX                         ; 00581c33
    SCASB.REPNE ES:EDI                  ; 00581c35
    NOT ECX                             ; 00581c37
    DEC ECX                             ; 00581c39
    INC ECX                             ; 00581c3a
    PUSH ECX                            ; 00581c3b
    PUSH EBX                            ; 00581c3c
    PUSH 0x1                            ; 00581c3d
    PUSH 0x0                            ; 00581c3f
    MOV ECX,dword ptr [ESP + 0x2c]      ; 00581c41
    PUSH ECX                            ; 00581c45
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00581c46
    PUSH EBX                            ; 00581c4a
    CALL dword ptr CS:[0x5b33f8]        ; 00581c4b | PTR_RegSetValueExA_005b33f8
    MOV ESI,dword ptr [ESP + 0x8]       ; 00581c52
    PUSH ESI                            ; 00581c56
    CALL dword ptr CS:[0x5b33e8]        ; 00581c57 | PTR_RegCloseKey_005b33e8
    POP ESI                             ; 00581c5e
    POP EDI                             ; 00581c5f
    ADD ESP,0x8                         ; 00581c60
    POP EBX                             ; 00581c63
    RET                                 ; 00581c64

