; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderTriangleBatch_FUN_004613d0(CDemonRenderer *this_ptr,SMRGLPrimitiveTriangle *primitive_array,int primitive_count ,int render_flags)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLPrimitiveTriangle * Stack[0x8]:4   primitive_array
; int              Stack[0xc]:4   primitive_count
; int              Stack[0x10]:4   render_flags
;
; XREF[2]:
;   core_bodypart.cpp_CBodyPart_renderGeometry_FUN_00416030 at 004160ed
;   core_set.cpp_CDemonSet_renderFaceBatchOrEnvMap_FUN_0050dd60 at 0050dda2
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_processVisiblePrimitive_FUN_00461a30
;   engine_drender.cpp_CDemonRenderer_renderFacetList_FUN_004614b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004613d0
        ;   Label: engine_drender.cpp_CDemonRenderer_renderTriangleBatch_FUN_004613d0
    PUSH ESI                            ; 004613d1
    PUSH EDI                            ; 004613d2
    PUSH EBP                            ; 004613d3
    MOV ESI,dword ptr [ESP + 0x18]      ; 004613d4
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004613d8
    MOV EDI,dword ptr [ESP + 0x20]      ; 004613dc
    CMP EDI,-0x1                        ; 004613e0
    JNZ 0x004613ea                      ; 004613e3
        ;   XREF to: 004613ea (CONDITIONAL_JUMP)  ; LAB_004613ea
    MOV EDI,0x2cd                       ; 004613e5
    MOV EBX,dword ptr [ESP + 0x14]      ; 004613ea
        ;   Label: LAB_004613ea
    CMP dword ptr [EBX + 0x1c],0x0      ; 004613ee
    JZ 0x00461425                       ; 004613f2
        ;   XREF to: 00461425 (CONDITIONAL_JUMP)  ; LAB_00461425
    XOR EBX,EBX                         ; 004613f4
    TEST EBP,EBP                        ; 004613f6
    JLE 0x00461420                      ; 004613f8
        ;   XREF to: 00461420 (CONDITIONAL_JUMP)  ; LAB_00461420
    PUSH EDI                            ; 004613fa
        ;   Label: LAB_004613fa
    PUSH ESI                            ; 004613fb
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004613fc
    PUSH EAX                            ; 00461400
    INC EBX                             ; 00461401
    CALL engine_drender.cpp_CDemonRenderer_processVisiblePrimitive_FUN_00461a30 ; 00461402
        ;   XREF to: 00461a30 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processVisiblePrimitive_FUN_00461a30(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * primitive, int render_flags)
    ADD ESI,0x3c                        ; 00461407
    ADD ESP,0xc                         ; 0046140a
    CMP EBX,EBP                         ; 0046140d
    JL 0x004613fa                       ; 0046140f
        ;   XREF to: 004613fa (CONDITIONAL_JUMP)  ; LAB_004613fa
    LEA EAX,[EAX]                       ; 00461411
    LEA EDX,[EDX]                       ; 00461417
    LEA EAX,[EAX]                       ; 0046141d
    POP EBP                             ; 00461420
        ;   Label: LAB_00461420
    POP EDI                             ; 00461421
    POP ESI                             ; 00461422
    POP EBX                             ; 00461423
    RET                                 ; 00461424
    PUSH EDI                            ; 00461425
        ;   Label: LAB_00461425
    PUSH 0x3c                           ; 00461426
    PUSH EBP                            ; 00461428
    PUSH ESI                            ; 00461429
    PUSH EBX                            ; 0046142a
    CALL engine_drender.cpp_CDemonRenderer_renderFacetList_FUN_004614b0 ; 0046142b
        ;   XREF to: 004614b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderFacetList_FUN_004614b0(CDemonRenderer * this_ptr, SMRGLPrimitiveQuad * primitive_array, int primitive_count, int primitive_stride, ...)
    ADD ESP,0x14                        ; 00461430
    POP EBP                             ; 00461433
    POP EDI                             ; 00461434
    POP ESI                             ; 00461435
    POP EBX                             ; 00461436
    RET                                 ; 00461437

