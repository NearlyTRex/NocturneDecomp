; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorph_setupModelFromPolygons_FUN_0052b370(CMorph *this_ptr,int model_index)
;
; Parameters:
; CMorph *         Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   model_index
;
; Called Functions:
;   core_morph.cpp_CMorphModel_addPartFromPolygon_FUN_0052a580
;   core_morph.cpp_CMorphModel_free_FUN_0052a510
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052b370
        ;   Label: core_morph.cpp_CMorph_setupModelFromPolygons_FUN_0052b370
    PUSH ESI                            ; 0052b371
    PUSH EDI                            ; 0052b372
    PUSH EBP                            ; 0052b373
    MOV EDX,dword ptr [ESP + 0x18]      ; 0052b374
    LEA EAX,[EDX*0x4 + 0x0]             ; 0052b378
    SUB EAX,EDX                         ; 0052b37f
    SHL EAX,0x6                         ; 0052b381
    ADD EAX,EDX                         ; 0052b384
    MOV EBX,dword ptr [ESP + 0x14]      ; 0052b386
    SHL EAX,0x3                         ; 0052b38a
    ADD EBX,EAX                         ; 0052b38d
    PUSH EBX                            ; 0052b38f
    CALL core_morph.cpp_CMorphModel_free_FUN_0052a510 ; 0052b390
        ;   XREF to: 0052a510 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_free_FUN_0052a510(CMorphModel * this_ptr)
    ADD ESP,0x4                         ; 0052b395
    MOV EDX,dword ptr [ESP + 0x30]      ; 0052b398
    PUSH EDX                            ; 0052b39c
    MOV ECX,dword ptr [ESP + 0x30]      ; 0052b39d
    PUSH ECX                            ; 0052b3a1
    PUSH 0x3c                           ; 0052b3a2
    MOV ESI,dword ptr [ESP + 0x34]      ; 0052b3a4
    PUSH ESI                            ; 0052b3a8
    MOV EDI,dword ptr [ESP + 0x34]      ; 0052b3a9
    PUSH EDI                            ; 0052b3ad
    MOV EBP,dword ptr [ESP + 0x34]      ; 0052b3ae
    PUSH EBP                            ; 0052b3b2
    MOV EAX,dword ptr [ESP + 0x34]      ; 0052b3b3
    PUSH EAX                            ; 0052b3b7
    PUSH EBX                            ; 0052b3b8
    CALL core_morph.cpp_CMorphModel_addPartFromPolygon_FUN_0052a580 ; 0052b3b9
        ;   XREF to: 0052a580 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_addPartFromPolygon_FUN_0052a580(CMorphModel * this_ptr, int vertex_count, CVector3i * vertex_data, int poly_count, ...)
    ADD ESP,0x20                        ; 0052b3be
    POP EBP                             ; 0052b3c1
    POP EDI                             ; 0052b3c2
    POP ESI                             ; 0052b3c3
    POP EBX                             ; 0052b3c4
    RET                                 ; 0052b3c5

