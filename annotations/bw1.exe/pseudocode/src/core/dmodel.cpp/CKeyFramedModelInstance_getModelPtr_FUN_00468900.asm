; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CKeyFramedModel * __cdecl core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(CKeyFramedModelInstance *this_ptr)
;
; Parameters:
; CKeyFramedModelInstance * Stack[0x4]:4   this_ptr
;
; XREF[88]:
;   core_actor.cpp_FUN_00409170 at 00409567
;   core_ammo.cpp_FUN_0040dd00 at 0040dd15
;   core_ammobox.cpp_FUN_0040e320 at 0040e381
;   core_ammobox.cpp_FUN_0040e3c0 at 0040e3d5
;   core_anvil.cpp_FUN_0040e8f0 at 0040e905
;   core_backgnd.cpp_FUN_0040f010 at 0040f025
;   core_backgnd.cpp_FUN_0040f0e0 at 0040f0f9
;   core_bat.cpp_FUN_00410d80 at 00410e70
;   core_bat.cpp_FUN_00411000 at 00411020
;   core_battery.cpp_FUN_00414600 at 00414615
;   ... and 78 more
;
; Referenced Globals:
;   TerminatedCString s_core_dmodel_cpp_005d97fe
;   TerminatedCString s_Tried_to_do_something_wi_005d9811
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00468900
        ;   Label: core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
    MOV EBX,dword ptr [ESP + 0x8]       ; 00468901
    CMP dword ptr [EBX + 0x178],0x0     ; 00468905
    JZ 0x00468916                       ; 0046890c
        ;   XREF to: 00468916 (CONDITIONAL_JUMP)  ; LAB_00468916
    MOV EAX,dword ptr [EBX + 0x178]     ; 0046890e
    POP EBX                             ; 00468914
    RET                                 ; 00468915
    PUSH ESI                            ; 00468916
        ;   Label: LAB_00468916
    LEA EAX,[EBX + 0x78]                ; 00468917
    PUSH EAX                            ; 0046891a
    MOV ECX,0x5d97fe                    ; 0046891b | = "..\\core\\dmodel.cpp"
    MOV ESI,0x52d                       ; 00468920
    PUSH 0x5d9811                       ; 00468925 | = "Tried to do something with model %s, ..."
    MOV dword ptr [0x01d1d400],ECX      ; 0046892a | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 00468930 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00468936
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 0046893b
    POP ESI                             ; 0046893e
    MOV EAX,dword ptr [EBX + 0x178]     ; 0046893f
    POP EBX                             ; 00468945
    RET                                 ; 00468946

