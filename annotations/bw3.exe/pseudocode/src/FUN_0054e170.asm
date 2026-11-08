; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0054e170(int param_1,undefined4 param_2,float param_3,int param_4,code *param_5)
;
; Local Variables:
; undefined4       Stack[-0xf0]:4  local_f0
; undefined        Stack[-0xe4]:1  local_e4
; undefined        Stack[-0xb4]:1  local_b4
; undefined        Stack[-0x74]:1  local_74
; undefined        Stack[-0x54]:1  local_54
; undefined        Stack[-0x34]:1  local_34
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
;
; XREF[5]:
;   FUN_0051c1c0 at 0051c555
;   FUN_0051e280 at 0051e344
;   FUN_0051e6d0 at 0051eb98
;   FUN_0056c140 at 0056c802
;   FUN_0058e8d0 at 0058ebc2
;
; Referenced Globals:
;   undefined4 DAT_005d2034
;
; Called Functions:
;   FUN_005481d0
;   FUN_0054eac0
;   FUN_005832e0
;   FUN_00585740
;   FUN_00585990
;   FUN_00585a80
;   FUN_00585d90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054e170
        ;   Label: FUN_0054e170
    PUSH ESI                            ; 0054e171
    PUSH EDI                            ; 0054e172
    PUSH EBP                            ; 0054e173
    MOV EBP,ESP                         ; 0054e174
    SUB ESP,0xd4                        ; 0054e176
    AND ESP,0xfffffff8                  ; 0054e17c
    MOV EDX,dword ptr [EBP + 0x14]      ; 0054e17f
    PUSH EDX                            ; 0054e182
    CALL FUN_0054eac0                   ; 0054e183
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054eac0()
    ADD ESP,0x4                         ; 0054e188
    MOV ESI,EAX                         ; 0054e18b
    MOV dword ptr [ESP + 0xc4],EAX      ; 0054e18d
    LEA EAX,[ESP + 0xb4]                ; 0054e194
    PUSH EAX                            ; 0054e19b
    LEA EAX,[ESP + 0xc4]                ; 0054e19c
    PUSH EAX                            ; 0054e1a3
    MOV ECX,dword ptr [EBP + 0x18]      ; 0054e1a4
    PUSH ECX                            ; 0054e1a7
    XOR EBX,EBX                         ; 0054e1a8
    CALL FUN_00585a80                   ; 0054e1aa
        ;   XREF to: 00585a80 (UNCONDITIONAL_CALL)  ; undefined FUN_00585a80()
    MOV EDI,dword ptr [ESI + 0x1de78]   ; 0054e1af
    ADD ESP,0xc                         ; 0054e1b5
    TEST EDI,EDI                        ; 0054e1b8
    JLE 0x0054e222                      ; 0054e1ba
        ;   XREF to: 0054e222 (CONDITIONAL_JUMP)  ; LAB_0054e222
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054e1bc
    MOV ESI,dword ptr [EBP + 0x14]      ; 0054e1bf
    ADD EAX,0x6b0                       ; 0054e1c2
    MOV dword ptr [ESP + 0xc8],ESI      ; 0054e1c7
    MOV dword ptr [ESP + 0xcc],EAX      ; 0054e1ce
    MOV ESI,dword ptr [EBP + 0x20]      ; 0054e1d5
        ;   Label: LAB_0054e1d5
    PUSH ESI                            ; 0054e1d8
    PUSH EBX                            ; 0054e1d9
    MOV EDI,dword ptr [ESP + 0xcc]      ; 0054e1da
    PUSH EDI                            ; 0054e1e1
    CALL FUN_005481d0                   ; 0054e1e2
        ;   XREF to: 005481d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005481d0()
    ADD ESP,0xc                         ; 0054e1e7
    TEST EAX,EAX                        ; 0054e1ea
    JGE 0x0054e233                      ; 0054e1ec
        ;   XREF to: 0054e233 (CONDITIONAL_JUMP)  ; LAB_0054e233
    MOV EAX,dword ptr [ESP + 0xc8]      ; 0054e1ee
        ;   Label: LAB_0054e1ee
    ADD EAX,0x10                        ; 0054e1f5
    MOV EDX,dword ptr [ESP + 0xcc]      ; 0054e1f8
    MOV dword ptr [ESP + 0xc8],EAX      ; 0054e1ff
    MOV EAX,dword ptr [ESP + 0xc4]      ; 0054e206
    INC EBX                             ; 0054e20d
    ADD EDX,0x10                        ; 0054e20e
    MOV ECX,dword ptr [EAX + 0x1de78]   ; 0054e211
    MOV dword ptr [ESP + 0xcc],EDX      ; 0054e217
    CMP EBX,ECX                         ; 0054e21e
    JL 0x0054e1d5                       ; 0054e220
        ;   XREF to: 0054e1d5 (CONDITIONAL_JUMP)  ; LAB_0054e1d5
    CMP dword ptr [EBP + 0x20],0x0      ; 0054e222
        ;   Label: LAB_0054e222
    JL 0x0054e2cb                       ; 0054e226
        ;   XREF to: 0054e2cb (CONDITIONAL_JUMP)  ; LAB_0054e2cb
    MOV ESP,EBP                         ; 0054e22c
    POP EBP                             ; 0054e22e
    POP EDI                             ; 0054e22f
    POP ESI                             ; 0054e230
    POP EBX                             ; 0054e231
    RET                                 ; 0054e232
    MOV EDX,dword ptr [EBP + 0x14]      ; 0054e233
        ;   Label: LAB_0054e233
    PUSH EDX                            ; 0054e236
    PUSH EAX                            ; 0054e237
    PUSH dword ptr [EBP + 0x1c]         ; 0054e238
    PUSH ESI                            ; 0054e23b
    PUSH EBX                            ; 0054e23c
    CALL dword ptr [EBP + 0x24]         ; 0054e23d
    MOV dword ptr [ESP + 0xe4],EAX      ; 0054e240
    FLD float ptr [ESP + 0xe4]          ; 0054e247
    ADD ESP,0x14                        ; 0054e24e
    FMUL float ptr [ESP + 0xc0]         ; 0054e251
    FST float ptr [ESP]                 ; 0054e258
    FABS                                ; 0054e25b
    FCOMP double ptr [0x005d2034]       ; 0054e25d | DAT_005d2034
    FNSTSW AX                           ; 0054e263
    SAHF                                ; 0054e265
    JBE 0x0054e1ee                      ; 0054e266
        ;   XREF to: 0054e1ee (CONDITIONAL_JUMP)  ; LAB_0054e1ee
    LEA EAX,[ESP + 0xb4]                ; 0054e268
    PUSH EAX                            ; 0054e26f
    LEA ESI,[ESP + 0xa8]                ; 0054e270
    PUSH dword ptr [ESP + 0x4]          ; 0054e277
    LEA EDI,[ESP + 0x8c]                ; 0054e27b
    CALL FUN_00585d90                   ; 0054e282
        ;   XREF to: 00585d90 (UNCONDITIONAL_CALL)  ; undefined FUN_00585d90()
    LEA ESI,[ESP + 0xac]                ; 0054e287
    ADD ESP,0x8                         ; 0054e28e
    LEA EAX,[ESP + 0x84]                ; 0054e291
    MOVSD ES:EDI,ESI                    ; 0054e298
    MOVSD ES:EDI,ESI                    ; 0054e299
    MOVSD ES:EDI,ESI                    ; 0054e29a
    MOVSD ES:EDI,ESI                    ; 0054e29b
    PUSH EAX                            ; 0054e29c
    MOV ESI,dword ptr [ESP + 0xd0]      ; 0054e29d
    PUSH ESI                            ; 0054e2a4
    LEA ESI,[ESP + 0x6c]                ; 0054e2a5
    CALL FUN_00585990                   ; 0054e2a9
        ;   XREF to: 00585990 (UNCONDITIONAL_CALL)  ; undefined FUN_00585990()
    ADD ESP,0x8                         ; 0054e2ae
    MOV EDI,dword ptr [ESP + 0xc8]      ; 0054e2b1
    LEA ESI,[ESP + 0x64]                ; 0054e2b8
    LEA EDI,[EDI + 0x6b0]               ; 0054e2bc
    MOVSD ES:EDI,ESI                    ; 0054e2c2
    MOVSD ES:EDI,ESI                    ; 0054e2c3
    MOVSD ES:EDI,ESI                    ; 0054e2c4
    MOVSD ES:EDI,ESI                    ; 0054e2c5
    JMP 0x0054e1ee                      ; 0054e2c6
        ;   XREF to: 0054e1ee (UNCONDITIONAL_JUMP)  ; LAB_0054e1ee
    FLD float ptr [ESP + 0xc0]          ; 0054e2cb
        ;   Label: LAB_0054e2cb
    LEA EAX,[ESP + 0xb4]                ; 0054e2d2
    FMUL float ptr [EBP + 0x1c]         ; 0054e2d9
    PUSH EAX                            ; 0054e2dc
    LEA ESI,[ESP + 0x78]                ; 0054e2dd
    SUB ESP,0x4                         ; 0054e2e1
    LEA EDI,[ESP + 0x9c]                ; 0054e2e4
    FSTP float ptr [ESP]                ; 0054e2eb
    CALL FUN_00585d90                   ; 0054e2ee
        ;   XREF to: 00585d90 (UNCONDITIONAL_CALL)  ; undefined FUN_00585d90()
    LEA ESI,[ESP + 0x7c]                ; 0054e2f3
    ADD ESP,0x8                         ; 0054e2f7
    LEA EAX,[ESP + 0x94]                ; 0054e2fa
    MOVSD ES:EDI,ESI                    ; 0054e301
    MOVSD ES:EDI,ESI                    ; 0054e302
    MOVSD ES:EDI,ESI                    ; 0054e303
    MOVSD ES:EDI,ESI                    ; 0054e304
    PUSH EAX                            ; 0054e305
    LEA ESI,[ESP + 0x38]                ; 0054e306
    CALL FUN_00585740                   ; 0054e30a
        ;   XREF to: 00585740 (UNCONDITIONAL_CALL)  ; undefined FUN_00585740()
    ADD ESP,0x4                         ; 0054e30f
    LEA EAX,[ESP + 0x4]                 ; 0054e312
    LEA EDI,[ESP + 0x4]                 ; 0054e316
    PUSH EAX                            ; 0054e31a
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054e31b
    MOV ECX,0xc                         ; 0054e31e
    ADD EAX,0x6a4                       ; 0054e323
    LEA ESI,[ESP + 0x38]                ; 0054e328
    PUSH EAX                            ; 0054e32c
    MOVSD.REP ES:EDI,ESI                ; 0054e32d
    CALL FUN_005832e0                   ; 0054e32f
        ;   XREF to: 005832e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005832e0()
    ADD ESP,0x8                         ; 0054e334
    MOV ESP,EBP                         ; 0054e337
    POP EBP                             ; 0054e339
    POP EDI                             ; 0054e33a
    POP ESI                             ; 0054e33b
    POP EBX                             ; 0054e33c
    RET                                 ; 0054e33d

