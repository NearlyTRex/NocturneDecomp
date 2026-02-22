; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_drender_cpp_CDemonRenderer_renderFaceBatch_FUN_0048ce20(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *primitive_array,int primitive_count,int render_flags)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   primitive_array
; int              Stack[0xc]:4   primitive_count
; int              Stack[0x10]:4   render_flags
;
; XREF[2]:
;   core_bodypart.cpp_CBodyPart_renderGeometry_FUN_00419340 at 004193fd
;   core_set.cpp_CDemonSet_renderFaceBatchOrEnvMap_FUN_00570700 at 00570742
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_processVisiblePrimitive_FUN_0048d700
;   engine_drender.cpp_CDemonRenderer_renderTriangleFacetList_FUN_0048cf00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048ce20
        ;   Label: engine_drender.cpp_CDemonRenderer_renderFaceBatch_FUN_0048ce20
    PUSH ESI                            ; 0048ce21
    PUSH EDI                            ; 0048ce22
    PUSH EBP                            ; 0048ce23
    MOV ESI,dword ptr [ESP + 0x18]      ; 0048ce24
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0048ce28
    MOV EDI,dword ptr [ESP + 0x20]      ; 0048ce2c
    CMP EDI,-0x1                        ; 0048ce30
    JNZ 0x0048ce3a                      ; 0048ce33
        ;   XREF to: 0048ce3a (CONDITIONAL_JUMP)  ; LAB_0048ce3a
    MOV EDI,0x2cd                       ; 0048ce35
    MOV EBX,dword ptr [ESP + 0x14]      ; 0048ce3a
        ;   Label: LAB_0048ce3a
    CMP dword ptr [EBX + 0x1c],0x0      ; 0048ce3e
    JZ 0x0048ce75                       ; 0048ce42
        ;   XREF to: 0048ce75 (CONDITIONAL_JUMP)  ; LAB_0048ce75
    XOR EBX,EBX                         ; 0048ce44
    TEST EBP,EBP                        ; 0048ce46
    JLE 0x0048ce70                      ; 0048ce48
        ;   XREF to: 0048ce70 (CONDITIONAL_JUMP)  ; LAB_0048ce70
    PUSH EDI                            ; 0048ce4a
        ;   Label: LAB_0048ce4a
    PUSH ESI                            ; 0048ce4b
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0048ce4c
    PUSH EAX                            ; 0048ce50
    INC EBX                             ; 0048ce51
    CALL engine_drender.cpp_CDemonRenderer_processVisiblePrimitive_FUN_0048d700 ; 0048ce52
        ;   XREF to: 0048d700 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processVisiblePrimitive_FUN_0048d700(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * primitive, int render_flags)
    ADD ESI,0x3c                        ; 0048ce57
    ADD ESP,0xc                         ; 0048ce5a
    CMP EBX,EBP                         ; 0048ce5d
    JL 0x0048ce4a                       ; 0048ce5f
        ;   XREF to: 0048ce4a (CONDITIONAL_JUMP)  ; LAB_0048ce4a
    LEA EAX,[EAX]                       ; 0048ce61
    LEA EDX,[EDX]                       ; 0048ce67
    LEA EAX,[EAX]                       ; 0048ce6d
    POP EBP                             ; 0048ce70
        ;   Label: LAB_0048ce70
    POP EDI                             ; 0048ce71
    POP ESI                             ; 0048ce72
    POP EBX                             ; 0048ce73
    RET                                 ; 0048ce74
    PUSH EDI                            ; 0048ce75
        ;   Label: LAB_0048ce75
    PUSH 0x3c                           ; 0048ce76
    PUSH EBP                            ; 0048ce78
    PUSH ESI                            ; 0048ce79
    PUSH EBX                            ; 0048ce7a
    CALL engine_drender.cpp_CDemonRenderer_renderTriangleFacetList_FUN_0048cf00 ; 0048ce7b
        ;   XREF to: 0048cf00 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_renderTriangleFacetList_FUN_0048cf00(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * primitive_array, int primitive_count, int render_flags, ...)
    ADD ESP,0x14                        ; 0048ce80
    POP EBP                             ; 0048ce83
    POP EDI                             ; 0048ce84
    POP ESI                             ; 0048ce85
    POP EBX                             ; 0048ce86
    RET                                 ; 0048ce87

