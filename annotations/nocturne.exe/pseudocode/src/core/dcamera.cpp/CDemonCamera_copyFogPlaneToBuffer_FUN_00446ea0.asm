; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_copyFogPlaneToBuffer_FUN_00446ea0(int param_1,int param_2)
;
;
; XREF[1]:
;   FUN_00446810 at 00446b5f
;
; Referenced Globals:
;   undefined4 DAT_012ceb79
;   undefined4 DAT_012ceb7a
;   undefined4 DAT_012cecb8
;   undefined4 DAT_012cecb9
;   undefined4 DAT_012cecba
;   undefined4 DAT_012cedf9
;   undefined4 DAT_012e18b8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00446ea0
        ;   Label: core_dcamera.cpp_CDemonCamera_copyFogPlaneToBuffer_FUN_00446ea0
    PUSH ESI                            ; 00446ea1
    PUSH EDI                            ; 00446ea2
    PUSH EBP                            ; 00446ea3
    MOV ESI,dword ptr [ESP + 0x14]      ; 00446ea4
    MOV EDX,dword ptr [ESP + 0x18]      ; 00446ea8
    LEA EAX,[EDX*0x4 + 0x0]             ; 00446eac
    ADD EAX,EDX                         ; 00446eb3
    SHL EAX,0xa                         ; 00446eb5
    MOV EDX,EAX                         ; 00446eb8
    SHL EAX,0x4                         ; 00446eba
    SUB EAX,EDX                         ; 00446ebd
    MOV EDI,0x1                         ; 00446ebf
    LEA EBP,[EAX + 0x140]               ; 00446ec4
    MOV EAX,dword ptr [ESI + 0x154]     ; 00446eca
        ;   Label: LAB_00446eca
    DEC EAX                             ; 00446ed0
    CMP EDI,EAX                         ; 00446ed1
    JGE 0x00446f0a                      ; 00446ed3
        ;   XREF to: 00446f0a (CONDITIONAL_JUMP)  ; LAB_00446f0a
    IMUL ECX,EDI,0x140                  ; 00446ed5
    MOV EDX,0x1                         ; 00446edb
    LEA EAX,[EDX + EBP*0x1]             ; 00446ee0
    ADD ECX,EDX                         ; 00446ee3
    MOV EBX,dword ptr [ESI + 0x150]     ; 00446ee5
        ;   Label: LAB_00446ee5
    DEC EBX                             ; 00446eeb
    CMP EDX,EBX                         ; 00446eec
    JGE 0x00446f01                      ; 00446eee
        ;   XREF to: 00446f01 (CONDITIONAL_JUMP)  ; LAB_00446f01
    INC EAX                             ; 00446ef0
    MOV BL,byte ptr [ECX + 0x12ceb78]   ; 00446ef1 | DAT_012cecb9 | DAT_012cecba | DAT_012cedf9
    INC ECX                             ; 00446ef7
    INC EDX                             ; 00446ef8
    MOV byte ptr [EAX + 0x12e1777],BL   ; 00446ef9
    JMP 0x00446ee5                      ; 00446eff
        ;   XREF to: 00446ee5 (UNCONDITIONAL_JUMP)  ; LAB_00446ee5
    INC EDI                             ; 00446f01
        ;   Label: LAB_00446f01
    ADD EBP,0x140                       ; 00446f02
    JMP 0x00446eca                      ; 00446f08
        ;   XREF to: 00446eca (UNCONDITIONAL_JUMP)  ; LAB_00446eca
    MOV EDX,dword ptr [ESI + 0x154]     ; 00446f0a
        ;   Label: LAB_00446f0a
    XOR EAX,EAX                         ; 00446f10
    TEST EDX,EDX                        ; 00446f12
    JLE 0x00446f70                      ; 00446f14
        ;   XREF to: 00446f70 (CONDITIONAL_JUMP)  ; LAB_00446f70
    MOV ECX,dword ptr [ESP + 0x18]      ; 00446f16
    LEA EDX,[ECX*0x4 + 0x0]             ; 00446f1a
    ADD EDX,ECX                         ; 00446f21
    SHL EDX,0xa                         ; 00446f23
    MOV ECX,EDX                         ; 00446f26
    SHL EDX,0x4                         ; 00446f28
    SUB EDX,ECX                         ; 00446f2b
    IMUL EBX,EAX,0x140                  ; 00446f2d
        ;   Label: LAB_00446f2d
    MOV CL,byte ptr [EBX + 0x12ceb78]   ; 00446f33 | DAT_012cecb8
    MOV byte ptr [EDX + 0x12e1778],CL   ; 00446f39 | DAT_012e18b8
    MOV ECX,dword ptr [ESI + 0x150]     ; 00446f3f
    MOV BL,byte ptr [ECX + EBX*0x1 + 0x12ceb77] ; 00446f45
    MOV byte ptr [ECX + EDX*0x1 + 0x12e1777],BL ; 00446f4c
    INC EAX                             ; 00446f53
    MOV ECX,dword ptr [ESI + 0x154]     ; 00446f54
    ADD EDX,0x140                       ; 00446f5a
    CMP EAX,ECX                         ; 00446f60
    JL 0x00446f2d                       ; 00446f62
        ;   XREF to: 00446f2d (CONDITIONAL_JUMP)  ; LAB_00446f2d
    LEA EAX,[EAX]                       ; 00446f64
    LEA EDX,[EDX]                       ; 00446f6a
    MOV EDX,dword ptr [ESP + 0x18]      ; 00446f70
        ;   Label: LAB_00446f70
    LEA EDI,[EDX*0x4 + 0x0]             ; 00446f74
    ADD EDI,EDX                         ; 00446f7b
    SHL EDI,0xa                         ; 00446f7d
    MOV EDX,EDI                         ; 00446f80
    SHL EDI,0x4                         ; 00446f82
    MOV EAX,0x1                         ; 00446f85
    SUB EDI,EDX                         ; 00446f8a
    MOV EBP,0xffffffff                  ; 00446f8c
    LEA EDX,[EDI + EAX*0x1]             ; 00446f91
    MOV ECX,dword ptr [ESI + 0x150]     ; 00446f94
        ;   Label: LAB_00446f94
    ADD ECX,EBP                         ; 00446f9a
    CMP EAX,ECX                         ; 00446f9c
    JGE 0x00446719                      ; 00446f9e
        ;   XREF to: 00446719 (CONDITIONAL_JUMP)  ; LAB_00446719
    MOV BL,byte ptr [EAX + 0x12ceb78]   ; 00446fa4 | DAT_012ceb79 | DAT_012ceb7a
    MOV byte ptr [EDX + 0x12e1778],BL   ; 00446faa
    MOV ECX,dword ptr [ESI + 0x154]     ; 00446fb0
    DEC ECX                             ; 00446fb6
    IMUL ECX,ECX,0x140                  ; 00446fb7
    LEA EBX,[ECX + EAX*0x1]             ; 00446fbd
    INC EAX                             ; 00446fc0
    ADD ECX,EDI                         ; 00446fc1
    MOV BL,byte ptr [EBX + 0x12ceb78]   ; 00446fc3 | DAT_012ceb79 | DAT_012ceb7a
    INC EDX                             ; 00446fc9
    MOV byte ptr [ECX + EAX*0x1 + 0x12e1777],BL ; 00446fca
    JMP 0x00446f94                      ; 00446fd1
        ;   XREF to: 00446f94 (UNCONDITIONAL_JUMP)  ; LAB_00446f94

