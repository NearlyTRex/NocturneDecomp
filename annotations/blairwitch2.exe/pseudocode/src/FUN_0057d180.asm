; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0057d180(int param_1)
;
;
; XREF[13]:
;   FUN_00401010 at 004010f8
;   FUN_00401590 at 004015d3
;   FUN_00402940 at 00402aac
;   FUN_0042c520 at 0042c5b3
;   FUN_0042c780 at 0042c89f
;   FUN_004a7d00 at 004a7f1c
;   FUN_004bb9b0 at 004bbd64
;   FUN_004bbf70 at 004bc2cc
;   FUN_0054c1c0 at 0054c52f
;   FUN_0054d9b0 at 0054da19
;   ... and 3 more
;
; Referenced Globals:
;   void* PTR_CloseHandle_005c850c = 001c8c32
;
; Called Functions:
;   CloseHandle
;   FUN_0057d240
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057d180
        ;   Label: FUN_0057d180
    MOV EBX,dword ptr [ESP + 0x8]       ; 0057d181
    MOV EDX,dword ptr [EBX + 0x4]       ; 0057d185
    TEST EDX,EDX                        ; 0057d188
    JNZ 0x0057d1b1                      ; 0057d18a
        ;   XREF to: 0057d1b1 (CONDITIONAL_JUMP)  ; LAB_0057d1b1
    MOV dword ptr [EBX + 0xc],0x0       ; 0057d18c
        ;   Label: LAB_0057d18c
    MOV dword ptr [EBX + 0x10],0x0      ; 0057d193
    PUSH EBX                            ; 0057d19a
    MOV dword ptr [EBX + 0x8],0x0       ; 0057d19b
    CALL FUN_0057d240                   ; 0057d1a2
        ;   XREF to: 0057d240 (UNCONDITIONAL_CALL)  ; undefined FUN_0057d240()
    MOV EAX,0x1                         ; 0057d1a7
    ADD ESP,0x4                         ; 0057d1ac
    POP EBX                             ; 0057d1af
    RET                                 ; 0057d1b0
    PUSH EDX                            ; 0057d1b1
        ;   Label: LAB_0057d1b1
    CALL dword ptr CS:[0x5c850c]        ; 0057d1b2 | PTR_CloseHandle_005c850c
    MOV dword ptr [EBX + 0x4],0x0       ; 0057d1b9
    JMP 0x0057d18c                      ; 0057d1c0
        ;   XREF to: 0057d18c (UNCONDITIONAL_JUMP)  ; LAB_0057d18c

