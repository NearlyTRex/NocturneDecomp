; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005c0357(int param_1,uint param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[88]:
;   FUN_00409940 at 0040995d
;   FUN_0040fcf0 at 0040fe9f
;   FUN_00415b20 at 00415b2c
;   FUN_00415d90 at 00415db4
;   FUN_004175f0 at 00417614
;   FUN_00418b40 at 00418b5a
;   FUN_0041b750 at 0041b770
;   FUN_0041da00 at 0041da11
;   FUN_00421c00 at 00421c2f
;   FUN_00424f80 at 00424fa0
;   ... and 78 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c0357
        ;   Label: FUN_005c0357
    PUSH ESI                            ; 005c0358
    PUSH EDI                            ; 005c0359
    PUSH EBP                            ; 005c035a
    SUB ESP,0xc                         ; 005c035b
    MOV EBX,dword ptr [ESP + 0x20]      ; 005c035e
    MOV EBP,dword ptr [ESP + 0x24]      ; 005c0362
    MOV EDI,dword ptr [ESP + 0x28]      ; 005c0366
    MOV dword ptr [ESP + 0x4],EDI       ; 005c036a
    MOV dword ptr [ESP + 0x8],EBX       ; 005c036e
    XOR EDX,EDX                         ; 005c0372
    MOV ESI,dword ptr [EDI + 0x4]       ; 005c0374
    MOV dword ptr [ESP],EDX             ; 005c0377
    MOV EDI,dword ptr [EDI + 0x10]      ; 005c037a
    CMP EBP,dword ptr [ESP]             ; 005c037d
        ;   Label: LAB_005c037d
    JA 0x005c038e                       ; 005c0380
        ;   XREF to: 005c038e (CONDITIONAL_JUMP)  ; LAB_005c038e
    MOV EAX,dword ptr [ESP + 0x8]       ; 005c0382
    ADD ESP,0xc                         ; 005c0386
    POP EBP                             ; 005c0389
    POP EDI                             ; 005c038a
    POP ESI                             ; 005c038b
    POP EBX                             ; 005c038c
    RET                                 ; 005c038d
    PUSH EBX                            ; 005c038e
        ;   Label: LAB_005c038e
    CALL ESI                            ; 005c038f
    ADD ESP,0x4                         ; 005c0391
    MOV EAX,dword ptr [ESP]             ; 005c0394
    INC EAX                             ; 005c0397
    ADD EBX,EDI                         ; 005c0398
    MOV dword ptr [ESP],EAX             ; 005c039a
    JMP 0x005c037d                      ; 005c039d
        ;   XREF to: 005c037d (UNCONDITIONAL_JUMP)  ; LAB_005c037d

