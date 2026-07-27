; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_boxactor_cpp_CLightActor_ctor_FUN_0041f310(undefined4 param_1)
;
;
; XREF[1]:
;   core_boxactor.cpp_FUN_0041f2e0 at 0041f2f3
;
; Referenced Globals:
;   undefined1* PTR_core_boxactor.cpp_CLightActor_setup_FUN_0041f3a0_0059abb4 = 0041f3a0
;
; Called Functions:
;   core_boxactor.cpp_CBoxActor_ctor_FUN_0041e300
;   core_dlight.cpp_CDemonLight_ctor_FUN_0044e110
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0041f310
        ;   Label: core_boxactor.cpp_CLightActor_ctor_FUN_0041f310
    PUSH EAX                            ; 0041f314
    CALL core_boxactor.cpp_CBoxActor_ctor_FUN_0041e300 ; 0041f315
        ;   XREF to: 0041e300 (UNCONDITIONAL_CALL)  ; undefined core_boxactor.cpp_CBoxActor_ctor_FUN_0041e300()
    ADD ESP,0x4                         ; 0041f31a
    PUSH 0x100                          ; 0041f31d
    PUSH 0x100                          ; 0041f322
    ADD EAX,0x668                       ; 0041f327
    PUSH EAX                            ; 0041f32c
    CALL core_dlight.cpp_CDemonLight_ctor_FUN_0044e110 ; 0041f32d
        ;   XREF to: 0044e110 (UNCONDITIONAL_CALL)  ; undefined core_dlight.cpp_CDemonLight_ctor_FUN_0044e110()
    SUB EAX,0x668                       ; 0041f332
    MOV dword ptr [EAX + 0x14c],0x59abb4 ; 0041f337 | PTR_core_boxactor.cpp_CLightActor_setup_FUN_0041f3a0_0059abb4
    LEA EDX,[EAX + 0x3614]              ; 0041f341
    MOV dword ptr [EAX + 0x231c],0x1    ; 0041f347
    MOV dword ptr [EDX + 0x8],0x0       ; 0041f351
    MOV ECX,dword ptr [EDX + 0x8]       ; 0041f358
    MOV dword ptr [EDX + 0x4],ECX       ; 0041f35b
    MOV ECX,dword ptr [EDX + 0x4]       ; 0041f35e
    MOV dword ptr [EDX],ECX             ; 0041f361
    LEA EDX,[EAX + 0x3620]              ; 0041f363
    MOV dword ptr [EDX + 0x8],0x0       ; 0041f369
    MOV ECX,dword ptr [EDX + 0x8]       ; 0041f370
    MOV dword ptr [EDX + 0x4],ECX       ; 0041f373
    MOV ECX,dword ptr [EDX + 0x4]       ; 0041f376
    MOV dword ptr [EDX],ECX             ; 0041f379
    MOV dword ptr [EAX + 0x362c],0x0    ; 0041f37b
    ADD ESP,0xc                         ; 0041f385
    MOV dword ptr [EAX + 0x664],0x1     ; 0041f388
    RET                                 ; 0041f392

