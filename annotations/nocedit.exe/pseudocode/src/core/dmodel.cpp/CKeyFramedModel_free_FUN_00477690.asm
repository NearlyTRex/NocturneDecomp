; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_dmodel_cpp_CKeyFramedModel_free_FUN_00477690(CKeyFramedModel *this_ptr)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   this_ptr
;
; XREF[11]:
;   core_dmodel.cpp_CKeyFramedModel_allocate_FUN_00477bf0 at 00477d34
;   core_dmodel.cpp_CKeyFramedModel_dtor_FUN_00476d90 at 00476d96
;   core_dmodel.cpp_CKeyFramedModel_importFromDSE_FUN_0047ea10 at 0047ea1a
;   core_dmodel.cpp_CKeyFramedModel_importFromS3D_FUN_00479330 at 00479719
;   core_dmodel.cpp_CKeyFramedModel_load_FUN_00476db0 at 00476db9
;   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 at 0047da20
;   core_dmodel.cpp_freeAllModels_FUN_00478cb0 at 00478cbe
;   core_level.cpp_CLevelLoader_cleanup_FUN_00504720 at 00504747
;   core_moon.cpp_CMoon_free_FUN_00529ce0 at 00529d08
;   core_set.cpp_CDemonSet_clear_FUN_005693c0 at 005693c7
;   ... and 1 more
;
; Referenced Globals:
;   TerminatedCString s_core_dmodel_cpp_0061f534
;   TerminatedCString s_core_dmodel_cpp_0061f547
;   TerminatedCString s_core_dmodel_cpp_0061f55a
;   TerminatedCString s_core_dmodel_cpp_0061f56d
;   TerminatedCString s_core_dmodel_cpp_0061f580
;   TerminatedCString s_core_dmodel_cpp_0061f593
;   TerminatedCString s_core_dmodel_cpp_0061f5a6
;   char* g_CurrentDebugFilename = 0067d200
;   int g_CurrentDebugLine
;
; Called Functions:
;   crt_memory.c_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00477690
        ;   Label: core_dmodel.cpp_CKeyFramedModel_free_FUN_00477690
    PUSH ESI                            ; 00477691
    PUSH EDI                            ; 00477692
    PUSH EBP                            ; 00477693
    MOV EBX,dword ptr [ESP + 0x14]      ; 00477694
    MOV EDX,0x61f534                    ; 00477698 | = "..\\core\\dmodel.cpp"
    MOV ECX,0x1a5                       ; 0047769d
    MOV EDI,0x61f547                    ; 004776a2 | = "..\\core\\dmodel.cpp"
    MOV ESI,dword ptr [EBX + 0x10c]     ; 004776a7
    MOV EBP,0x1a8                       ; 004776ad
    PUSH ESI                            ; 004776b2
    MOV dword ptr [0x0067d20c],EDX      ; 004776b3 | g_CurrentDebugFilename
    MOV dword ptr [0x02f0d944],ECX      ; 004776b9 | g_CurrentDebugLine
    CALL crt_memory.c_free_FUN_005fe659 ; 004776bf
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 004776c4
    MOV dword ptr [0x0067d20c],EDI      ; 004776c7 | g_CurrentDebugFilename
    MOV dword ptr [0x02f0d944],EBP      ; 004776cd | g_CurrentDebugLine
    MOV EAX,dword ptr [EBX + 0x108]     ; 004776d3
    MOV dword ptr [EBX + 0x10c],0x0     ; 004776d9
    PUSH EAX                            ; 004776e3
    MOV EDI,0x61f56d                    ; 004776e4 | = "..\\core\\dmodel.cpp"
    MOV EBP,0x1ae                       ; 004776e9
    CALL crt_memory.c_free_FUN_005fe659 ; 004776ee
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005fe659(void * ptr)
    MOV EDX,0x61f55a                    ; 004776f3 | = "..\\core\\dmodel.cpp"
    MOV ECX,0x1ab                       ; 004776f8
    ADD ESP,0x4                         ; 004776fd
    MOV ESI,dword ptr [EBX + 0x114]     ; 00477700
    MOV dword ptr [EBX + 0x108],0x0     ; 00477706
    PUSH ESI                            ; 00477710
    MOV dword ptr [0x0067d20c],EDX      ; 00477711 | g_CurrentDebugFilename
    MOV dword ptr [0x02f0d944],ECX      ; 00477717 | g_CurrentDebugLine
    CALL crt_memory.c_free_FUN_005fe659 ; 0047771d
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 00477722
    MOV dword ptr [0x0067d20c],EDI      ; 00477725 | g_CurrentDebugFilename
    MOV dword ptr [0x02f0d944],EBP      ; 0047772b | g_CurrentDebugLine
    MOV EAX,dword ptr [EBX + 0x118]     ; 00477731
    MOV dword ptr [EBX + 0x114],0x0     ; 00477737
    PUSH EAX                            ; 00477741
    MOV EDI,0x61f593                    ; 00477742 | = "..\\core\\dmodel.cpp"
    MOV EBP,0x1b4                       ; 00477747
    CALL crt_memory.c_free_FUN_005fe659 ; 0047774c
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005fe659(void * ptr)
    MOV EDX,0x61f580                    ; 00477751 | = "..\\core\\dmodel.cpp"
    MOV ECX,0x1b1                       ; 00477756
    ADD ESP,0x4                         ; 0047775b
    MOV ESI,dword ptr [EBX + 0x11c]     ; 0047775e
    MOV dword ptr [EBX + 0x118],0x0     ; 00477764
    PUSH ESI                            ; 0047776e
    MOV dword ptr [0x0067d20c],EDX      ; 0047776f | g_CurrentDebugFilename
    MOV dword ptr [0x02f0d944],ECX      ; 00477775 | g_CurrentDebugLine
    CALL crt_memory.c_free_FUN_005fe659 ; 0047777b
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 00477780
    MOV dword ptr [0x0067d20c],EDI      ; 00477783 | g_CurrentDebugFilename
    MOV dword ptr [0x02f0d944],EBP      ; 00477789 | g_CurrentDebugLine
    MOV EAX,dword ptr [EBX + 0x5690]    ; 0047778f
    MOV dword ptr [EBX + 0x11c],0x0     ; 00477795
    TEST EAX,EAX                        ; 0047779f
    JNZ 0x0047782f                      ; 004777a1
        ;   XREF to: 0047782f (CONDITIONAL_JUMP)  ; LAB_0047782f
    MOV EAX,0x61f5a6                    ; 004777a7 | = "..\\core\\dmodel.cpp"
        ;   Label: LAB_004777a7
    MOV EDX,0x1b7                       ; 004777ac
    MOV dword ptr [EBX + 0x5690],0x0    ; 004777b1
    MOV [0x0067d20c],EAX                ; 004777bb | g_CurrentDebugFilename
    MOV EAX,dword ptr [EBX + 0x5698]    ; 004777c0
    MOV dword ptr [0x02f0d944],EDX      ; 004777c6 | g_CurrentDebugLine
    TEST EAX,EAX                        ; 004777cc
    JNZ 0x00477840                      ; 004777ce
        ;   XREF to: 00477840 (CONDITIONAL_JUMP)  ; LAB_00477840
    MOV dword ptr [EBX + 0x104],0x0     ; 004777d0
        ;   Label: LAB_004777d0
    MOV dword ptr [EBX + 0x110],0x0     ; 004777da
    MOV dword ptr [EBX + 0x120],0x0     ; 004777e4
    MOV dword ptr [EBX + 0x5584],0x0    ; 004777ee
    MOV dword ptr [EBX + 0x100],0x0     ; 004777f8
    MOV dword ptr [EBX + 0x5694],0x0    ; 00477802
    MOV dword ptr [EBX + 0x569c],0x0    ; 0047780c
    MOV dword ptr [EBX + 0x56a0],0x0    ; 00477816
    MOV dword ptr [EBX + 0x5698],0x0    ; 00477820
    POP EBP                             ; 0047782a
    POP EDI                             ; 0047782b
    POP ESI                             ; 0047782c
    POP EBX                             ; 0047782d
    RET                                 ; 0047782e
    SUB EAX,0x4                         ; 0047782f
        ;   Label: LAB_0047782f
    PUSH EAX                            ; 00477832
    CALL crt_memory.c_free_FUN_005fe659 ; 00477833
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 00477838
    JMP 0x004777a7                      ; 0047783b
        ;   XREF to: 004777a7 (UNCONDITIONAL_JUMP)  ; LAB_004777a7
    SUB EAX,0x4                         ; 00477840
        ;   Label: LAB_00477840
    PUSH EAX                            ; 00477843
    CALL crt_memory.c_free_FUN_005fe659 ; 00477844
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 00477849
    JMP 0x004777d0                      ; 0047784c
        ;   XREF to: 004777d0 (UNCONDITIONAL_JUMP)  ; LAB_004777d0

