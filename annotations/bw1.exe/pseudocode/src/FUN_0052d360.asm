; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0052d360(int param_1)
;
; Local Variables:
; undefined        Stack[-0x10]:1  local_10
;
; XREF[6]:
;   FUN_0052c6b0 at 0052c874
;   FUN_0052cab0 at 0052cd1a
;   FUN_0052cf90 at 0052d122
;   FUN_0052e120 at 0052e5cd
;   FUN_0052fee0 at 0052ffb1
;   FUN_00530340 at 00530392
;
; Referenced Globals:
;   undefined4 DAT_01d51d9c
;   undefined4 DAT_01d51da0
;   undefined4 DAT_01d7edb0
;
; Called Functions:
;   FUN_0052d450
;   FUN_0052ed80
;   FUN_0059c970
;   FUN_0059cb20
;   FUN_005b2420
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052d360
        ;   Label: FUN_0052d360
    PUSH ESI                            ; 0052d361
    SUB ESP,0x8                         ; 0052d362
    MOV ESI,dword ptr [ESP + 0x14]      ; 0052d365
    CALL FUN_005b2420                   ; 0052d369
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; undefined FUN_005b2420()
    MOV EDX,EAX                         ; 0052d36e
    MOV EBX,0x12                        ; 0052d370
    SAR EDX,0x1f                        ; 0052d375
    IDIV EBX                            ; 0052d378
    MOV ECX,dword ptr [0x01d51d9c]      ; 0052d37a | DAT_01d51d9c
    MOV EDX,EAX                         ; 0052d380
    SUB EAX,ECX                         ; 0052d382
    MOV dword ptr [0x01d51d9c],EDX      ; 0052d384 | DAT_01d51d9c
    TEST EAX,EAX                        ; 0052d38a
    JL 0x0052d3b4                       ; 0052d38c
        ;   XREF to: 0052d3b4 (CONDITIONAL_JUMP)  ; LAB_0052d3b4
    CMP EAX,0x20000                     ; 0052d38e
    JG 0x0052d3b8                       ; 0052d393
        ;   XREF to: 0052d3b8 (CONDITIONAL_JUMP)  ; LAB_0052d3b8
    ADD dword ptr [0x01d51da0],EAX      ; 0052d395 | DAT_01d51da0
        ;   Label: LAB_0052d395
    LEA EBX,[ESI + 0x178]               ; 0052d39b
    PUSH EBX                            ; 0052d3a1
        ;   Label: LAB_0052d3a1
    CALL FUN_0059c970                   ; 0052d3a2
        ;   XREF to: 0059c970 (UNCONDITIONAL_CALL)  ; undefined FUN_0059c970()
    ADD ESP,0x4                         ; 0052d3a7
    TEST EAX,EAX                        ; 0052d3aa
    JNZ 0x0052d3bf                      ; 0052d3ac
        ;   XREF to: 0052d3bf (CONDITIONAL_JUMP)  ; LAB_0052d3bf
    ADD ESP,0x8                         ; 0052d3ae
    POP ESI                             ; 0052d3b1
    POP EBX                             ; 0052d3b2
    RET                                 ; 0052d3b3
    XOR EAX,EAX                         ; 0052d3b4
        ;   Label: LAB_0052d3b4
    JMP 0x0052d395                      ; 0052d3b6
        ;   XREF to: 0052d395 (UNCONDITIONAL_JUMP)  ; LAB_0052d395
    MOV EAX,0x20000                     ; 0052d3b8
        ;   Label: LAB_0052d3b8
    JMP 0x0052d395                      ; 0052d3bd
        ;   XREF to: 0052d395 (UNCONDITIONAL_JUMP)  ; LAB_0052d395
    MOV EAX,ESP                         ; 0052d3bf
        ;   Label: LAB_0052d3bf
    PUSH EAX                            ; 0052d3c1
    PUSH 0x404                          ; 0052d3c2
    PUSH 0x1d7edb4                      ; 0052d3c7
    PUSH EBX                            ; 0052d3cc
    CALL FUN_0059cb20                   ; 0052d3cd
        ;   XREF to: 0059cb20 (UNCONDITIONAL_CALL)  ; undefined FUN_0059cb20()
    ADD ESP,0x10                        ; 0052d3d2
    TEST EAX,EAX                        ; 0052d3d5
    JLE 0x0052d3f4                      ; 0052d3d7
        ;   XREF to: 0052d3f4 (CONDITIONAL_JUMP)  ; LAB_0052d3f4
    INC EAX                             ; 0052d3d9
    PUSH 0x1d7edb0                      ; 0052d3da | DAT_01d7edb0
    MOV [0x01d7edb0],EAX                ; 0052d3df | DAT_01d7edb0
    LEA EAX,[ESP + 0x4]                 ; 0052d3e4
    PUSH EAX                            ; 0052d3e8
    PUSH ESI                            ; 0052d3e9
    CALL FUN_0052d450                   ; 0052d3ea
        ;   XREF to: 0052d450 (UNCONDITIONAL_CALL)  ; undefined FUN_0052d450()
    ADD ESP,0xc                         ; 0052d3ef
    JMP 0x0052d3a1                      ; 0052d3f2
        ;   XREF to: 0052d3a1 (UNCONDITIONAL_JUMP)  ; LAB_0052d3a1
    PUSH ESI                            ; 0052d3f4
        ;   Label: LAB_0052d3f4
    CALL FUN_0052ed80                   ; 0052d3f5
        ;   XREF to: 0052ed80 (UNCONDITIONAL_CALL)  ; undefined FUN_0052ed80()
    ADD ESP,0x4                         ; 0052d3fa
    ADD ESP,0x8                         ; 0052d3fd
    POP ESI                             ; 0052d400
    POP EBX                             ; 0052d401
    RET                                 ; 0052d402

