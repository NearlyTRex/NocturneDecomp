; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_set_cpp_FUN_005553e0(int param_1,SMRGLPrimitivePoly *param_2,int param_3)
;
;
; XREF[1]:
;   core_dpart.cpp_FUN_00479f5e at 0047a0a2
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   CGame* g_CGamePtr = 01ccf390
;
; Called Functions:
;   core_mirror.cpp_CMirror_renderMirroredPrimitive_FUN_00519c20
;   engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_00481c00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005553e0
        ;   Label: core_set.cpp_FUN_005553e0
    PUSH ESI                            ; 005553e1
    PUSH EDI                            ; 005553e2
    PUSH EBP                            ; 005553e3
    MOV EBP,dword ptr [ESP + 0x14]      ; 005553e4
    MOV EAX,dword ptr [ESP + 0x18]      ; 005553e8
    MOV EDI,dword ptr [ESP + 0x1c]      ; 005553ec
    MOV EBX,dword ptr [0x0061d95c]      ; 005553f0 | g_CGamePtr
    CMP dword ptr [EBX + 0x20c],0x0     ; 005553f6
    JNZ 0x00555430                      ; 005553fd
        ;   XREF to: 00555430 (CONDITIONAL_JUMP)  ; LAB_00555430
    MOV EBX,dword ptr [0x00612560]      ; 005553ff | DAT_00612560
    MOV EBX,dword ptr [EBX + 0x18]      ; 00555405
    TEST EBX,EBX                        ; 00555408
    JZ 0x00555435                       ; 0055540a
        ;   XREF to: 00555435 (CONDITIONAL_JUMP)  ; LAB_00555435
    XOR EBX,EBX                         ; 0055540c
    TEST EDI,EDI                        ; 0055540e
    JLE 0x00555430                      ; 00555410
        ;   XREF to: 00555430 (CONDITIONAL_JUMP)  ; LAB_00555430
    MOV ESI,EAX                         ; 00555412
    PUSH ESI                            ; 00555414
        ;   Label: LAB_00555414
    MOV EAX,dword ptr [EBP + 0x161668]  ; 00555415
    PUSH EAX                            ; 0055541b
    INC EBX                             ; 0055541c
    CALL core_mirror.cpp_CMirror_renderMirroredPrimitive_FUN_00519c20 ; 0055541d
        ;   XREF to: 00519c20 (UNCONDITIONAL_CALL)  ; void core_mirror.cpp_CMirror_renderMirroredPrimitive_FUN_00519c20(CMirror * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESI,0x48                        ; 00555422
    ADD ESP,0x8                         ; 00555425
    CMP EBX,EDI                         ; 00555428
    JL 0x00555414                       ; 0055542a
        ;   XREF to: 00555414 (CONDITIONAL_JUMP)  ; LAB_00555414
    LEA EAX,[EAX]                       ; 0055542c
    POP EBP                             ; 00555430
        ;   Label: LAB_00555430
    POP EDI                             ; 00555431
    POP ESI                             ; 00555432
    POP EBX                             ; 00555433
    RET                                 ; 00555434
    XOR ESI,ESI                         ; 00555435
        ;   Label: LAB_00555435
    TEST EDI,EDI                        ; 00555437
    JLE 0x00555430                      ; 00555439
        ;   XREF to: 00555430 (CONDITIONAL_JUMP)  ; LAB_00555430
    MOV EBX,EAX                         ; 0055543b
    PUSH EBX                            ; 0055543d
        ;   Label: LAB_0055543d
    MOV ECX,dword ptr [0x00612560]      ; 0055543e | DAT_00612560
    PUSH ECX                            ; 00555444
    INC ESI                             ; 00555445
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_00481c00 ; 00555446
        ;   XREF to: 00481c00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_00481c00(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    ADD EBX,0x48                        ; 0055544b
    ADD ESP,0x8                         ; 0055544e
    CMP ESI,EDI                         ; 00555451
    JL 0x0055543d                       ; 00555453
        ;   XREF to: 0055543d (CONDITIONAL_JUMP)  ; LAB_0055543d
    POP EBP                             ; 00555455
    POP EDI                             ; 00555456
    POP ESI                             ; 00555457
    POP EBX                             ; 00555458
    RET                                 ; 00555459

