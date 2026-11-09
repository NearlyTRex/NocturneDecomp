; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorphModel_animateFromVertexBuffer_FUN_004f9e40(CMorphModel *this_ptr,int part_index,CVector3i *vertex_buffer,int start_offset,int vertex_count)
;
; Parameters:
; CMorphModel *    Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   part_index
; CVector3i *      Stack[0xc]:4   vertex_buffer
; int              Stack[0x10]:4   start_offset
; int              Stack[0x14]:4   vertex_count
;
; XREF[3]:
;   core_morph.cpp_CMorphModel_addPartFromPolygon_FUN_004f9ad0 at 004f9bd5
;   core_morph.cpp_FUN_004f9c40 at 004f9d1b
;   core_morph.cpp_FUN_004f9f50 at 004f9f91
;
; Referenced Globals:
;   TerminatedCString s_core_morph_cpp_005c94d9
;   TerminatedCString s_CMorphModel_animate_inva_005c94eb
;   TerminatedCString s_core_morph_cpp_005c9515
;   TerminatedCString s_CMorphModel_animate_inva_005c9527
;   undefined4 DAT_005e2c08
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f9e40
        ;   Label: core_morph.cpp_CMorphModel_animateFromVertexBuffer_FUN_004f9e40
    PUSH ESI                            ; 004f9e41
    PUSH EDI                            ; 004f9e42
    PUSH EBP                            ; 004f9e43
    MOV EBX,dword ptr [ESP + 0x18]      ; 004f9e44
    MOV EDI,dword ptr [ESP + 0x20]      ; 004f9e48
    MOV EBP,dword ptr [ESP + 0x24]      ; 004f9e4c
    TEST EBX,EBX                        ; 004f9e50
    JL 0x004f9e5c                       ; 004f9e52
        ;   XREF to: 004f9e5c (CONDITIONAL_JUMP)  ; LAB_004f9e5c
    MOV EDX,dword ptr [ESP + 0x14]      ; 004f9e54
    CMP EBX,dword ptr [EDX]             ; 004f9e58
    JL 0x004f9e7e                       ; 004f9e5a
        ;   XREF to: 004f9e7e (CONDITIONAL_JUMP)  ; LAB_004f9e7e
    MOV ESI,0x5c94d9                    ; 004f9e5c | = "..\\core\\morph.cpp"
        ;   Label: LAB_004f9e5c
    MOV EAX,0x112                       ; 004f9e61
    PUSH 0x5c94eb                       ; 004f9e66 | = "CMorphModel::animate - invalid part i..."
    MOV dword ptr [0x01d71de0],ESI      ; 004f9e6b | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 004f9e71 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004f9e76
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004f9e7b
    MOV ECX,EBX                         ; 004f9e7e
        ;   Label: LAB_004f9e7e
    MOV EDX,dword ptr [ESP + 0x14]      ; 004f9e80
    SHL ECX,0x4                         ; 004f9e84
    ADD ECX,EDX                         ; 004f9e87
    MOV EBX,dword ptr [ECX + 0xc]       ; 004f9e89
    MOV ESI,dword ptr [ECX + 0x4]       ; 004f9e8c
    ADD EDI,EBX                         ; 004f9e8f
    LEA EDX,[EBX + ESI*0x1]             ; 004f9e91
    LEA ECX,[EDI + EBP*0x1]             ; 004f9e94
    CMP ECX,EDX                         ; 004f9e97
    JLE 0x004f9ebd                      ; 004f9e99
        ;   XREF to: 004f9ebd (CONDITIONAL_JUMP)  ; LAB_004f9ebd
    MOV EAX,0x5c9515                    ; 004f9e9b | = "..\\core\\morph.cpp"
    MOV EDX,0x119                       ; 004f9ea0
    PUSH 0x5c9527                       ; 004f9ea5 | = "CMorphModel::animate - invalid vertex..."
    MOV [0x01d71de0],EAX                ; 004f9eaa | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 004f9eaf | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004f9eb5
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004f9eba
    XOR ECX,ECX                         ; 004f9ebd
        ;   Label: LAB_004f9ebd
    TEST EBP,EBP                        ; 004f9ebf
    JLE 0x004f9f10                      ; 004f9ec1
        ;   XREF to: 004f9f10 (CONDITIONAL_JUMP)  ; LAB_004f9f10
    MOV ESI,EDI                         ; 004f9ec3
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004f9ec5
    SHL ESI,0x4                         ; 004f9ec9
    MOV EBX,dword ptr [ESP + 0x14]      ; 004f9ecc
        ;   Label: LAB_004f9ecc
    MOV EAX,EDX                         ; 004f9ed0
    MOV EBX,dword ptr [EBX + 0x58]      ; 004f9ed2
    INC EDI                             ; 004f9ed5
    ADD EBX,ESI                         ; 004f9ed6
    INC ECX                             ; 004f9ed8
    ADD EBX,0x4                         ; 004f9ed9
    ADD EDX,0xc                         ; 004f9edc
    FILD dword ptr [EAX]                ; 004f9edf
    FMUL float ptr [0x005e2c08]         ; 004f9ee1 | DAT_005e2c08
    FSTP float ptr [EBX]                ; 004f9ee7
    FILD dword ptr [EAX + 0x4]          ; 004f9ee9
    FMUL float ptr [0x005e2c08]         ; 004f9eec | DAT_005e2c08
    FSTP float ptr [EBX + 0x4]          ; 004f9ef2
    FILD dword ptr [EAX + 0x8]          ; 004f9ef5
    FMUL float ptr [0x005e2c08]         ; 004f9ef8 | DAT_005e2c08
    FSTP float ptr [EBX + 0x8]          ; 004f9efe
    ADD ESI,0x10                        ; 004f9f01
    CMP ECX,EBP                         ; 004f9f04
    JL 0x004f9ecc                       ; 004f9f06
        ;   XREF to: 004f9ecc (CONDITIONAL_JUMP)  ; LAB_004f9ecc
    LEA EAX,[EAX]                       ; 004f9f08
    MOV EDX,EDX                         ; 004f9f0e
    POP EBP                             ; 004f9f10
        ;   Label: LAB_004f9f10
    POP EDI                             ; 004f9f11
    POP ESI                             ; 004f9f12
    POP EBX                             ; 004f9f13
    RET                                 ; 004f9f14

