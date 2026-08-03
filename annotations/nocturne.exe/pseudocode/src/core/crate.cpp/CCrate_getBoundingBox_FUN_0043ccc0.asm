; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * core_crate_cpp_CCrate_getBoundingBox_FUN_0043ccc0(int param_1,float *param_2)
;
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043ccc0
        ;   Label: core_crate.cpp_CCrate_getBoundingBox_FUN_0043ccc0
    MOV EBX,dword ptr [ESP + 0xc]       ; 0043ccc1
    MOV EAX,dword ptr [ESP + 0x8]       ; 0043ccc5
    ADD EAX,0x150                       ; 0043ccc9
    PUSH EAX                            ; 0043ccce
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530 ; 0043cccf
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(CKeyFramedModelInstance * this_ptr)
    MOV EAX,dword ptr [EAX + 0x350]     ; 0043ccd4
    MOV EDX,dword ptr [EAX]             ; 0043ccda
    LEA ECX,[EAX + 0x4]                 ; 0043ccdc
    MOV dword ptr [EBX],EDX             ; 0043ccdf
    LEA EDX,[EBX + 0x4]                 ; 0043cce1
    MOV ECX,dword ptr [ECX]             ; 0043cce4
    MOV dword ptr [EDX],ECX             ; 0043cce6
    LEA ECX,[EAX + 0x8]                 ; 0043cce8
    MOV ECX,dword ptr [ECX]             ; 0043cceb
    MOV dword ptr [EDX + 0x4],ECX       ; 0043cced
    MOV ECX,dword ptr [EAX + 0xc]       ; 0043ccf0
    ADD EAX,0xc                         ; 0043ccf3
    MOV dword ptr [EDX + 0x8],ECX       ; 0043ccf6
    LEA ECX,[EAX + 0x4]                 ; 0043ccf9
    MOV ECX,dword ptr [ECX]             ; 0043ccfc
    MOV dword ptr [EDX + 0xc],ECX       ; 0043ccfe
    MOV EAX,dword ptr [EAX + 0x8]       ; 0043cd01
    ADD ESP,0x4                         ; 0043cd04
    MOV dword ptr [EDX + 0x10],EAX      ; 0043cd07
    MOV EAX,EBX                         ; 0043cd0a
    POP EBX                             ; 0043cd0c
    RET                                 ; 0043cd0d

