; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00562f30(int param_1,float param_2)
;
;
; Referenced Globals:
;   undefined1* switchdataD_00562edc = 00562f4e
;   undefined4 DAT_005eb49d
;   undefined4 DAT_00616494
;   undefined4 DAT_01cb6900
;   undefined4 DAT_01cb6b84
;
; Called Functions:
;   FUN_004244b0
;   FUN_004bd460
;   FUN_005035c0
;   FUN_00563060
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00562f30
        ;   Label: FUN_00562f30
    SUB ESP,0x8                         ; 00562f31
    MOV EBX,dword ptr [ESP + 0x10]      ; 00562f34
    PUSH dword ptr [ESP + 0x14]         ; 00562f38
    PUSH EBX                            ; 00562f3c
    CALL FUN_004244b0                   ; 00562f3d
        ;   XREF to: 004244b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004244b0()
    ADD ESP,0x8                         ; 00562f42
    TEST EAX,EAX                        ; 00562f45
    JNZ 0x00562fbb                      ; 00562f47
        ;   XREF to: 00562fbb (CONDITIONAL_JUMP)  ; LAB_00562fbb
    ADD ESP,0x8                         ; 00562f49
    POP EBX                             ; 00562f4c
    RET                                 ; 00562f4d
    MOV ESI,0x1                         ; 00562f4e
        ;   Label: caseD_7
    CMP dword ptr [EBX + 0x256a4],0x7   ; 00562f53
        ;   Label: caseD_18
    JNZ 0x00562ff2                      ; 00562f5a
        ;   XREF to: 00562ff2 (CONDITIONAL_JUMP)  ; LAB_00562ff2
    FLD float ptr [ESP + 0x18]          ; 00562f60
        ;   Label: LAB_00562f60
    FMUL double ptr [0x005eb49d]        ; 00562f64 | DAT_005eb49d
    FSTP float ptr [ESP + 0x4]          ; 00562f6a
    PUSH dword ptr [ESP + 0x4]          ; 00562f6e
    PUSH EBX                            ; 00562f72
    CALL FUN_00563060                   ; 00562f73
        ;   XREF to: 00563060 (UNCONDITIONAL_CALL)  ; undefined FUN_00563060()
    ADD ESP,0x8                         ; 00562f78
    PUSH dword ptr [ESP + 0x4]          ; 00562f7b
    PUSH EBX                            ; 00562f7f
    CALL FUN_00563060                   ; 00562f80
        ;   XREF to: 00563060 (UNCONDITIONAL_CALL)  ; undefined FUN_00563060()
    ADD ESP,0x8                         ; 00562f85
    PUSH dword ptr [ESP + 0x4]          ; 00562f88
    PUSH EBX                            ; 00562f8c
    CALL FUN_00563060                   ; 00562f8d
        ;   XREF to: 00563060 (UNCONDITIONAL_CALL)  ; undefined FUN_00563060()
    ADD ESP,0x8                         ; 00562f92
    PUSH dword ptr [ESP + 0x4]          ; 00562f95
    PUSH EBX                            ; 00562f99
        ;   Label: LAB_00562f99
    CALL FUN_00563060                   ; 00562f9a
        ;   XREF to: 00563060 (UNCONDITIONAL_CALL)  ; undefined FUN_00563060()
    ADD ESP,0x8                         ; 00562f9f
    MOV ECX,dword ptr [0x00616494]      ; 00562fa2 | DAT_00616494
    PUSH dword ptr [ESP + 0x8]          ; 00562fa8
    PUSH ECX                            ; 00562fac | DAT_01cb6900
    CALL FUN_004bd460                   ; 00562fad
        ;   XREF to: 004bd460 (UNCONDITIONAL_CALL)  ; undefined FUN_004bd460()
    ADD ESP,0x8                         ; 00562fb2
    POP ESI                             ; 00562fb5
    ADD ESP,0x8                         ; 00562fb6
    POP EBX                             ; 00562fb9
    RET                                 ; 00562fba
    PUSH ESI                            ; 00562fbb
        ;   Label: LAB_00562fbb
    MOV EAX,[0x00616494]                ; 00562fbc | DAT_00616494
    FLD float ptr [EAX + 0x284]         ; 00562fc1 | DAT_01cb6b84
    LEA EAX,[EBX + 0x2b4]               ; 00562fc7
    PUSH EAX                            ; 00562fcd
    FSTP float ptr [ESP + 0xc]          ; 00562fce
    CALL FUN_005035c0                   ; 00562fd2
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 00562fd7
    XOR ESI,ESI                         ; 00562fda
    SUB EAX,0x7                         ; 00562fdc
    ADD ESP,0x4                         ; 00562fdf
    CMP EAX,0x14                        ; 00562fe2
    JA 0x00562f53                       ; 00562fe5
        ;   XREF to: 00562f53 (CONDITIONAL_JUMP)  ; caseD_1a
    JMP dword ptr [EAX*0x4 + 0x562edc]  ; 00562feb | caseD_1b | caseD_1a | switchdataD_00562edc
        ;   Label: switchD
    TEST ESI,ESI                        ; 00562ff2
        ;   Label: LAB_00562ff2
    JNZ 0x00562f60                      ; 00562ff4
        ;   XREF to: 00562f60 (CONDITIONAL_JUMP)  ; LAB_00562f60
    PUSH dword ptr [ESP + 0x18]         ; 00562ffa
    JMP 0x00562f99                      ; 00562ffe
        ;   XREF to: 00562f99 (UNCONDITIONAL_JUMP)  ; LAB_00562f99

