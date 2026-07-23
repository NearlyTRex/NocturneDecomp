; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_svetlana_cpp_CSvetlana_ctor_FUN_005419b0(undefined4 param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_svetlana_dfm_005961f3
;   undefined1* PTR_core_svetlana.cpp_CSvetlana_setup_FUN_00541a40_005a2a74 = 00541a40
;
; Called Functions:
;   core_cloth.cpp_CCloth_ctor_FUN_00435100
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0
;   FUN_004b46d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005419b0
        ;   Label: core_svetlana.cpp_CSvetlana_ctor_FUN_005419b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005419b1
    PUSH EBX                            ; 005419b5
    CALL FUN_004b46d0                   ; 005419b6
        ;   XREF to: 004b46d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b46d0()
    ADD ESP,0x4                         ; 005419bb
    ADD EAX,0x1fa44                     ; 005419be
    PUSH EAX                            ; 005419c3
    CALL core_cloth.cpp_CCloth_ctor_FUN_00435100 ; 005419c4
        ;   XREF to: 00435100 (UNCONDITIONAL_CALL)  ; undefined core_cloth.cpp_CCloth_ctor_FUN_00435100()
    ADD ESP,0x4                         ; 005419c9
    ADD EAX,0x3ab30                     ; 005419cc
    PUSH EAX                            ; 005419d1
    CALL core_cloth.cpp_CCloth_ctor_FUN_00435100 ; 005419d2
        ;   XREF to: 00435100 (UNCONDITIONAL_CALL)  ; undefined core_cloth.cpp_CCloth_ctor_FUN_00435100()
    ADD ESP,0x4                         ; 005419d7
    LEA EBX,[EAX + 0xfffa5a8c]          ; 005419da
    PUSH 0x5961f3                       ; 005419e0 | = "svetlana.dfm"
    MOV dword ptr [EBX + 0x14c],0x5a2a74 ; 005419e5 | PTR_core_svetlana.cpp_CSvetlana_setup_FUN_00541a40_005a2a74
    LEA EAX,[EBX + 0x150]               ; 005419ef
    MOV dword ptr [EBX + 0x1fa3c],0x0   ; 005419f5
    PUSH EAX                            ; 005419ff
    MOV dword ptr [EBX + 0x1fa40],0x0   ; 00541a00
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0 ; 00541a0a
        ;   XREF to: 0051e0c0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0()
    LEA EAX,[EBX + 0x950a8]             ; 00541a0f
    MOV dword ptr [EBX + 0x950b4],0x3f800000 ; 00541a15
    MOV dword ptr [EAX + 0x8],0x0       ; 00541a1f
    ADD ESP,0x8                         ; 00541a26
    MOV EDX,dword ptr [EAX + 0x8]       ; 00541a29
    MOV dword ptr [EAX + 0x4],EDX       ; 00541a2c
    MOV EDX,dword ptr [EAX + 0x4]       ; 00541a2f
    MOV dword ptr [EAX],EDX             ; 00541a32
    MOV EAX,EBX                         ; 00541a34
    POP EBX                             ; 00541a36
    RET                                 ; 00541a37

