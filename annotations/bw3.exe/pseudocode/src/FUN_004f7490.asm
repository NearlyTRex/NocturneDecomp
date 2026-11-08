; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f7490(int param_1,undefined4 param_2,char *param_3)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004f7530 at 004f755d
;
; Referenced Globals:
;   undefined4 DAT_005c8c3a
;   undefined4 DAT_005c8c3d
;
; Called Functions:
;   FUN_004f6e90
;   FUN_005a28c0
;   FUN_005a3f90
;   FUN_005a5b9c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f7490
        ;   Label: FUN_004f7490
    PUSH ESI                            ; 004f7491
    PUSH EDI                            ; 004f7492
    PUSH EBP                            ; 004f7493
    SUB ESP,0x4                         ; 004f7494
    MOV EBP,dword ptr [ESP + 0x20]      ; 004f7497
    MOV EBX,dword ptr [ESP + 0x18]      ; 004f749b
    MOV EDI,EBP                         ; 004f749f
    MOV ESI,0xffffffff                  ; 004f74a1
    SUB ECX,ECX                         ; 004f74a6
    DEC ECX                             ; 004f74a8
    XOR EAX,EAX                         ; 004f74a9
    SCASB.REPNE ES:EDI                  ; 004f74ab
    NOT ECX                             ; 004f74ad
    DEC ECX                             ; 004f74af
    MOV EBX,dword ptr [EBX + 0x143c]    ; 004f74b0
    MOV EDI,ECX                         ; 004f74b6
    TEST EBX,EBX                        ; 004f74b8
    JZ 0x004f74d5                       ; 004f74ba
        ;   XREF to: 004f74d5 (CONDITIONAL_JUMP)  ; LAB_004f74d5
    PUSH EDI                            ; 004f74bc
        ;   Label: LAB_004f74bc
    PUSH EBP                            ; 004f74bd
    PUSH EBX                            ; 004f74be
    CALL FUN_005a3f90                   ; 004f74bf
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3f90()
    ADD ESP,0xc                         ; 004f74c4
    TEST EAX,EAX                        ; 004f74c7
    JZ 0x004f7508                       ; 004f74c9
        ;   XREF to: 004f7508 (CONDITIONAL_JUMP)  ; LAB_004f7508
    MOV EBX,dword ptr [EBX + 0x14c]     ; 004f74cb
        ;   Label: LAB_004f74cb
    TEST EBX,EBX                        ; 004f74d1
    JNZ 0x004f74bc                      ; 004f74d3
        ;   XREF to: 004f74bc (CONDITIONAL_JUMP)  ; LAB_004f74bc
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004f74d5
        ;   Label: LAB_004f74d5
    MOV EDI,dword ptr [ESP + 0x18]      ; 004f74d9
    INC ESI                             ; 004f74dd
        ;   Label: LAB_004f74dd
    PUSH ESI                            ; 004f74de
    PUSH EBP                            ; 004f74df
    PUSH 0x5c8c3d                       ; 004f74e0 | DAT_005c8c3d
    MOV ECX,dword ptr [ESP + 0x28]      ; 004f74e5
    PUSH ECX                            ; 004f74e9
    CALL FUN_005a28c0                   ; 004f74ea
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28c0()
    ADD ESP,0x10                        ; 004f74ef
    PUSH EBX                            ; 004f74f2
    PUSH EDI                            ; 004f74f3
    CALL FUN_004f6e90                   ; 004f74f4
        ;   XREF to: 004f6e90 (UNCONDITIONAL_CALL)  ; undefined FUN_004f6e90()
    ADD ESP,0x8                         ; 004f74f9
    TEST EAX,EAX                        ; 004f74fc
    JNZ 0x004f74dd                      ; 004f74fe
        ;   XREF to: 004f74dd (CONDITIONAL_JUMP)  ; LAB_004f74dd
    ADD ESP,0x4                         ; 004f7500
    POP EBP                             ; 004f7503
    POP EDI                             ; 004f7504
    POP ESI                             ; 004f7505
    POP EBX                             ; 004f7506
    RET                                 ; 004f7507
    MOV EAX,ESP                         ; 004f7508
        ;   Label: LAB_004f7508
    PUSH EAX                            ; 004f750a
    PUSH 0x5c8c3a                       ; 004f750b | DAT_005c8c3a
    LEA EAX,[EBX + EDI*0x1]             ; 004f7510
    PUSH EAX                            ; 004f7513
    CALL FUN_005a5b9c                   ; 004f7514
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; undefined FUN_005a5b9c()
    ADD ESP,0xc                         ; 004f7519
    CMP EAX,0x1                         ; 004f751c
    JNZ 0x004f74cb                      ; 004f751f
        ;   XREF to: 004f74cb (CONDITIONAL_JUMP)  ; LAB_004f74cb
    MOV EDX,dword ptr [ESP]             ; 004f7521
    CMP ESI,EDX                         ; 004f7524
    JGE 0x004f74cb                      ; 004f7526
        ;   XREF to: 004f74cb (CONDITIONAL_JUMP)  ; LAB_004f74cb
    MOV ESI,EDX                         ; 004f7528
    JMP 0x004f74cb                      ; 004f752a
        ;   XREF to: 004f74cb (UNCONDITIONAL_JUMP)  ; LAB_004f74cb

