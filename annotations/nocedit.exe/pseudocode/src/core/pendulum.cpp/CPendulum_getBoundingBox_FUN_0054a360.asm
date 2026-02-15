; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_pendulum_cpp_CPendulum_getBoundingBox_FUN_0054a360(CPendulum *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CPendulum *      Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054a360
        ;   Label: core_pendulum.cpp_CPendulum_getBoundingBox_FUN_0054a360
    MOV EBX,dword ptr [ESP + 0xc]       ; 0054a361
    MOV EAX,dword ptr [ESP + 0x8]       ; 0054a365
    ADD EAX,0x158                       ; 0054a369
    PUSH EAX                            ; 0054a36e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 0054a36f
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    MOV EAX,dword ptr [EAX + 0x5690]    ; 0054a374
    MOV EDX,dword ptr [EAX]             ; 0054a37a
    LEA ECX,[EAX + 0x4]                 ; 0054a37c
    MOV dword ptr [EBX],EDX             ; 0054a37f
    LEA EDX,[EBX + 0x4]                 ; 0054a381
    MOV ECX,dword ptr [ECX]             ; 0054a384
    MOV dword ptr [EDX],ECX             ; 0054a386
    LEA ECX,[EAX + 0x8]                 ; 0054a388
    MOV ECX,dword ptr [ECX]             ; 0054a38b
    MOV dword ptr [EDX + 0x4],ECX       ; 0054a38d
    MOV ECX,dword ptr [EAX + 0xc]       ; 0054a390
    ADD EAX,0xc                         ; 0054a393
    MOV dword ptr [EDX + 0x8],ECX       ; 0054a396
    LEA ECX,[EAX + 0x4]                 ; 0054a399
    MOV ECX,dword ptr [ECX]             ; 0054a39c
    MOV dword ptr [EDX + 0xc],ECX       ; 0054a39e
    MOV EAX,dword ptr [EAX + 0x8]       ; 0054a3a1
    ADD ESP,0x4                         ; 0054a3a4
    MOV dword ptr [EDX + 0x10],EAX      ; 0054a3a7
    MOV EAX,EBX                         ; 0054a3aa
    POP EBX                             ; 0054a3ac
    RET                                 ; 0054a3ad

