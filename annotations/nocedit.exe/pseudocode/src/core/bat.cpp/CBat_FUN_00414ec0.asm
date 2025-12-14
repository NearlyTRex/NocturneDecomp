; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_bat.cpp_CBat_FUN_00414ec0(CBat * this_ptr)
;
; Parameters:
; CBat *           Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_data_s_00615417
;
; Called Functions:
;   core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
;   core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
;   crt_stdio.c_fprintf_FUN_005fe6d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00414ec0
        ;   Label: core_bat.cpp_CBat_FUN_00414ec0
    PUSH ESI                            ; 00414ec1
    MOV EBX,dword ptr [ESP + 0xc]       ; 00414ec2
    MOV ESI,dword ptr [ESP + 0x10]      ; 00414ec6
    PUSH ESI                            ; 00414eca
    PUSH EBX                            ; 00414ecb
    CALL core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0 ; 00414ecc
        ;   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0(CDemonActor * this_ptr, FILE * file_handle)
    ADD ESP,0x8                         ; 00414ed1
    PUSH ESI                            ; 00414ed4
    LEA EAX,[EBX + 0x188]               ; 00414ed5
    PUSH EAX                            ; 00414edb
    CALL core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0 ; 00414edc
        ;   XREF to: 0047edd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0(CKeyFramedModelInstance * this_ptr, FILE * file_handle)
    ADD ESP,0x8                         ; 00414ee1
    LEA EAX,[EBX + 0x158]               ; 00414ee4
    PUSH EAX                            ; 00414eea
    PUSH 0x615417                       ; 00414eeb | = "data\\%s\n"
    PUSH ESI                            ; 00414ef0
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00414ef1
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0xc                         ; 00414ef6
    POP ESI                             ; 00414ef9
    POP EBX                             ; 00414efa
    RET                                 ; 00414efb

