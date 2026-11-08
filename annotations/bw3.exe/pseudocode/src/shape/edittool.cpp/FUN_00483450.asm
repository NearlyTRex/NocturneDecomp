; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00483450(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[6]:
;   FUN_0047db70 at 0047dc57
;   FUN_004b7f90 at 004b89e7
;   FUN_004e94f0 at 004e9d07
;   FUN_004eae80 at 004ebde0
;   FUN_004f7a20 at 004f7a9f
;   FUN_00560c90 at 00560cdc
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005bcd25
;   TerminatedCString s_gEdFont_must_be_set_by_t_005bcd3b
;   undefined4 DAT_005fb140
;   undefined4 DAT_005fba2c
;   undefined4 DAT_01c5b0e0
;   undefined4 DAT_01c5bae0
;   undefined4 DAT_01c5bae4
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   FUN_004032b0
;   FUN_0047f970
;   FUN_00483520
;   FUN_00483970
;   FUN_004843d0
;   FUN_004b30f0
;   FUN_004e4330
;   FUN_0057a8a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00483450
        ;   Label: FUN_00483450
    PUSH ESI                            ; 00483451
    PUSH EDI                            ; 00483452
    PUSH EBP                            ; 00483453
    MOV ESI,dword ptr [ESP + 0x14]      ; 00483454
    CMP dword ptr [0x01c5b0e0],0x0      ; 00483458 | DAT_01c5b0e0
    JNZ 0x00483484                      ; 0048345f
        ;   XREF to: 00483484 (CONDITIONAL_JUMP)  ; LAB_00483484
    MOV ECX,0x5bcd25                    ; 00483461 | = "..\\shape\\edittool.cpp"
    MOV EBX,0xa7                        ; 00483466
    PUSH 0x5bcd3b                       ; 0048346b | = "gEdFont must be set by the application."
    MOV dword ptr [0x01d71de0],ECX      ; 00483470 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 00483476 | DAT_01d71de4
    CALL FUN_004e4330                   ; 0048347c
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 00483481
    MOV EAX,[0x01c5b0e0]                ; 00483484 | DAT_01c5b0e0
        ;   Label: LAB_00483484
    PUSH 0x6a                           ; 00483489
    MOV EBX,dword ptr [EAX + 0x41e8]    ; 0048348b
    PUSH EAX                            ; 00483491
    MOV dword ptr [0x01c5bae0],EBX      ; 00483492 | DAT_01c5bae0
    CALL FUN_004b30f0                   ; 00483498
        ;   XREF to: 004b30f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b30f0()
    ADD ESP,0x8                         ; 0048349d
    MOV EDI,dword ptr [ESI]             ; 004834a0
    MOV [0x01c5bae4],EAX                ; 004834a2 | DAT_01c5bae4
    CMP EDI,0x1                         ; 004834a7
    JL 0x00483514                       ; 004834aa
        ;   XREF to: 00483514 (CONDITIONAL_JUMP)  ; LAB_00483514
    MOV EAX,dword ptr [ESP + 0x20]      ; 004834ac
    PUSH EAX                            ; 004834b0
    MOV EDX,dword ptr [ESP + 0x20]      ; 004834b1
    PUSH EDX                            ; 004834b5
    MOV ECX,dword ptr [ESP + 0x20]      ; 004834b6
    PUSH ECX                            ; 004834ba
    MOV EBP,0x7f                        ; 004834bb
    PUSH ESI                            ; 004834c0
    MOV EDI,dword ptr [0x005fba2c]      ; 004834c1 | DAT_005fba2c
    MOV dword ptr [0x005fba2c],EBP      ; 004834c7 | DAT_005fba2c
    CALL FUN_00483520                   ; 004834cd
        ;   XREF to: 00483520 (UNCONDITIONAL_CALL)  ; undefined FUN_00483520()
    ADD ESP,0x10                        ; 004834d2
    PUSH ESI                            ; 004834d5
        ;   Label: LAB_004834d5
    CALL FUN_00483970                   ; 004834d6
        ;   XREF to: 00483970 (UNCONDITIONAL_CALL)  ; undefined FUN_00483970()
    ADD ESP,0x4                         ; 004834db
    PUSH ESI                            ; 004834de
    MOV EBX,EAX                         ; 004834df
    CALL FUN_004843d0                   ; 004834e1
        ;   XREF to: 004843d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004843d0()
    ADD ESP,0x4                         ; 004834e6
    CALL FUN_0057a8a0                   ; 004834e9
        ;   XREF to: 0057a8a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0057a8a0()
    CMP EBX,-0x2                        ; 004834ee
    JZ 0x004834d5                       ; 004834f1
        ;   XREF to: 004834d5 (CONDITIONAL_JUMP)  ; LAB_004834d5
    CALL FUN_004032b0                   ; 004834f3
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004032b0()
    MOV ESI,dword ptr [0x005fb140]      ; 004834f8 | DAT_005fb140
    PUSH ESI                            ; 004834fe
    CALL FUN_0047f970                   ; 004834ff
        ;   XREF to: 0047f970 (UNCONDITIONAL_CALL)  ; undefined FUN_0047f970()
    ADD ESP,0x4                         ; 00483504
    MOV dword ptr [0x005fba2c],EDI      ; 00483507 | DAT_005fba2c
    MOV EAX,EBX                         ; 0048350d
    POP EBP                             ; 0048350f
    POP EDI                             ; 00483510
    POP ESI                             ; 00483511
    POP EBX                             ; 00483512
    RET                                 ; 00483513
    MOV EAX,0xffffffff                  ; 00483514
        ;   Label: LAB_00483514
    POP EBP                             ; 00483519
    POP EDI                             ; 0048351a
    POP ESI                             ; 0048351b
    POP EBX                             ; 0048351c
    RET                                 ; 0048351d

