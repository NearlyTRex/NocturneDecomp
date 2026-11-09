; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_colonel_cpp_FUN_0043563f(void)
;
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043563f
        ;   Label: core_colonel.cpp_FUN_0043563f
    ADD AL,byte ptr [EAX]               ; 00435640
    ADD byte ptr [EAX],AL               ; 00435642
    ADD byte ptr [EAX],AL               ; 00435644
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0 ; 00435646
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0(CDeformableModelInstance * this_ptr, char * model_name)
    LEA EAX,[EBX + 0x25648]             ; 0043564b
    MOV dword ptr [EBX + 0x25654],0x3f800000 ; 00435651
    MOV dword ptr [EAX + 0x8],0x0       ; 0043565b
    ADD ESP,0x8                         ; 00435662
    MOV EDX,dword ptr [EAX + 0x8]       ; 00435665
    MOV dword ptr [EAX + 0x4],EDX       ; 00435668
    MOV EDX,dword ptr [EAX + 0x4]       ; 0043566b
    MOV dword ptr [EAX],EDX             ; 0043566e
    MOV EAX,EBX                         ; 00435670
    POP EBX                             ; 00435672
    RET                                 ; 00435673

