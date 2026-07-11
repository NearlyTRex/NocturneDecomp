; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005586a0(int param_1)
;
;
; XREF[1]:
;   FUN_005584d0 at 00558548
;
; Referenced Globals:
;   void* PTR_DeleteDC_005753a8 = 0017574a
;   void* PTR_SelectObject_005753bc = 0017579c
;
; Called Functions:
;   DeleteDC
;   SelectObject
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005586a0
        ;   Label: FUN_005586a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005586a1
    MOV EDX,dword ptr [EBX + 0x4]       ; 005586a5
    TEST EDX,EDX                        ; 005586a8
    JNZ 0x005586ca                      ; 005586aa
        ;   XREF to: 005586ca (CONDITIONAL_JUMP)  ; LAB_005586ca
    MOV dword ptr [EBX + 0x128],0x0     ; 005586ac
        ;   Label: LAB_005586ac
    MOV EAX,dword ptr [EBX + 0x128]     ; 005586b6
    MOV dword ptr [EBX + 0x124],EAX     ; 005586bc
    MOV dword ptr [EBX + 0x120],EAX     ; 005586c2
    POP EBX                             ; 005586c8
    RET                                 ; 005586c9
    PUSH EDI                            ; 005586ca
        ;   Label: LAB_005586ca
    MOV ECX,dword ptr [EBX + 0x10]      ; 005586cb
    PUSH ECX                            ; 005586ce
    PUSH EDX                            ; 005586cf
    CALL dword ptr CS:[0x5753bc]        ; 005586d0 | PTR_SelectObject_005753bc
    MOV EDI,dword ptr [EBX + 0x4]       ; 005586d7
    PUSH EDI                            ; 005586da
    MOV dword ptr [EBX + 0x10],0x0      ; 005586db
    CALL dword ptr CS:[0x5753a8]        ; 005586e2 | PTR_DeleteDC_005753a8
    MOV dword ptr [EBX + 0x4],0x0       ; 005586e9
    MOV dword ptr [EBX + 0x8],0x0       ; 005586f0
    MOV dword ptr [EBX + 0x14],0x0      ; 005586f7
    POP EDI                             ; 005586fe
    JMP 0x005586ac                      ; 005586ff
        ;   XREF to: 005586ac (UNCONDITIONAL_JUMP)  ; LAB_005586ac

