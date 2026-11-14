; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_copyFogPlaneToBuffer_FUN_00453c90(CDemonCamera *this_ptr,int plane_index)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   plane_index
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_00453610 at 00453958
;
; Referenced Globals:
;   undefined4 DAT_01342221
;   undefined4 DAT_01342222
;   undefined4 DAT_01342360
;   undefined4 DAT_01342361
;   undefined4 DAT_01342362
;   undefined4 DAT_013424a1
;   undefined4 DAT_01354f60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00453c90
        ;   Label: core_dcamera.cpp_CDemonCamera_copyFogPlaneToBuffer_FUN_00453c90
    PUSH ESI                            ; 00453c91
    PUSH EDI                            ; 00453c92
    PUSH EBP                            ; 00453c93
    MOV ESI,dword ptr [ESP + 0x14]      ; 00453c94
    MOV EDX,dword ptr [ESP + 0x18]      ; 00453c98
    LEA EAX,[EDX*0x4 + 0x0]             ; 00453c9c
    ADD EAX,EDX                         ; 00453ca3
    SHL EAX,0xa                         ; 00453ca5
    MOV EDX,EAX                         ; 00453ca8
    SHL EAX,0x4                         ; 00453caa
    SUB EAX,EDX                         ; 00453cad
    MOV EDI,0x1                         ; 00453caf
    LEA EBP,[EAX + 0x140]               ; 00453cb4
    MOV EAX,dword ptr [ESI + 0x154]     ; 00453cba
        ;   Label: LAB_00453cba
    DEC EAX                             ; 00453cc0
    CMP EDI,EAX                         ; 00453cc1
    JGE 0x00453cfa                      ; 00453cc3
        ;   XREF to: 00453cfa (CONDITIONAL_JUMP)  ; LAB_00453cfa
    IMUL EAX,EDI,0x140                  ; 00453cc5
    MOV ECX,0x1                         ; 00453ccb
    LEA EDX,[ECX + EBP*0x1]             ; 00453cd0
    ADD EAX,ECX                         ; 00453cd3
    MOV EBX,dword ptr [ESI + 0x150]     ; 00453cd5
        ;   Label: LAB_00453cd5
    DEC EBX                             ; 00453cdb
    CMP ECX,EBX                         ; 00453cdc
    JGE 0x00453cf1                      ; 00453cde
        ;   XREF to: 00453cf1 (CONDITIONAL_JUMP)  ; LAB_00453cf1
    INC EDX                             ; 00453ce0
    MOV BL,byte ptr [EAX + 0x1342220]   ; 00453ce1 | DAT_01342361 | DAT_01342362 | DAT_013424a1
    INC EAX                             ; 00453ce7
    INC ECX                             ; 00453ce8
    MOV byte ptr [EDX + 0x1354e1f],BL   ; 00453ce9
    JMP 0x00453cd5                      ; 00453cef
        ;   XREF to: 00453cd5 (UNCONDITIONAL_JUMP)  ; LAB_00453cd5
    INC EDI                             ; 00453cf1
        ;   Label: LAB_00453cf1
    ADD EBP,0x140                       ; 00453cf2
    JMP 0x00453cba                      ; 00453cf8
        ;   XREF to: 00453cba (UNCONDITIONAL_JUMP)  ; LAB_00453cba
    MOV ECX,dword ptr [ESI + 0x154]     ; 00453cfa
        ;   Label: LAB_00453cfa
    XOR EDX,EDX                         ; 00453d00
    TEST ECX,ECX                        ; 00453d02
    JLE 0x00453d60                      ; 00453d04
        ;   XREF to: 00453d60 (CONDITIONAL_JUMP)  ; LAB_00453d60
    MOV ECX,dword ptr [ESP + 0x18]      ; 00453d06
    LEA EAX,[ECX*0x4 + 0x0]             ; 00453d0a
    ADD EAX,ECX                         ; 00453d11
    SHL EAX,0xa                         ; 00453d13
    MOV ECX,EAX                         ; 00453d16
    SHL EAX,0x4                         ; 00453d18
    SUB EAX,ECX                         ; 00453d1b
    MOV ECX,EAX                         ; 00453d1d
    LEA EAX,[EDX*0x4 + 0x0]             ; 00453d1f
        ;   Label: LAB_00453d1f
    ADD EAX,EDX                         ; 00453d26
    SHL EAX,0x6                         ; 00453d28
    MOV BL,byte ptr [EAX + 0x1342220]   ; 00453d2b | DAT_01342360
    MOV byte ptr [ECX + 0x1354e20],BL   ; 00453d31 | DAT_01354f60
    MOV EBX,dword ptr [ESI + 0x150]     ; 00453d37
    MOV AL,byte ptr [EBX + EAX*0x1 + 0x134221f] ; 00453d3d
    MOV byte ptr [ECX + EBX*0x1 + 0x1354e1f],AL ; 00453d44
    INC EDX                             ; 00453d4b
    MOV EBX,dword ptr [ESI + 0x154]     ; 00453d4c
    ADD ECX,0x140                       ; 00453d52
    CMP EDX,EBX                         ; 00453d58
    JL 0x00453d1f                       ; 00453d5a
        ;   XREF to: 00453d1f (CONDITIONAL_JUMP)  ; LAB_00453d1f
    LEA EAX,[EAX]                       ; 00453d5c
    MOV EDX,dword ptr [ESP + 0x18]      ; 00453d60
        ;   Label: LAB_00453d60
    LEA EBP,[EDX*0x4 + 0x0]             ; 00453d64
    ADD EBP,EDX                         ; 00453d6b
    SHL EBP,0xa                         ; 00453d6d
    MOV EDX,EBP                         ; 00453d70
    SHL EBP,0x4                         ; 00453d72
    MOV EAX,0x1                         ; 00453d75
    SUB EBP,EDX                         ; 00453d7a
    LEA ECX,[EAX + EBP*0x1]             ; 00453d7c
    MOV EDX,dword ptr [ESI + 0x150]     ; 00453d7f
        ;   Label: LAB_00453d7f
    DEC EDX                             ; 00453d85
    CMP EAX,EDX                         ; 00453d86
    JGE 0x00453bf4                      ; 00453d88
        ;   XREF to: 00453bf4 (CONDITIONAL_JUMP)  ; LAB_00453bf4
    MOV DL,byte ptr [EAX + 0x1342220]   ; 00453d8e | DAT_01342221 | DAT_01342222
    MOV byte ptr [ECX + 0x1354e20],DL   ; 00453d94
    MOV EDX,dword ptr [ESI + 0x154]     ; 00453d9a
    DEC EDX                             ; 00453da0
    IMUL EDX,EDX,0x140                  ; 00453da1
    LEA EBX,[EDX + EAX*0x1]             ; 00453da7
    ADD EDX,EBP                         ; 00453daa
    LEA EDI,[EDX + EAX*0x1]             ; 00453dac
    INC ECX                             ; 00453daf
    MOV DL,byte ptr [EBX + 0x1342220]   ; 00453db0 | DAT_01342221 | DAT_01342222
    INC EAX                             ; 00453db6
    MOV byte ptr [EDI + 0x1354e20],DL   ; 00453db7
    JMP 0x00453d7f                      ; 00453dbd
        ;   XREF to: 00453d7f (UNCONDITIONAL_JUMP)  ; LAB_00453d7f

