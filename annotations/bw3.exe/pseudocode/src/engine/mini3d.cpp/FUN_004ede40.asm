; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ede40(void)
;
;
; XREF[2]:
;   FUN_004ee5b0 at 004ee619
;   FUN_004f2490 at 004f24bb
;
; Referenced Globals:
;   TerminatedCString s_engine_mini3d_cpp_005c7f95
;   TerminatedCString s_CMini3D_allocVertexList_005c7faa
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_01d76f5c
;   undefined4 DAT_01d76f60
;   undefined4 DAT_01d76f64
;
; Called Functions:
;   FUN_004e4330
;   FUN_005a3650
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01d76f5c],0x0      ; 004ede40 | DAT_01d76f5c
        ;   Label: FUN_004ede40
    JZ 0x004ede4a                       ; 004ede47
        ;   XREF to: 004ede4a (CONDITIONAL_JUMP)  ; LAB_004ede4a
    RET                                 ; 004ede49
    PUSH 0x9c440                        ; 004ede4a
        ;   Label: LAB_004ede4a
    CALL FUN_005a3650                   ; 004ede4f
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3650()
    ADD ESP,0x4                         ; 004ede54
    MOV [0x01d76f5c],EAX                ; 004ede57 | DAT_01d76f5c
    TEST EAX,EAX                        ; 004ede5c
    JNZ 0x004ede85                      ; 004ede5e
        ;   XREF to: 004ede85 (CONDITIONAL_JUMP)  ; LAB_004ede85
    PUSH EBX                            ; 004ede60
    MOV ECX,0x5c7f95                    ; 004ede61 | = "..\\engine\\mini3d.cpp"
    MOV EBX,0x67d                       ; 004ede66
    PUSH 0x5c7faa                       ; 004ede6b | = "CMini3D::allocVertexList - Out of mem..."
    MOV dword ptr [0x01d71de0],ECX      ; 004ede70 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 004ede76 | DAT_01d71de4
    CALL FUN_004e4330                   ; 004ede7c
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 004ede81
    POP EBX                             ; 004ede84
    MOV EAX,[0x01d76f5c]                ; 004ede85 | DAT_01d76f5c
        ;   Label: LAB_004ede85
    ADD EAX,0x3f                        ; 004ede8a
    AND AL,0xc0                         ; 004ede8d
    MOV [0x01d76f60],EAX                ; 004ede8f | DAT_01d76f60
    MOV [0x01d76f64],EAX                ; 004ede94 | DAT_01d76f64
    RET                                 ; 004ede99

