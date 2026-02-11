; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_morph_cpp_FUN_0052b640(void)
;
;
; XREF[3]:
;   core_biggs.cpp_CBiggs_renderOpaque_FUN_004189b0 at 00418a43
;   core_succubus.cpp_CSuccubus_renderOpaque_FUN_005c7590 at 005c76c2
;   core_vampboss.cpp_CVampireBoss_renderOpaque_FUN_005e6da0 at 005e6ec8
;
; Called Functions:
;   core_morph.cpp_CMorphModel_FUN_0052aa80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052b640
        ;   Label: core_morph.cpp_FUN_0052b640
    PUSH ESI                            ; 0052b641
    MOV EDX,dword ptr [ESP + 0x18]      ; 0052b642
    PUSH EDX                            ; 0052b646
    MOV EDX,dword ptr [ESP + 0x14]      ; 0052b647
    LEA EAX,[EDX*0x4 + 0x0]             ; 0052b64b
    MOV ECX,dword ptr [ESP + 0x18]      ; 0052b652
    SUB EAX,EDX                         ; 0052b656
    MOV EBX,dword ptr [ESP + 0x20]      ; 0052b658
    SHL EAX,0x6                         ; 0052b65c
    MOV ESI,dword ptr [ESP + 0x10]      ; 0052b65f
    ADD EAX,EDX                         ; 0052b663
    PUSH ECX                            ; 0052b665
    SHL EAX,0x3                         ; 0052b666
    PUSH EBX                            ; 0052b669
    ADD EAX,ESI                         ; 0052b66a
    PUSH EAX                            ; 0052b66c
    CALL core_morph.cpp_CMorphModel_FUN_0052aa80 ; 0052b66d
        ;   XREF to: 0052aa80 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_FUN_0052aa80(CMorphModel * this_ptr)
    ADD ESP,0x10                        ; 0052b672
    POP ESI                             ; 0052b675
    POP EBX                             ; 0052b676
    RET                                 ; 0052b677

