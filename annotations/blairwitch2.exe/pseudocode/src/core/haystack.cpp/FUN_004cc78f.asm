; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_haystack_cpp_FUN_004cc78f(void)
;
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cc78f
        ;   Label: core_haystack.cpp_FUN_004cc78f
    ADD AL,byte ptr [EAX]               ; 004cc790
    ADD byte ptr [EAX],AL               ; 004cc792
    ADD byte ptr [EAX],AL               ; 004cc794
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0 ; 004cc796
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0(CDeformableModelInstance * this_ptr, char * model_name)
    LEA EAX,[EBX + 0x25648]             ; 004cc79b
    MOV dword ptr [EBX + 0x25654],0x3f800000 ; 004cc7a1
    MOV dword ptr [EAX + 0x8],0x0       ; 004cc7ab
    ADD ESP,0x8                         ; 004cc7b2
    MOV EDX,dword ptr [EAX + 0x8]       ; 004cc7b5
    MOV dword ptr [EAX + 0x4],EDX       ; 004cc7b8
    MOV EDX,dword ptr [EAX + 0x4]       ; 004cc7bb
    MOV dword ptr [EAX],EDX             ; 004cc7be
    MOV EAX,EBX                         ; 004cc7c0
    POP EBX                             ; 004cc7c2
    RET                                 ; 004cc7c3

