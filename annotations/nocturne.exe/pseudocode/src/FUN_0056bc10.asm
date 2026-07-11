; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; DWORD FUN_0056bc10(uint param_1)
;
;
; XREF[2]:
;   FUN_0056582c at 00565950
;   FUN_00566e70 at 00566e91
;
; Referenced Globals:
;   void* PTR_SetFilePointer_005755a0 = 00175ff4
;   void* PTR_FUN_005c1ac0 = 005671e4
;   void* PTR_FUN_005c1ac4 = 005671e4
;   undefined4 DAT_005c1f54
;   undefined4 DAT_005c1f90
;
; Called Functions:
;   FUN_005671e4
;   FUN_00568e80
;   FUN_0056c73c
;   SetFilePointer
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056bc10
        ;   Label: FUN_0056bc10
    PUSH ESI                            ; 0056bc11
    MOV EBX,dword ptr [ESP + 0xc]       ; 0056bc12
    TEST EBX,EBX                        ; 0056bc16
    JL 0x0056bc22                       ; 0056bc18
        ;   XREF to: 0056bc22 (CONDITIONAL_JUMP)  ; LAB_0056bc22
    CMP EBX,dword ptr [0x005c1f90]      ; 0056bc1a | DAT_005c1f90
    JBE 0x0056bc34                      ; 0056bc20
        ;   XREF to: 0056bc34 (CONDITIONAL_JUMP)  ; LAB_0056bc34
    PUSH 0x4                            ; 0056bc22
        ;   Label: LAB_0056bc22
    CALL FUN_00568e80                   ; 0056bc24
        ;   XREF to: 00568e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00568e80()
    MOV EAX,0xffffffff                  ; 0056bc29
    ADD ESP,0x4                         ; 0056bc2e
    POP ESI                             ; 0056bc31
    POP EBX                             ; 0056bc32
    RET                                 ; 0056bc33
    MOV ESI,dword ptr [0x005c1f54]      ; 0056bc34 | DAT_005c1f54
        ;   Label: LAB_0056bc34
    PUSH EBX                            ; 0056bc3a
    MOV ESI,dword ptr [ESI + EBX*0x4]   ; 0056bc3b
    CALL dword ptr [0x005c1ac0]         ; 0056bc3e | PTR_FUN_005c1ac0
    ADD ESP,0x4                         ; 0056bc44
    PUSH 0x1                            ; 0056bc47
    PUSH 0x0                            ; 0056bc49
    PUSH 0x0                            ; 0056bc4b
    PUSH ESI                            ; 0056bc4d
    CALL dword ptr CS:[0x5755a0]        ; 0056bc4e | PTR_SetFilePointer_005755a0
    PUSH EBX                            ; 0056bc55
    MOV ESI,EAX                         ; 0056bc56
    CALL dword ptr [0x005c1ac4]         ; 0056bc58 | PTR_FUN_005c1ac4
    ADD ESP,0x4                         ; 0056bc5e
    CMP ESI,-0x1                        ; 0056bc61
    JNZ 0x0056bc6b                      ; 0056bc64
        ;   XREF to: 0056bc6b (CONDITIONAL_JUMP)  ; LAB_0056bc6b
    CALL FUN_0056c73c                   ; 0056bc66
        ;   XREF to: 0056c73c (UNCONDITIONAL_CALL)  ; undefined FUN_0056c73c()
    MOV EAX,ESI                         ; 0056bc6b
        ;   Label: LAB_0056bc6b
    POP ESI                             ; 0056bc6d
    POP EBX                             ; 0056bc6e
    RET                                 ; 0056bc6f

