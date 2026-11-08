; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; DWORD FUN_005c7510(uint param_1)
;
;
; XREF[2]:
;   FUN_005c170c at 005c1830
;   FUN_005c2e90 at 005c2eb1
;
; Referenced Globals:
;   void* PTR_SetFilePointer_005d0640 = 001d11be
;   void* PTR_FUN_00626600 = 005c50d4
;   void* PTR_FUN_00626604 = 005c50d4
;   undefined4 DAT_006267e0
;   undefined4 DAT_00626838
;
; Called Functions:
;   FUN_005c50d4
;   FUN_005c6450
;   FUN_005c862c
;   SetFilePointer
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c7510
        ;   Label: FUN_005c7510
    PUSH ESI                            ; 005c7511
    MOV EBX,dword ptr [ESP + 0xc]       ; 005c7512
    TEST EBX,EBX                        ; 005c7516
    JL 0x005c7522                       ; 005c7518
        ;   XREF to: 005c7522 (CONDITIONAL_JUMP)  ; LAB_005c7522
    CMP EBX,dword ptr [0x006267e0]      ; 005c751a | DAT_006267e0
    JBE 0x005c7534                      ; 005c7520
        ;   XREF to: 005c7534 (CONDITIONAL_JUMP)  ; LAB_005c7534
    PUSH 0x4                            ; 005c7522
        ;   Label: LAB_005c7522
    CALL FUN_005c6450                   ; 005c7524
        ;   XREF to: 005c6450 (UNCONDITIONAL_CALL)  ; undefined FUN_005c6450()
    MOV EAX,0xffffffff                  ; 005c7529
    ADD ESP,0x4                         ; 005c752e
    POP ESI                             ; 005c7531
    POP EBX                             ; 005c7532
    RET                                 ; 005c7533
    MOV ESI,dword ptr [0x00626838]      ; 005c7534 | DAT_00626838
        ;   Label: LAB_005c7534
    PUSH EBX                            ; 005c753a
    MOV ESI,dword ptr [ESI + EBX*0x4]   ; 005c753b
    CALL dword ptr [0x00626600]         ; 005c753e | PTR_FUN_00626600
    ADD ESP,0x4                         ; 005c7544
    PUSH 0x1                            ; 005c7547
    PUSH 0x0                            ; 005c7549
    PUSH 0x0                            ; 005c754b
    PUSH ESI                            ; 005c754d
    CALL dword ptr CS:[0x5d0640]        ; 005c754e | PTR_SetFilePointer_005d0640
    PUSH EBX                            ; 005c7555
    MOV ESI,EAX                         ; 005c7556
    CALL dword ptr [0x00626604]         ; 005c7558 | PTR_FUN_00626604
    ADD ESP,0x4                         ; 005c755e
    CMP ESI,-0x1                        ; 005c7561
    JNZ 0x005c756b                      ; 005c7564
        ;   XREF to: 005c756b (CONDITIONAL_JUMP)  ; LAB_005c756b
    CALL FUN_005c862c                   ; 005c7566
        ;   XREF to: 005c862c (UNCONDITIONAL_CALL)  ; undefined FUN_005c862c()
    MOV EAX,ESI                         ; 005c756b
        ;   Label: LAB_005c756b
    POP ESI                             ; 005c756d
    POP EBX                             ; 005c756e
    RET                                 ; 005c756f

