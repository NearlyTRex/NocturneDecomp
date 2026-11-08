; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0047a3e0(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005f5cc0
;
; Called Functions:
;   FUN_00589ae0
;   FUN_005b7fa7
;   FUN_005b7fce
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047a3e0
        ;   Label: FUN_0047a3e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0047a3e1
    TEST byte ptr [ESP + 0xc],0x4       ; 0047a3e5
    JNZ 0x0047a406                      ; 0047a3ea
        ;   XREF to: 0047a406 (CONDITIONAL_JUMP)  ; LAB_0047a406
    PUSH 0x1                            ; 0047a3ec
    PUSH EBX                            ; 0047a3ee
    CALL FUN_00589ae0                   ; 0047a3ef
        ;   XREF to: 00589ae0 (UNCONDITIONAL_CALL)  ; undefined FUN_00589ae0()
    ADD ESP,0x8                         ; 0047a3f4
    MOV DL,byte ptr [ESP + 0xc]         ; 0047a3f7
    MOV EBX,EAX                         ; 0047a3fb
    TEST DL,0x2                         ; 0047a3fd
    JNZ 0x0047a421                      ; 0047a400
        ;   XREF to: 0047a421 (CONDITIONAL_JUMP)  ; LAB_0047a421
    MOV EAX,EBX                         ; 0047a402
    POP EBX                             ; 0047a404
    RET                                 ; 0047a405
    PUSH 0x5f5cc0                       ; 0047a406 | DAT_005f5cc0
        ;   Label: LAB_0047a406
    PUSH EBX                            ; 0047a40b
    CALL FUN_005b7fa7                   ; 0047a40c
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 0047a411
    PUSH EAX                            ; 0047a414
    CALL FUN_005b7fce                   ; 0047a415
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 0047a41a
    MOV EAX,EBX                         ; 0047a41d
    POP EBX                             ; 0047a41f
    RET                                 ; 0047a420
    PUSH EAX                            ; 0047a421
        ;   Label: LAB_0047a421
    CALL FUN_005b7fdc                   ; 0047a422
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 0047a427
    MOV EAX,EBX                         ; 0047a42a
    POP EBX                             ; 0047a42c
    RET                                 ; 0047a42d

