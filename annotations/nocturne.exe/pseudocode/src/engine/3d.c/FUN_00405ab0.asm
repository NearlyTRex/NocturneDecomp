; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_3d_c_FUN_00405ab0(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[1]:
;   engine_3d.c_FUN_00405b40 at 00405bdc
;
; Referenced Globals:
;   undefined4 DAT_006b0268
;   undefined4 DAT_006b02dc
;   undefined4 DAT_006b02e0
;   undefined4 DAT_006b02e4
;   undefined4 DAT_006b415c
;
; Called Functions:
;   engine_3d.c_FUN_004059c0
;   engine_3d.c_isVisiblePlane_FUN_00404610
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00405ab0
        ;   Label: engine_3d.c_FUN_00405ab0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00405ab1
    CMP dword ptr [0x006b0268],0x1f4    ; 00405ab5 | DAT_006b0268
    JL 0x00405ac3                       ; 00405abf
        ;   XREF to: 00405ac3 (CONDITIONAL_JUMP)  ; LAB_00405ac3
    POP EBX                             ; 00405ac1
        ;   Label: LAB_00405ac1
    RET                                 ; 00405ac2
    LEA EAX,[EBX + 0x8]                 ; 00405ac3
        ;   Label: LAB_00405ac3
    PUSH EAX                            ; 00405ac6
    CALL engine_3d.c_isVisiblePlane_FUN_00404610 ; 00405ac7
        ;   XREF to: 00404610 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00404610(SClipPlane * plane)
    ADD ESP,0x4                         ; 00405acc
    TEST EAX,EAX                        ; 00405acf
    JZ 0x00405ac1                       ; 00405ad1
        ;   XREF to: 00405ac1 (CONDITIONAL_JUMP)  ; LAB_00405ac1
    MOV EAX,[0x006b0268]                ; 00405ad3 | DAT_006b0268
    SHL EAX,0x5                         ; 00405ad8
    MOV EDX,dword ptr [ESP + 0xc]       ; 00405adb
    MOV dword ptr [EAX + 0x6b02dc],EBX  ; 00405adf | DAT_006b02dc
    MOV dword ptr [EAX + 0x6b02e0],EDX  ; 00405ae5 | DAT_006b02e0
    MOV EDX,dword ptr [ESP + 0x10]      ; 00405aeb
    PUSH EBX                            ; 00405aef
    MOV dword ptr [EAX + 0x6b02e4],EDX  ; 00405af0 | DAT_006b02e4
    CALL engine_3d.c_FUN_004059c0       ; 00405af6
        ;   XREF to: 004059c0 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_FUN_004059c0()
    MOV EAX,[0x006b0268]                ; 00405afb | DAT_006b0268
    MOV EDX,0x6b02dc                    ; 00405b00 | DAT_006b02dc
    SHL EAX,0x5                         ; 00405b05
    ADD EDX,EAX                         ; 00405b08
    MOV EAX,[0x006b0268]                ; 00405b0a | DAT_006b0268
    ADD ESP,0x4                         ; 00405b0f
    LEA ECX,[EAX + 0x1]                 ; 00405b12
    MOV dword ptr [EAX*0x4 + 0x6b415c],EDX ; 00405b15 | DAT_006b415c
    MOV dword ptr [0x006b0268],ECX      ; 00405b1c | DAT_006b0268
    POP EBX                             ; 00405b22
    RET                                 ; 00405b23

