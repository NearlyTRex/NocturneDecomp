; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_morph_cpp_FUN_004e0300(void)
;
;
; Called Functions:
;   core_morph.cpp_CMorphModel_animateFromPartVertexBuffer_FUN_004df740
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e0300
        ;   Label: core_morph.cpp_FUN_004e0300
    MOV EDX,dword ptr [ESP + 0x10]      ; 004e0301
    PUSH EDX                            ; 004e0305
    MOV EDX,dword ptr [ESP + 0x10]      ; 004e0306
    LEA EAX,[EDX*0x4 + 0x0]             ; 004e030a
    SUB EAX,EDX                         ; 004e0311
    SHL EAX,0x6                         ; 004e0313
    MOV ECX,dword ptr [ESP + 0x18]      ; 004e0316
    ADD EAX,EDX                         ; 004e031a
    MOV EBX,dword ptr [ESP + 0xc]       ; 004e031c
    SHL EAX,0x3                         ; 004e0320
    PUSH ECX                            ; 004e0323
    ADD EAX,EBX                         ; 004e0324
    PUSH EAX                            ; 004e0326
    CALL core_morph.cpp_CMorphModel_animateFromPartVertexBuffer_FUN_004df740 ; 004e0327
        ;   XREF to: 004df740 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_animateFromPartVertexBuffer_FUN_004df740(CMorphModel * this_ptr, int part_index, CVector3i * vertex_buffer)
    ADD ESP,0xc                         ; 004e032c
    POP EBX                             ; 004e032f
    RET                                 ; 004e0330

