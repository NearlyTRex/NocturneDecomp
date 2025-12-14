; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CAmmoBox * core_ammobox.cpp_CAmmoBox_ctor_FUN_004115a0(CAmmoBox * this_ptr)
;
; Parameters:
; CAmmoBox *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_ammobox.cpp_constructor_FUN_00411560 at 0041157a
;
; Referenced Globals:
;   TerminatedCString s_ammobag_kfm_00614bc0
;   TerminatedCString s_CGun_00614bcc
;   undefined4 s_Gun_00614bcd
;   undefined4 s_un_00614bce
;   undefined4 s_n_00614bcf
;   CDemonActor_vtable g_CAmmoBoxVTable
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004115a0
        ;   Label: core_ammobox.cpp_CAmmoBox_ctor_FUN_004115a0
    PUSH ESI                            ; 004115a1
    PUSH EDI                            ; 004115a2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004115a3
    PUSH EBX                            ; 004115a7
    CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0 ; 004115a8
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_004088b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004115ad
    ADD EAX,0x158                       ; 004115b0
    PUSH EAX                            ; 004115b5
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0 ; 004115b6
        ;   XREF to: 00478ce0 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004115bb
    LEA EBX,[EAX + 0xfffffea8]          ; 004115be
    PUSH 0x614bc0                       ; 004115c4 | = "ammobag.kfm"
    LEA EAX,[EBX + 0x158]               ; 004115c9
    PUSH EAX                            ; 004115cf
    MOV dword ptr [EBX + 0x154],0x659ad4 ; 004115d0 | g_CAmmoBoxVTable
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 004115da
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004115df
    MOV ESI,0x614bcc                    ; 004115e2 | = "CGun"
    LEA EDI,[EBX + 0x2d4]               ; 004115e7
    PUSH EDI                            ; 004115ed
    MOV AL,byte ptr [ESI]               ; 004115ee | = "CGun" | s_un_00614bce
        ;   Label: LAB_004115ee
    MOV byte ptr [EDI],AL               ; 004115f0
    CMP AL,0x0                          ; 004115f2
    JZ 0x00411606                       ; 004115f4
        ;   XREF to: 00411606 (CONDITIONAL_JUMP)  ; LAB_00411606
    MOV AL,byte ptr [ESI + 0x1]         ; 004115f6 | s_Gun_00614bcd | s_n_00614bcf
    ADD ESI,0x2                         ; 004115f9
    MOV byte ptr [EDI + 0x1],AL         ; 004115fc
    ADD EDI,0x2                         ; 004115ff
    CMP AL,0x0                          ; 00411602
    JNZ 0x004115ee                      ; 00411604
        ;   XREF to: 004115ee (CONDITIONAL_JUMP)  ; LAB_004115ee
    POP EDI                             ; 00411606
        ;   Label: LAB_00411606
    MOV dword ptr [EBX + 0x314],0x14    ; 00411607
    MOV dword ptr [EBX + 0x318],0x0     ; 00411611
    MOV dword ptr [EBX + 0x31c],0x0     ; 0041161b
    MOV dword ptr [EBX + 0x320],0x0     ; 00411625
    MOV dword ptr [EBX + 0x324],0x0     ; 0041162f
    MOV byte ptr [EBX + 0x328],0x0      ; 00411639
    MOV EAX,EBX                         ; 00411640
    MOV dword ptr [EBX + 0x348],0x0     ; 00411642
    POP EDI                             ; 0041164c
    POP ESI                             ; 0041164d
    POP EBX                             ; 0041164e
    RET                                 ; 0041164f

