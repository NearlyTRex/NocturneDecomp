; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_pushMatrixRelativeOffset_FUN_004f3270(CVector3f *offset)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   offset
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_01d09918
;   undefined4 DAT_01d0991c
;   undefined4 DAT_01d0c398
;
; Called Functions:
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f3270
        ;   Label: engine_mini3d.cpp_pushMatrixRelativeOffset_FUN_004f3270
    PUSH ESI                            ; 004f3271
    PUSH EDI                            ; 004f3272
    PUSH EBP                            ; 004f3273
    MOV EBX,dword ptr [ESP + 0x14]      ; 004f3274
    MOV EDX,dword ptr [0x01d0991c]      ; 004f3278 | DAT_01d0991c
    INC EDX                             ; 004f327e
    MOV dword ptr [0x01d0991c],EDX      ; 004f327f | DAT_01d0991c
    CMP EDX,0x9                         ; 004f3285
    JG 0x004f32de                       ; 004f3288
        ;   XREF to: 004f32de (CONDITIONAL_JUMP)  ; LAB_004f32de
    MOV EAX,[0x01d0991c]                ; 004f328a | DAT_01d0991c
        ;   Label: LAB_004f328a
    SHL EAX,0x2                         ; 004f328f
    MOV EDX,EAX                         ; 004f3292
    SHL EAX,0x4                         ; 004f3294
    SUB EAX,EDX                         ; 004f3297
    MOV ECX,0xf                         ; 004f3299
    ADD EAX,0x1d09920                   ; 004f329e
    MOV EDX,dword ptr [0x01d09918]      ; 004f32a3 | DAT_01d09918
    MOV EDI,EAX                         ; 004f32a9
    MOV ESI,EDX                         ; 004f32ab
    MOVSD.REP ES:EDI,ESI                ; 004f32ad
    FLD float ptr [EDX + 0x24]          ; 004f32af
    FSUB float ptr [EBX]                ; 004f32b2
    MOV EBP,0x1                         ; 004f32b4
    FSTP float ptr [EAX + 0x24]         ; 004f32b9
    FLD float ptr [EDX + 0x28]          ; 004f32bc
    FSUB float ptr [EBX + 0x4]          ; 004f32bf
    MOV dword ptr [0x01d0c398],EBP      ; 004f32c2 | DAT_01d0c398
    FSTP float ptr [EAX + 0x28]         ; 004f32c8
    FLD float ptr [EDX + 0x2c]          ; 004f32cb
    FSUB float ptr [EBX + 0x8]          ; 004f32ce
    MOV [0x01d09918],EAX                ; 004f32d1 | DAT_01d09918
    FSTP float ptr [EAX + 0x2c]         ; 004f32d6
    POP EBP                             ; 004f32d9
    POP EDI                             ; 004f32da
    POP ESI                             ; 004f32db
    POP EBX                             ; 004f32dc
    RET                                 ; 004f32dd
    MOV ESI,0x5ddbaf                    ; 004f32de
        ;   Label: LAB_004f32de
    MOV EDI,0x4d3                       ; 004f32e3
    PUSH 0x5ddbc4                       ; 004f32e8
    MOV dword ptr [0x01d046a0],ESI      ; 004f32ed | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 004f32f3 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004f32f9
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004f32fe
    JMP 0x004f328a                      ; 004f3301
        ;   XREF to: 004f328a (UNCONDITIONAL_JUMP)  ; LAB_004f328a

