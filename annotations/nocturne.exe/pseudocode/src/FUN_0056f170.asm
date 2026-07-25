; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0056f170(LPCSTR param_1,byte param_2)
;
;
; XREF[1]:
;   FUN_00568690 at 005686c1
;
; Referenced Globals:
;   void* PTR_GetFileAttributesA_0057550c = 00175d2a
;
; Called Functions:
;   FUN_0056c6d0
;   GetFileAttributesA
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0056f170
        ;   Label: FUN_0056f170
    PUSH EDX                            ; 0056f174
    CALL dword ptr CS:[0x57550c]        ; 0056f175 | PTR_GetFileAttributesA_0057550c
    CMP EAX,-0x1                        ; 0056f17c
    JZ 0x0056c73c                       ; 0056f17f
        ;   XREF to: 0056c73c (CONDITIONAL_JUMP)
    TEST byte ptr [ESP + 0x8],0x2       ; 0056f185
    JZ 0x0056f19b                       ; 0056f18a
        ;   XREF to: 0056f19b (CONDITIONAL_JUMP)  ; LAB_0056f19b
    TEST AL,0x1                         ; 0056f18c
    JZ 0x0056f19b                       ; 0056f18e
        ;   XREF to: 0056f19b (CONDITIONAL_JUMP)  ; LAB_0056f19b
    PUSH 0x5                            ; 0056f190
    CALL FUN_0056c6d0                   ; 0056f192
        ;   XREF to: 0056c6d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0056c6d0()
    ADD ESP,0x4                         ; 0056f197
    RET                                 ; 0056f19a
    XOR EAX,EAX                         ; 0056f19b
        ;   Label: LAB_0056f19b
    RET                                 ; 0056f19d

