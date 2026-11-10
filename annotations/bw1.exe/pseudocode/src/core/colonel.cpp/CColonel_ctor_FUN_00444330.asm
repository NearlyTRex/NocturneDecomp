; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CColonel * __cdecl core_colonel_cpp_CColonel_ctor_FUN_00444330(CColonel *this_ptr)
;
; Parameters:
; CColonel *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_colonel.cpp_factoryFuncColonel_FUN_00444300 at 00444313
;
; Called Functions:
;   core_hero.cpp_CHero_ctor_FUN_004ea830
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00444330
        ;   Label: core_colonel.cpp_CColonel_ctor_FUN_00444330
    MOV EDX,dword ptr [ESP + 0x8]       ; 00444331
    PUSH EDX                            ; 00444335
    CALL core_hero.cpp_CHero_ctor_FUN_004ea830 ; 00444336
        ;   XREF to: 004ea830 (UNCONDITIONAL_CALL)  ; CHero * core_hero.cpp_CHero_ctor_FUN_004ea830(CHero * this_ptr)
    MOV EBX,EAX                         ; 0044433b
    ADD EAX,0x158                       ; 0044433d
    ADD ESP,0x4                         ; 00444342
    MOV dword ptr [EAX + -0x4],0x5fdbe4 ; 00444345
    PUSH 0x5d6b78                       ; 0044434c
    MOV dword ptr [EAX + 0x1fe54],0x0   ; 00444351
    PUSH EAX                            ; 0044435b
    MOV dword ptr [EAX + 0x1fe58],0x0   ; 0044435c
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50 ; 00444366
        ;   XREF to: 00569f50 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50(CDeformableModelInstance * this_ptr, char * model_name)
    LEA EAX,[EBX + 0x1ffb4]             ; 0044436b
    MOV dword ptr [EBX + 0x1ffc0],0x3f800000 ; 00444371
    MOV dword ptr [EAX + 0x8],0x0       ; 0044437b
    ADD ESP,0x8                         ; 00444382
    MOV EDX,dword ptr [EAX + 0x8]       ; 00444385
    MOV dword ptr [EAX + 0x4],EDX       ; 00444388
    MOV EDX,dword ptr [EAX + 0x4]       ; 0044438b
    MOV dword ptr [EAX],EDX             ; 0044438e
    MOV EAX,EBX                         ; 00444390
    POP EBX                             ; 00444392
    RET                                 ; 00444393

