; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004cf2b0(int param_1,int param_2,int param_3)
;
; Local Variables:
; undefined        Stack[-0x2c]:1  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   FUN_004d12e0 at 004d1ad6
;
; Referenced Globals:
;   undefined4 DAT_005ae704
;   undefined4 DAT_005bae58
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01cc5b64
;
; Called Functions:
;   FUN_0045f3c0
;   FUN_00461000
;   FUN_00461010
;   FUN_00461eb0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004cf2b0
        ;   Label: FUN_004cf2b0
    SUB ESP,0x28                        ; 004cf2b1
    MOV EBP,dword ptr [ESP + 0x30]      ; 004cf2b4
    MOV EDX,dword ptr [ESP + 0x38]      ; 004cf2b8
    ADD EDX,EDX                         ; 004cf2bc
    TEST EDX,EDX                        ; 004cf2be
    JLE 0x004cf437                      ; 004cf2c0
        ;   XREF to: 004cf437 (CONDITIONAL_JUMP)  ; LAB_004cf437
    PUSH EDI                            ; 004cf2c6
    PUSH ESI                            ; 004cf2c7
    PUSH EBX                            ; 004cf2c8
    MOV EAX,[0x005ae704]                ; 004cf2c9 | DAT_005ae704
    LEA ECX,[EBP + -0x10]               ; 004cf2ce
    MOV EBX,dword ptr [EAX]             ; 004cf2d1 | DAT_01b4d738
    SHL ECX,0x10                        ; 004cf2d3
    MOV dword ptr [EBX + 0x10],ECX      ; 004cf2d6
    MOV ESI,dword ptr [ESP + 0x40]      ; 004cf2d9
    MOV EBX,dword ptr [EAX]             ; 004cf2dd | DAT_01b4d738
    SHL ESI,0x10                        ; 004cf2df
    MOV dword ptr [EBX + 0x14],ESI      ; 004cf2e2
    LEA EBX,[EBP + 0x10]                ; 004cf2e5
    MOV EDI,dword ptr [EAX]             ; 004cf2e8 | DAT_01b4d738
    SHL EBX,0x10                        ; 004cf2ea
    MOV dword ptr [EDI + 0x40],EBX      ; 004cf2ed
    MOV EDI,dword ptr [EAX]             ; 004cf2f0 | DAT_01b4d738
    MOV dword ptr [EDI + 0x44],ESI      ; 004cf2f2
    MOV ESI,dword ptr [EAX]             ; 004cf2f5 | DAT_01b4d738
    MOV dword ptr [ESI + 0x70],EBX      ; 004cf2f7
    MOV EBX,dword ptr [ESP + 0x40]      ; 004cf2fa
    SUB EBX,EDX                         ; 004cf2fe
    MOV EDX,EBX                         ; 004cf300
    MOV EBX,dword ptr [EAX]             ; 004cf302 | DAT_01b4d738
    SHL EDX,0x10                        ; 004cf304
    MOV dword ptr [EBX + 0x74],EDX      ; 004cf307
    MOV EBX,dword ptr [EAX]             ; 004cf30a | DAT_01b4d738
    MOV dword ptr [EBX + 0xa0],ECX      ; 004cf30c
    MOV ECX,dword ptr [EAX]             ; 004cf312 | DAT_01b4d738
    MOV dword ptr [ECX + 0xa4],EDX      ; 004cf314
    MOV EDX,dword ptr [EAX]             ; 004cf31a | DAT_01b4d738
    MOV dword ptr [EDX + 0x18],0x80000  ; 004cf31c
    MOV EDX,dword ptr [EAX]             ; 004cf323 | DAT_01b4d738
    MOV dword ptr [EDX + 0x1c],0xf80000 ; 004cf325
    MOV EDX,dword ptr [EAX]             ; 004cf32c | DAT_01b4d738
    MOV dword ptr [EDX + 0x48],0xf80000 ; 004cf32e
    MOV EDX,dword ptr [EAX]             ; 004cf335 | DAT_01b4d738
    MOV dword ptr [EDX + 0x4c],0xf80000 ; 004cf337
    MOV EDX,dword ptr [EAX]             ; 004cf33e | DAT_01b4d738
    MOV dword ptr [EDX + 0x78],0xf80000 ; 004cf340
    MOV EDX,dword ptr [EAX]             ; 004cf347 | DAT_01b4d738
    MOV dword ptr [EDX + 0x7c],0x80000  ; 004cf349
    MOV EDX,dword ptr [EAX]             ; 004cf350 | DAT_01b4d738
    MOV dword ptr [EDX + 0xa8],0x80000  ; 004cf352
    MOV EDX,dword ptr [EAX]             ; 004cf35c | DAT_01b4d738
    MOV dword ptr [EDX + 0xac],0x80000  ; 004cf35e
    MOV EDX,0x4                         ; 004cf368
    MOV EBX,0x2                         ; 004cf36d
    MOV ESI,0x3                         ; 004cf372
    PUSH 0x8000                         ; 004cf377
    XOR ECX,ECX                         ; 004cf37c
    MOV dword ptr [ESP + 0x14],EDX      ; 004cf37e
    MOV dword ptr [ESP + 0x24],ECX      ; 004cf382
    MOV dword ptr [ESP + 0x20],ECX      ; 004cf386
    MOV dword ptr [ESP + 0x1c],ECX      ; 004cf38a
    MOV dword ptr [ESP + 0x18],ECX      ; 004cf38e
    MOV dword ptr [ESP + 0x28],ECX      ; 004cf392
    MOV dword ptr [ESP + 0x30],EBX      ; 004cf396
    PUSH EAX                            ; 004cf39a | DAT_01b4d738
    MOV ECX,0x1                         ; 004cf39b
    MOV dword ptr [ESP + 0x38],ESI      ; 004cf3a0
    MOV dword ptr [ESP + 0x30],ECX      ; 004cf3a4
    CALL FUN_00461010                   ; 004cf3a8
        ;   XREF to: 00461010 (UNCONDITIONAL_CALL)  ; undefined FUN_00461010()
    ADD ESP,0x8                         ; 004cf3ad
    PUSH 0x1                            ; 004cf3b0
    MOV EDI,dword ptr [0x005ae704]      ; 004cf3b2 | DAT_005ae704
    PUSH EDI                            ; 004cf3b8 | DAT_01b4d738
    CALL FUN_00461000                   ; 004cf3b9
        ;   XREF to: 00461000 (UNCONDITIONAL_CALL)  ; undefined FUN_00461000()
    MOV EAX,[0x01cc5b64]                ; 004cf3be | DAT_01cc5b64
    MOV EDX,EAX                         ; 004cf3c3
    SAR EDX,0x1f                        ; 004cf3c5
    SHL EDX,0x10                        ; 004cf3c8
    SBB EAX,EDX                         ; 004cf3cb
    SAR EAX,0x10                        ; 004cf3cd
    LEA EDX,[EAX + EBP*0x1]             ; 004cf3d0
    AND EDX,0x7                         ; 004cf3d3
    LEA EAX,[EDX*0x4 + 0x0]             ; 004cf3d6
    SUB EAX,EDX                         ; 004cf3dd
    SHL EAX,0x3                         ; 004cf3df
    ADD ESP,0x8                         ; 004cf3e2
    ADD EAX,0x5bae58                    ; 004cf3e5 | DAT_005bae58
    PUSH EAX                            ; 004cf3ea
    MOV EBP,dword ptr [0x005ae704]      ; 004cf3eb | DAT_005ae704
    PUSH EBP                            ; 004cf3f1 | DAT_01b4d738
    CALL FUN_00461eb0                   ; 004cf3f2
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00461eb0()
    ADD ESP,0x8                         ; 004cf3f7
    PUSH 0x23                           ; 004cf3fa
    LEA EAX,[ESP + 0x10]                ; 004cf3fc
    PUSH EAX                            ; 004cf400
    MOV EAX,[0x005ae704]                ; 004cf401 | DAT_005ae704
    PUSH EAX                            ; 004cf406 | DAT_01b4d738
    CALL FUN_0045f3c0                   ; 004cf407
        ;   XREF to: 0045f3c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0045f3c0()
    ADD ESP,0xc                         ; 004cf40c
    PUSH 0x0                            ; 004cf40f
    MOV EDX,dword ptr [0x005ae704]      ; 004cf411 | DAT_005ae704
    PUSH EDX                            ; 004cf417 | DAT_01b4d738
    CALL FUN_00461000                   ; 004cf418
        ;   XREF to: 00461000 (UNCONDITIONAL_CALL)  ; undefined FUN_00461000()
    ADD ESP,0x8                         ; 004cf41d
    PUSH 0xffff                         ; 004cf420
    MOV ECX,dword ptr [0x005ae704]      ; 004cf425 | DAT_005ae704
    PUSH ECX                            ; 004cf42b | DAT_01b4d738
    CALL FUN_00461010                   ; 004cf42c
        ;   XREF to: 00461010 (UNCONDITIONAL_CALL)  ; undefined FUN_00461010()
    ADD ESP,0x8                         ; 004cf431
    POP EBX                             ; 004cf434
    POP ESI                             ; 004cf435
    POP EDI                             ; 004cf436
    ADD ESP,0x28                        ; 004cf437
        ;   Label: LAB_004cf437
    POP EBP                             ; 004cf43a
    RET                                 ; 004cf43b

