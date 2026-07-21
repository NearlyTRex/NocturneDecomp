; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0056f1c0(uint param_1)
;
;
; XREF[1]:
;   FUN_00568890 at 00568991
;
; Referenced Globals:
;   void* PTR_FlushFileBuffers_005754d4 = 00175c1e
;   void* PTR_FUN_005c1ac0 = 005671e4
;   void* PTR_FUN_005c1ac4 = 005671e4
;   undefined4 DAT_005c1f54
;   undefined4 DAT_005c1f90
;
; Called Functions:
;   crt_errno.c___set_errno_FUN_0056c73c
;   FlushFileBuffers
;   FUN_005671e4
;   FUN_00568e80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056f1c0
        ;   Label: FUN_0056f1c0
    PUSH ESI                            ; 0056f1c1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0056f1c2
    XOR ESI,ESI                         ; 0056f1c6
    TEST EBX,EBX                        ; 0056f1c8
    JL 0x0056f1d4                       ; 0056f1ca
        ;   XREF to: 0056f1d4 (CONDITIONAL_JUMP)  ; LAB_0056f1d4
    CMP EBX,dword ptr [0x005c1f90]      ; 0056f1cc | DAT_005c1f90
    JBE 0x0056f1e6                      ; 0056f1d2
        ;   XREF to: 0056f1e6 (CONDITIONAL_JUMP)  ; LAB_0056f1e6
    PUSH 0x4                            ; 0056f1d4
        ;   Label: LAB_0056f1d4
    CALL FUN_00568e80                   ; 0056f1d6
        ;   XREF to: 00568e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00568e80()
    MOV EAX,0xffffffff                  ; 0056f1db
    ADD ESP,0x4                         ; 0056f1e0
    POP ESI                             ; 0056f1e3
    POP EBX                             ; 0056f1e4
    RET                                 ; 0056f1e5
    PUSH EBX                            ; 0056f1e6
        ;   Label: LAB_0056f1e6
    CALL dword ptr [0x005c1ac0]         ; 0056f1e7 | PTR_FUN_005c1ac0
    MOV EAX,[0x005c1f54]                ; 0056f1ed | DAT_005c1f54
    ADD ESP,0x4                         ; 0056f1f2
    MOV EAX,dword ptr [EAX + EBX*0x4]   ; 0056f1f5
    PUSH EAX                            ; 0056f1f8
    CALL dword ptr CS:[0x5754d4]        ; 0056f1f9 | PTR_FlushFileBuffers_005754d4
    TEST EAX,EAX                        ; 0056f200
    JNZ 0x0056f20e                      ; 0056f202
        ;   XREF to: 0056f20e (CONDITIONAL_JUMP)  ; LAB_0056f20e
    CALL crt_errno.c___set_errno_FUN_0056c73c ; 0056f204
        ;   XREF to: 0056c73c (UNCONDITIONAL_CALL)  ; undefined crt_errno.c___set_errno_FUN_0056c73c()
    MOV ESI,0xffffffff                  ; 0056f209
    PUSH EBX                            ; 0056f20e
        ;   Label: LAB_0056f20e
    CALL dword ptr [0x005c1ac4]         ; 0056f20f | PTR_FUN_005c1ac4
    ADD ESP,0x4                         ; 0056f215
    MOV EAX,ESI                         ; 0056f218
    POP ESI                             ; 0056f21a
    POP EBX                             ; 0056f21b
    RET                                 ; 0056f21c

