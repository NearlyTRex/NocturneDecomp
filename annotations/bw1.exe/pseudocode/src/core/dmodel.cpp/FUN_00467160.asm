; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dmodel_cpp_FUN_00467160(int param_1)
;
;
; XREF[7]:
;   core_dmodel.cpp_CKeyFramedModel_dtor_FUN_00466880 at 00466886
;   core_dmodel.cpp_CKeyFramedModel_load_FUN_004668a0 at 004668a9
;   core_dmodel.cpp_FUN_00467650 at 00467659
;   core_dmodel.cpp_freeAllModels_FUN_00468830 at 0046883e
;   core_level.cpp_CLevelLoader_cleanup_FUN_004fefa0 at 004fefc7
;   core_moon.cpp_FUN_00521d50 at 00521d5f
;   core_set.cpp_CDemonSet_clear_FUN_0054d370 at 0054d377
;
; Called Functions:
;   crt_unknown.c_FUN_005c0336
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00467160
        ;   Label: core_dmodel.cpp_FUN_00467160
    PUSH ESI                            ; 00467161
    PUSH EDI                            ; 00467162
    PUSH EBP                            ; 00467163
    MOV EBX,dword ptr [ESP + 0x14]      ; 00467164
    MOV EDX,dword ptr [EBX + 0x10c]     ; 00467168
    PUSH EDX                            ; 0046716e
    CALL crt_unknown.c_FUN_005c0336     ; 0046716f
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 00467174
    MOV ECX,dword ptr [EBX + 0x108]     ; 00467177
    PUSH ECX                            ; 0046717d
    MOV dword ptr [EBX + 0x10c],0x0     ; 0046717e
    CALL crt_unknown.c_FUN_005c0336     ; 00467188
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 0046718d
    MOV ESI,dword ptr [EBX + 0x114]     ; 00467190
    PUSH ESI                            ; 00467196
    MOV dword ptr [EBX + 0x108],0x0     ; 00467197
    CALL crt_unknown.c_FUN_005c0336     ; 004671a1
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 004671a6
    MOV EDI,dword ptr [EBX + 0x118]     ; 004671a9
    PUSH EDI                            ; 004671af
    MOV dword ptr [EBX + 0x114],0x0     ; 004671b0
    CALL crt_unknown.c_FUN_005c0336     ; 004671ba
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 004671bf
    MOV EBP,dword ptr [EBX + 0x11c]     ; 004671c2
    PUSH EBP                            ; 004671c8
    MOV dword ptr [EBX + 0x118],0x0     ; 004671c9
    CALL crt_unknown.c_FUN_005c0336     ; 004671d3
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 004671d8
    MOV EAX,dword ptr [EBX + 0x350]     ; 004671db
    PUSH EAX                            ; 004671e1
    MOV dword ptr [EBX + 0x11c],0x0     ; 004671e2
    CALL crt_unknown.c_FUN_005c0336     ; 004671ec
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 004671f1
    MOV EDX,dword ptr [EBX + 0x358]     ; 004671f4
    PUSH EDX                            ; 004671fa
    MOV dword ptr [EBX + 0x350],0x0     ; 004671fb
    CALL crt_unknown.c_FUN_005c0336     ; 00467205
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    MOV dword ptr [EBX + 0x358],0x0     ; 0046720a
    MOV dword ptr [EBX + 0x104],0x0     ; 00467214
    MOV dword ptr [EBX + 0x110],0x0     ; 0046721e
    MOV dword ptr [EBX + 0x120],0x0     ; 00467228
    MOV dword ptr [EBX + 0x244],0x0     ; 00467232
    MOV dword ptr [EBX + 0x100],0x0     ; 0046723c
    MOV dword ptr [EBX + 0x354],0x0     ; 00467246
    MOV dword ptr [EBX + 0x35c],0x0     ; 00467250
    ADD ESP,0x4                         ; 0046725a
    MOV dword ptr [EBX + 0x360],0x0     ; 0046725d
    POP EBP                             ; 00467267
    POP EDI                             ; 00467268
    POP ESI                             ; 00467269
    POP EBX                             ; 0046726a
    RET                                 ; 0046726b

