; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_inv_cpp_FUN_004f63c0(float param_1,float param_2)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[2]:
;   core_inv.cpp_FUN_004f6560 at 004f6759
;   core_inv.cpp_FUN_004fae10 at 004fb9d6
;
; Referenced Globals:
;   undefined4 DAT_005e5fb8
;   undefined4 DAT_01c4eff8
;   undefined4 DAT_01c4effc
;   undefined4 DAT_01c4f000
;   undefined4 DAT_01c4f004
;   undefined4 DAT_01c51d2c
;   undefined4 DAT_01c51d30
;   undefined4 DAT_01c51d34
;   undefined4 DAT_01d1dd18
;   undefined4 DAT_01d1dd1c
;   undefined4 DAT_01d1dd20
;   undefined4 DAT_01d1dd24
;   undefined4 DAT_01d1dd28
;   undefined4 DAT_01d1dd2c
;   undefined4 DAT_01d1dd30
;   ... and 2 more
;
; Called Functions:
;   crt_math.c_round_FUN_005c03a0
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 004f63c0
        ;   Label: core_inv.cpp_FUN_004f63c0
    PUSH EBP                            ; 004f63c1
    SUB ESP,0x14                        ; 004f63c2
    MOV EBP,ESI                         ; 004f63c5
    PUSH EBX                            ; 004f63c7
    FLD double ptr [0x005e5fb8]         ; 004f63c8 | DAT_005e5fb8
    FLD float ptr [ESP + 0x24]          ; 004f63ce
    FMUL ST1                            ; 004f63d2
    FLD float ptr [ESP + 0x28]          ; 004f63d4
    FMULP ST2                           ; 004f63d8
    MOV EBX,dword ptr [0x01c4eff8]      ; 004f63da | DAT_01c4eff8
    MOV EDX,dword ptr [0x01c4f000]      ; 004f63e0 | DAT_01c4f000
    CALL crt_math.c_round_FUN_005c03a0  ; 004f63e6
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x10]        ; 004f63eb
    MOV EAX,dword ptr [ESP + 0x10]      ; 004f63ef
    CALL crt_math.c_round_FUN_005c03a0  ; 004f63f3
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    SUB EAX,EDX                         ; 004f63f8
    MOV EDX,0x10000                     ; 004f63fa
    FISTP dword ptr [ESP + 0x14]        ; 004f63ff
    IMUL EDX                            ; 004f6403
    IDIV EBX                            ; 004f6405
    MOV EDX,0x10000                     ; 004f6407
    MOV ECX,dword ptr [0x01c4f004]      ; 004f640c | DAT_01c4f004
    MOV ESI,EAX                         ; 004f6412
    MOV EAX,dword ptr [ESP + 0x14]      ; 004f6414
    MOV EBX,dword ptr [0x01c4effc]      ; 004f6418 | DAT_01c4effc
    SUB EAX,ECX                         ; 004f641e
    IMUL EDX                            ; 004f6420
    IDIV EBX                            ; 004f6422
    MOV ECX,EAX                         ; 004f6424
    MOV EDX,ESI                         ; 004f6426
    MOV EAX,[0x01d1dd18]                ; 004f6428 | DAT_01d1dd18
    IMUL EDX                            ; 004f642d
    SHRD EAX,EDX,0x10                   ; 004f642f
    MOV EBX,EAX                         ; 004f6433
    MOV EDX,ECX                         ; 004f6435
    MOV EAX,[0x01d1dd24]                ; 004f6437 | DAT_01d1dd24
    IMUL EDX                            ; 004f643c
    SHRD EAX,EDX,0x10                   ; 004f643e
    MOV EDX,0x10000                     ; 004f6442
    ADD EBX,EAX                         ; 004f6447
    MOV EAX,[0x01d1dd30]                ; 004f6449 | DAT_01d1dd30
    IMUL EDX                            ; 004f644e
    SHRD EAX,EDX,0x10                   ; 004f6450
    ADD EAX,EBX                         ; 004f6454
    MOV EBX,dword ptr [0x01c51d2c]      ; 004f6456 | DAT_01c51d2c
    MOV EDX,ESI                         ; 004f645c
    ADD EBX,EAX                         ; 004f645e
    MOV EAX,[0x01d1dd1c]                ; 004f6460 | DAT_01d1dd1c
    MOV dword ptr [ESP + 0x4],EBX       ; 004f6465
    IMUL EDX                            ; 004f6469
    SHRD EAX,EDX,0x10                   ; 004f646b
    MOV EBX,EAX                         ; 004f646f
    MOV EDX,ECX                         ; 004f6471
    MOV EAX,[0x01d1dd28]                ; 004f6473 | DAT_01d1dd28
    IMUL EDX                            ; 004f6478
    SHRD EAX,EDX,0x10                   ; 004f647a
    MOV EDX,0x10000                     ; 004f647e
    ADD EBX,EAX                         ; 004f6483
    MOV EAX,[0x01d1dd34]                ; 004f6485 | DAT_01d1dd34
    IMUL EDX                            ; 004f648a
    SHRD EAX,EDX,0x10                   ; 004f648c
    ADD EAX,EBX                         ; 004f6490
    MOV EBX,dword ptr [0x01c51d30]      ; 004f6492 | DAT_01c51d30
    MOV EDX,ESI                         ; 004f6498
    ADD EBX,EAX                         ; 004f649a
    MOV EAX,[0x01d1dd20]                ; 004f649c | DAT_01d1dd20
    MOV dword ptr [ESP + 0x8],EBX       ; 004f64a1
    IMUL EDX                            ; 004f64a5
    SHRD EAX,EDX,0x10                   ; 004f64a7
    MOV EBX,EAX                         ; 004f64ab
    MOV EDX,ECX                         ; 004f64ad
    MOV EAX,[0x01d1dd2c]                ; 004f64af | DAT_01d1dd2c
    IMUL EDX                            ; 004f64b4
    SHRD EAX,EDX,0x10                   ; 004f64b6
    MOV EDX,0x10000                     ; 004f64ba
    ADD EBX,EAX                         ; 004f64bf
    MOV EAX,[0x01d1dd38]                ; 004f64c1 | DAT_01d1dd38
    IMUL EDX                            ; 004f64c6
    SHRD EAX,EDX,0x10                   ; 004f64c8
    MOV ECX,dword ptr [0x01c51d34]      ; 004f64cc | DAT_01c51d34
    ADD EAX,EBX                         ; 004f64d2
    ADD ECX,EAX                         ; 004f64d4
    MOV dword ptr [ESP + 0xc],ECX       ; 004f64d6
    POP EBX                             ; 004f64da
    MOV ESI,ESP                         ; 004f64db
    MOV EDI,EBP                         ; 004f64dd
    MOVSD ES:EDI,ESI                    ; 004f64df
    MOVSD ES:EDI,ESI                    ; 004f64e0
    MOVSD ES:EDI,ESI                    ; 004f64e1
    MOV EAX,EBP                         ; 004f64e2
    ADD ESP,0x14                        ; 004f64e4
    POP EBP                             ; 004f64e7
    POP EDI                             ; 004f64e8
    RET                                 ; 004f64e9

