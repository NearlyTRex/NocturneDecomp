; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004bab60(undefined4 param_1,char *param_2)
;
; Local Variables:
; undefined        Stack[-0x10c]:1  local_10c
;
; XREF[1]:
;   FUN_004bb6f0 at 004bb94d
;
; Referenced Globals:
;   undefined4 DAT_005df8ad
;   void* PTR_FUN_00600954 = 004babf0
;
; Called Functions:
;   FUN_0040d220
;   FUN_004baa10
;   FUN_005bfb40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bab60
        ;   Label: FUN_004bab60
    PUSH ESI                            ; 004bab61
    PUSH EDI                            ; 004bab62
    SUB ESP,0x100                       ; 004bab63
    MOV EDX,dword ptr [ESP + 0x110]     ; 004bab69
    PUSH EDX                            ; 004bab70
    CALL FUN_004baa10                   ; 004bab71
        ;   XREF to: 004baa10 (UNCONDITIONAL_CALL)  ; undefined FUN_004baa10()
    MOV EBX,EAX                         ; 004bab76
    ADD ESP,0x4                         ; 004bab78
    LEA EDX,[EAX + 0x2c]                ; 004bab7b
    MOV ESI,dword ptr [ESP + 0x114]     ; 004bab7e
    MOV EDI,EDX                         ; 004bab85
    MOV dword ptr [EAX + 0x14],0x600954 ; 004bab87 | PTR_FUN_00600954
    PUSH EDI                            ; 004bab8e
    MOV AL,byte ptr [ESI]               ; 004bab8f
        ;   Label: LAB_004bab8f
    MOV byte ptr [EDI],AL               ; 004bab91
    CMP AL,0x0                          ; 004bab93
    JZ 0x004baba7                       ; 004bab95
        ;   XREF to: 004baba7 (CONDITIONAL_JUMP)  ; LAB_004baba7
    MOV AL,byte ptr [ESI + 0x1]         ; 004bab97
    ADD ESI,0x2                         ; 004bab9a
    MOV byte ptr [EDI + 0x1],AL         ; 004bab9d
    ADD EDI,0x2                         ; 004baba0
    CMP AL,0x0                          ; 004baba3
    JNZ 0x004bab8f                      ; 004baba5
        ;   XREF to: 004bab8f (CONDITIONAL_JUMP)  ; LAB_004bab8f
    POP EDI                             ; 004baba7
        ;   Label: LAB_004baba7
    PUSH EDX                            ; 004baba8
    PUSH 0x5df8ad                       ; 004baba9 | DAT_005df8ad
    LEA EDX,[ESP + 0x8]                 ; 004babae
    PUSH EDX                            ; 004babb2
    CALL FUN_005bfb40                   ; 004babb3
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    MOV dword ptr [EBX + 0xc],0x4b      ; 004babb8
    ADD ESP,0xc                         ; 004babbf
    MOV ECX,dword ptr [EBX + 0xc]       ; 004babc2
    MOV dword ptr [EBX + 0x8],0x38      ; 004babc5
    PUSH ECX                            ; 004babcc
    MOV ESI,dword ptr [EBX + 0x8]       ; 004babcd
    PUSH ESI                            ; 004babd0
    LEA EDX,[ESP + 0x8]                 ; 004babd1
    PUSH EDX                            ; 004babd5
    LEA EDX,[EBX + 0x18]                ; 004babd6
    PUSH EDX                            ; 004babd9
    CALL FUN_0040d220                   ; 004babda
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d220()
    ADD ESP,0x10                        ; 004babdf
    MOV EAX,EBX                         ; 004babe2
    ADD ESP,0x100                       ; 004babe4
    POP EDI                             ; 004babea
    POP ESI                             ; 004babeb
    POP EBX                             ; 004babec
    RET                                 ; 004babed

