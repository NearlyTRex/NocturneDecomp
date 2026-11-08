; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004466c0(int *param_1)
;
;
; XREF[1]:
;   FUN_004464f0 at 004464f6
;
; Called Functions:
;   FUN_005b7fce
;   FUN_005b86a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004466c0
        ;   Label: FUN_004466c0
    PUSH ESI                            ; 004466c1
    PUSH EBP                            ; 004466c2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004466c3
    MOV EDX,dword ptr [EBX + 0x24]      ; 004466c7
    TEST EDX,EDX                        ; 004466ca
    JNZ 0x0044671c                      ; 004466cc
        ;   XREF to: 0044671c (CONDITIONAL_JUMP)  ; LAB_0044671c
    MOV ESI,dword ptr [EBX + 0x2c]      ; 004466ce
        ;   Label: LAB_004466ce
    TEST ESI,ESI                        ; 004466d1
    JZ 0x004466e5                       ; 004466d3
        ;   XREF to: 004466e5 (CONDITIONAL_JUMP)  ; LAB_004466e5
    PUSH ESI                            ; 004466d5
    CALL FUN_005b7fce                   ; 004466d6
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 004466db
    MOV dword ptr [EBX + 0x2c],0x0      ; 004466de
    MOV EBP,dword ptr [EBX + 0x30]      ; 004466e5
        ;   Label: LAB_004466e5
    TEST EBP,EBP                        ; 004466e8
    JZ 0x004466fc                       ; 004466ea
        ;   XREF to: 004466fc (CONDITIONAL_JUMP)  ; LAB_004466fc
    PUSH EBP                            ; 004466ec
    CALL FUN_005b86a0                   ; 004466ed
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b86a0()
    ADD ESP,0x4                         ; 004466f2
    MOV dword ptr [EBX + 0x30],0x0      ; 004466f5
    MOV EDX,dword ptr [EBX]             ; 004466fc
        ;   Label: LAB_004466fc
    TEST EDX,EDX                        ; 004466fe
    JZ 0x00446711                       ; 00446700
        ;   XREF to: 00446711 (CONDITIONAL_JUMP)  ; LAB_00446711
    PUSH EDX                            ; 00446702
    CALL FUN_005b86a0                   ; 00446703
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b86a0()
    ADD ESP,0x4                         ; 00446708
    MOV dword ptr [EBX],0x0             ; 0044670b
    MOV ESI,dword ptr [EBX + 0x4]       ; 00446711
        ;   Label: LAB_00446711
    TEST ESI,ESI                        ; 00446714
    JNZ 0x0044672e                      ; 00446716
        ;   XREF to: 0044672e (CONDITIONAL_JUMP)  ; LAB_0044672e
    POP EBP                             ; 00446718
    POP ESI                             ; 00446719
    POP EBX                             ; 0044671a
    RET                                 ; 0044671b
    PUSH EDX                            ; 0044671c
        ;   Label: LAB_0044671c
    CALL FUN_005b7fce                   ; 0044671d
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 00446722
    MOV dword ptr [EBX + 0x24],0x0      ; 00446725
    JMP 0x004466ce                      ; 0044672c
        ;   XREF to: 004466ce (UNCONDITIONAL_JUMP)  ; LAB_004466ce
    PUSH ESI                            ; 0044672e
        ;   Label: LAB_0044672e
    CALL FUN_005b86a0                   ; 0044672f
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b86a0()
    ADD ESP,0x4                         ; 00446734
    MOV dword ptr [EBX + 0x4],0x0       ; 00446737
    POP EBP                             ; 0044673e
    POP ESI                             ; 0044673f
    POP EBX                             ; 00446740
    RET                                 ; 00446741

