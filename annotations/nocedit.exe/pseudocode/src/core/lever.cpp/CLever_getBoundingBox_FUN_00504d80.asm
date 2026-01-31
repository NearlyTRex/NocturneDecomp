; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CBoundingBox3D * __cdecl core_lever_cpp_CLever_getBoundingBox_FUN_00504d80(CLever *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CLever *         Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00504d80
        ;   Label: core_lever.cpp_CLever_getBoundingBox_FUN_00504d80
    MOV EBX,dword ptr [ESP + 0xc]       ; 00504d81
    MOV EAX,dword ptr [ESP + 0x8]       ; 00504d85
    ADD EAX,0x158                       ; 00504d89
    PUSH EAX                            ; 00504d8e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 00504d8f
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    MOV EAX,dword ptr [EAX + 0x5690]    ; 00504d94
    MOV EDX,dword ptr [EAX]             ; 00504d9a
    LEA ECX,[EAX + 0x4]                 ; 00504d9c
    MOV dword ptr [EBX],EDX             ; 00504d9f
    LEA EDX,[EBX + 0x4]                 ; 00504da1
    MOV ECX,dword ptr [ECX]             ; 00504da4
    MOV dword ptr [EDX],ECX             ; 00504da6
    LEA ECX,[EAX + 0x8]                 ; 00504da8
    MOV ECX,dword ptr [ECX]             ; 00504dab
    MOV dword ptr [EDX + 0x4],ECX       ; 00504dad
    MOV ECX,dword ptr [EAX + 0xc]       ; 00504db0
    ADD EAX,0xc                         ; 00504db3
    MOV dword ptr [EDX + 0x8],ECX       ; 00504db6
    LEA ECX,[EAX + 0x4]                 ; 00504db9
    MOV ECX,dword ptr [ECX]             ; 00504dbc
    MOV dword ptr [EDX + 0xc],ECX       ; 00504dbe
    MOV EAX,dword ptr [EAX + 0x8]       ; 00504dc1
    ADD ESP,0x4                         ; 00504dc4
    MOV dword ptr [EDX + 0x10],EAX      ; 00504dc7
    MOV EAX,EBX                         ; 00504dca
    POP EBX                             ; 00504dcc
    RET                                 ; 00504dcd

