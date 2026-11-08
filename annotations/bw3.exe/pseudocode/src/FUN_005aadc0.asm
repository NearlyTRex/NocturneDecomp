; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_005aadc0(uint param_1,char *param_2)
;
;
; XREF[1]:
;   FUN_005aaed4 at 005ab067
;
; Referenced Globals:
;   void* PTR_CloseHandle_005b3518 = 001b3c48
;   void* PTR_CreateFileA_005b3524 = 001b3c7a
;   void* PTR_GetFileType_005b35a8 = 001b3ee4
;   void* PTR_GetLastError_005b35b0 = 001b3f06
;   undefined4 DAT_005da874
;   TerminatedCString s_conin_005da878
;   undefined4 DAT_005da880
;   undefined2 DAT_00607985
;
; Called Functions:
;   CloseHandle
;   CreateFileA
;   FUN_005a3260
;   FUN_005a3d00
;   GetFileType
;   GetLastError
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005aadc0
        ;   Label: FUN_005aadc0
    PUSH ESI                            ; 005aadc1
    PUSH EDI                            ; 005aadc2
    MOV ESI,dword ptr [ESP + 0x14]      ; 005aadc3
    MOV DX,word ptr [0x00607985]        ; 005aadc7 | DAT_00607985
    XOR EBX,EBX                         ; 005aadce
    CMP DX,0x8000                       ; 005aadd0
    JNC 0x005aadde                      ; 005aadd5
        ;   XREF to: 005aadde (CONDITIONAL_JUMP)  ; LAB_005aadde
    MOV EAX,0x20                        ; 005aadd7
    JMP 0x005aade3                      ; 005aaddc
        ;   XREF to: 005aade3 (UNCONDITIONAL_JUMP)  ; LAB_005aade3
    MOV EAX,0x40                        ; 005aadde
        ;   Label: LAB_005aadde
    TEST dword ptr [ESP + 0x10],EAX     ; 005aade3
        ;   Label: LAB_005aade3
    JZ 0x005aae67                       ; 005aade7
        ;   XREF to: 005aae67 (CONDITIONAL_JUMP)  ; LAB_005aae67
    PUSH 0x5da874                       ; 005aaded | DAT_005da874
    PUSH ESI                            ; 005aadf2
    CALL FUN_005a3260                   ; 005aadf3
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3260()
    ADD ESP,0x8                         ; 005aadf8
    TEST EAX,EAX                        ; 005aadfb
    JNZ 0x005aae06                      ; 005aadfd
        ;   XREF to: 005aae06 (CONDITIONAL_JUMP)  ; LAB_005aae06
    MOV EAX,0x5da878                    ; 005aadff | = "conin$"
    JMP 0x005aae08                      ; 005aae04
        ;   XREF to: 005aae08 (UNCONDITIONAL_JUMP)  ; LAB_005aae08
    MOV EAX,ESI                         ; 005aae06
        ;   Label: LAB_005aae06
    PUSH 0x0                            ; 005aae08
        ;   Label: LAB_005aae08
    PUSH 0x0                            ; 005aae0a
    PUSH 0x3                            ; 005aae0c
    PUSH 0x0                            ; 005aae0e
    PUSH 0x0                            ; 005aae10
    PUSH 0x0                            ; 005aae12
    PUSH EAX                            ; 005aae14 | = "conin$"
    CALL dword ptr CS:[0x5b3524]        ; 005aae15 | PTR_CreateFileA_005b3524
    MOV EDI,EAX                         ; 005aae1c
    CMP EAX,-0x1                        ; 005aae1e
    JZ 0x005aae4b                       ; 005aae21
        ;   XREF to: 005aae4b (CONDITIONAL_JUMP)  ; LAB_005aae4b
    PUSH EAX                            ; 005aae23
    CALL dword ptr CS:[0x5b35a8]        ; 005aae24 | PTR_GetFileType_005b35a8
    CMP EAX,0x2                         ; 005aae2b
    JNZ 0x005aae37                      ; 005aae2e
        ;   XREF to: 005aae37 (CONDITIONAL_JUMP)  ; LAB_005aae37
    MOV EBX,0x2000                      ; 005aae30
    JMP 0x005aae41                      ; 005aae35
        ;   XREF to: 005aae41 (UNCONDITIONAL_JUMP)  ; LAB_005aae41
    CMP EAX,0x3                         ; 005aae37
        ;   Label: LAB_005aae37
    JNZ 0x005aae41                      ; 005aae3a
        ;   XREF to: 005aae41 (CONDITIONAL_JUMP)  ; LAB_005aae41
    MOV EBX,0x1000                      ; 005aae3c
    PUSH EDI                            ; 005aae41
        ;   Label: LAB_005aae41
    CALL dword ptr CS:[0x5b3518]        ; 005aae42 | PTR_CloseHandle_005b3518
    JMP 0x005aae67                      ; 005aae49
        ;   XREF to: 005aae67 (UNCONDITIONAL_JUMP)  ; LAB_005aae67
    CMP word ptr [0x00607985],0x8000    ; 005aae4b | DAT_00607985
        ;   Label: LAB_005aae4b
    JNC 0x005aae62                      ; 005aae54
        ;   XREF to: 005aae62 (CONDITIONAL_JUMP)  ; LAB_005aae62
    CALL dword ptr CS:[0x5b35b0]        ; 005aae56 | PTR_GetLastError_005b35b0
    CMP EAX,0x5                         ; 005aae5d
    JNZ 0x005aae67                      ; 005aae60
        ;   XREF to: 005aae67 (CONDITIONAL_JUMP)  ; LAB_005aae67
    MOV EBX,0x2000                      ; 005aae62
        ;   Label: LAB_005aae62
    TEST byte ptr [ESP + 0x10],0x10     ; 005aae67
        ;   Label: LAB_005aae67
    JZ 0x005aae7a                       ; 005aae6c
        ;   XREF to: 005aae7a (CONDITIONAL_JUMP)  ; LAB_005aae7a
    AND BX,0xfb6                        ; 005aae6e
    OR BX,0x4049                        ; 005aae73
    JMP 0x005aaebb                      ; 005aae78
        ;   XREF to: 005aaebb (UNCONDITIONAL_JUMP)  ; LAB_005aaebb
    TEST BH,0x20                        ; 005aae7a
        ;   Label: LAB_005aae7a
    JNZ 0x005aaebb                      ; 005aae7d
        ;   XREF to: 005aaebb (CONDITIONAL_JUMP)  ; LAB_005aaebb
    TEST BH,0x10                        ; 005aae7f
    JNZ 0x005aaebb                      ; 005aae82
        ;   XREF to: 005aaebb (CONDITIONAL_JUMP)  ; LAB_005aaebb
    MOV DL,0x2e                         ; 005aae84
    OR BH,0x80                          ; 005aae86
    MOV AL,byte ptr [ESI]               ; 005aae89
        ;   Label: LAB_005aae89
    CMP AL,DL                           ; 005aae8b
    JZ 0x005aaea1                       ; 005aae8d
        ;   XREF to: 005aaea1 (CONDITIONAL_JUMP)  ; LAB_005aaea1
    CMP AL,0x0                          ; 005aae8f
    JZ 0x005aae9f                       ; 005aae91
        ;   XREF to: 005aae9f (CONDITIONAL_JUMP)  ; LAB_005aae9f
    INC ESI                             ; 005aae93
    MOV AL,byte ptr [ESI]               ; 005aae94
    CMP AL,DL                           ; 005aae96
    JZ 0x005aaea1                       ; 005aae98
        ;   XREF to: 005aaea1 (CONDITIONAL_JUMP)  ; LAB_005aaea1
    INC ESI                             ; 005aae9a
    CMP AL,0x0                          ; 005aae9b
    JNZ 0x005aae89                      ; 005aae9d
        ;   XREF to: 005aae89 (CONDITIONAL_JUMP)  ; LAB_005aae89
    SUB ESI,ESI                         ; 005aae9f
        ;   Label: LAB_005aae9f
    TEST ESI,ESI                        ; 005aaea1
        ;   Label: LAB_005aaea1
    JZ 0x005aaebb                       ; 005aaea3
        ;   XREF to: 005aaebb (CONDITIONAL_JUMP)  ; LAB_005aaebb
    PUSH 0x5da880                       ; 005aaea5 | DAT_005da880
    INC ESI                             ; 005aaeaa
    PUSH ESI                            ; 005aaeab
    CALL FUN_005a3d00                   ; 005aaeac
        ;   XREF to: 005a3d00 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3d00()
    ADD ESP,0x8                         ; 005aaeb1
    TEST EAX,EAX                        ; 005aaeb4
    JNZ 0x005aaebb                      ; 005aaeb6
        ;   XREF to: 005aaebb (CONDITIONAL_JUMP)  ; LAB_005aaebb
    OR BL,0x49                          ; 005aaeb8
    MOV DL,byte ptr [ESP + 0x10]        ; 005aaebb
        ;   Label: LAB_005aaebb
    OR BX,0x124                         ; 005aaebf
    TEST DL,0x1                         ; 005aaec4
    JNZ 0x005aaecc                      ; 005aaec7
        ;   XREF to: 005aaecc (CONDITIONAL_JUMP)  ; LAB_005aaecc
    OR BL,0x92                          ; 005aaec9
    MOV EAX,EBX                         ; 005aaecc
        ;   Label: LAB_005aaecc
    POP EDI                             ; 005aaece
    POP ESI                             ; 005aaecf
    POP EBX                             ; 005aaed0
    RET                                 ; 005aaed1

