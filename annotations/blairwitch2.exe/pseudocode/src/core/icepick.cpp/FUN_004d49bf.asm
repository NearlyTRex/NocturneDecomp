; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_icepick_cpp_FUN_004d49bf(void)
;
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d49bf
        ;   Label: core_icepick.cpp_FUN_004d49bf
    ADD AL,byte ptr [EAX]               ; 004d49c0
    ADD byte ptr [EAX],AL               ; 004d49c2
    ADD byte ptr [EAX],AL               ; 004d49c4
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0 ; 004d49c6
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0(CDeformableModelInstance * this_ptr, char * model_name)
    LEA EAX,[EBX + 0x25650]             ; 004d49cb
    MOV dword ptr [EBX + 0x2565c],0x3f800000 ; 004d49d1
    MOV dword ptr [EAX + 0x8],0x0       ; 004d49db
    MOV EDX,dword ptr [EAX + 0x8]       ; 004d49e2
    MOV dword ptr [EAX + 0x4],EDX       ; 004d49e5
    MOV EDX,dword ptr [EAX + 0x4]       ; 004d49e8
    MOV dword ptr [EAX],EDX             ; 004d49eb
    MOV dword ptr [EBX + 0x25660],0x0   ; 004d49ed
    ADD ESP,0x8                         ; 004d49f7
    MOV dword ptr [EBX + 0x25664],0x0   ; 004d49fa
    MOV EAX,EBX                         ; 004d4a04
    MOV dword ptr [EBX + 0x25a8],0x43960000 ; 004d4a06
    POP EBX                             ; 004d4a10
    RET                                 ; 004d4a11

