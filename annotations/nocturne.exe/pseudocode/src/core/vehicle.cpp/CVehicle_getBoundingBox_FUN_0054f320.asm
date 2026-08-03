; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_vehicle_cpp_CVehicle_getBoundingBox_FUN_0054f320(CVehicle *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CVehicle *       Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054f320
        ;   Label: core_vehicle.cpp_CVehicle_getBoundingBox_FUN_0054f320
    MOV EBX,dword ptr [ESP + 0xc]       ; 0054f321
    MOV EAX,dword ptr [ESP + 0x8]       ; 0054f325
    ADD EAX,0x150                       ; 0054f329
    PUSH EAX                            ; 0054f32e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530 ; 0054f32f
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(CKeyFramedModelInstance * this_ptr)
    MOV EAX,dword ptr [EAX + 0x350]     ; 0054f334
    MOV EDX,dword ptr [EAX]             ; 0054f33a
    LEA ECX,[EAX + 0x4]                 ; 0054f33c
    MOV dword ptr [EBX],EDX             ; 0054f33f
    LEA EDX,[EBX + 0x4]                 ; 0054f341
    MOV ECX,dword ptr [ECX]             ; 0054f344
    MOV dword ptr [EDX],ECX             ; 0054f346
    LEA ECX,[EAX + 0x8]                 ; 0054f348
    MOV ECX,dword ptr [ECX]             ; 0054f34b
    MOV dword ptr [EDX + 0x4],ECX       ; 0054f34d
    MOV ECX,dword ptr [EAX + 0xc]       ; 0054f350
    ADD EAX,0xc                         ; 0054f353
    MOV dword ptr [EDX + 0x8],ECX       ; 0054f356
    LEA ECX,[EAX + 0x4]                 ; 0054f359
    MOV ECX,dword ptr [ECX]             ; 0054f35c
    MOV dword ptr [EDX + 0xc],ECX       ; 0054f35e
    MOV EAX,dword ptr [EAX + 0x8]       ; 0054f361
    ADD ESP,0x4                         ; 0054f364
    MOV dword ptr [EDX + 0x10],EAX      ; 0054f367
    MOV EAX,EBX                         ; 0054f36a
    POP EBX                             ; 0054f36c
    RET                                 ; 0054f36d

