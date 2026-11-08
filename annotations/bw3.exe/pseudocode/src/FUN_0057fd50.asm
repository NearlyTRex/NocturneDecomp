; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0057fd50(undefined4 param_1,LPCSTR param_2,int param_3,undefined4 param_4,undefined4 param_5 )
;
;
; XREF[1]:
;   FUN_00459f50 at 0045a739
;
; Referenced Globals:
;   void* PTR_CreateFontA_005b340c = 001b3814
;   undefined1* PTR_FUN_005e6534 = 0057fe10
;
; Called Functions:
;   CreateFontA
;   FUN_00509b90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057fd50
        ;   Label: FUN_0057fd50
    MOV EDX,dword ptr [ESP + 0x8]       ; 0057fd51
    PUSH EDX                            ; 0057fd55
    CALL FUN_00509b90                   ; 0057fd56
        ;   XREF to: 00509b90 (UNCONDITIONAL_CALL)  ; undefined FUN_00509b90()
    ADD ESP,0x4                         ; 0057fd5b
    MOV ECX,dword ptr [ESP + 0xc]       ; 0057fd5e
    PUSH ECX                            ; 0057fd62
    PUSH 0x0                            ; 0057fd63
    PUSH 0x0                            ; 0057fd65
    MOV dword ptr [EAX + 0x6a44],0x5e6534 ; 0057fd67 | PTR_FUN_005e6534
    PUSH 0x0                            ; 0057fd71
    MOV dword ptr [EAX + 0x6a48],0x0    ; 0057fd73
    PUSH 0x0                            ; 0057fd7d
    MOV dword ptr [EAX + 0x6a50],0x0    ; 0057fd7f
    PUSH 0x1                            ; 0057fd89
    MOV dword ptr [EAX + 0x6a54],0x0    ; 0057fd8b
    PUSH 0x0                            ; 0057fd95
    MOV dword ptr [EAX + 0x6a58],0x0    ; 0057fd97
    PUSH 0x0                            ; 0057fda1
    MOV dword ptr [EAX + 0x6b64],0x0    ; 0057fda3
    PUSH 0x0                            ; 0057fdad
    MOV dword ptr [EAX + 0x6b68],0x0    ; 0057fdaf
    PUSH 0x190                          ; 0057fdb9
    MOV dword ptr [EAX + 0x6b6c],0x0    ; 0057fdbe
    PUSH 0x0                            ; 0057fdc8
    MOV EBX,EAX                         ; 0057fdca
    MOV dword ptr [EAX + 0x6b70],0x0    ; 0057fdcc
    PUSH 0x0                            ; 0057fdd6
    MOV dword ptr [EAX + 0x6b74],0x0    ; 0057fdd8
    MOV EAX,dword ptr [ESP + 0x40]      ; 0057fde2
    PUSH 0x0                            ; 0057fde6
    NEG EAX                             ; 0057fde8
    PUSH EAX                            ; 0057fdea
    CALL dword ptr CS:[0x5b340c]        ; 0057fdeb | PTR_CreateFontA_005b340c
    MOV dword ptr [EBX + 0x6a50],EAX    ; 0057fdf2
    MOV EAX,dword ptr [ESP + 0x14]      ; 0057fdf8
    MOV dword ptr [EBX + 0x6b78],EAX    ; 0057fdfc
    MOV EAX,dword ptr [ESP + 0x18]      ; 0057fe02
    MOV dword ptr [EBX + 0x6b7c],EAX    ; 0057fe06
    MOV EAX,EBX                         ; 0057fe0c
    POP EBX                             ; 0057fe0e
    RET                                 ; 0057fe0f

