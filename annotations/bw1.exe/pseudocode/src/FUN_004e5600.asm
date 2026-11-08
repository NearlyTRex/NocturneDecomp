; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e5600(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_004e6680 at 004e66cb
;
; Referenced Globals:
;   TerminatedCString s_f_f_f_005e40d1
;   TerminatedCString s_d_d_005e40db
;   TerminatedCString s_d_f_d_d_d_005e40e2
;
; Called Functions:
;   FUN_005c04b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e5600
        ;   Label: FUN_004e5600
    PUSH ESI                            ; 004e5601
    MOV EBX,dword ptr [ESP + 0xc]       ; 004e5602
    MOV ESI,dword ptr [ESP + 0x10]      ; 004e5606
    LEA EAX,[EBX + 0xc]                 ; 004e560a
    PUSH EAX                            ; 004e560d
    LEA EAX,[EBX + 0x8]                 ; 004e560e
    PUSH EAX                            ; 004e5611
    LEA EAX,[EBX + 0x4]                 ; 004e5612
    PUSH EAX                            ; 004e5615
    PUSH 0x5e40d1                       ; 004e5616 | = "%f,%f,%f\n"
    PUSH ESI                            ; 004e561b
    CALL FUN_005c04b0                   ; 004e561c
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04b0()
    ADD ESP,0x14                        ; 004e5621
    LEA EAX,[EBX + 0x10]                ; 004e5624
    PUSH EAX                            ; 004e5627
    PUSH EBX                            ; 004e5628
    PUSH 0x5e40db                       ; 004e5629 | = "%d,%d\n"
    PUSH ESI                            ; 004e562e
    CALL FUN_005c04b0                   ; 004e562f
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04b0()
    ADD ESP,0x10                        ; 004e5634
    LEA EAX,[EBX + 0x24]                ; 004e5637
    PUSH EAX                            ; 004e563a
    LEA EAX,[EBX + 0x20]                ; 004e563b
    PUSH EAX                            ; 004e563e
    LEA EAX,[EBX + 0x1c]                ; 004e563f
    PUSH EAX                            ; 004e5642
    LEA EAX,[EBX + 0x18]                ; 004e5643
    PUSH EAX                            ; 004e5646
    ADD EBX,0x14                        ; 004e5647
    PUSH EBX                            ; 004e564a
    PUSH 0x5e40e2                       ; 004e564b | = "%d,%f,%d,%d,%d\n"
    PUSH ESI                            ; 004e5650
    CALL FUN_005c04b0                   ; 004e5651
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04b0()
    ADD ESP,0x1c                        ; 004e5656
    POP ESI                             ; 004e5659
    POP EBX                             ; 004e565a
    RET                                 ; 004e565b

