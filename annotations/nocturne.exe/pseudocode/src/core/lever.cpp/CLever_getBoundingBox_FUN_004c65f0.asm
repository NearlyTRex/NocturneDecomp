; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_lever_cpp_CLever_getBoundingBox_FUN_004c65f0(CLever *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CLever *         Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c65f0
        ;   Label: core_lever.cpp_CLever_getBoundingBox_FUN_004c65f0
    MOV EBX,dword ptr [ESP + 0xc]       ; 004c65f1
    MOV EAX,dword ptr [ESP + 0x8]       ; 004c65f5
    ADD EAX,0x150                       ; 004c65f9
    PUSH EAX                            ; 004c65fe
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530 ; 004c65ff
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(CKeyFramedModelInstance * this_ptr)
    MOV EAX,dword ptr [EAX + 0x350]     ; 004c6604
    MOV EDX,dword ptr [EAX]             ; 004c660a
    LEA ECX,[EAX + 0x4]                 ; 004c660c
    MOV dword ptr [EBX],EDX             ; 004c660f
    LEA EDX,[EBX + 0x4]                 ; 004c6611
    MOV ECX,dword ptr [ECX]             ; 004c6614
    MOV dword ptr [EDX],ECX             ; 004c6616
    LEA ECX,[EAX + 0x8]                 ; 004c6618
    MOV ECX,dword ptr [ECX]             ; 004c661b
    MOV dword ptr [EDX + 0x4],ECX       ; 004c661d
    MOV ECX,dword ptr [EAX + 0xc]       ; 004c6620
    ADD EAX,0xc                         ; 004c6623
    MOV dword ptr [EDX + 0x8],ECX       ; 004c6626
    LEA ECX,[EAX + 0x4]                 ; 004c6629
    MOV ECX,dword ptr [ECX]             ; 004c662c
    MOV dword ptr [EDX + 0xc],ECX       ; 004c662e
    MOV EAX,dword ptr [EAX + 0x8]       ; 004c6631
    ADD ESP,0x4                         ; 004c6634
    MOV dword ptr [EDX + 0x10],EAX      ; 004c6637
    MOV EAX,EBX                         ; 004c663a
    POP EBX                             ; 004c663c
    RET                                 ; 004c663d

