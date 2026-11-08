; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005b2080(int param_1)
;
;
; XREF[2]:
;   FUN_005b1b90 at 005b1ba7
;   FUN_005b1e90 at 005b1f0b
;
; Referenced Globals:
;   void* PTR_DeleteDC_005d0410 = 001d0822
;   void* PTR_SelectObject_005d0424 = 001d0874
;
; Called Functions:
;   DeleteDC
;   SelectObject
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b2080
        ;   Label: FUN_005b2080
    MOV EBX,dword ptr [ESP + 0x8]       ; 005b2081
    MOV EDX,dword ptr [EBX + 0x6a48]    ; 005b2085
    TEST EDX,EDX                        ; 005b208b
    JNZ 0x005b20ad                      ; 005b208d
        ;   XREF to: 005b20ad (CONDITIONAL_JUMP)  ; LAB_005b20ad
    MOV dword ptr [EBX + 0x6b6c],0x0    ; 005b208f
        ;   Label: LAB_005b208f
    MOV EAX,dword ptr [EBX + 0x6b6c]    ; 005b2099
    MOV dword ptr [EBX + 0x6b68],EAX    ; 005b209f
    MOV dword ptr [EBX + 0x6b64],EAX    ; 005b20a5
    POP EBX                             ; 005b20ab
    RET                                 ; 005b20ac
    PUSH EDI                            ; 005b20ad
        ;   Label: LAB_005b20ad
    MOV ECX,dword ptr [EBX + 0x6a54]    ; 005b20ae
    PUSH ECX                            ; 005b20b4
    PUSH EDX                            ; 005b20b5
    CALL dword ptr CS:[0x5d0424]        ; 005b20b6 | PTR_SelectObject_005d0424
    MOV EDI,dword ptr [EBX + 0x6a48]    ; 005b20bd
    PUSH EDI                            ; 005b20c3
    MOV dword ptr [EBX + 0x6a54],0x0    ; 005b20c4
    CALL dword ptr CS:[0x5d0410]        ; 005b20ce | PTR_DeleteDC_005d0410
    MOV dword ptr [EBX + 0x6a48],0x0    ; 005b20d5
    MOV dword ptr [EBX + 0x6a4c],0x0    ; 005b20df
    MOV dword ptr [EBX + 0x6a58],0x0    ; 005b20e9
    POP EDI                             ; 005b20f3
    JMP 0x005b208f                      ; 005b20f4
        ;   XREF to: 005b208f (UNCONDITIONAL_JUMP)  ; LAB_005b208f

