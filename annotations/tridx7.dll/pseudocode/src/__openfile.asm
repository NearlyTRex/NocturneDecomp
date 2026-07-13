; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; FILE * __cdecl __openfile(char *_Filename,char *_Mode,int _ShFlag,FILE *_File)
;
; Parameters:
; char *           Stack[0x4]:4   _Filename
; char *           Stack[0x8]:4   _Mode
; int              Stack[0xc]:4   _ShFlag
; FILE *           Stack[0x10]:4   _File
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   __fsopen at 10005542
;
; Referenced Globals:
;   void* switchdataD_10006bcc = 10006ac4
;   byte switchdataD_10006bf4 = 0x0
;   undefined4 DAT_10017308
;   undefined4 DAT_1001768c
;
; Called Functions:
;   FUN_100093f0
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 10006a30
        ;   Label: __openfile
    MOV ECX,dword ptr [ESP + 0xc]       ; 10006a33
    PUSH EBX                            ; 10006a37
    PUSH ESI                            ; 10006a38
    XOR EBX,EBX                         ; 10006a39
    MOVSX EAX,byte ptr [ECX]            ; 10006a3b
    PUSH EDI                            ; 10006a3e
    PUSH EBP                            ; 10006a3f
    XOR EDI,EDI                         ; 10006a40
    CMP EAX,0x61                        ; 10006a42
    JZ 0x10006a5b                       ; 10006a45
        ;   XREF to: 10006a5b (CONDITIONAL_JUMP)  ; LAB_10006a5b
    CMP EAX,0x72                        ; 10006a47
    JZ 0x10006a62                       ; 10006a4a
        ;   XREF to: 10006a62 (CONDITIONAL_JUMP)  ; LAB_10006a62
    CMP EAX,0x77                        ; 10006a4c
    JZ 0x10006a6f                       ; 10006a4f
        ;   XREF to: 10006a6f (CONDITIONAL_JUMP)  ; LAB_10006a6f
    XOR EAX,EAX                         ; 10006a51
    POP EBP                             ; 10006a53
    POP EDI                             ; 10006a54
    POP ESI                             ; 10006a55
    POP EBX                             ; 10006a56
    ADD ESP,0x4                         ; 10006a57
    RET                                 ; 10006a5a
    MOV EDX,0x109                       ; 10006a5b
        ;   Label: LAB_10006a5b
    JMP 0x10006a74                      ; 10006a60
        ;   XREF to: 10006a74 (UNCONDITIONAL_JUMP)  ; LAB_10006a74
    XOR EDX,EDX                         ; 10006a62
        ;   Label: LAB_10006a62
    MOV ESI,dword ptr [0x1001768c]      ; 10006a64 | DAT_1001768c
    OR ESI,0x1                          ; 10006a6a
    JMP 0x10006a7d                      ; 10006a6d
        ;   XREF to: 10006a7d (UNCONDITIONAL_JUMP)  ; LAB_10006a7d
    MOV EDX,0x301                       ; 10006a6f
        ;   Label: LAB_10006a6f
    MOV ESI,dword ptr [0x1001768c]      ; 10006a74 | DAT_1001768c
        ;   Label: LAB_10006a74
    OR ESI,0x2                          ; 10006a7a
    MOV EBP,0x1                         ; 10006a7d
        ;   Label: LAB_10006a7d
    ADD ECX,EBP                         ; 10006a82
    CMP byte ptr [ECX],0x0              ; 10006a84
    JZ 0x10006b7e                       ; 10006a87
        ;   XREF to: 10006b7e (CONDITIONAL_JUMP)  ; LAB_10006b7e
    TEST EBP,EBP                        ; 10006a8d
        ;   Label: LAB_10006a8d
    JZ 0x10006b7e                       ; 10006a8f
        ;   XREF to: 10006b7e (CONDITIONAL_JUMP)  ; LAB_10006b7e
    MOVSX EAX,byte ptr [ECX]            ; 10006a95
    SUB EAX,0x2b                        ; 10006a98
    CMP EAX,0x49                        ; 10006a9b
    JA 0x10006abd                       ; 10006a9e
        ;   XREF to: 10006abd (CONDITIONAL_JUMP)  ; caseD_73
    MOV dword ptr [ESP + 0x10],0x0      ; 10006aa0
    MOV AL,byte ptr [EAX + 0x10006bf4]  ; 10006aa8 | switchdataD_10006bf4
    MOV byte ptr [ESP + 0x10],AL        ; 10006aae
    MOV EAX,dword ptr [ESP + 0x10]      ; 10006ab2
    JMP dword ptr [EAX*0x4 + 0x10006bcc] ; 10006ab6 | caseD_2b | caseD_73 | caseD_44
        ;   Label: switchD
    XOR EBP,EBP                         ; 10006abd
        ;   Label: caseD_2c
    JMP 0x10006b74                      ; 10006abf
        ;   XREF to: 10006b74 (UNCONDITIONAL_JUMP)  ; LAB_10006b74
    TEST DL,0x2                         ; 10006ac4
        ;   Label: caseD_2b
    JZ 0x10006ad0                       ; 10006ac7
        ;   XREF to: 10006ad0 (CONDITIONAL_JUMP)  ; LAB_10006ad0
    XOR EBP,EBP                         ; 10006ac9
    JMP 0x10006b74                      ; 10006acb
        ;   XREF to: 10006b74 (UNCONDITIONAL_JUMP)  ; LAB_10006b74
    OR EDX,0x2                          ; 10006ad0
        ;   Label: LAB_10006ad0
    OR ESI,0x80                         ; 10006ad3
    AND EDX,0xfffffffe                  ; 10006ad9
    AND ESI,0xfffffffc                  ; 10006adc
    JMP 0x10006b74                      ; 10006adf
        ;   XREF to: 10006b74 (UNCONDITIONAL_JUMP)  ; LAB_10006b74
    TEST DL,0x40                        ; 10006ae4
        ;   Label: caseD_44
    JZ 0x10006af0                       ; 10006ae7
        ;   XREF to: 10006af0 (CONDITIONAL_JUMP)  ; LAB_10006af0
    XOR EBP,EBP                         ; 10006ae9
    JMP 0x10006b74                      ; 10006aeb
        ;   XREF to: 10006b74 (UNCONDITIONAL_JUMP)  ; LAB_10006b74
    OR EDX,0x40                         ; 10006af0
        ;   Label: LAB_10006af0
    JMP 0x10006b74                      ; 10006af3
        ;   XREF to: 10006b74 (UNCONDITIONAL_JUMP)  ; LAB_10006b74
    TEST EBX,EBX                        ; 10006af5
        ;   Label: caseD_52
    JZ 0x10006afd                       ; 10006af7
        ;   XREF to: 10006afd (CONDITIONAL_JUMP)  ; LAB_10006afd
    XOR EBP,EBP                         ; 10006af9
    JMP 0x10006b74                      ; 10006afb
        ;   XREF to: 10006b74 (UNCONDITIONAL_JUMP)  ; LAB_10006b74
    MOV EBX,0x1                         ; 10006afd
        ;   Label: LAB_10006afd
    OR EDX,0x10                         ; 10006b02
    JMP 0x10006b74                      ; 10006b05
        ;   XREF to: 10006b74 (UNCONDITIONAL_JUMP)  ; LAB_10006b74
    TEST EBX,EBX                        ; 10006b07
        ;   Label: caseD_53
    JZ 0x10006b0f                       ; 10006b09
        ;   XREF to: 10006b0f (CONDITIONAL_JUMP)  ; LAB_10006b0f
    XOR EBP,EBP                         ; 10006b0b
    JMP 0x10006b74                      ; 10006b0d
        ;   XREF to: 10006b74 (UNCONDITIONAL_JUMP)  ; LAB_10006b74
    MOV EBX,0x1                         ; 10006b0f
        ;   Label: LAB_10006b0f
    OR EDX,0x20                         ; 10006b14
    JMP 0x10006b74                      ; 10006b17
        ;   XREF to: 10006b74 (UNCONDITIONAL_JUMP)  ; LAB_10006b74
    TEST DH,0x10                        ; 10006b19
        ;   Label: caseD_54
    JZ 0x10006b22                       ; 10006b1c
        ;   XREF to: 10006b22 (CONDITIONAL_JUMP)  ; LAB_10006b22
    XOR EBP,EBP                         ; 10006b1e
    JMP 0x10006b74                      ; 10006b20
        ;   XREF to: 10006b74 (UNCONDITIONAL_JUMP)  ; LAB_10006b74
    OR EDX,0x1000                       ; 10006b22
        ;   Label: LAB_10006b22
    JMP 0x10006b74                      ; 10006b28
        ;   XREF to: 10006b74 (UNCONDITIONAL_JUMP)  ; LAB_10006b74
    TEST DH,0xc0                        ; 10006b2a
        ;   Label: caseD_62
    JZ 0x10006b33                       ; 10006b2d
        ;   XREF to: 10006b33 (CONDITIONAL_JUMP)  ; LAB_10006b33
    XOR EBP,EBP                         ; 10006b2f
    JMP 0x10006b74                      ; 10006b31
        ;   XREF to: 10006b74 (UNCONDITIONAL_JUMP)  ; LAB_10006b74
    OR EDX,0x8000                       ; 10006b33
        ;   Label: LAB_10006b33
    JMP 0x10006b74                      ; 10006b39
        ;   XREF to: 10006b74 (UNCONDITIONAL_JUMP)  ; LAB_10006b74
    TEST EDI,EDI                        ; 10006b3b
        ;   Label: caseD_63
    JZ 0x10006b43                       ; 10006b3d
        ;   XREF to: 10006b43 (CONDITIONAL_JUMP)  ; LAB_10006b43
    XOR EBP,EBP                         ; 10006b3f
    JMP 0x10006b74                      ; 10006b41
        ;   XREF to: 10006b74 (UNCONDITIONAL_JUMP)  ; LAB_10006b74
    MOV EDI,0x1                         ; 10006b43
        ;   Label: LAB_10006b43
    OR ESI,0x4000                       ; 10006b48
    JMP 0x10006b74                      ; 10006b4e
        ;   XREF to: 10006b74 (UNCONDITIONAL_JUMP)  ; LAB_10006b74
    TEST EDI,EDI                        ; 10006b50
        ;   Label: caseD_6e
    JZ 0x10006b58                       ; 10006b52
        ;   XREF to: 10006b58 (CONDITIONAL_JUMP)  ; LAB_10006b58
    XOR EBP,EBP                         ; 10006b54
    JMP 0x10006b74                      ; 10006b56
        ;   XREF to: 10006b74 (UNCONDITIONAL_JUMP)  ; LAB_10006b74
    MOV EDI,0x1                         ; 10006b58
        ;   Label: LAB_10006b58
    AND ESI,0xffffbfff                  ; 10006b5d
    JMP 0x10006b74                      ; 10006b63
        ;   XREF to: 10006b74 (UNCONDITIONAL_JUMP)  ; LAB_10006b74
    TEST DH,0xc0                        ; 10006b65
        ;   Label: caseD_74
    JZ 0x10006b6e                       ; 10006b68
        ;   XREF to: 10006b6e (CONDITIONAL_JUMP)  ; LAB_10006b6e
    XOR EBP,EBP                         ; 10006b6a
    JMP 0x10006b74                      ; 10006b6c
        ;   XREF to: 10006b74 (UNCONDITIONAL_JUMP)  ; LAB_10006b74
    OR EDX,0x4000                       ; 10006b6e
        ;   Label: LAB_10006b6e
    INC ECX                             ; 10006b74
        ;   Label: LAB_10006b74
    CMP byte ptr [ECX],0x0              ; 10006b75
    JNZ 0x10006a8d                      ; 10006b78
        ;   XREF to: 10006a8d (CONDITIONAL_JUMP)  ; LAB_10006a8d
    MOV EAX,dword ptr [ESP + 0x20]      ; 10006b7e
        ;   Label: LAB_10006b7e
    PUSH 0x1a4                          ; 10006b82
    MOV ECX,dword ptr [ESP + 0x1c]      ; 10006b87
    PUSH EAX                            ; 10006b8b
    PUSH EDX                            ; 10006b8c
    PUSH ECX                            ; 10006b8d
    CALL FUN_100093f0                   ; 10006b8e
        ;   XREF to: 100093f0 (UNCONDITIONAL_CALL)  ; undefined FUN_100093f0()
    ADD ESP,0x10                        ; 10006b93
    MOV EDX,EAX                         ; 10006b96
    TEST EDX,EDX                        ; 10006b98
    JGE 0x10006ba6                      ; 10006b9a
        ;   XREF to: 10006ba6 (CONDITIONAL_JUMP)  ; LAB_10006ba6
    XOR EAX,EAX                         ; 10006b9c
    POP EBP                             ; 10006b9e
    POP EDI                             ; 10006b9f
    POP ESI                             ; 10006ba0
    POP EBX                             ; 10006ba1
    ADD ESP,0x4                         ; 10006ba2
    RET                                 ; 10006ba5
    MOV EAX,dword ptr [ESP + 0x24]      ; 10006ba6
        ;   Label: LAB_10006ba6
    XOR ECX,ECX                         ; 10006baa
    INC dword ptr [0x10017308]          ; 10006bac | DAT_10017308
    POP EBP                             ; 10006bb2
    POP EDI                             ; 10006bb3
    MOV dword ptr [EAX + 0xc],ESI       ; 10006bb4
    POP ESI                             ; 10006bb7
    MOV dword ptr [EAX + 0x4],ECX       ; 10006bb8
    POP EBX                             ; 10006bbb
    MOV dword ptr [EAX],ECX             ; 10006bbc
    MOV dword ptr [EAX + 0x8],ECX       ; 10006bbe
    MOV dword ptr [EAX + 0x1c],ECX      ; 10006bc1
    MOV dword ptr [EAX + 0x10],EDX      ; 10006bc4
    ADD ESP,0x4                         ; 10006bc7
    RET                                 ; 10006bca

