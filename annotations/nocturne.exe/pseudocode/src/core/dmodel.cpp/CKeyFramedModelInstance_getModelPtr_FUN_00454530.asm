; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(int param_1)
;
;
; XREF[79]:
;   FUN_0040f2b0 at 0040f302
;   FUN_0040f340 at 0040f34f
;   FUN_0040f860 at 0040f86f
;   FUN_004100a0 at 004100b9
;   FUN_00414f50 at 00414f5f
;   FUN_00415430 at 00415473
;   FUN_00415760 at 004157e9
;   FUN_0041ea00 at 0041ea10
;   FUN_0041eaf0 at 0041eb00
;   FUN_0041ebe0 at 0041ec01
;   ... and 69 more
;
; Referenced Globals:
;   string s_..\\core\\dmodel.cpp_0057cea8
;   string s_Tried_to_do_something_with_model_0057cebb
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00454530
        ;   Label: core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
    MOV EBX,dword ptr [ESP + 0x8]       ; 00454531
    CMP dword ptr [EBX + 0x178],0x0     ; 00454535
    JZ 0x00454546                       ; 0045453c
        ;   XREF to: 00454546 (CONDITIONAL_JUMP)  ; LAB_00454546
    MOV EAX,dword ptr [EBX + 0x178]     ; 0045453e
    POP EBX                             ; 00454544
    RET                                 ; 00454545
    PUSH ESI                            ; 00454546
        ;   Label: LAB_00454546
    LEA EAX,[EBX + 0x78]                ; 00454547
    PUSH EAX                            ; 0045454a
    MOV ECX,0x57cea8                    ; 0045454b | = "..\\core\\dmodel.cpp"
    MOV ESI,0x52d                       ; 00454550
    PUSH 0x57cebb                       ; 00454555 | = "Tried to do something with model %s, ..."
    MOV dword ptr [0x01cc4800],ECX      ; 0045455a | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 00454560 | DAT_01cc4804
    CALL FUN_004c8440                   ; 00454566
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x8                         ; 0045456b
    POP ESI                             ; 0045456e
    MOV EAX,dword ptr [EBX + 0x178]     ; 0045456f
    POP EBX                             ; 00454575
    RET                                 ; 00454576

