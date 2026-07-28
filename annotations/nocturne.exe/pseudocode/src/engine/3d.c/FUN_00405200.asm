; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int engine_3d_c_FUN_00405200(int param_1)
;
;
; Called Functions:
;   engine_3d.c_FUN_00408e80
;   engine_3d.c_isVisiblePlane_FUN_00404610
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00405200
        ;   Label: engine_3d.c_FUN_00405200
    MOV EBX,dword ptr [ESP + 0x8]       ; 00405201
    LEA EAX,[EBX + 0x4]                 ; 00405205
    PUSH EAX                            ; 00405208
    CALL engine_3d.c_isVisiblePlane_FUN_00404610 ; 00405209
        ;   XREF to: 00404610 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00404610(SClipPlane * plane)
    ADD ESP,0x4                         ; 0040520e
    TEST EAX,EAX                        ; 00405211
    JZ 0x0040522a                       ; 00405213
        ;   XREF to: 0040522a (CONDITIONAL_JUMP)  ; LAB_0040522a
    MOV EAX,dword ptr [EBX + 0x18]      ; 00405215
    ADD EAX,EBX                         ; 00405218
    PUSH EAX                            ; 0040521a
    CALL engine_3d.c_FUN_00408e80       ; 0040521b
        ;   XREF to: 00408e80 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_FUN_00408e80()
    MOV EAX,dword ptr [EBX + 0x14]      ; 00405220
    ADD ESP,0x4                         ; 00405223
    ADD EAX,EBX                         ; 00405226
    POP EBX                             ; 00405228
    RET                                 ; 00405229
    MOV EAX,dword ptr [EBX + 0x14]      ; 0040522a
        ;   Label: LAB_0040522a
    ADD EAX,EBX                         ; 0040522d
    PUSH EAX                            ; 0040522f
    CALL engine_3d.c_FUN_00408e80       ; 00405230
        ;   XREF to: 00408e80 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_FUN_00408e80()
    MOV EAX,dword ptr [EBX + 0x18]      ; 00405235
    ADD ESP,0x4                         ; 00405238
    ADD EAX,EBX                         ; 0040523b
    POP EBX                             ; 0040523d
    RET                                 ; 0040523e

