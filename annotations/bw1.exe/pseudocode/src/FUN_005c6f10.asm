; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005c6f10(uint param_1)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_005c0e40 at 005c0eae
;   FUN_005cc380 at 005cc3af
;
; Referenced Globals:
;   void* PTR_CloseHandle_005d051c = 001d0c5a
;   undefined4 DAT_00626774
;   undefined4 DAT_00626778
;   undefined4 DAT_00626780
;   undefined4 DAT_006267e0
;   undefined4 DAT_00626838
;
; Called Functions:
;   CloseHandle
;   FUN_005c6450
;   FUN_005c8b38
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c6f10
        ;   Label: FUN_005c6f10
    PUSH ESI                            ; 005c6f11
    PUSH EDI                            ; 005c6f12
    PUSH EBP                            ; 005c6f13
    SUB ESP,0x4                         ; 005c6f14
    MOV EBX,dword ptr [ESP + 0x18]      ; 005c6f17
    TEST EBX,EBX                        ; 005c6f1b
    JL 0x005c6f27                       ; 005c6f1d
        ;   XREF to: 005c6f27 (CONDITIONAL_JUMP)  ; LAB_005c6f27
    CMP EBX,dword ptr [0x006267e0]      ; 005c6f1f | DAT_006267e0
    JBE 0x005c6f3b                      ; 005c6f25
        ;   XREF to: 005c6f3b (CONDITIONAL_JUMP)  ; LAB_005c6f3b
    PUSH 0x4                            ; 005c6f27
        ;   Label: LAB_005c6f27
    CALL FUN_005c6450                   ; 005c6f29
        ;   XREF to: 005c6450 (UNCONDITIONAL_CALL)  ; undefined FUN_005c6450()
    MOV EAX,0xffffffff                  ; 005c6f2e
    ADD ESP,0x4                         ; 005c6f33
    JMP 0x005c6fac                      ; 005c6f36
        ;   XREF to: 005c6fac (UNCONDITIONAL_JUMP)  ; LAB_005c6fac
    MOV ESI,dword ptr [0x00626838]      ; 005c6f3b | DAT_00626838
        ;   Label: LAB_005c6f3b
    MOV ECX,dword ptr [0x00626780]      ; 005c6f41 | DAT_00626780
    XOR EBP,EBP                         ; 005c6f47
    MOV EAX,dword ptr [ESI + EBX*0x4]   ; 005c6f49
    XOR EDI,EDI                         ; 005c6f4c
    MOV dword ptr [ESP],EAX             ; 005c6f4e
    TEST ECX,ECX                        ; 005c6f51
    JZ 0x005c6f7b                       ; 005c6f53
        ;   XREF to: 005c6f7b (CONDITIONAL_JUMP)  ; LAB_005c6f7b
    PUSH EBX                            ; 005c6f55
    CALL dword ptr [0x00626774]         ; 005c6f56 | DAT_00626774
    MOV ESI,EAX                         ; 005c6f5c
    ADD ESP,0x4                         ; 005c6f5e
    TEST EAX,EAX                        ; 005c6f61
    JZ 0x005c6f7b                       ; 005c6f63
        ;   XREF to: 005c6f7b (CONDITIONAL_JUMP)  ; LAB_005c6f7b
    PUSH EBX                            ; 005c6f65
    CALL dword ptr [0x00626778]         ; 005c6f66 | DAT_00626778
    ADD ESP,0x4                         ; 005c6f6c
    PUSH ESI                            ; 005c6f6f
    CALL dword ptr [0x00626780]         ; 005c6f70 | DAT_00626780
    ADD ESP,0x4                         ; 005c6f76
    JMP 0x005c6f9f                      ; 005c6f79
        ;   XREF to: 005c6f9f (UNCONDITIONAL_JUMP)  ; LAB_005c6f9f
    TEST EBP,EBP                        ; 005c6f7b
        ;   Label: LAB_005c6f7b
    JNZ 0x005c6f9f                      ; 005c6f7d
        ;   XREF to: 005c6f9f (CONDITIONAL_JUMP)  ; LAB_005c6f9f
    MOV ESI,dword ptr [ESP]             ; 005c6f7f
    PUSH ESI                            ; 005c6f82
    CALL dword ptr CS:[0x5d051c]        ; 005c6f83 | PTR_CloseHandle_005d051c
    TEST EAX,EAX                        ; 005c6f8a
    JNZ 0x005c6f9f                      ; 005c6f8c
        ;   XREF to: 005c6f9f (CONDITIONAL_JUMP)  ; LAB_005c6f9f
    PUSH 0x4                            ; 005c6f8e
    MOV EDI,0xffffffff                  ; 005c6f90
    CALL FUN_005c6450                   ; 005c6f95
        ;   XREF to: 005c6450 (UNCONDITIONAL_CALL)  ; undefined FUN_005c6450()
    ADD ESP,0x4                         ; 005c6f9a
    JMP 0x005c6faa                      ; 005c6f9d
        ;   XREF to: 005c6faa (UNCONDITIONAL_JUMP)  ; LAB_005c6faa
    PUSH 0x0                            ; 005c6f9f
        ;   Label: LAB_005c6f9f
    PUSH EBX                            ; 005c6fa1
    CALL FUN_005c8b38                   ; 005c6fa2
        ;   XREF to: 005c8b38 (UNCONDITIONAL_CALL)  ; undefined FUN_005c8b38()
    ADD ESP,0x8                         ; 005c6fa7
    MOV EAX,EDI                         ; 005c6faa
        ;   Label: LAB_005c6faa
    ADD ESP,0x4                         ; 005c6fac
        ;   Label: LAB_005c6fac
    POP EBP                             ; 005c6faf
    POP EDI                             ; 005c6fb0
    POP ESI                             ; 005c6fb1
    POP EBX                             ; 005c6fb2
    RET                                 ; 005c6fb3

