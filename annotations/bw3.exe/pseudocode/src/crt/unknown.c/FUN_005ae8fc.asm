; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005ae8fc(LPVOID param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005ae95c at 005ae969
;
; Referenced Globals:
;   void* PTR_VirtualFree_005b3678 = 001b42b4
;   undefined4 DAT_006075c4
;   undefined4 DAT_006075c8
;   undefined4 DAT_006075cc
;   undefined4 DAT_02d25290
;
; Called Functions:
;   VirtualFree
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ae8fc
        ;   Label: crt_unknown.c_FUN_005ae8fc
    PUSH ESI                            ; 005ae8fd
    MOV ESI,dword ptr [ESP + 0xc]       ; 005ae8fe
    PUSH 0x8000                         ; 005ae902
    PUSH 0x0                            ; 005ae907
    PUSH ESI                            ; 005ae909
    MOV EBX,dword ptr [ESI + 0x8]       ; 005ae90a
    CALL dword ptr CS:[0x5b3678]        ; 005ae90d | PTR_VirtualFree_005b3678
    TEST EAX,EAX                        ; 005ae914
    JNZ 0x005ae920                      ; 005ae916
        ;   XREF to: 005ae920 (CONDITIONAL_JUMP)  ; LAB_005ae920
    MOV EAX,0xffffffff                  ; 005ae918
    POP ESI                             ; 005ae91d
    POP EBX                             ; 005ae91e
    RET                                 ; 005ae91f
    CMP ESI,dword ptr [0x006075c8]      ; 005ae920 | DAT_006075c8
        ;   Label: LAB_005ae920
    JNZ 0x005ae944                      ; 005ae926
        ;   XREF to: 005ae944 (CONDITIONAL_JUMP)  ; LAB_005ae944
    TEST EBX,EBX                        ; 005ae928
    JZ 0x005ae934                       ; 005ae92a
        ;   XREF to: 005ae934 (CONDITIONAL_JUMP)  ; LAB_005ae934
    MOV dword ptr [0x006075c8],EBX      ; 005ae92c | DAT_006075c8
    JMP 0x005ae944                      ; 005ae932
        ;   XREF to: 005ae944 (UNCONDITIONAL_JUMP)  ; LAB_005ae944
    MOV EAX,[0x006075c4]                ; 005ae934 | DAT_006075c4
        ;   Label: LAB_005ae934
    MOV dword ptr [0x006075cc],EBX      ; 005ae939 | DAT_006075cc
    MOV [0x006075c8],EAX                ; 005ae93f | DAT_006075c8
    MOV ECX,dword ptr [0x02d25290]      ; 005ae944 | DAT_02d25290
        ;   Label: LAB_005ae944
    CMP ESI,ECX                         ; 005ae94a
    JNZ 0x005ae956                      ; 005ae94c
        ;   XREF to: 005ae956 (CONDITIONAL_JUMP)  ; LAB_005ae956
    XOR ESI,ECX                         ; 005ae94e
    MOV dword ptr [0x02d25290],ESI      ; 005ae950 | DAT_02d25290
    XOR EAX,EAX                         ; 005ae956
        ;   Label: LAB_005ae956
    POP ESI                             ; 005ae958
    POP EBX                             ; 005ae959
    RET                                 ; 005ae95a

