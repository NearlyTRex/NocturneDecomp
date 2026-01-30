; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl float * __cdecl core_platfrm_cpp_FUN_0054db70(void)
;
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054db70
        ;   Label: core_platfrm.cpp_FUN_0054db70
    MOV EBX,dword ptr [ESP + 0xc]       ; 0054db71
    MOV EAX,dword ptr [ESP + 0x8]       ; 0054db75
    ADD EAX,0x158                       ; 0054db79
    PUSH EAX                            ; 0054db7e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 0054db7f
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    MOV EAX,dword ptr [EAX + 0x5690]    ; 0054db84
    MOV EDX,dword ptr [EAX]             ; 0054db8a
    LEA ECX,[EAX + 0x4]                 ; 0054db8c
    MOV dword ptr [EBX],EDX             ; 0054db8f
    LEA EDX,[EBX + 0x4]                 ; 0054db91
    MOV ECX,dword ptr [ECX]             ; 0054db94
    MOV dword ptr [EDX],ECX             ; 0054db96
    LEA ECX,[EAX + 0x8]                 ; 0054db98
    MOV ECX,dword ptr [ECX]             ; 0054db9b
    MOV dword ptr [EDX + 0x4],ECX       ; 0054db9d
    MOV ECX,dword ptr [EAX + 0xc]       ; 0054dba0
    ADD EAX,0xc                         ; 0054dba3
    MOV dword ptr [EDX + 0x8],ECX       ; 0054dba6
    LEA ECX,[EAX + 0x4]                 ; 0054dba9
    MOV ECX,dword ptr [ECX]             ; 0054dbac
    MOV dword ptr [EDX + 0xc],ECX       ; 0054dbae
    MOV EAX,dword ptr [EAX + 0x8]       ; 0054dbb1
    ADD ESP,0x4                         ; 0054dbb4
    MOV dword ptr [EDX + 0x10],EAX      ; 0054dbb7
    MOV EAX,EBX                         ; 0054dbba
    POP EBX                             ; 0054dbbc
    RET                                 ; 0054dbbd

