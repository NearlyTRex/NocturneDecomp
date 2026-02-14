; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_addFilesToExtract_FUN_0050b7d0(CMansionPuzzleCircle *this_ptr,_FILE *file_handle)
;
; Parameters:
; CMansionPuzzleCircle * Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
;
; Called Functions:
;   core_actor.cpp_CDemonActor_addFilesToExtract_FUN_0040cfd0
;   core_dmodel.cpp_CKeyFramedModelInstance_addFilesToExtract_FUN_0047edd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050b7d0
        ;   Label: core_manpuz.cpp_CMansionPuzzleCircle_addFilesToExtract_FUN_0050b7d0
    PUSH ESI                            ; 0050b7d1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0050b7d2
    MOV ESI,dword ptr [ESP + 0x10]      ; 0050b7d6
    PUSH ESI                            ; 0050b7da
    PUSH EBX                            ; 0050b7db
    CALL core_actor.cpp_CDemonActor_addFilesToExtract_FUN_0040cfd0 ; 0050b7dc
        ;   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_addFilesToExtract_FUN_0040cfd0(CDemonActor * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 0050b7e1
    PUSH ESI                            ; 0050b7e4
    LEA EAX,[EBX + 0x158]               ; 0050b7e5
    PUSH EAX                            ; 0050b7eb
    CALL core_dmodel.cpp_CKeyFramedModelInstance_addFilesToExtract_FUN_0047edd0 ; 0050b7ec
        ;   XREF to: 0047edd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_addFilesToExtract_FUN_0047edd0(CKeyFramedModelInstance * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 0050b7f1
    PUSH ESI                            ; 0050b7f4
    LEA EAX,[EBX + 0x2d4]               ; 0050b7f5
    PUSH EAX                            ; 0050b7fb
    CALL core_dmodel.cpp_CKeyFramedModelInstance_addFilesToExtract_FUN_0047edd0 ; 0050b7fc
        ;   XREF to: 0047edd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_addFilesToExtract_FUN_0047edd0(CKeyFramedModelInstance * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 0050b801
    POP ESI                             ; 0050b804
    POP EBX                             ; 0050b805
    RET                                 ; 0050b806

